#include "include/TController.h"

/**
 * Symbol: Make__11TControllerSFv
 * Address: 00209e84
 */
void TController::Make() {
    /*
        209e84:	e1a0c00d 	mov	ip, sp
        209e88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        209e8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        209e90:	e3a00060 	mov	r0, #96	; 0x60
        209e94:	eb671227 	bl	1bce738 <$__nw(unsigned int)>
        209e98:	e1b04000 	movs	r4, r0
        209e9c:	0a000003 	beq	209eb0 <Make__11TControllerSFv+0x2c>
        209ea0:	e1a00004 	mov	r0, r4
        209ea4:	eb004ab6 	bl	21c984 <TRecObject::__ct(void)>
        209ea8:	e59f0010 	ldr	r0, [pc, #10]	; 209ec0 <Make__11TControllerSFv+0x3c>
        209eac:	e5840000 	str	r0, [r4]
        209eb0:	e1a00004 	mov	r0, r4
        209eb4:	eb655844 	bl	1b5ffcc <TController::$IController(void)>
        209eb8:	e1a00004 	mov	r0, r4
        209ebc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        209ec0:	0001b1a4 	andeq	fp, r1, r4, lsr #3
    */
}

/**
 * Symbol: TController::RegisterDomain(TDomain *)
 * Address: 00209f34
 */
TController::RegisterDomain(TDomain *) {
    /*
        209f34:	e1a0c00d 	mov	ip, sp
        209f38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        209f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        209f40:	e1a04000 	mov	r4, r0
        209f44:	e1a05001 	mov	r5, r1
        209f48:	e5810008 	str	r0, [r1, #8]	; fField8
        209f4c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        209f50:	e5901000 	ldr	r1, [r0]
        209f54:	e1a0e00f 	mov	lr, pc
        209f58:	e281f018 	add	pc, r1, #24	; 0x18
        209f5c:	e5805000 	str	r5, [r0]
        209f60:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        209f64:	e5901000 	ldr	r1, [r0]
        209f68:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        209f6c:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: TController::RegisterArbiter(TArbiter *)
 * Address: 00209f70
 */
TController::RegisterArbiter(TArbiter *) {
    /*
        209f70:	e5a01018 	str	r1, [r0, #24]!	; fField24
        209f74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TController::ClassifyInArea(TUnit *, TRecArea *)
 * Address: 00209f78
 */
TController::ClassifyInArea(TUnit *, TRecArea *) {
    /*
        209f78:	e1a0c00d 	mov	ip, sp
        209f7c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        209f80:	e24cb004 	sub	fp, ip, #4	; 0x4
        209f84:	e1a06000 	mov	r6, r0
        209f88:	e1a04001 	mov	r4, r1
        209f8c:	e1a05002 	mov	r5, r2
        209f90:	e1a00001 	mov	r0, r1
        209f94:	e5911000 	ldr	r1, [r1]
        209f98:	e1a0e00f 	mov	lr, pc
        209f9c:	e281f01c 	add	pc, r1, #28	; 0x1c
        209fa0:	e1a08000 	mov	r8, r0
        209fa4:	e3a07000 	mov	r7, #0	; 0x0
        209fa8:	e3500000 	cmp	r0, #0	; 0x0
        209fac:	9a00000b 	bls	209fe0 <TController::ClassifyInArea(TUnit *, TRecArea *)+0x68>
        209fb0:	e1a01007 	mov	r1, r7
        209fb4:	e1a00004 	mov	r0, r4
        209fb8:	e5942000 	ldr	r2, [r4]
        209fbc:	e1a0e00f 	mov	lr, pc
        209fc0:	e282f058 	add	pc, r2, #88	; 0x58
        209fc4:	e1a01000 	mov	r1, r0
        209fc8:	e1a02005 	mov	r2, r5
        209fcc:	e1a00006 	mov	r0, r6
        209fd0:	eb654785 	bl	1b5bdec <TController::$ClassifyInArea(TUnit *, TRecArea *)>
        209fd4:	e2877001 	add	r7, r7, #1	; 0x1
        209fd8:	e1570008 	cmp	r7, r8
        209fdc:	3afffff3 	bcc	209fb0 <TController::ClassifyInArea(TUnit *, TRecArea *)+0x38>
        209fe0:	e1a00005 	mov	r0, r5
        209fe4:	e3a02000 	mov	r2, #0	; 0x0
        209fe8:	e5941008 	ldr	r1, [r4, #8]	; fField8
        209fec:	e5946014 	ldr	r6, [r4, #20]	; fField20
        209ff0:	eb6553dc 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
        209ff4:	e1b07000 	movs	r7, r0
        209ff8:	15960020 	ldrne	r0, [r6, #32]	; fField32
        209ffc:	11300007 	teqne	r0, r7
        20a000:	0a000005 	beq	20a01c <TController::ClassifyInArea(TUnit *, TRecArea *)+0xa4>
        20a004:	e1a01007 	mov	r1, r7
        20a008:	e1a00006 	mov	r0, r6
        20a00c:	e5962000 	ldr	r2, [r6]
        20a010:	e1a0e00f 	mov	lr, pc
        20a014:	e282f030 	add	pc, r2, #48	; 0x30
        20a018:	e5867020 	str	r7, [r6, #32]	; fField32
        20a01c:	e1a00004 	mov	r0, r4
        20a020:	eb656c97 	bl	1b65284 <TUnit::$GetAreas(void)>
        20a024:	e1b08000 	movs	r8, r0
        20a028:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        20a02c:	e1a00004 	mov	r0, r4
        20a030:	e3a01000 	mov	r1, #0	; 0x0
        20a034:	eb6570b8 	bl	1b6631c <TUnit::$SetAreas(TAreaList *)>
        20a038:	eb655c19 	bl	1b610a4 <$Make__9TAreaListSFv>
        20a03c:	e1b07000 	movs	r7, r0
        20a040:	0a000012 	beq	20a090 <TController::ClassifyInArea(TUnit *, TRecArea *)+0x118>
        20a044:	e1a01005 	mov	r1, r5
        20a048:	e1a00007 	mov	r0, r7
        20a04c:	eb654344 	bl	1b5ad64 <TAreaList::$AddArea(TRecArea *)>
        20a050:	e3300000 	teq	r0, #0	; 0x0
        20a054:	1a000007 	bne	20a078 <TController::ClassifyInArea(TUnit *, TRecArea *)+0x100>
        20a058:	e1a01007 	mov	r1, r7
        20a05c:	e1a00004 	mov	r0, r4
        20a060:	eb6570ad 	bl	1b6631c <TUnit::$SetAreas(TAreaList *)>
        20a064:	e1a01004 	mov	r1, r4
        20a068:	e1a00006 	mov	r0, r6
        20a06c:	e5962000 	ldr	r2, [r6]
        20a070:	e1a0e00f 	mov	lr, pc
        20a074:	e282f014 	add	pc, r2, #20	; 0x14
        20a078:	e1a00004 	mov	r0, r4
        20a07c:	e3a01000 	mov	r1, #0	; 0x0
        20a080:	eb6570a5 	bl	1b6631c <TUnit::$SetAreas(TAreaList *)>
        20a084:	e1a00007 	mov	r0, r7
        20a088:	e1a0e00f 	mov	lr, pc
        20a08c:	e597f000 	ldr	pc, [r7]
        20a090:	e1a01008 	mov	r1, r8
        20a094:	e1a00004 	mov	r0, r4
        20a098:	eb65709f 	bl	1b6631c <TUnit::$SetAreas(TAreaList *)>
        20a09c:	e1a00008 	mov	r0, r8
        20a0a0:	e598c000 	ldr	ip, [r8]
        20a0a4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        20a0a8:	e1a0f00c 	mov	pc, ip
    */
}

/**
 * Symbol: TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)
 * Address: 0020a1d8
 */
TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long) {
    /*
        20a1d8:	e1a0c00d 	mov	ip, sp
        20a1dc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20a1e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20a1e4:	e1a04000 	mov	r4, r0
        20a1e8:	e1a05001 	mov	r5, r1
        20a1ec:	e1a06002 	mov	r6, r2
        20a1f0:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        20a1f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        20a1f8:	e3a01001 	mov	r1, #1	; 0x1
        20a1fc:	e5c41040 	strb	r1, [r4, #64]	; fField64
        20a200:	e595100c 	ldr	r1, [r5, #12]	; fField12
        20a204:	e5841044 	str	r1, [r4, #68]	; fField68
        20a208:	e3a01000 	mov	r1, #0	; 0x0
        20a20c:	e584004c 	str	r0, [r4, #76]	; fField76
        20a210:	e5841048 	str	r1, [r4, #72]	; fField72
        20a214:	e584305c 	str	r3, [r4, #92]	; fField92
        20a218:	e5940038 	ldr	r0, [r4, #56]	; fField56
        20a21c:	e5840054 	str	r0, [r4, #84]	; fField84
        20a220:	e59f0154 	ldr	r0, [pc, #154]	; 20a37c <TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)+0x1a4>
        20a224:	e5840038 	str	r0, [r4, #56]	; fField56
        20a228:	e594003c 	ldr	r0, [r4, #60]	; fField60
        20a22c:	e5840058 	str	r0, [r4, #88]	; fField88
        20a230:	e59f0148 	ldr	r0, [pc, #148]	; 20a380 <TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)+0x1a8>
        20a234:	e3a07000 	mov	r7, #0	; 0x0
        20a238:	e584003c 	str	r0, [r4, #60]	; fField60
        20a23c:	e5960018 	ldr	r0, [r6, #24]	; fField24
        20a240:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20a244:	e3500000 	cmp	r0, #0	; 0x0
        20a248:	9a00000b 	bls	20a27c <TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)+0xa4>
        20a24c:	e59f8130 	ldr	r8, [pc, #130]	; 20a384 <TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)+0x1ac>
        20a250:	e1a01007 	mov	r1, r7
        20a254:	e5960018 	ldr	r0, [r6, #24]	; fField24
        20a258:	eb655337 	bl	1b5ef3c <TTypeAssoc::$GetAssoc(unsigned long)>
        20a25c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        20a260:	e3310000 	teq	r1, #0	; 0x0
        20a264:	05a08010 	streq	r8, [r0, #16]!	; fField16
        20a268:	e2877001 	add	r7, r7, #1	; 0x1
        20a26c:	e5960018 	ldr	r0, [r6, #24]	; fField24
        20a270:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20a274:	e1500007 	cmp	r0, r7
        20a278:	8afffff4 	bhi	20a250 <TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)+0x78>
        20a27c:	e5846050 	str	r6, [r4, #80]	; fField80
        20a280:	e59fa100 	ldr	sl, [pc, #100]	; 20a388 <TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)+0x1b0>
        20a284:	e59a0020 	ldr	r0, [sl, #32]	; fField32
        20a288:	e2807002 	add	r7, r0, #2	; 0x2
        20a28c:	eb6588dc 	bl	1b6c604 <$GetTicks(void)>
        20a290:	e1a08000 	mov	r8, r0
        20a294:	e240003c 	sub	r0, r0, #60	; 0x3c
        20a298:	e1500007 	cmp	r0, r7
        20a29c:	91570008 	cmpls	r7, r8
        20a2a0:	81a07000 	movhi	r7, r0
        20a2a4:	e595000c 	ldr	r0, [r5, #12]	; fField12
        20a2a8:	e0481007 	sub	r1, r8, r7
        20a2ac:	e58d0000 	str	r0, [sp]
        20a2b0:	eb66a1a4 	bl	1bb2948 <$__rt_udiv>
        20a2b4:	e1a09000 	mov	r9, r0
        20a2b8:	e3a06000 	mov	r6, #0	; 0x0
        20a2bc:	e59d0000 	ldr	r0, [sp]
        20a2c0:	e3500000 	cmp	r0, #0	; 0x0
        20a2c4:	9a000017 	bls	20a328 <TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)+0x150>
        20a2c8:	e1a01006 	mov	r1, r6
        20a2cc:	e1a00005 	mov	r0, r5
        20a2d0:	e5952000 	ldr	r2, [r5]
        20a2d4:	e1a0e00f 	mov	lr, pc
        20a2d8:	e282f01c 	add	pc, r2, #28	; 0x1c
        20a2dc:	e5900000 	ldr	r0, [r0]
        20a2e0:	e3a02000 	mov	r2, #0	; 0x0
        20a2e4:	e3a01000 	mov	r1, #0	; 0x0
        20a2e8:	eb6246bc 	bl	1a9bde0 <$MakeStrokeUnit(TStroke *, TArray *, long)>
        20a2ec:	e0217699 	mla	r1, r9, r6, r7
        20a2f0:	e580101c 	str	r1, [r0, #28]	; fField28
        20a2f4:	e0812009 	add	r2, r1, r9
        20a2f8:	e2422002 	sub	r2, r2, #2	; 0x2
        20a2fc:	e0421001 	sub	r1, r2, r1
        20a300:	e5c01021 	strb	r1, [r0, #33]
        20a304:	e1a01421 	mov	r1, r1, lsr #8
        20a308:	e5c01020 	strb	r1, [r0, #32]	; fField32
        20a30c:	e1a01000 	mov	r1, r0
        20a310:	e1a00004 	mov	r0, r4
        20a314:	eb655b6f 	bl	1b610d8 <TController::$NewClassification(TUnit *)>
        20a318:	e2866001 	add	r6, r6, #1	; 0x1
        20a31c:	e595000c 	ldr	r0, [r5, #12]	; fField12
        20a320:	e1500006 	cmp	r0, r6
        20a324:	8affffe7 	bhi	20a2c8 <TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)+0xf0>
        20a328:	e1a00004 	mov	r0, r4
        20a32c:	e3a01302 	mov	r1, #134217728	; 0x8000000
        20a330:	e5aa8020 	str	r8, [sl, #32]!	; fField32
        20a334:	eb655f8e 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        20a338:	e1a00004 	mov	r0, r4
        20a33c:	eb65572c 	bl	1b5fff4 <TController::$Idle(void)>
        20a340:	e5940048 	ldr	r0, [r4, #72]	; fField72
        20a344:	e5941044 	ldr	r1, [r4, #68]	; fField68
        20a348:	e1500001 	cmp	r0, r1
        20a34c:	3afffff9 	bcc	20a338 <TController::RecognizeInArea(TArray *, TRecArea *, unsigned long (*)(TUnit *, unsigned long), unsigned long)+0x160>
        20a350:	e1a00004 	mov	r0, r4
        20a354:	e3a01302 	mov	r1, #134217728	; 0x8000000
        20a358:	eb6567ab 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        20a35c:	e5940054 	ldr	r0, [r4, #84]	; fField84
        20a360:	e5840038 	str	r0, [r4, #56]	; fField56
        20a364:	e5940058 	ldr	r0, [r4, #88]	; fField88
        20a368:	e584003c 	str	r0, [r4, #60]	; fField60
        20a36c:	e3a00000 	mov	r0, #0	; 0x0
        20a370:	e5840050 	str	r0, [r4, #80]	; fField80
        20a374:	e5c40040 	strb	r0, [r4, #64]	; fField64
        20a378:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        20a37c:	01b66338 	moveqs	r6, r8, lsr r3
        20a380:	01b66334 	moveqs	r6, r4, lsr r3
        20a384:	01b6633c 	moveqs	r6, ip, lsr r3
        20a388:	0c104c68 	ldceq	12, cr4, [r0], -#416
    */
}

/**
 * Symbol: TController::NewClassification(TUnit *)
 * Address: 0020a38c
 */
TController::NewClassification(TUnit *) {
    /*
        20a38c:	e1a0c00d 	mov	ip, sp
        20a390:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20a394:	e24cb004 	sub	fp, ip, #4	; 0x4
        20a398:	e1a05000 	mov	r5, r0
        20a39c:	e1b04001 	movs	r4, r1
        20a3a0:	e24dd05c 	sub	sp, sp, #92	; 0x5c
        20a3a4:	e3a06000 	mov	r6, #0	; 0x0
        20a3a8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        20a3ac:	e5b0900c 	ldr	r9, [r0, #12]!	; fField12
        20a3b0:	13a07000 	movne	r7, #0	; 0x0
        20a3b4:	03a07001 	moveq	r7, #1	; 0x1
        20a3b8:	e3370000 	teq	r7, #0	; 0x0
        20a3bc:	1a0000c5 	bne	20a6d8 <TController::NewClassification(TUnit *)+0x34c>
        20a3c0:	e1a00004 	mov	r0, r4
        20a3c4:	e3a01602 	mov	r1, #2097152	; 0x200000
        20a3c8:	eb655f69 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        20a3cc:	e1a01004 	mov	r1, r4
        20a3d0:	e5950008 	ldr	r0, [r5, #8]	; fField8
        20a3d4:	eb654671 	bl	1b5bda0 <TUnitList::$AddUnit(TUnit *)>
        20a3d8:	e1b07000 	movs	r7, r0
        20a3dc:	1a0000bd 	bne	20a6d8 <TController::NewClassification(TUnit *)+0x34c>
        20a3e0:	e1a0100d 	mov	r1, sp
        20a3e4:	e595000c 	ldr	r0, [r5, #12]	; fField12
        20a3e8:	eb6552e1 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20a3ec:	e3a06000 	mov	r6, #0	; 0x0
        20a3f0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20a3f4:	e3510000 	cmp	r1, #0	; 0x0
        20a3f8:	9a00000e 	bls	20a438 <TController::NewClassification(TUnit *)+0xac>
        20a3fc:	e5900000 	ldr	r0, [r0]
        20a400:	e1340000 	teq	r4, r0
        20a404:	1a000004 	bne	20a41c <TController::NewClassification(TUnit *)+0x90>
        20a408:	e1a00004 	mov	r0, r4
        20a40c:	e5941000 	ldr	r1, [r4]
        20a410:	e1a0e00f 	mov	lr, pc
        20a414:	e281f014 	add	pc, r1, #20	; 0x14
        20a418:	ea000006 	b	20a438 <TController::NewClassification(TUnit *)+0xac>
        20a41c:	e1a0000d 	mov	r0, sp
        20a420:	e1a0e00f 	mov	lr, pc
        20a424:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20a428:	e2866001 	add	r6, r6, #1	; 0x1
        20a42c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20a430:	e1510006 	cmp	r1, r6
        20a434:	8afffff0 	bhi	20a3fc <TController::NewClassification(TUnit *)+0x70>
        20a438:	e5940028 	ldr	r0, [r4, #40]	; fField40
        20a43c:	e1a00820 	mov	r0, r0, lsr #16
        20a440:	e240ccff 	sub	ip, r0, #65280	; 0xff00
        20a444:	e33c00ff 	teq	ip, #255	; 0xff
        20a448:	1a00000f 	bne	20a48c <TController::NewClassification(TUnit *)+0x100>
        20a44c:	e595001c 	ldr	r0, [r5, #28]	; fField28
        20a450:	e1a00820 	mov	r0, r0, lsr #16
        20a454:	e5c4002b 	strb	r0, [r4, #43]
        20a458:	e1a00440 	mov	r0, r0, asr #8
        20a45c:	e5c4002a 	strb	r0, [r4, #42]	; fField42
        20a460:	e595001c 	ldr	r0, [r5, #28]	; fField28
        20a464:	e1a00820 	mov	r0, r0, lsr #16
        20a468:	e5c4002d 	strb	r0, [r4, #45]
        20a46c:	e1a00440 	mov	r0, r0, asr #8
        20a470:	e5c4002c 	strb	r0, [r4, #44]	; fField44
        20a474:	e595001c 	ldr	r0, [r5, #28]	; fField28
        20a478:	e1a00820 	mov	r0, r0, lsr #16
        20a47c:	e2800001 	add	r0, r0, #1	; 0x1
        20a480:	e5c5001d 	strb	r0, [r5, #29]	; fField29
        20a484:	e1a00440 	mov	r0, r0, asr #8
        20a488:	e5c5001c 	strb	r0, [r5, #28]	; fField28
        20a48c:	e1a00004 	mov	r0, r4
        20a490:	eb654a71 	bl	1b5ce5c <$CountStrokes(TUnit *)>
        20a494:	e5c40029 	strb	r0, [r4, #41]
        20a498:	e1a00420 	mov	r0, r0, lsr #8
        20a49c:	e5c40028 	strb	r0, [r4, #40]	; fField40
        20a4a0:	e1a00004 	mov	r0, r4
        20a4a4:	eb656b76 	bl	1b65284 <TUnit::$GetAreas(void)>
        20a4a8:	e1b06000 	movs	r6, r0
        20a4ac:	1a000005 	bne	20a4c8 <TController::NewClassification(TUnit *)+0x13c>
        20a4b0:	eb655afb 	bl	1b610a4 <$Make__9TAreaListSFv>
        20a4b4:	e1b06000 	movs	r6, r0
        20a4b8:	13a07000 	movne	r7, #0	; 0x0
        20a4bc:	03a07001 	moveq	r7, #1	; 0x1
        20a4c0:	e3370000 	teq	r7, #0	; 0x0
        20a4c4:	1a000083 	bne	20a6d8 <TController::NewClassification(TUnit *)+0x34c>
        20a4c8:	e5952038 	ldr	r2, [r5, #56]	; fField56
        20a4cc:	e3320000 	teq	r2, #0	; 0x0
        20a4d0:	0a000004 	beq	20a4e8 <TController::NewClassification(TUnit *)+0x15c>
        20a4d4:	e1a01006 	mov	r1, r6
        20a4d8:	e1a00004 	mov	r0, r4
        20a4dc:	e1a0e00f 	mov	lr, pc
        20a4e0:	e1a0f002 	mov	pc, r2
        20a4e4:	e1a08000 	mov	r8, r0
        20a4e8:	e3380000 	teq	r8, #0	; 0x0
        20a4ec:	01a01006 	moveq	r1, r6
        20a4f0:	01a00004 	moveq	r0, r4
        20a4f4:	0b656f88 	bleq	1b6631c <TUnit::$SetAreas(TAreaList *)>
        20a4f8:	e1a00006 	mov	r0, r6
        20a4fc:	e1a0e00f 	mov	lr, pc
        20a500:	e596f000 	ldr	pc, [r6]
        20a504:	e1a00004 	mov	r0, r4
        20a508:	eb656b5d 	bl	1b65284 <TUnit::$GetAreas(void)>
        20a50c:	e1b06000 	movs	r6, r0
        20a510:	1596000c 	ldrne	r0, [r6, #12]	; fField12
        20a514:	13300000 	teqne	r0, #0	; 0x0
        20a518:	0a000068 	beq	20a6c0 <TController::NewClassification(TUnit *)+0x334>
        20a51c:	e1a00004 	mov	r0, r4
        20a520:	eb656b56 	bl	1b65280 <TUnit::$GetArea(void)>
        20a524:	e1b0a000 	movs	sl, r0
        20a528:	13a07000 	movne	r7, #0	; 0x0
        20a52c:	03a07001 	moveq	r7, #1	; 0x1
        20a530:	e3370000 	teq	r7, #0	; 0x0
        20a534:	1a000067 	bne	20a6d8 <TController::NewClassification(TUnit *)+0x34c>
        20a538:	e59a001c 	ldr	r0, [sl, #28]	; fField28
        20a53c:	e590100c 	ldr	r1, [r0, #12]	; fField12
        20a540:	e3310000 	teq	r1, #0	; 0x0
        20a544:	0a000028 	beq	20a5ec <TController::NewClassification(TUnit *)+0x260>
        20a548:	e28d1020 	add	r1, sp, #32	; 0x20
        20a54c:	eb655288 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20a550:	e1a0e000 	mov	lr, r0
        20a554:	e3a08000 	mov	r8, #0	; 0x0
        20a558:	e59d0034 	ldr	r0, [sp, #52]
        20a55c:	e3500000 	cmp	r0, #0	; 0x0
        20a560:	9a000025 	bls	20a5fc <TController::NewClassification(TUnit *)+0x270>
        20a564:	e28d0040 	add	r0, sp, #64	; 0x40
        20a568:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        20a56c:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        20a570:	e89e100c 	ldmia	lr, {r2, r3, ip}
        20a574:	e880100c 	stmia	r0, {r2, r3, ip}
        20a578:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20a57c:	e59d1040 	ldr	r1, [sp, #64]	; fField64
        20a580:	e1300001 	teq	r0, r1
        20a584:	1a00000f 	bne	20a5c8 <TController::NewClassification(TUnit *)+0x23c>
        20a588:	e5950014 	ldr	r0, [r5, #20]	; fField20
        20a58c:	e5901000 	ldr	r1, [r0]
        20a590:	e1a0e00f 	mov	lr, pc
        20a594:	e281f018 	add	pc, r1, #24	; 0x18
        20a598:	e3300000 	teq	r0, #0	; 0x0
        20a59c:	13a07000 	movne	r7, #0	; 0x0
        20a5a0:	03a07001 	moveq	r7, #1	; 0x1
        20a5a4:	e3370000 	teq	r7, #0	; 0x0
        20a5a8:	1a00004a 	bne	20a6d8 <TController::NewClassification(TUnit *)+0x34c>
        20a5ac:	e5804000 	str	r4, [r0]
        20a5b0:	e59d1044 	ldr	r1, [sp, #68]	; fField68
        20a5b4:	e5801004 	str	r1, [r0, #4]	; fField4
        20a5b8:	e59d104c 	ldr	r1, [sp, #76]	; fField76
        20a5bc:	e5801008 	str	r1, [r0, #8]	; fField8
        20a5c0:	e59d1048 	ldr	r1, [sp, #72]	; fField72
        20a5c4:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        20a5c8:	e28d0020 	add	r0, sp, #32	; 0x20
        20a5cc:	e1a0e00f 	mov	lr, pc
        20a5d0:	e59df038 	ldr	pc, [sp, #56]	; fField56
        20a5d4:	e1a0e000 	mov	lr, r0
        20a5d8:	e2888001 	add	r8, r8, #1	; 0x1
        20a5dc:	e59d0034 	ldr	r0, [sp, #52]
        20a5e0:	e1500008 	cmp	r0, r8
        20a5e4:	8affffde 	bhi	20a564 <TController::NewClassification(TUnit *)+0x1d8>
        20a5e8:	ea000003 	b	20a5fc <TController::NewClassification(TUnit *)+0x270>
        20a5ec:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20a5f0:	e59fc0c4 	ldr	ip, [pc, #c4]	; 20a6bc <TController::NewClassification(TUnit *)+0x330>
        20a5f4:	e130000c 	teq	r0, ip
        20a5f8:	03a07001 	moveq	r7, #1	; 0x1
        20a5fc:	e28d1020 	add	r1, sp, #32	; 0x20
        20a600:	e5ba0018 	ldr	r0, [sl, #24]!	; fField24
        20a604:	eb65525a 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20a608:	e3a08000 	mov	r8, #0	; 0x0
        20a60c:	e59d1034 	ldr	r1, [sp, #52]
        20a610:	e3510000 	cmp	r1, #0	; 0x0
        20a614:	9a00002f 	bls	20a6d8 <TController::NewClassification(TUnit *)+0x34c>
        20a618:	e28de040 	add	lr, sp, #64	; 0x40
        20a61c:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        20a620:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        20a624:	e890100c 	ldmia	r0, {r2, r3, ip}
        20a628:	e88e100c 	stmia	lr, {r2, r3, ip}
        20a62c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20a630:	e59d1040 	ldr	r1, [sp, #64]	; fField64
        20a634:	e1300001 	teq	r0, r1
        20a638:	1a000017 	bne	20a69c <TController::NewClassification(TUnit *)+0x310>
        20a63c:	e59d0054 	ldr	r0, [sp, #84]	; fField84
        20a640:	e3300002 	teq	r0, #2	; 0x2
        20a644:	0a000014 	beq	20a69c <TController::NewClassification(TUnit *)+0x310>
        20a648:	e5950018 	ldr	r0, [r5, #24]	; fField24
        20a64c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        20a650:	e5901000 	ldr	r1, [r0]
        20a654:	e1a0e00f 	mov	lr, pc
        20a658:	e281f018 	add	pc, r1, #24	; 0x18
        20a65c:	e3300000 	teq	r0, #0	; 0x0
        20a660:	13a07000 	movne	r7, #0	; 0x0
        20a664:	03a07001 	moveq	r7, #1	; 0x1
        20a668:	e3370000 	teq	r7, #0	; 0x0
        20a66c:	1a000019 	bne	20a6d8 <TController::NewClassification(TUnit *)+0x34c>
        20a670:	e5804000 	str	r4, [r0]
        20a674:	e280e00c 	add	lr, r0, #12	; 0xc
        20a678:	e28da040 	add	sl, sp, #64	; 0x40
        20a67c:	e8ba100e 	ldmia	sl!, {r1, r2, r3, ip}
        20a680:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        20a684:	e89a100c 	ldmia	sl, {r2, r3, ip}
        20a688:	e88e100c 	stmia	lr, {r2, r3, ip}
        20a68c:	e59d1054 	ldr	r1, [sp, #84]	; fField84
        20a690:	e5801008 	str	r1, [r0, #8]	; fField8
        20a694:	e3a01000 	mov	r1, #0	; 0x0
        20a698:	e5a01004 	str	r1, [r0, #4]!	; fField4
        20a69c:	e28d0020 	add	r0, sp, #32	; 0x20
        20a6a0:	e1a0e00f 	mov	lr, pc
        20a6a4:	e59df038 	ldr	pc, [sp, #56]	; fField56
        20a6a8:	e2888001 	add	r8, r8, #1	; 0x1
        20a6ac:	e59d1034 	ldr	r1, [sp, #52]
        20a6b0:	e1510008 	cmp	r1, r8
        20a6b4:	8affffd7 	bhi	20a618 <TController::NewClassification(TUnit *)+0x28c>
        20a6b8:	ea000006 	b	20a6d8 <TController::NewClassification(TUnit *)+0x34c>
        20a6bc:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
        20a6c0:	e1a01004 	mov	r1, r4
        20a6c4:	e1a00005 	mov	r0, r5
        20a6c8:	e3a02101 	mov	r2, #1073741824	; 0x40000000
        20a6cc:	eb655a7c 	bl	1b610c4 <TController::$MarkUnits(TUnit *, unsigned long)>
        20a6d0:	eb6587cb 	bl	1b6c604 <$GetTicks(void)>
        20a6d4:	e585002c 	str	r0, [r5, #44]	; fField44
        20a6d8:	e3370000 	teq	r7, #0	; 0x0
        20a6dc:	11a00005 	movne	r0, r5
        20a6e0:	1b6562ac 	blne	1b63198 <TController::$SignalMemoryError(void)>
        20a6e4:	e3360000 	teq	r6, #0	; 0x0
        20a6e8:	11a00006 	movne	r0, r6
        20a6ec:	11a0e00f 	movne	lr, pc
        20a6f0:	1596f000 	ldrne	pc, [r6]
        20a6f4:	eb6587c2 	bl	1b6c604 <$GetTicks(void)>
        20a6f8:	e5951014 	ldr	r1, [r5, #20]	; fField20
        20a6fc:	e591100c 	ldr	r1, [r1, #12]	; fField12
        20a700:	e1510009 	cmp	r1, r9
        20a704:	85850024 	strhi	r0, [r5, #36]	; fField36
        20a708:	e5951018 	ldr	r1, [r5, #24]	; fField24
        20a70c:	e5911004 	ldr	r1, [r1, #4]	; fField4
        20a710:	e591100c 	ldr	r1, [r1, #12]	; fField12
        20a714:	e3310000 	teq	r1, #0	; 0x0
        20a718:	15a50028 	strne	r0, [r5, #40]!	; fField40
        20a71c:	e1a00007 	mov	r0, r7
        20a720:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TController::IsExternallyArbitrated(TUnit *)
 * Address: 0020a724
 */
TController::IsExternallyArbitrated(TUnit *) {
    /*
        20a724:	e1a0c00d 	mov	ip, sp
        20a728:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20a72c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20a730:	e24dd020 	sub	sp, sp, #32	; 0x20
        20a734:	e5915008 	ldr	r5, [r1, #8]	; fField8
        20a738:	e1a00001 	mov	r0, r1
        20a73c:	eb656acf 	bl	1b65280 <TUnit::$GetArea(void)>
        20a740:	e3300000 	teq	r0, #0	; 0x0
        20a744:	15900018 	ldrne	r0, [r0, #24]	; fField24
        20a748:	1590100c 	ldrne	r1, [r0, #12]	; fField12
        20a74c:	13310000 	teqne	r1, #0	; 0x0
        20a750:	0a000012 	beq	20a7a0 <TController::IsExternallyArbitrated(TUnit *)+0x7c>
        20a754:	e1a0100d 	mov	r1, sp
        20a758:	eb655205 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20a75c:	e3a04000 	mov	r4, #0	; 0x0
        20a760:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20a764:	e3510000 	cmp	r1, #0	; 0x0
        20a768:	9a00000c 	bls	20a7a0 <TController::IsExternallyArbitrated(TUnit *)+0x7c>
        20a76c:	e5901000 	ldr	r1, [r0]
        20a770:	e1310005 	teq	r1, r5
        20a774:	05900014 	ldreq	r0, [r0, #20]	; fField20
        20a778:	03300002 	teqeq	r0, #2	; 0x2
        20a77c:	03a00001 	moveq	r0, #1	; 0x1
        20a780:	0a000007 	beq	20a7a4 <TController::IsExternallyArbitrated(TUnit *)+0x80>
        20a784:	e1a0000d 	mov	r0, sp
        20a788:	e1a0e00f 	mov	lr, pc
        20a78c:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20a790:	e2844001 	add	r4, r4, #1	; 0x1
        20a794:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20a798:	e1510004 	cmp	r1, r4
        20a79c:	8afffff2 	bhi	20a76c <TController::IsExternallyArbitrated(TUnit *)+0x48>
        20a7a0:	e3a00000 	mov	r0, #0	; 0x0
        20a7a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TController::IController(void)
 * Address: 0020a7a8
 */
TController::IController(void) {
    /*
        20a7a8:	e1a0c00d 	mov	ip, sp
        20a7ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20a7b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20a7b4:	e1a04000 	mov	r4, r0
        20a7b8:	eb656ac2 	bl	1b652c8 <$InitControllerState(TController *)>
        20a7bc:	e3a01000 	mov	r1, #0	; 0x0
        20a7c0:	e3a00004 	mov	r0, #4	; 0x4
        20a7c4:	eb655a30 	bl	1b6108c <$Make__6TArraySFUlT1>
        20a7c8:	e5840010 	str	r0, [r4, #16]	; fField16
        20a7cc:	e3a00000 	mov	r0, #0	; 0x0
        20a7d0:	e5c4001d 	strb	r0, [r4, #29]	; fField29
        20a7d4:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        20a7d8:	e5840038 	str	r0, [r4, #56]	; fField56
        20a7dc:	e584003c 	str	r0, [r4, #60]	; fField60
        20a7e0:	e5c40040 	strb	r0, [r4, #64]	; fField64
        20a7e4:	e5840044 	str	r0, [r4, #68]	; fField68
        20a7e8:	e5840048 	str	r0, [r4, #72]	; fField72
        20a7ec:	e584004c 	str	r0, [r4, #76]	; fField76
        20a7f0:	e5840050 	str	r0, [r4, #80]	; fField80
        20a7f4:	e5840054 	str	r0, [r4, #84]	; fField84
        20a7f8:	e5840058 	str	r0, [r4, #88]	; fField88
        20a7fc:	e5a4005c 	str	r0, [r4, #92]!	; fField92
        20a800:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TController::RegroupUnclaimedSubs(TUnit *)
 * Address: 0020a804
 */
TController::RegroupUnclaimedSubs(TUnit *) {
    /*
        20a804:	e1a0c00d 	mov	ip, sp
        20a808:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        20a80c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20a810:	e1a05000 	mov	r5, r0
        20a814:	e1a04001 	mov	r4, r1
        20a818:	e1a00001 	mov	r0, r1
        20a81c:	e5911000 	ldr	r1, [r1]
        20a820:	e1a0e00f 	mov	lr, pc
        20a824:	e281f01c 	add	pc, r1, #28	; 0x1c
        20a828:	e1a07000 	mov	r7, r0
        20a82c:	e3a06000 	mov	r6, #0	; 0x0
        20a830:	e3500000 	cmp	r0, #0	; 0x0
        20a834:	991ba9f0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        20a838:	e1a01006 	mov	r1, r6
        20a83c:	e1a00004 	mov	r0, r4
        20a840:	e5942000 	ldr	r2, [r4]
        20a844:	e1a0e00f 	mov	lr, pc
        20a848:	e282f058 	add	pc, r2, #88	; 0x58
        20a84c:	e1a08000 	mov	r8, r0
        20a850:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        20a854:	eb656263 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20a858:	e3300000 	teq	r0, #0	; 0x0
        20a85c:	1a000003 	bne	20a870 <TController::RegroupUnclaimedSubs(TUnit *)+0x6c>
        20a860:	e1a02008 	mov	r2, r8
        20a864:	e1a01004 	mov	r1, r4
        20a868:	e1a00005 	mov	r0, r5
        20a86c:	eb655e2d 	bl	1b62128 <TController::$RegroupSub(TUnit *, TUnit *)>
        20a870:	e2866001 	add	r6, r6, #1	; 0x1
        20a874:	e1560007 	cmp	r6, r7
        20a878:	3affffee 	bcc	20a838 <TController::RegroupUnclaimedSubs(TUnit *)+0x34>
        20a87c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TController::RegroupSub(TUnit *, TUnit *)
 * Address: 0020a880
 */
TController::RegroupSub(TUnit *, TUnit *) {
    /*
        20a880:	e1a0c00d 	mov	ip, sp
        20a884:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        20a888:	e24cb004 	sub	fp, ip, #4	; 0x4
        20a88c:	e1a04000 	mov	r4, r0
        20a890:	e1a06001 	mov	r6, r1
        20a894:	e1a05002 	mov	r5, r2
        20a898:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        20a89c:	e3a08000 	mov	r8, #0	; 0x0
        20a8a0:	e1a00001 	mov	r0, r1
        20a8a4:	eb656a75 	bl	1b65280 <TUnit::$GetArea(void)>
        20a8a8:	e3300000 	teq	r0, #0	; 0x0
        20a8ac:	0a000029 	beq	20a958 <TController::RegroupSub(TUnit *, TUnit *)+0xd8>
        20a8b0:	e590001c 	ldr	r0, [r0, #28]	; fField28
        20a8b4:	e1a0100d 	mov	r1, sp
        20a8b8:	eb6551ad 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20a8bc:	e3a07000 	mov	r7, #0	; 0x0
        20a8c0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20a8c4:	e3510000 	cmp	r1, #0	; 0x0
        20a8c8:	9a000022 	bls	20a958 <TController::RegroupSub(TUnit *, TUnit *)+0xd8>
        20a8cc:	e28de020 	add	lr, sp, #32	; 0x20
        20a8d0:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        20a8d4:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        20a8d8:	e890100c 	ldmia	r0, {r2, r3, ip}
        20a8dc:	e88e100c 	stmia	lr, {r2, r3, ip}
        20a8e0:	e5950008 	ldr	r0, [r5, #8]	; fField8
        20a8e4:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        20a8e8:	e1300001 	teq	r0, r1
        20a8ec:	05960014 	ldreq	r0, [r6, #20]	; fField20
        20a8f0:	059d1024 	ldreq	r1, [sp, #36]	; fField36
        20a8f4:	01300001 	teqeq	r0, r1
        20a8f8:	1a00000f 	bne	20a93c <TController::RegroupSub(TUnit *, TUnit *)+0xbc>
        20a8fc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        20a900:	e5901000 	ldr	r1, [r0]
        20a904:	e1a0e00f 	mov	lr, pc
        20a908:	e281f018 	add	pc, r1, #24	; 0x18
        20a90c:	e3300000 	teq	r0, #0	; 0x0
        20a910:	13a08000 	movne	r8, #0	; 0x0
        20a914:	03a08001 	moveq	r8, #1	; 0x1
        20a918:	e3380000 	teq	r8, #0	; 0x0
        20a91c:	1a00000f 	bne	20a960 <TController::RegroupSub(TUnit *, TUnit *)+0xe0>
        20a920:	e5805000 	str	r5, [r0]
        20a924:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        20a928:	e5801004 	str	r1, [r0, #4]	; fField4
        20a92c:	e59d102c 	ldr	r1, [sp, #44]	; fField44
        20a930:	e5801008 	str	r1, [r0, #8]	; fField8
        20a934:	e59d1028 	ldr	r1, [sp, #40]	; fField40
        20a938:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        20a93c:	e1a0000d 	mov	r0, sp
        20a940:	e1a0e00f 	mov	lr, pc
        20a944:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20a948:	e2877001 	add	r7, r7, #1	; 0x1
        20a94c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20a950:	e1510007 	cmp	r1, r7
        20a954:	8affffdc 	bhi	20a8cc <TController::RegroupSub(TUnit *, TUnit *)+0x4c>
        20a958:	eb658729 	bl	1b6c604 <$GetTicks(void)>
        20a95c:	e5840024 	str	r0, [r4, #36]	; fField36
        20a960:	e3380000 	teq	r8, #0	; 0x0
        20a964:	11a00004 	movne	r0, r4
        20a968:	1b65620a 	blne	1b63198 <TController::$SignalMemoryError(void)>
        20a96c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TController::NewGroup(TUnit *)
 * Address: 0020a970
 */
TController::NewGroup(TUnit *) {
    /*
        20a970:	e1a0c00d 	mov	ip, sp
        20a974:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20a978:	e24cb004 	sub	fp, ip, #4	; 0x4
        20a97c:	e1a05000 	mov	r5, r0
        20a980:	e1a04001 	mov	r4, r1
        20a984:	e3a06000 	mov	r6, #0	; 0x0
        20a988:	e5d10027 	ldrb	r0, [r1, #39]	; fField39
        20a98c:	e3300000 	teq	r0, #0	; 0x0
        20a990:	1a000004 	bne	20a9a8 <TController::NewGroup(TUnit *)+0x38>
        20a994:	e5940014 	ldr	r0, [r4, #20]	; fField20
        20a998:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
        20a99c:	e1a06001 	mov	r6, r1
        20a9a0:	e1a00004 	mov	r0, r4
        20a9a4:	eb655dee 	bl	1b62164 <TUnit::$SetDelay(unsigned long)>
        20a9a8:	e1a01004 	mov	r1, r4
        20a9ac:	e595000c 	ldr	r0, [r5, #12]	; fField12
        20a9b0:	eb6544fa 	bl	1b5bda0 <TUnitList::$AddUnit(TUnit *)>
        20a9b4:	e3500000 	cmp	r0, #0	; 0x0
        20a9b8:	1a00000d 	bne	20a9f4 <TController::NewGroup(TUnit *)+0x84>
        20a9bc:	e1a00004 	mov	r0, r4
        20a9c0:	e3a01682 	mov	r1, #136314880	; 0x8200000
        20a9c4:	e2811206 	add	r1, r1, #1610612736	; 0x60000000
        20a9c8:	eb656206 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20a9cc:	e3300000 	teq	r0, #0	; 0x0
        20a9d0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        20a9d4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        20a9d8:	e5941020 	ldr	r1, [r4, #32]	; fField32
        20a9dc:	e0800821 	add	r0, r0, r1, lsr #16
        20a9e0:	e0800006 	add	r0, r0, r6
        20a9e4:	e5951020 	ldr	r1, [r5, #32]	; fField32
        20a9e8:	e1510000 	cmp	r1, r0
        20a9ec:	85a50020 	strhi	r0, [r5, #32]!	; fField32
        20a9f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        20a9f4:	11a00005 	movne	r0, r5
        20a9f8:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        20a9fc:	1a6561e5 	bne	1b63198 <TController::$SignalMemoryError(void)>
        20aa00:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TController::Idle(void)
 * Address: 0020aa04
 */
TController::Idle(void) {
    /*
        20aa04:	e1a0c00d 	mov	ip, sp
        20aa08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20aa0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20aa10:	e1a04000 	mov	r4, r0
        20aa14:	e3a01302 	mov	r1, #134217728	; 0x8000000
        20aa18:	eb6561f2 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20aa1c:	e1a05000 	mov	r5, r0
        20aa20:	e1a00004 	mov	r0, r4
        20aa24:	eb654907 	bl	1b5ce48 <TController::$ControllerError(void)>
        20aa28:	e3300000 	teq	r0, #0	; 0x0
        20aa2c:	1a000032 	bne	20aafc <TController::Idle(void)+0xf8>
        20aa30:	eb6586f3 	bl	1b6c604 <$GetTicks(void)>
        20aa34:	e3350000 	teq	r5, #0	; 0x0
        20aa38:	1a000002 	bne	20aa48 <TController::Idle(void)+0x44>
        20aa3c:	e5941024 	ldr	r1, [r4, #36]	; fField36
        20aa40:	e1510000 	cmp	r1, r0
        20aa44:	8a000008 	bhi	20aa6c <TController::Idle(void)+0x68>
        20aa48:	e1a00004 	mov	r0, r4
        20aa4c:	eb654d19 	bl	1b5deb8 <TController::$DoGroup(void)>
        20aa50:	e1a00004 	mov	r0, r4
        20aa54:	eb6548fb 	bl	1b5ce48 <TController::$ControllerError(void)>
        20aa58:	e3300000 	teq	r0, #0	; 0x0
        20aa5c:	1a000026 	bne	20aafc <TController::Idle(void)+0xf8>
        20aa60:	eb6586e7 	bl	1b6c604 <$GetTicks(void)>
        20aa64:	e3350000 	teq	r5, #0	; 0x0
        20aa68:	1a000002 	bne	20aa78 <TController::Idle(void)+0x74>
        20aa6c:	e5941020 	ldr	r1, [r4, #32]	; fField32
        20aa70:	e1510000 	cmp	r1, r0
        20aa74:	8a000008 	bhi	20aa9c <TController::Idle(void)+0x98>
        20aa78:	e1a00004 	mov	r0, r4
        20aa7c:	eb654d0c 	bl	1b5deb4 <TController::$DoClassify(void)>
        20aa80:	e1a00004 	mov	r0, r4
        20aa84:	eb6548ef 	bl	1b5ce48 <TController::$ControllerError(void)>
        20aa88:	e3300000 	teq	r0, #0	; 0x0
        20aa8c:	1a00001a 	bne	20aafc <TController::Idle(void)+0xf8>
        20aa90:	eb6586db 	bl	1b6c604 <$GetTicks(void)>
        20aa94:	e3350000 	teq	r5, #0	; 0x0
        20aa98:	1a000002 	bne	20aaa8 <TController::Idle(void)+0xa4>
        20aa9c:	e5941028 	ldr	r1, [r4, #40]	; fField40
        20aaa0:	e1510000 	cmp	r1, r0
        20aaa4:	8a000008 	bhi	20aacc <TController::Idle(void)+0xc8>
        20aaa8:	e1a00004 	mov	r0, r4
        20aaac:	eb654cfe 	bl	1b5deac <TController::$DoArbitration(void)>
        20aab0:	e1a00004 	mov	r0, r4
        20aab4:	eb6548e3 	bl	1b5ce48 <TController::$ControllerError(void)>
        20aab8:	e3300000 	teq	r0, #0	; 0x0
        20aabc:	1a00000e 	bne	20aafc <TController::Idle(void)+0xf8>
        20aac0:	eb6586cf 	bl	1b6c604 <$GetTicks(void)>
        20aac4:	e3350000 	teq	r5, #0	; 0x0
        20aac8:	1a000002 	bne	20aad8 <TController::Idle(void)+0xd4>
        20aacc:	e594102c 	ldr	r1, [r4, #44]	; fField44
        20aad0:	e1510000 	cmp	r1, r0
        20aad4:	8a000005 	bhi	20aaf0 <TController::Idle(void)+0xec>
        20aad8:	e1a00004 	mov	r0, r4
        20aadc:	eb6544c4 	bl	1b5bdf4 <TController::$CleanUp(void)>
        20aae0:	e1a00004 	mov	r0, r4
        20aae4:	eb6548d7 	bl	1b5ce48 <TController::$ControllerError(void)>
        20aae8:	e3300000 	teq	r0, #0	; 0x0
        20aaec:	1a000002 	bne	20aafc <TController::Idle(void)+0xf8>
        20aaf0:	e1a00004 	mov	r0, r4
        20aaf4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        20aaf8:	ea655979 	b	1b610e4 <TController::$NextIdleTime(void)>
        20aafc:	e1a00004 	mov	r0, r4
        20ab00:	eb6544bd 	bl	1b5bdfc <TController::$CleanupAfterError(void)>
        20ab04:	eafffff9 	b	20aaf0 <TController::Idle(void)+0xec>
    */
}

/**
 * Symbol: TController::TriggerRecognition(void)
 * Address: 0020ab08
 */
TController::TriggerRecognition(void) {
    /*
        20ab08:	e1a0c00d 	mov	ip, sp
        20ab0c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20ab10:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ab14:	e1a04000 	mov	r4, r0
        20ab18:	eb6586b9 	bl	1b6c604 <$GetTicks(void)>
        20ab1c:	e5840020 	str	r0, [r4, #32]	; fField32
        20ab20:	e5840024 	str	r0, [r4, #36]	; fField36
        20ab24:	e5840028 	str	r0, [r4, #40]	; fField40
        20ab28:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        20ab2c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TController::NextIdleTime(void)
 * Address: 0020ab30
 */
TController::NextIdleTime(void) {
    /*
        20ab30:	e1a0c00d 	mov	ip, sp
        20ab34:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        20ab38:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ab3c:	e1a04000 	mov	r4, r0
        20ab40:	e3e06000 	mvn	r6, #0	; 0x0
        20ab44:	e5900020 	ldr	r0, [r0, #32]	; fField32
        20ab48:	e5941024 	ldr	r1, [r4, #36]	; fField36
        20ab4c:	e1500001 	cmp	r0, r1
        20ab50:	21a00001 	movcs	r0, r1
        20ab54:	e5941028 	ldr	r1, [r4, #40]	; fField40
        20ab58:	e1510000 	cmp	r1, r0
        20ab5c:	91a00001 	movls	r0, r1
        20ab60:	e594102c 	ldr	r1, [r4, #44]	; fField44
        20ab64:	e1510000 	cmp	r1, r0
        20ab68:	91a05001 	movls	r5, r1
        20ab6c:	81a05000 	movhi	r5, r0
        20ab70:	eb6586a3 	bl	1b6c604 <$GetTicks(void)>
        20ab74:	e3750001 	cmn	r5, #1	; 0x1
        20ab78:	1a000016 	bne	20abd8 <TController::NextIdleTime(void)+0xa8>
        20ab7c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20ab80:	e5b0800c 	ldr	r8, [r0, #12]!	; fField12
        20ab84:	e3580000 	cmp	r8, #0	; 0x0
        20ab88:	0a000010 	beq	20abd0 <TController::NextIdleTime(void)+0xa0>
        20ab8c:	e3a07000 	mov	r7, #0	; 0x0
        20ab90:	e3a05000 	mov	r5, #0	; 0x0
        20ab94:	9a00000a 	bls	20abc4 <TController::NextIdleTime(void)+0x94>
        20ab98:	e1a01005 	mov	r1, r5
        20ab9c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20aba0:	eb655501 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        20aba4:	eb65489c 	bl	1b5ce1c <$ClickInProgress(TUnit *)>
        20aba8:	e3300000 	teq	r0, #0	; 0x0
        20abac:	1a000007 	bne	20abd0 <TController::NextIdleTime(void)+0xa0>
        20abb0:	e2855001 	add	r5, r5, #1	; 0x1
        20abb4:	e1550008 	cmp	r5, r8
        20abb8:	3afffff6 	bcc	20ab98 <TController::NextIdleTime(void)+0x68>
        20abbc:	e3370000 	teq	r7, #0	; 0x0
        20abc0:	1a000002 	bne	20abd0 <TController::NextIdleTime(void)+0xa0>
        20abc4:	e1a00004 	mov	r0, r4
        20abc8:	eb656172 	bl	1b63198 <TController::$SignalMemoryError(void)>
        20abcc:	e3a06000 	mov	r6, #0	; 0x0
        20abd0:	e1a00006 	mov	r0, r6
        20abd4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        20abd8:	e5941018 	ldr	r1, [r4, #24]	; fField24
        20abdc:	e5d12021 	ldrb	r2, [r1, #33]
        20abe0:	e3320000 	teq	r2, #0	; 0x0
        20abe4:	0a000008 	beq	20ac0c <TController::NextIdleTime(void)+0xdc>
        20abe8:	e5942028 	ldr	r2, [r4, #40]	; fField40
        20abec:	e3720001 	cmn	r2, #1	; 0x1
        20abf0:	05942020 	ldreq	r2, [r4, #32]	; fField32
        20abf4:	03720001 	cmneq	r2, #1	; 0x1
        20abf8:	05b42024 	ldreq	r2, [r4, #36]!	; fField36
        20abfc:	03720001 	cmneq	r2, #1	; 0x1
        20ac00:	03a00001 	moveq	r0, #1	; 0x1
        20ac04:	05c10020 	streqb	r0, [r1, #32]	; fField32
        20ac08:	0a000002 	beq	20ac18 <TController::NextIdleTime(void)+0xe8>
        20ac0c:	e5d11020 	ldrb	r1, [r1, #32]	; fField32
        20ac10:	e3310000 	teq	r1, #0	; 0x0
        20ac14:	0a000005 	beq	20ac30 <TController::NextIdleTime(void)+0x100>
        20ac18:	eb658679 	bl	1b6c604 <$GetTicks(void)>
        20ac1c:	e59f1008 	ldr	r1, [pc, #8]	; 20ac2c <TController::NextIdleTime(void)+0xfc>	; fField8
        20ac20:	e5911000 	ldr	r1, [r1]
        20ac24:	e5a10028 	str	r0, [r1, #40]!	; fField40
        20ac28:	ea00000a 	b	20ac58 <TController::NextIdleTime(void)+0x128>
        20ac2c:	0c10187c 	ldceq	8, cr1, [r0], -#496
        20ac30:	e0450000 	sub	r0, r5, r0
        20ac34:	e3500000 	cmp	r0, #0	; 0x0
        20ac38:	da000006 	ble	20ac58 <TController::NextIdleTime(void)+0x128>
        20ac3c:	e0801080 	add	r1, r0, r0, lsl #1
        20ac40:	e0611380 	rsb	r1, r1, r0, lsl #7
        20ac44:	e1a01181 	mov	r1, r1, lsl #3
        20ac48:	e3a0003c 	mov	r0, #60	; 0x3c
        20ac4c:	eb669f3d 	bl	1bb2948 <$__rt_udiv>
        20ac50:	e3500000 	cmp	r0, #0	; 0x0
        20ac54:	291ba9f0 	ldmcsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        20ac58:	e3a00000 	mov	r0, #0	; 0x0
        20ac5c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TController::DoArbitration(void)
 * Address: 0020ac60
 */
TController::DoArbitration(void) {
    /*
        20ac60:	e1a0c00d 	mov	ip, sp
        20ac64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20ac68:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ac6c:	e1a04000 	mov	r4, r0
        20ac70:	e5900018 	ldr	r0, [r0, #24]	; fField24
        20ac74:	eb654c8d 	bl	1b5deb0 <TArbiter::$DoArbitration(void)>
        20ac78:	e3e00000 	mvn	r0, #0	; 0x0
        20ac7c:	e5a40028 	str	r0, [r4, #40]!	; fField40
        20ac80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TController::DoGroup(void)
 * Address: 0020ad54
 */
TController::DoGroup(void) {
    /*
        20ad54:	e1a0c00d 	mov	ip, sp
        20ad58:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20ad5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ad60:	e1a04000 	mov	r4, r0
        20ad64:	e24dd020 	sub	sp, sp, #32	; 0x20
        20ad68:	e3a06000 	mov	r6, #0	; 0x0
        20ad6c:	e3a09000 	mov	r9, #0	; 0x0
        20ad70:	e3a08000 	mov	r8, #0	; 0x0
        20ad74:	e5900014 	ldr	r0, [r0, #20]	; fField20
        20ad78:	e1a0100d 	mov	r1, sp
        20ad7c:	eb65507c 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20ad80:	e1a05000 	mov	r5, r0
        20ad84:	e3a07000 	mov	r7, #0	; 0x0
        20ad88:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        20ad8c:	e3500000 	cmp	r0, #0	; 0x0
        20ad90:	9a000064 	bls	20af28 <TController::DoGroup(void)+0x1d4>
        20ad94:	e59fa0a4 	ldr	sl, [pc, #a4]	; 20ae40 <TController::DoGroup(void)+0xec>
        20ad98:	e5950000 	ldr	r0, [r5]
        20ad9c:	e3300000 	teq	r0, #0	; 0x0
        20ada0:	0a000058 	beq	20af08 <TController::DoGroup(void)+0x1b4>
        20ada4:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        20ada8:	eb65610e 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20adac:	e3300000 	teq	r0, #0	; 0x0
        20adb0:	1a000054 	bne	20af08 <TController::DoGroup(void)+0x1b4>
        20adb4:	e5950000 	ldr	r0, [r5]
        20adb8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20adbc:	e130000a 	teq	r0, sl
        20adc0:	1a000002 	bne	20add0 <TController::DoGroup(void)+0x7c>
        20adc4:	e2899001 	add	r9, r9, #1	; 0x1
        20adc8:	e3590001 	cmp	r9, #1	; 0x1
        20adcc:	8a000005 	bhi	20ade8 <TController::DoGroup(void)+0x94>
        20add0:	e59fc06c 	ldr	ip, [pc, #6c]	; 20ae44 <TController::DoGroup(void)+0xf0>
        20add4:	e130000c 	teq	r0, ip
        20add8:	1a00001a 	bne	20ae48 <TController::DoGroup(void)+0xf4>
        20addc:	e2888001 	add	r8, r8, #1	; 0x1
        20ade0:	e3580001 	cmp	r8, #1	; 0x1
        20ade4:	9a000017 	bls	20ae48 <TController::DoGroup(void)+0xf4>
        20ade8:	e1a01007 	mov	r1, r7
        20adec:	e5942014 	ldr	r2, [r4, #20]	; fField20
        20adf0:	e1a00002 	mov	r0, r2
        20adf4:	e5922000 	ldr	r2, [r2]
        20adf8:	e1a0e00f 	mov	lr, pc
        20adfc:	e282f01c 	add	pc, r2, #28	; 0x1c
        20ae00:	e1a05000 	mov	r5, r0
        20ae04:	e1a01006 	mov	r1, r6
        20ae08:	e5942014 	ldr	r2, [r4, #20]	; fField20
        20ae0c:	e1a00002 	mov	r0, r2
        20ae10:	e5922000 	ldr	r2, [r2]
        20ae14:	e1a0e00f 	mov	lr, pc
        20ae18:	e282f01c 	add	pc, r2, #28	; 0x1c
        20ae1c:	e3a02010 	mov	r2, #16	; 0x10
        20ae20:	e1a01005 	mov	r1, r5
        20ae24:	eb66a709 	bl	1bb4a50 <$memcpy>
        20ae28:	e1a0000d 	mov	r0, sp
        20ae2c:	e1a0e00f 	mov	lr, pc
        20ae30:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20ae34:	e1a05000 	mov	r5, r0
        20ae38:	e2866001 	add	r6, r6, #1	; 0x1
        20ae3c:	ea000035 	b	20af18 <TController::DoGroup(void)+0x1c4>
        20ae40:	53545852 	cmppl	r4, #5373952	; 0x520000
        20ae44:	434c494b 	cmpmi	ip, #1228800	; 0x12c000
        20ae48:	e595100c 	ldr	r1, [r5, #12]	; fField12
        20ae4c:	e5952004 	ldr	r2, [r5, #4]	; fField4
        20ae50:	e5920020 	ldr	r0, [r2, #32]	; fField32
        20ae54:	e1310000 	teq	r1, r0
        20ae58:	0a00000d 	beq	20ae94 <TController::DoGroup(void)+0x140>
        20ae5c:	e1a00002 	mov	r0, r2
        20ae60:	e5922000 	ldr	r2, [r2]
        20ae64:	e1a0e00f 	mov	lr, pc
        20ae68:	e282f030 	add	pc, r2, #48	; 0x30
        20ae6c:	e1a0000d 	mov	r0, sp
        20ae70:	e1a0e00f 	mov	lr, pc
        20ae74:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        20ae78:	e1a05000 	mov	r5, r0
        20ae7c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20ae80:	e5951004 	ldr	r1, [r5, #4]	; fField4
        20ae84:	e5a10020 	str	r0, [r1, #32]!	; fField32
        20ae88:	e5950004 	ldr	r0, [r5, #4]	; fField4
        20ae8c:	e595100c 	ldr	r1, [r5, #12]	; fField12
        20ae90:	eb656904 	bl	1b652a8 <$HandleAreaSwitched(TDomain *, char **)>
        20ae94:	e895000a 	ldmia	r5, {r1, r3}
        20ae98:	e5952008 	ldr	r2, [r5, #8]	; fField8
        20ae9c:	e1a00003 	mov	r0, r3
        20aea0:	e5933000 	ldr	r3, [r3]
        20aea4:	e1a0e00f 	mov	lr, pc
        20aea8:	e283f018 	add	pc, r3, #24	; 0x18
        20aeac:	e3300000 	teq	r0, #0	; 0x0
        20aeb0:	1a000010 	bne	20aef8 <TController::DoGroup(void)+0x1a4>
        20aeb4:	e1a01007 	mov	r1, r7
        20aeb8:	e5942014 	ldr	r2, [r4, #20]	; fField20
        20aebc:	e1a00002 	mov	r0, r2
        20aec0:	e5922000 	ldr	r2, [r2]
        20aec4:	e1a0e00f 	mov	lr, pc
        20aec8:	e282f01c 	add	pc, r2, #28	; 0x1c
        20aecc:	e1a05000 	mov	r5, r0
        20aed0:	e1a01006 	mov	r1, r6
        20aed4:	e5942014 	ldr	r2, [r4, #20]	; fField20
        20aed8:	e1a00002 	mov	r0, r2
        20aedc:	e5922000 	ldr	r2, [r2]
        20aee0:	e1a0e00f 	mov	lr, pc
        20aee4:	e282f01c 	add	pc, r2, #28	; 0x1c
        20aee8:	e3a02010 	mov	r2, #16	; 0x10
        20aeec:	e1a01005 	mov	r1, r5
        20aef0:	eb66a6d6 	bl	1bb4a50 <$memcpy>
        20aef4:	e2866001 	add	r6, r6, #1	; 0x1
        20aef8:	e1a00004 	mov	r0, r4
        20aefc:	eb6547d1 	bl	1b5ce48 <TController::$ControllerError(void)>
        20af00:	e3300000 	teq	r0, #0	; 0x0
        20af04:	1a000007 	bne	20af28 <TController::DoGroup(void)+0x1d4>
        20af08:	e1a0000d 	mov	r0, sp
        20af0c:	e1a0e00f 	mov	lr, pc
        20af10:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20af14:	e1a05000 	mov	r5, r0
        20af18:	e2877001 	add	r7, r7, #1	; 0x1
        20af1c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        20af20:	e1500007 	cmp	r0, r7
        20af24:	8affff9b 	bhi	20ad98 <TController::DoGroup(void)+0x44>
        20af28:	e1a01006 	mov	r1, r6
        20af2c:	e5942014 	ldr	r2, [r4, #20]	; fField20
        20af30:	e1a00002 	mov	r0, r2
        20af34:	e5922000 	ldr	r2, [r2]
        20af38:	e1a0e00f 	mov	lr, pc
        20af3c:	e282f028 	add	pc, r2, #40	; 0x28
        20af40:	e3590001 	cmp	r9, #1	; 0x1
        20af44:	93580001 	cmpls	r8, #1	; 0x1
        20af48:	9a000001 	bls	20af54 <TController::DoGroup(void)+0x200>
        20af4c:	eb6585ac 	bl	1b6c604 <$GetTicks(void)>
        20af50:	ea000000 	b	20af58 <TController::DoGroup(void)+0x204>
        20af54:	e3e00000 	mvn	r0, #0	; 0x0
        20af58:	e5a40024 	str	r0, [r4, #36]!	; fField36
        20af5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TController::DoClassify(void)
 * Address: 0020af60
 */
TController::DoClassify(void) {
    /*
        20af60:	e1a0c00d 	mov	ip, sp
        20af64:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20af68:	e24cb004 	sub	fp, ip, #4	; 0x4
        20af6c:	e1a04000 	mov	r4, r0
        20af70:	e24dd020 	sub	sp, sp, #32	; 0x20
        20af74:	e3a07000 	mov	r7, #0	; 0x0
        20af78:	e3e00000 	mvn	r0, #0	; 0x0
        20af7c:	e5840020 	str	r0, [r4, #32]	; fField32
        20af80:	e1a00004 	mov	r0, r4
        20af84:	e3a01302 	mov	r1, #134217728	; 0x8000000
        20af88:	eb656096 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20af8c:	e1a0a000 	mov	sl, r0
        20af90:	e1a0100d 	mov	r1, sp
        20af94:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20af98:	eb654ff5 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20af9c:	e3a08000 	mov	r8, #0	; 0x0
        20afa0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20afa4:	e3510000 	cmp	r1, #0	; 0x0
        20afa8:	9a000069 	bls	20b154 <TController::DoClassify(void)+0x1f4>
        20afac:	e5900000 	ldr	r0, [r0]
        20afb0:	e1a05000 	mov	r5, r0
        20afb4:	e3a01682 	mov	r1, #136314880	; 0x8200000
        20afb8:	e2811206 	add	r1, r1, #1610612736	; 0x60000000
        20afbc:	eb656089 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20afc0:	e3300000 	teq	r0, #0	; 0x0
        20afc4:	1a00005b 	bne	20b138 <TController::DoClassify(void)+0x1d8>
        20afc8:	e5956014 	ldr	r6, [r5, #20]	; fField20
        20afcc:	e5d50027 	ldrb	r0, [r5, #39]	; fField39
        20afd0:	e3500000 	cmp	r0, #0	; 0x0
        20afd4:	9a000033 	bls	20b0a8 <TController::DoClassify(void)+0x148>
        20afd8:	e33a0000 	teq	sl, #0	; 0x0
        20afdc:	1a000005 	bne	20aff8 <TController::DoClassify(void)+0x98>
        20afe0:	e1a01005 	mov	r1, r5
        20afe4:	e1a00004 	mov	r0, r4
        20afe8:	e3a02000 	mov	r2, #0	; 0x0
        20afec:	eb65583d 	bl	1b610e8 <TController::$NoEventsWithinDelay(TUnit *, unsigned long)>
        20aff0:	e3300000 	teq	r0, #0	; 0x0
        20aff4:	0a000022 	beq	20b084 <TController::DoClassify(void)+0x124>
        20aff8:	e1a00005 	mov	r0, r5
        20affc:	e3a01302 	mov	r1, #134217728	; 0x8000000
        20b000:	eb656078 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20b004:	e3300000 	teq	r0, #0	; 0x0
        20b008:	1a00004a 	bne	20b138 <TController::DoClassify(void)+0x1d8>
        20b00c:	e1a00005 	mov	r0, r5
        20b010:	eb65689a 	bl	1b65280 <TUnit::$GetArea(void)>
        20b014:	e3300000 	teq	r0, #0	; 0x0
        20b018:	13a07000 	movne	r7, #0	; 0x0
        20b01c:	03a07001 	moveq	r7, #1	; 0x1
        20b020:	e3370000 	teq	r7, #0	; 0x0
        20b024:	1a00004a 	bne	20b154 <TController::DoClassify(void)+0x1f4>
        20b028:	e3a02000 	mov	r2, #0	; 0x0
        20b02c:	e5951008 	ldr	r1, [r5, #8]	; fField8
        20b030:	eb654fcc 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
        20b034:	e1b09000 	movs	r9, r0
        20b038:	15960020 	ldrne	r0, [r6, #32]	; fField32
        20b03c:	11300009 	teqne	r0, r9
        20b040:	0a000005 	beq	20b05c <TController::DoClassify(void)+0xfc>
        20b044:	e1a01009 	mov	r1, r9
        20b048:	e1a00006 	mov	r0, r6
        20b04c:	e5962000 	ldr	r2, [r6]
        20b050:	e1a0e00f 	mov	lr, pc
        20b054:	e282f030 	add	pc, r2, #48	; 0x30
        20b058:	e5869020 	str	r9, [r6, #32]	; fField32
        20b05c:	e1a01005 	mov	r1, r5
        20b060:	e1a00006 	mov	r0, r6
        20b064:	e5962000 	ldr	r2, [r6]
        20b068:	e1a0e00f 	mov	lr, pc
        20b06c:	e282f010 	add	pc, r2, #16	; 0x10
        20b070:	e1a00004 	mov	r0, r4
        20b074:	eb654773 	bl	1b5ce48 <TController::$ControllerError(void)>
        20b078:	e3300000 	teq	r0, #0	; 0x0
        20b07c:	1a000034 	bne	20b154 <TController::DoClassify(void)+0x1f4>
        20b080:	ea00002c 	b	20b138 <TController::DoClassify(void)+0x1d8>
        20b084:	e595001c 	ldr	r0, [r5, #28]	; fField28
        20b088:	e5951020 	ldr	r1, [r5, #32]	; fField32
        20b08c:	e0800821 	add	r0, r0, r1, lsr #16
        20b090:	e5d51027 	ldrb	r1, [r5, #39]	; fField39
        20b094:	e0800001 	add	r0, r0, r1
        20b098:	e5941020 	ldr	r1, [r4, #32]	; fField32
        20b09c:	e1510000 	cmp	r1, r0
        20b0a0:	85840020 	strhi	r0, [r4, #32]	; fField32
        20b0a4:	ea000023 	b	20b138 <TController::DoClassify(void)+0x1d8>
        20b0a8:	e5d50026 	ldrb	r0, [r5, #38]	; fField38
        20b0ac:	e1a00c00 	mov	r0, r0, lsl #24
        20b0b0:	e1b00c40 	movs	r0, r0, asr #24
        20b0b4:	1a00001d 	bne	20b130 <TController::DoClassify(void)+0x1d0>
        20b0b8:	e1a00005 	mov	r0, r5
        20b0bc:	eb65686f 	bl	1b65280 <TUnit::$GetArea(void)>
        20b0c0:	e3300000 	teq	r0, #0	; 0x0
        20b0c4:	13a07000 	movne	r7, #0	; 0x0
        20b0c8:	03a07001 	moveq	r7, #1	; 0x1
        20b0cc:	e3370000 	teq	r7, #0	; 0x0
        20b0d0:	1a00001f 	bne	20b154 <TController::DoClassify(void)+0x1f4>
        20b0d4:	e3a02000 	mov	r2, #0	; 0x0
        20b0d8:	e5951008 	ldr	r1, [r5, #8]	; fField8
        20b0dc:	eb654fa1 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
        20b0e0:	e1b09000 	movs	r9, r0
        20b0e4:	15960020 	ldrne	r0, [r6, #32]	; fField32
        20b0e8:	11300009 	teqne	r0, r9
        20b0ec:	0a000005 	beq	20b108 <TController::DoClassify(void)+0x1a8>
        20b0f0:	e1a01009 	mov	r1, r9
        20b0f4:	e1a00006 	mov	r0, r6
        20b0f8:	e5962000 	ldr	r2, [r6]
        20b0fc:	e1a0e00f 	mov	lr, pc
        20b100:	e282f030 	add	pc, r2, #48	; 0x30
        20b104:	e5869020 	str	r9, [r6, #32]	; fField32
        20b108:	e1a01005 	mov	r1, r5
        20b10c:	e1a00006 	mov	r0, r6
        20b110:	e5962000 	ldr	r2, [r6]
        20b114:	e1a0e00f 	mov	lr, pc
        20b118:	e282f010 	add	pc, r2, #16	; 0x10
        20b11c:	e1a00004 	mov	r0, r4
        20b120:	eb654748 	bl	1b5ce48 <TController::$ControllerError(void)>
        20b124:	e3300000 	teq	r0, #0	; 0x0
        20b128:	1a000009 	bne	20b154 <TController::DoClassify(void)+0x1f4>
        20b12c:	ea000001 	b	20b138 <TController::DoClassify(void)+0x1d8>
        20b130:	e2400001 	sub	r0, r0, #1	; 0x1
        20b134:	e5c50026 	strb	r0, [r5, #38]	; fField38
        20b138:	e1a0000d 	mov	r0, sp
        20b13c:	e1a0e00f 	mov	lr, pc
        20b140:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20b144:	e2888001 	add	r8, r8, #1	; 0x1
        20b148:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b14c:	e1510008 	cmp	r1, r8
        20b150:	8affff95 	bhi	20afac <TController::DoClassify(void)+0x4c>
        20b154:	e1a0100d 	mov	r1, sp
        20b158:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20b15c:	eb654f84 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20b160:	e3a05000 	mov	r5, #0	; 0x0
        20b164:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b168:	e3510000 	cmp	r1, #0	; 0x0
        20b16c:	9a000018 	bls	20b1d4 <TController::DoClassify(void)+0x274>
        20b170:	e5900000 	ldr	r0, [r0]
        20b174:	e1a06000 	mov	r6, r0
        20b178:	e3a01602 	mov	r1, #2097152	; 0x200000
        20b17c:	eb656019 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20b180:	e3300000 	teq	r0, #0	; 0x0
        20b184:	0a00000b 	beq	20b1b8 <TController::DoClassify(void)+0x258>
        20b188:	e1a00006 	mov	r0, r6
        20b18c:	e1a0e00f 	mov	lr, pc
        20b190:	e596f000 	ldr	pc, [r6]
        20b194:	e1a01005 	mov	r1, r5
        20b198:	e594200c 	ldr	r2, [r4, #12]	; fField12
        20b19c:	e1a00002 	mov	r0, r2
        20b1a0:	e5922000 	ldr	r2, [r2]
        20b1a4:	e1a0e00f 	mov	lr, pc
        20b1a8:	e282f040 	add	pc, r2, #64	; 0x40
        20b1ac:	e1a0000d 	mov	r0, sp
        20b1b0:	eb656c53 	bl	1b66304 <$RemoveCurrent(TArrayIterator *)>
        20b1b4:	e2455001 	sub	r5, r5, #1	; 0x1
        20b1b8:	e1a0000d 	mov	r0, sp
        20b1bc:	e1a0e00f 	mov	lr, pc
        20b1c0:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20b1c4:	e2855001 	add	r5, r5, #1	; 0x1
        20b1c8:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b1cc:	e1510005 	cmp	r1, r5
        20b1d0:	8affffe6 	bhi	20b170 <TController::DoClassify(void)+0x210>
        20b1d4:	e3370000 	teq	r7, #0	; 0x0
        20b1d8:	11a00004 	movne	r0, r4
        20b1dc:	1b655fed 	blne	1b63198 <TController::$SignalMemoryError(void)>
        20b1e0:	e1a00007 	mov	r0, r7
        20b1e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TController::Dispose(void)
 * Address: 0020b1e8
 */
TController::Dispose(void) {
    /*
        20b1e8:	e1a0c00d 	mov	ip, sp
        20b1ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20b1f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b1f4:	e1a04000 	mov	r4, r0
        20b1f8:	e24dd020 	sub	sp, sp, #32	; 0x20
        20b1fc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20b200:	eb655bc2 	bl	1b62110 <TUnitList::$Purge(void)>
        20b204:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20b208:	e1a0e00f 	mov	lr, pc
        20b20c:	e590f000 	ldr	pc, [r0]
        20b210:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20b214:	eb655bbd 	bl	1b62110 <TUnitList::$Purge(void)>
        20b218:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20b21c:	e1a0e00f 	mov	lr, pc
        20b220:	e590f000 	ldr	pc, [r0]
        20b224:	e1a0100d 	mov	r1, sp
        20b228:	e5940010 	ldr	r0, [r4, #16]	; fField16
        20b22c:	eb654f50 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20b230:	e3a05000 	mov	r5, #0	; 0x0
        20b234:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b238:	e3510000 	cmp	r1, #0	; 0x0
        20b23c:	9a000009 	bls	20b268 <TController::Dispose(void)+0x80>
        20b240:	e5900000 	ldr	r0, [r0]
        20b244:	e1a0e00f 	mov	lr, pc
        20b248:	e590f000 	ldr	pc, [r0]
        20b24c:	e1a0000d 	mov	r0, sp
        20b250:	e1a0e00f 	mov	lr, pc
        20b254:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20b258:	e2855001 	add	r5, r5, #1	; 0x1
        20b25c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b260:	e1510005 	cmp	r1, r5
        20b264:	8afffff5 	bhi	20b240 <TController::Dispose(void)+0x58>
        20b268:	e5940010 	ldr	r0, [r4, #16]	; fField16
        20b26c:	e1a0e00f 	mov	lr, pc
        20b270:	e590f000 	ldr	pc, [r0]
        20b274:	e5940014 	ldr	r0, [r4, #20]	; fField20
        20b278:	e1a0e00f 	mov	lr, pc
        20b27c:	e590f000 	ldr	pc, [r0]
        20b280:	e3340000 	teq	r4, #0	; 0x0
        20b284:	0a000004 	beq	20b29c <TController::Dispose(void)+0xb4>
        20b288:	e1a00004 	mov	r0, r4
        20b28c:	e3a01000 	mov	r1, #0	; 0x0
        20b290:	eb0045c8 	bl	21c9b8 <TRecObject::__dt(void)>
        20b294:	e1a00004 	mov	r0, r4
        20b298:	eb670910 	bl	1bcd6e0 <$__dl(void *)>
        20b29c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TController::NoEventsWithinDelay(TUnit *, unsigned long)
 * Address: 0020b2a0
 */
TController::NoEventsWithinDelay(TUnit *, unsigned long) {
    /*
        20b2a0:	e1a0c00d 	mov	ip, sp
        20b2a4:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20b2a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b2ac:	e1a04001 	mov	r4, r1
        20b2b0:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        20b2b4:	e5d11027 	ldrb	r1, [r1, #39]	; fField39
        20b2b8:	e3a05000 	mov	r5, #0	; 0x0
        20b2bc:	e3a07000 	mov	r7, #0	; 0x0
        20b2c0:	e58d1000 	str	r1, [sp]
        20b2c4:	e3310000 	teq	r1, #0	; 0x0
        20b2c8:	e58d5024 	str	r5, [sp, #36]	; fField36
        20b2cc:	0a0000a9 	beq	20b578 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2d8>
        20b2d0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        20b2d4:	e5941020 	ldr	r1, [r4, #32]	; fField32
        20b2d8:	e0808821 	add	r8, r0, r1, lsr #16
        20b2dc:	eb6584c8 	bl	1b6c604 <$GetTicks(void)>
        20b2e0:	e59d1000 	ldr	r1, [sp]
        20b2e4:	e0889001 	add	r9, r8, r1
        20b2e8:	e1500009 	cmp	r0, r9
        20b2ec:	9a0000a3 	bls	20b580 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2e0>
        20b2f0:	e51b0034 	ldr	r0, [fp, -#52]
        20b2f4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20b2f8:	e28d1004 	add	r1, sp, #4	; 0x4
        20b2fc:	eb654f1c 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20b300:	e3a0a000 	mov	sl, #0	; 0x0
        20b304:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        20b308:	e3510000 	cmp	r1, #0	; 0x0
        20b30c:	9a000021 	bls	20b398 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0xf8>
        20b310:	e5906000 	ldr	r6, [r0]
        20b314:	e596001c 	ldr	r0, [r6, #28]	; fField28
        20b318:	e58d0028 	str	r0, [sp, #40]	; fField40
        20b31c:	e1500008 	cmp	r0, r8
        20b320:	859d0028 	ldrhi	r0, [sp, #40]	; fField40
        20b324:	81590000 	cmphi	r9, r0
        20b328:	9a00000e 	bls	20b368 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0xc8>
        20b32c:	e1a01006 	mov	r1, r6
        20b330:	e1a00004 	mov	r0, r4
        20b334:	eb656c0f 	bl	1b66378 <$UnitsHitSameArea__FP5TUnitT1>
        20b338:	e3300000 	teq	r0, #0	; 0x0
        20b33c:	0a000009 	beq	20b368 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0xc8>
        20b340:	e5960008 	ldr	r0, [r6, #8]	; fField8
        20b344:	e59fc0a8 	ldr	ip, [pc, #a8]	; 20b3f4 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x154>
        20b348:	e130000c 	teq	r0, ip
        20b34c:	1a000025 	bne	20b3e8 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x148>
        20b350:	e3370000 	teq	r7, #0	; 0x0
        20b354:	1a000003 	bne	20b368 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0xc8>
        20b358:	e5960030 	ldr	r0, [r6, #48]
        20b35c:	eb658091 	bl	1b6b5a8 <TStroke::$Done(void)>
        20b360:	e3300000 	teq	r0, #0	; 0x0
        20b364:	01a07006 	moveq	r7, r6
        20b368:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        20b36c:	e1590000 	cmp	r9, r0
        20b370:	3a000006 	bcc	20b390 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0xf0>
        20b374:	e28d0004 	add	r0, sp, #4	; 0x4
        20b378:	e1a0e00f 	mov	lr, pc
        20b37c:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        20b380:	e28aa001 	add	sl, sl, #1	; 0x1
        20b384:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        20b388:	e151000a 	cmp	r1, sl
        20b38c:	8affffdf 	bhi	20b310 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x70>
        20b390:	e3350000 	teq	r5, #0	; 0x0
        20b394:	1a000021 	bne	20b420 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x180>
        20b398:	e51b0034 	ldr	r0, [fp, -#52]
        20b39c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20b3a0:	e28d1004 	add	r1, sp, #4	; 0x4
        20b3a4:	eb654ef2 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20b3a8:	e3a0a000 	mov	sl, #0	; 0x0
        20b3ac:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        20b3b0:	e3510000 	cmp	r1, #0	; 0x0
        20b3b4:	9a00001b 	bls	20b428 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x188>
        20b3b8:	e5906000 	ldr	r6, [r0]
        20b3bc:	e596001c 	ldr	r0, [r6, #28]	; fField28
        20b3c0:	e58d0028 	str	r0, [sp, #40]	; fField40
        20b3c4:	e1500008 	cmp	r0, r8
        20b3c8:	859d0028 	ldrhi	r0, [sp, #40]	; fField40
        20b3cc:	81590000 	cmphi	r9, r0
        20b3d0:	9a000008 	bls	20b3f8 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x158>
        20b3d4:	e1a01006 	mov	r1, r6
        20b3d8:	e1a00004 	mov	r0, r4
        20b3dc:	eb656be5 	bl	1b66378 <$UnitsHitSameArea__FP5TUnitT1>
        20b3e0:	e3300000 	teq	r0, #0	; 0x0
        20b3e4:	0a000003 	beq	20b3f8 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x158>
        20b3e8:	e3a05001 	mov	r5, #1	; 0x1
        20b3ec:	e58d6024 	str	r6, [sp, #36]	; fField36
        20b3f0:	ea000011 	b	20b43c <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x19c>
        20b3f4:	434c494b 	cmpmi	ip, #1228800	; 0x12c000
        20b3f8:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        20b3fc:	e1590000 	cmp	r9, r0
        20b400:	3a000006 	bcc	20b420 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x180>
        20b404:	e28d0004 	add	r0, sp, #4	; 0x4
        20b408:	e1a0e00f 	mov	lr, pc
        20b40c:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        20b410:	e28aa001 	add	sl, sl, #1	; 0x1
        20b414:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        20b418:	e151000a 	cmp	r1, sl
        20b41c:	8affffe5 	bhi	20b3b8 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x118>
        20b420:	e3350000 	teq	r5, #0	; 0x0
        20b424:	1a000004 	bne	20b43c <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x19c>
        20b428:	e1a00008 	mov	r0, r8
        20b42c:	e59d1000 	ldr	r1, [sp]
        20b430:	eb654268 	bl	1b5bdd8 <$CheckStrokeQueueEvents__FUlT1>
        20b434:	e3300000 	teq	r0, #0	; 0x0
        20b438:	13a05001 	movne	r5, #1	; 0x1
        20b43c:	e59d6024 	ldr	r6, [sp, #36]	; fField36
        20b440:	e3360000 	teq	r6, #0	; 0x0
        20b444:	03370000 	teqeq	r7, #0	; 0x0
        20b448:	0a000048 	beq	20b570 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2d0>
        20b44c:	e3370000 	teq	r7, #0	; 0x0
        20b450:	e5946014 	ldr	r6, [r4, #20]	; fField20
        20b454:	0a000041 	beq	20b560 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2c0>
        20b458:	e1a00006 	mov	r0, r6
        20b45c:	e3a01000 	mov	r1, #0	; 0x0
        20b460:	e5962000 	ldr	r2, [r6]
        20b464:	e1a0e00f 	mov	lr, pc
        20b468:	e282f01c 	add	pc, r2, #28	; 0x1c
        20b46c:	e3300000 	teq	r0, #0	; 0x0
        20b470:	0a00003a 	beq	20b560 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2c0>
        20b474:	e596000c 	ldr	r0, [r6, #12]	; fField12
        20b478:	e59f10a8 	ldr	r1, [pc, #a8]	; 20b528 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x288>
        20b47c:	eb654ea7 	bl	1b5ef20 <TTypeList::$FindType(unsigned long)>
        20b480:	e3700001 	cmn	r0, #1	; 0x1
        20b484:	0a000035 	beq	20b560 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2c0>
        20b488:	e5970030 	ldr	r0, [r7, #48]
        20b48c:	e1a01000 	mov	r1, r0
        20b490:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20b494:	e3500032 	cmp	r0, #50	; 0x32
        20b498:	3a000024 	bcc	20b530 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x290>
        20b49c:	e1a00001 	mov	r0, r1
        20b4a0:	eb65465f 	bl	1b5ce24 <TArray::$Clone(void)>
        20b4a4:	e5972030 	ldr	r2, [r7, #48]
        20b4a8:	e59f007c 	ldr	r0, [pc, #7c]	; 20b52c <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x28c>
        20b4ac:	e5900000 	ldr	r0, [r0]
        20b4b0:	e3a03000 	mov	r3, #0	; 0x0
        20b4b4:	e3a01002 	mov	r1, #2	; 0x2
        20b4b8:	eb658461 	bl	1b6c644 <$Make__11TStrokeUnitSFP7TDomainUlP7TStrokeP6TArray>
        20b4bc:	e1b08000 	movs	r8, r0
        20b4c0:	0a00002a 	beq	20b570 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2d0>
        20b4c4:	e1a01007 	mov	r1, r7
        20b4c8:	e1a00008 	mov	r0, r8
        20b4cc:	e5982000 	ldr	r2, [r8]
        20b4d0:	e1a0e00f 	mov	lr, pc
        20b4d4:	e282f054 	add	pc, r2, #84	; 0x54
        20b4d8:	e1a00008 	mov	r0, r8
        20b4dc:	e5981000 	ldr	r1, [r8]
        20b4e0:	e1a0e00f 	mov	lr, pc
        20b4e4:	e281f060 	add	pc, r1, #96	; 0x60
        20b4e8:	e1a01008 	mov	r1, r8
        20b4ec:	e1a00006 	mov	r0, r6
        20b4f0:	e5962000 	ldr	r2, [r6]
        20b4f4:	e1a0e00f 	mov	lr, pc
        20b4f8:	e282f01c 	add	pc, r2, #28	; 0x1c
        20b4fc:	e3300000 	teq	r0, #0	; 0x0
        20b500:	13a00000 	movne	r0, #0	; 0x0
        20b504:	03a00001 	moveq	r0, #1	; 0x1
        20b508:	e21050ff 	ands	r5, r0, #255	; 0xff
        20b50c:	11a00004 	movne	r0, r4
        20b510:	13a010ff 	movne	r1, #255	; 0xff
        20b514:	1b655b12 	blne	1b62164 <TUnit::$SetDelay(unsigned long)>
        20b518:	e1a00008 	mov	r0, r8
        20b51c:	e1a0e00f 	mov	lr, pc
        20b520:	e598f000 	ldr	pc, [r8]
        20b524:	ea000011 	b	20b570 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2d0>
        20b528:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
        20b52c:	0c101680 	ldceq	6, cr1, [r0], -#512
        20b530:	e3a05001 	mov	r5, #1	; 0x1
        20b534:	e2600032 	rsb	r0, r0, #50	; 0x32
        20b538:	e0601200 	rsb	r1, r0, r0, lsl #4
        20b53c:	e1a01101 	mov	r1, r1, lsl #2
        20b540:	e3a0003c 	mov	r0, #60	; 0x3c
        20b544:	eb669cff 	bl	1bb2948 <$__rt_udiv>
        20b548:	e1a06000 	mov	r6, r0
        20b54c:	eb65842c 	bl	1b6c604 <$GetTicks(void)>
        20b550:	e0400008 	sub	r0, r0, r8
        20b554:	e0801006 	add	r1, r0, r6
        20b558:	e1a00004 	mov	r0, r4
        20b55c:	ea000002 	b	20b56c <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2cc>
        20b560:	e3a05001 	mov	r5, #1	; 0x1
        20b564:	e1a00004 	mov	r0, r4
        20b568:	e3a010ff 	mov	r1, #255	; 0xff
        20b56c:	eb655afc 	bl	1b62164 <TUnit::$SetDelay(unsigned long)>
        20b570:	e3350000 	teq	r5, #0	; 0x0
        20b574:	1a000001 	bne	20b580 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2e0>
        20b578:	e3a00001 	mov	r0, #1	; 0x1
        20b57c:	ea000000 	b	20b584 <TController::NoEventsWithinDelay(TUnit *, unsigned long)+0x2e4>
        20b580:	e3a00000 	mov	r0, #0	; 0x0
        20b584:	e20000ff 	and	r0, r0, #255	; 0xff
        20b588:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TController::TimeOut(unsigned long)
 * Address: 0020b604
 */
TController::TimeOut(unsigned long) {
    /*
        20b604:	e1a0c00d 	mov	ip, sp
        20b608:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20b60c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b610:	e1a04001 	mov	r4, r1
        20b614:	e24dd020 	sub	sp, sp, #32	; 0x20
        20b618:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20b61c:	e1a0100d 	mov	r1, sp
        20b620:	eb654e53 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20b624:	e3a05000 	mov	r5, #0	; 0x0
        20b628:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b62c:	e3510000 	cmp	r1, #0	; 0x0
        20b630:	9a000013 	bls	20b684 <TController::TimeOut(unsigned long)+0x80>
        20b634:	e5900000 	ldr	r0, [r0]
        20b638:	e1a06000 	mov	r6, r0
        20b63c:	e3a0131a 	mov	r1, #1744830464	; 0x68000000
        20b640:	eb655ee8 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20b644:	e3300000 	teq	r0, #0	; 0x0
        20b648:	05960008 	ldreq	r0, [r6, #8]	; fField8
        20b64c:	01300004 	teqeq	r0, r4
        20b650:	1a000004 	bne	20b668 <TController::TimeOut(unsigned long)+0x64>
        20b654:	e1a00006 	mov	r0, r6
        20b658:	e3a01000 	mov	r1, #0	; 0x0
        20b65c:	eb655ac0 	bl	1b62164 <TUnit::$SetDelay(unsigned long)>
        20b660:	e1a00006 	mov	r0, r6
        20b664:	ebffffc8 	bl	20b58c <TimeOutSubs(TSIUnit *)>
        20b668:	e1a0000d 	mov	r0, sp
        20b66c:	e1a0e00f 	mov	lr, pc
        20b670:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20b674:	e2855001 	add	r5, r5, #1	; 0x1
        20b678:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b67c:	e1510005 	cmp	r1, r5
        20b680:	8affffeb 	bhi	20b634 <TController::TimeOut(unsigned long)+0x30>
        20b684:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TController::CleanUp(void)
 * Address: 0020b688
 */
TController::CleanUp(void) {
    /*
        20b688:	e1a0c00d 	mov	ip, sp
        20b68c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20b690:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b694:	e1a04000 	mov	r4, r0
        20b698:	e5900018 	ldr	r0, [r0, #24]	; fField24
        20b69c:	eb6541d5 	bl	1b5bdf8 <TArbiter::$CleanUp(void)>
        20b6a0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20b6a4:	e5901000 	ldr	r1, [r0]
        20b6a8:	e1a0e00f 	mov	lr, pc
        20b6ac:	e281f024 	add	pc, r1, #36	; 0x24
        20b6b0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20b6b4:	e5901000 	ldr	r1, [r0]
        20b6b8:	e1a0e00f 	mov	lr, pc
        20b6bc:	e281f024 	add	pc, r1, #36	; 0x24
        20b6c0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        20b6c4:	e5901000 	ldr	r1, [r0]
        20b6c8:	e1a0e00f 	mov	lr, pc
        20b6cc:	e281f024 	add	pc, r1, #36	; 0x24
        20b6d0:	e3e00000 	mvn	r0, #0	; 0x0
        20b6d4:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        20b6d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)
 * Address: 0020b6dc
 */
TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long) {
    /*
        20b6dc:	e1a0c00d 	mov	ip, sp
        20b6e0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        20b6e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20b6e8:	e24cb014 	sub	fp, ip, #20	; 0x14
        20b6ec:	e1a05000 	mov	r5, r0
        20b6f0:	e1a04001 	mov	r4, r1
        20b6f4:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        20b6f8:	e24dd020 	sub	sp, sp, #32	; 0x20
        20b6fc:	eb65566a 	bl	1b610ac <$Make__9TUnitListSFv>
        20b700:	e1b06000 	movs	r6, r0
        20b704:	13a09000 	movne	r9, #0	; 0x0
        20b708:	03a09001 	moveq	r9, #1	; 0x1
        20b70c:	e3390000 	teq	r9, #0	; 0x0
        20b710:	1a000029 	bne	20b7bc <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0xe0>
        20b714:	e1a0100d 	mov	r1, sp
        20b718:	e595000c 	ldr	r0, [r5, #12]	; fField12
        20b71c:	eb654e14 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20b720:	e3a08000 	mov	r8, #0	; 0x0
        20b724:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b728:	e3510000 	cmp	r1, #0	; 0x0
        20b72c:	9a00001e 	bls	20b7ac <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0xd0>
        20b730:	e5907000 	ldr	r7, [r0]
        20b734:	e5970008 	ldr	r0, [r7, #8]	; fField8
        20b738:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        20b73c:	e1300002 	teq	r0, r2
        20b740:	1a000012 	bne	20b790 <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0xb4>
        20b744:	e3340000 	teq	r4, #0	; 0x0
        20b748:	15970014 	ldrne	r0, [r7, #20]	; fField20
        20b74c:	11300004 	teqne	r0, r4
        20b750:	1a00000e 	bne	20b790 <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0xb4>
        20b754:	e1a00007 	mov	r0, r7
        20b758:	e59b1010 	ldr	r1, [fp, #16]	; fField16
        20b75c:	eb655ea1 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20b760:	e3300000 	teq	r0, #0	; 0x0
        20b764:	0a000009 	beq	20b790 <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0xb4>
        20b768:	e1a0100a 	mov	r1, sl
        20b76c:	e1a00007 	mov	r0, r7
        20b770:	eb655e9c 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20b774:	e3300000 	teq	r0, #0	; 0x0
        20b778:	1a000004 	bne	20b790 <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0xb4>
        20b77c:	e1a01007 	mov	r1, r7
        20b780:	e1a00006 	mov	r0, r6
        20b784:	eb654185 	bl	1b5bda0 <TUnitList::$AddUnit(TUnit *)>
        20b788:	e1b09000 	movs	r9, r0
        20b78c:	1a00000a 	bne	20b7bc <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0xe0>
        20b790:	e1a0000d 	mov	r0, sp
        20b794:	e1a0e00f 	mov	lr, pc
        20b798:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20b79c:	e2888001 	add	r8, r8, #1	; 0x1
        20b7a0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b7a4:	e1510008 	cmp	r1, r8
        20b7a8:	8affffe0 	bhi	20b730 <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0x54>
        20b7ac:	e1a00006 	mov	r0, r6
        20b7b0:	e5961000 	ldr	r1, [r6]
        20b7b4:	e1a0e00f 	mov	lr, pc
        20b7b8:	e281f024 	add	pc, r1, #36	; 0x24
        20b7bc:	e3390000 	teq	r9, #0	; 0x0
        20b7c0:	0a000007 	beq	20b7e4 <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0x108>
        20b7c4:	e1a00005 	mov	r0, r5
        20b7c8:	eb655e72 	bl	1b63198 <TController::$SignalMemoryError(void)>
        20b7cc:	e3360000 	teq	r6, #0	; 0x0
        20b7d0:	0a000003 	beq	20b7e4 <TController::GetUList(TDomain *, unsigned long, unsigned long, unsigned long)+0x108>
        20b7d4:	e1a00006 	mov	r0, r6
        20b7d8:	e1a0e00f 	mov	lr, pc
        20b7dc:	e596f000 	ldr	pc, [r6]
        20b7e0:	e3a06000 	mov	r6, #0	; 0x0
        20b7e4:	e1a00006 	mov	r0, r6
        20b7e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TController::GetDelayList(TDomain *, unsigned long)
 * Address: 0020b7ec
 */
TController::GetDelayList(TDomain *, unsigned long) {
    /*
        20b7ec:	e1a0c00d 	mov	ip, sp
        20b7f0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        20b7f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b7f8:	e3a03312 	mov	r3, #1207959552	; 0x48000000
        20b7fc:	e92d0008 	stmdb	sp!, {r3}
        20b800:	e3a03201 	mov	r3, #268435456	; 0x10000000
        20b804:	eb6551e7 	bl	1b5ffa8 <TController::$GetUList(TDomain *, unsigned long, unsigned long, unsigned long)>
        20b808:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TController::GetIndexedStroke(unsigned long)
 * Address: 0020b80c
 */
TController::GetIndexedStroke(unsigned long) {
    /*
        20b80c:	e1a0c00d 	mov	ip, sp
        20b810:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20b814:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b818:	e1a04001 	mov	r4, r1
        20b81c:	e24dd020 	sub	sp, sp, #32	; 0x20
        20b820:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20b824:	e1a0100d 	mov	r1, sp
        20b828:	eb654dd1 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20b82c:	e3a05000 	mov	r5, #0	; 0x0
        20b830:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b834:	e3510000 	cmp	r1, #0	; 0x0
        20b838:	9a000013 	bls	20b88c <TController::GetIndexedStroke(unsigned long)+0x80>
        20b83c:	e59f6028 	ldr	r6, [pc, #28]	; 20b86c <TController::GetIndexedStroke(unsigned long)+0x60>	; fField28
        20b840:	e5900000 	ldr	r0, [r0]
        20b844:	e590102a 	ldr	r1, [r0, #42]	; fField42
        20b848:	e1a01821 	mov	r1, r1, lsr #16
        20b84c:	e1310004 	teq	r1, r4
        20b850:	0590102c 	ldreq	r1, [r0, #44]	; fField44
        20b854:	01a01821 	moveq	r1, r1, lsr #16
        20b858:	01310004 	teqeq	r1, r4
        20b85c:	05901008 	ldreq	r1, [r0, #8]	; fField8
        20b860:	01310006 	teqeq	r1, r6
        20b864:	1a000001 	bne	20b870 <TController::GetIndexedStroke(unsigned long)+0x64>
        20b868:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        20b86c:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
        20b870:	e1a0000d 	mov	r0, sp
        20b874:	e1a0e00f 	mov	lr, pc
        20b878:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20b87c:	e2855001 	add	r5, r5, #1	; 0x1
        20b880:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20b884:	e1510005 	cmp	r1, r5
        20b888:	8affffec 	bhi	20b840 <TController::GetIndexedStroke(unsigned long)+0x34>
        20b88c:	e3a00000 	mov	r0, #0	; 0x0
        20b890:	eafffff4 	b	20b868 <TController::GetIndexedStroke(unsigned long)+0x5c>
    */
}

/**
 * Symbol: TController::DeletePiece(long)
 * Address: 0020b940
 */
TController::DeletePiece(long) {
    /*
        20b940:	e1a0c00d 	mov	ip, sp
        20b944:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20b948:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b94c:	e1a05000 	mov	r5, r0
        20b950:	e1a04001 	mov	r4, r1
        20b954:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20b958:	eb655193 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        20b95c:	e1a0e00f 	mov	lr, pc
        20b960:	e590f000 	ldr	pc, [r0]
        20b964:	e1a01004 	mov	r1, r4
        20b968:	e5b52008 	ldr	r2, [r5, #8]!	; fField8
        20b96c:	e1a00002 	mov	r0, r2
        20b970:	e5922000 	ldr	r2, [r2]
        20b974:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        20b978:	e282f040 	add	pc, r2, #64	; 0x40
    */
}

/**
 * Symbol: TController::DeleteUnit(long)
 * Address: 0020b97c
 */
TController::DeleteUnit(long) {
    /*
        20b97c:	e1a0c00d 	mov	ip, sp
        20b980:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20b984:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b988:	e1a05000 	mov	r5, r0
        20b98c:	e1a04001 	mov	r4, r1
        20b990:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20b994:	eb655184 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        20b998:	e1a0e00f 	mov	lr, pc
        20b99c:	e590f000 	ldr	pc, [r0]
        20b9a0:	e1a01004 	mov	r1, r4
        20b9a4:	e5b5200c 	ldr	r2, [r5, #12]!	; fField12
        20b9a8:	e1a00002 	mov	r0, r2
        20b9ac:	e5922000 	ldr	r2, [r2]
        20b9b0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        20b9b4:	e282f040 	add	pc, r2, #64	; 0x40
    */
}

/**
 * Symbol: TController::MarkUnits(TUnit *, unsigned long)
 * Address: 0020b9b8
 */
TController::MarkUnits(TUnit *, unsigned long) {
    /*
        20b9b8:	e1a0c00d 	mov	ip, sp
        20b9bc:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20b9c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b9c4:	e1a06001 	mov	r6, r1
        20b9c8:	e24dd04c 	sub	sp, sp, #76	; 0x4c
        20b9cc:	e3a05000 	mov	r5, #0	; 0x0
        20b9d0:	eb6555b5 	bl	1b610ac <$Make__9TUnitListSFv>
        20b9d4:	e1b04000 	movs	r4, r0
        20b9d8:	13a00000 	movne	r0, #0	; 0x0
        20b9dc:	03a00001 	moveq	r0, #1	; 0x1
        20b9e0:	e58d0000 	str	r0, [sp]
        20b9e4:	e3300000 	teq	r0, #0	; 0x0
        20b9e8:	1a000091 	bne	20bc34 <TController::MarkUnits(TUnit *, unsigned long)+0x27c>
        20b9ec:	e1a01004 	mov	r1, r4
        20b9f0:	e1a00006 	mov	r0, r6
        20b9f4:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        20b9f8:	e5963000 	ldr	r3, [r6]
        20b9fc:	e1a0e00f 	mov	lr, pc
        20ba00:	e283f030 	add	pc, r3, #48	; 0x30
        20ba04:	e58d0000 	str	r0, [sp]
        20ba08:	e3300000 	teq	r0, #0	; 0x0
        20ba0c:	1a000088 	bne	20bc34 <TController::MarkUnits(TUnit *, unsigned long)+0x27c>
        20ba10:	eb6555a5 	bl	1b610ac <$Make__9TUnitListSFv>
        20ba14:	e1b05000 	movs	r5, r0
        20ba18:	13a00000 	movne	r0, #0	; 0x0
        20ba1c:	03a00001 	moveq	r0, #1	; 0x1
        20ba20:	e58d0000 	str	r0, [sp]
        20ba24:	e3300000 	teq	r0, #0	; 0x0
        20ba28:	1a000081 	bne	20bc34 <TController::MarkUnits(TUnit *, unsigned long)+0x27c>
        20ba2c:	e594600c 	ldr	r6, [r4, #12]	; fField12
        20ba30:	e3360000 	teq	r6, #0	; 0x0
        20ba34:	0a000082 	beq	20bc44 <TController::MarkUnits(TUnit *, unsigned long)+0x28c>
        20ba38:	e51b0034 	ldr	r0, [fp, -#52]
        20ba3c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20ba40:	e28d1004 	add	r1, sp, #4	; 0x4
        20ba44:	eb654d4a 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20ba48:	e3a02000 	mov	r2, #0	; 0x0
        20ba4c:	e58d2048 	str	r2, [sp, #72]	; fField72
        20ba50:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        20ba54:	e3510000 	cmp	r1, #0	; 0x0
        20ba58:	da000031 	ble	20bb24 <TController::MarkUnits(TUnit *, unsigned long)+0x16c>
        20ba5c:	e5907000 	ldr	r7, [r0]
        20ba60:	e1a00007 	mov	r0, r7
        20ba64:	e5971000 	ldr	r1, [r7]
        20ba68:	e1a0e00f 	mov	lr, pc
        20ba6c:	e281f01c 	add	pc, r1, #28	; 0x1c
        20ba70:	e1a0a000 	mov	sl, r0
        20ba74:	e3a08000 	mov	r8, #0	; 0x0
        20ba78:	e3500000 	cmp	r0, #0	; 0x0
        20ba7c:	da00001f 	ble	20bb00 <TController::MarkUnits(TUnit *, unsigned long)+0x148>
        20ba80:	e1a01008 	mov	r1, r8
        20ba84:	e1a00007 	mov	r0, r7
        20ba88:	e5972000 	ldr	r2, [r7]
        20ba8c:	e1a0e00f 	mov	lr, pc
        20ba90:	e282f058 	add	pc, r2, #88	; 0x58
        20ba94:	e3a09000 	mov	r9, #0	; 0x0
        20ba98:	e3560000 	cmp	r6, #0	; 0x0
        20ba9c:	e58d0044 	str	r0, [sp, #68]	; fField68
        20baa0:	da000013 	ble	20baf4 <TController::MarkUnits(TUnit *, unsigned long)+0x13c>
        20baa4:	e1a01009 	mov	r1, r9
        20baa8:	e1a00004 	mov	r0, r4
        20baac:	eb65513e 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        20bab0:	e59d1044 	ldr	r1, [sp, #68]	; fField68
        20bab4:	e1300001 	teq	r0, r1
        20bab8:	1a00000a 	bne	20bae8 <TController::MarkUnits(TUnit *, unsigned long)+0x130>
        20babc:	e1a00007 	mov	r0, r7
        20bac0:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        20bac4:	eb6559aa 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        20bac8:	e1a01007 	mov	r1, r7
        20bacc:	e1a00005 	mov	r0, r5
        20bad0:	eb6540b1 	bl	1b5bd9c <TUnitList::$AddUnique(TUnit *)>
        20bad4:	e58d0000 	str	r0, [sp]
        20bad8:	e3300000 	teq	r0, #0	; 0x0
        20badc:	01a0800a 	moveq	r8, sl
        20bae0:	0a000003 	beq	20baf4 <TController::MarkUnits(TUnit *, unsigned long)+0x13c>
        20bae4:	ea000052 	b	20bc34 <TController::MarkUnits(TUnit *, unsigned long)+0x27c>
        20bae8:	e2899001 	add	r9, r9, #1	; 0x1
        20baec:	e1590006 	cmp	r9, r6
        20baf0:	baffffeb 	blt	20baa4 <TController::MarkUnits(TUnit *, unsigned long)+0xec>
        20baf4:	e2888001 	add	r8, r8, #1	; 0x1
        20baf8:	e158000a 	cmp	r8, sl
        20bafc:	baffffdf 	blt	20ba80 <TController::MarkUnits(TUnit *, unsigned long)+0xc8>
        20bb00:	e28d0004 	add	r0, sp, #4	; 0x4
        20bb04:	e1a0e00f 	mov	lr, pc
        20bb08:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        20bb0c:	e59d2048 	ldr	r2, [sp, #72]	; fField72
        20bb10:	e2822001 	add	r2, r2, #1	; 0x1
        20bb14:	e58d2048 	str	r2, [sp, #72]	; fField72
        20bb18:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        20bb1c:	e1510002 	cmp	r1, r2
        20bb20:	caffffcd 	bgt	20ba5c <TController::MarkUnits(TUnit *, unsigned long)+0xa4>
        20bb24:	e51b0034 	ldr	r0, [fp, -#52]
        20bb28:	e590000c 	ldr	r0, [r0, #12]	; fField12
        20bb2c:	e28d1024 	add	r1, sp, #36	; 0x24
        20bb30:	eb654d0f 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20bb34:	e3a02000 	mov	r2, #0	; 0x0
        20bb38:	e58d2048 	str	r2, [sp, #72]	; fField72
        20bb3c:	e59d1038 	ldr	r1, [sp, #56]	; fField56
        20bb40:	e3510000 	cmp	r1, #0	; 0x0
        20bb44:	da000031 	ble	20bc10 <TController::MarkUnits(TUnit *, unsigned long)+0x258>
        20bb48:	e5907000 	ldr	r7, [r0]
        20bb4c:	e1a00007 	mov	r0, r7
        20bb50:	e5971000 	ldr	r1, [r7]
        20bb54:	e1a0e00f 	mov	lr, pc
        20bb58:	e281f01c 	add	pc, r1, #28	; 0x1c
        20bb5c:	e1a0a000 	mov	sl, r0
        20bb60:	e3a08000 	mov	r8, #0	; 0x0
        20bb64:	e3500000 	cmp	r0, #0	; 0x0
        20bb68:	da00001f 	ble	20bbec <TController::MarkUnits(TUnit *, unsigned long)+0x234>
        20bb6c:	e1a01008 	mov	r1, r8
        20bb70:	e1a00007 	mov	r0, r7
        20bb74:	e5972000 	ldr	r2, [r7]
        20bb78:	e1a0e00f 	mov	lr, pc
        20bb7c:	e282f058 	add	pc, r2, #88	; 0x58
        20bb80:	e3a09000 	mov	r9, #0	; 0x0
        20bb84:	e3560000 	cmp	r6, #0	; 0x0
        20bb88:	e58d0044 	str	r0, [sp, #68]	; fField68
        20bb8c:	da000013 	ble	20bbe0 <TController::MarkUnits(TUnit *, unsigned long)+0x228>
        20bb90:	e1a01009 	mov	r1, r9
        20bb94:	e1a00004 	mov	r0, r4
        20bb98:	eb655103 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        20bb9c:	e59d1044 	ldr	r1, [sp, #68]	; fField68
        20bba0:	e1300001 	teq	r0, r1
        20bba4:	1a00000a 	bne	20bbd4 <TController::MarkUnits(TUnit *, unsigned long)+0x21c>
        20bba8:	e1a00007 	mov	r0, r7
        20bbac:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        20bbb0:	eb65596f 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        20bbb4:	e1a01007 	mov	r1, r7
        20bbb8:	e1a00005 	mov	r0, r5
        20bbbc:	eb654076 	bl	1b5bd9c <TUnitList::$AddUnique(TUnit *)>
        20bbc0:	e58d0000 	str	r0, [sp]
        20bbc4:	e3300000 	teq	r0, #0	; 0x0
        20bbc8:	01a0800a 	moveq	r8, sl
        20bbcc:	0a000003 	beq	20bbe0 <TController::MarkUnits(TUnit *, unsigned long)+0x228>
        20bbd0:	ea000017 	b	20bc34 <TController::MarkUnits(TUnit *, unsigned long)+0x27c>
        20bbd4:	e2899001 	add	r9, r9, #1	; 0x1
        20bbd8:	e1590006 	cmp	r9, r6
        20bbdc:	baffffeb 	blt	20bb90 <TController::MarkUnits(TUnit *, unsigned long)+0x1d8>
        20bbe0:	e2888001 	add	r8, r8, #1	; 0x1
        20bbe4:	e158000a 	cmp	r8, sl
        20bbe8:	baffffdf 	blt	20bb6c <TController::MarkUnits(TUnit *, unsigned long)+0x1b4>
        20bbec:	e28d0024 	add	r0, sp, #36	; 0x24
        20bbf0:	e1a0e00f 	mov	lr, pc
        20bbf4:	e59df03c 	ldr	pc, [sp, #60]	; fField60
        20bbf8:	e59d2048 	ldr	r2, [sp, #72]	; fField72
        20bbfc:	e2822001 	add	r2, r2, #1	; 0x1
        20bc00:	e58d2048 	str	r2, [sp, #72]	; fField72
        20bc04:	e59d1038 	ldr	r1, [sp, #56]	; fField56
        20bc08:	e1510002 	cmp	r1, r2
        20bc0c:	caffffcd 	bgt	20bb48 <TController::MarkUnits(TUnit *, unsigned long)+0x190>
        20bc10:	e1a00004 	mov	r0, r4
        20bc14:	e1a04005 	mov	r4, r5
        20bc18:	e1a05000 	mov	r5, r0
        20bc1c:	e5901000 	ldr	r1, [r0]
        20bc20:	e1a0e00f 	mov	lr, pc
        20bc24:	e281f02c 	add	pc, r1, #44	; 0x2c
        20bc28:	e594600c 	ldr	r6, [r4, #12]	; fField12
        20bc2c:	e3360000 	teq	r6, #0	; 0x0
        20bc30:	1affff80 	bne	20ba38 <TController::MarkUnits(TUnit *, unsigned long)+0x80>
        20bc34:	e59d0000 	ldr	r0, [sp]
        20bc38:	e3300000 	teq	r0, #0	; 0x0
        20bc3c:	151b0034 	ldrne	r0, [fp, -#52]
        20bc40:	1b655d54 	blne	1b63198 <TController::$SignalMemoryError(void)>
        20bc44:	e3340000 	teq	r4, #0	; 0x0
        20bc48:	11a00004 	movne	r0, r4
        20bc4c:	11a0e00f 	movne	lr, pc
        20bc50:	1594f000 	ldrne	pc, [r4]
        20bc54:	e3350000 	teq	r5, #0	; 0x0
        20bc58:	11a00005 	movne	r0, r5
        20bc5c:	11a0e00f 	movne	lr, pc
        20bc60:	1595f000 	ldrne	pc, [r5]
        20bc64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TController::CheckBusy(void)
 * Address: 0020bc68
 */
TController::CheckBusy(void) {
    /*
        20bc68:	e1a0c00d 	mov	ip, sp
        20bc6c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        20bc70:	e24cb004 	sub	fp, ip, #4	; 0x4
        20bc74:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        20bc78:	eb655d5a 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20bc7c:	e3300000 	teq	r0, #0	; 0x0
        20bc80:	13a00001 	movne	r0, #1	; 0x1
        20bc84:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TController::UpdateInk(FRect *)
 * Address: 0020bc88
 */
TController::UpdateInk(FRect *) {
    /*
        20bc88:	e1a0c00d 	mov	ip, sp
        20bc8c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        20bc90:	e24cb004 	sub	fp, ip, #4	; 0x4
        20bc94:	e1a05000 	mov	r5, r0
        20bc98:	e1a04001 	mov	r4, r1
        20bc9c:	e24dd010 	sub	sp, sp, #16	; 0x10
        20bca0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20bca4:	e3a07000 	mov	r7, #0	; 0x0
        20bca8:	e5b0800c 	ldr	r8, [r0, #12]!	; fField12
        20bcac:	e3580000 	cmp	r8, #0	; 0x0
        20bcb0:	9a00001e 	bls	20bd30 <TController::UpdateInk(FRect *)+0xa8>
        20bcb4:	e59f9094 	ldr	r9, [pc, #94]	; 20bd50 <TController::UpdateInk(FRect *)+0xc8>
        20bcb8:	e1a01007 	mov	r1, r7
        20bcbc:	e5950008 	ldr	r0, [r5, #8]	; fField8
        20bcc0:	eb6550b9 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        20bcc4:	e1a06000 	mov	r6, r0
        20bcc8:	e1a0100d 	mov	r1, sp
        20bccc:	eb65656d 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        20bcd0:	e5960008 	ldr	r0, [r6, #8]	; fField8
        20bcd4:	e1300009 	teq	r0, r9
        20bcd8:	1a000011 	bne	20bd24 <TController::UpdateInk(FRect *)+0x9c>
        20bcdc:	e1a00006 	mov	r0, r6
        20bce0:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        20bce4:	eb655d3f 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20bce8:	e3300000 	teq	r0, #0	; 0x0
        20bcec:	1a00000c 	bne	20bd24 <TController::UpdateInk(FRect *)+0x9c>
        20bcf0:	e3a01302 	mov	r1, #134217728	; 0x8000000
        20bcf4:	e5960040 	ldr	r0, [r6, #64]	; fField64
        20bcf8:	eb655d3a 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20bcfc:	e3300000 	teq	r0, #0	; 0x0
        20bd00:	0a000005 	beq	20bd1c <TController::UpdateInk(FRect *)+0x94>
        20bd04:	e1a0200d 	mov	r2, sp
        20bd08:	e1a01004 	mov	r1, r4
        20bd0c:	e1a0000d 	mov	r0, sp
        20bd10:	eb655910 	bl	1b62158 <$SectRectangle>
        20bd14:	e3300000 	teq	r0, #0	; 0x0
        20bd18:	0a000001 	beq	20bd24 <TController::UpdateInk(FRect *)+0x9c>
        20bd1c:	e5b60040 	ldr	r0, [r6, #64]!	; fField64
        20bd20:	eb657e21 	bl	1b6b5ac <TStroke::$Draw(void)>
        20bd24:	e2877001 	add	r7, r7, #1	; 0x1
        20bd28:	e1570008 	cmp	r7, r8
        20bd2c:	3affffe1 	bcc	20bcb8 <TController::UpdateInk(FRect *)+0x30>
        20bd30:	e1a0000d 	mov	r0, sp
        20bd34:	eb654431 	bl	1b5ce00 <$CleanupStrayInk(FRect *)>
        20bd38:	e1a00004 	mov	r0, r4
        20bd3c:	eb655d25 	bl	1b631d8 <$StrokeUpdate(FRect *)>
        20bd40:	e1a0000d 	mov	r0, sp
        20bd44:	e890500c 	ldmia	r0, {r2, r3, ip, lr}
        20bd48:	e884500c 	stmia	r4, {r2, r3, ip, lr}
        20bd4c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        20bd50:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: TController::SetExpireStrokeRoutine(void (*)(TUnit *))
 * Address: 0020bd94
 */
TController::SetExpireStrokeRoutine(void (*)(TUnit *)) {
    /*
        20bd94:	e5a0103c 	str	r1, [r0, #60]!	; fField60
        20bd98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TController::CleanGroupQ(TUnit *)
 * Address: 0020bd9c
 */
TController::CleanGroupQ(TUnit *) {
    /*
        20bd9c:	e1a0c00d 	mov	ip, sp
        20bda0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20bda4:	e24cb004 	sub	fp, ip, #4	; 0x4
        20bda8:	e1a04001 	mov	r4, r1
        20bdac:	e24dd020 	sub	sp, sp, #32	; 0x20
        20bdb0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        20bdb4:	e1a0100d 	mov	r1, sp
        20bdb8:	eb654c6d 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20bdbc:	e3a01000 	mov	r1, #0	; 0x0
        20bdc0:	e59d2014 	ldr	r2, [sp, #20]	; fField20
        20bdc4:	e3520000 	cmp	r2, #0	; 0x0
        20bdc8:	9a000008 	bls	20bdf0 <TController::CleanGroupQ(TUnit *)+0x54>
        20bdcc:	e3a02000 	mov	r2, #0	; 0x0
        20bdd0:	e5903000 	ldr	r3, [r0]
        20bdd4:	e1330004 	teq	r3, r4
        20bdd8:	05802000 	streq	r2, [r0]
        20bddc:	e2800010 	add	r0, r0, #16	; 0x10
        20bde0:	e2811001 	add	r1, r1, #1	; 0x1
        20bde4:	e59d3014 	ldr	r3, [sp, #20]	; fField20
        20bde8:	e1530001 	cmp	r3, r1
        20bdec:	8afffff7 	bhi	20bdd0 <TController::CleanGroupQ(TUnit *)+0x34>
        20bdf0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TController::SignalMemoryError(void)
 * Address: 0020bdf4
 */
TController::SignalMemoryError(void) {
    /*
        20bdf4:	e1a0c00d 	mov	ip, sp
        20bdf8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20bdfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        20be00:	e1a04000 	mov	r4, r0
        20be04:	e3a01201 	mov	r1, #268435456	; 0x10000000
        20be08:	eb6558d9 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        20be0c:	eb6581fc 	bl	1b6c604 <$GetTicks(void)>
        20be10:	e584002c 	str	r0, [r4, #44]	; fField44
        20be14:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20be18:	e5d00021 	ldrb	r0, [r0, #33]
        20be1c:	e3300000 	teq	r0, #0	; 0x0
        20be20:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        20be24:	eb6581f6 	bl	1b6c604 <$GetTicks(void)>
        20be28:	e5840028 	str	r0, [r4, #40]	; fField40
        20be2c:	e3a00001 	mov	r0, #1	; 0x1
        20be30:	e5b41018 	ldr	r1, [r4, #24]!	; fField24
        20be34:	e5c10020 	strb	r0, [r1, #32]	; fField32
        20be38:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TController::ControllerError(void)
 * Address: 0020be3c
 */
TController::ControllerError(void) {
    /*
        20be3c:	e3a01201 	mov	r1, #268435456	; 0x10000000
        20be40:	ea655ce8 	b	1b631e8 <TRecObject::$TestFlags(unsigned long)>
    */
}

/**
 * Symbol: TController::CleanupAfterError(void)
 * Address: 0020be44
 */
TController::CleanupAfterError(void) {
    /*
        20be44:	e1a0c00d 	mov	ip, sp
        20be48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20be4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20be50:	e1a04000 	mov	r4, r0
        20be54:	eb654c3c 	bl	1b5ef4c <TController::$GetClickInProgress(void)>
        20be58:	e1a05000 	mov	r5, r0
        20be5c:	e1a00004 	mov	r0, r4
        20be60:	eb6543e9 	bl	1b5ce0c <TController::$ClearArbiter(void)>
        20be64:	e1a00004 	mov	r0, r4
        20be68:	e3a01000 	mov	r1, #0	; 0x0
        20be6c:	eb6543e4 	bl	1b5ce04 <TController::$CleanUpUnits(unsigned char)>
        20be70:	e1a00004 	mov	r0, r4
        20be74:	eb654c25 	bl	1b5ef10 <TController::$ExpireAllStrokes(void)>
        20be78:	e1a00004 	mov	r0, r4
        20be7c:	e3a01001 	mov	r1, #1	; 0x1
        20be80:	eb6543df 	bl	1b5ce04 <TController::$CleanUpUnits(unsigned char)>
        20be84:	e1a00004 	mov	r0, r4
        20be88:	eb6543e0 	bl	1b5ce10 <TController::$ClearController(void)>
        20be8c:	e1a00004 	mov	r0, r4
        20be90:	e3e01000 	mvn	r1, #0	; 0x0
        20be94:	eb6560dc 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        20be98:	e3350000 	teq	r5, #0	; 0x0
        20be9c:	11a01005 	movne	r1, r5
        20bea0:	11a00004 	movne	r0, r4
        20bea4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        20bea8:	1a65548a 	bne	1b610d8 <TController::$NewClassification(TUnit *)>
        20beac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TController::ExpireAllStrokes(void)
 * Address: 0020beb0
 */
TController::ExpireAllStrokes(void) {
    /*
        20beb0:	e1a0c00d 	mov	ip, sp
        20beb4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20beb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20bebc:	e1a04000 	mov	r4, r0
        20bec0:	e24dd020 	sub	sp, sp, #32	; 0x20
        20bec4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20bec8:	e1a0100d 	mov	r1, sp
        20becc:	eb654c28 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20bed0:	e3a06000 	mov	r6, #0	; 0x0
        20bed4:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20bed8:	e3510000 	cmp	r1, #0	; 0x0
        20bedc:	9a00001b 	bls	20bf50 <TController::ExpireAllStrokes(void)+0xa0>
        20bee0:	e59f706c 	ldr	r7, [pc, #6c]	; 20bf54 <TController::ExpireAllStrokes(void)+0xa4>
        20bee4:	e5905000 	ldr	r5, [r0]
        20bee8:	e5950008 	ldr	r0, [r5, #8]	; fField8
        20beec:	e1300007 	teq	r0, r7
        20bef0:	1a00000f 	bne	20bf34 <TController::ExpireAllStrokes(void)+0x84>
        20bef4:	e1a00005 	mov	r0, r5
        20bef8:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        20befc:	eb655cb9 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20bf00:	e3300000 	teq	r0, #0	; 0x0
        20bf04:	1a00000a 	bne	20bf34 <TController::ExpireAllStrokes(void)+0x84>
        20bf08:	e594003c 	ldr	r0, [r4, #60]	; fField60
        20bf0c:	e3300000 	teq	r0, #0	; 0x0
        20bf10:	0a000007 	beq	20bf34 <TController::ExpireAllStrokes(void)+0x84>
        20bf14:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        20bf18:	e3500032 	cmp	r0, #50	; 0x32
        20bf1c:	c1a00005 	movgt	r0, r5
        20bf20:	c3a01701 	movgt	r1, #262144	; 0x40000
        20bf24:	cb655892 	blgt	1b62174 <TRecObject::$SetFlags(unsigned long)>
        20bf28:	e1a00005 	mov	r0, r5
        20bf2c:	e1a0e00f 	mov	lr, pc
        20bf30:	e594f03c 	ldr	pc, [r4, #60]	; fField60
        20bf34:	e1a0000d 	mov	r0, sp
        20bf38:	e1a0e00f 	mov	lr, pc
        20bf3c:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20bf40:	e2866001 	add	r6, r6, #1	; 0x1
        20bf44:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20bf48:	e1510006 	cmp	r1, r6
        20bf4c:	8affffe4 	bhi	20bee4 <TController::ExpireAllStrokes(void)+0x34>
        20bf50:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        20bf54:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: TController::GetClickInProgress(void)
 * Address: 0020c090
 */
TController::GetClickInProgress(void) {
    /*
        20c090:	e1a0c00d 	mov	ip, sp
        20c094:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20c098:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c09c:	e1a04000 	mov	r4, r0
        20c0a0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20c0a4:	e3a05000 	mov	r5, #0	; 0x0
        20c0a8:	e5b0600c 	ldr	r6, [r0, #12]!	; fField12
        20c0ac:	e3560000 	cmp	r6, #0	; 0x0
        20c0b0:	9a00000a 	bls	20c0e0 <TController::GetClickInProgress(void)+0x50>
        20c0b4:	e1a01005 	mov	r1, r5
        20c0b8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20c0bc:	eb654fba 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        20c0c0:	e1a07000 	mov	r7, r0
        20c0c4:	eb654354 	bl	1b5ce1c <$ClickInProgress(TUnit *)>
        20c0c8:	e3300000 	teq	r0, #0	; 0x0
        20c0cc:	11a00007 	movne	r0, r7
        20c0d0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        20c0d4:	e2855001 	add	r5, r5, #1	; 0x1
        20c0d8:	e1550006 	cmp	r5, r6
        20c0dc:	3afffff4 	bcc	20c0b4 <TController::GetClickInProgress(void)+0x24>
        20c0e0:	e3a00000 	mov	r0, #0	; 0x0
        20c0e4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TController::IsLastCompleteStroke(TUnit *)
 * Address: 0020c0e8
 */
TController::IsLastCompleteStroke(TUnit *) {
    /*
        20c0e8:	e1a0c00d 	mov	ip, sp
        20c0ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20c0f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c0f4:	e1a02001 	mov	r2, r1
        20c0f8:	e590101c 	ldr	r1, [r0, #28]	; fField28
        20c0fc:	e592202a 	ldr	r2, [r2, #42]	; fField42
        20c100:	e1a02822 	mov	r2, r2, lsr #16
        20c104:	e2825001 	add	r5, r2, #1	; 0x1
        20c108:	e3a04001 	mov	r4, #1	; 0x1
        20c10c:	e1350821 	teq	r5, r1, lsr #16
        20c110:	0a000006 	beq	20c130 <TController::IsLastCompleteStroke(TUnit *)+0x48>
        20c114:	eb654b8c 	bl	1b5ef4c <TController::$GetClickInProgress(void)>
        20c118:	e3a01000 	mov	r1, #0	; 0x0
        20c11c:	e3300000 	teq	r0, #0	; 0x0
        20c120:	0a000004 	beq	20c138 <TController::IsLastCompleteStroke(TUnit *)+0x50>
        20c124:	e590002a 	ldr	r0, [r0, #42]	; fField42
        20c128:	e1350820 	teq	r5, r0, lsr #16
        20c12c:	1a000001 	bne	20c138 <TController::IsLastCompleteStroke(TUnit *)+0x50>
        20c130:	e1a00004 	mov	r0, r4
        20c134:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        20c138:	e1a00001 	mov	r0, r1
        20c13c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TController::CleanUpUnits(unsigned char)
 * Address: 0020c140
 */
TController::CleanUpUnits(unsigned char) {
    /*
        20c140:	e1a0c00d 	mov	ip, sp
        20c144:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20c148:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c14c:	e1a04000 	mov	r4, r0
        20c150:	e20190ff 	and	r9, r1, #255	; 0xff
        20c154:	e3a06000 	mov	r6, #0	; 0x0
        20c158:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20c15c:	e3a07000 	mov	r7, #0	; 0x0
        20c160:	e5b0800c 	ldr	r8, [r0, #12]!	; fField12
        20c164:	e59fa05c 	ldr	sl, [pc, #5c]	; 20c1c8 <TController::CleanUpUnits(unsigned char)+0x88>
        20c168:	e3580000 	cmp	r8, #0	; 0x0
        20c16c:	9a00001f 	bls	20c1f0 <TController::CleanUpUnits(unsigned char)+0xb0>
        20c170:	e1a01007 	mov	r1, r7
        20c174:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20c178:	eb654f8b 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        20c17c:	e1a05000 	mov	r5, r0
        20c180:	e3390000 	teq	r9, #0	; 0x0
        20c184:	1a000010 	bne	20c1cc <TController::CleanUpUnits(unsigned char)+0x8c>
        20c188:	e1a00005 	mov	r0, r5
        20c18c:	eb654322 	bl	1b5ce1c <$ClickInProgress(TUnit *)>
        20c190:	e3300000 	teq	r0, #0	; 0x0
        20c194:	1a000002 	bne	20c1a4 <TController::CleanUpUnits(unsigned char)+0x64>
        20c198:	e5950008 	ldr	r0, [r5, #8]	; fField8
        20c19c:	e130000a 	teq	r0, sl
        20c1a0:	1a000009 	bne	20c1cc <TController::CleanUpUnits(unsigned char)+0x8c>
        20c1a4:	e1a01006 	mov	r1, r6
        20c1a8:	e5942008 	ldr	r2, [r4, #8]	; fField8
        20c1ac:	e1a00002 	mov	r0, r2
        20c1b0:	e5922000 	ldr	r2, [r2]
        20c1b4:	e1a0e00f 	mov	lr, pc
        20c1b8:	e282f01c 	add	pc, r2, #28	; 0x1c
        20c1bc:	e2866001 	add	r6, r6, #1	; 0x1
        20c1c0:	e5805000 	str	r5, [r0]
        20c1c4:	ea000006 	b	20c1e4 <TController::CleanUpUnits(unsigned char)+0xa4>
        20c1c8:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
        20c1cc:	e1a00005 	mov	r0, r5
        20c1d0:	eb654311 	bl	1b5ce1c <$ClickInProgress(TUnit *)>
        20c1d4:	e3300000 	teq	r0, #0	; 0x0
        20c1d8:	01a00005 	moveq	r0, r5
        20c1dc:	01a0e00f 	moveq	lr, pc
        20c1e0:	0595f000 	ldreq	pc, [r5]
        20c1e4:	e2877001 	add	r7, r7, #1	; 0x1
        20c1e8:	e1570008 	cmp	r7, r8
        20c1ec:	3affffdf 	bcc	20c170 <TController::CleanUpUnits(unsigned char)+0x30>
        20c1f0:	e1a01006 	mov	r1, r6
        20c1f4:	e5942008 	ldr	r2, [r4, #8]	; fField8
        20c1f8:	e1a00002 	mov	r0, r2
        20c1fc:	e5922000 	ldr	r2, [r2]
        20c200:	e1a0e00f 	mov	lr, pc
        20c204:	e282f028 	add	pc, r2, #40	; 0x28
        20c208:	e3a05000 	mov	r5, #0	; 0x0
        20c20c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c210:	e3a06000 	mov	r6, #0	; 0x0
        20c214:	e5b0700c 	ldr	r7, [r0, #12]!	; fField12
        20c218:	e3570000 	cmp	r7, #0	; 0x0
        20c21c:	9a000016 	bls	20c27c <TController::CleanUpUnits(unsigned char)+0x13c>
        20c220:	e1a01006 	mov	r1, r6
        20c224:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c228:	eb654f5f 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        20c22c:	e1a08000 	mov	r8, r0
        20c230:	e3390000 	teq	r9, #0	; 0x0
        20c234:	05980008 	ldreq	r0, [r8, #8]	; fField8
        20c238:	0130000a 	teqeq	r0, sl
        20c23c:	1a000008 	bne	20c264 <TController::CleanUpUnits(unsigned char)+0x124>
        20c240:	e1a01005 	mov	r1, r5
        20c244:	e594200c 	ldr	r2, [r4, #12]	; fField12
        20c248:	e1a00002 	mov	r0, r2
        20c24c:	e5922000 	ldr	r2, [r2]
        20c250:	e1a0e00f 	mov	lr, pc
        20c254:	e282f01c 	add	pc, r2, #28	; 0x1c
        20c258:	e2855001 	add	r5, r5, #1	; 0x1
        20c25c:	e5808000 	str	r8, [r0]
        20c260:	ea000002 	b	20c270 <TController::CleanUpUnits(unsigned char)+0x130>
        20c264:	e1a00008 	mov	r0, r8
        20c268:	e1a0e00f 	mov	lr, pc
        20c26c:	e598f000 	ldr	pc, [r8]
        20c270:	e2866001 	add	r6, r6, #1	; 0x1
        20c274:	e1560007 	cmp	r6, r7
        20c278:	3affffe8 	bcc	20c220 <TController::CleanUpUnits(unsigned char)+0xe0>
        20c27c:	e1a01005 	mov	r1, r5
        20c280:	e5b4200c 	ldr	r2, [r4, #12]!	; fField12
        20c284:	e1a00002 	mov	r0, r2
        20c288:	e5922000 	ldr	r2, [r2]
        20c28c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        20c290:	e282f028 	add	pc, r2, #40	; 0x28
    */
}

/**
 * Symbol: TController::ClearArbiter(void)
 * Address: 0020c354
 */
TController::ClearArbiter(void) {
    /*
        20c354:	e1a0c00d 	mov	ip, sp
        20c358:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20c35c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c360:	e5b04018 	ldr	r4, [r0, #24]!	; fField24
        20c364:	e5940004 	ldr	r0, [r4, #4]	; fField4
        20c368:	e5901000 	ldr	r1, [r0]
        20c36c:	e1a0e00f 	mov	lr, pc
        20c370:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c374:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20c378:	e5901000 	ldr	r1, [r0]
        20c37c:	e1a0e00f 	mov	lr, pc
        20c380:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c384:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c388:	e5901000 	ldr	r1, [r0]
        20c38c:	e1a0e00f 	mov	lr, pc
        20c390:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c394:	e5940010 	ldr	r0, [r4, #16]	; fField16
        20c398:	e5901000 	ldr	r1, [r0]
        20c39c:	e1a0e00f 	mov	lr, pc
        20c3a0:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c3a4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        20c3a8:	e5901000 	ldr	r1, [r0]
        20c3ac:	e1a0e00f 	mov	lr, pc
        20c3b0:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c3b4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20c3b8:	e5901000 	ldr	r1, [r0]
        20c3bc:	e1a0e00f 	mov	lr, pc
        20c3c0:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c3c4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        20c3c8:	e5901000 	ldr	r1, [r0]
        20c3cc:	e1a0e00f 	mov	lr, pc
        20c3d0:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c3d4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        20c3d8:	e5901000 	ldr	r1, [r0]
        20c3dc:	e1a0e00f 	mov	lr, pc
        20c3e0:	e281f024 	add	pc, r1, #36	; 0x24
        20c3e4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20c3e8:	e5901000 	ldr	r1, [r0]
        20c3ec:	e1a0e00f 	mov	lr, pc
        20c3f0:	e281f024 	add	pc, r1, #36	; 0x24
        20c3f4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c3f8:	e5901000 	ldr	r1, [r0]
        20c3fc:	e1a0e00f 	mov	lr, pc
        20c400:	e281f024 	add	pc, r1, #36	; 0x24
        20c404:	e5940010 	ldr	r0, [r4, #16]	; fField16
        20c408:	e5901000 	ldr	r1, [r0]
        20c40c:	e1a0e00f 	mov	lr, pc
        20c410:	e281f024 	add	pc, r1, #36	; 0x24
        20c414:	e5940014 	ldr	r0, [r4, #20]	; fField20
        20c418:	e5901000 	ldr	r1, [r0]
        20c41c:	e1a0e00f 	mov	lr, pc
        20c420:	e281f024 	add	pc, r1, #36	; 0x24
        20c424:	e5940018 	ldr	r0, [r4, #24]	; fField24
        20c428:	e5901000 	ldr	r1, [r0]
        20c42c:	e1a0e00f 	mov	lr, pc
        20c430:	e281f024 	add	pc, r1, #36	; 0x24
        20c434:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        20c438:	e5901000 	ldr	r1, [r0]
        20c43c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        20c440:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: TController::ClearController(void)
 * Address: 0020c444
 */
TController::ClearController(void) {
    /*
        20c444:	e1a0c00d 	mov	ip, sp
        20c448:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20c44c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c450:	e1a04000 	mov	r4, r0
        20c454:	e5900008 	ldr	r0, [r0, #8]	; fField8
        20c458:	e5901000 	ldr	r1, [r0]
        20c45c:	e1a0e00f 	mov	lr, pc
        20c460:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c464:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c468:	e5901000 	ldr	r1, [r0]
        20c46c:	e1a0e00f 	mov	lr, pc
        20c470:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c474:	e5940014 	ldr	r0, [r4, #20]	; fField20
        20c478:	e5901000 	ldr	r1, [r0]
        20c47c:	e1a0e00f 	mov	lr, pc
        20c480:	e281f02c 	add	pc, r1, #44	; 0x2c
        20c484:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20c488:	e5901000 	ldr	r1, [r0]
        20c48c:	e1a0e00f 	mov	lr, pc
        20c490:	e281f024 	add	pc, r1, #36	; 0x24
        20c494:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c498:	e5901000 	ldr	r1, [r0]
        20c49c:	e1a0e00f 	mov	lr, pc
        20c4a0:	e281f024 	add	pc, r1, #36	; 0x24
        20c4a4:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        20c4a8:	e5901000 	ldr	r1, [r0]
        20c4ac:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        20c4b0:	e281f024 	add	pc, r1, #36	; 0x24
    */
}

/**
 * Symbol: TController::Initialize(void)
 * Address: 0020c554
 */
TController::Initialize(void) {
    /*
        20c554:	e1a0c00d 	mov	ip, sp
        20c558:	e92ddff1 	stmdb	sp!, {r0, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20c55c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c560:	e24dd040 	sub	sp, sp, #64	; 0x40
        20c564:	e3a01000 	mov	r1, #0	; 0x0
        20c568:	e3a00004 	mov	r0, #4	; 0x4
        20c56c:	eb6552c6 	bl	1b6108c <$Make__6TArraySFUlT1>
        20c570:	e1a04000 	mov	r4, r0
        20c574:	e3a01000 	mov	r1, #0	; 0x0
        20c578:	e3a00004 	mov	r0, #4	; 0x4
        20c57c:	eb6552c2 	bl	1b6108c <$Make__6TArraySFUlT1>
        20c580:	e1a05000 	mov	r5, r0
        20c584:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        20c588:	e5900010 	ldr	r0, [r0, #16]	; fField16
        20c58c:	e28d1020 	add	r1, sp, #32	; 0x20
        20c590:	eb654a77 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20c594:	e3a06000 	mov	r6, #0	; 0x0
        20c598:	e59d1034 	ldr	r1, [sp, #52]
        20c59c:	e3510000 	cmp	r1, #0	; 0x0
        20c5a0:	9a000012 	bls	20c5f0 <TController::Initialize(void)+0x9c>
        20c5a4:	e59f914c 	ldr	r9, [pc, #14c]	; 20c6f8 <TController::Initialize(void)+0x1a4>
        20c5a8:	e3a08002 	mov	r8, #2	; 0x2
        20c5ac:	e5907000 	ldr	r7, [r0]
        20c5b0:	e5970010 	ldr	r0, [r7, #16]	; fField16
        20c5b4:	e1300009 	teq	r0, r9
        20c5b8:	1a000005 	bne	20c5d4 <TController::Initialize(void)+0x80>
        20c5bc:	e1a00004 	mov	r0, r4
        20c5c0:	e5941000 	ldr	r1, [r4]
        20c5c4:	e1a0e00f 	mov	lr, pc
        20c5c8:	e281f018 	add	pc, r1, #24	; 0x18
        20c5cc:	e5807000 	str	r7, [r0]
        20c5d0:	e5a7801c 	str	r8, [r7, #28]!	; fField28
        20c5d4:	e28d0020 	add	r0, sp, #32	; 0x20
        20c5d8:	e1a0e00f 	mov	lr, pc
        20c5dc:	e59df038 	ldr	pc, [sp, #56]	; fField56
        20c5e0:	e2866001 	add	r6, r6, #1	; 0x1
        20c5e4:	e59d1034 	ldr	r1, [sp, #52]
        20c5e8:	e1510006 	cmp	r1, r6
        20c5ec:	8affffee 	bhi	20c5ac <TController::Initialize(void)+0x58>
        20c5f0:	e3a07002 	mov	r7, #2	; 0x2
        20c5f4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c5f8:	e3300000 	teq	r0, #0	; 0x0
        20c5fc:	0a000036 	beq	20c6dc <TController::Initialize(void)+0x188>
        20c600:	e1a00005 	mov	r0, r5
        20c604:	e3a01000 	mov	r1, #0	; 0x0
        20c608:	e5952000 	ldr	r2, [r5]
        20c60c:	e1a0e00f 	mov	lr, pc
        20c610:	e282f028 	add	pc, r2, #40	; 0x28
        20c614:	e2877001 	add	r7, r7, #1	; 0x1
        20c618:	e1a0100d 	mov	r1, sp
        20c61c:	e1a00004 	mov	r0, r4
        20c620:	eb654a53 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20c624:	e3a06000 	mov	r6, #0	; 0x0
        20c628:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20c62c:	e3510000 	cmp	r1, #0	; 0x0
        20c630:	9a000023 	bls	20c6c4 <TController::Initialize(void)+0x170>
        20c634:	e5900000 	ldr	r0, [r0]
        20c638:	e5b0a010 	ldr	sl, [r0, #16]!	; fField16
        20c63c:	e51b002c 	ldr	r0, [fp, -#44]	; fField44
        20c640:	e5900010 	ldr	r0, [r0, #16]	; fField16
        20c644:	e28d1020 	add	r1, sp, #32	; 0x20
        20c648:	eb654a49 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20c64c:	e3a08000 	mov	r8, #0	; 0x0
        20c650:	e59d1034 	ldr	r1, [sp, #52]
        20c654:	e3510000 	cmp	r1, #0	; 0x0
        20c658:	9a000012 	bls	20c6a8 <TController::Initialize(void)+0x154>
        20c65c:	e5909000 	ldr	r9, [r0]
        20c660:	e1a0100a 	mov	r1, sl
        20c664:	e599000c 	ldr	r0, [r9, #12]	; fField12
        20c668:	eb654a2c 	bl	1b5ef20 <TTypeList::$FindType(unsigned long)>
        20c66c:	e3700001 	cmn	r0, #1	; 0x1
        20c670:	0a000005 	beq	20c68c <TController::Initialize(void)+0x138>
        20c674:	e1a00005 	mov	r0, r5
        20c678:	e5951000 	ldr	r1, [r5]
        20c67c:	e1a0e00f 	mov	lr, pc
        20c680:	e281f018 	add	pc, r1, #24	; 0x18
        20c684:	e5809000 	str	r9, [r0]
        20c688:	e5a9701c 	str	r7, [r9, #28]!	; fField28
        20c68c:	e28d0020 	add	r0, sp, #32	; 0x20
        20c690:	e1a0e00f 	mov	lr, pc
        20c694:	e59df038 	ldr	pc, [sp, #56]	; fField56
        20c698:	e2888001 	add	r8, r8, #1	; 0x1
        20c69c:	e59d1034 	ldr	r1, [sp, #52]
        20c6a0:	e1510008 	cmp	r1, r8
        20c6a4:	8affffec 	bhi	20c65c <TController::Initialize(void)+0x108>
        20c6a8:	e1a0000d 	mov	r0, sp
        20c6ac:	e1a0e00f 	mov	lr, pc
        20c6b0:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20c6b4:	e2866001 	add	r6, r6, #1	; 0x1
        20c6b8:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20c6bc:	e1510006 	cmp	r1, r6
        20c6c0:	8affffdb 	bhi	20c634 <TController::Initialize(void)+0xe0>
        20c6c4:	e1a00004 	mov	r0, r4
        20c6c8:	e1a04005 	mov	r4, r5
        20c6cc:	e1a05000 	mov	r5, r0
        20c6d0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c6d4:	e3300000 	teq	r0, #0	; 0x0
        20c6d8:	1affffc8 	bne	20c600 <TController::Initialize(void)+0xac>
        20c6dc:	e1a00004 	mov	r0, r4
        20c6e0:	e1a0e00f 	mov	lr, pc
        20c6e4:	e594f000 	ldr	pc, [r4]
        20c6e8:	e1a00005 	mov	r0, r5
        20c6ec:	e1a0e00f 	mov	lr, pc
        20c6f0:	e595f000 	ldr	pc, [r5]
        20c6f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        20c6f8:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: TController::GetTypedDomain(unsigned long)
 * Address: 0020c6fc
 */
TController::GetTypedDomain(unsigned long) {
    /*
        20c6fc:	e1a0c00d 	mov	ip, sp
        20c700:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20c704:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c708:	e1a04001 	mov	r4, r1
        20c70c:	e24dd020 	sub	sp, sp, #32	; 0x20
        20c710:	e5900010 	ldr	r0, [r0, #16]	; fField16
        20c714:	e1a0100d 	mov	r1, sp
        20c718:	eb654a15 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20c71c:	e3a05000 	mov	r5, #0	; 0x0
        20c720:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20c724:	e3510000 	cmp	r1, #0	; 0x0
        20c728:	9a00000b 	bls	20c75c <TController::GetTypedDomain(unsigned long)+0x60>
        20c72c:	e5900000 	ldr	r0, [r0]
        20c730:	e5901010 	ldr	r1, [r0, #16]	; fField16
        20c734:	e1310004 	teq	r1, r4
        20c738:	1a000000 	bne	20c740 <TController::GetTypedDomain(unsigned long)+0x44>
        20c73c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        20c740:	e1a0000d 	mov	r0, sp
        20c744:	e1a0e00f 	mov	lr, pc
        20c748:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20c74c:	e2855001 	add	r5, r5, #1	; 0x1
        20c750:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        20c754:	e1510005 	cmp	r1, r5
        20c758:	8afffff3 	bhi	20c72c <TController::GetTypedDomain(unsigned long)+0x30>
        20c75c:	e3a00000 	mov	r0, #0	; 0x0
        20c760:	eafffff5 	b	20c73c <TController::GetTypedDomain(unsigned long)+0x40>
    */
}

/**
 * Symbol: TController::SetHitTestRoutine(unsigned long (*)(TUnit *, TArray *))
 * Address: 0021c7c4
 */
TController::SetHitTestRoutine(unsigned long (*)(TUnit *, TArray *)) {
    /*
        21c7c4:	e5a01038 	str	r1, [r0, #56]!	; fField56
        21c7c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TController::BuildGTypes(TRecArea *)
 * Address: 0021c7cc
 */
TController::BuildGTypes(TRecArea *) {
    /*
        21c7cc:	e1a0c00d 	mov	ip, sp
        21c7d0:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        21c7d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c7d8:	e24dd05c 	sub	sp, sp, #92	; 0x5c
        21c7dc:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        21c7e0:	e5b1001c 	ldr	r0, [r1, #28]!	; fField28
        21c7e4:	e5901000 	ldr	r1, [r0]
        21c7e8:	e1a0e00f 	mov	lr, pc
        21c7ec:	e281f02c 	add	pc, r1, #44	; 0x2c
        21c7f0:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        21c7f4:	e5b10018 	ldr	r0, [r1, #24]!	; fField24
        21c7f8:	eb650193 	bl	1b5ce4c <TTypeAssoc::$Copy(void)>
        21c7fc:	e1b05000 	movs	r5, r0
        21c800:	0a000002 	beq	21c810 <TController::BuildGTypes(TRecArea *)+0x44>
        21c804:	eb650e1b 	bl	1b60078 <$Make__10TTypeAssocSFv>
        21c808:	e1b04000 	movs	r4, r0
        21c80c:	1a000000 	bne	21c814 <TController::BuildGTypes(TRecArea *)+0x48>
        21c810:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21c814:	e3a00000 	mov	r0, #0	; 0x0
        21c818:	e58d0040 	str	r0, [sp, #64]	; fField64
        21c81c:	e58d0044 	str	r0, [sp, #68]	; fField68
        21c820:	e58d004c 	str	r0, [sp, #76]	; fField76
        21c824:	e58d0048 	str	r0, [sp, #72]	; fField72
        21c828:	e3a06000 	mov	r6, #0	; 0x0
        21c82c:	e58d0050 	str	r0, [sp, #80]	; fField80
        21c830:	e595a00c 	ldr	sl, [r5, #12]	; fField12
        21c834:	e33a0000 	teq	sl, #0	; 0x0
        21c838:	0a000048 	beq	21c960 <TController::BuildGTypes(TRecArea *)+0x194>
        21c83c:	e51b0030 	ldr	r0, [fp, -#48]
        21c840:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21c844:	e28d1020 	add	r1, sp, #32	; 0x20
        21c848:	eb6509c9 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        21c84c:	e3a09000 	mov	r9, #0	; 0x0
        21c850:	e59d1034 	ldr	r1, [sp, #52]
        21c854:	e3510000 	cmp	r1, #0	; 0x0
        21c858:	9a000032 	bls	21c928 <TController::BuildGTypes(TRecArea *)+0x15c>
        21c85c:	e5900000 	ldr	r0, [r0]
        21c860:	e3a08000 	mov	r8, #0	; 0x0
        21c864:	e35a0000 	cmp	sl, #0	; 0x0
        21c868:	e58d0044 	str	r0, [sp, #68]	; fField68
        21c86c:	9a000026 	bls	21c90c <TController::BuildGTypes(TRecArea *)+0x140>
        21c870:	e1a01008 	mov	r1, r8
        21c874:	e1a00005 	mov	r0, r5
        21c878:	eb6509af 	bl	1b5ef3c <TTypeAssoc::$GetAssoc(unsigned long)>
        21c87c:	e59d1044 	ldr	r1, [sp, #68]	; fField68
        21c880:	e5911010 	ldr	r1, [r1, #16]	; fField16
        21c884:	e5900000 	ldr	r0, [r0]
        21c888:	e1310000 	teq	r1, r0
        21c88c:	1a00001b 	bne	21c900 <TController::BuildGTypes(TRecArea *)+0x134>
        21c890:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        21c894:	e590001c 	ldr	r0, [r0, #28]	; fField28
        21c898:	e1500006 	cmp	r0, r6
        21c89c:	81a06000 	movhi	r6, r0
        21c8a0:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        21c8a4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        21c8a8:	e1a0100d 	mov	r1, sp
        21c8ac:	eb6509b0 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        21c8b0:	e3a07000 	mov	r7, #0	; 0x0
        21c8b4:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        21c8b8:	e3510000 	cmp	r1, #0	; 0x0
        21c8bc:	9a00000f 	bls	21c900 <TController::BuildGTypes(TRecArea *)+0x134>
        21c8c0:	e5900000 	ldr	r0, [r0]
        21c8c4:	e58d0040 	str	r0, [sp, #64]	; fField64
        21c8c8:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        21c8cc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21c8d0:	e59d1040 	ldr	r1, [sp, #64]	; fField64
        21c8d4:	e1300001 	teq	r0, r1
        21c8d8:	128d1040 	addne	r1, sp, #64	; 0x40
        21c8dc:	11a00004 	movne	r0, r4
        21c8e0:	1b64f920 	blne	1b5ad68 <TTypeAssoc::$AddAssoc(Assoc *)>
        21c8e4:	e1a0000d 	mov	r0, sp
        21c8e8:	e1a0e00f 	mov	lr, pc
        21c8ec:	e59df018 	ldr	pc, [sp, #24]	; fField24
        21c8f0:	e2877001 	add	r7, r7, #1	; 0x1
        21c8f4:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        21c8f8:	e1510007 	cmp	r1, r7
        21c8fc:	8affffef 	bhi	21c8c0 <TController::BuildGTypes(TRecArea *)+0xf4>
        21c900:	e2888001 	add	r8, r8, #1	; 0x1
        21c904:	e158000a 	cmp	r8, sl
        21c908:	3affffd8 	bcc	21c870 <TController::BuildGTypes(TRecArea *)+0xa4>
        21c90c:	e28d0020 	add	r0, sp, #32	; 0x20
        21c910:	e1a0e00f 	mov	lr, pc
        21c914:	e59df038 	ldr	pc, [sp, #56]	; fField56
        21c918:	e2899001 	add	r9, r9, #1	; 0x1
        21c91c:	e59d1034 	ldr	r1, [sp, #52]
        21c920:	e1510009 	cmp	r1, r9
        21c924:	8affffcc 	bhi	21c85c <TController::BuildGTypes(TRecArea *)+0x90>
        21c928:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        21c92c:	e5b1001c 	ldr	r0, [r1, #28]!	; fField28
        21c930:	e1a01004 	mov	r1, r4
        21c934:	eb6511e4 	bl	1b610cc <TTypeAssoc::$MergeAssoc(TTypeAssoc *)>
        21c938:	e1a00005 	mov	r0, r5
        21c93c:	e1a05004 	mov	r5, r4
        21c940:	e1a04000 	mov	r4, r0
        21c944:	e3a01000 	mov	r1, #0	; 0x0
        21c948:	e5902000 	ldr	r2, [r0]
        21c94c:	e1a0e00f 	mov	lr, pc
        21c950:	e282f028 	add	pc, r2, #40	; 0x28
        21c954:	e595a00c 	ldr	sl, [r5, #12]	; fField12
        21c958:	e33a0000 	teq	sl, #0	; 0x0
        21c95c:	1affffb6 	bne	21c83c <TController::BuildGTypes(TRecArea *)+0x70>
        21c960:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        21c964:	e1a00005 	mov	r0, r5
        21c968:	e5a16010 	str	r6, [r1, #16]!	; fField16
        21c96c:	e1a0e00f 	mov	lr, pc
        21c970:	e595f000 	ldr	pc, [r5]
        21c974:	e1a00004 	mov	r0, r4
        21c978:	e1a0e00f 	mov	lr, pc
        21c97c:	e594f000 	ldr	pc, [r4]
        21c980:	eaffffa2 	b	21c810 <TController::BuildGTypes(TRecArea *)+0x44>
    */
}

