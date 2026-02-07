#include "DDKIncludes/UtilityClasses/ArrayIterator.h"

/**
 * Symbol: CArrayIterator::SwitchArray(CDynamicArray *, unsigned char)
 * Address: 00038354
 */
void		CArrayIterator::SwitchArray(CDynamicArray* newArray, Boolean itsForward = kIterateForward) {
    /*
         38354:	e1a0c00d 	mov	ip, sp
         38358:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3835c:	e24cb004 	sub	fp, ip, #4	; 0x4
         38360:	e1a04000 	mov	r4, r0
         38364:	e1a05001 	mov	r5, r1
         38368:	e20260ff 	and	r6, r2, #255	; 0xff
         3836c:	e5900000 	ldr	r0, [r0]
         38370:	e3300000 	teq	r0, #0	; 0x0
         38374:	0a000005 	beq	38390 <CArrayIterator::SwitchArray(CDynamicArray *, unsigned char)+0x3c>
         38378:	e1a00004 	mov	r0, r4
         3837c:	eb6db3c0 	bl	1ba5284 <CArrayIterator::$RemoveFromList(void)>
         38380:	e5941000 	ldr	r1, [r4]
         38384:	e5a10014 	str	r0, [r1, #20]!	; fIterateForward
         38388:	e3a00000 	mov	r0, #0	; 0x0
         3838c:	e5840000 	str	r0, [r4]
         38390:	e1a03006 	mov	r3, r6
         38394:	e92d0008 	stmdb	sp!, {r3}
         38398:	e5950000 	ldr	r0, [r5]
         3839c:	e2403001 	sub	r3, r0, #1	; 0x1
         383a0:	e1a01005 	mov	r1, r5
         383a4:	e1a00004 	mov	r0, r4
         383a8:	e3a02000 	mov	r2, #0	; 0x0
         383ac:	eb6ec43b 	bl	1be94a0 <CArrayIterator::$Init(CDynamicArray *, long, long, unsigned char)>
         383b0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CArrayIterator::AppendToList(CArrayIterator *)
 * Address: 000383b4
 */
CArrayIterator::AppendToList(CArrayIterator *) {
    /*
         383b4:	e3310000 	teq	r1, #0	; 0x0
         383b8:	01a0f00e 	moveq	pc, lr
         383bc:	e5912018 	ldr	r2, [r1, #24]	; CArrayIterator
         383c0:	e2800014 	add	r0, r0, #20	; 0x14
         383c4:	e8800006 	stmia	r0, {r1, r2}
         383c8:	e2400014 	sub	r0, r0, #20	; 0x14
         383cc:	e5a20014 	str	r0, [r2, #20]!	; fIterateForward
         383d0:	e5a10018 	str	r0, [r1, #24]!	; CArrayIterator
         383d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CArrayIterator::InitBounds(long, long, unsigned char)
 * Address: 000383d8
 */
CArrayIterator::InitBounds(long, long, unsigned char) {
    /*
         383d8:	e92d4000 	stmdb	sp!, {lr}
         383dc:	e203c0ff 	and	ip, r3, #255	; 0xff
         383e0:	e5903000 	ldr	r3, [r0]
         383e4:	e5933000 	ldr	r3, [r3]
         383e8:	e3a0e000 	mov	lr, #0	; 0x0
         383ec:	e3530000 	cmp	r3, #0	; 0x0
         383f0:	da000005 	ble	3840c <CArrayIterator::InitBounds(long, long, unsigned char)+0x34>
         383f4:	e2433001 	sub	r3, r3, #1	; 0x1
         383f8:	e3520000 	cmp	r2, #0	; 0x0
         383fc:	b1a0200e 	movlt	r2, lr
         38400:	e1520003 	cmp	r2, r3
         38404:	a1a02003 	movge	r2, r3
         38408:	ea000000 	b	38410 <CArrayIterator::InitBounds(long, long, unsigned char)+0x38>
         3840c:	e3e02000 	mvn	r2, #0	; 0x0
         38410:	e580200c 	str	r2, [r0, #12]	; fLowBound
         38414:	e3720001 	cmn	r2, #1	; 0x1
         38418:	da000004 	ble	38430 <CArrayIterator::InitBounds(long, long, unsigned char)+0x58>
         3841c:	e3510000 	cmp	r1, #0	; 0x0
         38420:	b1a0100e 	movlt	r1, lr
         38424:	e1510002 	cmp	r1, r2
         38428:	a1a01002 	movge	r1, r2
         3842c:	ea000000 	b	38434 <CArrayIterator::InitBounds(long, long, unsigned char)+0x5c>
         38430:	e3e01000 	mvn	r1, #0	; 0x0
         38434:	e5801008 	str	r1, [r0, #8]	; fCurrentIndex
         38438:	e5c0c010 	strb	ip, [r0, #16]	; fHighBound
         3843c:	e8bd4000 	ldmia	sp!, {lr}
         38440:	ea6ed088 	b	1bec668 <CArrayIterator::$Reset(void)>
    */
}

/**
 * Symbol: CArrayIterator::ResetBounds(unsigned char)
 * Address: 00038444
 */
void		CArrayIterator::ResetBounds(Boolean goForward = true) {
    /*
         38444:	e20110ff 	and	r1, r1, #255	; 0xff
         38448:	e5902000 	ldr	r2, [r0]
         3844c:	e5922000 	ldr	r2, [r2]
         38450:	e3520000 	cmp	r2, #0	; 0x0
         38454:	d3e02000 	mvnle	r2, #0	; 0x0
         38458:	c2422001 	subgt	r2, r2, #1	; 0x1
         3845c:	e580200c 	str	r2, [r0, #12]	; fLowBound
         38460:	e3720001 	cmn	r2, #1	; 0x1
         38464:	d3e02000 	mvnle	r2, #0	; 0x0
         38468:	c3a02000 	movgt	r2, #0	; 0x0
         3846c:	e5802008 	str	r2, [r0, #8]	; fCurrentIndex
         38470:	e5c01010 	strb	r1, [r0, #16]	; fHighBound
         38474:	ea6ed07b 	b	1bec668 <CArrayIterator::$Reset(void)>
    */
}

/**
 * Symbol: CArrayIterator::More(void)
 * Address: 00038478
 */
Boolean		CArrayIterator::More(void) {
    /*
         38478:	e5901000 	ldr	r1, [r0]
         3847c:	e3310000 	teq	r1, #0	; 0x0
         38480:	15900004 	ldrne	r0, [r0, #4]	; fDynamicArray
         38484:	13700001 	cmnne	r0, #1	; 0x1
         38488:	03a00000 	moveq	r0, #0	; 0x0
         3848c:	13a00001 	movne	r0, #1	; 0x1
         38490:	e20000ff 	and	r0, r0, #255	; 0xff
         38494:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CArrayIterator::Reset(void)
 * Address: 00038498
 */
void		CArrayIterator::Reset(void) {
    /*
         38498:	e5d01010 	ldrb	r1, [r0, #16]	; fHighBound
         3849c:	e3310000 	teq	r1, #0	; 0x0
         384a0:	0590100c 	ldreq	r1, [r0, #12]	; fLowBound
         384a4:	15901008 	ldrne	r1, [r0, #8]	; fCurrentIndex
         384a8:	e5a01004 	str	r1, [r0, #4]!	; fDynamicArray
         384ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CArrayIterator::DeleteArray(void)
 * Address: 000384b0
 */
void		CArrayIterator::DeleteArray(void) {
    /*
         384b0:	e1a0c00d 	mov	ip, sp
         384b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         384b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         384bc:	e1a04000 	mov	r4, r0
         384c0:	e5900018 	ldr	r0, [r0, #24]	; CArrayIterator
         384c4:	e5941000 	ldr	r1, [r4]
         384c8:	e5911014 	ldr	r1, [r1, #20]	; fIterateForward
         384cc:	e1300001 	teq	r0, r1
         384d0:	1b6ebbc0 	blne	1be73d8 <CArrayIterator::$DeleteArray(void)>
         384d4:	e3a00000 	mov	r0, #0	; 0x0
         384d8:	e5840000 	str	r0, [r4]
         384dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CArrayIterator::Advance(void)
 * Address: 000384e0
 */
void		CArrayIterator::Advance(void) {
    /*
         384e0:	e5d01010 	ldrb	r1, [r0, #16]	; fHighBound
         384e4:	e3e02000 	mvn	r2, #0	; 0x0
         384e8:	e3310000 	teq	r1, #0	; 0x0
         384ec:	e5901004 	ldr	r1, [r0, #4]	; fDynamicArray
         384f0:	0a000004 	beq	38508 <CArrayIterator::Advance(void)+0x28>
         384f4:	e590300c 	ldr	r3, [r0, #12]	; fLowBound
         384f8:	e1510003 	cmp	r1, r3
         384fc:	b2811001 	addlt	r1, r1, #1	; 0x1
         38500:	ba000004 	blt	38518 <CArrayIterator::Advance(void)+0x38>
         38504:	ea000005 	b	38520 <CArrayIterator::Advance(void)+0x40>
         38508:	e5903008 	ldr	r3, [r0, #8]	; fCurrentIndex
         3850c:	e1510003 	cmp	r1, r3
         38510:	da000002 	ble	38520 <CArrayIterator::Advance(void)+0x40>
         38514:	e2411001 	sub	r1, r1, #1	; 0x1
         38518:	e5a01004 	str	r1, [r0, #4]!	; fDynamicArray
         3851c:	e1a0f00e 	mov	pc, lr
         38520:	e5a02004 	str	r2, [r0, #4]!	; fDynamicArray
         38524:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CArrayIterator::RemoveElementsAt(long, long)
 * Address: 00038528
 */
{ return CArrayIterator::RemoveElementsAt(0, fSize); } {
    /*
         38528:	e5903008 	ldr	r3, [r0, #8]	; fCurrentIndex
         3852c:	e1530001 	cmp	r3, r1
         38530:	c0433002 	subgt	r3, r3, r2
         38534:	c5803008 	strgt	r3, [r0, #8]	; fCurrentIndex
         38538:	e590300c 	ldr	r3, [r0, #12]	; fLowBound
         3853c:	e1530001 	cmp	r3, r1
         38540:	a0433002 	subge	r3, r3, r2
         38544:	a580300c 	strge	r3, [r0, #12]	; fLowBound
         38548:	e5d03010 	ldrb	r3, [r0, #16]	; fHighBound
         3854c:	e3330000 	teq	r3, #0	; 0x0
         38550:	e5903004 	ldr	r3, [r0, #4]	; fDynamicArray
         38554:	0a000002 	beq	38564 <CArrayIterator::RemoveElementsAt(long, long)+0x3c>
         38558:	e1530001 	cmp	r3, r1
         3855c:	ba000004 	blt	38574 <CArrayIterator::RemoveElementsAt(long, long)+0x4c>
         38560:	ea000001 	b	3856c <CArrayIterator::RemoveElementsAt(long, long)+0x44>
         38564:	e1530001 	cmp	r3, r1
         38568:	da000001 	ble	38574 <CArrayIterator::RemoveElementsAt(long, long)+0x4c>
         3856c:	e0433002 	sub	r3, r3, r2
         38570:	e5803004 	str	r3, [r0, #4]	; fDynamicArray
         38574:	e5903000 	ldr	r3, [r0]
         38578:	e3330000 	teq	r3, #0	; 0x0
         3857c:	01a0f00e 	moveq	pc, lr
         38580:	e5900018 	ldr	r0, [r0, #24]	; CArrayIterator
         38584:	e5933014 	ldr	r3, [r3, #20]	; fIterateForward
         38588:	e1300003 	teq	r0, r3
         3858c:	1a6ed029 	bne	1bec638 <CArrayIterator::$RemoveElementsAt(long, long)>
         38590:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CArrayIterator::InsertElementsBefore(long, long)
 * Address: 00038594
 */
void		CArrayIterator::InsertElementsBefore(ArrayIndex theIndex, ArrayIndex theCount) {
    /*
         38594:	e5903008 	ldr	r3, [r0, #8]	; fCurrentIndex
         38598:	e1530001 	cmp	r3, r1
         3859c:	a0833002 	addge	r3, r3, r2
         385a0:	a5803008 	strge	r3, [r0, #8]	; fCurrentIndex
         385a4:	e590300c 	ldr	r3, [r0, #12]	; fLowBound
         385a8:	e1530001 	cmp	r3, r1
         385ac:	a0833002 	addge	r3, r3, r2
         385b0:	a580300c 	strge	r3, [r0, #12]	; fLowBound
         385b4:	e5d03010 	ldrb	r3, [r0, #16]	; fHighBound
         385b8:	e3330000 	teq	r3, #0	; 0x0
         385bc:	e5903004 	ldr	r3, [r0, #4]	; fDynamicArray
         385c0:	0a000002 	beq	385d0 <CArrayIterator::InsertElementsBefore(long, long)+0x3c>
         385c4:	e1530001 	cmp	r3, r1
         385c8:	ba000004 	blt	385e0 <CArrayIterator::InsertElementsBefore(long, long)+0x4c>
         385cc:	ea000001 	b	385d8 <CArrayIterator::InsertElementsBefore(long, long)+0x44>
         385d0:	e1530001 	cmp	r3, r1
         385d4:	da000001 	ble	385e0 <CArrayIterator::InsertElementsBefore(long, long)+0x4c>
         385d8:	e0833002 	add	r3, r3, r2
         385dc:	e5803004 	str	r3, [r0, #4]	; fDynamicArray
         385e0:	e5903000 	ldr	r3, [r0]
         385e4:	e3330000 	teq	r3, #0	; 0x0
         385e8:	01a0f00e 	moveq	pc, lr
         385ec:	e5900018 	ldr	r0, [r0, #24]	; CArrayIterator
         385f0:	e5933014 	ldr	r3, [r3, #20]	; fIterateForward
         385f4:	e1300003 	teq	r0, r3
         385f8:	1a6ec3bf 	bne	1be94fc <CArrayIterator::$InsertElementsBefore(long, long)>
         385fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CArrayIterator::CurrentIndex(void)
 * Address: 00038600
 */
ArrayIndex	CArrayIterator::CurrentIndex(void) {
    /*
         38600:	e5901000 	ldr	r1, [r0]
         38604:	e3310000 	teq	r1, #0	; 0x0
         38608:	03e00000 	mvneq	r0, #0	; 0x0
         3860c:	15900004 	ldrne	r0, [r0, #4]	; fDynamicArray
         38610:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CArrayIterator::FirstIndex(void)
 * Address: 00038614
 */
ArrayIndex	CArrayIterator::FirstIndex(void) {
    /*
         38614:	e1a0c00d 	mov	ip, sp
         38618:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3861c:	e24cb004 	sub	fp, ip, #4	; 0x4
         38620:	e1a04000 	mov	r4, r0
         38624:	eb6ed00f 	bl	1bec668 <CArrayIterator::$Reset(void)>
         38628:	e1a00004 	mov	r0, r4
         3862c:	eb6ec7d1 	bl	1bea578 <CArrayIterator::$More(void)>
         38630:	e3300000 	teq	r0, #0	; 0x0
         38634:	03e00000 	mvneq	r0, #0	; 0x0
         38638:	15b40004 	ldrne	r0, [r4, #4]!	; fDynamicArray
         3863c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CArrayIterator::RemoveFromList(void)
 * Address: 00038640
 */
CArrayIterator::RemoveFromList(void) {
    /*
         38640:	e5901018 	ldr	r1, [r0, #24]	; CArrayIterator
         38644:	e1310000 	teq	r1, r0
         38648:	11a02001 	movne	r2, r1
         3864c:	03a02000 	moveq	r2, #0	; 0x0
         38650:	e5903014 	ldr	r3, [r0, #20]	; fIterateForward
         38654:	e5a13014 	str	r3, [r1, #20]!	; fIterateForward
         38658:	e5901018 	ldr	r1, [r0, #24]	; CArrayIterator
         3865c:	e5903014 	ldr	r3, [r0, #20]	; fIterateForward
         38660:	e5a31018 	str	r1, [r3, #24]!	; CArrayIterator
         38664:	e5800018 	str	r0, [r0, #24]	; CArrayIterator
         38668:	e5800014 	str	r0, [r0, #20]	; fIterateForward
         3866c:	e1a00002 	mov	r0, r2
         38670:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CArrayIterator::NextIndex(void)
 * Address: 00038674
 */
ArrayIndex	CArrayIterator::NextIndex(void) {
    /*
         38674:	e1a0c00d 	mov	ip, sp
         38678:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3867c:	e24cb004 	sub	fp, ip, #4	; 0x4
         38680:	e1a04000 	mov	r4, r0
         38684:	eb6eb312 	bl	1be52d4 <CArrayIterator::$Advance(void)>
         38688:	e1a00004 	mov	r0, r4
         3868c:	eb6ec7b9 	bl	1bea578 <CArrayIterator::$More(void)>
         38690:	e3300000 	teq	r0, #0	; 0x0
         38694:	03e00000 	mvneq	r0, #0	; 0x0
         38698:	15b40004 	ldrne	r0, [r4, #4]!	; fDynamicArray
         3869c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CArrayIterator::__ct(void)
 * Address: 000386a0
 */
CArrayIterator::CArrayIterator(CDynamicArray* itsDynamicArray) {
    /*
         386a0:	e1a0c00d 	mov	ip, sp
         386a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         386a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         386ac:	e1b04000 	movs	r4, r0
         386b0:	1a000003 	bne	386c4 <CArrayIterator::__ct(void)+0x24>
         386b4:	e3a0001c 	mov	r0, #28	; 0x1c
         386b8:	eb6e581e 	bl	1bce738 <$__nw(unsigned int)>
         386bc:	e1b04000 	movs	r4, r0
         386c0:	0a000001 	beq	386cc <CArrayIterator::__ct(void)+0x2c>
         386c4:	e1a00004 	mov	r0, r4
         386c8:	eb6ec375 	bl	1be94a4 <CArrayIterator::$Init(void)>
         386cc:	e1a00004 	mov	r0, r4
         386d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CArrayIterator::__ct(CDynamicArray *, long, long, unsigned char)
 * Address: 000386d4
 */
CArrayIterator::CArrayIterator(CDynamicArray* itsDynamicArray) {
    /*
         386d4:	e1a0c00d 	mov	ip, sp
         386d8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         386dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         386e0:	e1b04000 	movs	r4, r0
         386e4:	e1a07001 	mov	r7, r1
         386e8:	e1a06002 	mov	r6, r2
         386ec:	e1a05003 	mov	r5, r3
         386f0:	e59b0004 	ldr	r0, [fp, #4]	; fDynamicArray
         386f4:	e20080ff 	and	r8, r0, #255	; 0xff
         386f8:	1a000003 	bne	3870c <CArrayIterator::__ct(CDynamicArray *, long, long, unsigned char)+0x38>
         386fc:	e3a0001c 	mov	r0, #28	; 0x1c
         38700:	eb6e580c 	bl	1bce738 <$__nw(unsigned int)>
         38704:	e1b04000 	movs	r4, r0
         38708:	0a000007 	beq	3872c <CArrayIterator::__ct(CDynamicArray *, long, long, unsigned char)+0x58>
         3870c:	e1a03008 	mov	r3, r8
         38710:	e92d0008 	stmdb	sp!, {r3}
         38714:	e1a03005 	mov	r3, r5
         38718:	e1a02006 	mov	r2, r6
         3871c:	e1a01007 	mov	r1, r7
         38720:	e1a00004 	mov	r0, r4
         38724:	eb6ec35d 	bl	1be94a0 <CArrayIterator::$Init(CDynamicArray *, long, long, unsigned char)>
         38728:	e28dd004 	add	sp, sp, #4	; 0x4
         3872c:	e1a00004 	mov	r0, r4
         38730:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: CArrayIterator::__ct(CDynamicArray *, unsigned char)
 * Address: 00038734
 */
CArrayIterator::CArrayIterator(CDynamicArray* itsDynamicArray) {
    /*
         38734:	e1a0c00d 	mov	ip, sp
         38738:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3873c:	e24cb004 	sub	fp, ip, #4	; 0x4
         38740:	e1b04000 	movs	r4, r0
         38744:	e1a05001 	mov	r5, r1
         38748:	e20260ff 	and	r6, r2, #255	; 0xff
         3874c:	1a000003 	bne	38760 <CArrayIterator::__ct(CDynamicArray *, unsigned char)+0x2c>
         38750:	e3a0001c 	mov	r0, #28	; 0x1c
         38754:	eb6e57f7 	bl	1bce738 <$__nw(unsigned int)>
         38758:	e1b04000 	movs	r4, r0
         3875c:	0a000008 	beq	38784 <CArrayIterator::__ct(CDynamicArray *, unsigned char)+0x50>
         38760:	e1a03006 	mov	r3, r6
         38764:	e92d0008 	stmdb	sp!, {r3}
         38768:	e5950000 	ldr	r0, [r5]
         3876c:	e2403001 	sub	r3, r0, #1	; 0x1
         38770:	e1a01005 	mov	r1, r5
         38774:	e1a00004 	mov	r0, r4
         38778:	e3a02000 	mov	r2, #0	; 0x0
         3877c:	eb6ec347 	bl	1be94a0 <CArrayIterator::$Init(CDynamicArray *, long, long, unsigned char)>
         38780:	e28dd004 	add	sp, sp, #4	; 0x4
         38784:	e1a00004 	mov	r0, r4
         38788:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CArrayIterator::__ct(CDynamicArray *)
 * Address: 0003878c
 */
CArrayIterator::CArrayIterator(CDynamicArray* itsDynamicArray) {
    /*
         3878c:	e1a0c00d 	mov	ip, sp
         38790:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         38794:	e24cb004 	sub	fp, ip, #4	; 0x4
         38798:	e1b04000 	movs	r4, r0
         3879c:	e1a05001 	mov	r5, r1
         387a0:	1a000003 	bne	387b4 <CArrayIterator::__ct(CDynamicArray *)+0x28>
         387a4:	e3a0001c 	mov	r0, #28	; 0x1c
         387a8:	eb6e57e2 	bl	1bce738 <$__nw(unsigned int)>
         387ac:	e1b04000 	movs	r4, r0
         387b0:	0a000008 	beq	387d8 <CArrayIterator::__ct(CDynamicArray *)+0x4c>
         387b4:	e3a03001 	mov	r3, #1	; 0x1
         387b8:	e92d0008 	stmdb	sp!, {r3}
         387bc:	e5950000 	ldr	r0, [r5]
         387c0:	e2403001 	sub	r3, r0, #1	; 0x1
         387c4:	e1a01005 	mov	r1, r5
         387c8:	e1a00004 	mov	r0, r4
         387cc:	e3a02000 	mov	r2, #0	; 0x0
         387d0:	eb6ec332 	bl	1be94a0 <CArrayIterator::$Init(CDynamicArray *, long, long, unsigned char)>
         387d4:	e28dd004 	add	sp, sp, #4	; 0x4
         387d8:	e1a00004 	mov	r0, r4
         387dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CArrayIterator::__dt(void)
 * Address: 000387e0
 */
CArrayIterator::~CArrayIterator() {
    /*
         387e0:	e1a0c00d 	mov	ip, sp
         387e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         387e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         387ec:	e1a04000 	mov	r4, r0
         387f0:	e1a05001 	mov	r5, r1
         387f4:	e5900000 	ldr	r0, [r0]
         387f8:	e3300000 	teq	r0, #0	; 0x0
         387fc:	0a000003 	beq	38810 <CArrayIterator::__dt(void)+0x30>
         38800:	e1a00004 	mov	r0, r4
         38804:	eb6db29e 	bl	1ba5284 <CArrayIterator::$RemoveFromList(void)>
         38808:	e5941000 	ldr	r1, [r4]
         3880c:	e5a10014 	str	r0, [r1, #20]!	; fIterateForward
         38810:	e3150001 	tst	r5, #1	; 0x1
         38814:	11a00004 	movne	r0, r4
         38818:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         3881c:	1a6e53af 	bne	1bcd6e0 <$__dl(void *)>
         38820:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CArrayIterator::Init(void)
 * Address: 00038824
 */
void		CArrayIterator::Init(void) {
    /*
         38824:	e5800018 	str	r0, [r0, #24]	; CArrayIterator
         38828:	e5800014 	str	r0, [r0, #20]	; fIterateForward
         3882c:	e3e01000 	mvn	r1, #0	; 0x0
         38830:	e580100c 	str	r1, [r0, #12]	; fLowBound
         38834:	e5801008 	str	r1, [r0, #8]	; fCurrentIndex
         38838:	e5801004 	str	r1, [r0, #4]	; fDynamicArray
         3883c:	e3a01001 	mov	r1, #1	; 0x1
         38840:	e5c01010 	strb	r1, [r0, #16]	; fHighBound
         38844:	e3a01000 	mov	r1, #0	; 0x0
         38848:	e5801000 	str	r1, [r0]
         3884c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CArrayIterator::Init(CDynamicArray *, long, long, unsigned char)
 * Address: 00038850
 */
void		CArrayIterator::Init(void) {
    /*
         38850:	e1a0c00d 	mov	ip, sp
         38854:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         38858:	e24cb004 	sub	fp, ip, #4	; 0x4
         3885c:	e1a04000 	mov	r4, r0
         38860:	e1a06002 	mov	r6, r2
         38864:	e1a05003 	mov	r5, r3
         38868:	e59b0004 	ldr	r0, [fp, #4]	; fDynamicArray
         3886c:	e20070ff 	and	r7, r0, #255	; 0xff
         38870:	e5844018 	str	r4, [r4, #24]	; CArrayIterator
         38874:	e5844014 	str	r4, [r4, #20]	; fIterateForward
         38878:	e5841000 	str	r1, [r4]
         3887c:	e5911014 	ldr	r1, [r1, #20]	; fIterateForward
         38880:	e1a00004 	mov	r0, r4
         38884:	eb6da20e 	bl	1ba10c4 <CArrayIterator::$AppendToList(CArrayIterator *)>
         38888:	e5941000 	ldr	r1, [r4]
         3888c:	e1a03007 	mov	r3, r7
         38890:	e1a02005 	mov	r2, r5
         38894:	e5a10014 	str	r0, [r1, #20]!	; fIterateForward
         38898:	e1a01006 	mov	r1, r6
         3889c:	e1a00004 	mov	r0, r4
         388a0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         388a4:	ea6ec30b 	b	1be94d8 <CArrayIterator::$InitBounds(long, long, unsigned char)>
    */
}

