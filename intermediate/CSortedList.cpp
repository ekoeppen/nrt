#include "DDKIncludes/UtilityClasses/ArrayIterator.h"

/**
 * Symbol: CSortedList::__ct(CItemComparer *)
 * Address: 001e34c0
 */
CSortedList::CSortedList(CItemComparer *) {
    /*
        1e34c0:	e1a0c00d 	mov	ip, sp
        1e34c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e34c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e34cc:	e1b04000 	movs	r4, r0
        1e34d0:	e1a05001 	mov	r5, r1
        1e34d4:	1a000003 	bne	1e34e8 <CSortedList::__ct(CItemComparer *)+0x28>
        1e34d8:	e3a0001c 	mov	r0, #28	; 0x1c
        1e34dc:	eb67ac95 	bl	1bce738 <$__nw(unsigned int)>
        1e34e0:	e1b04000 	movs	r4, r0
        1e34e4:	0a000002 	beq	1e34f4 <CSortedList::__ct(CItemComparer *)+0x34>
        1e34e8:	e1a00004 	mov	r0, r4
        1e34ec:	eb68034e 	bl	1be422c <CList::$__ct(void)>
        1e34f0:	e5845018 	str	r5, [r4, #24]	; fField24
        1e34f4:	e1a00004 	mov	r0, r4
        1e34f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CSortedList::__dt(void)
 * Address: 001e34fc
 */
CSortedList::~CSortedList(void) {
    /*
        1e34fc:	e1a0c00d 	mov	ip, sp
        1e3500:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e3504:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3508:	e1a04000 	mov	r4, r0
        1e350c:	e1a05001 	mov	r5, r1
        1e3510:	e3a01000 	mov	r1, #0	; 0x0
        1e3514:	eb68075a 	bl	1be5284 <CList::$__dt(void)>
        1e3518:	e3150001 	tst	r5, #1	; 0x1
        1e351c:	11a00004 	movne	r0, r4
        1e3520:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1e3524:	1a67a86d 	bne	1bcd6e0 <$__dl(void *)>
        1e3528:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CSortedList::Insert(void *)
 * Address: 001e352c
 */
CSortedList::Insert(void *) {
    /*
        1e352c:	e1a0c00d 	mov	ip, sp
        1e3530:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e3534:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3538:	e1a04000 	mov	r4, r0
        1e353c:	e1a05001 	mov	r5, r1
        1e3540:	e24dd004 	sub	sp, sp, #4	; 0x4
        1e3544:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1e3548:	e5a01004 	str	r1, [r0, #4]!	; CSortedList
        1e354c:	e1a0200d 	mov	r2, sp
        1e3550:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1e3554:	e1a00004 	mov	r0, r4
        1e3558:	eb68284e 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        1e355c:	e1b02000 	movs	r2, r0
        1e3560:	0a000004 	beq	1e3578 <CSortedList::Insert(void *)+0x4c>
        1e3564:	e1a03005 	mov	r3, r5
        1e3568:	e1a00004 	mov	r0, r4
        1e356c:	e59d1000 	ldr	r1, [sp]
        1e3570:	eb6817df 	bl	1be94f4 <CSortedList::$InsertDuplicate(long, void *, void *)>
        1e3574:	ea000003 	b	1e3588 <CSortedList::Insert(void *)+0x5c>
        1e3578:	e1a02005 	mov	r2, r5
        1e357c:	e1a00004 	mov	r0, r4
        1e3580:	e59d1000 	ldr	r1, [sp]
        1e3584:	eb6817d8 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1e3588:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CSortedList::InsertUnique(void *)
 * Address: 001e358c
 */
CSortedList::InsertUnique(void *) {
    /*
        1e358c:	e1a0c00d 	mov	ip, sp
        1e3590:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e3594:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3598:	e1a04000 	mov	r4, r0
        1e359c:	e1a05001 	mov	r5, r1
        1e35a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1e35a4:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1e35a8:	e5a01004 	str	r1, [r0, #4]!	; CSortedList
        1e35ac:	e1a0200d 	mov	r2, sp
        1e35b0:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1e35b4:	e1a00004 	mov	r0, r4
        1e35b8:	eb682836 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        1e35bc:	e3500000 	cmp	r0, #0	; 0x0
        1e35c0:	1a000004 	bne	1e35d8 <CSortedList::InsertUnique(void *)+0x4c>
        1e35c4:	e1a02005 	mov	r2, r5
        1e35c8:	e1a00004 	mov	r0, r4
        1e35cc:	e59d1000 	ldr	r1, [sp]
        1e35d0:	eb6817c5 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1e35d4:	ea000000 	b	1e35dc <CSortedList::InsertUnique(void *)+0x50>
        1e35d8:	1a000001 	bne	1e35e4 <CSortedList::InsertUnique(void *)+0x58>
        1e35dc:	e3a00001 	mov	r0, #1	; 0x1
        1e35e0:	ea000000 	b	1e35e8 <CSortedList::InsertUnique(void *)+0x5c>
        1e35e4:	e3a00000 	mov	r0, #0	; 0x0
        1e35e8:	e20000ff 	and	r0, r0, #255	; 0xff
        1e35ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CSortedList::InsertDuplicate(long, void *, void *)
 * Address: 001e35f0
 */
CSortedList::InsertDuplicate(long, void *, void *) {
    /*
        1e35f0:	e1a02003 	mov	r2, r3
        1e35f4:	ea6817bc 	b	1be94ec <CList::$InsertAt(long, void *)>
    */
}

/**
 * Symbol: CSortedList::Search(CItemTester *, long &)
 * Address: 001e35f8
 */
CSortedList::Search(CItemTester *, long &) {
    /*
        1e35f8:	e1a0c00d 	mov	ip, sp
        1e35fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e3600:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3604:	e1a04000 	mov	r4, r0
        1e3608:	e1a06001 	mov	r6, r1
        1e360c:	e1a05002 	mov	r5, r2
        1e3610:	e3a07000 	mov	r7, #0	; 0x0
        1e3614:	e5901000 	ldr	r1, [r0]
        1e3618:	e3a00000 	mov	r0, #0	; 0x0
        1e361c:	e3310000 	teq	r1, #0	; 0x0
        1e3620:	05850000 	streq	r0, [r5]
        1e3624:	0a000032 	beq	1e36f4 <CSortedList::Search(CItemTester *, long &)+0xfc>
        1e3628:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1e362c:	e1a01004 	mov	r1, r4
        1e3630:	e1a0000d 	mov	r0, sp
        1e3634:	eb67feea 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        1e3638:	e59d000c 	ldr	r0, [sp, #12]	; fNextLink
        1e363c:	e59d1008 	ldr	r1, [sp, #8]	; fPreviousLink
        1e3640:	e0810000 	add	r0, r1, r0
        1e3644:	e1a000c0 	mov	r0, r0, asr #1
        1e3648:	e58d0004 	str	r0, [sp, #4]	; CSortedList
        1e364c:	e1a01000 	mov	r1, r0
        1e3650:	e1a00004 	mov	r0, r4
        1e3654:	eb680b3a 	bl	1be6344 <CList::$At(long)>
        1e3658:	e1a07000 	mov	r7, r0
        1e365c:	e1a01000 	mov	r1, r0
        1e3660:	e1a00006 	mov	r0, r6
        1e3664:	e1a0e00f 	mov	lr, pc
        1e3668:	e596f000 	ldr	pc, [r6]
        1e366c:	e3500001 	cmp	r0, #1	; 0x1
        1e3670:	e59d1004 	ldr	r1, [sp, #4]	; CSortedList
        1e3674:	b2411001 	sublt	r1, r1, #1	; 0x1
        1e3678:	b58d100c 	strlt	r1, [sp, #12]	; fNextLink
        1e367c:	a2811001 	addge	r1, r1, #1	; 0x1
        1e3680:	a58d1008 	strge	r1, [sp, #8]	; fPreviousLink
        1e3684:	e3300000 	teq	r0, #0	; 0x0
        1e3688:	0a00000b 	beq	1e36bc <CSortedList::Search(CItemTester *, long &)+0xc4>
        1e368c:	e59d100c 	ldr	r1, [sp, #12]	; fNextLink
        1e3690:	e59d2008 	ldr	r2, [sp, #8]	; fPreviousLink
        1e3694:	e1520001 	cmp	r2, r1
        1e3698:	daffffe6 	ble	1e3638 <CSortedList::Search(CItemTester *, long &)+0x40>
        1e369c:	e3700001 	cmn	r0, #1	; 0x1
        1e36a0:	d3a07000 	movle	r7, #0	; 0x0
        1e36a4:	e3500001 	cmp	r0, #1	; 0x1
        1e36a8:	ba000003 	blt	1e36bc <CSortedList::Search(CItemTester *, long &)+0xc4>
        1e36ac:	e3a07000 	mov	r7, #0	; 0x0
        1e36b0:	e59d0004 	ldr	r0, [sp, #4]	; CSortedList
        1e36b4:	e2800001 	add	r0, r0, #1	; 0x1
        1e36b8:	e58d0004 	str	r0, [sp, #4]	; CSortedList
        1e36bc:	e59d0004 	ldr	r0, [sp, #4]	; CSortedList
        1e36c0:	e3500000 	cmp	r0, #0	; 0x0
        1e36c4:	ba000004 	blt	1e36dc <CSortedList::Search(CItemTester *, long &)+0xe4>
        1e36c8:	e59d0004 	ldr	r0, [sp, #4]	; CSortedList
        1e36cc:	e5941000 	ldr	r1, [r4]
        1e36d0:	e1500001 	cmp	r0, r1
        1e36d4:	d59d0004 	ldrle	r0, [sp, #4]	; CSortedList
        1e36d8:	da000000 	ble	1e36e0 <CSortedList::Search(CItemTester *, long &)+0xe8>
        1e36dc:	e3e00000 	mvn	r0, #0	; 0x0
        1e36e0:	e5850000 	str	r0, [r5]
        1e36e4:	e1a0000d 	mov	r0, sp
        1e36e8:	e3a01000 	mov	r1, #0	; 0x0
        1e36ec:	eb6802dd 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1e36f0:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e36f4:	e1a00007 	mov	r0, r7
        1e36f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

