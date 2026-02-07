#include "include/TWRecRecognizer.h"

/**
 * Symbol: TWRecRecognizer::HandleUnit(TUnitPublic *)
 * Address: 00144174
 */
TWRecRecognizer::HandleUnit(TUnitPublic *) {
    /*
        144174:	ea65df1e 	b	1abbdf4 <$WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)>
    */
}

/**
 * Symbol: TWRecRecognizer::ConfigureArea(TRecArea *, RefVar const &)
 * Address: 00144178
 */
TWRecRecognizer::ConfigureArea(TRecArea *, RefVar const &) {
    /*
        144178:	e1a0c00d 	mov	ip, sp
        14417c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        144180:	e24cb004 	sub	fp, ip, #4	; 0x4
        144184:	e1a06000 	mov	r6, r0
        144188:	e1a04001 	mov	r4, r1
        14418c:	e1a05002 	mov	r5, r2
        144190:	e5901000 	ldr	r1, [r0]
        144194:	e1a0e00f 	mov	lr, pc
        144198:	e281f00c 	add	pc, r1, #12	; 0xc
        14419c:	e1a01000 	mov	r1, r0
        1441a0:	e1a00004 	mov	r0, r4
        1441a4:	eb65a53a 	bl	1aad694 <$DomainOn(TRecArea *, unsigned long)>
        1441a8:	e3300000 	teq	r0, #0	; 0x0
        1441ac:	0a00001e 	beq	14422c <TWRecRecognizer::ConfigureArea(TRecArea *, RefVar const &)+0xb4>
        1441b0:	e1a00006 	mov	r0, r6
        1441b4:	e5961000 	ldr	r1, [r6]
        1441b8:	e1a0e00f 	mov	lr, pc
        1441bc:	e281f008 	add	pc, r1, #8	; 0x8
        1441c0:	e1a07000 	mov	r7, r0
        1441c4:	e1a00004 	mov	r0, r4
        1441c8:	e3a02001 	mov	r2, #1	; 0x1
        1441cc:	e59f6060 	ldr	r6, [pc, #60]	; 144234 <TWRecRecognizer::ConfigureArea(TRecArea *, RefVar const &)+0xbc>
        1441d0:	e1a01006 	mov	r1, r6
        1441d4:	eb686b63 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
        1441d8:	e1a02000 	mov	r2, r0
        1441dc:	e1a01005 	mov	r1, r5
        1441e0:	e1a00007 	mov	r0, r7
        1441e4:	e5973000 	ldr	r3, [r7]
        1441e8:	e1a0e00f 	mov	lr, pc
        1441ec:	e283f040 	add	pc, r3, #64	; 0x40
        1441f0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1441f4:	e1a01005 	mov	r1, r5
        1441f8:	e1a0000d 	mov	r0, sp
        1441fc:	eb6594a1 	bl	1aa9488 <$BuildChains(TDictChain **, RefVar const &)>
        144200:	e3a00000 	mov	r0, #0	; 0x0
        144204:	e79d1100 	ldr	r1, [sp, r0, lsl #2]
        144208:	e0842100 	add	r2, r4, r0, lsl #2
        14420c:	e2800001 	add	r0, r0, #1	; 0x1
        144210:	e3500003 	cmp	r0, #3	; 0x3
        144214:	e5a21020 	str	r1, [r2, #32]!
        144218:	bafffff9 	blt	144204 <TWRecRecognizer::ConfigureArea(TRecArea *, RefVar const &)+0x8c>
        14421c:	e1a00004 	mov	r0, r4
        144220:	e1a01006 	mov	r1, r6
        144224:	eb6873b3 	bl	1b610f8 <TRecArea::$ParamsAllSet(unsigned long)>
        144228:	e28dd00c 	add	sp, sp, #12	; 0xc
        14422c:	e3a00000 	mov	r0, #0	; 0x0
        144230:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        144234:	57524543 	ldrplb	r4, [r2, -r3, asr #10]
    */
}

/**
 * Symbol: TWRecRecognizer::UnitConfidence(TUnitPublic *)
 * Address: 00144238
 */
TWRecRecognizer::UnitConfidence(TUnitPublic *) {
    /*
        144238:	e1a0c00d 	mov	ip, sp
        14423c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        144240:	e24cb004 	sub	fp, ip, #4	; 0x4
        144244:	e1a04001 	mov	r4, r1
        144248:	e5901000 	ldr	r1, [r0]
        14424c:	e1a0e00f 	mov	lr, pc
        144250:	e281f008 	add	pc, r1, #8	; 0x8
        144254:	e5941000 	ldr	r1, [r4]
        144258:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        14425c:	ea688837 	b	1b66340 <TWRecDomain::$UnitConfidence(TSIUnit *)>
    */
}

/**
 * Symbol: TWRecRecognizer::Sleep(void)
 * Address: 00144260
 */
TWRecRecognizer::Sleep(void) {
    /*
        144260:	e1a0c00d 	mov	ip, sp
        144264:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        144268:	e24cb004 	sub	fp, ip, #4	; 0x4
        14426c:	e5901000 	ldr	r1, [r0]
        144270:	e1a0e00f 	mov	lr, pc
        144274:	e281f008 	add	pc, r1, #8	; 0x8
        144278:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        14427c:	ea68882a 	b	1b6632c <TWRecDomain::$Sleep(void)>
    */
}

/**
 * Symbol: TWRecRecognizer::WakeUp(void)
 * Address: 00144280
 */
TWRecRecognizer::WakeUp(void) {
    /*
        144280:	e1a0c00d 	mov	ip, sp
        144284:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        144288:	e24cb004 	sub	fp, ip, #4	; 0x4
        14428c:	e5901000 	ldr	r1, [r0]
        144290:	e1a0e00f 	mov	lr, pc
        144294:	e281f008 	add	pc, r1, #8	; 0x8
        144298:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        14429c:	ea688830 	b	1b66364 <TWRecDomain::$WakeUp(void)>
        1442a0:	e1a0c00d 	mov	ip, sp
        1442a4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1442a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1442ac:	e1a04000 	mov	r4, r0
        1442b0:	e3a08000 	mov	r8, #0	; 0x0
        1442b4:	e59f60bc 	ldr	r6, [pc, #bc]	; 144378 <TWRecRecognizer::WakeUp(void)+0xf8>
        1442b8:	e1a01004 	mov	r1, r4
        1442bc:	e5960014 	ldr	r0, [r6, #20]
        1442c0:	eb65b57d 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
        1442c4:	e1a05000 	mov	r5, r0
        1442c8:	e5b60014 	ldr	r0, [r6, #20]!
        1442cc:	e59f70a8 	ldr	r7, [pc, #a8]	; 14437c <TWRecRecognizer::WakeUp(void)+0xfc>
        1442d0:	e5971000 	ldr	r1, [r7]
        1442d4:	eb65b578 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
        1442d8:	e1b06000 	movs	r6, r0
        1442dc:	0a000010 	beq	144324 <TWRecRecognizer::WakeUp(void)+0xa4>
        1442e0:	e1a09006 	mov	r9, r6
        1442e4:	e1a00006 	mov	r0, r6
        1442e8:	e5961000 	ldr	r1, [r6]
        1442ec:	e1a0e00f 	mov	lr, pc
        1442f0:	e281f01c 	add	pc, r1, #28	; 0x1c
        1442f4:	e1a01000 	mov	r1, r0
        1442f8:	e1a00009 	mov	r0, r9
        1442fc:	e3a02000 	mov	r2, #0	; 0x0
        144300:	e5993000 	ldr	r3, [r9]
        144304:	e1a0e00f 	mov	lr, pc
        144308:	e283f004 	add	pc, r3, #4	; 0x4
        14430c:	e1a00006 	mov	r0, r6
        144310:	e5961000 	ldr	r1, [r6]
        144314:	e1a0e00f 	mov	lr, pc
        144318:	e281f028 	add	pc, r1, #40	; 0x28
        14431c:	e3a00000 	mov	r0, #0	; 0x0
        144320:	e5870000 	str	r0, [r7]
        144324:	e3350000 	teq	r5, #0	; 0x0
        144328:	0a00000f 	beq	14436c <TWRecRecognizer::WakeUp(void)+0xec>
        14432c:	e1a00005 	mov	r0, r5
        144330:	e5951000 	ldr	r1, [r5]
        144334:	e1a0e00f 	mov	lr, pc
        144338:	e281f01c 	add	pc, r1, #28	; 0x1c
        14433c:	e1a01000 	mov	r1, r0
        144340:	e1a02000 	mov	r2, r0
        144344:	e1a00005 	mov	r0, r5
        144348:	e5953000 	ldr	r3, [r5]
        14434c:	e1a0e00f 	mov	lr, pc
        144350:	e283f004 	add	pc, r3, #4	; 0x4
        144354:	e1a00005 	mov	r0, r5
        144358:	e5874000 	str	r4, [r7]
        14435c:	e5951000 	ldr	r1, [r5]
        144360:	e1a0e00f 	mov	lr, pc
        144364:	e281f02c 	add	pc, r1, #44	; 0x2c
        144368:	e3a08001 	mov	r8, #1	; 0x1
        14436c:	eb656aed 	bl	1a9ef28 <$PurgeAreaCache(void)>
        144370:	e1a00008 	mov	r0, r8
        144374:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        144378:	0c106e88 	ldceq	14, cr6, [r0], -#544
        14437c:	0c101844 	ldceq	8, cr1, [r0], -#272
    */
}

