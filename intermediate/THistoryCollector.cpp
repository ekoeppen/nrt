#include "include/THistoryCollector.h"

/**
 * Symbol: THistoryCollector::Add(unsigned long)
 * Address: 002dc1a4
 */
THistoryCollector::Add(unsigned long) {
    /*
        2dc1a4:	e5902010 	ldr	r2, [r0, #16]	; fField16
        2dc1a8:	e3120010 	tst	r2, #16	; 0x10
        2dc1ac:	1a000002 	bne	2dc1bc <THistoryCollector::Add(unsigned long)+0x18>
        2dc1b0:	e3120001 	tst	r2, #1	; 0x1
        2dc1b4:	1a6334bf 	bne	1ba94b8 <THistoryCollector::$AddReset(unsigned long)>
        2dc1b8:	e1a0f00e 	mov	pc, lr
        2dc1bc:	e5902018 	ldr	r2, [r0, #24]	; fField24
        2dc1c0:	e5903068 	ldr	r3, [r0, #104]	; fField104
        2dc1c4:	e5933000 	ldr	r3, [r3]
        2dc1c8:	e3833001 	orr	r3, r3, #1	; 0x1
        2dc1cc:	e4823004 	str	r3, [r2], #4
        2dc1d0:	e4821004 	str	r1, [r2], #4
        2dc1d4:	e590105c 	ldr	r1, [r0, #92]	; fField92
        2dc1d8:	e1310002 	teq	r1, r2
        2dc1dc:	05902014 	ldreq	r2, [r0, #20]	; fField20
        2dc1e0:	e5a02018 	str	r2, [r0, #24]!	; fField24
        2dc1e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THistoryCollector::AddReset(unsigned long)
 * Address: 002dc1e8
 */
THistoryCollector::AddReset(unsigned long) {
    /*
        2dc1e8:	e1a0c00d 	mov	ip, sp
        2dc1ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dc1f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dc1f4:	e1a04000 	mov	r4, r0
        2dc1f8:	e1a05001 	mov	r5, r1
        2dc1fc:	e3a01001 	mov	r1, #1	; 0x1
        2dc200:	eb6334ba 	bl	1ba94f0 <THistoryCollector::$CollectionControl(int)>
        2dc204:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dc208:	e3100010 	tst	r0, #16	; 0x10
        2dc20c:	11a01005 	movne	r1, r5
        2dc210:	11a00004 	movne	r0, r4
        2dc214:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2dc218:	1a6334ad 	bne	1ba94d4 <THistoryCollector::$Add(unsigned long)>
        2dc21c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: THistoryCollector::Add(void const *)
 * Address: 002dc220
 */
THistoryCollector::Add(void const *) {
    /*
        2dc220:	e5902010 	ldr	r2, [r0, #16]	; fField16
        2dc224:	e3120008 	tst	r2, #8	; 0x8
        2dc228:	1a000002 	bne	2dc238 <THistoryCollector::Add(void const *)+0x18>
        2dc22c:	e3120001 	tst	r2, #1	; 0x1
        2dc230:	1a63349e 	bne	1ba94b0 <THistoryCollector::$AddReset(void const *)>
        2dc234:	e1a0f00e 	mov	pc, lr
        2dc238:	e5902020 	ldr	r2, [r0, #32]	; fField32
        2dc23c:	e5903018 	ldr	r3, [r0, #24]	; fField24
        2dc240:	e0822003 	add	r2, r2, r3
        2dc244:	e2822004 	add	r2, r2, #4	; 0x4
        2dc248:	e590c05c 	ldr	ip, [r0, #92]	; fField92
        2dc24c:	e13c0002 	teq	ip, r2
        2dc250:	05902014 	ldreq	r2, [r0, #20]	; fField20
        2dc254:	e5802018 	str	r2, [r0, #24]	; fField24
        2dc258:	e5902068 	ldr	r2, [r0, #104]	; fField104
        2dc25c:	e5922000 	ldr	r2, [r2]
        2dc260:	e3822001 	orr	r2, r2, #1	; 0x1
        2dc264:	e4832004 	str	r2, [r3], #4
        2dc268:	e5b02064 	ldr	r2, [r0, #100]!	; fField100
        2dc26c:	e1a00003 	mov	r0, r3
        2dc270:	ea6361f6 	b	1bb4a50 <$memcpy>
    */
}

/**
 * Symbol: THistoryCollector::AddReset(void const *)
 * Address: 002dc274
 */
THistoryCollector::AddReset(void const *) {
    /*
        2dc274:	e1a0c00d 	mov	ip, sp
        2dc278:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dc27c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dc280:	e1a04000 	mov	r4, r0
        2dc284:	e1a05001 	mov	r5, r1
        2dc288:	e3a01001 	mov	r1, #1	; 0x1
        2dc28c:	eb633497 	bl	1ba94f0 <THistoryCollector::$CollectionControl(int)>
        2dc290:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dc294:	e3100008 	tst	r0, #8	; 0x8
        2dc298:	11a01005 	movne	r1, r5
        2dc29c:	11a00004 	movne	r0, r4
        2dc2a0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2dc2a4:	1a633488 	bne	1ba94cc <THistoryCollector::$Add(void const *)>
        2dc2a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: THistoryCollector::AddAddress(void)
 * Address: 002dc2ac
 */
THistoryCollector::AddAddress(void) {
    /*
        2dc2ac:	e5901010 	ldr	r1, [r0, #16]	; fField16
        2dc2b0:	e3110020 	tst	r1, #32	; 0x20
        2dc2b4:	1a000002 	bne	2dc2c4 <THistoryCollector::AddAddress(void)+0x18>
        2dc2b8:	e3110001 	tst	r1, #1	; 0x1
        2dc2bc:	1a633476 	bne	1ba949c <THistoryCollector::$AddAddressReset(void)>
        2dc2c0:	e1a0f00e 	mov	pc, lr
        2dc2c4:	e5901020 	ldr	r1, [r0, #32]	; fField32
        2dc2c8:	e5902018 	ldr	r2, [r0, #24]	; fField24
        2dc2cc:	e0811002 	add	r1, r1, r2
        2dc2d0:	e2811004 	add	r1, r1, #4	; 0x4
        2dc2d4:	e590305c 	ldr	r3, [r0, #92]	; fField92
        2dc2d8:	e1330001 	teq	r3, r1
        2dc2dc:	05901014 	ldreq	r1, [r0, #20]	; fField20
        2dc2e0:	e5a01018 	str	r1, [r0, #24]!	; fField24
        2dc2e4:	e1a00002 	mov	r0, r2
        2dc2e8:	eaf4f044 	b	18400 <AsmTraceAddAddrEvent>
    */
}

/**
 * Symbol: THistoryCollector::AddAddressReset(void)
 * Address: 002dc2ec
 */
THistoryCollector::AddAddressReset(void) {
    /*
        2dc2ec:	e1a0c00d 	mov	ip, sp
        2dc2f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dc2f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dc2f8:	e1a04000 	mov	r4, r0
        2dc2fc:	e3a01001 	mov	r1, #1	; 0x1
        2dc300:	eb63347a 	bl	1ba94f0 <THistoryCollector::$CollectionControl(int)>
        2dc304:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dc308:	e3100020 	tst	r0, #32	; 0x20
        2dc30c:	11a00004 	movne	r0, r4
        2dc310:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2dc314:	1a633462 	bne	1ba94a4 <THistoryCollector::$AddAddress(void)>
        2dc318:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: THistoryCollector::CollectionControl(int)
 * Address: 002dc31c
 */
THistoryCollector::CollectionControl(int) {
    /*
        2dc31c:	e3310001 	teq	r1, #1	; 0x1
        2dc320:	05901014 	ldreq	r1, [r0, #20]	; fField20
        2dc324:	05801018 	streq	r1, [r0, #24]	; fField24
        2dc328:	0a000001 	beq	2dc334 <THistoryCollector::CollectionControl(int)+0x18>
        2dc32c:	e3310002 	teq	r1, #2	; 0x2
        2dc330:	1a000008 	bne	2dc358 <THistoryCollector::CollectionControl(int)+0x3c>
        2dc334:	e590105c 	ldr	r1, [r0, #92]	; fField92
        2dc338:	e3310000 	teq	r1, #0	; 0x0
        2dc33c:	03a01000 	moveq	r1, #0	; 0x0
        2dc340:	0a000004 	beq	2dc358 <THistoryCollector::CollectionControl(int)+0x3c>
        2dc344:	e3a01006 	mov	r1, #6	; 0x6
        2dc348:	e5902064 	ldr	r2, [r0, #100]	; fField100
        2dc34c:	e3520004 	cmp	r2, #4	; 0x4
        2dc350:	23a0102e 	movcs	r1, #46	; 0x2e
        2dc354:	02811010 	addeq	r1, r1, #16	; 0x10
        2dc358:	e5a01010 	str	r1, [r0, #16]!	; fField16
        2dc35c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Sizeof__17THistoryCollectorSFv
 * Address: 002dc410
 */
void THistoryCollector::Sizeof() {
    /*
        2dc410:	e3a0006c 	mov	r0, #108	; 0x6c
        2dc414:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THistoryCollector::New(void)
 * Address: 002dc418
 */
THistoryCollector::New(void) {
    /*
        2dc418:	e3a01000 	mov	r1, #0	; 0x0
        2dc41c:	e580105c 	str	r1, [r0, #92]	; fField92
        2dc420:	e5801010 	str	r1, [r0, #16]	; fField16
        2dc424:	e5801014 	str	r1, [r0, #20]	; fField20
        2dc428:	e5801028 	str	r1, [r0, #40]	; fField40
        2dc42c:	e580102c 	str	r1, [r0, #44]	; fField44
        2dc430:	e5801068 	str	r1, [r0, #104]	; fField104
        2dc434:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THistoryCollector::Delete(void)
 * Address: 002dc438
 */
THistoryCollector::Delete(void) {
    /*
        2dc438:	e1a0c00d 	mov	ip, sp
        2dc43c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dc440:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dc444:	e1a04000 	mov	r4, r0
        2dc448:	ebffffd6 	bl	2dc3a8 <TEventCollector::Deregister(void)>
        2dc44c:	e3a05000 	mov	r5, #0	; 0x0
        2dc450:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dc454:	e3300000 	teq	r0, #0	; 0x0
        2dc458:	0a00000c 	beq	2dc490 <THistoryCollector::Delete(void)+0x58>
        2dc45c:	e5941060 	ldr	r1, [r4, #96]	; fField96
        2dc460:	e3310001 	teq	r1, #1	; 0x1
        2dc464:	13310002 	teqne	r1, #2	; 0x2
        2dc468:	1a000005 	bne	2dc484 <THistoryCollector::Delete(void)+0x4c>
        2dc46c:	e594101c 	ldr	r1, [r4, #28]	; fField28
        2dc470:	e0801001 	add	r1, r0, r1
        2dc474:	eb640689 	bl	1bddea0 <$UnlockHeapRange>
        2dc478:	e284106c 	add	r1, r4, #108	; 0x6c
        2dc47c:	e1a00004 	mov	r0, r4
        2dc480:	eb640686 	bl	1bddea0 <$UnlockHeapRange>
        2dc484:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dc488:	eb63d932 	bl	1bd2958 <$free>
        2dc48c:	e5845014 	str	r5, [r4, #20]	; fField20
        2dc490:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2dc494:	e3300000 	teq	r0, #0	; 0x0
        2dc498:	1b63d92e 	blne	1bd2958 <$free>
        2dc49c:	e5845028 	str	r5, [r4, #40]	; fField40
        2dc4a0:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2dc4a4:	e3300000 	teq	r0, #0	; 0x0
        2dc4a8:	1b63d92a 	blne	1bd2958 <$free>
        2dc4ac:	e5a4502c 	str	r5, [r4, #44]!	; fField44
        2dc4b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: THistoryCollector::Init(unsigned int, char *, char *, int, int)
 * Address: 002dc4b4
 */
THistoryCollector::Init(unsigned int, char *, char *, int, int) {
    /*
        2dc4b4:	e1a0c00d 	mov	ip, sp
        2dc4b8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2dc4bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dc4c0:	e1a04000 	mov	r4, r0
        2dc4c4:	e1a06002 	mov	r6, r2
        2dc4c8:	e1a05003 	mov	r5, r3
        2dc4cc:	e99b1008 	ldmib	fp, {r3, ip}
        2dc4d0:	e59f004c 	ldr	r0, [pc, #4c]	; 2dc524 <THistoryCollector::Init(unsigned int, char *, char *, int, int)+0x70>
        2dc4d4:	e3a07000 	mov	r7, #0	; 0x0
        2dc4d8:	e5840068 	str	r0, [r4, #104]	; fField104
        2dc4dc:	e3a00000 	mov	r0, #0	; 0x0
        2dc4e0:	e5847030 	str	r7, [r4, #48]	; fField48
        2dc4e4:	e0842180 	add	r2, r4, r0, lsl #3
        2dc4e8:	e5827034 	str	r7, [r2, #52]
        2dc4ec:	e2800001 	add	r0, r0, #1	; 0x1
        2dc4f0:	e3500005 	cmp	r0, #5	; 0x5
        2dc4f4:	e5a27038 	str	r7, [r2, #56]!
        2dc4f8:	bafffff9 	blt	2dc4e4 <THistoryCollector::Init(unsigned int, char *, char *, int, int)+0x30>
        2dc4fc:	e5841064 	str	r1, [r4, #100]	; fField100
        2dc500:	e3310001 	teq	r1, #1	; 0x1
        2dc504:	01a00007 	moveq	r0, r7
        2dc508:	0a000003 	beq	2dc51c <THistoryCollector::Init(unsigned int, char *, char *, int, int)+0x68>
        2dc50c:	e2110003 	ands	r0, r1, #3	; 0x3
        2dc510:	0a000004 	beq	2dc528 <THistoryCollector::Init(unsigned int, char *, char *, int, int)+0x74>
        2dc514:	e2811004 	add	r1, r1, #4	; 0x4
        2dc518:	e0410000 	sub	r0, r1, r0
        2dc51c:	e5840020 	str	r0, [r4, #32]	; fField32
        2dc520:	ea000001 	b	2dc52c <THistoryCollector::Init(unsigned int, char *, char *, int, int)+0x78>
        2dc524:	0f181800 	swieq	0x00181800
        2dc528:	e5841020 	str	r1, [r4, #32]	; fField32
        2dc52c:	e5843024 	str	r3, [r4, #36]	; fField36
        2dc530:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2dc534:	e2800004 	add	r0, r0, #4	; 0x4
        2dc538:	e0000093 	mul	r0, r3, r0
        2dc53c:	e584001c 	str	r0, [r4, #28]	; fField28
        2dc540:	e584c060 	str	ip, [r4, #96]	; fField96
        2dc544:	eb63e987 	bl	1bd6b68 <$malloc>
        2dc548:	e5840014 	str	r0, [r4, #20]	; fField20
        2dc54c:	e3300000 	teq	r0, #0	; 0x0
        2dc550:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2dc554:	e594101c 	ldr	r1, [r4, #28]	; fField28
        2dc558:	e0801001 	add	r1, r0, r1
        2dc55c:	e1a08001 	mov	r8, r1
        2dc560:	e5942060 	ldr	r2, [r4, #96]	; fField96
        2dc564:	e3320001 	teq	r2, #1	; 0x1
        2dc568:	13320002 	teqne	r2, #2	; 0x2
        2dc56c:	1a00000a 	bne	2dc59c <THistoryCollector::Init(unsigned int, char *, char *, int, int)+0xe8>
        2dc570:	e3320002 	teq	r2, #2	; 0x2
        2dc574:	13a02000 	movne	r2, #0	; 0x0
        2dc578:	03a02001 	moveq	r2, #1	; 0x1
        2dc57c:	eb63e974 	bl	1bd6b54 <$LockHeapRange>
        2dc580:	e5940060 	ldr	r0, [r4, #96]	; fField96
        2dc584:	e3300002 	teq	r0, #2	; 0x2
        2dc588:	13a02000 	movne	r2, #0	; 0x0
        2dc58c:	03a02001 	moveq	r2, #1	; 0x1
        2dc590:	e284106c 	add	r1, r4, #108	; 0x6c
        2dc594:	e1a00004 	mov	r0, r4
        2dc598:	eb63e96d 	bl	1bd6b54 <$LockHeapRange>
        2dc59c:	e1a00006 	mov	r0, r6
        2dc5a0:	eb636542 	bl	1bb5ab0 <$strlen>
        2dc5a4:	e2800001 	add	r0, r0, #1	; 0x1
        2dc5a8:	eb63e96e 	bl	1bd6b68 <$malloc>
        2dc5ac:	e5840028 	str	r0, [r4, #40]	; fField40
        2dc5b0:	e3300000 	teq	r0, #0	; 0x0
        2dc5b4:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2dc5b8:	e1a01006 	mov	r1, r6
        2dc5bc:	eb63653a 	bl	1bb5aac <$strcpy>
        2dc5c0:	e1a00005 	mov	r0, r5
        2dc5c4:	eb636539 	bl	1bb5ab0 <$strlen>
        2dc5c8:	e2800001 	add	r0, r0, #1	; 0x1
        2dc5cc:	eb63e965 	bl	1bd6b68 <$malloc>
        2dc5d0:	e584002c 	str	r0, [r4, #44]	; fField44
        2dc5d4:	e3300000 	teq	r0, #0	; 0x0
        2dc5d8:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2dc5dc:	e1a01005 	mov	r1, r5
        2dc5e0:	eb636531 	bl	1bb5aac <$strcpy>
        2dc5e4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dc5e8:	e5840018 	str	r0, [r4, #24]	; fField24
        2dc5ec:	e3300000 	teq	r0, #0	; 0x0
        2dc5f0:	0a000009 	beq	2dc61c <THistoryCollector::Init(unsigned int, char *, char *, int, int)+0x168>
        2dc5f4:	e3a00000 	mov	r0, #0	; 0x0
        2dc5f8:	e594101c 	ldr	r1, [r4, #28]	; fField28
        2dc5fc:	e3510000 	cmp	r1, #0	; 0x0
        2dc600:	9a000005 	bls	2dc61c <THistoryCollector::Init(unsigned int, char *, char *, int, int)+0x168>
        2dc604:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2dc608:	e7c17000 	strb	r7, [r1, r0]
        2dc60c:	e2800001 	add	r0, r0, #1	; 0x1
        2dc610:	e594101c 	ldr	r1, [r4, #28]	; fField28
        2dc614:	e1510000 	cmp	r1, r0
        2dc618:	8afffff9 	bhi	2dc604 <THistoryCollector::Init(unsigned int, char *, char *, int, int)+0x150>
        2dc61c:	e584805c 	str	r8, [r4, #92]	; fField92
        2dc620:	e1a00004 	mov	r0, r4
        2dc624:	e3a01002 	mov	r1, #2	; 0x2
        2dc628:	eb6333b0 	bl	1ba94f0 <THistoryCollector::$CollectionControl(int)>
        2dc62c:	e1a00004 	mov	r0, r4
        2dc630:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2dc634:	eaffff49 	b	2dc360 <TEventCollector::Register(void)>
    */
}

/**
 * Symbol: THistoryCollector::AddDescriptions(EventTraceCauseDesc *, int)
 * Address: 002dc638
 */
THistoryCollector::AddDescriptions(EventTraceCauseDesc *, int) {
    /*
        2dc638:	e3a0c000 	mov	ip, #0	; 0x0
        2dc63c:	e5903030 	ldr	r3, [r0, #48]	; fField48
        2dc640:	e3530005 	cmp	r3, #5	; 0x5
        2dc644:	aa000007 	bge	2dc668 <THistoryCollector::AddDescriptions(EventTraceCauseDesc *, int)+0x30>
        2dc648:	e0803183 	add	r3, r0, r3, lsl #3
        2dc64c:	e5a31034 	str	r1, [r3, #52]!
        2dc650:	e5901030 	ldr	r1, [r0, #48]	; fField48
        2dc654:	e0801181 	add	r1, r0, r1, lsl #3
        2dc658:	e5a12038 	str	r2, [r1, #56]!
        2dc65c:	e5901030 	ldr	r1, [r0, #48]	; fField48
        2dc660:	e2811001 	add	r1, r1, #1	; 0x1
        2dc664:	e5a01030 	str	r1, [r0, #48]!	; fField48
        2dc668:	e1a0000c 	mov	r0, ip
        2dc66c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THistoryCollector::Add(unsigned char)
 * Address: 002dc670
 */
THistoryCollector::Add(unsigned char) {
    /*
        2dc670:	e20110ff 	and	r1, r1, #255	; 0xff
        2dc674:	e5902010 	ldr	r2, [r0, #16]	; fField16
        2dc678:	e3120004 	tst	r2, #4	; 0x4
        2dc67c:	1a000002 	bne	2dc68c <THistoryCollector::Add(unsigned char)+0x1c>
        2dc680:	e3120001 	tst	r2, #1	; 0x1
        2dc684:	1a63338a 	bne	1ba94b4 <THistoryCollector::$AddReset(unsigned char)>
        2dc688:	e1a0f00e 	mov	pc, lr
        2dc68c:	e5903064 	ldr	r3, [r0, #100]	; fField100
        2dc690:	e3330001 	teq	r3, #1	; 0x1
        2dc694:	e5902018 	ldr	r2, [r0, #24]	; fField24
        2dc698:	e5903068 	ldr	r3, [r0, #104]	; fField104
        2dc69c:	e5933000 	ldr	r3, [r3]
        2dc6a0:	1a000003 	bne	2dc6b4 <THistoryCollector::Add(unsigned char)+0x44>
        2dc6a4:	e3c330ff 	bic	r3, r3, #255	; 0xff
        2dc6a8:	e1831001 	orr	r1, r3, r1
        2dc6ac:	e4821004 	str	r1, [r2], #4
        2dc6b0:	ea000004 	b	2dc6c8 <THistoryCollector::Add(unsigned char)+0x58>
        2dc6b4:	e3833001 	orr	r3, r3, #1	; 0x1
        2dc6b8:	e4823004 	str	r3, [r2], #4
        2dc6bc:	e5821000 	str	r1, [r2]
        2dc6c0:	e5901020 	ldr	r1, [r0, #32]	; fField32
        2dc6c4:	e0812002 	add	r2, r1, r2
        2dc6c8:	e590105c 	ldr	r1, [r0, #92]	; fField92
        2dc6cc:	e1310002 	teq	r1, r2
        2dc6d0:	05902014 	ldreq	r2, [r0, #20]	; fField20
        2dc6d4:	e5a02018 	str	r2, [r0, #24]!	; fField24
        2dc6d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THistoryCollector::AddReset(unsigned char)
 * Address: 002dc6dc
 */
THistoryCollector::AddReset(unsigned char) {
    /*
        2dc6dc:	e1a0c00d 	mov	ip, sp
        2dc6e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dc6e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dc6e8:	e1a04000 	mov	r4, r0
        2dc6ec:	e20150ff 	and	r5, r1, #255	; 0xff
        2dc6f0:	e3a01001 	mov	r1, #1	; 0x1
        2dc6f4:	eb63337d 	bl	1ba94f0 <THistoryCollector::$CollectionControl(int)>
        2dc6f8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dc6fc:	e3100004 	tst	r0, #4	; 0x4
        2dc700:	11a01005 	movne	r1, r5
        2dc704:	11a00004 	movne	r0, r4
        2dc708:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2dc70c:	1a63336f 	bne	1ba94d0 <THistoryCollector::$Add(unsigned char)>
        2dc710:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__17THistoryCollectorSFv
 * Address: 00389d2c
 */
void THistoryCollector::ClassInfo() {
    /*
        389d2c:	e24f0044 	sub	r0, pc, #68	; 0x44
        389d30:	e1a0f00e 	mov	pc, lr
        389d34:	e3a00000 	mov	r0, #0	; 0x0
        389d38:	e1a0f00e 	mov	pc, lr
        389d3c:	54486973 	strplb	r6, [r8], -#2419
        389d40:	746f7279 	strvcbt	r7, [pc], #279	; 389d48 <ClassInfo__17THistoryCollectorSFv+0x1c>
        389d44:	436f6c6c 	cmnmi	pc, #27648	; 0x6c00
        389d48:	6563746f 	strvsb	r7, [r3, -#1135]!
        389d4c:	72005445 	andvc	r5, r0, #1157627904	; 0x45000000
        389d50:	76656e74 	undefined
        389d54:	436f6c6c 	cmnmi	pc, #27648	; 0x6c00
        389d58:	6563746f 	strvsb	r7, [r3, -#1135]!
        389d5c:	72000000 	andvc	r0, r0, #0	; 0x0
        389d60:	00000000 	andeq	r0, r0, r0
        389d64:	eafffff0 	b	389d2c <ClassInfo__17THistoryCollectorSFv>
        389d68:	ea60860e 	b	1bab5a8 <THistoryCollector::$New(void)>
        389d6c:	ea6081e7 	b	1baa510 <THistoryCollector::$Delete(void)>
        389d70:	ea608602 	b	1bab580 <THistoryCollector::$Init(unsigned int, char *, char *, int, int)>
        389d74:	ea607dcc 	b	1ba94ac <THistoryCollector::$AddDescriptions(EventTraceCauseDesc *, int)>
        389d78:	ea607dd4 	b	1ba94d0 <THistoryCollector::$Add(unsigned char)>
        389d7c:	ea607dd4 	b	1ba94d4 <THistoryCollector::$Add(unsigned long)>
        389d80:	ea607dd1 	b	1ba94cc <THistoryCollector::$Add(void const *)>
        389d84:	ea607dc6 	b	1ba94a4 <THistoryCollector::$AddAddress(void)>
        389d88:	ea607dd8 	b	1ba94f0 <THistoryCollector::$CollectionControl(int)>
        389d8c:	e1a0000f 	mov	r0, pc
        389d90:	e1a0f00e 	mov	pc, lr
        389d94:	50496e54 	subpl	r6, r9, r4, asr lr
        389d98:	72616e73 	rsbvc	r6, r1, #1840	; 0x730
        389d9c:	6c61746f 	stcvsl	4, cr7, [r1], -#444
        389da0:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

