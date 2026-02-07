#include "include/PLocalTalkLink.h"

/**
 * Symbol: Sizeof__14PLocalTalkLinkSFv
 * Address: 00114258
 */
void PLocalTalkLink::Sizeof() {
    /*
        114258:	e3a0002c 	mov	r0, #44	; 0x2c
        11425c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PLocalTalkLink::New(void)
 * Address: 00114260
 */
PLocalTalkLink::New(void) {
    /*
        114260:	e3a01000 	mov	r1, #0	; 0x0
        114264:	e5801010 	str	r1, [r0, #16]	; fField16
        114268:	e5801014 	str	r1, [r0, #20]	; fField20
        11426c:	e5801018 	str	r1, [r0, #24]	; fField24
        114270:	e580101c 	str	r1, [r0, #28]	; fField28
        114274:	e5801020 	str	r1, [r0, #32]	; fField32
        114278:	e5801024 	str	r1, [r0, #36]	; fField36
        11427c:	e5801028 	str	r1, [r0, #40]	; fField40
        114280:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PLocalTalkLink::ReleaseNodeAddress(void)
 * Address: 00114284
 */
PLocalTalkLink::ReleaseNodeAddress(void) {
    /*
        114284:	e3a00000 	mov	r0, #0	; 0x0
        114288:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PLocalTalkLink::ConfirmNodeAddress(unsigned char)
 * Address: 0011428c
 */
PLocalTalkLink::ConfirmNodeAddress(unsigned char) {
    /*
        11428c:	e3a00000 	mov	r0, #0	; 0x0
        114290:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PLocalTalkLink::AcquireNodeID(unsigned char &)
 * Address: 00114294
 */
PLocalTalkLink::AcquireNodeID(unsigned char &) {
    /*
        114294:	e1a0c00d 	mov	ip, sp
        114298:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11429c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1142a0:	e1a04000 	mov	r4, r0
        1142a4:	e1a05001 	mov	r5, r1
        1142a8:	e5d11000 	ldrb	r1, [r1]
        1142ac:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1142b0:	e5c0100c 	strb	r1, [r0, #12]
        1142b4:	e1a00004 	mov	r0, r4
        1142b8:	e3a0100e 	mov	r1, #14	; 0xe
        1142bc:	e2811c01 	add	r1, r1, #256	; 0x100
        1142c0:	eb65b79c 	bl	1a82138 <PLocalTalkLink::$ControlCall(unsigned long)>
        1142c4:	e3300000 	teq	r0, #0	; 0x0
        1142c8:	05b41018 	ldreq	r1, [r4, #24]!	; fField24
        1142cc:	05910008 	ldreq	r0, [r1, #8]
        1142d0:	03300000 	teqeq	r0, #0	; 0x0
        1142d4:	05d11010 	ldreqb	r1, [r1, #16]	; fField16
        1142d8:	05c51000 	streqb	r1, [r5]
        1142dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PLocalTalkLink::ControlCall(unsigned long)
 * Address: 001142e0
 */
PLocalTalkLink::ControlCall(unsigned long) {
    /*
        1142e0:	e1a0c00d 	mov	ip, sp
        1142e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1142e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1142ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        1142f0:	e5902014 	ldr	r2, [r0, #20]	; fField20
        1142f4:	e5a21008 	str	r1, [r2, #8]!
        1142f8:	e280e010 	add	lr, r0, #16	; 0x10
        1142fc:	e89e5000 	ldmia	lr, {ip, lr}
        114300:	e5900018 	ldr	r0, [r0, #24]	; fField24
        114304:	e3a01030 	mov	r1, #48	; 0x30
        114308:	e3a02000 	mov	r2, #0	; 0x0
        11430c:	e3a04004 	mov	r4, #4	; 0x4
        114310:	e3a05000 	mov	r5, #0	; 0x0
        114314:	e3a03000 	mov	r3, #0	; 0x0
        114318:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        11431c:	e1a03005 	mov	r3, r5
        114320:	e1a01004 	mov	r1, r4
        114324:	e3a0002c 	mov	r0, #44	; 0x2c
        114328:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        11432c:	e1a0300e 	mov	r3, lr
        114330:	e92d0008 	stmdb	sp!, {r3}
        114334:	e28d3024 	add	r3, sp, #36	; 0x24
        114338:	e1a0000c 	mov	r0, ip
        11433c:	e3a02002 	mov	r2, #2	; 0x2
        114340:	e3a01001 	mov	r1, #1	; 0x1
        114344:	eb6b1a80 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        114348:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PLocalTalkLink::Delete(void)
 * Address: 0011434c
 */
PLocalTalkLink::Delete(void) {
    /*
        11434c:	ea65b784 	b	1a82164 <PLocalTalkLink::$DeActivate(void)>
    */
}

/**
 * Symbol: PLocalTalkLink::AllocateStuff(void)
 * Address: 00114350
 */
PLocalTalkLink::AllocateStuff(void) {
    /*
        114350:	e1a0c00d 	mov	ip, sp
        114354:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        114358:	e24cb004 	sub	fp, ip, #4	; 0x4
        11435c:	e1a04000 	mov	r4, r0
        114360:	e3a060a8 	mov	r6, #168	; 0xa8
        114364:	e2466b07 	sub	r6, r6, #7168	; 0x1c00
        114368:	e3a00008 	mov	r0, #8	; 0x8
        11436c:	eb6ae8f1 	bl	1bce738 <$__nw(unsigned int)>
        114370:	e3a07000 	mov	r7, #0	; 0x0
        114374:	e3500000 	cmp	r0, #0	; 0x0
        114378:	15c07004 	strneb	r7, [r0, #4]
        11437c:	15807000 	strne	r7, [r0]
        114380:	e5840010 	str	r0, [r4, #16]	; fField16
        114384:	0a000026 	beq	114424 <PLocalTalkLink::AllocateStuff(void)+0xd4>
        114388:	e3a0002c 	mov	r0, #44	; 0x2c
        11438c:	eb6ae8e9 	bl	1bce738 <$__nw(unsigned int)>
        114390:	e1b05000 	movs	r5, r0
        114394:	11a00005 	movne	r0, r5
        114398:	1b6b6d0c 	blne	1bef7d0 <TCommToolControlRequest::$__ct(void)>
        11439c:	e5845014 	str	r5, [r4, #20]	; fField20
        1143a0:	e3350000 	teq	r5, #0	; 0x0
        1143a4:	0a00001e 	beq	114424 <PLocalTalkLink::AllocateStuff(void)+0xd4>
        1143a8:	e3a00000 	mov	r0, #0	; 0x0
        1143ac:	eb6464cb 	bl	1a2d6e0 <TSerToolReply::$__ct(void)>
        1143b0:	e5840018 	str	r0, [r4, #24]	; fField24
        1143b4:	e3300000 	teq	r0, #0	; 0x0
        1143b8:	0a000019 	beq	114424 <PLocalTalkLink::AllocateStuff(void)+0xd4>
        1143bc:	e3a00000 	mov	r0, #0	; 0x0
        1143c0:	eb6b6d04 	bl	1bef7d8 <TCommToolGetRequest::$__ct(void)>
        1143c4:	e584001c 	str	r0, [r4, #28]	; fField28
        1143c8:	e3300000 	teq	r0, #0	; 0x0
        1143cc:	0a000014 	beq	114424 <PLocalTalkLink::AllocateStuff(void)+0xd4>
        1143d0:	e5a07014 	str	r7, [r0, #20]!	; fField20
        1143d4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1143d8:	e5a07018 	str	r7, [r0, #24]!	; fField24
        1143dc:	e3a00000 	mov	r0, #0	; 0x0
        1143e0:	eb6b6cf5 	bl	1bef7bc <TCommToolGetReply::$__ct(void)>
        1143e4:	e5840020 	str	r0, [r4, #32]	; fField32
        1143e8:	e3300000 	teq	r0, #0	; 0x0
        1143ec:	0a00000c 	beq	114424 <PLocalTalkLink::AllocateStuff(void)+0xd4>
        1143f0:	e3a00000 	mov	r0, #0	; 0x0
        1143f4:	eb6b6cf6 	bl	1bef7d4 <TCommToolPutRequest::$__ct(void)>
        1143f8:	e5840024 	str	r0, [r4, #36]	; fField36
        1143fc:	e3300000 	teq	r0, #0	; 0x0
        114400:	0a000007 	beq	114424 <PLocalTalkLink::AllocateStuff(void)+0xd4>
        114404:	e5a07014 	str	r7, [r0, #20]!	; fField20
        114408:	e5940024 	ldr	r0, [r4, #36]	; fField36
        11440c:	e5a07018 	str	r7, [r0, #24]!	; fField24
        114410:	e3a00000 	mov	r0, #0	; 0x0
        114414:	eb6b6ce7 	bl	1bef7b8 <TCommToolPutReply::$__ct(void)>
        114418:	e5a40028 	str	r0, [r4, #40]!	; fField40
        11441c:	e3300000 	teq	r0, #0	; 0x0
        114420:	13a06000 	movne	r6, #0	; 0x0
        114424:	e1a00006 	mov	r0, r6
        114428:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: PLocalTalkLink::Init(unsigned long *, unsigned long *)
 * Address: 0011442c
 */
PLocalTalkLink::Init(unsigned long *, unsigned long *) {
    /*
        11442c:	e1a0c00d 	mov	ip, sp
        114430:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        114434:	e24cb004 	sub	fp, ip, #4	; 0x4
        114438:	e1a04000 	mov	r4, r0
        11443c:	e1a06001 	mov	r6, r1
        114440:	e1a05002 	mov	r5, r2
        114444:	eb65b327 	bl	1a810e8 <PLocalTalkLink::$AllocateStuff(void)>
        114448:	e1b07000 	movs	r7, r0
        11444c:	1a00001e 	bne	1144cc <PLocalTalkLink::Init(unsigned long *, unsigned long *)+0xa0>
        114450:	e3a00001 	mov	r0, #1	; 0x1
        114454:	e5860000 	str	r0, [r6]
        114458:	e5850000 	str	r0, [r5]
        11445c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        114460:	eb6b0596 	bl	1bd5ac0 <TUPort::$Init(void)>
        114464:	e1b07000 	movs	r7, r0
        114468:	1a000017 	bne	1144cc <PLocalTalkLink::Init(unsigned long *, unsigned long *)+0xa0>
        11446c:	e24dd018 	sub	sp, sp, #24	; 0x18
        114470:	e1a0000d 	mov	r0, sp
        114474:	eb6a859a 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        114478:	e1a0000d 	mov	r0, sp
        11447c:	e59f101c 	ldr	r1, [pc, #1c]	; 1144a0 <PLocalTalkLink::Init(unsigned long *, unsigned long *)+0x74>
        114480:	eb658dd2 	bl	1a77bd0 <$CMGetOptionsForLink(TOptionArray *, unsigned long)>
        114484:	e1b07000 	movs	r7, r0
        114488:	0a000005 	beq	1144a4 <PLocalTalkLink::Init(unsigned long *, unsigned long *)+0x78>
        11448c:	e1a0000d 	mov	r0, sp
        114490:	e3a01000 	mov	r1, #0	; 0x0
        114494:	eb6a89a4 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        114498:	e28dd018 	add	sp, sp, #24	; 0x18
        11449c:	ea00000a 	b	1144cc <PLocalTalkLink::Init(unsigned long *, unsigned long *)+0xa0>
        1144a0:	6c6c6170 	stfvse	f6, [ip], -#448
        1144a4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1144a8:	e1a0100d 	mov	r1, sp
        1144ac:	e28d000c 	add	r0, sp, #12	; 0xc
        1144b0:	eb6a8dc3 	bl	1bb7bc4 <$CMStartServiceInternal(TOptionArray *, TServiceInfo *)>
        1144b4:	e1b07000 	movs	r7, r0
        1144b8:	0a000005 	beq	1144d4 <PLocalTalkLink::Init(unsigned long *, unsigned long *)+0xa8>
        1144bc:	e28d000c 	add	r0, sp, #12	; 0xc
        1144c0:	e3a01000 	mov	r1, #0	; 0x0
        1144c4:	eb6a8998 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        1144c8:	e28dd024 	add	sp, sp, #36	; 0x24
        1144cc:	e1a00007 	mov	r0, r7
        1144d0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1144d4:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1144d8:	e59d1004 	ldr	r1, [sp, #4]
        1144dc:	eb6af0d9 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1144e0:	e28dd00c 	add	sp, sp, #12	; 0xc
        1144e4:	eaffffe8 	b	11448c <PLocalTalkLink::Init(unsigned long *, unsigned long *)+0x60>
    */
}

/**
 * Symbol: PLocalTalkLink::Activate(void)
 * Address: 001144e8
 */
PLocalTalkLink::Activate(void) {
    /*
        1144e8:	e3a00000 	mov	r0, #0	; 0x0
        1144ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PLocalTalkLink::DeActivate(void)
 * Address: 001144f0
 */
PLocalTalkLink::DeActivate(void) {
    /*
        1144f0:	e1a0c00d 	mov	ip, sp
        1144f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1144f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1144fc:	e1a04000 	mov	r4, r0
        114500:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        114504:	e28d0010 	add	r0, sp, #16	; 0x10
        114508:	eb6b6cb0 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
        11450c:	e1a0000d 	mov	r0, sp
        114510:	eb6b6ca7 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        114514:	e3a00002 	mov	r0, #2	; 0x2
        114518:	e58d0018 	str	r0, [sp, #24]	; fField24
        11451c:	e24dd004 	sub	sp, sp, #4	; 0x4
        114520:	e28d0004 	add	r0, sp, #4	; 0x4
        114524:	e3a01010 	mov	r1, #16	; 0x10
        114528:	e3a02000 	mov	r2, #0	; 0x0
        11452c:	e3a0c004 	mov	ip, #4	; 0x4
        114530:	e5b4e010 	ldr	lr, [r4, #16]!	; fField16
        114534:	e3a04000 	mov	r4, #0	; 0x0
        114538:	e3a03000 	mov	r3, #0	; 0x0
        11453c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        114540:	e1a03004 	mov	r3, r4
        114544:	e1a0100c 	mov	r1, ip
        114548:	e3a0000c 	mov	r0, #12	; 0xc
        11454c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        114550:	e28d3034 	add	r3, sp, #52	; 0x34
        114554:	e92d0008 	stmdb	sp!, {r3}
        114558:	e28d3024 	add	r3, sp, #36	; 0x24
        11455c:	e1a0000e 	mov	r0, lr
        114560:	e3a02002 	mov	r2, #2	; 0x2
        114564:	e3a01001 	mov	r1, #1	; 0x1
        114568:	eb6b19f7 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        11456c:	e28dd024 	add	sp, sp, #36	; 0x24
        114570:	e3300000 	teq	r0, #0	; 0x0
        114574:	059d000c 	ldreq	r0, [sp, #12]
        114578:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PLocalTalkLink::Write(TAddress *, CBufferList *)
 * Address: 0011457c
 */
PLocalTalkLink::Write(TAddress *, CBufferList *) {
    /*
        11457c:	e1a0c00d 	mov	ip, sp
        114580:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        114584:	e24cb004 	sub	fp, ip, #4	; 0x4
        114588:	e1a04000 	mov	r4, r0
        11458c:	e24dd004 	sub	sp, sp, #4	; 0x4
        114590:	e5900024 	ldr	r0, [r0, #36]	; fField36
        114594:	e5a02008 	str	r2, [r0, #8]!
        114598:	e3a00001 	mov	r0, #1	; 0x1
        11459c:	e5941024 	ldr	r1, [r4, #36]	; fField36
        1145a0:	e5c10011 	strb	r0, [r1, #17]
        1145a4:	e5941024 	ldr	r1, [r4, #36]	; fField36
        1145a8:	e5c10012 	strb	r0, [r1, #18]
        1145ac:	e3a01014 	mov	r1, #20	; 0x14
        1145b0:	e3a02000 	mov	r2, #0	; 0x0
        1145b4:	e3a05002 	mov	r5, #2	; 0x2
        1145b8:	e3a06000 	mov	r6, #0	; 0x0
        1145bc:	e3a03000 	mov	r3, #0	; 0x0
        1145c0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1145c4:	e594c010 	ldr	ip, [r4, #16]	; fField16
        1145c8:	e594e024 	ldr	lr, [r4, #36]	; fField36
        1145cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1145d0:	e1a03006 	mov	r3, r6
        1145d4:	e1a01005 	mov	r1, r5
        1145d8:	e3a0001c 	mov	r0, #28	; 0x1c
        1145dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1145e0:	e1a0300e 	mov	r3, lr
        1145e4:	e92d0008 	stmdb	sp!, {r3}
        1145e8:	e28d3024 	add	r3, sp, #36	; 0x24
        1145ec:	e1a0000c 	mov	r0, ip
        1145f0:	e3a02002 	mov	r2, #2	; 0x2
        1145f4:	e3a01001 	mov	r1, #1	; 0x1
        1145f8:	eb6b19d3 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1145fc:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        114600:	e5900008 	ldr	r0, [r0, #8]
        114604:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PLocalTalkLink::PostRead(TUAsyncMessage *, CBufferList *)
 * Address: 00114608
 */
PLocalTalkLink::PostRead(TUAsyncMessage *, CBufferList *) {
    /*
        114608:	e1a0c00d 	mov	ip, sp
        11460c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        114610:	e24cb004 	sub	fp, ip, #4	; 0x4
        114614:	e1a0c001 	mov	ip, r1
        114618:	e590101c 	ldr	r1, [r0, #28]	; fField28
        11461c:	e3a0e000 	mov	lr, #0	; 0x0
        114620:	e2811008 	add	r1, r1, #8	; 0x8
        114624:	e8814004 	stmia	r1, {r2, lr}
        114628:	e2411008 	sub	r1, r1, #8	; 0x8
        11462c:	e5c1e010 	strb	lr, [r1, #16]	; fField16
        114630:	e5c1e011 	strb	lr, [r1, #17]
        114634:	e5c1e012 	strb	lr, [r1, #18]
        114638:	e581e014 	str	lr, [r1, #20]	; fField20
        11463c:	e5a1e018 	str	lr, [r1, #24]!	; fField24
        114640:	e5904010 	ldr	r4, [r0, #16]	; fField16
        114644:	e590501c 	ldr	r5, [r0, #28]	; fField28
        114648:	e5900020 	ldr	r0, [r0, #32]	; fField32
        11464c:	e3a01018 	mov	r1, #24	; 0x18
        114650:	e3a02000 	mov	r2, #0	; 0x0
        114654:	e3a03000 	mov	r3, #0	; 0x0
        114658:	e3a06001 	mov	r6, #1	; 0x1
        11465c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        114660:	e1a0300e 	mov	r3, lr
        114664:	e3a02001 	mov	r2, #1	; 0x1
        114668:	e1a01006 	mov	r1, r6
        11466c:	e3a0001c 	mov	r0, #28	; 0x1c
        114670:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        114674:	e1a03005 	mov	r3, r5
        114678:	e92d0008 	stmdb	sp!, {r3}
        11467c:	e1a00004 	mov	r0, r4
        114680:	e3a03000 	mov	r3, #0	; 0x0
        114684:	e49c1008 	ldr	r1, [ip], #8
        114688:	e59c2000 	ldr	r2, [ip]
        11468c:	eb6b19ae 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        114690:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PLocalTalkLink::AcquireNodeAddress(unsigned char &, unsigned long &)
 * Address: 00114694
 */
PLocalTalkLink::AcquireNodeAddress(unsigned char &, unsigned long &) {
    /*
        114694:	ea65b28e 	b	1a810d4 <PLocalTalkLink::$AcquireNodeID(unsigned char &)>
    */
}

/**
 * Symbol: ClassInfo__14PLocalTalkLinkSFv
 * Address: 00385508
 */
void PLocalTalkLink::ClassInfo() {
    /*
        385508:	e24f0044 	sub	r0, pc, #68	; 0x44
        38550c:	e1a0f00e 	mov	pc, lr
        385510:	e3a00000 	mov	r0, #0	; 0x0
        385514:	e1a0f00e 	mov	pc, lr
        385518:	504c6f63 	subpl	r6, ip, r3, ror #30
        38551c:	616c5461 	cmnvs	ip, r1, ror #8
        385520:	6c6b4c69 	stcvsl	12, cr4, [fp], -#420
        385524:	6e6b0050 	mcrvs	0, 3, r0, cr11, cr0, {2}
        385528:	4c696e6b 	stcmil	14, cr6, [r9], -#428
        38552c:	0061746c 	rsbeq	r7, r1, ip, ror #8
        385530:	6b006c6c 	blvs	3a06e8 <bpWeight+0xbdf8>
        385534:	61700000 	cmnvs	r0, r0
        385538:	00000000 	andeq	r0, r0, r0
        38553c:	eafffff1 	b	385508 <ClassInfo__14PLocalTalkLinkSFv>
        385540:	ea5bfb43 	b	1a84254 <PLocalTalkLink::$New(void)>
        385544:	ea5bf308 	b	1a8216c <PLocalTalkLink::$Delete(void)>
        385548:	ea5bf71d 	b	1a831c4 <PLocalTalkLink::$Init(unsigned long *, unsigned long *)>
        38554c:	ea5beee1 	b	1a810d8 <PLocalTalkLink::$Activate(void)>
        385550:	ea5bf303 	b	1a82164 <PLocalTalkLink::$DeActivate(void)>
        385554:	ea5beedd 	b	1a810d0 <PLocalTalkLink::$AcquireNodeAddress(unsigned char &, unsigned long &)>
        385558:	ea5bff5b 	b	1a852cc <PLocalTalkLink::$ReleaseNodeAddress(void)>
        38555c:	ea5bf2f2 	b	1a8212c <PLocalTalkLink::$ConfirmNodeAddress(unsigned char)>
        385560:	ea5c0375 	b	1a8633c <PLocalTalkLink::$Write(TAddress *, CBufferList *)>
        385564:	ea5bfb43 	b	1a84278 <PLocalTalkLink::$PostRead(TUAsyncMessage *, CBufferList *)>
        385568:	e1a0000f 	mov	r0, pc
        38556c:	e1a0f00e 	mov	pc, lr
        385570:	50415453 	subpl	r5, r1, r3, asr r4
        385574:	7461636b 	strvcbt	r6, [r1], -#875
        385578:	00000000 	andeq	r0, r0, r0
    */
}

