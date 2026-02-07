#include "include/TStrokeUnit.h"

/**
 * Symbol: TStrokeUnit::CountStrokes(void)
 * Address: 00220f28
 */
TStrokeUnit::CountStrokes(void) {
    /*
        220f28:	e3a00001 	mov	r0, #1	; 0x1
        220f2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokeUnit::GetStroke(unsigned long)
 * Address: 00220f30
 */
TStrokeUnit::GetStroke(unsigned long) {
    /*
        220f30:	e5900040 	ldr	r0, [r0, #64]	; fField64
        220f34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokeUnit::OwnsStroke(void)
 * Address: 00220f38
 */
TStrokeUnit::OwnsStroke(void) {
    /*
        220f38:	e3a00001 	mov	r0, #1	; 0x1
        220f3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokeUnit::ContextID(void)
 * Address: 00220f40
 */
TStrokeUnit::ContextID(void) {
    /*
        220f40:	e590003c 	ldr	r0, [r0, #60]	; fField60
        220f44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokeUnit::SetContextID(unsigned long)
 * Address: 00220f48
 */
TStrokeUnit::SetContextID(unsigned long) {
    /*
        220f48:	e5a0103c 	str	r1, [r0, #60]!	; fField60
        220f4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokeUnit::GetAllStrokes(void)
 * Address: 00220f50
 */
TStrokeUnit::GetAllStrokes(void) {
    /*
        220f50:	e1a0c00d 	mov	ip, sp
        220f54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        220f58:	e24cb004 	sub	fp, ip, #4	; 0x4
        220f5c:	e1a04000 	mov	r4, r0
        220f60:	eb650051 	bl	1b610ac <$Make__9TUnitListSFv>
        220f64:	e1b05000 	movs	r5, r0
        220f68:	0a000007 	beq	220f8c <TStrokeUnit::GetAllStrokes(void)+0x3c>
        220f6c:	e1a01004 	mov	r1, r4
        220f70:	e1a00005 	mov	r0, r5
        220f74:	eb64eb88 	bl	1b5bd9c <TUnitList::$AddUnique(TUnit *)>
        220f78:	e3300000 	teq	r0, #0	; 0x0
        220f7c:	e1a00005 	mov	r0, r5
        220f80:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        220f84:	e1a0e00f 	mov	lr, pc
        220f88:	e590f000 	ldr	pc, [r0]
        220f8c:	e3a00000 	mov	r0, #0	; 0x0
        220f90:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokeUnit::Dump(TMsg *)
 * Address: 00220f94
 */
TStrokeUnit::Dump(TMsg *) {
    /*
        220f94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokeUnit::IsCircle(FPoint *, long *, unsigned long *)
 * Address: 00220f98
 */
TStrokeUnit::IsCircle(FPoint *, long *, unsigned long *) {
    /*
        220f98:	e1a0c00d 	mov	ip, sp
        220f9c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        220fa0:	e24cb004 	sub	fp, ip, #4	; 0x4
        220fa4:	e1a05000 	mov	r5, r0
        220fa8:	e1a04001 	mov	r4, r1
        220fac:	e1a07002 	mov	r7, r2
        220fb0:	e1a06003 	mov	r6, r3
        220fb4:	e24dd010 	sub	sp, sp, #16	; 0x10
        220fb8:	e3a09000 	mov	r9, #0	; 0x0
        220fbc:	eb65298b 	bl	1b6b5f0 <TStrokeUnit::$GetPts(void)>
        220fc0:	e1b08000 	movs	r8, r0
        220fc4:	0a000022 	beq	221054 <TStrokeUnit::IsCircle(FPoint *, long *, unsigned long *)+0xbc>
        220fc8:	e1a0100d 	mov	r1, sp
        220fcc:	e1a00005 	mov	r0, r5
        220fd0:	eb6510ac 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        220fd4:	e59d0000 	ldr	r0, [sp]
        220fd8:	e59d1008 	ldr	r1, [sp, #8]
        220fdc:	e0411000 	sub	r1, r1, r0
        220fe0:	e59d0004 	ldr	r0, [sp, #4]
        220fe4:	e59d200c 	ldr	r2, [sp, #12]
        220fe8:	e0420000 	sub	r0, r2, r0
        220fec:	e1a02001 	mov	r2, r1
        220ff0:	e1a03000 	mov	r3, r0
        220ff4:	e1510000 	cmp	r1, r0
        220ff8:	b1a02000 	movlt	r2, r0
        220ffc:	b1a03001 	movlt	r3, r1
        221000:	e1a01003 	mov	r1, r3
        221004:	e1a00002 	mov	r0, r2
        221008:	eb67002c 	bl	1be10c0 <$FixedDivide>
        22100c:	e3500a16 	cmp	r0, #90112	; 0x16000
        221010:	ca00000b 	bgt	221044 <TStrokeUnit::IsCircle(FPoint *, long *, unsigned long *)+0xac>
        221014:	e1a03006 	mov	r3, r6
        221018:	e1a01004 	mov	r1, r4
        22101c:	e1a00008 	mov	r0, r8
        221020:	e5972000 	ldr	r2, [r7]
        221024:	eb65319f 	bl	1b6d6a8 <$PtsonCircle(TArray *, FPoint *, long, unsigned long *)>
        221028:	e3300000 	teq	r0, #0	; 0x0
        22102c:	0a000004 	beq	221044 <TStrokeUnit::IsCircle(FPoint *, long *, unsigned long *)+0xac>
        221030:	e1a01004 	mov	r1, r4
        221034:	e1a00008 	mov	r0, r8
        221038:	eb6535b2 	bl	1b6e708 <$TraceContour(TArray *, FPoint *)>
        22103c:	e3300000 	teq	r0, #0	; 0x0
        221040:	13a09001 	movne	r9, #1	; 0x1
        221044:	e3380000 	teq	r8, #0	; 0x0
        221048:	11a00008 	movne	r0, r8
        22104c:	11a0e00f 	movne	lr, pc
        221050:	1598f000 	ldrne	pc, [r8]
        221054:	e1a00009 	mov	r0, r9
        221058:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokeUnit::IsEllipse(FPoint *, long *, long *, long *, unsigned long *)
 * Address: 002212e4
 */
TStrokeUnit::IsEllipse(FPoint *, long *, long *, long *, unsigned long *) {
    /*
        2212e4:	e1a0c00d 	mov	ip, sp
        2212e8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2212ec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2212f0:	e24cb014 	sub	fp, ip, #20	; 0x14
        2212f4:	e1a06000 	mov	r6, r0
        2212f8:	e1a04001 	mov	r4, r1
        2212fc:	e59ba014 	ldr	sl, [fp, #20]
        221300:	e24dd0b4 	sub	sp, sp, #180	; 0xb4
        221304:	e3a07008 	mov	r7, #8	; 0x8
        221308:	e3a09000 	mov	r9, #0	; 0x0
        22130c:	eb6528b7 	bl	1b6b5f0 <TStrokeUnit::$GetPts(void)>
        221310:	e1b05000 	movs	r5, r0
        221314:	0a000050 	beq	22145c <TStrokeUnit::IsEllipse(FPoint *, long *, long *, long *, unsigned long *)+0x178>
        221318:	e28d1090 	add	r1, sp, #144	; 0x90
        22131c:	e1a00006 	mov	r0, r6
        221320:	eb650fd8 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        221324:	e59d0090 	ldr	r0, [sp, #144]
        221328:	e59d1098 	ldr	r1, [sp, #152]
        22132c:	e0418000 	sub	r8, r1, r0
        221330:	e59d009c 	ldr	r0, [sp, #156]
        221334:	e59d1094 	ldr	r1, [sp, #148]
        221338:	e0406001 	sub	r6, r0, r1
        22133c:	e1a01008 	mov	r1, r8
        221340:	e1580006 	cmp	r8, r6
        221344:	b1a01006 	movlt	r1, r6
        221348:	e3a00701 	mov	r0, #262144	; 0x40000
        22134c:	eb66ff5b 	bl	1be10c0 <$FixedDivide>
        221350:	e3a01801 	mov	r1, #65536	; 0x10000
        221354:	e59dc094 	ldr	ip, [sp, #148]
        221358:	e59de090 	ldr	lr, [sp, #144]
        22135c:	e28d3018 	add	r3, sp, #24	; 0x18
        221360:	e28d202c 	add	r2, sp, #44	; 0x2c
        221364:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        221368:	e1a0300c 	mov	r3, ip
        22136c:	e1a0200e 	mov	r2, lr
        221370:	e1a01000 	mov	r1, r0
        221374:	e1a00005 	mov	r0, r5
        221378:	eb6530d8 	bl	1b6d6e0 <$SetupEllipseSystem__FP6TArraylN32PlT6>
        22137c:	e28dd00c 	add	sp, sp, #12	; 0xc
        221380:	e28d3014 	add	r3, sp, #20	; 0x14
        221384:	e92d0008 	stmdb	sp!, {r3}
        221388:	e28d30a4 	add	r3, sp, #164	; 0xa4
        22138c:	e28d2030 	add	r2, sp, #48	; 0x30
        221390:	e3a01005 	mov	r1, #5	; 0x5
        221394:	e3a00005 	mov	r0, #5	; 0x5
        221398:	eb64eeb1 	bl	1b5ce64 <$Decomp>
        22139c:	e28dd004 	add	sp, sp, #4	; 0x4
        2213a0:	e1580086 	cmp	r8, r6, lsl #1
        2213a4:	c3a07007 	movgt	r7, #7	; 0x7
        2213a8:	ca000001 	bgt	2213b4 <TStrokeUnit::IsEllipse(FPoint *, long *, long *, long *, unsigned long *)+0xd0>
        2213ac:	e1560088 	cmp	r6, r8, lsl #1
        2213b0:	c3a07009 	movgt	r7, #9	; 0x9
        2213b4:	e28d3018 	add	r3, sp, #24	; 0x18
        2213b8:	e92d0008 	stmdb	sp!, {r3}
        2213bc:	e28d30a4 	add	r3, sp, #164	; 0xa4
        2213c0:	e28d2030 	add	r2, sp, #48	; 0x30
        2213c4:	e1a00007 	mov	r0, r7
        2213c8:	e3a01005 	mov	r1, #5	; 0x5
        2213cc:	eb65077a 	bl	1b631bc <$Solve>
        2213d0:	e28dd004 	add	sp, sp, #4	; 0x4
        2213d4:	e1a0300a 	mov	r3, sl
        2213d8:	e28d2010 	add	r2, sp, #16	; 0x10
        2213dc:	e28b100c 	add	r1, fp, #12	; 0xc
        2213e0:	e8910003 	ldmia	r1, {r0, r1}
        2213e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2213e8:	e28d3010 	add	r3, sp, #16	; 0x10
        2213ec:	e92d0008 	stmdb	sp!, {r3}
        2213f0:	e28d301c 	add	r3, sp, #28	; 0x1c
        2213f4:	e1a02004 	mov	r2, r4
        2213f8:	e28d102c 	add	r1, sp, #44	; 0x2c
        2213fc:	e28d00a4 	add	r0, sp, #164	; 0xa4
        221400:	eb652c94 	bl	1b6c658 <$MakeEllipseTemplate__FP5FRectPlP6FPointN23N42>
        221404:	e28dd014 	add	sp, sp, #20	; 0x14
        221408:	e3300000 	teq	r0, #0	; 0x0
        22140c:	0a00000e 	beq	22144c <TStrokeUnit::IsEllipse(FPoint *, long *, long *, long *, unsigned long *)+0x168>
        221410:	e59b3018 	ldr	r3, [fp, #24]
        221414:	e92d0008 	stmdb	sp!, {r3}
        221418:	e59d3014 	ldr	r3, [sp, #20]
        22141c:	e28d2004 	add	r2, sp, #4	; 0x4
        221420:	e28d100c 	add	r1, sp, #12	; 0xc
        221424:	e1a00005 	mov	r0, r5
        221428:	eb65309f 	bl	1b6d6ac <$PtsonEllipse__FP6TArrayP6FPointT2lPUl>
        22142c:	e28dd004 	add	sp, sp, #4	; 0x4
        221430:	e3300000 	teq	r0, #0	; 0x0
        221434:	0a000004 	beq	22144c <TStrokeUnit::IsEllipse(FPoint *, long *, long *, long *, unsigned long *)+0x168>
        221438:	e1a01004 	mov	r1, r4
        22143c:	e1a00005 	mov	r0, r5
        221440:	eb6534b0 	bl	1b6e708 <$TraceContour(TArray *, FPoint *)>
        221444:	e3300000 	teq	r0, #0	; 0x0
        221448:	13a09001 	movne	r9, #1	; 0x1
        22144c:	e3350000 	teq	r5, #0	; 0x0
        221450:	11a00005 	movne	r0, r5
        221454:	11a0e00f 	movne	lr, pc
        221458:	1595f000 	ldrne	pc, [r5]
        22145c:	e1a00009 	mov	r0, r9
        221460:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: Make__11TStrokeUnitSFP7TDomainUlP7TStrokeP6TArray
 * Address: 00221ec8
 */
void TStrokeUnit::Make() {
    /*
        221ec8:	e1a0c00d 	mov	ip, sp
        221ecc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        221ed0:	e24cb004 	sub	fp, ip, #4	; 0x4
        221ed4:	e1a07000 	mov	r7, r0
        221ed8:	e1a06001 	mov	r6, r1
        221edc:	e1a05002 	mov	r5, r2
        221ee0:	e1a04003 	mov	r4, r3
        221ee4:	e3a00044 	mov	r0, #68	; 0x44
        221ee8:	eb66b212 	bl	1bce738 <$__nw(unsigned int)>
        221eec:	e1b08000 	movs	r8, r0
        221ef0:	0a000003 	beq	221f04 <Make__11TStrokeUnitSFP7TDomainUlP7TStrokeP6TArray+0x3c>
        221ef4:	e1a00008 	mov	r0, r8
        221ef8:	eb64e393 	bl	1b5ad4c <TSIUnit::$__ct(void)>
        221efc:	e59f0048 	ldr	r0, [pc, #48]	; 221f4c <Make__11TStrokeUnitSFP7TDomainUlP7TStrokeP6TArray+0x84>
        221f00:	e5880000 	str	r0, [r8]
        221f04:	e3380000 	teq	r8, #0	; 0x0
        221f08:	0a00000d 	beq	221f44 <Make__11TStrokeUnitSFP7TDomainUlP7TStrokeP6TArray+0x7c>
        221f0c:	e1a03004 	mov	r3, r4
        221f10:	e92d0008 	stmdb	sp!, {r3}
        221f14:	e1a03005 	mov	r3, r5
        221f18:	e1a02006 	mov	r2, r6
        221f1c:	e1a01007 	mov	r1, r7
        221f20:	e1a00008 	mov	r0, r8
        221f24:	eb6529c2 	bl	1b6c634 <TStrokeUnit::$IStrokeUnit(TDomain *, unsigned long, TStroke *, TArray *)>
        221f28:	e28dd004 	add	sp, sp, #4	; 0x4
        221f2c:	e3300000 	teq	r0, #0	; 0x0
        221f30:	0a000003 	beq	221f44 <Make__11TStrokeUnitSFP7TDomainUlP7TStrokeP6TArray+0x7c>
        221f34:	e1a00008 	mov	r0, r8
        221f38:	e1a0e00f 	mov	lr, pc
        221f3c:	e598f000 	ldr	pc, [r8]
        221f40:	e3a08000 	mov	r8, #0	; 0x0
        221f44:	e1a00008 	mov	r0, r8
        221f48:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        221f4c:	0001b68c 	andeq	fp, r1, ip, lsl #13
    */
}

/**
 * Symbol: TStrokeUnit::IStrokeUnit(TDomain *, unsigned long, TStroke *, TArray *)
 * Address: 00221f50
 */
TStrokeUnit::IStrokeUnit(TDomain *, unsigned long, TStroke *, TArray *) {
    /*
        221f50:	e1a0c00d 	mov	ip, sp
        221f54:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        221f58:	e24cb004 	sub	fp, ip, #4	; 0x4
        221f5c:	e1a04000 	mov	r4, r0
        221f60:	e1a00002 	mov	r0, r2
        221f64:	e1a05003 	mov	r5, r3
        221f68:	e3a03010 	mov	r3, #16	; 0x10
        221f6c:	e59b2004 	ldr	r2, [fp, #4]
        221f70:	e92d000c 	stmdb	sp!, {r2, r3}
        221f74:	e1a03000 	mov	r3, r0
        221f78:	e1a00004 	mov	r0, r4
        221f7c:	e59f2048 	ldr	r2, [pc, #48]	; 221fcc <TStrokeUnit::IStrokeUnit(TDomain *, unsigned long, TStroke *, TArray *)+0x7c>
        221f80:	eb64f831 	bl	1b6004c <TSIUnit::$ISIUnit(TDomain *, unsigned long, unsigned long, TArray *, unsigned long)>
        221f84:	e28dd008 	add	sp, sp, #8	; 0x8
        221f88:	e1a06000 	mov	r6, r0
        221f8c:	e3a00000 	mov	r0, #0	; 0x0
        221f90:	e284403c 	add	r4, r4, #60	; 0x3c
        221f94:	e8840021 	stmia	r4, {r0, r5}
        221f98:	e244403c 	sub	r4, r4, #60	; 0x3c
        221f9c:	e2851020 	add	r1, r5, #32	; 0x20
        221fa0:	e1a00004 	mov	r0, r4
        221fa4:	eb6510dd 	bl	1b66320 <TUnit::$SetBBox(FRect *)>
        221fa8:	e5950034 	ldr	r0, [r5, #52]
        221fac:	e584001c 	str	r0, [r4, #28]	; fField28
        221fb0:	e5b51038 	ldr	r1, [r5, #56]!
        221fb4:	e0410000 	sub	r0, r1, r0
        221fb8:	e5c40021 	strb	r0, [r4, #33]	; fField33
        221fbc:	e1a00420 	mov	r0, r0, lsr #8
        221fc0:	e5c40020 	strb	r0, [r4, #32]	; fField32
        221fc4:	e1a00006 	mov	r0, r6
        221fc8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        221fcc:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: TStrokeUnit::IDispose(void)
 * Address: 00221fd0
 */
TStrokeUnit::IDispose(void) {
    /*
        221fd0:	e1a0c00d 	mov	ip, sp
        221fd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        221fd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        221fdc:	e1a04000 	mov	r4, r0
        221fe0:	e5900008 	ldr	r0, [r0, #8]
        221fe4:	e59fc018 	ldr	ip, [pc, #18]	; 222004 <TStrokeUnit::IDispose(void)+0x34>
        221fe8:	e130000c 	teq	r0, ip
        221fec:	05940040 	ldreq	r0, [r4, #64]	; fField64
        221ff0:	01a0e00f 	moveq	lr, pc
        221ff4:	0590f000 	ldreq	pc, [r0]
        221ff8:	e1a00004 	mov	r0, r4
        221ffc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        222000:	ea64f7f8 	b	1b5ffe8 <TSIUnit::$IDispose(void)>
        222004:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: TStrokeUnit::SizeInBytes(void)
 * Address: 00222008
 */
TStrokeUnit::SizeInBytes(void) {
    /*
        222008:	e1a0c00d 	mov	ip, sp
        22200c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        222010:	e24cb004 	sub	fp, ip, #4	; 0x4
        222014:	e1a04000 	mov	r4, r0
        222018:	e3a07000 	mov	r7, #0	; 0x0
        22201c:	eb650c98 	bl	1b65284 <TUnit::$GetAreas(void)>
        222020:	e1b05000 	movs	r5, r0
        222024:	0a00000e 	beq	222064 <TStrokeUnit::SizeInBytes(void)+0x5c>
        222028:	e3a06000 	mov	r6, #0	; 0x0
        22202c:	e595000c 	ldr	r0, [r5, #12]
        222030:	e3500000 	cmp	r0, #0	; 0x0
        222034:	9a00000a 	bls	222064 <TStrokeUnit::SizeInBytes(void)+0x5c>
        222038:	e1a01006 	mov	r1, r6
        22203c:	e1a00005 	mov	r0, r5
        222040:	eb64f3bc 	bl	1b5ef38 <TAreaList::$GetArea(unsigned long)>
        222044:	e5901000 	ldr	r1, [r0]
        222048:	e1a0e00f 	mov	lr, pc
        22204c:	e281f008 	add	pc, r1, #8	; 0x8
        222050:	e0807007 	add	r7, r0, r7
        222054:	e2866001 	add	r6, r6, #1	; 0x1
        222058:	e595000c 	ldr	r0, [r5, #12]
        22205c:	e1500006 	cmp	r0, r6
        222060:	8afffff4 	bhi	222038 <TStrokeUnit::SizeInBytes(void)+0x30>
        222064:	e1a00004 	mov	r0, r4
        222068:	eb650451 	bl	1b631b4 <TSIUnit::$SizeInBytes(void)>
        22206c:	e5b41040 	ldr	r1, [r4, #64]!	; fField64
        222070:	e1a04000 	mov	r4, r0
        222074:	e1a00001 	mov	r0, r1
        222078:	e5911000 	ldr	r1, [r1]
        22207c:	e1a0e00f 	mov	lr, pc
        222080:	e281f008 	add	pc, r1, #8	; 0x8
        222084:	e0840000 	add	r0, r4, r0
        222088:	e0804007 	add	r4, r0, r7
        22208c:	e3350000 	teq	r5, #0	; 0x0
        222090:	11a00005 	movne	r0, r5
        222094:	11a0e00f 	movne	lr, pc
        222098:	1595f000 	ldrne	pc, [r5]
        22209c:	e1a00004 	mov	r0, r4
        2220a0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokeUnit::GetPts(void)
 * Address: 002220a4
 */
TStrokeUnit::GetPts(void) {
    /*
        2220a4:	e1a0c00d 	mov	ip, sp
        2220a8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2220ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2220b0:	e1a04000 	mov	r4, r0
        2220b4:	e5900040 	ldr	r0, [r0, #64]	; fField64
        2220b8:	e5b0100c 	ldr	r1, [r0, #12]!
        2220bc:	e1a07001 	mov	r7, r1
        2220c0:	e3a00008 	mov	r0, #8	; 0x8
        2220c4:	eb64fbf0 	bl	1b6108c <$Make__6TArraySFUlT1>
        2220c8:	e1b08000 	movs	r8, r0
        2220cc:	0a000014 	beq	222124 <TStrokeUnit::GetPts(void)+0x80>
        2220d0:	e3a01000 	mov	r1, #0	; 0x0
        2220d4:	e5b40040 	ldr	r0, [r4, #64]!	; fField64
        2220d8:	eb652542 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        2220dc:	e1a06000 	mov	r6, r0
        2220e0:	e1a00008 	mov	r0, r8
        2220e4:	e3a01000 	mov	r1, #0	; 0x0
        2220e8:	e5982000 	ldr	r2, [r8]
        2220ec:	e1a0e00f 	mov	lr, pc
        2220f0:	e282f01c 	add	pc, r2, #28	; 0x1c
        2220f4:	e1a05000 	mov	r5, r0
        2220f8:	e3a04000 	mov	r4, #0	; 0x0
        2220fc:	e3570000 	cmp	r7, #0	; 0x0
        222100:	9a000007 	bls	222124 <TStrokeUnit::GetPts(void)+0x80>
        222104:	e1a01005 	mov	r1, r5
        222108:	e1a00006 	mov	r0, r6
        22210c:	eb652536 	bl	1b6b5ec <$GetPoint(SamplePt *, FPoint *)>
        222110:	e2844001 	add	r4, r4, #1	; 0x1
        222114:	e2866004 	add	r6, r6, #4	; 0x4
        222118:	e2855008 	add	r5, r5, #8	; 0x8
        22211c:	e1540007 	cmp	r4, r7
        222120:	3afffff7 	bcc	222104 <TStrokeUnit::GetPts(void)+0x60>
        222124:	e1a00008 	mov	r0, r8
        222128:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

