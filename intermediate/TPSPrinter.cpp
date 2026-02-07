#include "include/TPSPrinter.h"

/**
 * Symbol: TPSPrinter::DrawAnyCurve(curve *, Point, unsigned char)
 * Address: 00155f78
 */
TPSPrinter::DrawAnyCurve(curve *, Point, unsigned char) {
    /*
        155f78:	e1a0c00d 	mov	ip, sp
        155f7c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        155f80:	e24cb004 	sub	fp, ip, #4	; 0x4
        155f84:	e1a04000 	mov	r4, r0
        155f88:	e1a05001 	mov	r5, r1
        155f8c:	e21370ff 	ands	r7, r3, #255	; 0xff
        155f90:	e24dd020 	sub	sp, sp, #32	; 0x20
        155f94:	e5918004 	ldr	r8, [r1, #4]
        155f98:	e5919000 	ldr	r9, [r1]
        155f9c:	0a000010 	beq	155fe4 <TPSPrinter::DrawAnyCurve(curve *, Point, unsigned char)+0x6c>
        155fa0:	e51b0030 	ldr	r0, [fp, -#48]
        155fa4:	e1a00800 	mov	r0, r0, lsl #16
        155fa8:	e3a01802 	mov	r1, #131072	; 0x20000
        155fac:	eb6a2c43 	bl	1be10c0 <$FixedDivide>
        155fb0:	e1a06000 	mov	r6, r0
        155fb4:	e51b002e 	ldr	r0, [fp, -#46]
        155fb8:	e1a00800 	mov	r0, r0, lsl #16
        155fbc:	e3a01802 	mov	r1, #131072	; 0x20000
        155fc0:	eb6a2c3e 	bl	1be10c0 <$FixedDivide>
        155fc4:	e0860000 	add	r0, r6, r0
        155fc8:	e3a01802 	mov	r1, #131072	; 0x20000
        155fcc:	eb6a2c3b 	bl	1be10c0 <$FixedDivide>
        155fd0:	e1a02000 	mov	r2, r0
        155fd4:	e1a01005 	mov	r1, r5
        155fd8:	e1a00004 	mov	r0, r4
        155fdc:	e1a03002 	mov	r3, r2
        155fe0:	eb67b055 	bl	1b4213c <TPSPrinter::$OffsetFixedPoint(FPoint &, long, long)>
        155fe4:	e1a0200d 	mov	r2, sp
        155fe8:	e1a00004 	mov	r0, r4
        155fec:	e5951004 	ldr	r1, [r5, #4]
        155ff0:	eb67a819 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        155ff4:	e1a06000 	mov	r6, r0
        155ff8:	e28d2010 	add	r2, sp, #16	; 0x10
        155ffc:	e1a00004 	mov	r0, r4
        156000:	e5951000 	ldr	r1, [r5]
        156004:	eb67a814 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        156008:	e1a02000 	mov	r2, r0
        15600c:	e28400e8 	add	r0, r4, #232	; 0xe8
        156010:	e1a0a000 	mov	sl, r0
        156014:	e28f1f18 	add	r1, pc, #96	; 0x60
        156018:	e1a03006 	mov	r3, r6
        15601c:	eb697e9c 	bl	1bb5a94 <$sprintf>
        156020:	e1a0100a 	mov	r1, sl
        156024:	e1a00004 	mov	r0, r4
        156028:	e3a02000 	mov	r2, #0	; 0x0
        15602c:	eb67c4e6 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156030:	e1a03007 	mov	r3, r7
        156034:	e5858004 	str	r8, [r5, #4]
        156038:	e5859000 	str	r9, [r5]
        15603c:	e1a01005 	mov	r1, r5
        156040:	e1a00004 	mov	r0, r4
        156044:	e51b2030 	ldr	r2, [fp, -#48]
        156048:	eb67a7ed 	bl	1b40004 <TPSPrinter::$Draw1Curve(curve *, Point, unsigned char)>
        15604c:	e3370000 	teq	r7, #0	; 0x0
        156050:	11a00004 	movne	r0, r4
        156054:	128f1f0b 	addne	r1, pc, #44	; 0x2c
        156058:	1a000004 	bne	156070 <TPSPrinter::DrawAnyCurve(curve *, Point, unsigned char)+0xf8>
        15605c:	e5d401ec 	ldrb	r0, [r4, #492]	; fField492
        156060:	e3300000 	teq	r0, #0	; 0x0
        156064:	028f1f09 	addeq	r1, pc, #36	; 0x24
        156068:	128f1f0a 	addne	r1, pc, #40	; 0x28
        15606c:	e1a00004 	mov	r0, r4
        156070:	e3a02000 	mov	r2, #0	; 0x0
        156074:	eb67c4d4 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156078:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        15607c:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        156080:	73204d76 	teqvc	r0, #7552	; 0x1d80
        156084:	546f2000 	strplbt	r2, [pc], #0	; 15608c <TPSPrinter::DrawAnyCurve(curve *, Point, unsigned char)+0x114>
        156088:	7374726f 	cmnvc	r4, #-268435450	; 0xf0000006
        15608c:	6b650d00 	blvs	1a99494 <TNotebook::$Idle(void)+0x818>
        156090:	66696c6c 	strvsbt	r6, [r9], -ip, ror #24
        156094:	0d000000 	stceq	0, cr0, [r0]
        156098:	50617474 	rsbpl	r7, r1, r4, ror r4
        15609c:	65726e46 	ldrvsb	r6, [r2, -#3654]!
        1560a0:	696c6c0d 	stmvsdb	ip!, {r0, r2, r3, sl, fp, sp, lr}^
        1560a4:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSPrinter::DrawAnyPath(paths **, Point, unsigned char)
 * Address: 001560a8
 */
TPSPrinter::DrawAnyPath(paths **, Point, unsigned char) {
    /*
        1560a8:	e1a0c00d 	mov	ip, sp
        1560ac:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1560b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1560b4:	e1a06002 	mov	r6, r2
        1560b8:	e1a05000 	mov	r5, r0
        1560bc:	e1a04001 	mov	r4, r1
        1560c0:	e20390ff 	and	r9, r3, #255	; 0xff
        1560c4:	e5910000 	ldr	r0, [r1]
        1560c8:	e5907000 	ldr	r7, [r0]
        1560cc:	e2808004 	add	r8, r0, #4	; 0x4
        1560d0:	e1a00001 	mov	r0, r1
        1560d4:	eb6a300c 	bl	1be210c <$HLock>
        1560d8:	e1b00007 	movs	r0, r7
        1560dc:	e2477001 	sub	r7, r7, #1	; 0x1
        1560e0:	0a000008 	beq	156108 <TPSPrinter::DrawAnyPath(paths **, Point, unsigned char)+0x60>
        1560e4:	e1a03009 	mov	r3, r9
        1560e8:	e1a01008 	mov	r1, r8
        1560ec:	e1a00005 	mov	r0, r5
        1560f0:	e1a02006 	mov	r2, r6
        1560f4:	eb67a7c3 	bl	1b40008 <TPSPrinter::$Draw1Path(path *, Point, unsigned char)>
        1560f8:	e1a08000 	mov	r8, r0
        1560fc:	e1b00007 	movs	r0, r7
        156100:	e2477001 	sub	r7, r7, #1	; 0x1
        156104:	1afffff6 	bne	1560e4 <TPSPrinter::DrawAnyPath(paths **, Point, unsigned char)+0x3c>
        156108:	e1a00004 	mov	r0, r4
        15610c:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        156110:	ea6a2fff 	b	1be2114 <$HUnlock>
    */
}

/**
 * Symbol: TPSPrinter::DrawFillOval(Rect *)
 * Address: 00156114
 */
TPSPrinter::DrawFillOval(Rect *) {
    /*
        156114:	e1a0c00d 	mov	ip, sp
        156118:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15611c:	e24cb004 	sub	fp, ip, #4	; 0x4
        156120:	e1a04000 	mov	r4, r0
        156124:	e5913006 	ldr	r3, [r1, #6]
        156128:	e1a03843 	mov	r3, r3, asr #16
        15612c:	e5912004 	ldr	r2, [r1, #4]
        156130:	e1a02842 	mov	r2, r2, asr #16
        156134:	e92d000c 	stmdb	sp!, {r2, r3}
        156138:	e5913002 	ldr	r3, [r1, #2]
        15613c:	e1a03843 	mov	r3, r3, asr #16
        156140:	e28000e8 	add	r0, r0, #232	; 0xe8
        156144:	e1a05000 	mov	r5, r0
        156148:	e5912000 	ldr	r2, [r1]
        15614c:	e1a02842 	mov	r2, r2, asr #16
        156150:	e28f1f10 	add	r1, pc, #64	; 0x40
        156154:	eb697e4e 	bl	1bb5a94 <$sprintf>
        156158:	e28dd008 	add	sp, sp, #8	; 0x8
        15615c:	e1a01005 	mov	r1, r5
        156160:	e1a00004 	mov	r0, r4
        156164:	e3a02000 	mov	r2, #0	; 0x0
        156168:	eb67c497 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        15616c:	e5d401ec 	ldrb	r0, [r4, #492]	; fField492
        156170:	e3300000 	teq	r0, #0	; 0x0
        156174:	e1a00005 	mov	r0, r5
        156178:	028f1f0d 	addeq	r1, pc, #52	; 0x34
        15617c:	128f1f0e 	addne	r1, pc, #56	; 0x38
        156180:	eb697e43 	bl	1bb5a94 <$sprintf>
        156184:	e1a01005 	mov	r1, r5
        156188:	e1a00004 	mov	r0, r4
        15618c:	e3a02000 	mov	r2, #0	; 0x0
        156190:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        156194:	ea67c48c 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156198:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        15619c:	64202564 	strvst	r2, [r0], -#1380
        1561a0:	20256420 	eorcs	r6, r5, r0, lsr #8
        1561a4:	30203336 	eorcc	r3, r0, r6, lsr r3
        1561a8:	30204672 	eorcc	r4, r0, r2, ror r6
        1561ac:	616d654f 	cmnvs	sp, pc, asr #10
        1561b0:	76616c00 	strvcbt	r6, [r1], -r0, lsl #24
        1561b4:	2066696c 	rsbcs	r6, r6, ip, ror #18
        1561b8:	6c0d0000 	stcvs	0, cr0, [sp]
        1561bc:	20506174 	subcss	r6, r0, r4, ror r1
        1561c0:	7465726e 	strvcbt	r7, [r5], -#622	; fField622
        1561c4:	46696c6c 	strmibt	r6, [r9], -ip, ror #24
        1561c8:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TPSPrinter::DrawFillPoly(Polygon **)
 * Address: 001561cc
 */
TPSPrinter::DrawFillPoly(Polygon **) {
    /*
        1561cc:	e1a0c00d 	mov	ip, sp
        1561d0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1561d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1561d8:	e1a04000 	mov	r4, r0
        1561dc:	e1a05001 	mov	r5, r1
        1561e0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1561e4:	e5910000 	ldr	r0, [r1]
        1561e8:	e5901000 	ldr	r1, [r0]
        1561ec:	e1a01841 	mov	r1, r1, asr #16
        1561f0:	e2411010 	sub	r1, r1, #16	; 0x10
        1561f4:	e1b08141 	movs	r8, r1, asr #2
        1561f8:	0a00002d 	beq	1562b4 <TPSPrinter::DrawFillPoly(Polygon **)+0xe8>
        1561fc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        156200:	e58d0004 	str	r0, [sp, #4]
        156204:	e59d2006 	ldr	r2, [sp, #6]
        156208:	e1a02842 	mov	r2, r2, asr #16
        15620c:	e28400e8 	add	r0, r4, #232	; 0xe8
        156210:	e1a06000 	mov	r6, r0
        156214:	e59d3004 	ldr	r3, [sp, #4]
        156218:	e1a03843 	mov	r3, r3, asr #16
        15621c:	e28f1f25 	add	r1, pc, #148	; 0x94
        156220:	eb697e1b 	bl	1bb5a94 <$sprintf>
        156224:	e1a01006 	mov	r1, r6
        156228:	e1a00004 	mov	r0, r4
        15622c:	e3a02000 	mov	r2, #0	; 0x0
        156230:	eb67c465 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156234:	e3a07001 	mov	r7, #1	; 0x1
        156238:	e3580001 	cmp	r8, #1	; 0x1
        15623c:	da000015 	ble	156298 <TPSPrinter::DrawFillPoly(Polygon **)+0xcc>
        156240:	e5950000 	ldr	r0, [r5]
        156244:	e0800107 	add	r0, r0, r7, lsl #2
        156248:	e590000c 	ldr	r0, [r0, #12]	; fField12
        15624c:	e58d0000 	str	r0, [sp]
        156250:	e59d2002 	ldr	r2, [sp, #2]
        156254:	e1a02842 	mov	r2, r2, asr #16
        156258:	e1a00006 	mov	r0, r6
        15625c:	e59d3000 	ldr	r3, [sp]
        156260:	e1a03843 	mov	r3, r3, asr #16
        156264:	e28f1f16 	add	r1, pc, #88	; 0x58
        156268:	eb697e09 	bl	1bb5a94 <$sprintf>
        15626c:	e317000f 	tst	r7, #15	; 0xf
        156270:	01a00006 	moveq	r0, r6
        156274:	028f1f15 	addeq	r1, pc, #84	; 0x54
        156278:	0b697e09 	bleq	1bb5aa4 <$strcat>
        15627c:	e1a01006 	mov	r1, r6
        156280:	e1a00004 	mov	r0, r4
        156284:	e3a02000 	mov	r2, #0	; 0x0
        156288:	eb67c44f 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        15628c:	e2877001 	add	r7, r7, #1	; 0x1
        156290:	e1570008 	cmp	r7, r8
        156294:	baffffe9 	blt	156240 <TPSPrinter::DrawFillPoly(Polygon **)+0x74>
        156298:	e5d401ec 	ldrb	r0, [r4, #492]	; fField492
        15629c:	e3300000 	teq	r0, #0	; 0x0
        1562a0:	028f1f0b 	addeq	r1, pc, #44	; 0x2c
        1562a4:	128f1f0c 	addne	r1, pc, #48	; 0x30
        1562a8:	e1a00004 	mov	r0, r4
        1562ac:	e3a02000 	mov	r2, #0	; 0x0
        1562b0:	eb67c445 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        1562b4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1562b8:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        1562bc:	64204d76 	strvst	r4, [r0], -#3446
        1562c0:	546f2000 	strplbt	r2, [pc], #0	; 1562c8 <TPSPrinter::DrawFillPoly(Polygon **)+0xfc>
        1562c4:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        1562c8:	64204c6e 	strvst	r4, [r0], -#3182
        1562cc:	546f2000 	strplbt	r2, [pc], #0	; 1562d4 <TPSPrinter::DrawFillPoly(Polygon **)+0x108>
        1562d0:	0d000000 	stceq	0, cr0, [r0]
        1562d4:	66696c6c 	strvsbt	r6, [r9], -ip, ror #24
        1562d8:	0d000000 	stceq	0, cr0, [r0]
        1562dc:	50617474 	rsbpl	r7, r1, r4, ror r4
        1562e0:	65726e46 	ldrvsb	r6, [r2, -#3654]!
        1562e4:	696c6c0d 	stmvsdb	ip!, {r0, r2, r3, sl, fp, sp, lr}^
        1562e8:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSPrinter::DrawFillRect(Rect *)
 * Address: 001562ec
 */
TPSPrinter::DrawFillRect(Rect *) {
    /*
        1562ec:	e1a0c00d 	mov	ip, sp
        1562f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1562f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1562f8:	e1a04000 	mov	r4, r0
        1562fc:	e5913006 	ldr	r3, [r1, #6]
        156300:	e1a03843 	mov	r3, r3, asr #16
        156304:	e5912004 	ldr	r2, [r1, #4]
        156308:	e1a02842 	mov	r2, r2, asr #16
        15630c:	e92d000c 	stmdb	sp!, {r2, r3}
        156310:	e5913002 	ldr	r3, [r1, #2]
        156314:	e1a03843 	mov	r3, r3, asr #16
        156318:	e28000e8 	add	r0, r0, #232	; 0xe8
        15631c:	e1a05000 	mov	r5, r0
        156320:	e5912000 	ldr	r2, [r1]
        156324:	e1a02842 	mov	r2, r2, asr #16
        156328:	e28f1f10 	add	r1, pc, #64	; 0x40
        15632c:	eb697dd8 	bl	1bb5a94 <$sprintf>
        156330:	e28dd008 	add	sp, sp, #8	; 0x8
        156334:	e1a01005 	mov	r1, r5
        156338:	e1a00004 	mov	r0, r4
        15633c:	e3a02000 	mov	r2, #0	; 0x0
        156340:	eb67c421 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156344:	e5d401ec 	ldrb	r0, [r4, #492]	; fField492
        156348:	e3300000 	teq	r0, #0	; 0x0
        15634c:	e1a00005 	mov	r0, r5
        156350:	028f1f0b 	addeq	r1, pc, #44	; 0x2c
        156354:	128f1f0c 	addne	r1, pc, #48	; 0x30
        156358:	eb697dcd 	bl	1bb5a94 <$sprintf>
        15635c:	e1a01005 	mov	r1, r5
        156360:	e1a00004 	mov	r0, r4
        156364:	e3a02000 	mov	r2, #0	; 0x0
        156368:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        15636c:	ea67c416 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156370:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        156374:	64202564 	strvst	r2, [r0], -#1380
        156378:	20256420 	eorcs	r6, r5, r0, lsr #8
        15637c:	53746452 	cmnpl	r4, #1375731712	; 0x52000000
        156380:	65637400 	strvsb	r7, [r3, -#1024]!
        156384:	2066696c 	rsbcs	r6, r6, ip, ror #18
        156388:	6c0d0000 	stcvs	0, cr0, [sp]
        15638c:	20506174 	subcss	r6, r0, r4, ror r1
        156390:	7465726e 	strvcbt	r7, [r5], -#622	; fField622
        156394:	46696c6c 	strmibt	r6, [r9], -ip, ror #24
        156398:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TPSPrinter::DrawFrameOval(Rect *, Point)
 * Address: 0015639c
 */
TPSPrinter::DrawFrameOval(Rect *, Point) {
    /*
        15639c:	e1a0c00d 	mov	ip, sp
        1563a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1563a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1563a8:	e1a04002 	mov	r4, r2
        1563ac:	e1a05000 	mov	r5, r0
        1563b0:	e1a06001 	mov	r6, r1
        1563b4:	e1a01002 	mov	r1, r2
        1563b8:	eb67bbba 	bl	1b452a8 <TPSPrinter::$SetupPen(Point)>
        1563bc:	e1a01006 	mov	r1, r6
        1563c0:	e1a00005 	mov	r0, r5
        1563c4:	e1a02004 	mov	r2, r4
        1563c8:	eb67a719 	bl	1b40034 <TPSPrinter::$EmitInsetRect(Rect *, Point)>
        1563cc:	e1a00005 	mov	r0, r5
        1563d0:	e28f1f02 	add	r1, pc, #8	; 0x8
        1563d4:	e3a02000 	mov	r2, #0	; 0x0
        1563d8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1563dc:	ea67c3fa 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        1563e0:	30203336 	eorcc	r3, r0, r6, lsr r3
        1563e4:	30204672 	eorcc	r4, r0, r2, ror r6
        1563e8:	616d654f 	cmnvs	sp, pc, asr #10
        1563ec:	76616c20 	strvcbt	r6, [r1], -r0, lsr #24
        1563f0:	43502053 	cmpmi	r0, #83	; 0x53
        1563f4:	636c5065 	cmnvs	ip, #101	; 0x65
        1563f8:	6e0d0000 	cdpvs	0, 0, cr0, cr13, cr0, {0}
    */
}

/**
 * Symbol: TPSPrinter::DrawFramePoly(Polygon **, Point)
 * Address: 001563fc
 */
TPSPrinter::DrawFramePoly(Polygon **, Point) {
    /*
        1563fc:	e1a0c00d 	mov	ip, sp
        156400:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        156404:	e24cb004 	sub	fp, ip, #4	; 0x4
        156408:	e1a04002 	mov	r4, r2
        15640c:	e1a06000 	mov	r6, r0
        156410:	e1a05001 	mov	r5, r1
        156414:	e5910000 	ldr	r0, [r1]
        156418:	e5900000 	ldr	r0, [r0]
        15641c:	e1a00840 	mov	r0, r0, asr #16
        156420:	e2400010 	sub	r0, r0, #16	; 0x10
        156424:	e1a09140 	mov	r9, r0, asr #2
        156428:	e3590000 	cmp	r9, #0	; 0x0
        15642c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        156430:	e3a07000 	mov	r7, #0	; 0x0
        156434:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        156438:	e24dd018 	sub	sp, sp, #24	; 0x18
        15643c:	e5950000 	ldr	r0, [r5]
        156440:	e0800107 	add	r0, r0, r7, lsl #2
        156444:	e590000c 	ldr	r0, [r0, #12]	; fField12
        156448:	e58d0014 	str	r0, [sp, #20]	; fField20
        15644c:	e5950000 	ldr	r0, [r5]
        156450:	e0800107 	add	r0, r0, r7, lsl #2
        156454:	e5900010 	ldr	r0, [r0, #16]	; fField16
        156458:	e58d0010 	str	r0, [sp, #16]	; fField16
        15645c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        156460:	e1a00800 	mov	r0, r0, lsl #16
        156464:	e58d0008 	str	r0, [sp, #8]
        156468:	e59d0016 	ldr	r0, [sp, #22]
        15646c:	e1a00800 	mov	r0, r0, lsl #16
        156470:	e58d000c 	str	r0, [sp, #12]	; fField12
        156474:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        156478:	e1a00800 	mov	r0, r0, lsl #16
        15647c:	e58d0000 	str	r0, [sp]
        156480:	e59d0012 	ldr	r0, [sp, #18]
        156484:	e1a00800 	mov	r0, r0, lsl #16
        156488:	e58d0004 	str	r0, [sp, #4]
        15648c:	e1a00006 	mov	r0, r6
        156490:	e1a03004 	mov	r3, r4
        156494:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        156498:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        15649c:	eb67bb78 	bl	1b45284 <TPSPrinter::$SetLineWidth(Point, Point, Point)>
        1564a0:	e1a08000 	mov	r8, r0
        1564a4:	e1a0300d 	mov	r3, sp
        1564a8:	e28d1008 	add	r1, sp, #8	; 0x8
        1564ac:	e1a00006 	mov	r0, r6
        1564b0:	e1a02004 	mov	r2, r4
        1564b4:	eb67a6d4 	bl	1b4000c <TPSPrinter::$Draw1QDLine(FPoint const &, Point, FPoint const &)>
        1564b8:	e1a01008 	mov	r1, r8
        1564bc:	e1a00006 	mov	r0, r6
        1564c0:	eb67b753 	bl	1b44214 <TPSPrinter::$ResetLineWidth(long)>
        1564c4:	e28dd018 	add	sp, sp, #24	; 0x18
        1564c8:	e2877001 	add	r7, r7, #1	; 0x1
        1564cc:	e1570009 	cmp	r7, r9
        1564d0:	baffffd8 	blt	156438 <TPSPrinter::DrawFramePoly(Polygon **, Point)+0x3c>
        1564d4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::DrawFrameRect(Rect *, Point)
 * Address: 001564d8
 */
TPSPrinter::DrawFrameRect(Rect *, Point) {
    /*
        1564d8:	e1a0c00d 	mov	ip, sp
        1564dc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1564e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1564e4:	e1a04002 	mov	r4, r2
        1564e8:	e1a05000 	mov	r5, r0
        1564ec:	e1a06001 	mov	r6, r1
        1564f0:	e1a01002 	mov	r1, r2
        1564f4:	eb67bb6b 	bl	1b452a8 <TPSPrinter::$SetupPen(Point)>
        1564f8:	e1a01006 	mov	r1, r6
        1564fc:	e1a00005 	mov	r0, r5
        156500:	e1a02004 	mov	r2, r4
        156504:	eb67b75a 	bl	1b44274 <TPSPrinter::$SendRectangle(Rect *, Point)>
        156508:	e1a00005 	mov	r0, r5
        15650c:	e28f1f02 	add	r1, pc, #8	; 0x8
        156510:	e3a02000 	mov	r2, #0	; 0x0
        156514:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        156518:	ea67c3ab 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        15651c:	53636c50 	cmnpl	r3, #20480	; 0x5000
        156520:	656e0d00 	strvsb	r0, [lr, -#3328]!
    */
}

/**
 * Symbol: TPSPrinter::SendRectangle(Rect *, Point)
 * Address: 00156524
 */
TPSPrinter::SendRectangle(Rect *, Point) {
    /*
        156524:	e1a0c00d 	mov	ip, sp
        156528:	e92dd877 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, fp, ip, lr, pc}
        15652c:	e24cb004 	sub	fp, ip, #4	; 0x4
        156530:	e1a04000 	mov	r4, r0
        156534:	e1a05001 	mov	r5, r1
        156538:	e24dd040 	sub	sp, sp, #64	; 0x40
        15653c:	e5911002 	ldr	r1, [r1, #2]
        156540:	e1a01841 	mov	r1, r1, asr #16
        156544:	e5952000 	ldr	r2, [r5]
        156548:	e1a02842 	mov	r2, r2, asr #16
        15654c:	e51b301c 	ldr	r3, [fp, -#28]
        156550:	eb67b30d 	bl	1b4318c <TPSPrinter::$PositionPen(long, long, Point)>
        156554:	e1a0300d 	mov	r3, sp
        156558:	e92d0008 	stmdb	sp!, {r3}
        15655c:	e51b001c 	ldr	r0, [fp, -#28]
        156560:	e1a00800 	mov	r0, r0, lsl #16
        156564:	e3a01802 	mov	r1, #131072	; 0x20000
        156568:	eb6a2ad4 	bl	1be10c0 <$FixedDivide>
        15656c:	e5951002 	ldr	r1, [r5, #2]
        156570:	e1a01821 	mov	r1, r1, lsr #16
        156574:	e0801801 	add	r1, r0, r1, lsl #16
        156578:	e28d2014 	add	r2, sp, #20	; 0x14
        15657c:	e1a00004 	mov	r0, r4
        156580:	eb67a6b5 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        156584:	e1a03000 	mov	r3, r0
        156588:	e92d0008 	stmdb	sp!, {r3}
        15658c:	e51b001a 	ldr	r0, [fp, -#26]
        156590:	e1a00800 	mov	r0, r0, lsl #16
        156594:	e3a01802 	mov	r1, #131072	; 0x20000
        156598:	eb6a2ac8 	bl	1be10c0 <$FixedDivide>
        15659c:	e5951004 	ldr	r1, [r5, #4]
        1565a0:	e1a01821 	mov	r1, r1, lsr #16
        1565a4:	e0601801 	rsb	r1, r0, r1, lsl #16
        1565a8:	e28d2008 	add	r2, sp, #8	; 0x8
        1565ac:	e1a00004 	mov	r0, r4
        1565b0:	eb67a6a9 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1565b4:	e1a03000 	mov	r3, r0
        1565b8:	e28d2038 	add	r2, sp, #56	; 0x38
        1565bc:	e92d000c 	stmdb	sp!, {r2, r3}
        1565c0:	e51b001a 	ldr	r0, [fp, -#26]
        1565c4:	e1a00800 	mov	r0, r0, lsl #16
        1565c8:	e3a01802 	mov	r1, #131072	; 0x20000
        1565cc:	eb6a2abb 	bl	1be10c0 <$FixedDivide>
        1565d0:	e5951000 	ldr	r1, [r5]
        1565d4:	e1a01821 	mov	r1, r1, lsr #16
        1565d8:	e0801801 	add	r1, r0, r1, lsl #16
        1565dc:	e28d2030 	add	r2, sp, #48	; 0x30
        1565e0:	e1a00004 	mov	r0, r4
        1565e4:	eb67a69c 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1565e8:	e1a06000 	mov	r6, r0
        1565ec:	e51b001c 	ldr	r0, [fp, -#28]
        1565f0:	e1a00800 	mov	r0, r0, lsl #16
        1565f4:	e3a01802 	mov	r1, #131072	; 0x20000
        1565f8:	eb6a2ab0 	bl	1be10c0 <$FixedDivide>
        1565fc:	e5951006 	ldr	r1, [r5, #6]
        156600:	e1a01821 	mov	r1, r1, lsr #16
        156604:	e0601801 	rsb	r1, r0, r1, lsl #16
        156608:	e28d2040 	add	r2, sp, #64	; 0x40
        15660c:	e1a00004 	mov	r0, r4
        156610:	eb67a691 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        156614:	e1a02000 	mov	r2, r0
        156618:	e28400e8 	add	r0, r4, #232	; 0xe8
        15661c:	e1a05000 	mov	r5, r0
        156620:	e28f1f07 	add	r1, pc, #28	; 0x1c
        156624:	e1a03006 	mov	r3, r6
        156628:	eb697d19 	bl	1bb5a94 <$sprintf>
        15662c:	e28dd010 	add	sp, sp, #16	; 0x10
        156630:	e1a01005 	mov	r1, r5
        156634:	e1a00004 	mov	r0, r4
        156638:	e3a02000 	mov	r2, #0	; 0x0
        15663c:	eb67c362 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156640:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        156644:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        156648:	73204c6e 	teqvc	r0, #28160	; 0x6e00
        15664c:	546f2025 	strplbt	r2, [pc], #25	; 156654 <TPSPrinter::SendRectangle(Rect *, Point)+0x130>
        156650:	73202573 	teqvc	r0, #482344960	; 0x1cc00000
        156654:	204c6e54 	subcs	r6, ip, r4, asr lr
        156658:	6f202573 	swivs	0x00202573
        15665c:	20257320 	eorcs	r7, r5, r0, lsr #6
        156660:	4c6e546f 	stcmil	4, cr5, [lr], -#444
        156664:	20435020 	subcs	r5, r3, r0, lsr #32
        156668:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSPrinter::EmitInsetRect(Rect *, Point)
 * Address: 0015666c
 */
TPSPrinter::EmitInsetRect(Rect *, Point) {
    /*
        15666c:	e1a0c00d 	mov	ip, sp
        156670:	e92dd877 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, fp, ip, lr, pc}
        156674:	e24cb004 	sub	fp, ip, #4	; 0x4
        156678:	e1a04000 	mov	r4, r0
        15667c:	e1a05001 	mov	r5, r1
        156680:	e24dd040 	sub	sp, sp, #64	; 0x40
        156684:	e51b001c 	ldr	r0, [fp, -#28]
        156688:	e1a00800 	mov	r0, r0, lsl #16
        15668c:	e3a01802 	mov	r1, #131072	; 0x20000
        156690:	eb6a2a8a 	bl	1be10c0 <$FixedDivide>
        156694:	e5951006 	ldr	r1, [r5, #6]
        156698:	e1a01821 	mov	r1, r1, lsr #16
        15669c:	e0601801 	rsb	r1, r0, r1, lsl #16
        1566a0:	e28d2030 	add	r2, sp, #48	; 0x30
        1566a4:	e1a00004 	mov	r0, r4
        1566a8:	eb67a66b 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1566ac:	e1a03000 	mov	r3, r0
        1566b0:	e92d0008 	stmdb	sp!, {r3}
        1566b4:	e51b001a 	ldr	r0, [fp, -#26]
        1566b8:	e1a00800 	mov	r0, r0, lsl #16
        1566bc:	e3a01802 	mov	r1, #131072	; 0x20000
        1566c0:	eb6a2a7e 	bl	1be10c0 <$FixedDivide>
        1566c4:	e5951004 	ldr	r1, [r5, #4]
        1566c8:	e1a01821 	mov	r1, r1, lsr #16
        1566cc:	e0601801 	rsb	r1, r0, r1, lsl #16
        1566d0:	e28d2004 	add	r2, sp, #4	; 0x4
        1566d4:	e1a00004 	mov	r0, r4
        1566d8:	eb67a65f 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1566dc:	e1a03000 	mov	r3, r0
        1566e0:	e92d0008 	stmdb	sp!, {r3}
        1566e4:	e51b001c 	ldr	r0, [fp, -#28]
        1566e8:	e1a00800 	mov	r0, r0, lsl #16
        1566ec:	e3a01802 	mov	r1, #131072	; 0x20000
        1566f0:	eb6a2a72 	bl	1be10c0 <$FixedDivide>
        1566f4:	e5951002 	ldr	r1, [r5, #2]
        1566f8:	e1a01821 	mov	r1, r1, lsr #16
        1566fc:	e0801801 	add	r1, r0, r1, lsl #16
        156700:	e28d2018 	add	r2, sp, #24	; 0x18
        156704:	e1a00004 	mov	r0, r4
        156708:	eb67a653 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        15670c:	e1a06000 	mov	r6, r0
        156710:	e51b001a 	ldr	r0, [fp, -#26]
        156714:	e1a00800 	mov	r0, r0, lsl #16
        156718:	e3a01802 	mov	r1, #131072	; 0x20000
        15671c:	eb6a2a67 	bl	1be10c0 <$FixedDivide>
        156720:	e5951000 	ldr	r1, [r5]
        156724:	e1a01821 	mov	r1, r1, lsr #16
        156728:	e0801801 	add	r1, r0, r1, lsl #16
        15672c:	e28d2028 	add	r2, sp, #40	; 0x28
        156730:	e1a00004 	mov	r0, r4
        156734:	eb67a648 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        156738:	e1a02000 	mov	r2, r0
        15673c:	e28400e8 	add	r0, r4, #232	; 0xe8
        156740:	e1a05000 	mov	r5, r0
        156744:	e28f1f07 	add	r1, pc, #28	; 0x1c
        156748:	e1a03006 	mov	r3, r6
        15674c:	eb697cd0 	bl	1bb5a94 <$sprintf>
        156750:	e28dd008 	add	sp, sp, #8	; 0x8
        156754:	e1a01005 	mov	r1, r5
        156758:	e1a00004 	mov	r0, r4
        15675c:	e3a02000 	mov	r2, #0	; 0x0
        156760:	eb67c319 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156764:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        156768:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        15676c:	73202573 	teqvc	r0, #482344960	; 0x1cc00000
        156770:	20257320 	eorcs	r7, r5, r0, lsr #6
        156774:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSPrinter::CountBitsInPattern(PixelMap **)
 * Address: 00156778
 */
TPSPrinter::CountBitsInPattern(PixelMap **) {
    /*
        156778:	e1a0c00d 	mov	ip, sp
        15677c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        156780:	e24cb004 	sub	fp, ip, #4	; 0x4
        156784:	e5910000 	ldr	r0, [r1]
        156788:	e5901010 	ldr	r1, [r0, #16]	; fField16
        15678c:	e20110ff 	and	r1, r1, #255	; 0xff
        156790:	e3a04000 	mov	r4, #0	; 0x0
        156794:	e3310001 	teq	r1, #1	; 0x1
        156798:	0a00000c 	beq	1567d0 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x58>
        15679c:	e3310002 	teq	r1, #2	; 0x2
        1567a0:	0a00001b 	beq	156814 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x9c>
        1567a4:	e3310004 	teq	r1, #4	; 0x4
        1567a8:	1a000040 	bne	1568b0 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x138>
        1567ac:	eb6ad795 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        1567b0:	e1a0c000 	mov	ip, r0
        1567b4:	e3a03008 	mov	r3, #8	; 0x8
        1567b8:	e3a0120f 	mov	r1, #-268435456	; 0xf0000000
        1567bc:	e3a0001c 	mov	r0, #28	; 0x1c
        1567c0:	e49c2004 	ldr	r2, [ip], #4
        1567c4:	e3320000 	teq	r2, #0	; 0x0
        1567c8:	0a000031 	beq	156894 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x11c>
        1567cc:	ea00002a 	b	15687c <TPSPrinter::CountBitsInPattern(PixelMap **)+0x104>
        1567d0:	eb6ad78c 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        1567d4:	e1a02000 	mov	r2, r0
        1567d8:	e3a01008 	mov	r1, #8	; 0x8
        1567dc:	e4d20001 	ldrb	r0, [r2], #1
        1567e0:	e3300000 	teq	r0, #0	; 0x0
        1567e4:	0a000007 	beq	156808 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x90>
        1567e8:	e2003001 	and	r3, r0, #1	; 0x1
        1567ec:	e3330001 	teq	r3, #1	; 0x1
        1567f0:	13a03000 	movne	r3, #0	; 0x0
        1567f4:	03a03001 	moveq	r3, #1	; 0x1
        1567f8:	e0834004 	add	r4, r3, r4
        1567fc:	e1a000c0 	mov	r0, r0, asr #1
        156800:	e21000ff 	ands	r0, r0, #255	; 0xff
        156804:	1afffff7 	bne	1567e8 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x70>
        156808:	e2511001 	subs	r1, r1, #1	; 0x1
        15680c:	1afffff2 	bne	1567dc <TPSPrinter::CountBitsInPattern(PixelMap **)+0x64>
        156810:	ea000027 	b	1568b4 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x13c>
        156814:	eb6ad77b 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        156818:	e1a0c000 	mov	ip, r0
        15681c:	e3a03008 	mov	r3, #8	; 0x8
        156820:	e3a01903 	mov	r1, #49152	; 0xc000
        156824:	e3a0000e 	mov	r0, #14	; 0xe
        156828:	e59c2000 	ldr	r2, [ip]
        15682c:	e1b02822 	movs	r2, r2, lsr #16
        156830:	e28cc002 	add	ip, ip, #2	; 0x2
        156834:	0a00000b 	beq	156868 <TPSPrinter::CountBitsInPattern(PixelMap **)+0xf0>
        156838:	e002e001 	and	lr, r2, r1
        15683c:	e084405e 	add	r4, r4, lr, asr r0
        156840:	e1a01141 	mov	r1, r1, asr #2
        156844:	e1a01801 	mov	r1, r1, lsl #16
        156848:	e1a01821 	mov	r1, r1, lsr #16
        15684c:	e2400002 	sub	r0, r0, #2	; 0x2
        156850:	e1a00800 	mov	r0, r0, lsl #16
        156854:	e1a00820 	mov	r0, r0, lsr #16
        156858:	e1a02142 	mov	r2, r2, asr #2
        15685c:	e1a02802 	mov	r2, r2, lsl #16
        156860:	e1b02822 	movs	r2, r2, lsr #16
        156864:	1afffff3 	bne	156838 <TPSPrinter::CountBitsInPattern(PixelMap **)+0xc0>
        156868:	e2533001 	subs	r3, r3, #1	; 0x1
        15686c:	1affffeb 	bne	156820 <TPSPrinter::CountBitsInPattern(PixelMap **)+0xa8>
        156870:	e2841002 	add	r1, r4, #2	; 0x2
        156874:	e3a00003 	mov	r0, #3	; 0x3
        156878:	ea000009 	b	1568a4 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x12c>
        15687c:	e002e001 	and	lr, r2, r1
        156880:	e084403e 	add	r4, r4, lr, lsr r0
        156884:	e1a01221 	mov	r1, r1, lsr #4
        156888:	e2400004 	sub	r0, r0, #4	; 0x4
        15688c:	e1b02222 	movs	r2, r2, lsr #4
        156890:	1afffff9 	bne	15687c <TPSPrinter::CountBitsInPattern(PixelMap **)+0x104>
        156894:	e2533001 	subs	r3, r3, #1	; 0x1
        156898:	1affffc6 	bne	1567b8 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x40>
        15689c:	e284100e 	add	r1, r4, #14	; 0xe
        1568a0:	e3a0000f 	mov	r0, #15	; 0xf
        1568a4:	eb697025 	bl	1bb2940 <$__rt_sdiv>
        1568a8:	e1a04000 	mov	r4, r0
        1568ac:	ea000000 	b	1568b4 <TPSPrinter::CountBitsInPattern(PixelMap **)+0x13c>
        1568b0:	e3a04040 	mov	r4, #64	; 0x40
        1568b4:	e1a00804 	mov	r0, r4, lsl #16
        1568b8:	e1a00840 	mov	r0, r0, asr #16
        1568bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::FixedToString(long, char *)
 * Address: 001568c0
 */
TPSPrinter::FixedToString(long, char *) {
    /*
        1568c0:	e1a0c00d 	mov	ip, sp
        1568c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1568c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1568cc:	e1b04001 	movs	r4, r1
        1568d0:	e1a05002 	mov	r5, r2
        1568d4:	5a000002 	bpl	1568e4 <TPSPrinter::FixedToString(long, char *)+0x24>
        1568d8:	e2644000 	rsb	r4, r4, #0	; 0x0
        1568dc:	e3a0002d 	mov	r0, #45	; 0x2d
        1568e0:	e4c50001 	strb	r0, [r5], #1
        1568e4:	e3a00000 	mov	r0, #0	; 0x0
        1568e8:	e1300804 	teq	r0, r4, lsl #16
        1568ec:	0a000018 	beq	156954 <TPSPrinter::FixedToString(long, char *)+0x94>
        1568f0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1568f4:	e3a01902 	mov	r1, #32768	; 0x8000
        1568f8:	e3a02000 	mov	r2, #0	; 0x0
        1568fc:	e59f003c 	ldr	r0, [pc, #3c]	; 156940 <TPSPrinter::FixedToString(long, char *)+0x80>
        156900:	e2844f52 	add	r4, r4, #328	; 0x148
        156904:	e1140001 	tst	r4, r1
        156908:	10822000 	addne	r2, r2, r0
        15690c:	e1a000c0 	mov	r0, r0, asr #1
        156910:	e1b010c1 	movs	r1, r1, asr #1
        156914:	1afffffa 	bne	156904 <TPSPrinter::FixedToString(long, char *)+0x44>
        156918:	e1a0000d 	mov	r0, sp
        15691c:	e28f1f08 	add	r1, pc, #32	; 0x20
        156920:	eb697c5b 	bl	1bb5a94 <$sprintf>
        156924:	e1a02844 	mov	r2, r4, asr #16
        156928:	e1a0300d 	mov	r3, sp
        15692c:	e1a00005 	mov	r0, r5
        156930:	e28f1f05 	add	r1, pc, #20	; 0x14
        156934:	eb697c56 	bl	1bb5a94 <$sprintf>
        156938:	e28dd00c 	add	sp, sp, #12	; 0xc
        15693c:	ea000008 	b	156964 <TPSPrinter::FixedToString(long, char *)+0xa4>
        156940:	1dcd6500 	stcnel	5, cr6, [sp]
        156944:	25392e39 	ldrcs	r2, [r9, -#3641]!
        156948:	6c750000 	ldcvsl	0, cr0, [r5]
        15694c:	25642e25 	strcsb	r2, [r4, -#3621]!
        156950:	2e327300 	cdpcs	3, 3, cr7, cr2, cr0, {0}
        156954:	e1a02844 	mov	r2, r4, asr #16
        156958:	e1a00005 	mov	r0, r5
        15695c:	e28f1f02 	add	r1, pc, #8	; 0x8
        156960:	eb697c4b 	bl	1bb5a94 <$sprintf>
        156964:	e1a00005 	mov	r0, r5
        156968:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15696c:	25640000 	strcsb	r0, [r4]!
    */
}

/**
 * Symbol: TPSPrinter::OffsetFixedPoint(FPoint &, long, long)
 * Address: 00156970
 */
TPSPrinter::OffsetFixedPoint(FPoint &, long, long) {
    /*
        156970:	e591c000 	ldr	ip, [r1]
        156974:	e08c2002 	add	r2, ip, r2
        156978:	e5812000 	str	r2, [r1]
        15697c:	e2810004 	add	r0, r1, #4	; 0x4
        156980:	e5901000 	ldr	r1, [r0]
        156984:	e0811003 	add	r1, r1, r3
        156988:	e5801000 	str	r1, [r0]
        15698c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPrinter::PositionPen(long, long, Point)
 * Address: 00156990
 */
TPSPrinter::PositionPen(long, long, Point) {
    /*
        156990:	e1a0c00d 	mov	ip, sp
        156994:	e92dd87f 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, fp, ip, lr, pc}
        156998:	e24cb004 	sub	fp, ip, #4	; 0x4
        15699c:	e1a04000 	mov	r4, r0
        1569a0:	e1a05001 	mov	r5, r1
        1569a4:	e1a06002 	mov	r6, r2
        1569a8:	e24dd020 	sub	sp, sp, #32	; 0x20
        1569ac:	e51b001a 	ldr	r0, [fp, -#26]
        1569b0:	e1a00800 	mov	r0, r0, lsl #16
        1569b4:	e3a01802 	mov	r1, #131072	; 0x20000
        1569b8:	eb6a29c0 	bl	1be10c0 <$FixedDivide>
        1569bc:	e0801806 	add	r1, r0, r6, lsl #16
        1569c0:	e1a0200d 	mov	r2, sp
        1569c4:	e1a00004 	mov	r0, r4
        1569c8:	eb67a5a3 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1569cc:	e1a06000 	mov	r6, r0
        1569d0:	e51b001c 	ldr	r0, [fp, -#28]
        1569d4:	e1a00800 	mov	r0, r0, lsl #16
        1569d8:	e3a01802 	mov	r1, #131072	; 0x20000
        1569dc:	eb6a29b7 	bl	1be10c0 <$FixedDivide>
        1569e0:	e0801805 	add	r1, r0, r5, lsl #16
        1569e4:	e28d2010 	add	r2, sp, #16	; 0x10
        1569e8:	e1a00004 	mov	r0, r4
        1569ec:	eb67a59a 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1569f0:	e1a02000 	mov	r2, r0
        1569f4:	e28400e8 	add	r0, r4, #232	; 0xe8
        1569f8:	e1a05000 	mov	r5, r0
        1569fc:	e28f1f06 	add	r1, pc, #24	; 0x18
        156a00:	e1a03006 	mov	r3, r6
        156a04:	eb697c22 	bl	1bb5a94 <$sprintf>
        156a08:	e1a01005 	mov	r1, r5
        156a0c:	e1a00004 	mov	r0, r4
        156a10:	e3a02000 	mov	r2, #0	; 0x0
        156a14:	eb67c26c 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156a18:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        156a1c:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        156a20:	73204d76 	teqvc	r0, #7552	; 0x1d80
        156a24:	546f2000 	strplbt	r2, [pc], #0	; 156a2c <TPSPrinter::ResetLineWidth(long)+0x4>
    */
}

/**
 * Symbol: TPSPrinter::ResetLineWidth(long)
 * Address: 00156a28
 */
TPSPrinter::ResetLineWidth(long) {
    /*
        156a28:	e3310000 	teq	r1, #0	; 0x0
        156a2c:	028f1f02 	addeq	r1, pc, #8	; 0x8
        156a30:	128f1f03 	addne	r1, pc, #12	; 0xc
        156a34:	e3a02000 	mov	r2, #0	; 0x0
        156a38:	ea67c263 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156a3c:	0d66696c 	stceql	9, cr6, [r6, -#432]!
        156a40:	6c0d0000 	stcvs	0, cr0, [sp]
        156a44:	0d737472 	ldceql	4, cr7, [r3, -#456]!
        156a48:	6f6b6520 	swivs	0x006b6520
        156a4c:	534c570d 	cmppl	ip, #3407872	; 0x340000
        156a50:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSPrinter::SetupPen(Point)
 * Address: 00156a54
 */
TPSPrinter::SetupPen(Point) {
    /*
        156a54:	e1a0c00d 	mov	ip, sp
        156a58:	e92dd833 	stmdb	sp!, {r0, r1, r4, r5, fp, ip, lr, pc}
        156a5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        156a60:	e1a04000 	mov	r4, r0
        156a64:	e51b0016 	ldr	r0, [fp, -#22]
        156a68:	e1a00840 	mov	r0, r0, asr #16
        156a6c:	e59410c6 	ldr	r1, [r4, #198]	; fField198
        156a70:	e1300841 	teq	r0, r1, asr #16
        156a74:	059410c4 	ldreq	r1, [r4, #196]	; fField196
        156a78:	01a01841 	moveq	r1, r1, asr #16
        156a7c:	051b0018 	ldreq	r0, [fp, -#24]
        156a80:	01310840 	teqeq	r1, r0, asr #16
        156a84:	1a000005 	bne	156aa0 <TPSPrinter::SetupPen(Point)+0x4c>
        156a88:	e51b0016 	ldr	r0, [fp, -#22]
        156a8c:	e1b00840 	movs	r0, r0, asr #16
        156a90:	051b0018 	ldreq	r0, [fp, -#24]
        156a94:	01a00840 	moveq	r0, r0, asr #16
        156a98:	03300000 	teqeq	r0, #0	; 0x0
        156a9c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        156aa0:	e28410c4 	add	r1, r4, #196	; 0xc4
        156aa4:	e51b0018 	ldr	r0, [fp, -#24]
        156aa8:	e5810000 	str	r0, [r1]
        156aac:	e51b2016 	ldr	r2, [fp, -#22]
        156ab0:	e1a02842 	mov	r2, r2, asr #16
        156ab4:	e28400e8 	add	r0, r4, #232	; 0xe8
        156ab8:	e1a05000 	mov	r5, r0
        156abc:	e51b3018 	ldr	r3, [fp, -#24]
        156ac0:	e1a03843 	mov	r3, r3, asr #16
        156ac4:	e28f1f05 	add	r1, pc, #20	; 0x14
        156ac8:	eb697bf1 	bl	1bb5a94 <$sprintf>
        156acc:	e1a01005 	mov	r1, r5
        156ad0:	e1a00004 	mov	r0, r4
        156ad4:	e3a02000 	mov	r2, #0	; 0x0
        156ad8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        156adc:	ea67c23a 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156ae0:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        156ae4:	64205065 	strvst	r5, [r0], -#101
        156ae8:	6e0d0000 	cdpvs	0, 0, cr0, cr13, cr0, {0}
    */
}

/**
 * Symbol: TPSPrinter::SetClip(GrafPort *)
 * Address: 00156aec
 */
TPSPrinter::SetClip(GrafPort *) {
    /*
        156aec:	e1a0c00d 	mov	ip, sp
        156af0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        156af4:	e24cb004 	sub	fp, ip, #4	; 0x4
        156af8:	e1a04000 	mov	r4, r0
        156afc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        156b00:	e5910028 	ldr	r0, [r1, #40]	; fField40
        156b04:	e5900000 	ldr	r0, [r0]
        156b08:	e2806004 	add	r6, r0, #4	; 0x4
        156b0c:	e5b10024 	ldr	r0, [r1, #36]!	; fField36
        156b10:	e5900000 	ldr	r0, [r0]
        156b14:	e2805004 	add	r5, r0, #4	; 0x4
        156b18:	e28410d0 	add	r1, r4, #208	; 0xd0
        156b1c:	e1a08001 	mov	r8, r1
        156b20:	e1a00006 	mov	r0, r6
        156b24:	eb67df00 	bl	1b4e72c <$EqualRect__FP4RectT1>
        156b28:	e28470d8 	add	r7, r4, #216	; 0xd8
        156b2c:	e3300000 	teq	r0, #0	; 0x0
        156b30:	0a000004 	beq	156b48 <TPSPrinter::SetClip(GrafPort *)+0x5c>
        156b34:	e1a01007 	mov	r1, r7
        156b38:	e1a00005 	mov	r0, r5
        156b3c:	eb67defa 	bl	1b4e72c <$EqualRect__FP4RectT1>
        156b40:	e3300000 	teq	r0, #0	; 0x0
        156b44:	1a00001a 	bne	156bb4 <TPSPrinter::SetClip(GrafPort *)+0xc8>
        156b48:	e8961008 	ldmia	r6, {r3, ip}
        156b4c:	e8881008 	stmia	r8, {r3, ip}
        156b50:	e8955000 	ldmia	r5, {ip, lr}
        156b54:	e8875000 	stmia	r7, {ip, lr}
        156b58:	e28d2004 	add	r2, sp, #4	; 0x4
        156b5c:	e1a01005 	mov	r1, r5
        156b60:	e1a00006 	mov	r0, r6
        156b64:	eb67f398 	bl	1b539cc <$SectRect__FP4RectN21>
        156b68:	e1a00004 	mov	r0, r4
        156b6c:	e28f1f11 	add	r1, pc, #68	; 0x44
        156b70:	e3a02000 	mov	r2, #0	; 0x0
        156b74:	eb67c214 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156b78:	e3a00001 	mov	r0, #1	; 0x1
        156b7c:	e5cd0003 	strb	r0, [sp, #3]
        156b80:	e3a05000 	mov	r5, #0	; 0x0
        156b84:	e5cd5002 	strb	r5, [sp, #2]
        156b88:	e5cd0001 	strb	r0, [sp, #1]
        156b8c:	e5cd5000 	strb	r5, [sp]
        156b90:	e28d1004 	add	r1, sp, #4	; 0x4
        156b94:	e1a00004 	mov	r0, r4
        156b98:	e59d2000 	ldr	r2, [sp]
        156b9c:	eb67b5b4 	bl	1b44274 <TPSPrinter::$SendRectangle(Rect *, Point)>
        156ba0:	e1a00004 	mov	r0, r4
        156ba4:	e28f1f05 	add	r1, pc, #20	; 0x14
        156ba8:	e3a02000 	mov	r2, #0	; 0x0
        156bac:	eb67c206 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156bb0:	e5c450a1 	strb	r5, [r4, #161]	; fField161
        156bb4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        156bb8:	50726543 	rsbpls	r6, r2, r3, asr #10
        156bbc:	20000000 	andcs	r0, r0, r0
        156bc0:	506f430d 	rsbpl	r4, pc, sp, lsl #6
        156bc4:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)
 * Address: 00156bc8
 */
TPSPrinter::SetGrayLevel(unsigned char, GrafPort *) {
    /*
        156bc8:	e1a0c00d 	mov	ip, sp
        156bcc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        156bd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        156bd4:	e1a04000 	mov	r4, r0
        156bd8:	e20100ff 	and	r0, r1, #255	; 0xff
        156bdc:	e3a05000 	mov	r5, #0	; 0x0
        156be0:	e3500004 	cmp	r0, #4	; 0x4
        156be4:	908ff100 	addls	pc, pc, r0, lsl #2
        156be8:	ea000006 	b	156c08 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x40>
        156bec:	ea000002 	b	156bfc <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x34>
        156bf0:	ea000001 	b	156bfc <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x34>
        156bf4:	ea000002 	b	156c04 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x3c>
        156bf8:	ea000013 	b	156c4c <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x84>
        156bfc:	e5b2502c 	ldr	r5, [r2, #44]!
        156c00:	ea000000 	b	156c08 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x40>
        156c04:	e5b25030 	ldr	r5, [r2, #48]!
        156c08:	e3350000 	teq	r5, #0	; 0x0
        156c0c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        156c10:	e24dd004 	sub	sp, sp, #4	; 0x4
        156c14:	e1a0100d 	mov	r1, sp
        156c18:	e1a00005 	mov	r0, r5
        156c1c:	eb67ffba 	bl	1b56b0c <$MonochromePat(PixelMap **, unsigned long *)>
        156c20:	e3300000 	teq	r0, #0	; 0x0
        156c24:	0a00000d 	beq	156c60 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x98>
        156c28:	e1a01005 	mov	r1, r5
        156c2c:	e1a00004 	mov	r0, r4
        156c30:	eb67a4e0 	bl	1b3ffb8 <TPSPrinter::$CountBitsInPattern(PixelMap **)>
        156c34:	e2600040 	rsb	r0, r0, #64	; 0x40
        156c38:	e20010ff 	and	r1, r0, #255	; 0xff
        156c3c:	e1a00004 	mov	r0, r4
        156c40:	eb67a4ee 	bl	1b40000 <TPSPrinter::$DoSetGray(unsigned char)>
        156c44:	e3a00000 	mov	r0, #0	; 0x0
        156c48:	ea000061 	b	156dd4 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x20c>
        156c4c:	e1a00004 	mov	r0, r4
        156c50:	e28f1f2a 	add	r1, pc, #168	; 0xa8
        156c54:	e3a02000 	mov	r2, #0	; 0x0
        156c58:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        156c5c:	ea67c1da 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156c60:	e1a00005 	mov	r0, r5
        156c64:	eb6a2d28 	bl	1be210c <$HLock>
        156c68:	e1a08000 	mov	r8, r0
        156c6c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        156c70:	e20020ff 	and	r2, r0, #255	; 0xff
        156c74:	e28460e8 	add	r6, r4, #232	; 0xe8
        156c78:	e3520001 	cmp	r2, #1	; 0x1
        156c7c:	e1a00006 	mov	r0, r6
        156c80:	da00002c 	ble	156d38 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x170>
        156c84:	e28f1f26 	add	r1, pc, #152	; 0x98
        156c88:	eb697b81 	bl	1bb5a94 <$sprintf>
        156c8c:	e1a01006 	mov	r1, r6
        156c90:	e1a00004 	mov	r0, r4
        156c94:	e3a02000 	mov	r2, #0	; 0x0
        156c98:	eb67c1cb 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156c9c:	e5950000 	ldr	r0, [r5]
        156ca0:	e5900004 	ldr	r0, [r0, #4]
        156ca4:	e1a00840 	mov	r0, r0, asr #16
        156ca8:	e1b07180 	movs	r7, r0, lsl #3
        156cac:	42877003 	addmi	r7, r7, #3	; 0x3
        156cb0:	e1a07147 	mov	r7, r7, asr #2
        156cb4:	e1a00008 	mov	r0, r8
        156cb8:	eb6ad652 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        156cbc:	e1a08000 	mov	r8, r0
        156cc0:	e2479001 	sub	r9, r7, #1	; 0x1
        156cc4:	e3370000 	teq	r7, #0	; 0x0
        156cc8:	0a00003a 	beq	156db8 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x1f0>
        156ccc:	e4980004 	ldr	r0, [r8], #4
        156cd0:	e1e02000 	mvn	r2, r0
        156cd4:	e1a00006 	mov	r0, r6
        156cd8:	e28f1f14 	add	r1, pc, #80	; 0x50
        156cdc:	eb697b6c 	bl	1bb5a94 <$sprintf>
        156ce0:	e1a01006 	mov	r1, r6
        156ce4:	e1a00004 	mov	r0, r4
        156ce8:	e3a02000 	mov	r2, #0	; 0x0
        156cec:	eb67c1b6 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156cf0:	e1b00009 	movs	r0, r9
        156cf4:	e2499001 	sub	r9, r9, #1	; 0x1
        156cf8:	1afffff3 	bne	156ccc <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x104>
        156cfc:	ea00002d 	b	156db8 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x1f0>
        156d00:	25202d2d 	strcs	r2, [r0, -#3373]!
        156d04:	2d20496e 	stccs	9, cr4, [r0, -#440]!
        156d08:	76657274 	undefined
        156d0c:	206d6f64 	rsbcs	r6, sp, r4, ror #30
        156d10:	65206e6f 	strvs	r6, [r0, -#3695]!
        156d14:	74207375 	strvct	r7, [r0], -#885
        156d18:	70706f72 	rsbvcs	r6, r0, r2, ror pc
        156d1c:	7465640d 	strvcbt	r6, [r5], -#1037
        156d20:	00000000 	andeq	r0, r0, r0
        156d24:	66616c73 	undefined
        156d28:	65202564 	strvs	r2, [r0, -#1380]!
        156d2c:	203c0000 	eorcss	r0, ip, r0
        156d30:	2530386c 	ldrcs	r3, [r0, -#2156]!
        156d34:	78000000 	stmvcda	r0, {}
        156d38:	e28f1f27 	add	r1, pc, #156	; 0x9c
        156d3c:	eb697b54 	bl	1bb5a94 <$sprintf>
        156d40:	e1a01006 	mov	r1, r6
        156d44:	e1a00004 	mov	r0, r4
        156d48:	e3a02000 	mov	r2, #0	; 0x0
        156d4c:	eb67c19e 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156d50:	e5950000 	ldr	r0, [r5]
        156d54:	e5900004 	ldr	r0, [r0, #4]
        156d58:	e1a00840 	mov	r0, r0, asr #16
        156d5c:	e1a07180 	mov	r7, r0, lsl #3
        156d60:	e1a00008 	mov	r0, r8
        156d64:	eb6ad627 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        156d68:	e1a08000 	mov	r8, r0
        156d6c:	e1b00007 	movs	r0, r7
        156d70:	e2477001 	sub	r7, r7, #1	; 0x1
        156d74:	0a00000f 	beq	156db8 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x1f0>
        156d78:	e59f9068 	ldr	r9, [pc, #68]	; 156de8 <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x220>
        156d7c:	e4d80001 	ldrb	r0, [r8], #1
        156d80:	e1e00000 	mvn	r0, r0
        156d84:	e20000ff 	and	r0, r0, #255	; 0xff
        156d88:	e7992100 	ldr	r2, [r9, r0, lsl #2]
        156d8c:	e1a00006 	mov	r0, r6
        156d90:	e58d2000 	str	r2, [sp]
        156d94:	e24f1f1b 	sub	r1, pc, #108	; 0x6c
        156d98:	eb697b3d 	bl	1bb5a94 <$sprintf>
        156d9c:	e1a01006 	mov	r1, r6
        156da0:	e1a00004 	mov	r0, r4
        156da4:	e3a02000 	mov	r2, #0	; 0x0
        156da8:	eb67c187 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156dac:	e1b00007 	movs	r0, r7
        156db0:	e2477001 	sub	r7, r7, #1	; 0x1
        156db4:	1afffff0 	bne	156d7c <TPSPrinter::SetGrayLevel(unsigned char, GrafPort *)+0x1b4>
        156db8:	e1a00004 	mov	r0, r4
        156dbc:	e28f1f0a 	add	r1, pc, #40	; 0x28
        156dc0:	e3a02000 	mov	r2, #0	; 0x0
        156dc4:	eb67c180 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156dc8:	e1a00005 	mov	r0, r5
        156dcc:	eb6a2cd0 	bl	1be2114 <$HUnlock>
        156dd0:	e3a00001 	mov	r0, #1	; 0x1
        156dd4:	e5c401ec 	strb	r0, [r4, #492]	; fField492
        156dd8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        156ddc:	66616c73 	undefined
        156de0:	65203420 	strvs	r3, [r0, -#1056]!
        156de4:	3c000000 	stccc	0, cr0, [r0]
        156de8:	00381294 	mlaeqs	r8, r4, r2, r1
        156dec:	3e205365 	cdpcc	3, 2, cr5, cr0, cr5, {3}
        156df0:	74437572 	strvcb	r7, [r3], -#1394
        156df4:	72656e74 	rsbvc	r6, r5, #1856	; 0x740
        156df8:	50617474 	rsbpl	r7, r1, r4, ror r4
        156dfc:	65726e0d 	ldrvsb	r6, [r2, -#3597]!
        156e00:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSPrinter::SetLineWidth(Point, Point, Point)
 * Address: 00156e04
 */
TPSPrinter::SetLineWidth(Point, Point, Point) {
    /*
        156e04:	e1a0c00d 	mov	ip, sp
        156e08:	e92dd87f 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, fp, ip, lr, pc}
        156e0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        156e10:	e1a04000 	mov	r4, r0
        156e14:	e3a05000 	mov	r5, #0	; 0x0
        156e18:	e51b0022 	ldr	r0, [fp, -#34]
        156e1c:	e1a00840 	mov	r0, r0, asr #16
        156e20:	e51b101e 	ldr	r1, [fp, -#30]
        156e24:	e1300841 	teq	r0, r1, asr #16
        156e28:	051b501a 	ldreq	r5, [fp, -#26]
        156e2c:	01a05845 	moveq	r5, r5, asr #16
        156e30:	0a000006 	beq	156e50 <TPSPrinter::SetLineWidth(Point, Point, Point)+0x4c>
        156e34:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
        156e38:	e1a00840 	mov	r0, r0, asr #16
        156e3c:	e51b1020 	ldr	r1, [fp, -#32]
        156e40:	e1300841 	teq	r0, r1, asr #16
        156e44:	1a00000c 	bne	156e7c <TPSPrinter::SetLineWidth(Point, Point, Point)+0x78>
        156e48:	e51b501c 	ldr	r5, [fp, -#28]
        156e4c:	e1a05845 	mov	r5, r5, asr #16
        156e50:	e3350000 	teq	r5, #0	; 0x0
        156e54:	0a000008 	beq	156e7c <TPSPrinter::SetLineWidth(Point, Point, Point)+0x78>
        156e58:	e28400e8 	add	r0, r4, #232	; 0xe8
        156e5c:	e1a06000 	mov	r6, r0
        156e60:	e1a02005 	mov	r2, r5
        156e64:	e28f1f06 	add	r1, pc, #24	; 0x18
        156e68:	eb697b09 	bl	1bb5a94 <$sprintf>
        156e6c:	e1a01006 	mov	r1, r6
        156e70:	e1a00004 	mov	r0, r4
        156e74:	e3a02000 	mov	r2, #0	; 0x0
        156e78:	eb67c153 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        156e7c:	e1a00005 	mov	r0, r5
        156e80:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        156e84:	434c5720 	cmpmi	ip, #8388608	; 0x800000
        156e88:	25642053 	strcsb	r2, [r4, -#83]!	; fField83
        156e8c:	4c572000 	mrami	r2, r7, acc0
    */
}

/**
 * Symbol: TPSPrinter::SetupLineStrings(FPoint const &, FPoint const &, Point, char *, char *, char *, char *, char *, char *)
 * Address: 00156e90
 */
TPSPrinter::SetupLineStrings(FPoint const &, FPoint const &, Point, char *, char *, char *, char *, char *, char *) {
    /*
        156e90:	e1a0c00d 	mov	ip, sp
        156e94:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        156e98:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        156e9c:	e24cb014 	sub	fp, ip, #20	; 0x14
        156ea0:	e1a04000 	mov	r4, r0
        156ea4:	e1a06001 	mov	r6, r1
        156ea8:	e1a05002 	mov	r5, r2
        156eac:	e28ba014 	add	sl, fp, #20	; 0x14
        156eb0:	e89a0404 	ldmia	sl, {r2, sl}
        156eb4:	e59b7024 	ldr	r7, [fp, #36]	; fField36
        156eb8:	e59b8020 	ldr	r8, [fp, #32]
        156ebc:	e59b901c 	ldr	r9, [fp, #28]
        156ec0:	e5911000 	ldr	r1, [r1]
        156ec4:	eb67a464 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        156ec8:	e1a0200a 	mov	r2, sl
        156ecc:	e1a00004 	mov	r0, r4
        156ed0:	e5961004 	ldr	r1, [r6, #4]
        156ed4:	eb67a460 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        156ed8:	e1a02009 	mov	r2, r9
        156edc:	e1a00004 	mov	r0, r4
        156ee0:	e5951004 	ldr	r1, [r5, #4]
        156ee4:	eb67a45c 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        156ee8:	e59b1010 	ldr	r1, [fp, #16]	; fField16
        156eec:	e5950000 	ldr	r0, [r5]
        156ef0:	e0801801 	add	r1, r0, r1, lsl #16
        156ef4:	e1a02008 	mov	r2, r8
        156ef8:	e1a00004 	mov	r0, r4
        156efc:	eb67a456 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        156f00:	e5b51004 	ldr	r1, [r5, #4]!
        156f04:	e59b0012 	ldr	r0, [fp, #18]
        156f08:	e0811800 	add	r1, r1, r0, lsl #16
        156f0c:	e1a02007 	mov	r2, r7
        156f10:	e1a00004 	mov	r0, r4
        156f14:	eb67a450 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        156f18:	e5b61004 	ldr	r1, [r6, #4]!
        156f1c:	e59b0012 	ldr	r0, [fp, #18]
        156f20:	e0811800 	add	r1, r1, r0, lsl #16
        156f24:	e1a00004 	mov	r0, r4
        156f28:	e59b2028 	ldr	r2, [fp, #40]	; fField40
        156f2c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        156f30:	ea67a449 	b	1b4005c <TPSPrinter::$FixedToString(long, char *)>
    */
}

/**
 * Symbol: TPSPrinter::SetupPSBottlenecks(GrafPort *)
 * Address: 00156f34
 */
TPSPrinter::SetupPSBottlenecks(GrafPort *) {
    /*
        156f34:	e1a0c00d 	mov	ip, sp
        156f38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        156f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        156f40:	e1a04001 	mov	r4, r1
        156f44:	e3a00038 	mov	r0, #56	; 0x38
        156f48:	eb6a2c7c 	bl	1be2140 <$NewPtr>
        156f4c:	e1b05000 	movs	r5, r0
        156f50:	03a00000 	moveq	r0, #0	; 0x0
        156f54:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        156f58:	e1a00005 	mov	r0, r5
        156f5c:	eb67f6ac 	bl	1b54a14 <$SetStdProcs(QDProcs *)>
        156f60:	e59f0064 	ldr	r0, [pc, #64]	; 156fcc <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0x98>
        156f64:	e5850034 	str	r0, [r5, #52]
        156f68:	e59f0060 	ldr	r0, [pc, #60]	; 156fd0 <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0x9c>
        156f6c:	e5850010 	str	r0, [r5, #16]	; fField16
        156f70:	e59f005c 	ldr	r0, [pc, #5c]	; 156fd4 <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xa0>
        156f74:	e5850028 	str	r0, [r5, #40]	; fField40
        156f78:	e59f0058 	ldr	r0, [pc, #58]	; 156fd8 <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xa4>
        156f7c:	e5850030 	str	r0, [r5, #48]
        156f80:	e59f0054 	ldr	r0, [pc, #54]	; 156fdc <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xa8>	; fField54
        156f84:	e5850014 	str	r0, [r5, #20]	; fField20
        156f88:	e59f0050 	ldr	r0, [pc, #50]	; 156fe0 <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xac>
        156f8c:	e5850000 	str	r0, [r5]
        156f90:	e59f004c 	ldr	r0, [pc, #4c]	; 156fe4 <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xb0>
        156f94:	e5850020 	str	r0, [r5, #32]
        156f98:	e59f0048 	ldr	r0, [pc, #48]	; 156fe8 <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xb4>
        156f9c:	e585002c 	str	r0, [r5, #44]
        156fa0:	e59f0044 	ldr	r0, [pc, #44]	; 156fec <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xb8>
        156fa4:	e5850004 	str	r0, [r5, #4]
        156fa8:	e59f0040 	ldr	r0, [pc, #40]	; 156ff0 <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xbc>	; fField40
        156fac:	e585001c 	str	r0, [r5, #28]
        156fb0:	e59f003c 	ldr	r0, [pc, #3c]	; 156ff4 <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xc0>
        156fb4:	e5850008 	str	r0, [r5, #8]
        156fb8:	e59f0038 	ldr	r0, [pc, #38]	; 156ff8 <TPSPrinter::SetupPSBottlenecks(GrafPort *)+0xc4>
        156fbc:	e5850018 	str	r0, [r5, #24]
        156fc0:	e3a00001 	mov	r0, #1	; 0x1
        156fc4:	e5a45040 	str	r5, [r4, #64]!
        156fc8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        156fcc:	01b431e0 	moveqs	r3, r0, ror #3
        156fd0:	01b431c4 	moveqs	r3, r4, asr #3
        156fd4:	01b431d4 	ldreqsb	r3, [r4, r4]!
        156fd8:	01b431dc 	ldreqsb	r3, [r4, ip]!
        156fdc:	01b431c8 	moveqs	r3, r8, asr #3
        156fe0:	01b431b4 	ldreqh	r3, [r4, r4]!
        156fe4:	01b431d0 	ldreqsb	r3, [r4, r0]!
        156fe8:	01b431d8 	ldreqsb	r3, [r4, r8]!
        156fec:	01b431b8 	ldreqh	r3, [r4, r8]!
        156ff0:	01b431bc 	ldreqh	r3, [r4, ip]!
        156ff4:	01b431c0 	moveqs	r3, r0, asr #3
        156ff8:	01b431cc 	moveqs	r3, ip, asr #3
    */
}

/**
 * Symbol: TPSPrinter::DoPSLine(FPoint const &)
 * Address: 00156ffc
 */
TPSPrinter::DoPSLine(FPoint const &) {
    /*
        156ffc:	e1a0c00d 	mov	ip, sp
        157000:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        157004:	e24cb004 	sub	fp, ip, #4	; 0x4
        157008:	e1a04000 	mov	r4, r0
        15700c:	e1a05001 	mov	r5, r1
        157010:	e24dd020 	sub	sp, sp, #32	; 0x20
        157014:	e5911004 	ldr	r1, [r1, #4]
        157018:	e1a0200d 	mov	r2, sp
        15701c:	eb67a40e 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        157020:	e1a06000 	mov	r6, r0
        157024:	e28d2010 	add	r2, sp, #16	; 0x10
        157028:	e1a00004 	mov	r0, r4
        15702c:	e5951000 	ldr	r1, [r5]
        157030:	eb67a409 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        157034:	e1a02000 	mov	r2, r0
        157038:	e28400e8 	add	r0, r4, #232	; 0xe8
        15703c:	e1a05000 	mov	r5, r0
        157040:	e28f1f06 	add	r1, pc, #24	; 0x18
        157044:	e1a03006 	mov	r3, r6
        157048:	eb697a91 	bl	1bb5a94 <$sprintf>
        15704c:	e1a01005 	mov	r1, r5
        157050:	e1a00004 	mov	r0, r4
        157054:	e3a02000 	mov	r2, #0	; 0x0
        157058:	eb67c0db 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        15705c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        157060:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        157064:	73204c6e 	teqvc	r0, #28160	; 0x6e00
        157068:	546f2000 	strplbt	r2, [pc], #0	; 157070 <TPSPrinter::TearDownPSBottlenecks(GrafPort *)+0x4>
    */
}

/**
 * Symbol: TPSPrinter::TearDownPSBottlenecks(GrafPort *)
 * Address: 0015706c
 */
TPSPrinter::TearDownPSBottlenecks(GrafPort *) {
    /*
        15706c:	e1a0c00d 	mov	ip, sp
        157070:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        157074:	e24cb004 	sub	fp, ip, #4	; 0x4
        157078:	e1a04001 	mov	r4, r1
        15707c:	e5910040 	ldr	r0, [r1, #64]
        157080:	eb6a280b 	bl	1be10b4 <$DisposPtr>
        157084:	e3a00000 	mov	r0, #0	; 0x0
        157088:	e5a40040 	str	r0, [r4, #64]!
        15708c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::SetupPSTextMode(long)
 * Address: 00157090
 */
TPSPrinter::SetupPSTextMode(long) {
    /*
        157090:	e1a0c00d 	mov	ip, sp
        157094:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        157098:	e24cb004 	sub	fp, ip, #4	; 0x4
        15709c:	e1a00001 	mov	r0, r1
        1570a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1570a4:	e3a04001 	mov	r4, #1	; 0x1
        1570a8:	e1a0200d 	mov	r2, sp
        1570ac:	e3a01005 	mov	r1, #5	; 0x5
        1570b0:	eb67e1cc 	bl	1b4f7e8 <$GetTextObjField(long, TextObjectField, void *)>
        1570b4:	e59d0000 	ldr	r0, [sp]
        1570b8:	e3300000 	teq	r0, #0	; 0x0
        1570bc:	15b04010 	ldrne	r4, [r0, #16]!	; fField16
        1570c0:	e3340000 	teq	r4, #0	; 0x0
        1570c4:	13340001 	teqne	r4, #1	; 0x1
        1570c8:	0a000002 	beq	1570d8 <TPSPrinter::SetupPSTextMode(long)+0x48>
        1570cc:	e3340003 	teq	r4, #3	; 0x3
        1570d0:	03a00040 	moveq	r0, #64	; 0x40
        1570d4:	0a000000 	beq	1570dc <TPSPrinter::SetupPSTextMode(long)+0x4c>
        1570d8:	e3a00000 	mov	r0, #0	; 0x0
        1570dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::DoSelectFont(unsigned char)
 * Address: 001570e0
 */
TPSPrinter::DoSelectFont(unsigned char) {
    /*
        1570e0:	e1a0c00d 	mov	ip, sp
        1570e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1570e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1570ec:	e1a04000 	mov	r4, r0
        1570f0:	e20110ff 	and	r1, r1, #255	; 0xff
        1570f4:	e52d1004 	str	r1, [sp, -#4]!
        1570f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1570fc:	e59000a4 	ldr	r0, [r0, #164]	; fField164
        157100:	e5900000 	ldr	r0, [r0]
        157104:	eb69ac10 	bl	1bc214c <$AllocateRefHandle(long)>
        157108:	e1a05000 	mov	r5, r0
        15710c:	e3a06000 	mov	r6, #0	; 0x0
        157110:	e59470ac 	ldr	r7, [r4, #172]	; fField172
        157114:	e59f00f8 	ldr	r0, [pc, #f8]	; 157214 <TPSPrinter::DoSelectFont(unsigned char)+0x134>
        157118:	e5900000 	ldr	r0, [r0]
        15711c:	eb69ac0a 	bl	1bc214c <$AllocateRefHandle(long)>
        157120:	e1a08000 	mov	r8, r0
        157124:	e59f00ec 	ldr	r0, [pc, #ec]	; 157218 <TPSPrinter::DoSelectFont(unsigned char)+0x138>
        157128:	e5900000 	ldr	r0, [r0]
        15712c:	e5901000 	ldr	r1, [r0]
        157130:	e5980000 	ldr	r0, [r8]
        157134:	eb69b449 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        157138:	eb69ac03 	bl	1bc214c <$AllocateRefHandle(long)>
        15713c:	e58d0000 	str	r0, [sp]
        157140:	e1a00008 	mov	r0, r8
        157144:	eb69b01c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        157148:	e5950000 	ldr	r0, [r5]
        15714c:	e59fa0c8 	ldr	sl, [pc, #c8]	; 15721c <TPSPrinter::DoSelectFont(unsigned char)+0x13c>
        157150:	e3300002 	teq	r0, #2	; 0x2
        157154:	0a000033 	beq	157228 <TPSPrinter::DoSelectFont(unsigned char)+0x148>
        157158:	e24dd004 	sub	sp, sp, #4	; 0x4
        15715c:	e59f10bc 	ldr	r1, [pc, #bc]	; 157220 <TPSPrinter::DoSelectFont(unsigned char)+0x140>
        157160:	e5911000 	ldr	r1, [r1]
        157164:	e5911000 	ldr	r1, [r1]
        157168:	eb69b43c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        15716c:	eb69abf6 	bl	1bc214c <$AllocateRefHandle(long)>
        157170:	e58d0000 	str	r0, [sp]
        157174:	e5900000 	ldr	r0, [r0]
        157178:	e3300002 	teq	r0, #2	; 0x2
        15717c:	0a000020 	beq	157204 <TPSPrinter::DoSelectFont(unsigned char)+0x124>
        157180:	e59f009c 	ldr	r0, [pc, #9c]	; 157224 <TPSPrinter::DoSelectFont(unsigned char)+0x144>
        157184:	e5900000 	ldr	r0, [r0]
        157188:	e5901000 	ldr	r1, [r0]
        15718c:	e5950000 	ldr	r0, [r5]
        157190:	eb69b432 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        157194:	eb69abec 	bl	1bc214c <$AllocateRefHandle(long)>
        157198:	e1a08000 	mov	r8, r0
        15719c:	e5900000 	ldr	r0, [r0]
        1571a0:	e2001003 	and	r1, r0, #3	; 0x3
        1571a4:	e3510000 	cmp	r1, #0	; 0x0
        1571a8:	1a000003 	bne	1571bc <TPSPrinter::DoSelectFont(unsigned char)+0xdc>
        1571ac:	01a00140 	moveq	r0, r0, asr #2
        1571b0:	0a000000 	beq	1571b8 <TPSPrinter::DoSelectFont(unsigned char)+0xd8>
        1571b4:	eb69abd8 	bl	1bc211c <$_RINTError(long)>
        1571b8:	e1a06000 	mov	r6, r0
        1571bc:	e1a0100d 	mov	r1, sp
        1571c0:	e28d0004 	add	r0, sp, #4	; 0x4
        1571c4:	e3a02000 	mov	r2, #0	; 0x0
        1571c8:	eb69b426 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1571cc:	eb69abde 	bl	1bc214c <$AllocateRefHandle(long)>
        1571d0:	e1a09000 	mov	r9, r0
        1571d4:	e5900000 	ldr	r0, [r0]
        1571d8:	e3300002 	teq	r0, #2	; 0x2
        1571dc:	1a000003 	bne	1571f0 <TPSPrinter::DoSelectFont(unsigned char)+0x110>
        1571e0:	e1a0100a 	mov	r1, sl
        1571e4:	e28d0004 	add	r0, sp, #4	; 0x4
        1571e8:	e3a02000 	mov	r2, #0	; 0x0
        1571ec:	eb69b41d 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1571f0:	e5850000 	str	r0, [r5]
        1571f4:	e1a00009 	mov	r0, r9
        1571f8:	eb69afef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1571fc:	e1a00008 	mov	r0, r8
        157200:	eb69afed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        157204:	e59d0000 	ldr	r0, [sp]
        157208:	eb69afeb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        15720c:	e28dd004 	add	sp, sp, #4	; 0x4
        157210:	ea000009 	b	15723c <TPSPrinter::DoSelectFont(unsigned char)+0x15c>
        157214:	0c10180c 	ldceq	8, cr1, [r0], -#48
        157218:	00684080 	rsbeq	r4, r8, r0, lsl #1
        15721c:	00681200 	rsbeq	r1, r8, r0, lsl #4
        157220:	00684088 	rsbeq	r4, r8, r8, lsl #1
        157224:	00684090 	streqb	r4, [r8]
        157228:	e1a0100a 	mov	r1, sl
        15722c:	e1a0000d 	mov	r0, sp
        157230:	e3a02000 	mov	r2, #0	; 0x0
        157234:	eb69b40b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        157238:	e5850000 	str	r0, [r5]
        15723c:	e3a00002 	mov	r0, #2	; 0x2
        157240:	eb69abc1 	bl	1bc214c <$AllocateRefHandle(long)>
        157244:	e1a08000 	mov	r8, r0
        157248:	e2170003 	ands	r0, r7, #3	; 0x3
        15724c:	059f00e0 	ldreq	r0, [pc, #e0]	; 157334 <TPSPrinter::DoSelectFont(unsigned char)+0x254>
        157250:	0a000008 	beq	157278 <TPSPrinter::DoSelectFont(unsigned char)+0x198>
        157254:	e3300001 	teq	r0, #1	; 0x1
        157258:	059f00d8 	ldreq	r0, [pc, #d8]	; 157338 <TPSPrinter::DoSelectFont(unsigned char)+0x258>
        15725c:	0a000005 	beq	157278 <TPSPrinter::DoSelectFont(unsigned char)+0x198>
        157260:	e3300002 	teq	r0, #2	; 0x2
        157264:	059f00d0 	ldreq	r0, [pc, #d0]	; 15733c <TPSPrinter::DoSelectFont(unsigned char)+0x25c>
        157268:	0a000002 	beq	157278 <TPSPrinter::DoSelectFont(unsigned char)+0x198>
        15726c:	e3300003 	teq	r0, #3	; 0x3
        157270:	1a000003 	bne	157284 <TPSPrinter::DoSelectFont(unsigned char)+0x1a4>
        157274:	e59f00c4 	ldr	r0, [pc, #c4]	; 157340 <TPSPrinter::DoSelectFont(unsigned char)+0x260>
        157278:	e5900000 	ldr	r0, [r0]
        15727c:	e5900000 	ldr	r0, [r0]
        157280:	e5880000 	str	r0, [r8]
        157284:	e24dd084 	sub	sp, sp, #132	; 0x84
        157288:	e5981000 	ldr	r1, [r8]
        15728c:	e5950000 	ldr	r0, [r5]
        157290:	eb69b3f2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        157294:	eb69abac 	bl	1bc214c <$AllocateRefHandle(long)>
        157298:	e58d0080 	str	r0, [sp, #128]
        15729c:	e28d0080 	add	r0, sp, #128	; 0x80
        1572a0:	eb69afb7 	bl	1bc3184 <$GetCString(RefVar const &)>
        1572a4:	e1a0100d 	mov	r1, sp
        1572a8:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        1572ac:	e3a02001 	mov	r2, #1	; 0x1
        1572b0:	eb6a4032 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        1572b4:	e3a00001 	mov	r0, #1	; 0x1
        1572b8:	e58401e8 	str	r0, [r4, #488]	; fField488
        1572bc:	e59f9080 	ldr	r9, [pc, #80]	; 157344 <TPSPrinter::DoSelectFont(unsigned char)+0x264>
        1572c0:	e5990000 	ldr	r0, [r9]
        1572c4:	e5901000 	ldr	r1, [r0]
        1572c8:	e5950000 	ldr	r0, [r5]
        1572cc:	eb69b3dd 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        1572d0:	e3300000 	teq	r0, #0	; 0x0
        1572d4:	0a000008 	beq	1572fc <TPSPrinter::DoSelectFont(unsigned char)+0x21c>
        1572d8:	e5990000 	ldr	r0, [r9]
        1572dc:	e5901000 	ldr	r1, [r0]
        1572e0:	e5950000 	ldr	r0, [r5]
        1572e4:	eb69b3dd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1572e8:	e3100003 	tst	r0, #3	; 0x3
        1572ec:	01a00140 	moveq	r0, r0, asr #2
        1572f0:	0a000000 	beq	1572f8 <TPSPrinter::DoSelectFont(unsigned char)+0x218>
        1572f4:	eb69ab88 	bl	1bc211c <$_RINTError(long)>
        1572f8:	e58401e8 	str	r0, [r4, #488]	; fField488
        1572fc:	e2170080 	ands	r0, r7, #128	; 0x80
        157300:	13a00001 	movne	r0, #1	; 0x1
        157304:	e20000ff 	and	r0, r0, #255	; 0xff
        157308:	e2171c01 	ands	r1, r7, #256	; 0x100
        15730c:	13a01001 	movne	r1, #1	; 0x1
        157310:	e20120ff 	and	r2, r1, #255	; 0xff
        157314:	e3a010cd 	mov	r1, #205	; 0xcd
        157318:	e2811b33 	add	r1, r1, #52224	; 0xcc00
        15731c:	e3300000 	teq	r0, #0	; 0x0
        157320:	03320000 	teqeq	r2, #0	; 0x0
        157324:	e59400a8 	ldr	r0, [r4, #168]	; fField168
        157328:	0a000006 	beq	157348 <TPSPrinter::DoSelectFont(unsigned char)+0x268>
        15732c:	eb6a2764 	bl	1be10c4 <$FixedMultiply>
        157330:	ea000004 	b	157348 <TPSPrinter::DoSelectFont(unsigned char)+0x268>
        157334:	00683a80 	rsbeq	r3, r8, r0, lsl #21
        157338:	00682118 	rsbeq	r2, r8, r8, lsl r1
        15733c:	00683328 	rsbeq	r3, r8, r8, lsr #6
        157340:	00682128 	rsbeq	r2, r8, r8, lsr #2
        157344:	00683f98 	streqb	r3, [r8], -#248
        157348:	e3360000 	teq	r6, #0	; 0x0
        15734c:	11a01006 	movne	r1, r6
        157350:	1b6a275b 	blne	1be10c4 <$FixedMultiply>
        157354:	e24dd010 	sub	sp, sp, #16	; 0x10
        157358:	e59411e8 	ldr	r1, [r4, #488]	; fField488
        15735c:	e28460e8 	add	r6, r4, #232	; 0xe8
        157360:	e3310001 	teq	r1, #1	; 0x1
        157364:	1a000002 	bne	157374 <TPSPrinter::DoSelectFont(unsigned char)+0x294>
        157368:	e59d1098 	ldr	r1, [sp, #152]	; fField152
        15736c:	e3310000 	teq	r1, #0	; 0x0
        157370:	1a00000b 	bne	1573a4 <TPSPrinter::DoSelectFont(unsigned char)+0x2c4>
        157374:	e1a0200d 	mov	r2, sp
        157378:	e1a01000 	mov	r1, r0
        15737c:	e1a00004 	mov	r0, r4
        157380:	eb67a335 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        157384:	e1a03000 	mov	r3, r0
        157388:	e1a00006 	mov	r0, r6
        15738c:	e28d2010 	add	r2, sp, #16	; 0x10
        157390:	e28f1f00 	add	r1, pc, #0	; 0x0
        157394:	ea00000a 	b	1573c4 <TPSPrinter::DoSelectFont(unsigned char)+0x2e4>
        157398:	2f257320 	swics	0x00257320
        15739c:	25732053 	ldrcsb	r2, [r3, -#83]!	; fField83
        1573a0:	460d0000 	strmi	r0, [sp], -r0
        1573a4:	e1a0200d 	mov	r2, sp
        1573a8:	e1a01000 	mov	r1, r0
        1573ac:	e1a00004 	mov	r0, r4
        1573b0:	eb67a329 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1573b4:	e1a03000 	mov	r3, r0
        1573b8:	e1a00006 	mov	r0, r6
        1573bc:	e28d2010 	add	r2, sp, #16	; 0x10
        1573c0:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        1573c4:	eb6979b2 	bl	1bb5a94 <$sprintf>
        1573c8:	e1a01006 	mov	r1, r6
        1573cc:	e1a00004 	mov	r0, r4
        1573d0:	e3a02000 	mov	r2, #0	; 0x0
        1573d4:	eb67bffc 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        1573d8:	e28dd010 	add	sp, sp, #16	; 0x10
        1573dc:	e59d0080 	ldr	r0, [sp, #128]
        1573e0:	eb69af75 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1573e4:	e28dd084 	add	sp, sp, #132	; 0x84
        1573e8:	e1a00008 	mov	r0, r8
        1573ec:	eb69af72 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1573f0:	e59d0000 	ldr	r0, [sp]
        1573f4:	eb69af70 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1573f8:	e1a00005 	mov	r0, r5
        1573fc:	eb69af6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        157400:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        157404:	2f25732d 	swics	0x0025732d
        157408:	4d616320 	stcmil	3, cr6, [r1, -#128]!
        15740c:	25732053 	ldrcsb	r2, [r3, -#83]!	; fField83
        157410:	460d0000 	strmi	r0, [sp], -r0
    */
}

/**
 * Symbol: TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)
 * Address: 00157414
 */
TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long) {
    /*
        157414:	e1a0c00d 	mov	ip, sp
        157418:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15741c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        157420:	e24cb014 	sub	fp, ip, #20	; 0x14
        157424:	e1a04000 	mov	r4, r0
        157428:	e1a05002 	mov	r5, r2
        15742c:	e3a000f7 	mov	r0, #247	; 0xf7
        157430:	e59ba020 	ldr	sl, [fp, #32]
        157434:	e52d0008 	str	r0, [sp, -#8]!
        157438:	e5920000 	ldr	r0, [r2]
        15743c:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        157440:	e1300003 	teq	r0, r3
        157444:	0a00006c 	beq	1575fc <TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)+0x1e8>
        157448:	e59d0000 	ldr	r0, [sp]
        15744c:	e2400002 	sub	r0, r0, #2	; 0x2
        157450:	e28470e8 	add	r7, r4, #232	; 0xe8
        157454:	e58d0004 	str	r0, [sp, #4]
        157458:	e59b101c 	ldr	r1, [fp, #28]
        15745c:	e3310000 	teq	r1, #0	; 0x0
        157460:	033a0000 	teqeq	sl, #0	; 0x0
        157464:	0a000015 	beq	1574c0 <TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)+0xac>
        157468:	e24dd020 	sub	sp, sp, #32	; 0x20
        15746c:	e59b101c 	ldr	r1, [fp, #28]
        157470:	e04aa001 	sub	sl, sl, r1
        157474:	e28d2010 	add	r2, sp, #16	; 0x10
        157478:	e1a00004 	mov	r0, r4
        15747c:	e59b101c 	ldr	r1, [fp, #28]
        157480:	eb67a2f5 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        157484:	e1a06000 	mov	r6, r0
        157488:	e1a0200d 	mov	r2, sp
        15748c:	e1a0100a 	mov	r1, sl
        157490:	e1a00004 	mov	r0, r4
        157494:	eb67a2f0 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        157498:	e1a02000 	mov	r2, r0
        15749c:	e1a00007 	mov	r0, r7
        1574a0:	e28f1f56 	add	r1, pc, #344	; 0x158
        1574a4:	e1a03006 	mov	r3, r6
        1574a8:	eb697979 	bl	1bb5a94 <$sprintf>
        1574ac:	e1a01007 	mov	r1, r7
        1574b0:	e1a00004 	mov	r0, r4
        1574b4:	e3a02000 	mov	r2, #0	; 0x0
        1574b8:	eb67bfc3 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        1574bc:	e28dd020 	add	sp, sp, #32	; 0x20
        1574c0:	e3a00028 	mov	r0, #40	; 0x28
        1574c4:	e5c400e8 	strb	r0, [r4, #232]	; fField232
        1574c8:	e3a06001 	mov	r6, #1	; 0x1
        1574cc:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1574d0:	e5950000 	ldr	r0, [r5]
        1574d4:	e0438000 	sub	r8, r3, r0
        1574d8:	e59d0000 	ldr	r0, [sp]
        1574dc:	e1580000 	cmp	r8, r0
        1574e0:	c59d8000 	ldrgt	r8, [sp]
        1574e4:	e3a09000 	mov	r9, #0	; 0x0
        1574e8:	e3580000 	cmp	r8, #0	; 0x0
        1574ec:	da00002d 	ble	1575a8 <TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)+0x194>
        1574f0:	e5950000 	ldr	r0, [r5]
        1574f4:	e0800009 	add	r0, r0, r9
        1574f8:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        1574fc:	e0000091 	mul	r0, r1, r0
        157500:	e59b1008 	ldr	r1, [fp, #8]
        157504:	e0801001 	add	r1, r0, r1
        157508:	e59421e8 	ldr	r2, [r4, #488]	; fField488
        15750c:	e1a00004 	mov	r0, r4
        157510:	eb67b776 	bl	1b452f0 <TPSPrinter::$UnicodeToDestmap(char *, long)>
        157514:	e3500c01 	cmp	r0, #256	; 0x100
        157518:	ba00000f 	blt	15755c <TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)+0x148>
        15751c:	e1a01440 	mov	r1, r0, asr #8
        157520:	e20000ff 	and	r0, r0, #255	; 0xff
        157524:	e3310028 	teq	r1, #40	; 0x28
        157528:	13310029 	teqne	r1, #41	; 0x29
        15752c:	1331005c 	teqne	r1, #92	; 0x5c
        157530:	1a000004 	bne	157548 <TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)+0x134>
        157534:	e3a0305c 	mov	r3, #92	; 0x5c
        157538:	e1a02006 	mov	r2, r6
        15753c:	e2866001 	add	r6, r6, #1	; 0x1
        157540:	e0822004 	add	r2, r2, r4
        157544:	e5c230e8 	strb	r3, [r2, #232]	; fField232
        157548:	e1a02001 	mov	r2, r1
        15754c:	e1a01006 	mov	r1, r6
        157550:	e2866001 	add	r6, r6, #1	; 0x1
        157554:	e0811004 	add	r1, r1, r4
        157558:	e5c120e8 	strb	r2, [r1, #232]	; fField232
        15755c:	e3300028 	teq	r0, #40	; 0x28
        157560:	13300029 	teqne	r0, #41	; 0x29
        157564:	1330005c 	teqne	r0, #92	; 0x5c
        157568:	1a000004 	bne	157580 <TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)+0x16c>
        15756c:	e3a0305c 	mov	r3, #92	; 0x5c
        157570:	e1a01006 	mov	r1, r6
        157574:	e2866001 	add	r6, r6, #1	; 0x1
        157578:	e0811004 	add	r1, r1, r4
        15757c:	e5c130e8 	strb	r3, [r1, #232]	; fField232
        157580:	e1a01006 	mov	r1, r6
        157584:	e2866001 	add	r6, r6, #1	; 0x1
        157588:	e0811004 	add	r1, r1, r4
        15758c:	e5c100e8 	strb	r0, [r1, #232]	; fField232
        157590:	e59d0004 	ldr	r0, [sp, #4]
        157594:	e1500006 	cmp	r0, r6
        157598:	d1a08009 	movle	r8, r9
        15759c:	e2899001 	add	r9, r9, #1	; 0x1
        1575a0:	e1590008 	cmp	r9, r8
        1575a4:	baffffd1 	blt	1574f0 <TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)+0xdc>
        1575a8:	e3a00000 	mov	r0, #0	; 0x0
        1575ac:	e0841006 	add	r1, r4, r6
        1575b0:	e5c100e8 	strb	r0, [r1, #232]	; fField232
        1575b4:	e59b101c 	ldr	r1, [fp, #28]
        1575b8:	e3310000 	teq	r1, #0	; 0x0
        1575bc:	033a0000 	teqeq	sl, #0	; 0x0
        1575c0:	e1a00007 	mov	r0, r7
        1575c4:	128f1f11 	addne	r1, pc, #68	; 0x44
        1575c8:	028f1f14 	addeq	r1, pc, #80	; 0x50
        1575cc:	eb697934 	bl	1bb5aa4 <$strcat>
        1575d0:	e1a01007 	mov	r1, r7
        1575d4:	e1a00004 	mov	r0, r4
        1575d8:	e3a02000 	mov	r2, #0	; 0x0
        1575dc:	eb67bf7a 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        1575e0:	e5951000 	ldr	r1, [r5]
        1575e4:	e0811008 	add	r1, r1, r8
        1575e8:	e5851000 	str	r1, [r5]
        1575ec:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1575f0:	e0430001 	sub	r0, r3, r1
        1575f4:	e3500000 	cmp	r0, #0	; 0x0
        1575f8:	caffff96 	bgt	157458 <TPSPrinter::FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)+0x44>
        1575fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        157600:	25732030 	ldrcsb	r2, [r3, -#48]!
        157604:	20333220 	eorcss	r3, r3, r0, lsr #4
        157608:	25732030 	ldrcsb	r2, [r3, -#48]!
        15760c:	20000000 	andcs	r0, r0, r0
        157610:	29206177 	stmcsdb	r0!, {r0, r1, r2, r4, r5, r6, r8, sp, lr}
        157614:	69647468 	stmvsdb	r4!, {r3, r5, r6, sl, ip, sp, lr}^
        157618:	73686f77 	cmnvc	r8, #476	; 0x1dc
        15761c:	0d000000 	stceq	0, cr0, [r0]
        157620:	29207368 	stmcsdb	r0!, {r3, r5, r6, r8, r9, ip, sp, lr}
        157624:	6f770d00 	swivs	0x00770d00
    */
}

/**
 * Symbol: TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)
 * Address: 00157628
 */
TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long) {
    /*
        157628:	e1a0c00d 	mov	ip, sp
        15762c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        157630:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        157634:	e24cb014 	sub	fp, ip, #20	; 0x14
        157638:	e1a04000 	mov	r4, r0
        15763c:	e1a05001 	mov	r5, r1
        157640:	e3a09000 	mov	r9, #0	; 0x0
        157644:	e3a08001 	mov	r8, #1	; 0x1
        157648:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        15764c:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        157650:	e021129a 	mla	r1, sl, r2, r1
        157654:	e35a0001 	cmp	sl, #1	; 0x1
        157658:	e59b601c 	ldr	r6, [fp, #28]
        15765c:	da000004 	ble	157674 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0x4c>
        157660:	e1a00004 	mov	r0, r4
        157664:	e3a02001 	mov	r2, #1	; 0x1
        157668:	eb67b720 	bl	1b452f0 <TPSPrinter::$UnicodeToDestmap(char *, long)>
        15766c:	e1a07000 	mov	r7, r0
        157670:	ea000000 	b	157678 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0x50>
        157674:	e5d17000 	ldrb	r7, [r1]
        157678:	e5960000 	ldr	r0, [r6]
        15767c:	e5900000 	ldr	r0, [r0]
        157680:	e3300002 	teq	r0, #2	; 0x2
        157684:	0a000005 	beq	1576a0 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0x78>
        157688:	e59f105c 	ldr	r1, [pc, #5c]	; 1576ec <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xc4>
        15768c:	e5911000 	ldr	r1, [r1]
        157690:	e5911000 	ldr	r1, [r1]
        157694:	eb69b2f1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        157698:	e3300002 	teq	r0, #2	; 0x2
        15769c:	13a08000 	movne	r8, #0	; 0x0
        1576a0:	e35700b9 	cmp	r7, #185	; 0xb9
        1576a4:	0a00001d 	beq	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        1576a8:	ca000010 	bgt	1576f0 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xc8>
        1576ac:	e24700ad 	sub	r0, r7, #173	; 0xad
        1576b0:	e350000b 	cmp	r0, #11	; 0xb
        1576b4:	908ff100 	addls	pc, pc, r0, lsl #2
        1576b8:	ea000019 	b	157724 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xfc>
        1576bc:	ea000017 	b	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        1576c0:	ea000017 	b	157724 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xfc>
        1576c4:	ea000016 	b	157724 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xfc>
        1576c8:	ea000014 	b	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        1576cc:	ea000014 	b	157724 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xfc>
        1576d0:	ea000012 	b	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        1576d4:	ea000011 	b	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        1576d8:	ea000011 	b	157724 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xfc>
        1576dc:	ea000010 	b	157724 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xfc>
        1576e0:	ea00000e 	b	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        1576e4:	ea00000d 	b	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        1576e8:	ea00000c 	b	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        1576ec:	00683a78 	rsbeq	r3, r8, r8, ror sl
        1576f0:	e35700c5 	cmp	r7, #197	; 0xc5
        1576f4:	0a000009 	beq	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        1576f8:	ca000004 	bgt	157710 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xe8>
        1576fc:	e33700ba 	teq	r7, #186	; 0xba
        157700:	133700bd 	teqne	r7, #189	; 0xbd
        157704:	133700c3 	teqne	r7, #195	; 0xc3
        157708:	1a000005 	bne	157724 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xfc>
        15770c:	ea000003 	b	157720 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xf8>
        157710:	e33700c6 	teq	r7, #198	; 0xc6
        157714:	133700d7 	teqne	r7, #215	; 0xd7
        157718:	133700f0 	teqne	r7, #240	; 0xf0
        15771c:	1a000000 	bne	157724 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0xfc>
        157720:	e3a09001 	mov	r9, #1	; 0x1
        157724:	e28470a4 	add	r7, r4, #164	; 0xa4
        157728:	e3390000 	teq	r9, #0	; 0x0
        15772c:	e1a00007 	mov	r0, r7
        157730:	0a00000a 	beq	157760 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0x138>
        157734:	e59f9020 	ldr	r9, [pc, #20]	; 15775c <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0x134>	; fField20
        157738:	e5991000 	ldr	r1, [r9]
        15773c:	e5911000 	ldr	r1, [r1]
        157740:	e5900000 	ldr	r0, [r0]
        157744:	e5900000 	ldr	r0, [r0]
        157748:	eb69b2b8 	bl	1bc4230 <$EQRef__FlT1>
        15774c:	e3300000 	teq	r0, #0	; 0x0
        157750:	05990000 	ldreq	r0, [r9]
        157754:	0a000010 	beq	15779c <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0x174>
        157758:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        15775c:	00681180 	rsbeq	r1, r8, r0, lsl #3
        157760:	e5961000 	ldr	r1, [r6]
        157764:	e5911000 	ldr	r1, [r1]
        157768:	e5900000 	ldr	r0, [r0]
        15776c:	e5900000 	ldr	r0, [r0]
        157770:	eb69b2ae 	bl	1bc4230 <$EQRef__FlT1>
        157774:	e3300000 	teq	r0, #0	; 0x0
        157778:	0a000006 	beq	157798 <TPSPrinter::HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)+0x170>
        15777c:	e59410a8 	ldr	r1, [r4, #168]	; fField168
        157780:	e5960004 	ldr	r0, [r6, #4]
        157784:	e1310000 	teq	r1, r0
        157788:	059400ac 	ldreq	r0, [r4, #172]	; fField172
        15778c:	05961008 	ldreq	r1, [r6, #8]
        157790:	01300001 	teqeq	r0, r1
        157794:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        157798:	e5960000 	ldr	r0, [r6]
        15779c:	e5900000 	ldr	r0, [r0]
        1577a0:	e5971000 	ldr	r1, [r7]
        1577a4:	e5810000 	str	r0, [r1]
        1577a8:	e5960004 	ldr	r0, [r6, #4]
        1577ac:	e58400a8 	str	r0, [r4, #168]	; fField168
        1577b0:	e5960008 	ldr	r0, [r6, #8]
        1577b4:	e58400ac 	str	r0, [r4, #172]	; fField172
        1577b8:	e1a01006 	mov	r1, r6
        1577bc:	e1a0000a 	mov	r0, sl
        1577c0:	e28b3020 	add	r3, fp, #32	; 0x20
        1577c4:	e893000c 	ldmia	r3, {r2, r3}
        1577c8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1577cc:	e1a01005 	mov	r1, r5
        1577d0:	e1a00004 	mov	r0, r4
        1577d4:	e59b2010 	ldr	r2, [fp, #16]	; fField16
        1577d8:	e59b300c 	ldr	r3, [fp, #12]	; fField12
        1577dc:	eb67a21f 	bl	1b40060 <TPSPrinter::$FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)>
        1577e0:	e1a01008 	mov	r1, r8
        1577e4:	e1a00004 	mov	r0, r4
        1577e8:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1577ec:	ea67a201 	b	1b3fff8 <TPSPrinter::$DoSelectFont(unsigned char)>
    */
}

/**
 * Symbol: TPSPrinter::EmitText(long, char *, long, long *, StyleRecord *, long, long)
 * Address: 001577f0
 */
TPSPrinter::EmitText(long, char *, long, long *, StyleRecord *, long, long) {
    /*
        1577f0:	e1a0c00d 	mov	ip, sp
        1577f4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1577f8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1577fc:	e24cb014 	sub	fp, ip, #20	; 0x14
        157800:	e1a04000 	mov	r4, r0
        157804:	e1a05001 	mov	r5, r1
        157808:	e28ba018 	add	sl, fp, #24	; 0x18
        15780c:	e89a0480 	ldmia	sl, {r7, sl}
        157810:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        157814:	e3a00000 	mov	r0, #0	; 0x0
        157818:	e3a08000 	mov	r8, #0	; 0x0
        15781c:	e58d0018 	str	r0, [sp, #24]
        157820:	e5970008 	ldr	r0, [r7, #8]
        157824:	e2101080 	ands	r1, r0, #128	; 0x80
        157828:	13a01001 	movne	r1, #1	; 0x1
        15782c:	e20110ff 	and	r1, r1, #255	; 0xff
        157830:	e2100c01 	ands	r0, r0, #256	; 0x100
        157834:	e58d1004 	str	r1, [sp, #4]
        157838:	13a00001 	movne	r0, #1	; 0x1
        15783c:	e20000ff 	and	r0, r0, #255	; 0xff
        157840:	e58d0000 	str	r0, [sp]
        157844:	e28460e8 	add	r6, r4, #232	; 0xe8
        157848:	e59d0004 	ldr	r0, [sp, #4]
        15784c:	e3300000 	teq	r0, #0	; 0x0
        157850:	059d0000 	ldreq	r0, [sp]
        157854:	03300000 	teqeq	r0, #0	; 0x0
        157858:	0a000013 	beq	1578ac <TPSPrinter::EmitText(long, char *, long, long *, StyleRecord *, long, long)+0xbc>
        15785c:	e3a010cd 	mov	r1, #205	; 0xcd
        157860:	e2811b13 	add	r1, r1, #19456	; 0x4c00
        157864:	e5970004 	ldr	r0, [r7, #4]
        157868:	eb6a2615 	bl	1be10c4 <$FixedMultiply>
        15786c:	e1a08000 	mov	r8, r0
        157870:	e59d0004 	ldr	r0, [sp, #4]
        157874:	e3300000 	teq	r0, #0	; 0x0
        157878:	12688000 	rsbne	r8, r8, #0	; 0x0
        15787c:	e28d2008 	add	r2, sp, #8	; 0x8
        157880:	e1a01008 	mov	r1, r8
        157884:	e1a00004 	mov	r0, r4
        157888:	eb67a1f3 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        15788c:	e1a00006 	mov	r0, r6
        157890:	e28d2008 	add	r2, sp, #8	; 0x8
        157894:	e28f1f4e 	add	r1, pc, #312	; 0x138
        157898:	eb69787d 	bl	1bb5a94 <$sprintf>
        15789c:	e1a01006 	mov	r1, r6
        1578a0:	e1a00004 	mov	r0, r4
        1578a4:	e3a02000 	mov	r2, #0	; 0x0
        1578a8:	eb67bec7 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        1578ac:	e5970008 	ldr	r0, [r7, #8]
        1578b0:	e3100004 	tst	r0, #4	; 0x4
        1578b4:	0a000003 	beq	1578c8 <TPSPrinter::EmitText(long, char *, long, long *, StyleRecord *, long, long)+0xd8>
        1578b8:	e1a00004 	mov	r0, r4
        1578bc:	e28f1f48 	add	r1, pc, #288	; 0x120
        1578c0:	e3a02000 	mov	r2, #0	; 0x0
        1578c4:	eb67bec0 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        1578c8:	e3a09000 	mov	r9, #0	; 0x0
        1578cc:	e3550000 	cmp	r5, #0	; 0x0
        1578d0:	da00000f 	ble	157914 <TPSPrinter::EmitText(long, char *, long, long *, StyleRecord *, long, long)+0x124>
        1578d4:	e1a0200a 	mov	r2, sl
        1578d8:	e1a01007 	mov	r1, r7
        1578dc:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        1578e0:	e59b3020 	ldr	r3, [fp, #32]
        1578e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1578e8:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1578ec:	e92d0008 	stmdb	sp!, {r3}
        1578f0:	e28d302c 	add	r3, sp, #44	; 0x2c
        1578f4:	e1a02009 	mov	r2, r9
        1578f8:	e1a00004 	mov	r0, r4
        1578fc:	e59b100c 	ldr	r1, [fp, #12]	; fField12
        157900:	eb67a5f3 	bl	1b410d4 <TPSPrinter::$HandleCharacters(char *, long, long &, long, long *, StyleRecord *, long, long)>
        157904:	e28dd014 	add	sp, sp, #20	; 0x14
        157908:	e2899001 	add	r9, r9, #1	; 0x1
        15790c:	e1590005 	cmp	r9, r5
        157910:	baffffef 	blt	1578d4 <TPSPrinter::EmitText(long, char *, long, long *, StyleRecord *, long, long)+0xe4>
        157914:	e1a0200a 	mov	r2, sl
        157918:	e1a01007 	mov	r1, r7
        15791c:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        157920:	e59b3020 	ldr	r3, [fp, #32]
        157924:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        157928:	e1a03005 	mov	r3, r5
        15792c:	e28d2028 	add	r2, sp, #40	; 0x28
        157930:	e1a00004 	mov	r0, r4
        157934:	e59b100c 	ldr	r1, [fp, #12]	; fField12
        157938:	eb67a1c8 	bl	1b40060 <TPSPrinter::$FlushBuffer(char *, long &, long, long, StyleRecord *, long, long)>
        15793c:	e28dd010 	add	sp, sp, #16	; 0x10
        157940:	e5970008 	ldr	r0, [r7, #8]
        157944:	e3100004 	tst	r0, #4	; 0x4
        157948:	0a00000f 	beq	15798c <TPSPrinter::EmitText(long, char *, long, long *, StyleRecord *, long, long)+0x19c>
        15794c:	e2000001 	and	r0, r0, #1	; 0x1
        157950:	e3300001 	teq	r0, #1	; 0x1
        157954:	13a03000 	movne	r3, #0	; 0x0
        157958:	03a03001 	moveq	r3, #1	; 0x1
        15795c:	e5b70004 	ldr	r0, [r7, #4]!
        157960:	e2800902 	add	r0, r0, #32768	; 0x8000
        157964:	e1a00840 	mov	r0, r0, asr #16
        157968:	e1a02800 	mov	r2, r0, lsl #16
        15796c:	e1a02842 	mov	r2, r2, asr #16
        157970:	e1a00006 	mov	r0, r6
        157974:	e28f1f1c 	add	r1, pc, #112	; 0x70
        157978:	eb697845 	bl	1bb5a94 <$sprintf>
        15797c:	e1a01006 	mov	r1, r6
        157980:	e1a00004 	mov	r0, r4
        157984:	e3a02000 	mov	r2, #0	; 0x0
        157988:	eb67be8f 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        15798c:	e59d0004 	ldr	r0, [sp, #4]
        157990:	e3300000 	teq	r0, #0	; 0x0
        157994:	059d0000 	ldreq	r0, [sp]
        157998:	03300000 	teqeq	r0, #0	; 0x0
        15799c:	0a00000b 	beq	1579d0 <TPSPrinter::EmitText(long, char *, long, long *, StyleRecord *, long, long)+0x1e0>
        1579a0:	e28d2008 	add	r2, sp, #8	; 0x8
        1579a4:	e2681000 	rsb	r1, r8, #0	; 0x0
        1579a8:	e1a00004 	mov	r0, r4
        1579ac:	eb67a1aa 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1579b0:	e1a00006 	mov	r0, r6
        1579b4:	e28d2008 	add	r2, sp, #8	; 0x8
        1579b8:	e28f1f05 	add	r1, pc, #20	; 0x14
        1579bc:	eb697834 	bl	1bb5a94 <$sprintf>
        1579c0:	e1a01006 	mov	r1, r6
        1579c4:	e1a00004 	mov	r0, r4
        1579c8:	e3a02000 	mov	r2, #0	; 0x0
        1579cc:	eb67be7e 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        1579d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1579d4:	30202573 	eorcc	r2, r0, r3, ror r5
        1579d8:	20726d6f 	rsbcss	r6, r2, pc, ror #26
        1579dc:	7665746f 	strvcbt	r7, [r5], -pc, ror #8
        1579e0:	20000000 	andcs	r0, r0, r0
        1579e4:	43757250 	cmnmi	r5, #5	; 0x5
        1579e8:	74200000 	strvct	r0, [r0]
        1579ec:	43757250 	cmnmi	r5, #5	; 0x5
        1579f0:	74202564 	strvct	r2, [r0], -#1380
        1579f4:	20256420 	eorcs	r6, r5, r0, lsr #8
        1579f8:	554c0d00 	strplb	r0, [ip, -#3328]
    */
}

/**
 * Symbol: TPSPrinter::UnicodeToDestmap(char *, long)
 * Address: 001579fc
 */
TPSPrinter::UnicodeToDestmap(char *, long) {
    /*
        1579fc:	e1a0c00d 	mov	ip, sp
        157a00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        157a04:	e24cb004 	sub	fp, ip, #4	; 0x4
        157a08:	e1a00001 	mov	r0, r1
        157a0c:	e1a04002 	mov	r4, r2
        157a10:	e24dd004 	sub	sp, sp, #4	; 0x4
        157a14:	e1a0100d 	mov	r1, sp
        157a18:	e3a03001 	mov	r3, #1	; 0x1
        157a1c:	eb6a3e57 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        157a20:	e5dd0000 	ldrb	r0, [sp]
        157a24:	e3340006 	teq	r4, #6	; 0x6
        157a28:	1a000009 	bne	157a54 <TPSPrinter::UnicodeToDestmap(char *, long)+0x58>
        157a2c:	e3500081 	cmp	r0, #129	; 0x81
        157a30:	ba000001 	blt	157a3c <TPSPrinter::UnicodeToDestmap(char *, long)+0x40>
        157a34:	e350009f 	cmp	r0, #159	; 0x9f
        157a38:	da000003 	ble	157a4c <TPSPrinter::UnicodeToDestmap(char *, long)+0x50>
        157a3c:	e35000e0 	cmp	r0, #224	; 0xe0
        157a40:	ba000003 	blt	157a54 <TPSPrinter::UnicodeToDestmap(char *, long)+0x58>
        157a44:	e35000fb 	cmp	r0, #251	; 0xfb
        157a48:	ca000001 	bgt	157a54 <TPSPrinter::UnicodeToDestmap(char *, long)+0x58>
        157a4c:	e5dd1001 	ldrb	r1, [sp, #1]
        157a50:	e0810400 	add	r0, r1, r0, lsl #8
        157a54:	e3300000 	teq	r0, #0	; 0x0
        157a58:	03a000a5 	moveq	r0, #165	; 0xa5
        157a5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::GetDoPatternFill(void)
 * Address: 00157a60
 */
TPSPrinter::GetDoPatternFill(void) {
    /*
        157a60:	e5d001ec 	ldrb	r0, [r0, #492]	; fField492
        157a64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPrinter::DoSetGray(unsigned char)
 * Address: 00157f68
 */
TPSPrinter::DoSetGray(unsigned char) {
    /*
        157f68:	e1a0c00d 	mov	ip, sp
        157f6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        157f70:	e24cb004 	sub	fp, ip, #4	; 0x4
        157f74:	e1a04000 	mov	r4, r0
        157f78:	e20150ff 	and	r5, r1, #255	; 0xff
        157f7c:	e5d000a1 	ldrb	r0, [r0, #161]	; fField161
        157f80:	e1300005 	teq	r0, r5
        157f84:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        157f88:	e28400e8 	add	r0, r4, #232	; 0xe8
        157f8c:	e1a06000 	mov	r6, r0
        157f90:	e1a02005 	mov	r2, r5
        157f94:	e28f1f06 	add	r1, pc, #24	; 0x18
        157f98:	eb6976bd 	bl	1bb5a94 <$sprintf>
        157f9c:	e5c450a1 	strb	r5, [r4, #161]	; fField161
        157fa0:	e1a01006 	mov	r1, r6
        157fa4:	e1a00004 	mov	r0, r4
        157fa8:	e3a02000 	mov	r2, #0	; 0x0
        157fac:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        157fb0:	ea67bd05 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        157fb4:	25642036 	strcsb	r2, [r4, -#54]!	; fField54
        157fb8:	34206469 	strcct	r6, [r0], -#1129
        157fbc:	76207365 	strvct	r7, [r0], -r5, ror #6
        157fc0:	74677261 	strvcbt	r7, [r7], -#609
        157fc4:	790d0000 	stmvcdb	sp, {}
    */
}

/**
 * Symbol: TPSPrinter::Draw1Curve(curve *, Point, unsigned char)
 * Address: 001595d0
 */
TPSPrinter::Draw1Curve(curve *, Point, unsigned char) {
    /*
        1595d0:	e1a0c00d 	mov	ip, sp
        1595d4:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1595d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1595dc:	e1a05000 	mov	r5, r0
        1595e0:	e1a04001 	mov	r4, r1
        1595e4:	e20300ff 	and	r0, r3, #255	; 0xff
        1595e8:	e52d0004 	str	r0, [sp, -#4]!
        1595ec:	e24dd064 	sub	sp, sp, #100	; 0x64
        1595f0:	e51b1030 	ldr	r1, [fp, -#48]
        1595f4:	e51b002e 	ldr	r0, [fp, -#46]
        1595f8:	e0810000 	add	r0, r1, r0
        1595fc:	e1a00800 	mov	r0, r0, lsl #16
        159600:	e3a01701 	mov	r1, #262144	; 0x40000
        159604:	eb6a1ead 	bl	1be10c0 <$FixedDivide>
        159608:	e1a06000 	mov	r6, r0
        15960c:	e5940000 	ldr	r0, [r4]
        159610:	e5941008 	ldr	r1, [r4, #8]
        159614:	e0800081 	add	r0, r0, r1, lsl #1
        159618:	e3a01803 	mov	r1, #196608	; 0x30000
        15961c:	eb6a1ea7 	bl	1be10c0 <$FixedDivide>
        159620:	e1a09000 	mov	r9, r0
        159624:	e594000c 	ldr	r0, [r4, #12]	; fField12
        159628:	e5941004 	ldr	r1, [r4, #4]
        15962c:	e0810080 	add	r0, r1, r0, lsl #1
        159630:	e3a01803 	mov	r1, #196608	; 0x30000
        159634:	eb6a1ea1 	bl	1be10c0 <$FixedDivide>
        159638:	e1a07000 	mov	r7, r0
        15963c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        159640:	e5941008 	ldr	r1, [r4, #8]
        159644:	e0800081 	add	r0, r0, r1, lsl #1
        159648:	e3a01803 	mov	r1, #196608	; 0x30000
        15964c:	eb6a1e9b 	bl	1be10c0 <$FixedDivide>
        159650:	e1a0a000 	mov	sl, r0
        159654:	e594000c 	ldr	r0, [r4, #12]	; fField12
        159658:	e5941014 	ldr	r1, [r4, #20]	; fField20
        15965c:	e0810080 	add	r0, r1, r0, lsl #1
        159660:	e3a01803 	mov	r1, #196608	; 0x30000
        159664:	eb6a1e95 	bl	1be10c0 <$FixedDivide>
        159668:	e58d0060 	str	r0, [sp, #96]
        15966c:	e5b48010 	ldr	r8, [r4, #16]!	; fField16
        159670:	e5941004 	ldr	r1, [r4, #4]
        159674:	e59d0064 	ldr	r0, [sp, #100]
        159678:	e3300000 	teq	r0, #0	; 0x0
        15967c:	0a000007 	beq	1596a0 <TPSPrinter::Draw1Curve(curve *, Point, unsigned char)+0xd0>
        159680:	e0899006 	add	r9, r9, r6
        159684:	e0877006 	add	r7, r7, r6
        159688:	e08aa006 	add	sl, sl, r6
        15968c:	e59d0060 	ldr	r0, [sp, #96]
        159690:	e0800006 	add	r0, r0, r6
        159694:	e0888006 	add	r8, r8, r6
        159698:	e0811006 	add	r1, r1, r6
        15969c:	e58d0060 	str	r0, [sp, #96]
        1596a0:	e1a0200d 	mov	r2, sp
        1596a4:	e1a00005 	mov	r0, r5
        1596a8:	eb679a6b 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1596ac:	e1a03000 	mov	r3, r0
        1596b0:	e92d0008 	stmdb	sp!, {r3}
        1596b4:	e28d2034 	add	r2, sp, #52	; 0x34
        1596b8:	e1a01008 	mov	r1, r8
        1596bc:	e1a00005 	mov	r0, r5
        1596c0:	eb679a65 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1596c4:	e1a03000 	mov	r3, r0
        1596c8:	e92d0008 	stmdb	sp!, {r3}
        1596cc:	e28d2018 	add	r2, sp, #24	; 0x18
        1596d0:	e1a00005 	mov	r0, r5
        1596d4:	e59d1068 	ldr	r1, [sp, #104]
        1596d8:	eb679a5f 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1596dc:	e1a03000 	mov	r3, r0
        1596e0:	e92d0008 	stmdb	sp!, {r3}
        1596e4:	e28d204c 	add	r2, sp, #76	; 0x4c
        1596e8:	e1a0100a 	mov	r1, sl
        1596ec:	e1a00005 	mov	r0, r5
        1596f0:	eb679a59 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        1596f4:	e1a03000 	mov	r3, r0
        1596f8:	e92d0008 	stmdb	sp!, {r3}
        1596fc:	e28d2030 	add	r2, sp, #48	; 0x30
        159700:	e1a01007 	mov	r1, r7
        159704:	e1a00005 	mov	r0, r5
        159708:	eb679a53 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        15970c:	e1a04000 	mov	r4, r0
        159710:	e28d2060 	add	r2, sp, #96	; 0x60
        159714:	e1a01009 	mov	r1, r9
        159718:	e1a00005 	mov	r0, r5
        15971c:	eb679a4e 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159720:	e1a02000 	mov	r2, r0
        159724:	e28500e8 	add	r0, r5, #232	; 0xe8
        159728:	e1a06000 	mov	r6, r0
        15972c:	e28f1f07 	add	r1, pc, #28	; 0x1c
        159730:	e1a03004 	mov	r3, r4
        159734:	eb6970d6 	bl	1bb5a94 <$sprintf>
        159738:	e28dd010 	add	sp, sp, #16	; 0x10
        15973c:	e1a01006 	mov	r1, r6
        159740:	e1a00005 	mov	r0, r5
        159744:	e3a02000 	mov	r2, #0	; 0x0
        159748:	eb67b71f 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        15974c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        159750:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        159754:	73202573 	teqvc	r0, #482344960	; 0x1cc00000
        159758:	20257320 	eorcs	r7, r5, r0, lsr #6
        15975c:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        159760:	73204354 	teqvc	r0, #1342177281	; 0x50000001
        159764:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TPSPrinter::CheckEmptyPath(path *)
 * Address: 0015976c
 */
TPSPrinter::CheckEmptyPath(path *) {
    /*
        15976c:	e92d4000 	stmdb	sp!, {lr}
        159770:	e5912000 	ldr	r2, [r1]
        159774:	e2420001 	sub	r0, r2, #1	; 0x1
        159778:	e282201f 	add	r2, r2, #31	; 0x1f
        15977c:	e1a022c2 	mov	r2, r2, asr #5
        159780:	e0811102 	add	r1, r1, r2, lsl #2
        159784:	e2502001 	subs	r2, r0, #1	; 0x1
        159788:	e5b1c004 	ldr	ip, [r1, #4]!
        15978c:	e5b13004 	ldr	r3, [r1, #4]!
        159790:	e2811004 	add	r1, r1, #4	; 0x4
        159794:	4a000007 	bmi	1597b8 <TPSPrinter::CheckEmptyPath(path *)+0x4c>
        159798:	e3a00000 	mov	r0, #0	; 0x0
        15979c:	e491e004 	ldr	lr, [r1], #4
        1597a0:	e13e000c 	teq	lr, ip
        1597a4:	0491e004 	ldreq	lr, [r1], #4
        1597a8:	013e0003 	teqeq	lr, r3
        1597ac:	18bd8000 	ldmneia	sp!, {pc}
        1597b0:	e2522001 	subs	r2, r2, #1	; 0x1
        1597b4:	5afffff8 	bpl	15979c <TPSPrinter::CheckEmptyPath(path *)+0x30>
        1597b8:	e3a00001 	mov	r0, #1	; 0x1
        1597bc:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TPSPrinter::Draw1Path(path *, Point, unsigned char)
 * Address: 001597c0
 */
TPSPrinter::Draw1Path(path *, Point, unsigned char) {
    /*
        1597c0:	e1a0c00d 	mov	ip, sp
        1597c4:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1597c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1597cc:	e1a04000 	mov	r4, r0
        1597d0:	e1a06001 	mov	r6, r1
        1597d4:	e20380ff 	and	r8, r3, #255	; 0xff
        1597d8:	e24dd078 	sub	sp, sp, #120	; 0x78
        1597dc:	e3a09000 	mov	r9, #0	; 0x0
        1597e0:	e58d1070 	str	r1, [sp, #112]
        1597e4:	e51b1030 	ldr	r1, [fp, -#48]
        1597e8:	e51b002e 	ldr	r0, [fp, -#46]
        1597ec:	e0810000 	add	r0, r1, r0
        1597f0:	e1a00800 	mov	r0, r0, lsl #16
        1597f4:	e3a01701 	mov	r1, #262144	; 0x40000
        1597f8:	eb6a1e30 	bl	1be10c0 <$FixedDivide>
        1597fc:	e1a05000 	mov	r5, r0
        159800:	e1a00004 	mov	r0, r4
        159804:	e28f1f2a 	add	r1, pc, #168	; 0xa8
        159808:	e3a02000 	mov	r2, #0	; 0x0
        15980c:	eb67b6ee 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        159810:	e59d1070 	ldr	r1, [sp, #112]
        159814:	e28d0044 	add	r0, sp, #68	; 0x44
        159818:	eb67dbfa 	bl	1b50808 <$InitPathWalker(pathWalker *, path *)>
        15981c:	e1a01006 	mov	r1, r6
        159820:	e1a00004 	mov	r0, r4
        159824:	eb6795bb 	bl	1b3ef18 <TPSPrinter::$CheckEmptyPath(path *)>
        159828:	e28470e8 	add	r7, r4, #232	; 0xe8
        15982c:	e3300000 	teq	r0, #0	; 0x0
        159830:	0a000028 	beq	1598d8 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x118>
        159834:	e59d006c 	ldr	r0, [sp, #108]
        159838:	e5909000 	ldr	r9, [r0]
        15983c:	e5900004 	ldr	r0, [r0, #4]
        159840:	e0801005 	add	r1, r0, r5
        159844:	e28d2024 	add	r2, sp, #36	; 0x24
        159848:	e1a00004 	mov	r0, r4
        15984c:	eb679a02 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159850:	e1a06000 	mov	r6, r0
        159854:	e28d2034 	add	r2, sp, #52	; 0x34
        159858:	e1a01009 	mov	r1, r9
        15985c:	e1a00004 	mov	r0, r4
        159860:	eb6799fd 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159864:	e1a02000 	mov	r2, r0
        159868:	e1a00007 	mov	r0, r7
        15986c:	e28f1f13 	add	r1, pc, #76	; 0x4c
        159870:	e1a03006 	mov	r3, r6
        159874:	eb697086 	bl	1bb5a94 <$sprintf>
        159878:	e1a01007 	mov	r1, r7
        15987c:	e1a00004 	mov	r0, r4
        159880:	e3a02000 	mov	r2, #0	; 0x0
        159884:	eb67b6d0 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        159888:	e1a01085 	mov	r1, r5, lsl #1
        15988c:	e28d2034 	add	r2, sp, #52	; 0x34
        159890:	e1a00004 	mov	r0, r4
        159894:	eb6799f0 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159898:	e1a02000 	mov	r2, r0
        15989c:	e1a00007 	mov	r0, r7
        1598a0:	e28f1f09 	add	r1, pc, #36	; 0x24
        1598a4:	eb69707a 	bl	1bb5a94 <$sprintf>
        1598a8:	e1a01007 	mov	r1, r7
        1598ac:	e1a00004 	mov	r0, r4
        1598b0:	ea000082 	b	159ac0 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x300>
        1598b4:	6e657770 	mcrvs	7, 3, r7, cr5, cr0, {3}
        1598b8:	6174680d 	cmnvs	r4, sp, lsl #16
        1598bc:	00000000 	andeq	r0, r0, r0
        1598c0:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        1598c4:	73204d76 	teqvc	r0, #7552	; 0x1d80
        1598c8:	546f2000 	strplbt	r2, [pc], #0	; 1598d0 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x110>
        1598cc:	25732030 	ldrcsb	r2, [r3, -#48]!
        1598d0:	20524c6e 	subcss	r4, r2, lr, ror #24
        1598d4:	546f2000 	strplbt	r2, [pc], #0	; 1598dc <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x11c>
        1598d8:	e28d0044 	add	r0, sp, #68	; 0x44
        1598dc:	eb67dffc 	bl	1b518d4 <$NextPathSegment(pathWalker *)>
        1598e0:	e28d1048 	add	r1, sp, #72	; 0x48
        1598e4:	e58d1074 	str	r1, [sp, #116]
        1598e8:	e28d6010 	add	r6, sp, #16	; 0x10
        1598ec:	e3300000 	teq	r0, #0	; 0x0
        1598f0:	0a000037 	beq	1599d4 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x214>
        1598f4:	e28dd018 	add	sp, sp, #24	; 0x18
        1598f8:	e59d105c 	ldr	r1, [sp, #92]
        1598fc:	e2811018 	add	r1, r1, #24	; 0x18
        159900:	e931500c 	ldmdb	r1!, {r2, r3, ip, lr}
        159904:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        159908:	e9315000 	ldmdb	r1!, {ip, lr}
        15990c:	e92d5000 	stmdb	sp!, {ip, lr}
        159910:	e3380000 	teq	r8, #0	; 0x0
        159914:	0a000004 	beq	15992c <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x16c>
        159918:	e1a03005 	mov	r3, r5
        15991c:	e1a02005 	mov	r2, r5
        159920:	e1a0100d 	mov	r1, sp
        159924:	e1a00004 	mov	r0, r4
        159928:	eb67a203 	bl	1b4213c <TPSPrinter::$OffsetFixedPoint(FPoint &, long, long)>
        15992c:	e59d1004 	ldr	r1, [sp, #4]
        159930:	e28d2024 	add	r2, sp, #36	; 0x24
        159934:	e1a00004 	mov	r0, r4
        159938:	eb6799c7 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        15993c:	e1a0a000 	mov	sl, r0
        159940:	e28d2034 	add	r2, sp, #52	; 0x34
        159944:	e1a00004 	mov	r0, r4
        159948:	e59d1000 	ldr	r1, [sp]
        15994c:	eb6799c2 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159950:	e1a02000 	mov	r2, r0
        159954:	e1a00007 	mov	r0, r7
        159958:	e24f1f28 	sub	r1, pc, #160	; 0xa0
        15995c:	e1a0300a 	mov	r3, sl
        159960:	eb69704b 	bl	1bb5a94 <$sprintf>
        159964:	e1a01007 	mov	r1, r7
        159968:	e1a00004 	mov	r0, r4
        15996c:	e3a02000 	mov	r2, #0	; 0x0
        159970:	eb67b695 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        159974:	e59d1000 	ldr	r1, [sp]
        159978:	e58d101c 	str	r1, [sp, #28]
        15997c:	e59d0004 	ldr	r0, [sp, #4]
        159980:	e58d0020 	str	r0, [sp, #32]
        159984:	e59d0044 	ldr	r0, [sp, #68]
        159988:	e3300000 	teq	r0, #0	; 0x0
        15998c:	0a000008 	beq	1599b4 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x1f4>
        159990:	e1a01006 	mov	r1, r6
        159994:	e1a03005 	mov	r3, r5
        159998:	e1a02005 	mov	r2, r5
        15999c:	e1a00004 	mov	r0, r4
        1599a0:	eb67a1e5 	bl	1b4213c <TPSPrinter::$OffsetFixedPoint(FPoint &, long, long)>
        1599a4:	e1a01006 	mov	r1, r6
        1599a8:	e1a00004 	mov	r0, r4
        1599ac:	eb679990 	bl	1b3fff4 <TPSPrinter::$DoPSLine(FPoint const &)>
        1599b0:	ea000004 	b	1599c8 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x208>
        1599b4:	e1a03008 	mov	r3, r8
        1599b8:	e1a0100d 	mov	r1, sp
        1599bc:	e1a00004 	mov	r0, r4
        1599c0:	e51b2030 	ldr	r2, [fp, -#48]
        1599c4:	eb67998e 	bl	1b40004 <TPSPrinter::$Draw1Curve(curve *, Point, unsigned char)>
        1599c8:	e5960000 	ldr	r0, [r6]
        1599cc:	e58d0018 	str	r0, [sp, #24]
        1599d0:	e596a004 	ldr	sl, [r6, #4]
        1599d4:	e28d0044 	add	r0, sp, #68	; 0x44
        1599d8:	eb67dfbd 	bl	1b518d4 <$NextPathSegment(pathWalker *)>
        1599dc:	e3300000 	teq	r0, #0	; 0x0
        1599e0:	0a00002e 	beq	159aa0 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x2e0>
        1599e4:	e28dd018 	add	sp, sp, #24	; 0x18
        1599e8:	e59d105c 	ldr	r1, [sp, #92]
        1599ec:	e2811018 	add	r1, r1, #24	; 0x18
        1599f0:	e9311008 	ldmdb	r1!, {r3, ip}
        1599f4:	e92d1008 	stmdb	sp!, {r3, ip}
        1599f8:	e9311008 	ldmdb	r1!, {r3, ip}
        1599fc:	e92d1008 	stmdb	sp!, {r3, ip}
        159a00:	e9311008 	ldmdb	r1!, {r3, ip}
        159a04:	e92d1008 	stmdb	sp!, {r3, ip}
        159a08:	e59d0044 	ldr	r0, [sp, #68]
        159a0c:	e3300000 	teq	r0, #0	; 0x0
        159a10:	0a000011 	beq	159a5c <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x29c>
        159a14:	e1a01006 	mov	r1, r6
        159a18:	e1a03005 	mov	r3, r5
        159a1c:	e1a02005 	mov	r2, r5
        159a20:	e1a00004 	mov	r0, r4
        159a24:	eb67a1c4 	bl	1b4213c <TPSPrinter::$OffsetFixedPoint(FPoint &, long, long)>
        159a28:	e1a01006 	mov	r1, r6
        159a2c:	e1a00004 	mov	r0, r4
        159a30:	eb67996f 	bl	1b3fff4 <TPSPrinter::$DoPSLine(FPoint const &)>
        159a34:	e2899001 	add	r9, r9, #1	; 0x1
        159a38:	e3590004 	cmp	r9, #4	; 0x4
        159a3c:	ba000010 	blt	159a84 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x2c4>
        159a40:	e3a09000 	mov	r9, #0	; 0x0
        159a44:	e1a00004 	mov	r0, r4
        159a48:	e28f1f02 	add	r1, pc, #8	; 0x8
        159a4c:	e3a02000 	mov	r2, #0	; 0x0
        159a50:	eb67b65d 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        159a54:	ea00000a 	b	159a84 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x2c4>
        159a58:	0d000000 	stceq	0, cr0, [r0]
        159a5c:	e1a03008 	mov	r3, r8
        159a60:	e1a0100d 	mov	r1, sp
        159a64:	e1a00004 	mov	r0, r4
        159a68:	e51b2030 	ldr	r2, [fp, -#48]
        159a6c:	eb679964 	bl	1b40004 <TPSPrinter::$Draw1Curve(curve *, Point, unsigned char)>
        159a70:	e1a01006 	mov	r1, r6
        159a74:	e1a03005 	mov	r3, r5
        159a78:	e1a02005 	mov	r2, r5
        159a7c:	e1a00004 	mov	r0, r4
        159a80:	eb67a1ad 	bl	1b4213c <TPSPrinter::$OffsetFixedPoint(FPoint &, long, long)>
        159a84:	e5960000 	ldr	r0, [r6]
        159a88:	e58d0018 	str	r0, [sp, #24]
        159a8c:	e28d0044 	add	r0, sp, #68	; 0x44
        159a90:	e596a004 	ldr	sl, [r6, #4]
        159a94:	eb67df8e 	bl	1b518d4 <$NextPathSegment(pathWalker *)>
        159a98:	e3300000 	teq	r0, #0	; 0x0
        159a9c:	1affffd0 	bne	1599e4 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x224>
        159aa0:	e28d1018 	add	r1, sp, #24	; 0x18
        159aa4:	e8910003 	ldmia	r1, {r0, r1}
        159aa8:	e1310000 	teq	r1, r0
        159aac:	059d0020 	ldreq	r0, [sp, #32]
        159ab0:	0130000a 	teqeq	r0, sl
        159ab4:	1a000003 	bne	159ac8 <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x308>
        159ab8:	e1a00004 	mov	r0, r4
        159abc:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        159ac0:	e3a02000 	mov	r2, #0	; 0x0
        159ac4:	eb67b640 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        159ac8:	e3380000 	teq	r8, #0	; 0x0
        159acc:	11a00004 	movne	r0, r4
        159ad0:	128f1f0b 	addne	r1, pc, #44	; 0x2c
        159ad4:	1a000004 	bne	159aec <TPSPrinter::Draw1Path(path *, Point, unsigned char)+0x32c>
        159ad8:	e5d401ec 	ldrb	r0, [r4, #492]	; fField492
        159adc:	e3300000 	teq	r0, #0	; 0x0
        159ae0:	028f1f0a 	addeq	r1, pc, #40	; 0x28
        159ae4:	128f1f0b 	addne	r1, pc, #44	; 0x2c
        159ae8:	e1a00004 	mov	r0, r4
        159aec:	e3a02000 	mov	r2, #0	; 0x0
        159af0:	eb67b635 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        159af4:	e59d0070 	ldr	r0, [sp, #112]
        159af8:	eb67df76 	bl	1b518d8 <$NextPath(path *)>
        159afc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        159b00:	43500000 	cmpmi	r0, #0	; 0x0
        159b04:	0d737472 	ldceql	4, cr7, [r3, -#456]!
        159b08:	6f6b650d 	swivs	0x006b650d
        159b0c:	00000000 	andeq	r0, r0, r0
        159b10:	0d66696c 	stceql	9, cr6, [r6, -#432]!
        159b14:	6c0d0000 	stcvs	0, cr0, [sp]
        159b18:	0d506174 	ldfeqe	f6, [r0, -#464]
        159b1c:	7465726e 	strvcbt	r7, [r5], -#622	; fField622
        159b20:	46496c6c 	strmib	r6, [r9], -ip, ror #24
        159b24:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)
 * Address: 00159b28
 */
TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &) {
    /*
        159b28:	e1a0c00d 	mov	ip, sp
        159b2c:	e92dd87f 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, fp, ip, lr, pc}
        159b30:	e24cb004 	sub	fp, ip, #4	; 0x4
        159b34:	e1a04000 	mov	r4, r0
        159b38:	e1a00003 	mov	r0, r3
        159b3c:	e24dd070 	sub	sp, sp, #112	; 0x70
        159b40:	e28d2068 	add	r2, sp, #104	; 0x68
        159b44:	e8911008 	ldmia	r1, {r3, ip}
        159b48:	e8821008 	stmia	r2, {r3, ip}
        159b4c:	e28d1060 	add	r1, sp, #96	; 0x60
        159b50:	e8901008 	ldmia	r0, {r3, ip}
        159b54:	e8811008 	stmia	r1, {r3, ip}
        159b58:	e28460e8 	add	r6, r4, #232	; 0xe8
        159b5c:	e59d0064 	ldr	r0, [sp, #100]
        159b60:	e59d106c 	ldr	r1, [sp, #108]
        159b64:	e1310000 	teq	r1, r0
        159b68:	159d0060 	ldrne	r0, [sp, #96]
        159b6c:	159d1068 	ldrne	r1, [sp, #104]
        159b70:	11310000 	teqne	r1, r0
        159b74:	e59d006c 	ldr	r0, [sp, #108]
        159b78:	e59d1064 	ldr	r1, [sp, #100]
        159b7c:	1a00005d 	bne	159cf8 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x1d0>
        159b80:	e1510000 	cmp	r1, r0
        159b84:	a59d0068 	ldrge	r0, [sp, #104]
        159b88:	a59d1060 	ldrge	r1, [sp, #96]
        159b8c:	a1510000 	cmpge	r1, r0
        159b90:	b28d1060 	addlt	r1, sp, #96	; 0x60
        159b94:	b28d0068 	addlt	r0, sp, #104	; 0x68
        159b98:	bb67adcc 	bllt	1b452d0 <$SwapPoint__FR6FPointT1>
        159b9c:	e59d0064 	ldr	r0, [sp, #100]
        159ba0:	e59d106c 	ldr	r1, [sp, #108]
        159ba4:	e1310000 	teq	r1, r0
        159ba8:	1a00002a 	bne	159c58 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x130>
        159bac:	e51b001e 	ldr	r0, [fp, -#30]
        159bb0:	e1a00800 	mov	r0, r0, lsl #16
        159bb4:	e3a01802 	mov	r1, #131072	; 0x20000
        159bb8:	eb6a1d40 	bl	1be10c0 <$FixedDivide>
        159bbc:	e59d1064 	ldr	r1, [sp, #100]
        159bc0:	e0801001 	add	r1, r0, r1
        159bc4:	e28d2010 	add	r2, sp, #16	; 0x10
        159bc8:	e1a00004 	mov	r0, r4
        159bcc:	eb679922 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159bd0:	e1a03000 	mov	r3, r0
        159bd4:	e92d0008 	stmdb	sp!, {r3}
        159bd8:	e51b1020 	ldr	r1, [fp, -#32]
        159bdc:	e59d0064 	ldr	r0, [sp, #100]
        159be0:	e0801801 	add	r1, r0, r1, lsl #16
        159be4:	e28d2024 	add	r2, sp, #36	; 0x24
        159be8:	e1a00004 	mov	r0, r4
        159bec:	eb67991a 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159bf0:	e1a03000 	mov	r3, r0
        159bf4:	e92d0008 	stmdb	sp!, {r3}
        159bf8:	e51b001e 	ldr	r0, [fp, -#30]
        159bfc:	e1a00800 	mov	r0, r0, lsl #16
        159c00:	e3a01802 	mov	r1, #131072	; 0x20000
        159c04:	eb6a1d2d 	bl	1be10c0 <$FixedDivide>
        159c08:	e59d1074 	ldr	r1, [sp, #116]
        159c0c:	e0801001 	add	r1, r0, r1
        159c10:	e28d2048 	add	r2, sp, #72	; 0x48
        159c14:	e1a00004 	mov	r0, r4
        159c18:	eb67990f 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159c1c:	e1a05000 	mov	r5, r0
        159c20:	e28d2058 	add	r2, sp, #88	; 0x58
        159c24:	e1a00004 	mov	r0, r4
        159c28:	e59d1070 	ldr	r1, [sp, #112]
        159c2c:	eb67990a 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159c30:	e1a02000 	mov	r2, r0
        159c34:	e1a00006 	mov	r0, r6
        159c38:	e28f1f00 	add	r1, pc, #0	; 0x0
        159c3c:	ea000029 	b	159ce8 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x1c0>
        159c40:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        159c44:	73204d76 	teqvc	r0, #7552	; 0x1d80
        159c48:	546f2025 	strplbt	r2, [pc], #25	; 159c50 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x128>
        159c4c:	73202573 	teqvc	r0, #482344960	; 0x1cc00000
        159c50:	204c6e54 	subcs	r6, ip, r4, asr lr
        159c54:	6f200000 	swivs	0x00200000
        159c58:	e59d1064 	ldr	r1, [sp, #100]
        159c5c:	e51b001e 	ldr	r0, [fp, -#30]
        159c60:	e0811800 	add	r1, r1, r0, lsl #16
        159c64:	e28d2010 	add	r2, sp, #16	; 0x10
        159c68:	e1a00004 	mov	r0, r4
        159c6c:	eb6798fa 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159c70:	e1a03000 	mov	r3, r0
        159c74:	e92d0008 	stmdb	sp!, {r3}
        159c78:	e51b0020 	ldr	r0, [fp, -#32]
        159c7c:	e1a00800 	mov	r0, r0, lsl #16
        159c80:	e3a01802 	mov	r1, #131072	; 0x20000
        159c84:	eb6a1d0d 	bl	1be10c0 <$FixedDivide>
        159c88:	e59d1064 	ldr	r1, [sp, #100]
        159c8c:	e0801001 	add	r1, r0, r1
        159c90:	e28d2024 	add	r2, sp, #36	; 0x24
        159c94:	e1a00004 	mov	r0, r4
        159c98:	eb6798ef 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159c9c:	e1a03000 	mov	r3, r0
        159ca0:	e92d0008 	stmdb	sp!, {r3}
        159ca4:	e59d1074 	ldr	r1, [sp, #116]
        159ca8:	e28d2048 	add	r2, sp, #72	; 0x48
        159cac:	e1a00004 	mov	r0, r4
        159cb0:	eb6798e9 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159cb4:	e1a05000 	mov	r5, r0
        159cb8:	e51b0020 	ldr	r0, [fp, -#32]
        159cbc:	e1a00800 	mov	r0, r0, lsl #16
        159cc0:	e3a01802 	mov	r1, #131072	; 0x20000
        159cc4:	eb6a1cfd 	bl	1be10c0 <$FixedDivide>
        159cc8:	e59d1070 	ldr	r1, [sp, #112]
        159ccc:	e0801001 	add	r1, r0, r1
        159cd0:	e28d2058 	add	r2, sp, #88	; 0x58
        159cd4:	e1a00004 	mov	r0, r4
        159cd8:	eb6798df 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159cdc:	e1a02000 	mov	r2, r0
        159ce0:	e1a00006 	mov	r0, r6
        159ce4:	e24f1f2b 	sub	r1, pc, #172	; 0xac
        159ce8:	e1a03005 	mov	r3, r5
        159cec:	eb696f68 	bl	1bb5a94 <$sprintf>
        159cf0:	e28dd008 	add	sp, sp, #8	; 0x8
        159cf4:	ea00005f 	b	159e78 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x350>
        159cf8:	e1510000 	cmp	r1, r0
        159cfc:	b28d1060 	addlt	r1, sp, #96	; 0x60
        159d00:	b28d0068 	addlt	r0, sp, #104	; 0x68
        159d04:	bb67ad71 	bllt	1b452d0 <$SwapPoint__FR6FPointT1>
        159d08:	e1a0300d 	mov	r3, sp
        159d0c:	e28d2010 	add	r2, sp, #16	; 0x10
        159d10:	e28d1020 	add	r1, sp, #32	; 0x20
        159d14:	e28d0030 	add	r0, sp, #48	; 0x30
        159d18:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        159d1c:	e28d3050 	add	r3, sp, #80	; 0x50
        159d20:	e28d2060 	add	r2, sp, #96	; 0x60
        159d24:	e92d000c 	stmdb	sp!, {r2, r3}
        159d28:	e28d2078 	add	r2, sp, #120	; 0x78
        159d2c:	e28d1080 	add	r1, sp, #128	; 0x80
        159d30:	e1a00004 	mov	r0, r4
        159d34:	e51b3020 	ldr	r3, [fp, -#32]
        159d38:	eb67ad59 	bl	1b452a4 <TPSPrinter::$SetupLineStrings(FPoint const &, FPoint const &, Point, char *, char *, char *, char *, char *, char *)>
        159d3c:	e28dd018 	add	sp, sp, #24	; 0x18
        159d40:	e59d0068 	ldr	r0, [sp, #104]
        159d44:	e59d1060 	ldr	r1, [sp, #96]
        159d48:	e1510000 	cmp	r1, r0
        159d4c:	aa00002e 	bge	159e0c <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x2e4>
        159d50:	e28d3040 	add	r3, sp, #64	; 0x40
        159d54:	e28d2050 	add	r2, sp, #80	; 0x50
        159d58:	e51b0020 	ldr	r0, [fp, -#32]
        159d5c:	e1a00840 	mov	r0, r0, asr #16
        159d60:	e2601000 	rsb	r1, r0, #0	; 0x0
        159d64:	e3a00000 	mov	r0, #0	; 0x0
        159d68:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        159d6c:	e3a03000 	mov	r3, #0	; 0x0
        159d70:	e51b001e 	ldr	r0, [fp, -#30]
        159d74:	e1a00840 	mov	r0, r0, asr #16
        159d78:	e2602000 	rsb	r2, r0, #0	; 0x0
        159d7c:	e28d1020 	add	r1, sp, #32	; 0x20
        159d80:	e28d0030 	add	r0, sp, #48	; 0x30
        159d84:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        159d88:	e51b3020 	ldr	r3, [fp, -#32]
        159d8c:	e1a03843 	mov	r3, r3, asr #16
        159d90:	e3a02000 	mov	r2, #0	; 0x0
        159d94:	e3a01000 	mov	r1, #0	; 0x0
        159d98:	e51b001e 	ldr	r0, [fp, -#30]
        159d9c:	e1a00840 	mov	r0, r0, asr #16
        159da0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        159da4:	e1a00006 	mov	r0, r6
        159da8:	e28d3070 	add	r3, sp, #112	; 0x70
        159dac:	e28d2080 	add	r2, sp, #128	; 0x80
        159db0:	e28f1f00 	add	r1, pc, #0	; 0x0
        159db4:	ea00002d 	b	159e70 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x348>
        159db8:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        159dbc:	73204d76 	teqvc	r0, #7552	; 0x1d80
        159dc0:	546f2025 	strplbt	r2, [pc], #25	; 159dc8 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x2a0>
        159dc4:	64202564 	strvst	r2, [r0], -#1380
        159dc8:	20524c6e 	subcss	r4, r2, lr, ror #24
        159dcc:	546f2025 	strplbt	r2, [pc], #25	; 159dd4 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x2ac>
        159dd0:	64202564 	strvst	r2, [r0], -#1380
        159dd4:	20524c6e 	subcss	r4, r2, lr, ror #24
        159dd8:	546f2025 	strplbt	r2, [pc], #25	; 159de0 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x2b8>
        159ddc:	73202573 	teqvc	r0, #482344960	; 0x1cc00000
        159de0:	204c6e54 	subcs	r6, ip, r4, asr lr
        159de4:	6f202564 	swivs	0x00202564
        159de8:	20256420 	eorcs	r6, r5, r0, lsr #8
        159dec:	524c6e54 	subpl	r6, ip, #1344	; 0x540
        159df0:	6f202564 	swivs	0x00202564
        159df4:	20256420 	eorcs	r6, r5, r0, lsr #8
        159df8:	524c6e54 	subpl	r6, ip, #1344	; 0x540
        159dfc:	6f202573 	swivs	0x00202573
        159e00:	20257320 	eorcs	r7, r5, r0, lsr #6
        159e04:	4c6e546f 	stcmil	4, cr5, [lr], -#444
        159e08:	20000000 	andcs	r0, r0, r0
        159e0c:	e51b0020 	ldr	r0, [fp, -#32]
        159e10:	e1a00840 	mov	r0, r0, asr #16
        159e14:	e2603000 	rsb	r3, r0, #0	; 0x0
        159e18:	e3a02000 	mov	r2, #0	; 0x0
        159e1c:	e1a0100d 	mov	r1, sp
        159e20:	e28d0050 	add	r0, sp, #80	; 0x50
        159e24:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        159e28:	e3a03000 	mov	r3, #0	; 0x0
        159e2c:	e51b001e 	ldr	r0, [fp, -#30]
        159e30:	e1a00840 	mov	r0, r0, asr #16
        159e34:	e2602000 	rsb	r2, r0, #0	; 0x0
        159e38:	e51b1020 	ldr	r1, [fp, -#32]
        159e3c:	e1a01841 	mov	r1, r1, asr #16
        159e40:	e3a00000 	mov	r0, #0	; 0x0
        159e44:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        159e48:	e28d3050 	add	r3, sp, #80	; 0x50
        159e4c:	e28d2040 	add	r2, sp, #64	; 0x40
        159e50:	e3a01000 	mov	r1, #0	; 0x0
        159e54:	e51b001e 	ldr	r0, [fp, -#30]
        159e58:	e1a00840 	mov	r0, r0, asr #16
        159e5c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        159e60:	e1a00006 	mov	r0, r6
        159e64:	e28d3070 	add	r3, sp, #112	; 0x70
        159e68:	e28d2080 	add	r2, sp, #128	; 0x80
        159e6c:	e28f1f06 	add	r1, pc, #24	; 0x18
        159e70:	eb696f07 	bl	1bb5a94 <$sprintf>
        159e74:	e28dd030 	add	sp, sp, #48	; 0x30
        159e78:	e1a01006 	mov	r1, r6
        159e7c:	e1a00004 	mov	r0, r4
        159e80:	e3a02000 	mov	r2, #0	; 0x0
        159e84:	eb67b550 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        159e88:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        159e8c:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        159e90:	73204d76 	teqvc	r0, #7552	; 0x1d80
        159e94:	546f2025 	strplbt	r2, [pc], #25	; 159e9c <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x374>
        159e98:	64202564 	strvst	r2, [r0], -#1380
        159e9c:	20524c6e 	subcss	r4, r2, lr, ror #24
        159ea0:	546f2025 	strplbt	r2, [pc], #25	; 159ea8 <TPSPrinter::Draw1QDLine(FPoint const &, Point, FPoint const &)+0x380>
        159ea4:	73202573 	teqvc	r0, #482344960	; 0x1cc00000
        159ea8:	204c6e54 	subcs	r6, ip, r4, asr lr
        159eac:	6f202564 	swivs	0x00202564
        159eb0:	20256420 	eorcs	r6, r5, r0, lsr #8
        159eb4:	524c6e54 	subpl	r6, ip, #1344	; 0x540
        159eb8:	6f202564 	swivs	0x00202564
        159ebc:	20256420 	eorcs	r6, r5, r0, lsr #8
        159ec0:	524c6e54 	subpl	r6, ip, #1344	; 0x540
        159ec4:	6f202573 	swivs	0x00202573
        159ec8:	20257320 	eorcs	r7, r5, r0, lsr #6
        159ecc:	4c6e546f 	stcmil	4, cr5, [lr], -#444
        159ed0:	20256420 	eorcs	r6, r5, r0, lsr #8
        159ed4:	25642052 	strcsb	r2, [r4, -#82]!
        159ed8:	4c6e546f 	stcmil	4, cr5, [lr], -#444
        159edc:	20000000 	andcs	r0, r0, r0
    */
}

/**
 * Symbol: TPSPrinter::DrawAnyArc(Rect *, Point, long, long, unsigned char, unsigned char)
 * Address: 00159ee0
 */
TPSPrinter::DrawAnyArc(Rect *, Point, long, long, unsigned char, unsigned char) {
    /*
        159ee0:	e1a0c00d 	mov	ip, sp
        159ee4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        159ee8:	e24cb004 	sub	fp, ip, #4	; 0x4
        159eec:	e1a04002 	mov	r4, r2
        159ef0:	e1a05000 	mov	r5, r0
        159ef4:	e1a06001 	mov	r6, r1
        159ef8:	e1a07003 	mov	r7, r3
        159efc:	e59b1008 	ldr	r1, [fp, #8]
        159f00:	e20180ff 	and	r8, r1, #255	; 0xff
        159f04:	e59b000c 	ldr	r0, [fp, #12]	; fField12
        159f08:	e21090ff 	ands	r9, r0, #255	; 0xff
        159f0c:	e59ba004 	ldr	sl, [fp, #4]
        159f10:	11a00005 	movne	r0, r5
        159f14:	11a01004 	movne	r1, r4
        159f18:	1b67ace2 	blne	1b452a8 <TPSPrinter::$SetupPen(Point)>
        159f1c:	e1b00008 	movs	r0, r8
        159f20:	e28580e8 	add	r8, r5, #232	; 0xe8
        159f24:	0a000004 	beq	159f3c <TPSPrinter::DrawAnyArc(Rect *, Point, long, long, unsigned char, unsigned char)+0x5c>
        159f28:	e1a01006 	mov	r1, r6
        159f2c:	e1a00005 	mov	r0, r5
        159f30:	e1a02004 	mov	r2, r4
        159f34:	eb67983e 	bl	1b40034 <TPSPrinter::$EmitInsetRect(Rect *, Point)>
        159f38:	ea000036 	b	15a018 <TPSPrinter::DrawAnyArc(Rect *, Point, long, long, unsigned char, unsigned char)+0x138>
        159f3c:	e3390000 	teq	r9, #0	; 0x0
        159f40:	1a000023 	bne	159fd4 <TPSPrinter::DrawAnyArc(Rect *, Point, long, long, unsigned char, unsigned char)+0xf4>
        159f44:	e24dd020 	sub	sp, sp, #32	; 0x20
        159f48:	e5961004 	ldr	r1, [r6, #4]
        159f4c:	e1a01821 	mov	r1, r1, lsr #16
        159f50:	e5960000 	ldr	r0, [r6]
        159f54:	e1a00820 	mov	r0, r0, lsr #16
        159f58:	e0810000 	add	r0, r1, r0
        159f5c:	e1a00800 	mov	r0, r0, lsl #16
        159f60:	e3a01802 	mov	r1, #131072	; 0x20000
        159f64:	eb6a1c55 	bl	1be10c0 <$FixedDivide>
        159f68:	e1a01000 	mov	r1, r0
        159f6c:	e1a0200d 	mov	r2, sp
        159f70:	e1a00005 	mov	r0, r5
        159f74:	eb679838 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159f78:	e1a04000 	mov	r4, r0
        159f7c:	e5960002 	ldr	r0, [r6, #2]
        159f80:	e1a00820 	mov	r0, r0, lsr #16
        159f84:	e5961006 	ldr	r1, [r6, #6]
        159f88:	e1a01821 	mov	r1, r1, lsr #16
        159f8c:	e0800001 	add	r0, r0, r1
        159f90:	e1a00800 	mov	r0, r0, lsl #16
        159f94:	e3a01802 	mov	r1, #131072	; 0x20000
        159f98:	eb6a1c48 	bl	1be10c0 <$FixedDivide>
        159f9c:	e1a01000 	mov	r1, r0
        159fa0:	e28d2010 	add	r2, sp, #16	; 0x10
        159fa4:	e1a00005 	mov	r0, r5
        159fa8:	eb67982b 	bl	1b4005c <TPSPrinter::$FixedToString(long, char *)>
        159fac:	e1a02000 	mov	r2, r0
        159fb0:	e1a00008 	mov	r0, r8
        159fb4:	e28f1f2a 	add	r1, pc, #168	; 0xa8
        159fb8:	e1a03004 	mov	r3, r4
        159fbc:	eb696eb4 	bl	1bb5a94 <$sprintf>
        159fc0:	e1a01008 	mov	r1, r8
        159fc4:	e1a00005 	mov	r0, r5
        159fc8:	e3a02000 	mov	r2, #0	; 0x0
        159fcc:	eb67b4fe 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        159fd0:	e28dd020 	add	sp, sp, #32	; 0x20
        159fd4:	e5963006 	ldr	r3, [r6, #6]
        159fd8:	e1a03843 	mov	r3, r3, asr #16
        159fdc:	e5962004 	ldr	r2, [r6, #4]
        159fe0:	e1a02842 	mov	r2, r2, asr #16
        159fe4:	e92d000c 	stmdb	sp!, {r2, r3}
        159fe8:	e5963002 	ldr	r3, [r6, #2]
        159fec:	e1a03843 	mov	r3, r3, asr #16
        159ff0:	e1a00008 	mov	r0, r8
        159ff4:	e5962000 	ldr	r2, [r6]
        159ff8:	e1a02842 	mov	r2, r2, asr #16
        159ffc:	e28f1f1b 	add	r1, pc, #108	; 0x6c
        15a000:	eb696ea3 	bl	1bb5a94 <$sprintf>
        15a004:	e28dd008 	add	sp, sp, #8	; 0x8
        15a008:	e1a01008 	mov	r1, r8
        15a00c:	e1a00005 	mov	r0, r5
        15a010:	e3a02000 	mov	r2, #0	; 0x0
        15a014:	eb67b4ec 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        15a018:	e1a00008 	mov	r0, r8
        15a01c:	e1a0300a 	mov	r3, sl
        15a020:	e1a02007 	mov	r2, r7
        15a024:	e28f1f15 	add	r1, pc, #84	; 0x54
        15a028:	eb696e99 	bl	1bb5a94 <$sprintf>
        15a02c:	e1a01008 	mov	r1, r8
        15a030:	e1a00005 	mov	r0, r5
        15a034:	e3a02000 	mov	r2, #0	; 0x0
        15a038:	eb67b4e3 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        15a03c:	e3390000 	teq	r9, #0	; 0x0
        15a040:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        15a044:	e5d501ec 	ldrb	r0, [r5, #492]	; fField492
        15a048:	e3300000 	teq	r0, #0	; 0x0
        15a04c:	028f1f10 	addeq	r1, pc, #64	; 0x40
        15a050:	128f1f11 	addne	r1, pc, #68	; 0x44
        15a054:	e1a00005 	mov	r0, r5
        15a058:	e3a02000 	mov	r2, #0	; 0x0
        15a05c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        15a060:	ea67b4d9 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        15a064:	25732025 	ldrcsb	r2, [r3, -#37]!	; fField37
        15a068:	73204d76 	teqvc	r0, #7552	; 0x1d80
        15a06c:	546f0d00 	strplbt	r0, [pc], #d00	; 15a074 <TPSPrinter::DrawAnyArc(Rect *, Point, long, long, unsigned char, unsigned char)+0x194>
        15a070:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        15a074:	64202564 	strvst	r2, [r0], -#1380
        15a078:	20256420 	eorcs	r6, r5, r0, lsr #8
        15a07c:	00000000 	andeq	r0, r0, r0
        15a080:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        15a084:	64204672 	strvst	r4, [r0], -#1650
        15a088:	616d654f 	cmnvs	sp, pc, asr #10
        15a08c:	76616c20 	strvcbt	r6, [r1], -r0, lsr #24
        15a090:	00000000 	andeq	r0, r0, r0
        15a094:	66696c6c 	strvsbt	r6, [r9], -ip, ror #24
        15a098:	0d000000 	stceq	0, cr0, [r0]
        15a09c:	50617474 	rsbpl	r7, r1, r4, ror r4
        15a0a0:	65726e46 	ldrvsb	r6, [r2, -#3654]!
        15a0a4:	696c6c0d 	stmvsdb	ip!, {r0, r2, r3, sl, fp, sp, lr}^
        15a0a8:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: Sizeof__10TPSPrinterSFv
 * Address: 0021ac14
 */
void TPSPrinter::Sizeof() {
    /*
        21ac14:	e3a00e1f 	mov	r0, #496	; 0x1f0
        21ac18:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPrinter::CancelJob(unsigned char)
 * Address: 0021ac1c
 */
TPSPrinter::CancelJob(unsigned char) {
    /*
        21ac1c:	e1a0c00d 	mov	ip, sp
        21ac20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21ac24:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ac28:	e1a04000 	mov	r4, r0
        21ac2c:	e20150ff 	and	r5, r1, #255	; 0xff
        21ac30:	e5900098 	ldr	r0, [r0, #152]	; fField152
        21ac34:	e1a01005 	mov	r1, r5
        21ac38:	eb6490b1 	bl	1b3ef04 <TPSPrinterDriver::$CancelJob(unsigned char)>
        21ac3c:	e3350000 	teq	r5, #0	; 0x0
        21ac40:	03a0001c 	moveq	r0, #28	; 0x1c
        21ac44:	02400b2b 	subeq	r0, r0, #44032	; 0xac00
        21ac48:	05a40010 	streq	r0, [r4, #16]!	; fField16
        21ac4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::ErrorIsPrintingError(long)
 * Address: 0021ac50
 */
TPSPrinter::ErrorIsPrintingError(long) {
    /*
        21ac50:	e1a0c00d 	mov	ip, sp
        21ac54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21ac58:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ac5c:	e1a04000 	mov	r4, r0
        21ac60:	e1a05001 	mov	r5, r1
        21ac64:	eb6494f6 	bl	1b40044 <TPSPrinter::$ErrorIsFatal(long)>
        21ac68:	e3300000 	teq	r0, #0	; 0x0
        21ac6c:	1a000004 	bne	21ac84 <TPSPrinter::ErrorIsPrintingError(long)+0x34>
        21ac70:	e1a01005 	mov	r1, r5
        21ac74:	e1a00004 	mov	r0, r4
        21ac78:	eb6494f4 	bl	1b40050 <TPSPrinter::$ErrorIsProblem(long)>
        21ac7c:	e3300000 	teq	r0, #0	; 0x0
        21ac80:	0a000001 	beq	21ac8c <TPSPrinter::ErrorIsPrintingError(long)+0x3c>
        21ac84:	e3a00001 	mov	r0, #1	; 0x1
        21ac88:	ea000000 	b	21ac90 <TPSPrinter::ErrorIsPrintingError(long)+0x40>
        21ac8c:	e3a00000 	mov	r0, #0	; 0x0
        21ac90:	e20000ff 	and	r0, r0, #255	; 0xff
        21ac94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::ErrorIsProblem(long)
 * Address: 0021ac98
 */
TPSPrinter::ErrorIsProblem(long) {
    /*
        21ac98:	e291cb2b 	adds	ip, r1, #44032	; 0xac00
        21ac9c:	d37c00a7 	cmnle	ip, #167	; 0xa7
        21aca0:	ba000003 	blt	21acb4 <TPSPrinter::ErrorIsProblem(long)+0x1c>
        21aca4:	e291cb2b 	adds	ip, r1, #44032	; 0xac00
        21aca8:	d37c0044 	cmnle	ip, #68	; 0x44
        21acac:	d3a00001 	movle	r0, #1	; 0x1
        21acb0:	da000000 	ble	21acb8 <TPSPrinter::ErrorIsProblem(long)+0x20>
        21acb4:	e3a00000 	mov	r0, #0	; 0x0
        21acb8:	e20000ff 	and	r0, r0, #255	; 0xff
        21acbc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPrinter::GetDocTitle(RefVar const &, char *)
 * Address: 0021acc0
 */
TPSPrinter::GetDocTitle(RefVar const &, char *) {
    /*
        21acc0:	e1a0c00d 	mov	ip, sp
        21acc4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21acc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21accc:	e1a00001 	mov	r0, r1
        21acd0:	e1a04002 	mov	r4, r2
        21acd4:	e24dd004 	sub	sp, sp, #4	; 0x4
        21acd8:	e59f1044 	ldr	r1, [pc, #44]	; 21ad24 <TPSPrinter::GetDocTitle(RefVar const &, char *)+0x64>
        21acdc:	e5911000 	ldr	r1, [r1]
        21ace0:	e5911000 	ldr	r1, [r1]
        21ace4:	e5900000 	ldr	r0, [r0]
        21ace8:	e5900000 	ldr	r0, [r0]
        21acec:	eb66a55b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        21acf0:	eb669d15 	bl	1bc214c <$AllocateRefHandle(long)>
        21acf4:	e58d0000 	str	r0, [sp]
        21acf8:	e5900000 	ldr	r0, [r0]
        21acfc:	e3a01000 	mov	r1, #0	; 0x0
        21ad00:	e3300002 	teq	r0, #2	; 0x2
        21ad04:	0a000007 	beq	21ad28 <TPSPrinter::GetDocTitle(RefVar const &, char *)+0x68>
        21ad08:	e1a0000d 	mov	r0, sp
        21ad0c:	eb66a11c 	bl	1bc3184 <$GetCString(RefVar const &)>
        21ad10:	e1a01004 	mov	r1, r4
        21ad14:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        21ad18:	e3a02001 	mov	r2, #1	; 0x1
        21ad1c:	eb673197 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        21ad20:	ea000001 	b	21ad2c <TPSPrinter::GetDocTitle(RefVar const &, char *)+0x6c>
        21ad24:	00684b90 	streqb	r4, [r8], -#176
        21ad28:	e5c41000 	strb	r1, [r4]
        21ad2c:	e59d0000 	ldr	r0, [sp]
        21ad30:	eb66a121 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21ad34:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::GetPageInfo(PrPageInfo *)
 * Address: 0021ad38
 */
TPSPrinter::GetPageInfo(PrPageInfo *) {
    /*
        21ad38:	e1a0c00d 	mov	ip, sp
        21ad3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21ad40:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ad44:	e1a04000 	mov	r4, r0
        21ad48:	e1a05001 	mov	r5, r1
        21ad4c:	e5900098 	ldr	r0, [r0, #152]	; fField152
        21ad50:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21ad54:	e59f1038 	ldr	r1, [pc, #38]	; 21ad94 <TPSPrinter::GetPageInfo(PrPageInfo *)+0x5c>
        21ad58:	e5911000 	ldr	r1, [r1]
        21ad5c:	e5911000 	ldr	r1, [r1]
        21ad60:	e5900008 	ldr	r0, [r0, #8]
        21ad64:	e5900000 	ldr	r0, [r0]
        21ad68:	eb66a530 	bl	1bc4230 <$EQRef__FlT1>
        21ad6c:	e1b02000 	movs	r2, r0
        21ad70:	e3a01009 	mov	r1, #9	; 0x9
        21ad74:	e3a0000c 	mov	r0, #12	; 0xc
        21ad78:	0a000006 	beq	21ad98 <TPSPrinter::GetPageInfo(PrPageInfo *)+0x60>
        21ad7c:	e3a0201b 	mov	r2, #27	; 0x1b
        21ad80:	e5c420e3 	strb	r2, [r4, #227]	; fField227
        21ad84:	e5c410e2 	strb	r1, [r4, #226]	; fField226
        21ad88:	e3a010fb 	mov	r1, #251	; 0xfb
        21ad8c:	e2811b03 	add	r1, r1, #3072	; 0xc00
        21ad90:	ea000005 	b	21adac <TPSPrinter::GetPageInfo(PrPageInfo *)+0x74>
        21ad94:	00681d08 	rsbeq	r1, r8, r8, lsl #26
        21ad98:	e3a02060 	mov	r2, #96	; 0x60
        21ad9c:	e5c420e3 	strb	r2, [r4, #227]	; fField227
        21ada0:	e5c410e2 	strb	r1, [r4, #226]	; fField226
        21ada4:	e3a010a1 	mov	r1, #161	; 0xa1
        21ada8:	e2811b03 	add	r1, r1, #3072	; 0xc00
        21adac:	e5c410e1 	strb	r1, [r4, #225]	; fField225
        21adb0:	e5c400e0 	strb	r0, [r4, #224]	; fField224
        21adb4:	e2850008 	add	r0, r5, #8	; 0x8
        21adb8:	e59410e0 	ldr	r1, [r4, #224]	; fField224
        21adbc:	e5801000 	str	r1, [r0]
        21adc0:	e3a0074b 	mov	r0, #19660800	; 0x12c0000
        21adc4:	e5850004 	str	r0, [r5, #4]
        21adc8:	e5850000 	str	r0, [r5]
        21adcc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::GetStatus(void)
 * Address: 0021add0
 */
TPSPrinter::GetStatus(void) {
    /*
        21add0:	e1a0c00d 	mov	ip, sp
        21add4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21add8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21addc:	e1a04000 	mov	r4, r0
        21ade0:	e5900098 	ldr	r0, [r0, #152]	; fField152
        21ade4:	eb6498b2 	bl	1b410b4 <TPSPrinterDriver::$GetStatus(void)>
        21ade8:	e5a40010 	str	r0, [r4, #16]!	; fField16
        21adec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::GetUserName(RefVar const &, char *)
 * Address: 0021adf0
 */
TPSPrinter::GetUserName(RefVar const &, char *) {
    /*
        21adf0:	e1a0c00d 	mov	ip, sp
        21adf4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21adf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21adfc:	e1a04002 	mov	r4, r2
        21ae00:	e24dd004 	sub	sp, sp, #4	; 0x4
        21ae04:	e59f0034 	ldr	r0, [pc, #34]	; 21ae40 <TPSPrinter::GetUserName(RefVar const &, char *)+0x50>
        21ae08:	eb61ef3d 	bl	1a96b04 <$GetPreference(RefVar const &)>
        21ae0c:	eb669cce 	bl	1bc214c <$AllocateRefHandle(long)>
        21ae10:	e58d0000 	str	r0, [sp]
        21ae14:	e5900000 	ldr	r0, [r0]
        21ae18:	e3a01000 	mov	r1, #0	; 0x0
        21ae1c:	e3300002 	teq	r0, #2	; 0x2
        21ae20:	0a000007 	beq	21ae44 <TPSPrinter::GetUserName(RefVar const &, char *)+0x54>
        21ae24:	e1a0000d 	mov	r0, sp
        21ae28:	eb66a0d5 	bl	1bc3184 <$GetCString(RefVar const &)>
        21ae2c:	e1a01004 	mov	r1, r4
        21ae30:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        21ae34:	e3a02001 	mov	r2, #1	; 0x1
        21ae38:	eb673150 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        21ae3c:	ea000001 	b	21ae48 <TPSPrinter::GetUserName(RefVar const &, char *)+0x58>
        21ae40:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        21ae44:	e5c41000 	strb	r1, [r4]
        21ae48:	e59d0000 	ldr	r0, [sp]
        21ae4c:	eb66a0da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21ae50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::HandleError(long)
 * Address: 0021ae54
 */
TPSPrinter::HandleError(long) {
    /*
        21ae54:	e1a0c00d 	mov	ip, sp
        21ae58:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21ae5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ae60:	e1a04000 	mov	r4, r0
        21ae64:	e1a05001 	mov	r5, r1
        21ae68:	eb649477 	bl	1b4004c <TPSPrinter::$ErrorIsPrintingError(long)>
        21ae6c:	e3300000 	teq	r0, #0	; 0x0
        21ae70:	11a01005 	movne	r1, r5
        21ae74:	11a00004 	movne	r0, r4
        21ae78:	1b64a904 	blne	1b45290 <TPSPrinter::$SetSoftError(long)>
        21ae7c:	e1a01005 	mov	r1, r5
        21ae80:	e1a00004 	mov	r0, r4
        21ae84:	eb64946e 	bl	1b40044 <TPSPrinter::$ErrorIsFatal(long)>
        21ae88:	e3300000 	teq	r0, #0	; 0x0
        21ae8c:	1a000003 	bne	21aea0 <TPSPrinter::HandleError(long)+0x4c>
        21ae90:	e1a00004 	mov	r0, r4
        21ae94:	eb64a0c3 	bl	1b431a8 <TPSPrinter::$ProblemIsFatal(void)>
        21ae98:	e3300000 	teq	r0, #0	; 0x0
        21ae9c:	0a000001 	beq	21aea8 <TPSPrinter::HandleError(long)+0x54>
        21aea0:	e3a00001 	mov	r0, #1	; 0x1
        21aea4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        21aea8:	e1a01005 	mov	r1, r5
        21aeac:	e1a00004 	mov	r0, r4
        21aeb0:	eb649466 	bl	1b40050 <TPSPrinter::$ErrorIsProblem(long)>
        21aeb4:	e3300000 	teq	r0, #0	; 0x0
        21aeb8:	11a01005 	movne	r1, r5
        21aebc:	11a00004 	movne	r0, r4
        21aec0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        21aec4:	1a649447 	bne	1b3ffe8 <TPSPrinter::$DoHandleProblem(long)>
        21aec8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::IsProblemResolved(void)
 * Address: 0021aecc
 */
TPSPrinter::IsProblemResolved(void) {
    /*
        21aecc:	e5900098 	ldr	r0, [r0, #152]	; fField152
        21aed0:	ea649c8f 	b	1b42114 <TPSPrinterDriver::$IsProblemResolved(void)>
    */
}

/**
 * Symbol: TPSPrinter::MakeTextPSFriendly(char *)
 * Address: 0021aed4
 */
TPSPrinter::MakeTextPSFriendly(char *) {
    /*
        21aed4:	e1a0c00d 	mov	ip, sp
        21aed8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21aedc:	e24cb004 	sub	fp, ip, #4	; 0x4
        21aee0:	e24dd064 	sub	sp, sp, #100	; 0x64
        21aee4:	e3a0e000 	mov	lr, #0	; 0x0
        21aee8:	e5d10000 	ldrb	r0, [r1]
        21aeec:	e2813001 	add	r3, r1, #1	; 0x1
        21aef0:	e3300000 	teq	r0, #0	; 0x0
        21aef4:	0a00000b 	beq	21af28 <TPSPrinter::MakeTextPSFriendly(char *)+0x54>
        21aef8:	e3a0c05c 	mov	ip, #92	; 0x5c
        21aefc:	e3300028 	teq	r0, #40	; 0x28
        21af00:	13300029 	teqne	r0, #41	; 0x29
        21af04:	1330005c 	teqne	r0, #92	; 0x5c
        21af08:	028e2001 	addeq	r2, lr, #1	; 0x1
        21af0c:	07cdc00e 	streqb	ip, [sp, lr]
        21af10:	11a0200e 	movne	r2, lr
        21af14:	e282e001 	add	lr, r2, #1	; 0x1
        21af18:	e7cd0002 	strb	r0, [sp, r2]
        21af1c:	e4d30001 	ldrb	r0, [r3], #1
        21af20:	e3300000 	teq	r0, #0	; 0x0
        21af24:	1afffff4 	bne	21aefc <TPSPrinter::MakeTextPSFriendly(char *)+0x28>
        21af28:	e3a02000 	mov	r2, #0	; 0x0
        21af2c:	e7cd200e 	strb	r2, [sp, lr]
        21af30:	e1a00001 	mov	r0, r1
        21af34:	e1a0100d 	mov	r1, sp
        21af38:	eb666adb 	bl	1bb5aac <$strcpy>
        21af3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::Open(RefVar const &)
 * Address: 0021af40
 */
TPSPrinter::Open(RefVar const &) {
    /*
        21af40:	e1a0c00d 	mov	ip, sp
        21af44:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        21af48:	e24cb004 	sub	fp, ip, #4	; 0x4
        21af4c:	e1a04000 	mov	r4, r0
        21af50:	e1a05001 	mov	r5, r1
        21af54:	eb648ff2 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        21af58:	e3300000 	teq	r0, #0	; 0x0
        21af5c:	0a000001 	beq	21af68 <TPSPrinter::Open(RefVar const &)+0x28>
        21af60:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        21af64:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        21af68:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21af6c:	e1a02005 	mov	r2, r5
        21af70:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        21af74:	e1a00004 	mov	r0, r4
        21af78:	eb64a8c8 	bl	1b452a0 <TPrinter::$SetupConnect(PrintConnect *, RefVar const &)>
        21af7c:	e3a08001 	mov	r8, #1	; 0x1
        21af80:	e59f60ec 	ldr	r6, [pc, #ec]	; 21b074 <TPSPrinter::Open(RefVar const &)+0x134>
        21af84:	e3a059ca 	mov	r5, #3309568	; 0x328000
        21af88:	e2855402 	add	r5, r5, #33554432	; 0x2000000
        21af8c:	e5c68000 	strb	r8, [r6]
        21af90:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21af94:	eb649c6d 	bl	1b42150 <TPSPrinterDriver::$Open(void)>
        21af98:	e5840010 	str	r0, [r4, #16]	; fField16
        21af9c:	e3300000 	teq	r0, #0	; 0x0
        21afa0:	13a01000 	movne	r1, #0	; 0x0
        21afa4:	03a01001 	moveq	r1, #1	; 0x1
        21afa8:	e20170ff 	and	r7, r1, #255	; 0xff
        21afac:	e3a0901d 	mov	r9, #29	; 0x1d
        21afb0:	e2499b2b 	sub	r9, r9, #44032	; 0xac00
        21afb4:	e1300009 	teq	r0, r9
        21afb8:	1a000004 	bne	21afd0 <TPSPrinter::Open(RefVar const &)+0x90>
        21afbc:	e1a01004 	mov	r1, r4
        21afc0:	e1a00005 	mov	r0, r5
        21afc4:	eb670fe1 	bl	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        21afc8:	e1a00004 	mov	r0, r4
        21afcc:	eb648fd4 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        21afd0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        21afd4:	e1300009 	teq	r0, r9
        21afd8:	0affffeb 	beq	21af8c <TPSPrinter::Open(RefVar const &)+0x4c>
        21afdc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        21afe0:	e3300000 	teq	r0, #0	; 0x0
        21afe4:	1a000015 	bne	21b040 <TPSPrinter::Open(RefVar const &)+0x100>
        21afe8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        21afec:	e1a0100d 	mov	r1, sp
        21aff0:	e1a00004 	mov	r0, r4
        21aff4:	eb649825 	bl	1b41090 <TPSPrinter::$GetPageInfo(PrPageInfo *)>
        21aff8:	e1a0100d 	mov	r1, sp
        21affc:	e1a00004 	mov	r0, r4
        21b000:	eb64a05e 	bl	1b43180 <TPrinter::$OpenPort(PrPageInfo const &)>
        21b004:	e1a00004 	mov	r0, r4
        21b008:	eb649825 	bl	1b410a4 <TPrinter::$GetPrinterPort(void)>
        21b00c:	e1a01000 	mov	r1, r0
        21b010:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21b014:	e3800c02 	orr	r0, r0, #512	; 0x200
        21b018:	e5810010 	str	r0, [r1, #16]	; fField16
        21b01c:	e1a00004 	mov	r0, r4
        21b020:	eb64a8a2 	bl	1b452b0 <TPSPrinter::$SetupPSBottlenecks(GrafPort *)>
        21b024:	e3300000 	teq	r0, #0	; 0x0
        21b028:	1a000003 	bne	21b03c <TPSPrinter::Open(RefVar const &)+0xfc>
        21b02c:	e1a00004 	mov	r0, r4
        21b030:	eb6493d3 	bl	1b3ff84 <TPrinter::$ClosePort(void)>
        21b034:	e59f003c 	ldr	r0, [pc, #3c]	; 21b078 <TPSPrinter::Open(RefVar const &)+0x138>
        21b038:	e5840010 	str	r0, [r4, #16]	; fField16
        21b03c:	e28dd00c 	add	sp, sp, #12	; 0xc
        21b040:	e5940010 	ldr	r0, [r4, #16]	; fField16
        21b044:	e3300000 	teq	r0, #0	; 0x0
        21b048:	13370000 	teqne	r7, #0	; 0x0
        21b04c:	13a01001 	movne	r1, #1	; 0x1
        21b050:	15940098 	ldrne	r0, [r4, #152]	; fField152
        21b054:	1b648fbe 	blne	1b3ef54 <TPSPrinterDriver::$Close(unsigned char)>
        21b058:	e3a00000 	mov	r0, #0	; 0x0
        21b05c:	e58400cc 	str	r0, [r4, #204]	; fField204
        21b060:	e28400d0 	add	r0, r4, #208	; 0xd0
        21b064:	eb64e25e 	bl	1b539e4 <$SetEmptyRect(Rect *)>
        21b068:	e28400d8 	add	r0, r4, #216	; 0xd8
        21b06c:	eb64e25c 	bl	1b539e4 <$SetEmptyRect(Rect *)>
        21b070:	eaffffba 	b	21af60 <TPSPrinter::Open(RefVar const &)+0x20>
        21b074:	0c100b64 	ldceq	11, cr0, [r0], -#400
        21b078:	ffff541f 	swinv	0x00ff541f
    */
}

/**
 * Symbol: TPSPrinter::Close(void)
 * Address: 0021b07c
 */
TPSPrinter::Close(void) {
    /*
        21b07c:	e1a0c00d 	mov	ip, sp
        21b080:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21b084:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b088:	e1a04000 	mov	r4, r0
        21b08c:	e5905010 	ldr	r5, [r0, #16]	; fField16
        21b090:	eb6493c2 	bl	1b3ffa0 <TPSPrinter::$ContinueIO(void)>
        21b094:	e3300000 	teq	r0, #0	; 0x0
        21b098:	11a00004 	movne	r0, r4
        21b09c:	1b64a473 	blne	1b44270 <TPSPrinter::$SendPSTrailer(void)>
        21b0a0:	e1a01005 	mov	r1, r5
        21b0a4:	e1a00004 	mov	r0, r4
        21b0a8:	eb6493e5 	bl	1b40044 <TPSPrinter::$ErrorIsFatal(long)>
        21b0ac:	e1a01000 	mov	r1, r0
        21b0b0:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21b0b4:	eb648fa6 	bl	1b3ef54 <TPSPrinterDriver::$Close(unsigned char)>
        21b0b8:	e1b05000 	movs	r5, r0
        21b0bc:	0a000005 	beq	21b0d8 <TPSPrinter::Close(void)+0x5c>
        21b0c0:	e1a01005 	mov	r1, r5
        21b0c4:	e1a00004 	mov	r0, r4
        21b0c8:	eb649802 	bl	1b410d8 <TPSPrinter::$HandleError(long)>
        21b0cc:	e3300001 	teq	r0, #1	; 0x1
        21b0d0:	13350000 	teqne	r5, #0	; 0x0
        21b0d4:	1afffff1 	bne	21b0a0 <TPSPrinter::Close(void)+0x24>
        21b0d8:	e1a00004 	mov	r0, r4
        21b0dc:	eb6497ef 	bl	1b410a0 <TPrinter::$GetPort(void)>
        21b0e0:	e1a01000 	mov	r1, r0
        21b0e4:	e1a00004 	mov	r0, r4
        21b0e8:	eb64a879 	bl	1b452d4 <TPSPrinter::$TearDownPSBottlenecks(GrafPort *)>
        21b0ec:	e1a00004 	mov	r0, r4
        21b0f0:	eb6493a3 	bl	1b3ff84 <TPrinter::$ClosePort(void)>
        21b0f4:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        21b0f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::OpenPage(void)
 * Address: 0021b0fc
 */
TPSPrinter::OpenPage(void) {
    /*
        21b0fc:	e1a0c00d 	mov	ip, sp
        21b100:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21b104:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b108:	e1a04000 	mov	r4, r0
        21b10c:	eb648f84 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        21b110:	e3300000 	teq	r0, #0	; 0x0
        21b114:	1a000069 	bne	21b2c0 <TPSPrinter::OpenPage(void)+0x1c4>
        21b118:	e1a00004 	mov	r0, r4
        21b11c:	eb64939f 	bl	1b3ffa0 <TPSPrinter::$ContinueIO(void)>
        21b120:	e3300000 	teq	r0, #0	; 0x0
        21b124:	0a000065 	beq	21b2c0 <TPSPrinter::OpenPage(void)+0x1c4>
        21b128:	e3a01002 	mov	r1, #2	; 0x2
        21b12c:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        21b130:	e5801000 	str	r1, [r0]
        21b134:	e3a00000 	mov	r0, #0	; 0x0
        21b138:	e58400a8 	str	r0, [r4, #168]	; fField168
        21b13c:	e58400ac 	str	r0, [r4, #172]	; fField172
        21b140:	e5c400a1 	strb	r0, [r4, #161]	; fField161
        21b144:	e5c400c5 	strb	r0, [r4, #197]	; fField197
        21b148:	e5c400c4 	strb	r0, [r4, #196]	; fField196
        21b14c:	e5c400c7 	strb	r0, [r4, #199]	; fField199
        21b150:	e5c400c6 	strb	r0, [r4, #198]	; fField198
        21b154:	e5c400c9 	strb	r0, [r4, #201]	; fField201
        21b158:	e5c400c8 	strb	r0, [r4, #200]	; fField200
        21b15c:	e5c400cb 	strb	r0, [r4, #203]	; fField203
        21b160:	e5c400ca 	strb	r0, [r4, #202]	; fField202
        21b164:	e5c401ec 	strb	r0, [r4, #492]	; fField492
        21b168:	e59400cc 	ldr	r0, [r4, #204]	; fField204
        21b16c:	e2800001 	add	r0, r0, #1	; 0x1
        21b170:	e58400cc 	str	r0, [r4, #204]	; fField204
        21b174:	e28400d0 	add	r0, r4, #208	; 0xd0
        21b178:	eb64e219 	bl	1b539e4 <$SetEmptyRect(Rect *)>
        21b17c:	e28400d8 	add	r0, r4, #216	; 0xd8
        21b180:	eb64e217 	bl	1b539e4 <$SetEmptyRect(Rect *)>
        21b184:	e59400cc 	ldr	r0, [r4, #204]	; fField204
        21b188:	e3300001 	teq	r0, #1	; 0x1
        21b18c:	1a000004 	bne	21b1a4 <TPSPrinter::OpenPage(void)+0xa8>
        21b190:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21b194:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21b198:	e2801004 	add	r1, r0, #4	; 0x4
        21b19c:	e1a00004 	mov	r0, r4
        21b1a0:	eb64a431 	bl	1b4426c <TPSPrinter::$SendPSHeader(RefVar const &)>
        21b1a4:	e59430cc 	ldr	r3, [r4, #204]	; fField204
        21b1a8:	e1a02003 	mov	r2, r3
        21b1ac:	e28400e8 	add	r0, r4, #232	; 0xe8
        21b1b0:	e1a05000 	mov	r5, r0
        21b1b4:	e28f1f43 	add	r1, pc, #268	; 0x10c
        21b1b8:	eb666a35 	bl	1bb5a94 <$sprintf>
        21b1bc:	e1a01005 	mov	r1, r5
        21b1c0:	e1a00004 	mov	r0, r4
        21b1c4:	e3a02000 	mov	r2, #0	; 0x0
        21b1c8:	eb64b07f 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b1cc:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21b1d0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21b1d4:	e5d00014 	ldrb	r0, [r0, #20]	; fField20
        21b1d8:	e3300000 	teq	r0, #0	; 0x0
        21b1dc:	1a000029 	bne	21b288 <TPSPrinter::OpenPage(void)+0x18c>
        21b1e0:	e1a00004 	mov	r0, r4
        21b1e4:	eb6497ae 	bl	1b410a4 <TPrinter::$GetPrinterPort(void)>
        21b1e8:	e1a05000 	mov	r5, r0
        21b1ec:	e5900024 	ldr	r0, [r0, #36]	; fField36
        21b1f0:	e5900000 	ldr	r0, [r0]
        21b1f4:	e5901008 	ldr	r1, [r0, #8]
        21b1f8:	e1a01841 	mov	r1, r1, asr #16
        21b1fc:	e590000a 	ldr	r0, [r0, #10]
        21b200:	e1510840 	cmp	r1, r0, asr #16
        21b204:	da00001b 	ble	21b278 <TPSPrinter::OpenPage(void)+0x17c>
        21b208:	e5950028 	ldr	r0, [r5, #40]	; fField40
        21b20c:	e5900000 	ldr	r0, [r0]
        21b210:	e590300a 	ldr	r3, [r0, #10]
        21b214:	e1a03843 	mov	r3, r3, asr #16
        21b218:	e92d0008 	stmdb	sp!, {r3}
        21b21c:	e5903008 	ldr	r3, [r0, #8]
        21b220:	e1a03843 	mov	r3, r3, asr #16
        21b224:	e5902006 	ldr	r2, [r0, #6]
        21b228:	e1a02842 	mov	r2, r2, asr #16
        21b22c:	e5901004 	ldr	r1, [r0, #4]
        21b230:	e1a01841 	mov	r1, r1, asr #16
        21b234:	e2800004 	add	r0, r0, #4	; 0x4
        21b238:	eb64e5f3 	bl	1b54a0c <$SetRect__FP4RectlN32>
        21b23c:	e28dd004 	add	sp, sp, #4	; 0x4
        21b240:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
        21b244:	e5900000 	ldr	r0, [r0]
        21b248:	e590300a 	ldr	r3, [r0, #10]
        21b24c:	e1a03843 	mov	r3, r3, asr #16
        21b250:	e92d0008 	stmdb	sp!, {r3}
        21b254:	e5903008 	ldr	r3, [r0, #8]
        21b258:	e1a03843 	mov	r3, r3, asr #16
        21b25c:	e5902006 	ldr	r2, [r0, #6]
        21b260:	e1a02842 	mov	r2, r2, asr #16
        21b264:	e5901004 	ldr	r1, [r0, #4]
        21b268:	e1a01841 	mov	r1, r1, asr #16
        21b26c:	e2800004 	add	r0, r0, #4	; 0x4
        21b270:	eb64e5e5 	bl	1b54a0c <$SetRect__FP4RectlN32>
        21b274:	e28dd004 	add	sp, sp, #4	; 0x4
        21b278:	e59f105c 	ldr	r1, [pc, #5c]	; 21b2dc <TPSPrinter::OpenPage(void)+0x1e0>
        21b27c:	e1a00004 	mov	r0, r4
        21b280:	e3a02000 	mov	r2, #0	; 0x0
        21b284:	eb64b050 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b288:	e59f1050 	ldr	r1, [pc, #50]	; 21b2e0 <TPSPrinter::OpenPage(void)+0x1e4>
        21b28c:	e1a00004 	mov	r0, r4
        21b290:	e3a02000 	mov	r2, #0	; 0x0
        21b294:	eb64b04c 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b298:	e5940010 	ldr	r0, [r4, #16]	; fField16
        21b29c:	e3300000 	teq	r0, #0	; 0x0
        21b2a0:	1a000002 	bne	21b2b0 <TPSPrinter::OpenPage(void)+0x1b4>
        21b2a4:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21b2a8:	eb649bb0 	bl	1b42170 <TPSPrinterDriver::$OpenPage(void)>
        21b2ac:	e5840010 	str	r0, [r4, #16]	; fField16
        21b2b0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        21b2b4:	e3310000 	teq	r1, #0	; 0x0
        21b2b8:	11a00004 	movne	r0, r4
        21b2bc:	1b649785 	blne	1b410d8 <TPSPrinter::$HandleError(long)>
        21b2c0:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        21b2c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        21b2c8:	0d0d2525 	stceq	5, cr2, [sp, -#148]
        21b2cc:	25255061 	strcs	r5, [r5, -#97]!	; fField97
        21b2d0:	67653a20 	strvsb	r3, [r5, -r0, lsr #20]!	; fField20
        21b2d4:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        21b2d8:	640d0d00 	strvs	r0, [sp], -#3328
        21b2dc:	0037a424 	eoreqs	sl, r7, r4, lsr #8
        21b2e0:	0037a3bc 	ldreqh	sl, [r7], -ip
    */
}

/**
 * Symbol: TPSPrinter::ProblemIsFatal(void)
 * Address: 0021b2e4
 */
TPSPrinter::ProblemIsFatal(void) {
    /*
        21b2e4:	e5d000a0 	ldrb	r0, [r0, #160]	; fField160
        21b2e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPrinter::RepeatPage(void)
 * Address: 0021b2ec
 */
TPSPrinter::RepeatPage(void) {
    /*
        21b2ec:	e3a00000 	mov	r0, #0	; 0x0
        21b2f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPrinter::SetupFontMapping(RefVar const &, RefVar const &)
 * Address: 0021b2f4
 */
TPSPrinter::SetupFontMapping(RefVar const &, RefVar const &) {
    /*
        21b2f4:	e1a0c00d 	mov	ip, sp
        21b2f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21b2fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b300:	e1a04000 	mov	r4, r0
        21b304:	e24dd084 	sub	sp, sp, #132	; 0x84
        21b308:	e5920000 	ldr	r0, [r2]
        21b30c:	e5902000 	ldr	r2, [r0]
        21b310:	e5910000 	ldr	r0, [r1]
        21b314:	e5900000 	ldr	r0, [r0]
        21b318:	e1a01002 	mov	r1, r2
        21b31c:	eb66a3cf 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        21b320:	eb669b89 	bl	1bc214c <$AllocateRefHandle(long)>
        21b324:	e58d0000 	str	r0, [sp]
        21b328:	e5900000 	ldr	r0, [r0]
        21b32c:	e3300002 	teq	r0, #2	; 0x2
        21b330:	0a00000f 	beq	21b374 <TPSPrinter::SetupFontMapping(RefVar const &, RefVar const &)+0x80>
        21b334:	e1a0000d 	mov	r0, sp
        21b338:	eb669f91 	bl	1bc3184 <$GetCString(RefVar const &)>
        21b33c:	e28d1004 	add	r1, sp, #4	; 0x4
        21b340:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        21b344:	e3a02001 	mov	r2, #1	; 0x1
        21b348:	eb67300c 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        21b34c:	e28400e8 	add	r0, r4, #232	; 0xe8
        21b350:	e1a05000 	mov	r5, r0
        21b354:	e28d3004 	add	r3, sp, #4	; 0x4
        21b358:	e28d2004 	add	r2, sp, #4	; 0x4
        21b35c:	e28f1f07 	add	r1, pc, #28	; 0x1c
        21b360:	eb6669cb 	bl	1bb5a94 <$sprintf>
        21b364:	e1a01005 	mov	r1, r5
        21b368:	e1a00004 	mov	r0, r4
        21b36c:	e3a02000 	mov	r2, #0	; 0x0
        21b370:	eb64b015 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b374:	e59d0000 	ldr	r0, [sp]
        21b378:	eb669f8f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21b37c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        21b380:	2f25732d 	swics	0x0025732d
        21b384:	4d616320 	stcmil	3, cr6, [r1, -#128]!
        21b388:	2f257320 	swics	0x00257320
        21b38c:	456e636f 	strmib	r6, [lr, -#879]!
        21b390:	6465466f 	strvsbt	r4, [r5], -#1647	; fField1647
        21b394:	6e740d00 	cdpvs	13, 7, cr0, cr4, cr0, {0}
    */
}

/**
 * Symbol: TPSPrinter::SendPSHeader(RefVar const &)
 * Address: 0021b398
 */
TPSPrinter::SendPSHeader(RefVar const &) {
    /*
        21b398:	e1a0c00d 	mov	ip, sp
        21b39c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        21b3a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b3a4:	e1a04000 	mov	r4, r0
        21b3a8:	e1a06001 	mov	r6, r1
        21b3ac:	e24ddf4b 	sub	sp, sp, #300	; 0x12c
        21b3b0:	e28f1fc9 	add	r1, pc, #804	; 0x324
        21b3b4:	e3a02000 	mov	r2, #0	; 0x0
        21b3b8:	eb64b003 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b3bc:	e28d2064 	add	r2, sp, #100	; 0x64
        21b3c0:	e1a01006 	mov	r1, r6
        21b3c4:	e1a00004 	mov	r0, r4
        21b3c8:	eb64932b 	bl	1b4007c <TPSPrinter::$GetDocTitle(RefVar const &, char *)>
        21b3cc:	e28400e8 	add	r0, r4, #232	; 0xe8
        21b3d0:	e1a05000 	mov	r5, r0
        21b3d4:	e28d2064 	add	r2, sp, #100	; 0x64
        21b3d8:	e28f1fc3 	add	r1, pc, #780	; 0x30c
        21b3dc:	eb6669ac 	bl	1bb5a94 <$sprintf>
        21b3e0:	e1a01005 	mov	r1, r5
        21b3e4:	e1a00004 	mov	r0, r4
        21b3e8:	e3a02000 	mov	r2, #0	; 0x0
        21b3ec:	eb64aff6 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b3f0:	e1a00004 	mov	r0, r4
        21b3f4:	e28f1fc0 	add	r1, pc, #768	; 0x300
        21b3f8:	e3a02000 	mov	r2, #0	; 0x0
        21b3fc:	eb64aff2 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b400:	e24dd010 	sub	sp, sp, #16	; 0x10
        21b404:	e3a08002 	mov	r8, #2	; 0x2
        21b408:	e1a00008 	mov	r0, r8
        21b40c:	eb669b4e 	bl	1bc214c <$AllocateRefHandle(long)>
        21b410:	e58d0008 	str	r0, [sp, #8]
        21b414:	e28d0008 	add	r0, sp, #8	; 0x8
        21b418:	eb675d38 	bl	1bf2900 <$FTime(RefVar const &)>
        21b41c:	eb669b4a 	bl	1bc214c <$AllocateRefHandle(long)>
        21b420:	e58d0000 	str	r0, [sp]
        21b424:	e1a0700d 	mov	r7, sp
        21b428:	e1a00008 	mov	r0, r8
        21b42c:	eb669b46 	bl	1bc214c <$AllocateRefHandle(long)>
        21b430:	e58d0004 	str	r0, [sp, #4]
        21b434:	e28d0004 	add	r0, sp, #4	; 0x4
        21b438:	e1a01007 	mov	r1, r7
        21b43c:	eb62e9a3 	bl	1ad5ad0 <$FDateNTime__FRC6RefVarT1>
        21b440:	eb669b41 	bl	1bc214c <$AllocateRefHandle(long)>
        21b444:	e58d000c 	str	r0, [sp, #12]	; fField12
        21b448:	e59d0000 	ldr	r0, [sp]
        21b44c:	eb669f5a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21b450:	e59d0004 	ldr	r0, [sp, #4]
        21b454:	eb669f58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21b458:	e59d0008 	ldr	r0, [sp, #8]
        21b45c:	eb669f56 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21b460:	e28d000c 	add	r0, sp, #12	; 0xc
        21b464:	eb669f46 	bl	1bc3184 <$GetCString(RefVar const &)>
        21b468:	e28d1010 	add	r1, sp, #16	; 0x10
        21b46c:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        21b470:	e3a02001 	mov	r2, #1	; 0x1
        21b474:	eb672fc1 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        21b478:	e1a00005 	mov	r0, r5
        21b47c:	e28d2010 	add	r2, sp, #16	; 0x10
        21b480:	e28f1fa2 	add	r1, pc, #648	; 0x288
        21b484:	eb666982 	bl	1bb5a94 <$sprintf>
        21b488:	e1a01005 	mov	r1, r5
        21b48c:	e1a00004 	mov	r0, r4
        21b490:	e3a02000 	mov	r2, #0	; 0x0
        21b494:	eb64afcc 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b498:	e1a00004 	mov	r0, r4
        21b49c:	e28f1fa1 	add	r1, pc, #644	; 0x284
        21b4a0:	e3a02000 	mov	r2, #0	; 0x0
        21b4a4:	eb64afc8 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b4a8:	e28d20d8 	add	r2, sp, #216	; 0xd8
        21b4ac:	e1a01006 	mov	r1, r6
        21b4b0:	e1a00004 	mov	r0, r4
        21b4b4:	eb649705 	bl	1b410d0 <TPSPrinter::$GetUserName(RefVar const &, char *)>
        21b4b8:	e1a00005 	mov	r0, r5
        21b4bc:	e28d20d8 	add	r2, sp, #216	; 0xd8
        21b4c0:	e28f1f9d 	add	r1, pc, #628	; 0x274
        21b4c4:	eb666972 	bl	1bb5a94 <$sprintf>
        21b4c8:	e1a01005 	mov	r1, r5
        21b4cc:	e1a00004 	mov	r0, r4
        21b4d0:	e3a02000 	mov	r2, #0	; 0x0
        21b4d4:	eb64afbc 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b4d8:	e59f126c 	ldr	r1, [pc, #26c]	; 21b74c <TPSPrinter::SendPSHeader(RefVar const &)+0x3b4>
        21b4dc:	e1a00004 	mov	r0, r4
        21b4e0:	e3a02000 	mov	r2, #0	; 0x0
        21b4e4:	eb64afb8 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b4e8:	e59f1260 	ldr	r1, [pc, #260]	; 21b750 <TPSPrinter::SendPSHeader(RefVar const &)+0x3b8>
        21b4ec:	e1a00004 	mov	r0, r4
        21b4f0:	e3a02000 	mov	r2, #0	; 0x0
        21b4f4:	eb64afb4 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b4f8:	e24dd008 	sub	sp, sp, #8	; 0x8
        21b4fc:	e59f0250 	ldr	r0, [pc, #250]	; 21b754 <TPSPrinter::SendPSHeader(RefVar const &)+0x3bc>
        21b500:	e5900000 	ldr	r0, [r0]
        21b504:	eb669b10 	bl	1bc214c <$AllocateRefHandle(long)>
        21b508:	e1a06000 	mov	r6, r0
        21b50c:	e59f0244 	ldr	r0, [pc, #244]	; 21b758 <TPSPrinter::SendPSHeader(RefVar const &)+0x3c0>
        21b510:	e5900000 	ldr	r0, [r0]
        21b514:	e5901000 	ldr	r1, [r0]
        21b518:	e5960000 	ldr	r0, [r6]
        21b51c:	eb66a34f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        21b520:	eb669b09 	bl	1bc214c <$AllocateRefHandle(long)>
        21b524:	e58d0004 	str	r0, [sp, #4]
        21b528:	e1a00006 	mov	r0, r6
        21b52c:	eb669f22 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21b530:	e3a00002 	mov	r0, #2	; 0x2
        21b534:	eb669b04 	bl	1bc214c <$AllocateRefHandle(long)>
        21b538:	e58d0000 	str	r0, [sp]
        21b53c:	e59d0004 	ldr	r0, [sp, #4]
        21b540:	e5900000 	ldr	r0, [r0]
        21b544:	e3300002 	teq	r0, #2	; 0x2
        21b548:	0a000040 	beq	21b650 <TPSPrinter::SendPSHeader(RefVar const &)+0x2b8>
        21b54c:	e24dd030 	sub	sp, sp, #48	; 0x30
        21b550:	e28d1034 	add	r1, sp, #52	; 0x34
        21b554:	e1a0000d 	mov	r0, sp
        21b558:	e3a02001 	mov	r2, #1	; 0x1
        21b55c:	eb6696e3 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        21b560:	e1a0000d 	mov	r0, sp
        21b564:	eb669f1c 	bl	1bc31dc <TObjectIterator::$Done(void)>
        21b568:	e59fa1ec 	ldr	sl, [pc, #1ec]	; 21b75c <TPSPrinter::SendPSHeader(RefVar const &)+0x3c4>
        21b56c:	e59f91ec 	ldr	r9, [pc, #1ec]	; 21b760 <TPSPrinter::SendPSHeader(RefVar const &)+0x3c8>
        21b570:	e59f81ec 	ldr	r8, [pc, #1ec]	; 21b764 <TPSPrinter::SendPSHeader(RefVar const &)+0x3cc>
        21b574:	e59f71ec 	ldr	r7, [pc, #1ec]	; 21b768 <TPSPrinter::SendPSHeader(RefVar const &)+0x3d0>
        21b578:	e28d6008 	add	r6, sp, #8	; 0x8
        21b57c:	e3300000 	teq	r0, #0	; 0x0
        21b580:	1a00002d 	bne	21b63c <TPSPrinter::SendPSHeader(RefVar const &)+0x2a4>
        21b584:	e59f01e0 	ldr	r0, [pc, #1e0]	; 21b76c <TPSPrinter::SendPSHeader(RefVar const &)+0x3d4>
        21b588:	e5900000 	ldr	r0, [r0]
        21b58c:	e5901000 	ldr	r1, [r0]
        21b590:	e59d0004 	ldr	r0, [sp, #4]
        21b594:	e5900000 	ldr	r0, [r0]
        21b598:	eb66a324 	bl	1bc4230 <$EQRef__FlT1>
        21b59c:	e3300000 	teq	r0, #0	; 0x0
        21b5a0:	1a00001f 	bne	21b624 <TPSPrinter::SendPSHeader(RefVar const &)+0x28c>
        21b5a4:	e59f01c4 	ldr	r0, [pc, #1c4]	; 21b770 <TPSPrinter::SendPSHeader(RefVar const &)+0x3d8>
        21b5a8:	e5900000 	ldr	r0, [r0]
        21b5ac:	e5901000 	ldr	r1, [r0]
        21b5b0:	e59d0008 	ldr	r0, [sp, #8]
        21b5b4:	e5900000 	ldr	r0, [r0]
        21b5b8:	eb66a328 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        21b5bc:	e59d1030 	ldr	r1, [sp, #48]
        21b5c0:	e5810000 	str	r0, [r1]
        21b5c4:	e3300002 	teq	r0, #2	; 0x2
        21b5c8:	0a000005 	beq	21b5e4 <TPSPrinter::SendPSHeader(RefVar const &)+0x24c>
        21b5cc:	e3100003 	tst	r0, #3	; 0x3
        21b5d0:	01a00140 	moveq	r0, r0, asr #2
        21b5d4:	0a000000 	beq	21b5dc <TPSPrinter::SendPSHeader(RefVar const &)+0x244>
        21b5d8:	eb669acf 	bl	1bc211c <$_RINTError(long)>
        21b5dc:	e3300006 	teq	r0, #6	; 0x6
        21b5e0:	0a00000f 	beq	21b624 <TPSPrinter::SendPSHeader(RefVar const &)+0x28c>
        21b5e4:	e1a01006 	mov	r1, r6
        21b5e8:	e1a0200a 	mov	r2, sl
        21b5ec:	e1a00004 	mov	r0, r4
        21b5f0:	eb64ab52 	bl	1b46340 <TPSPrinter::$SetupFontMapping(RefVar const &, RefVar const &)>
        21b5f4:	e1a01006 	mov	r1, r6
        21b5f8:	e1a02009 	mov	r2, r9
        21b5fc:	e1a00004 	mov	r0, r4
        21b600:	eb64ab4e 	bl	1b46340 <TPSPrinter::$SetupFontMapping(RefVar const &, RefVar const &)>
        21b604:	e1a01006 	mov	r1, r6
        21b608:	e1a02008 	mov	r2, r8
        21b60c:	e1a00004 	mov	r0, r4
        21b610:	eb64ab4a 	bl	1b46340 <TPSPrinter::$SetupFontMapping(RefVar const &, RefVar const &)>
        21b614:	e1a01006 	mov	r1, r6
        21b618:	e1a02007 	mov	r2, r7
        21b61c:	e1a00004 	mov	r0, r4
        21b620:	eb64ab46 	bl	1b46340 <TPSPrinter::$SetupFontMapping(RefVar const &, RefVar const &)>
        21b624:	e1a0000d 	mov	r0, sp
        21b628:	eb66a72e 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        21b62c:	e1a0000d 	mov	r0, sp
        21b630:	eb669ee9 	bl	1bc31dc <TObjectIterator::$Done(void)>
        21b634:	e3300000 	teq	r0, #0	; 0x0
        21b638:	0affffd1 	beq	21b584 <TPSPrinter::SendPSHeader(RefVar const &)+0x1ec>
        21b63c:	e1a0000d 	mov	r0, sp
        21b640:	e3a01000 	mov	r1, #0	; 0x0
        21b644:	e1a0e00f 	mov	lr, pc
        21b648:	e59df000 	ldr	pc, [sp]
        21b64c:	e28dd030 	add	sp, sp, #48	; 0x30
        21b650:	e1a00004 	mov	r0, r4
        21b654:	e28f1f46 	add	r1, pc, #280	; 0x118
        21b658:	e3a02000 	mov	r2, #0	; 0x0
        21b65c:	eb64af5a 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b660:	e1a00004 	mov	r0, r4
        21b664:	e28f1f46 	add	r1, pc, #280	; 0x118
        21b668:	e3a02000 	mov	r2, #0	; 0x0
        21b66c:	eb64af56 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b670:	e28d10e0 	add	r1, sp, #224	; 0xe0
        21b674:	e1a00004 	mov	r0, r4
        21b678:	eb649aad 	bl	1b42134 <TPSPrinter::$MakeTextPSFriendly(char *)>
        21b67c:	e28d107c 	add	r1, sp, #124	; 0x7c
        21b680:	e1a00004 	mov	r0, r4
        21b684:	eb649aaa 	bl	1b42134 <TPSPrinter::$MakeTextPSFriendly(char *)>
        21b688:	e1a00005 	mov	r0, r5
        21b68c:	e28d307c 	add	r3, sp, #124	; 0x7c
        21b690:	e28d20e0 	add	r2, sp, #224	; 0xe0
        21b694:	e28f1f3e 	add	r1, pc, #248	; 0xf8
        21b698:	eb6668fd 	bl	1bb5a94 <$sprintf>
        21b69c:	e1a01005 	mov	r1, r5
        21b6a0:	e1a00004 	mov	r0, r4
        21b6a4:	e3a02000 	mov	r2, #0	; 0x0
        21b6a8:	eb64af47 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b6ac:	e1a00004 	mov	r0, r4
        21b6b0:	e28f1f3d 	add	r1, pc, #244	; 0xf4
        21b6b4:	e3a02000 	mov	r2, #0	; 0x0
        21b6b8:	eb64af43 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b6bc:	e59d0000 	ldr	r0, [sp]
        21b6c0:	eb669ebd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21b6c4:	e59d0004 	ldr	r0, [sp, #4]
        21b6c8:	eb669ebb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21b6cc:	e28dd008 	add	sp, sp, #8	; 0x8
        21b6d0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        21b6d4:	eb669eb8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21b6d8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21b6dc:	25215053 	strcs	r5, [r1, -#83]!	; fField83
        21b6e0:	2d41646f 	stccsl	4, cr6, [r1, -#444]
        21b6e4:	62652d33 	rsbvs	r2, r5, #3264	; 0xcc0
        21b6e8:	2e300d00 	cdpcs	13, 3, cr0, cr0, cr0, {0}
        21b6ec:	25252525 	strcs	r2, [r5, -#1317]!	; fField1317
        21b6f0:	5469746c 	strplbt	r7, [r9], -#1132
        21b6f4:	653a2025 	ldrvs	r2, [sl, -#37]!	; fField37
        21b6f8:	730d0000 	tstvc	sp, #0	; 0x0
        21b6fc:	25254372 	strcs	r4, [r5, -#882]!	; fField882
        21b700:	6561746f 	strvsb	r7, [r1, -#1135]!
        21b704:	723a204f 	eorvcs	r2, sl, #79	; 0x4f
        21b708:	75742042 	ldrvcb	r2, [r4, -#66]!
        21b70c:	6f780d00 	swivs	0x00780d00
        21b710:	25252525 	strcs	r2, [r5, -#1317]!	; fField1317
        21b714:	43726561 	cmnmi	r2, #406847488	; 0x18400000
        21b718:	74696f6e 	strvcbt	r6, [r9], -#3950
        21b71c:	44617465 	strmibt	r7, [r1], -#1125
        21b720:	3a202573 	bcc	a24cf4 <ROM$$Size+0x3050a8>
        21b724:	0d000000 	stceq	0, cr0, [r0]
        21b728:	25255061 	strcs	r5, [r5, -#97]!	; fField97
        21b72c:	6765733a 	undefined
        21b730:	20286174 	eorcs	r6, r8, r4, ror r1
        21b734:	656e6429 	strvsb	r6, [lr, -#1065]!
        21b738:	0d000000 	stceq	0, cr0, [r0]
        21b73c:	25252525 	strcs	r2, [r5, -#1317]!	; fField1317
        21b740:	466f723a 	undefined
        21b744:	2025730d 	eorcs	r7, r5, sp, lsl #6
        21b748:	00000000 	andeq	r0, r0, r0
        21b74c:	00378c9c 	mlaeqs	r7, ip, ip, r8
        21b750:	00379a4c 	eoreqs	r9, r7, ip, asr #20
        21b754:	0c10180c 	ldceq	8, cr1, [r0], -#48
        21b758:	00684080 	rsbeq	r4, r8, r0, lsl #1
        21b75c:	00683a80 	rsbeq	r3, r8, r0, lsl #21
        21b760:	00682118 	rsbeq	r2, r8, r8, lsl r1
        21b764:	00683328 	rsbeq	r3, r8, r8, lsr #6
        21b768:	00682128 	rsbeq	r2, r8, r8, lsr #2
        21b76c:	00685390 	streqb	r5, [r8], -#48
        21b770:	00683f98 	streqb	r3, [r8], -#248
        21b774:	2525456e 	strcs	r4, [r5, -#1390]!	; fField1390
        21b778:	6450726f 	ldrvsb	r7, [r0], -#623
        21b77c:	6c6f670d 	stcvsl	7, cr6, [pc], -#52
        21b780:	00000000 	andeq	r0, r0, r0
        21b784:	25254265 	strcs	r4, [r5, -#613]!	; fField613
        21b788:	67696e53 	undefined
        21b78c:	65747570 	ldrvsb	r7, [r4, -#1392]!
        21b790:	0d000000 	stceq	0, cr0, [r0]
        21b794:	2825733b 	stmcsda	r5!, {r0, r1, r3, r4, r5, r8, r9, ip, sp, lr}
        21b798:	20646f63 	rsbcs	r6, r4, r3, ror #30
        21b79c:	756d656e 	strvcb	r6, [sp, -#1390]!	; fField1390
        21b7a0:	743a2025 	ldrvct	r2, [sl], -#37	; fField37
        21b7a4:	7329206a 	teqvc	r9, #106	; 0x6a
        21b7a8:	6e0d0000 	cdpvs	0, 0, cr0, cr13, cr0, {0}
        21b7ac:	2525456e 	strcs	r4, [r5, -#1390]!	; fField1390
        21b7b0:	64536574 	ldrvsb	r6, [r3], -#1396
        21b7b4:	75700d00 	ldrvcb	r0, [r0, -#3328]!
    */
}

/**
 * Symbol: TPSPrinter::SendPSTrailer(void)
 * Address: 0021b7b8
 */
TPSPrinter::SendPSTrailer(void) {
    /*
        21b7b8:	e1a0c00d 	mov	ip, sp
        21b7bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21b7c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b7c4:	e1a04000 	mov	r4, r0
        21b7c8:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        21b7cc:	e3a02000 	mov	r2, #0	; 0x0
        21b7d0:	eb64aefd 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b7d4:	e59420cc 	ldr	r2, [r4, #204]	; fField204
        21b7d8:	e28400e8 	add	r0, r4, #232	; 0xe8
        21b7dc:	e1a05000 	mov	r5, r0
        21b7e0:	e28f1f0c 	add	r1, pc, #48	; 0x30
        21b7e4:	eb6668aa 	bl	1bb5a94 <$sprintf>
        21b7e8:	e1a01005 	mov	r1, r5
        21b7ec:	e1a00004 	mov	r0, r4
        21b7f0:	e3a02000 	mov	r2, #0	; 0x0
        21b7f4:	eb64aef4 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b7f8:	e1a00004 	mov	r0, r4
        21b7fc:	e28f1f09 	add	r1, pc, #36	; 0x24
        21b800:	e3a02000 	mov	r2, #0	; 0x0
        21b804:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        21b808:	ea64aeef 	b	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b80c:	25255472 	strcs	r5, [r5, -#1138]!	; fField1138
        21b810:	61696c65 	cmnvs	r9, r5, ror #24
        21b814:	720d0000 	andvc	r0, sp, #0	; 0x0
        21b818:	25252525 	strcs	r2, [r5, -#1317]!	; fField1317
        21b81c:	50616765 	rsbpl	r6, r1, r5, ror #14
        21b820:	733a2025 	teqvc	sl, #37	; 0x25
        21b824:	640d0000 	strvs	r0, [sp]
        21b828:	2525454f 	strcs	r4, [r5, -#1359]!	; fField1359
        21b82c:	460d0000 	strmi	r0, [sp], -r0
    */
}

/**
 * Symbol: TPSPrinter::SendPSText(char *, unsigned char)
 * Address: 0021b830
 */
TPSPrinter::SendPSText(char *, unsigned char) {
    /*
        21b830:	e1a0c00d 	mov	ip, sp
        21b834:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21b838:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b83c:	e1a05000 	mov	r5, r0
        21b840:	e1a04001 	mov	r4, r1
        21b844:	e20270ff 	and	r7, r2, #255	; 0xff
        21b848:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21b84c:	e3300000 	teq	r0, #0	; 0x0
        21b850:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        21b854:	e24dd004 	sub	sp, sp, #4	; 0x4
        21b858:	e1a03007 	mov	r3, r7
        21b85c:	e1a0200d 	mov	r2, sp
        21b860:	e1a01004 	mov	r1, r4
        21b864:	e5950098 	ldr	r0, [r5, #152]	; fField152
        21b868:	eb64aed8 	bl	1b473d0 <TPSPrinterDriver::$SendPSText(char *, unsigned long &, unsigned char)>
        21b86c:	e1b06000 	movs	r6, r0
        21b870:	0a000008 	beq	21b898 <TPSPrinter::SendPSText(char *, unsigned char)+0x68>
        21b874:	e1a01006 	mov	r1, r6
        21b878:	e1a00005 	mov	r0, r5
        21b87c:	eb649615 	bl	1b410d8 <TPSPrinter::$HandleError(long)>
        21b880:	e3300000 	teq	r0, #0	; 0x0
        21b884:	1a000003 	bne	21b898 <TPSPrinter::SendPSText(char *, unsigned char)+0x68>
        21b888:	e59d0000 	ldr	r0, [sp]
        21b88c:	e0844000 	add	r4, r4, r0
        21b890:	e3360000 	teq	r6, #0	; 0x0
        21b894:	1affffef 	bne	21b858 <TPSPrinter::SendPSText(char *, unsigned char)+0x28>
        21b898:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::SendPSBinary(char *, unsigned long)
 * Address: 0021b89c
 */
TPSPrinter::SendPSBinary(char *, unsigned long) {
    /*
        21b89c:	e1a0c00d 	mov	ip, sp
        21b8a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21b8a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b8a8:	e1a05000 	mov	r5, r0
        21b8ac:	e1a04001 	mov	r4, r1
        21b8b0:	e1a06002 	mov	r6, r2
        21b8b4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21b8b8:	e3300000 	teq	r0, #0	; 0x0
        21b8bc:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        21b8c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        21b8c4:	e1a0300d 	mov	r3, sp
        21b8c8:	e1a02006 	mov	r2, r6
        21b8cc:	e1a01004 	mov	r1, r4
        21b8d0:	e5950098 	ldr	r0, [r5, #152]	; fField152
        21b8d4:	eb64aa95 	bl	1b46330 <TPSPrinterDriver::$SendPSBinary(char *, unsigned long, unsigned long &)>
        21b8d8:	e1b07000 	movs	r7, r0
        21b8dc:	0a000008 	beq	21b904 <TPSPrinter::SendPSBinary(char *, unsigned long)+0x68>
        21b8e0:	e1a01007 	mov	r1, r7
        21b8e4:	e1a00005 	mov	r0, r5
        21b8e8:	eb6495fa 	bl	1b410d8 <TPSPrinter::$HandleError(long)>
        21b8ec:	e3300000 	teq	r0, #0	; 0x0
        21b8f0:	1a000003 	bne	21b904 <TPSPrinter::SendPSBinary(char *, unsigned long)+0x68>
        21b8f4:	e59d0000 	ldr	r0, [sp]
        21b8f8:	e0844000 	add	r4, r4, r0
        21b8fc:	e3370000 	teq	r7, #0	; 0x0
        21b900:	1affffef 	bne	21b8c4 <TPSPrinter::SendPSBinary(char *, unsigned long)+0x28>
        21b904:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::SetSoftError(long)
 * Address: 0021b908
 */
TPSPrinter::SetSoftError(long) {
    /*
        21b908:	e1a0c00d 	mov	ip, sp
        21b90c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21b910:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b914:	e1a04000 	mov	r4, r0
        21b918:	e1a05001 	mov	r5, r1
        21b91c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        21b920:	eb6491c7 	bl	1b40044 <TPSPrinter::$ErrorIsFatal(long)>
        21b924:	e3300000 	teq	r0, #0	; 0x0
        21b928:	05a45010 	streq	r5, [r4, #16]!	; fField16
        21b92c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::ClosePage(void)
 * Address: 0021b930
 */
TPSPrinter::ClosePage(void) {
    /*
        21b930:	e1a0c00d 	mov	ip, sp
        21b934:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21b938:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b93c:	e1a04000 	mov	r4, r0
        21b940:	eb648d77 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        21b944:	e3300000 	teq	r0, #0	; 0x0
        21b948:	1a00000d 	bne	21b984 <TPSPrinter::ClosePage(void)+0x54>
        21b94c:	e1a00004 	mov	r0, r4
        21b950:	eb649192 	bl	1b3ffa0 <TPSPrinter::$ContinueIO(void)>
        21b954:	e3300000 	teq	r0, #0	; 0x0
        21b958:	0a000009 	beq	21b984 <TPSPrinter::ClosePage(void)+0x54>
        21b95c:	e59f1030 	ldr	r1, [pc, #30]	; 21b994 <TPSPrinter::ClosePage(void)+0x64>
        21b960:	e1a00004 	mov	r0, r4
        21b964:	e3a02000 	mov	r2, #0	; 0x0
        21b968:	eb64ae97 	bl	1b473cc <TPSPrinter::$SendPSText(char *, unsigned char)>
        21b96c:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21b970:	eb648d7f 	bl	1b3ef74 <TPSPrinterDriver::$ClosePage(void)>
        21b974:	e3300000 	teq	r0, #0	; 0x0
        21b978:	11a01000 	movne	r1, r0
        21b97c:	11a00004 	movne	r0, r4
        21b980:	1b6495d4 	blne	1b410d8 <TPSPrinter::$HandleError(long)>
        21b984:	e1a00004 	mov	r0, r4
        21b988:	eb648d65 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        21b98c:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        21b990:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21b994:	0037a430 	eoreqs	sl, r7, r0, lsr r4
    */
}

/**
 * Symbol: TPSPrinter::SetPortraitOrientation(unsigned char)
 * Address: 0021b998
 */
TPSPrinter::SetPortraitOrientation(unsigned char) {
    /*
        21b998:	e5900098 	ldr	r0, [r0, #152]	; fField152
        21b99c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21b9a0:	e5c01014 	strb	r1, [r0, #20]	; fField20
        21b9a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPrinter::FaxEndPage(long)
 * Address: 0021b9a8
 */
TPSPrinter::FaxEndPage(long) {
    /*
        21b9a8:	e3a00000 	mov	r0, #0	; 0x0
        21b9ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPSPrinter::Constructor(char *)
 * Address: 0021b9b0
 */
TPSPrinter::Constructor(char *) {
    /*
        21b9b0:	e1a0c00d 	mov	ip, sp
        21b9b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21b9b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        21b9bc:	e1a04000 	mov	r4, r0
        21b9c0:	e1a05001 	mov	r5, r1
        21b9c4:	e3a0001e 	mov	r0, #30	; 0x1e
        21b9c8:	e2400b2b 	sub	r0, r0, #44032	; 0xac00
        21b9cc:	e3a06000 	mov	r6, #0	; 0x0
        21b9d0:	e5840010 	str	r0, [r4, #16]	; fField16
        21b9d4:	e5c46014 	strb	r6, [r4, #20]	; fField20
        21b9d8:	e5c46015 	strb	r6, [r4, #21]	; fField21
        21b9dc:	e3a00001 	mov	r0, #1	; 0x1
        21b9e0:	e58400e4 	str	r0, [r4, #228]	; fField228
        21b9e4:	e5846098 	str	r6, [r4, #152]	; fField152
        21b9e8:	e29400a4 	adds	r0, r4, #164	; 0xa4
        21b9ec:	0a000004 	beq	21ba04 <TPSPrinter::Constructor(char *)+0x54>
        21b9f0:	e1a07000 	mov	r7, r0
        21b9f4:	e3a00002 	mov	r0, #2	; 0x2
        21b9f8:	eb6699d3 	bl	1bc214c <$AllocateRefHandle(long)>
        21b9fc:	e5870000 	str	r0, [r7]
        21ba00:	e5a06004 	str	r6, [r0, #4]!
        21ba04:	e1a01005 	mov	r1, r5
        21ba08:	e28f0f17 	add	r0, pc, #92	; 0x5c
        21ba0c:	eb66f05e 	bl	1bd7b8c <$NewByName__FPCcT1>
        21ba10:	e5840098 	str	r0, [r4, #152]	; fField152
        21ba14:	e3300000 	teq	r0, #0	; 0x0
        21ba18:	0a000011 	beq	21ba64 <TPSPrinter::Constructor(char *)+0xb4>
        21ba1c:	e5846010 	str	r6, [r4, #16]	; fField16
        21ba20:	e5c460a0 	strb	r6, [r4, #160]	; fField160
        21ba24:	e3a00018 	mov	r0, #24	; 0x18
        21ba28:	eb66cb42 	bl	1bce738 <$__nw(unsigned int)>
        21ba2c:	e1b05000 	movs	r5, r0
        21ba30:	0a000007 	beq	21ba54 <TPSPrinter::Constructor(char *)+0xa4>
        21ba34:	e3a00002 	mov	r0, #2	; 0x2
        21ba38:	eb6699c3 	bl	1bc214c <$AllocateRefHandle(long)>
        21ba3c:	e5850004 	str	r0, [r5, #4]
        21ba40:	e5a06004 	str	r6, [r0, #4]!
        21ba44:	e3a00002 	mov	r0, #2	; 0x2
        21ba48:	eb6699bf 	bl	1bc214c <$AllocateRefHandle(long)>
        21ba4c:	e5850008 	str	r0, [r5, #8]
        21ba50:	e5a06004 	str	r6, [r0, #4]!
        21ba54:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21ba58:	e5a05010 	str	r5, [r0, #16]!	; fField16
        21ba5c:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21ba60:	e5a04014 	str	r4, [r0, #20]!	; fField20
        21ba64:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        21ba68:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        21ba6c:	54505350 	ldrplb	r5, [r0], -#848	; fField848
        21ba70:	72696e74 	rsbvc	r6, r9, #1856	; 0x740
        21ba74:	65724472 	ldrvsb	r4, [r2, -#1138]!	; fField1138
        21ba78:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        21ba7c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPSPrinter::ContinueIO(void)
 * Address: 0021ba80
 */
TPSPrinter::ContinueIO(void) {
    /*
        21ba80:	e1a0c00d 	mov	ip, sp
        21ba84:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21ba88:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ba8c:	e3a04001 	mov	r4, #1	; 0x1
        21ba90:	e5901010 	ldr	r1, [r0, #16]	; fField16
        21ba94:	e281ccab 	add	ip, r1, #43776	; 0xab00
        21ba98:	e37c00e0 	cmn	ip, #224	; 0xe0
        21ba9c:	0a000002 	beq	21baac <TPSPrinter::ContinueIO(void)+0x2c>
        21baa0:	eb649dc0 	bl	1b431a8 <TPSPrinter::$ProblemIsFatal(void)>
        21baa4:	e3300000 	teq	r0, #0	; 0x0
        21baa8:	0a000000 	beq	21bab0 <TPSPrinter::ContinueIO(void)+0x30>
        21baac:	e3a04000 	mov	r4, #0	; 0x0
        21bab0:	e1a00004 	mov	r0, r4
        21bab4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::ContinueRendering(void)
 * Address: 0021bab8
 */
TPSPrinter::ContinueRendering(void) {
    /*
        21bab8:	e1a0c00d 	mov	ip, sp
        21babc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21bac0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21bac4:	e1a04000 	mov	r4, r0
        21bac8:	e3a05001 	mov	r5, #1	; 0x1
        21bacc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21bad0:	e280ccab 	add	ip, r0, #43776	; 0xab00
        21bad4:	e37c00e1 	cmn	ip, #225	; 0xe1
        21bad8:	1280ccab 	addne	ip, r0, #43776	; 0xab00
        21badc:	137c00e4 	cmnne	ip, #228	; 0xe4
        21bae0:	0a000007 	beq	21bb04 <TPSPrinter::ContinueRendering(void)+0x4c>
        21bae4:	e1a00004 	mov	r0, r4
        21bae8:	eb64912c 	bl	1b3ffa0 <TPSPrinter::$ContinueIO(void)>
        21baec:	e3300000 	teq	r0, #0	; 0x0
        21baf0:	0a000003 	beq	21bb04 <TPSPrinter::ContinueRendering(void)+0x4c>
        21baf4:	e1a00004 	mov	r0, r4
        21baf8:	eb648d09 	bl	1b3ef24 <TPrinter::$CheckUserAbort(void)>
        21bafc:	e3300000 	teq	r0, #0	; 0x0
        21bb00:	0a000000 	beq	21bb08 <TPSPrinter::ContinueRendering(void)+0x50>
        21bb04:	e3a05000 	mov	r5, #0	; 0x0
        21bb08:	e1a00005 	mov	r0, r5
        21bb0c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::Delete(void)
 * Address: 0021bb10
 */
TPSPrinter::Delete(void) {
    /*
        21bb10:	e1a0c00d 	mov	ip, sp
        21bb14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21bb18:	e24cb004 	sub	fp, ip, #4	; 0x4
        21bb1c:	e1a04000 	mov	r4, r0
        21bb20:	e5900098 	ldr	r0, [r0, #152]	; fField152
        21bb24:	e3a06000 	mov	r6, #0	; 0x0
        21bb28:	e3300000 	teq	r0, #0	; 0x0
        21bb2c:	0a00000a 	beq	21bb5c <TPSPrinter::Delete(void)+0x4c>
        21bb30:	e5b05010 	ldr	r5, [r0, #16]!	; fField16
        21bb34:	e3350000 	teq	r5, #0	; 0x0
        21bb38:	0a000005 	beq	21bb54 <TPSPrinter::Delete(void)+0x44>
        21bb3c:	e5950008 	ldr	r0, [r5, #8]
        21bb40:	eb669d9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21bb44:	e5950004 	ldr	r0, [r5, #4]
        21bb48:	eb669d9b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21bb4c:	e1a00005 	mov	r0, r5
        21bb50:	eb66c6e2 	bl	1bcd6e0 <$__dl(void *)>
        21bb54:	e5b40098 	ldr	r0, [r4, #152]!	; fField152
        21bb58:	eb64911c 	bl	1b3ffd0 <TPSPrinterDriver::$Delete(void)>
        21bb5c:	e59f0004 	ldr	r0, [pc, #4]	; 21bb68 <TPSPrinter::Delete(void)+0x58>
        21bb60:	e5c06000 	strb	r6, [r0]
        21bb64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        21bb68:	0c100b64 	ldceq	11, cr0, [r0], -#400
    */
}

/**
 * Symbol: TPSPrinter::DoHandleProblem(long)
 * Address: 0021bb6c
 */
TPSPrinter::DoHandleProblem(long) {
    /*
        21bb6c:	e1a0c00d 	mov	ip, sp
        21bb70:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        21bb74:	e24cb004 	sub	fp, ip, #4	; 0x4
        21bb78:	e1a04000 	mov	r4, r0
        21bb7c:	e1a05001 	mov	r5, r1
        21bb80:	e3a06965 	mov	r6, #1654784	; 0x194000
        21bb84:	e2866401 	add	r6, r6, #16777216	; 0x1000000
        21bb88:	e3a08001 	mov	r8, #1	; 0x1
        21bb8c:	e3a03000 	mov	r3, #0	; 0x0
        21bb90:	e584509c 	str	r5, [r4, #156]	; fField156
        21bb94:	e92d0008 	stmdb	sp!, {r3}
        21bb98:	e5940098 	ldr	r0, [r4, #152]	; fField152
        21bb9c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        21bba0:	e1a02005 	mov	r2, r5
        21bba4:	e1a01004 	mov	r1, r4
        21bba8:	e1a03006 	mov	r3, r6
        21bbac:	eb670ce5 	bl	1bdef48 <$CallHandleProblem(PrintConnect *, TPrinter *, long, unsigned long, unsigned char)>
        21bbb0:	e28dd004 	add	sp, sp, #4	; 0x4
        21bbb4:	e1a07000 	mov	r7, r0
        21bbb8:	e3300001 	teq	r0, #1	; 0x1
        21bbbc:	05c480a0 	streqb	r8, [r4, #160]	; fField160
        21bbc0:	0a000007 	beq	21bbe4 <TPSPrinter::DoHandleProblem(long)+0x78>
        21bbc4:	e1a00004 	mov	r0, r4
        21bbc8:	eb649537 	bl	1b410ac <TPSPrinter::$GetStatus(void)>
        21bbcc:	e1a01000 	mov	r1, r0
        21bbd0:	e1a00004 	mov	r0, r4
        21bbd4:	eb64911d 	bl	1b40050 <TPSPrinter::$ErrorIsProblem(long)>
        21bbd8:	e3300000 	teq	r0, #0	; 0x0
        21bbdc:	0a000005 	beq	21bbf8 <TPSPrinter::DoHandleProblem(long)+0x8c>
        21bbe0:	e5945010 	ldr	r5, [r4, #16]	; fField16
        21bbe4:	e3350000 	teq	r5, #0	; 0x0
        21bbe8:	0a000002 	beq	21bbf8 <TPSPrinter::DoHandleProblem(long)+0x8c>
        21bbec:	e5d400a0 	ldrb	r0, [r4, #160]	; fField160
        21bbf0:	e3300000 	teq	r0, #0	; 0x0
        21bbf4:	0affffe4 	beq	21bb8c <TPSPrinter::DoHandleProblem(long)+0x20>
        21bbf8:	e1a00007 	mov	r0, r7
        21bbfc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPSPrinter::ErrorIsFatal(long)
 * Address: 0021bc00
 */
TPSPrinter::ErrorIsFatal(long) {
    /*
        21bc00:	e291cb2b 	adds	ip, r1, #44032	; 0xac00
        21bc04:	d37c0043 	cmnle	ip, #67	; 0x43
        21bc08:	ba000003 	blt	21bc1c <TPSPrinter::ErrorIsFatal(long)+0x1c>
        21bc0c:	e291ccab 	adds	ip, r1, #43776	; 0xab00
        21bc10:	d37c00e0 	cmnle	ip, #224	; 0xe0
        21bc14:	d3a00001 	movle	r0, #1	; 0x1
        21bc18:	da000000 	ble	21bc20 <TPSPrinter::ErrorIsFatal(long)+0x20>
        21bc1c:	e3a00000 	mov	r0, #0	; 0x0
        21bc20:	e20000ff 	and	r0, r0, #255	; 0xff
        21bc24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__10TPSPrinterSFv
 * Address: 00388144
 */
void TPSPrinter::ClassInfo() {
    /*
        388144:	e24f0044 	sub	r0, pc, #68	; 0x44
        388148:	e1a0f00e 	mov	pc, lr
        38814c:	e3a00000 	mov	r0, #0	; 0x0
        388150:	e1a0f00e 	mov	pc, lr
        388154:	54505350 	ldrplb	r5, [r0], -#848	; fField848
        388158:	72696e74 	rsbvc	r6, r9, #1856	; 0x740
        38815c:	65720054 	ldrvsb	r0, [r2, -#84]!
        388160:	5072696e 	rsbpls	r6, r2, lr, ror #18
        388164:	74657200 	strvcbt	r7, [r5], -#512
        388170:	eafffff3 	b	388144 <ClassInfo__10TPSPrinterSFv>
        388174:	ea5edf85 	b	1b3ff90 <TPSPrinter::$Constructor(char *)>
        388178:	ea5edf91 	b	1b3ffc4 <TPSPrinter::$Delete(void)>
        38817c:	ea5ee7f0 	b	1b42144 <TPSPrinter::$Open(RefVar const &)>
        388180:	ea5edb70 	b	1b3ef48 <TPSPrinter::$Close(void)>
        388184:	ea5ee7f6 	b	1b42164 <TPSPrinter::$OpenPage(void)>
        388188:	ea5edb76 	b	1b3ef68 <TPSPrinter::$ClosePage(void)>
        38818c:	ea5eec18 	b	1b431f4 <TPSPrinter::$RepeatPage(void)>
        388190:	ea5ed758 	b	1b3def8 <TPSPrinter::$CancelJob(unsigned char)>
        388194:	ea5ee7db 	b	1b42108 <TPSPrinter::$IsProblemResolved(void)>
        388198:	ea5ef865 	b	1b46334 <TPSPrinter::$SetPortraitOrientation(unsigned char)>
        38819c:	ea5ef85a 	b	1b4630c <TPSPrinter::$FaxEndPage(long)>
        3881a0:	e1a0000f 	mov	r0, pc
        3881a4:	e1a0f00e 	mov	pc, lr
        3881a8:	54505350 	ldrplb	r5, [r0], -#848	; fField848
        3881ac:	72696e74 	rsbvc	r6, r9, #1856	; 0x740
        3881b0:	65724472 	ldrvsb	r4, [r2, -#1138]!	; fField1138
        3881b4:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        3881b8:	00000000 	andeq	r0, r0, r0
    */
}

