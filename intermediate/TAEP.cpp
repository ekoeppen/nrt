#include "include/TAEP.h"

/**
 * Symbol: TAEP::__ct(void)
 * Address: 000251cc
 */
TAEP::TAEP(void) {
    /*
         251cc:	e1a0c00d 	mov	ip, sp
         251d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         251d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         251d8:	e1b04000 	movs	r4, r0
         251dc:	1a000003 	bne	251f0 <TAEP::__ct(void)+0x24>
         251e0:	e3a00018 	mov	r0, #24	; 0x18
         251e4:	eb6ea553 	bl	1bce738 <$__nw(unsigned int)>
         251e8:	e1b04000 	movs	r4, r0
         251ec:	0a000003 	beq	25200 <TAEP::__ct(void)+0x34>
         251f0:	e1a00004 	mov	r0, r4
         251f4:	eb6931ad 	bl	1a718b0 <TStackObject::$__ct(void)>
         251f8:	e59f0008 	ldr	r0, [pc, #8]	; 25208 <TAEP::__ct(void)+0x3c>
         251fc:	e5840000 	str	r0, [r4]
         25200:	e1a00004 	mov	r0, r4
         25204:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         25208:	0001f370 	andeq	pc, r1, r0, ror r3
    */
}

/**
 * Symbol: TAEP::__dt(void)
 * Address: 0002520c
 */
TAEP::~TAEP(void) {
    /*
         2520c:	e1a0c00d 	mov	ip, sp
         25210:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         25214:	e24cb004 	sub	fp, ip, #4	; 0x4
         25218:	e1a04000 	mov	r4, r0
         2521c:	e1a05001 	mov	r5, r1
         25220:	e59f0020 	ldr	r0, [pc, #20]	; 25248 <TAEP::__dt(void)+0x3c>	; fField20
         25224:	e5840000 	str	r0, [r4]
         25228:	e1a00004 	mov	r0, r4
         2522c:	e3a01000 	mov	r1, #0	; 0x0
         25230:	eb6939d6 	bl	1a73990 <TStackObject::$__dt(void)>
         25234:	e3150001 	tst	r5, #1	; 0x1
         25238:	11a00004 	movne	r0, r4
         2523c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         25240:	1a6ea126 	bne	1bcd6e0 <$__dl(void *)>
         25244:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         25248:	0001f370 	andeq	pc, r1, r0, ror r3
    */
}

/**
 * Symbol: TAEP::ATLKShutDown(TAppleTalkMessage *)
 * Address: 0002524c
 */
TAEP::ATLKShutDown(TAppleTalkMessage *) {
    /*
         2524c:	e3a00000 	mov	r0, #0	; 0x0
         25250:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEP::ATLKSocketClosed(TAppleTalkMessage *)
 * Address: 00025254
 */
TAEP::ATLKSocketClosed(TAppleTalkMessage *) {
    /*
         25254:	e3a00000 	mov	r0, #0	; 0x0
         25258:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEP::Init(void)
 * Address: 0002525c
 */
TAEP::Init(void) {
    /*
         2525c:	e59f2004 	ldr	r2, [pc, #4]	; 25268 <TAEP::Init(void)+0xc>
         25260:	e59f1004 	ldr	r1, [pc, #4]	; 2526c <TAEP::Init(void)+0x10>
         25264:	ea695acf 	b	1a7bda8 <TStackObject::$Init(unsigned long, unsigned long)>
         25268:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         2526c:	61657020 	cmnvs	r5, r0, lsr #32
    */
}

/**
 * Symbol: TAEP::Read(TAppleTalkMessage *)
 * Address: 00025270
 */
TAEP::Read(TAppleTalkMessage *) {
    /*
         25270:	e1a0c00d 	mov	ip, sp
         25274:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         25278:	e24cb004 	sub	fp, ip, #4	; 0x4
         2527c:	e1a04000 	mov	r4, r0
         25280:	e1a05001 	mov	r5, r1
         25284:	e5d10020 	ldrb	r0, [r1, #32]
         25288:	e3300004 	teq	r0, #4	; 0x4
         2528c:	1a000020 	bne	25314 <TAEP::Read(TAppleTalkMessage *)+0xa4>
         25290:	e5950028 	ldr	r0, [r5, #40]
         25294:	e1a06000 	mov	r6, r0
         25298:	e590002c 	ldr	r0, [r0, #44]	; fField44
         2529c:	e250cf92 	subs	ip, r0, #584	; 0x248
         252a0:	235c0001 	cmpcs	ip, #1	; 0x1
         252a4:	8a00001a 	bhi	25314 <TAEP::Read(TAppleTalkMessage *)+0xa4>
         252a8:	e1a00006 	mov	r0, r6
         252ac:	eb6f39c8 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         252b0:	e5b61028 	ldr	r1, [r6, #40]!
         252b4:	e0800001 	add	r0, r0, r1
         252b8:	e5d00000 	ldrb	r0, [r0]
         252bc:	e3300001 	teq	r0, #1	; 0x1
         252c0:	1a000013 	bne	25314 <TAEP::Read(TAppleTalkMessage *)+0xa4>
         252c4:	e5950028 	ldr	r0, [r5, #40]
         252c8:	e590002c 	ldr	r0, [r0, #44]	; fField44
         252cc:	e3500000 	cmp	r0, #0	; 0x0
         252d0:	9a00000f 	bls	25314 <TAEP::Read(TAppleTalkMessage *)+0xa4>
         252d4:	e3a00000 	mov	r0, #0	; 0x0
         252d8:	e585002c 	str	r0, [r5, #44]	; fField44
         252dc:	e5956028 	ldr	r6, [r5, #40]
         252e0:	e1a00006 	mov	r0, r6
         252e4:	eb6f39ba 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         252e8:	e5b61028 	ldr	r1, [r6, #40]!
         252ec:	e0800001 	add	r0, r0, r1
         252f0:	e3a01002 	mov	r1, #2	; 0x2
         252f4:	e5c01000 	strb	r1, [r0]
         252f8:	e2850014 	add	r0, r5, #20	; 0x14
         252fc:	e3a01004 	mov	r1, #4	; 0x4
         25300:	e5c01001 	strb	r1, [r0, #1]
         25304:	e1a01005 	mov	r1, r5
         25308:	e1a00004 	mov	r0, r4
         2530c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         25310:	ea696b59 	b	1a8007c <TAEP::$Write(TAppleTalkMessage *)>
         25314:	e3e00070 	mvn	r0, #112	; 0x70
         25318:	e2400a03 	sub	r0, r0, #12288	; 0x3000
         2531c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAEP::Write(TAppleTalkMessage *)
 * Address: 00025320
 */
TAEP::Write(TAppleTalkMessage *) {
    /*
         25320:	e1a0c00d 	mov	ip, sp
         25324:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         25328:	e24cb004 	sub	fp, ip, #4	; 0x4
         2532c:	e1a05001 	mov	r5, r1
         25330:	e3a04000 	mov	r4, #0	; 0x0
         25334:	e5910024 	ldr	r0, [r1, #36]
         25338:	e3100001 	tst	r0, #1	; 0x1
         2533c:	1a00001d 	bne	253b8 <TAEP::Write(TAppleTalkMessage *)+0x98>
         25340:	e24dd024 	sub	sp, sp, #36	; 0x24
         25344:	e28d000c 	add	r0, sp, #12	; 0xc
         25348:	eb693165 	bl	1a718e4 <TWriteElement::$__ct(void)>
         2534c:	e1a0000d 	mov	r0, sp
         25350:	eb693155 	bl	1a718ac <TWriteChain::$__ct(void)>
         25354:	e5950028 	ldr	r0, [r5, #40]
         25358:	e1a06000 	mov	r6, r0
         2535c:	e590402c 	ldr	r4, [r0, #44]	; fField44
         25360:	eb6f399b 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         25364:	e5b61028 	ldr	r1, [r6, #40]!
         25368:	e0801001 	add	r1, r0, r1
         2536c:	e28d000c 	add	r0, sp, #12	; 0xc
         25370:	e3a03002 	mov	r3, #2	; 0x2
         25374:	e1a02004 	mov	r2, r4
         25378:	eb695a8f 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         2537c:	e28d100c 	add	r1, sp, #12	; 0xc
         25380:	e1a0000d 	mov	r0, sp
         25384:	eb693da5 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
         25388:	e2850014 	add	r0, r5, #20	; 0x14
         2538c:	e1a0100d 	mov	r1, sp
         25390:	e3a02004 	mov	r2, #4	; 0x4
         25394:	eb696f40 	bl	1a8109c <$WriteSocket(TAddress *, TWriteChain *, unsigned char)>
         25398:	e1a04000 	mov	r4, r0
         2539c:	e1a0000d 	mov	r0, sp
         253a0:	eb694e21 	bl	1a78c2c <TWriteChain::$Destroy(void)>
         253a4:	e28d000c 	add	r0, sp, #12	; 0xc
         253a8:	e3a01000 	mov	r1, #0	; 0x0
         253ac:	e1a0e00f 	mov	lr, pc
         253b0:	e59df00c 	ldr	pc, [sp, #12]
         253b4:	e28dd024 	add	sp, sp, #36	; 0x24
         253b8:	e1a00004 	mov	r0, r4
         253bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAEP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)
 * Address: 000253c0
 */
TAEP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *) {
    /*
         253c0:	e1a01003 	mov	r1, r3
         253c4:	e5932010 	ldr	r2, [r3, #16]
         253c8:	e3320006 	teq	r2, #6	; 0x6
         253cc:	0a6962c4 	beq	1a7dee4 <TAEP::$Read(TAppleTalkMessage *)>
         253d0:	e332000a 	teq	r2, #10	; 0xa
         253d4:	0a696b28 	beq	1a8007c <TAEP::$Write(TAppleTalkMessage *)>
         253d8:	13e0006f 	mvnne	r0, #111	; 0x6f
         253dc:	12400a03 	subne	r0, r0, #12288	; 0x3000
         253e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEP::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 000253e4
 */
TAEP::ATLKAttachLink(TAppleTalkMessage *) {
    /*
         253e4:	e3a00000 	mov	r0, #0	; 0x0
         253e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEP::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 000253ec
 */
TAEP::ATLKDetachLink(TAppleTalkMessage *) {
    /*
         253ec:	e3a00000 	mov	r0, #0	; 0x0
         253f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEP::ATLKOpen(TAppleTalkMessage *)
 * Address: 000253f4
 */
TAEP::ATLKOpen(TAppleTalkMessage *) {
    /*
         253f4:	e1a0c00d 	mov	ip, sp
         253f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         253fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         25400:	e1a04000 	mov	r4, r0
         25404:	e3a00000 	mov	r0, #0	; 0x0
         25408:	e5941014 	ldr	r1, [r4, #20]	; fField20
         2540c:	e3310000 	teq	r1, #0	; 0x0
         25410:	1a000007 	bne	25434 <TAEP::ATLKOpen(TAppleTalkMessage *)+0x40>
         25414:	e3a00004 	mov	r0, #4	; 0x4
         25418:	e56d0004 	strb	r0, [sp, -#4]!
         2541c:	e1a0000d 	mov	r0, sp
         25420:	e59f101c 	ldr	r1, [pc, #1c]	; 25444 <TAEP::ATLKOpen(TAppleTalkMessage *)+0x50>
         25424:	eb69629f 	bl	1a7dea8 <$OpenSocket(unsigned char &, unsigned long)>
         25428:	e28dd004 	add	sp, sp, #4	; 0x4
         2542c:	e3300000 	teq	r0, #0	; 0x0
         25430:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         25434:	e5941014 	ldr	r1, [r4, #20]	; fField20
         25438:	e2811001 	add	r1, r1, #1	; 0x1
         2543c:	e5a41014 	str	r1, [r4, #20]!	; fField20
         25440:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         25444:	61657020 	cmnvs	r5, r0, lsr #32
    */
}

/**
 * Symbol: TAEP::ATLKClose(TAppleTalkMessage *)
 * Address: 00025448
 */
TAEP::ATLKClose(TAppleTalkMessage *) {
    /*
         25448:	e3a01000 	mov	r1, #0	; 0x0
         2544c:	e5902014 	ldr	r2, [r0, #20]	; fField20
         25450:	e2422001 	sub	r2, r2, #1	; 0x1
         25454:	e5a02014 	str	r2, [r0, #20]!	; fField20
         25458:	e1a00001 	mov	r0, r1
         2545c:	e1a0f00e 	mov	pc, lr
    */
}

