#include "include/TFlashIterator.h"

/**
 * Symbol: TFlashIterator::__ct(TFlashStore *, TObjRef *, IterFilterType)
 * Address: 000c1514
 */
TFlashIterator::TFlashIterator(TFlashStore *, TObjRef *, IterFilterType) {
    /*
         c1514:	e1a0c00d 	mov	ip, sp
         c1518:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c151c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c1520:	e1b04000 	movs	r4, r0
         c1524:	e1a07001 	mov	r7, r1
         c1528:	e1a06002 	mov	r6, r2
         c152c:	e1a05003 	mov	r5, r3
         c1530:	1a000003 	bne	c1544 <TFlashIterator::__ct(TFlashStore *, TObjRef *, IterFilterType)+0x30>
         c1534:	e3a00078 	mov	r0, #120	; 0x78
         c1538:	eb6c347e 	bl	1bce738 <$__nw(unsigned int)>
         c153c:	e1b04000 	movs	r4, r0
         c1540:	0a000003 	beq	c1554 <TFlashIterator::__ct(TFlashStore *, TObjRef *, IterFilterType)+0x40>
         c1544:	e1a01005 	mov	r1, r5
         c1548:	e88400c0 	stmia	r4, {r6, r7}
         c154c:	e1a00004 	mov	r0, r4
         c1550:	eb69179c 	bl	1b073c8 <TFlashIterator::$Start(IterFilterType)>
         c1554:	e1a00004 	mov	r0, r4
         c1558:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashIterator::__ct(TFlashStore *, TObjRef *, unsigned long, IterFilterType)
 * Address: 000c155c
 */
TFlashIterator::TFlashIterator(TFlashStore *, TObjRef *, unsigned long, IterFilterType) {
    /*
         c155c:	e1a0c00d 	mov	ip, sp
         c1560:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c1564:	e24cb004 	sub	fp, ip, #4	; 0x4
         c1568:	e1b04000 	movs	r4, r0
         c156c:	e1a07001 	mov	r7, r1
         c1570:	e1a06002 	mov	r6, r2
         c1574:	e1a05003 	mov	r5, r3
         c1578:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         c157c:	1a000003 	bne	c1590 <TFlashIterator::__ct(TFlashStore *, TObjRef *, unsigned long, IterFilterType)+0x34>
         c1580:	e3a00078 	mov	r0, #120	; 0x78
         c1584:	eb6c346b 	bl	1bce738 <$__nw(unsigned int)>
         c1588:	e1b04000 	movs	r4, r0
         c158c:	0a000004 	beq	c15a4 <TFlashIterator::__ct(TFlashStore *, TObjRef *, unsigned long, IterFilterType)+0x48>
         c1590:	e1a02008 	mov	r2, r8
         c1594:	e1a01005 	mov	r1, r5
         c1598:	e88400c0 	stmia	r4, {r6, r7}
         c159c:	e1a00004 	mov	r0, r4
         c15a0:	eb69178a 	bl	1b073d0 <TFlashIterator::$Start(unsigned long, IterFilterType)>
         c15a4:	e1a00004 	mov	r0, r4
         c15a8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashIterator::Start(IterFilterType)
 * Address: 000c15ac
 */
TFlashIterator::Start(IterFilterType) {
    /*
         c15ac:	e5801010 	str	r1, [r0, #16]	; fField16
         c15b0:	e3a01000 	mov	r1, #0	; 0x0
         c15b4:	e3a02004 	mov	r2, #4	; 0x4
         c15b8:	e5802024 	str	r2, [r0, #36]	; fField36
         c15bc:	e3e02000 	mvn	r2, #0	; 0x0
         c15c0:	e5801014 	str	r1, [r0, #20]	; fField20
         c15c4:	e5802028 	str	r2, [r0, #40]	; fField40
         c15c8:	e5a01018 	str	r1, [r0, #24]!	; fField24
         c15cc:	e5a0201c 	str	r2, [r0, #28]!	; fField28
         c15d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashIterator::Start(unsigned long, IterFilterType)
 * Address: 000c15d4
 */
TFlashIterator::Start(unsigned long, IterFilterType) {
    /*
         c15d4:	e5801014 	str	r1, [r0, #20]	; fField20
         c15d8:	e3a01000 	mov	r1, #0	; 0x0
         c15dc:	e5801018 	str	r1, [r0, #24]	; fField24
         c15e0:	e3e01000 	mvn	r1, #0	; 0x0
         c15e4:	e5a02010 	str	r2, [r0, #16]!	; fField16
         c15e8:	e5801024 	str	r1, [r0, #36]	; fField36
         c15ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashIterator::Start(TFlashTracker *)
 * Address: 000c15f0
 */
TFlashIterator::Start(TFlashTracker *) {
    /*
         c15f0:	e3a02005 	mov	r2, #5	; 0x5
         c15f4:	e5801020 	str	r1, [r0, #32]	; fField32
         c15f8:	e3a01000 	mov	r1, #0	; 0x0
         c15fc:	e5a02010 	str	r2, [r0, #16]!	; fField16
         c1600:	e5801008 	str	r1, [r0, #8]	; fField8
         c1604:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashIterator::Lookup(unsigned long, int, long *)
 * Address: 000c1608
 */
TFlashIterator::Lookup(unsigned long, int, long *) {
    /*
         c1608:	e1a0c00d 	mov	ip, sp
         c160c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c1610:	e24cb004 	sub	fp, ip, #4	; 0x4
         c1614:	e1a04000 	mov	r4, r0
         c1618:	e1a07001 	mov	r7, r1
         c161c:	e1a06002 	mov	r6, r2
         c1620:	e1b05003 	movs	r5, r3
         c1624:	e3a00000 	mov	r0, #0	; 0x0
         c1628:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c162c:	e5948014 	ldr	r8, [r4, #20]	; fField20
         c1630:	1a000002 	bne	c1640 <TFlashIterator::Lookup(unsigned long, int, long *)+0x38>
         c1634:	e59f9000 	ldr	r9, [pc, #0]	; c163c <TFlashIterator::Lookup(unsigned long, int, long *)+0x34>
         c1638:	ea000007 	b	c165c <TFlashIterator::Lookup(unsigned long, int, long *)+0x54>
         c163c:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         c1640:	e3e00000 	mvn	r0, #0	; 0x0
         c1644:	e5850000 	str	r0, [r5]
         c1648:	e1a01007 	mov	r1, r7
         c164c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1650:	eb001b8b 	bl	c8484 <TFlashStore::ObjectNumberFor(unsigned long)>
         c1654:	e1a0a000 	mov	sl, r0
         c1658:	eafffff5 	b	c1634 <TFlashIterator::Lookup(unsigned long, int, long *)+0x2c>
         c165c:	e2888004 	add	r8, r8, #4	; 0x4
         c1660:	e24dd004 	sub	sp, sp, #4	; 0x4
         c1664:	e1a02008 	mov	r2, r8
         c1668:	e1a01004 	mov	r1, r4
         c166c:	e1a0000d 	mov	r0, sp
         c1670:	eb000068 	bl	c1818 <TFlashIterator::GetDirEnt(unsigned long)>
         c1674:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1678:	e1a01000 	mov	r1, r0
         c167c:	e590004c 	ldr	r0, [r0, #76]
         c1680:	e59d2000 	ldr	r2, [sp]
         c1684:	e1300002 	teq	r0, r2
         c1688:	1a000002 	bne	c1698 <TFlashIterator::Lookup(unsigned long, int, long *)+0x90>
         c168c:	e3a00092 	mov	r0, #146	; 0x92
         c1690:	e2400c2a 	sub	r0, r0, #10752	; 0x2a00
         c1694:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c1698:	e1a0000d 	mov	r0, sp
         c169c:	eb68f626 	bl	1afef3c <SDirEnt::$IsValid(TFlashStore *)>
         c16a0:	e3300000 	teq	r0, #0	; 0x0
         c16a4:	0a000059 	beq	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c16a8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c16ac:	e1a02000 	mov	r2, r0
         c16b0:	e59d1000 	ldr	r1, [sp]
         c16b4:	e1a01c81 	mov	r1, r1, lsl #25
         c16b8:	e5900048 	ldr	r0, [r0, #72]
         c16bc:	e2000001 	and	r0, r0, #1	; 0x1
         c16c0:	e1300fa1 	teq	r0, r1, lsr #31
         c16c4:	1a000013 	bne	c1718 <TFlashIterator::Lookup(unsigned long, int, long *)+0x110>
         c16c8:	e3350000 	teq	r5, #0	; 0x0
         c16cc:	0a00004f 	beq	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c16d0:	e5951000 	ldr	r1, [r5]
         c16d4:	e3510000 	cmp	r1, #0	; 0x0
         c16d8:	aa00004c 	bge	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c16dc:	e59d1000 	ldr	r1, [sp]
         c16e0:	e1a01e81 	mov	r1, r1, lsl #29
         c16e4:	e1300fa1 	teq	r0, r1, lsr #31
         c16e8:	1a000048 	bne	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c16ec:	e24dd008 	sub	sp, sp, #8	; 0x8
         c16f0:	e1a0200d 	mov	r2, sp
         c16f4:	e28d1004 	add	r1, sp, #4	; 0x4
         c16f8:	e28d0008 	add	r0, sp, #8	; 0x8
         c16fc:	eb692397 	bl	1b0a560 <$GetMigratedObjectInfo__7SDirEntCFPlT1>
         c1700:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         c1704:	e130000a 	teq	r0, sl
         c1708:	059d0000 	ldreq	r0, [sp]
         c170c:	05850000 	streq	r0, [r5]
         c1710:	e28dd008 	add	sp, sp, #8	; 0x8
         c1714:	ea00003d 	b	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c1718:	e59d1000 	ldr	r1, [sp]
         c171c:	e1a01421 	mov	r1, r1, lsr #8
         c1720:	e1a01101 	mov	r1, r1, lsl #2
         c1724:	e5923050 	ldr	r3, [r2, #80]
         c1728:	e5922054 	ldr	r2, [r2, #84]
         c172c:	e0030392 	mul	r3, r2, r3
         c1730:	e1530001 	cmp	r3, r1
         c1734:	33a00089 	movcc	r0, #137	; 0x89
         c1738:	32400c2a 	subcc	r0, r0, #10752	; 0x2a00
         c173c:	3a000032 	bcc	c180c <TFlashIterator::Lookup(unsigned long, int, long *)+0x204>
         c1740:	e59d2000 	ldr	r2, [sp]
         c1744:	e1a02c02 	mov	r2, r2, lsl #24
         c1748:	e1300fa2 	teq	r0, r2, lsr #31
         c174c:	059d0004 	ldreq	r0, [sp, #4]	; fField4
         c1750:	00818000 	addeq	r8, r1, r0
         c1754:	0a00002d 	beq	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c1758:	e1a02008 	mov	r2, r8
         c175c:	e5940000 	ldr	r0, [r4]
         c1760:	eb690eda 	bl	1b052d0 <TObjRef::$Set(unsigned long, unsigned long)>
         c1764:	e5940000 	ldr	r0, [r4]
         c1768:	e5901000 	ldr	r1, [r0]
         c176c:	e3c1120f 	bic	r1, r1, #-268435456	; 0xf0000000
         c1770:	e1310007 	teq	r1, r7
         c1774:	1a000025 	bne	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c1778:	e3760001 	cmn	r6, #1	; 0x1
         c177c:	0a000021 	beq	c1808 <TFlashIterator::Lookup(unsigned long, int, long *)+0x200>
         c1780:	e3360000 	teq	r6, #0	; 0x0
         c1784:	0a00000a 	beq	c17b4 <TFlashIterator::Lookup(unsigned long, int, long *)+0x1ac>
         c1788:	e5901004 	ldr	r1, [r0, #4]	; fField4
         c178c:	e1a01801 	mov	r1, r1, lsl #16
         c1790:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c1794:	e592204c 	ldr	r2, [r2, #76]
         c1798:	e0221c21 	eor	r1, r2, r1, lsr #24
         c179c:	e20110ff 	and	r1, r1, #255	; 0xff
         c17a0:	e7d91001 	ldrb	r1, [r9, r1]
         c17a4:	e1310006 	teq	r1, r6
         c17a8:	0a000016 	beq	c1808 <TFlashIterator::Lookup(unsigned long, int, long *)+0x200>
         c17ac:	e3360000 	teq	r6, #0	; 0x0
         c17b0:	1a000016 	bne	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c17b4:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c17b8:	e5900004 	ldr	r0, [r0, #4]	; fField4
         c17bc:	e1a00800 	mov	r0, r0, lsl #16
         c17c0:	e591104c 	ldr	r1, [r1, #76]
         c17c4:	e0210c20 	eor	r0, r1, r0, lsr #24
         c17c8:	e20000ff 	and	r0, r0, #255	; 0xff
         c17cc:	e7d90000 	ldrb	r0, [r9, r0]
         c17d0:	e2400003 	sub	r0, r0, #3	; 0x3
         c17d4:	e350000a 	cmp	r0, #10	; 0xa
         c17d8:	908ff100 	addls	pc, pc, r0, lsl #2
         c17dc:	ea00000b 	b	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c17e0:	ea000008 	b	c1808 <TFlashIterator::Lookup(unsigned long, int, long *)+0x200>
         c17e4:	ea000007 	b	c1808 <TFlashIterator::Lookup(unsigned long, int, long *)+0x200>
         c17e8:	ea000008 	b	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c17ec:	ea000005 	b	c1808 <TFlashIterator::Lookup(unsigned long, int, long *)+0x200>
         c17f0:	ea000006 	b	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c17f4:	ea000005 	b	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c17f8:	ea000004 	b	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c17fc:	ea000001 	b	c1808 <TFlashIterator::Lookup(unsigned long, int, long *)+0x200>
         c1800:	ea000000 	b	c1808 <TFlashIterator::Lookup(unsigned long, int, long *)+0x200>
         c1804:	ea000001 	b	c1810 <TFlashIterator::Lookup(unsigned long, int, long *)+0x208>
         c1808:	e3a00000 	mov	r0, #0	; 0x0
         c180c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c1810:	e28dd004 	add	sp, sp, #4	; 0x4
         c1814:	eaffff90 	b	c165c <TFlashIterator::Lookup(unsigned long, int, long *)+0x54>
    */
}

/**
 * Symbol: TFlashIterator::GetDirEnt(unsigned long)
 * Address: 000c1818
 */
TFlashIterator::GetDirEnt(unsigned long) {
    /*
         c1818:	e5913034 	ldr	r3, [r1, #52]	; fField52
         c181c:	e3730001 	cmn	r3, #1	; 0x1
         c1820:	0a000004 	beq	c1838 <TFlashIterator::GetDirEnt(unsigned long)+0x20>
         c1824:	e1530002 	cmp	r3, r2
         c1828:	8a000002 	bhi	c1838 <TFlashIterator::GetDirEnt(unsigned long)+0x20>
         c182c:	e283c040 	add	ip, r3, #64	; 0x40
         c1830:	e15c0002 	cmp	ip, r2
         c1834:	8a000000 	bhi	c183c <TFlashIterator::GetDirEnt(unsigned long)+0x24>
         c1838:	ea692346 	b	1b0a558 <TFlashIterator::$ReadDirBucket(unsigned long)>
         c183c:	e0422003 	sub	r2, r2, r3
         c1840:	e1a02122 	mov	r2, r2, lsr #2
         c1844:	e0811102 	add	r1, r1, r2, lsl #2
         c1848:	e5911038 	ldr	r1, [r1, #56]
         c184c:	e5801000 	str	r1, [r0]
         c1850:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashIterator::CountUnusedDirEnt(void)
 * Address: 000c1854
 */
TFlashIterator::CountUnusedDirEnt(void) {
    /*
         c1854:	e1a0c00d 	mov	ip, sp
         c1858:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c185c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c1860:	e1a04000 	mov	r4, r0
         c1864:	eb68d8ca 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c1868:	e3300000 	teq	r0, #0	; 0x0
         c186c:	1a000005 	bne	c1888 <TFlashIterator::CountUnusedDirEnt(void)+0x34>
         c1870:	e1a00004 	mov	r0, r4
         c1874:	eb68f9e8 	bl	1b0001c <TFlashIterator::$Next(void)>
         c1878:	e1a00004 	mov	r0, r4
         c187c:	eb68d8c4 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c1880:	e3300000 	teq	r0, #0	; 0x0
         c1884:	0afffff9 	beq	c1870 <TFlashIterator::CountUnusedDirEnt(void)+0x1c>
         c1888:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
         c188c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashIterator::__ct(TFlashStore *, TObjRef *, TFlashBlock *, IterFilterType)
 * Address: 000c1890
 */
TFlashIterator::TFlashIterator(TFlashStore *, TObjRef *, TFlashBlock *, IterFilterType) {
    /*
         c1890:	e1a0c00d 	mov	ip, sp
         c1894:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c1898:	e24cb004 	sub	fp, ip, #4	; 0x4
         c189c:	e1b04000 	movs	r4, r0
         c18a0:	e1a07001 	mov	r7, r1
         c18a4:	e1a06002 	mov	r6, r2
         c18a8:	e1a05003 	mov	r5, r3
         c18ac:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         c18b0:	1a000003 	bne	c18c4 <TFlashIterator::__ct(TFlashStore *, TObjRef *, TFlashBlock *, IterFilterType)+0x34>
         c18b4:	e3a00078 	mov	r0, #120	; 0x78
         c18b8:	eb6c339e 	bl	1bce738 <$__nw(unsigned int)>
         c18bc:	e1b04000 	movs	r4, r0
         c18c0:	0a000004 	beq	c18d8 <TFlashIterator::__ct(TFlashStore *, TObjRef *, TFlashBlock *, IterFilterType)+0x48>
         c18c4:	e88400c0 	stmia	r4, {r6, r7}
         c18c8:	e1a02008 	mov	r2, r8
         c18cc:	e1a00004 	mov	r0, r4
         c18d0:	e5b51004 	ldr	r1, [r5, #4]!	; fField4
         c18d4:	eb6916bd 	bl	1b073d0 <TFlashIterator::$Start(unsigned long, IterFilterType)>
         c18d8:	e1a00004 	mov	r0, r4
         c18dc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashIterator::__ct(TFlashStore *, SDirEnt *, unsigned long)
 * Address: 000c18e0
 */
TFlashIterator::TFlashIterator(TFlashStore *, SDirEnt *, unsigned long) {
    /*
         c18e0:	e1a0c00d 	mov	ip, sp
         c18e4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c18e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c18ec:	e1b04000 	movs	r4, r0
         c18f0:	e1a05001 	mov	r5, r1
         c18f4:	e1a07002 	mov	r7, r2
         c18f8:	e1a06003 	mov	r6, r3
         c18fc:	1a000003 	bne	c1910 <TFlashIterator::__ct(TFlashStore *, SDirEnt *, unsigned long)+0x30>
         c1900:	e3a00078 	mov	r0, #120	; 0x78
         c1904:	eb6c338b 	bl	1bce738 <$__nw(unsigned int)>
         c1908:	e1b04000 	movs	r4, r0
         c190c:	0a000007 	beq	c1930 <TFlashIterator::__ct(TFlashStore *, SDirEnt *, unsigned long)+0x50>
         c1910:	e3a00000 	mov	r0, #0	; 0x0
         c1914:	e88400a1 	stmia	r4, {r0, r5, r7}
         c1918:	e5b5006c 	ldr	r0, [r5, #108]!
         c191c:	e1a01006 	mov	r1, r6
         c1920:	e584000c 	str	r0, [r4, #12]	; fField12
         c1924:	e1a00004 	mov	r0, r4
         c1928:	e3a02004 	mov	r2, #4	; 0x4
         c192c:	eb6916a7 	bl	1b073d0 <TFlashIterator::$Start(unsigned long, IterFilterType)>
         c1930:	e1a00004 	mov	r0, r4
         c1934:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashIterator::Done(void)
 * Address: 000c1938
 */
TFlashIterator::Done(void) {
    /*
         c1938:	e1a0c00d 	mov	ip, sp
         c193c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c1940:	e24cb004 	sub	fp, ip, #4	; 0x4
         c1944:	e1a04000 	mov	r4, r0
         c1948:	e5900018 	ldr	r0, [r0, #24]	; fField24
         c194c:	e3a05001 	mov	r5, #1	; 0x1
         c1950:	e3300000 	teq	r0, #0	; 0x0
         c1954:	0a00000e 	beq	c1994 <TFlashIterator::Done(void)+0x5c>
         c1958:	e3300002 	teq	r0, #2	; 0x2
         c195c:	1a000015 	bne	c19b8 <TFlashIterator::Done(void)+0x80>
         c1960:	e5940030 	ldr	r0, [r4, #48]	; fField48
         c1964:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c1968:	e59110a0 	ldr	r1, [r1, #160]
         c196c:	e1300001 	teq	r0, r1
         c1970:	13a00000 	movne	r0, #0	; 0x0
         c1974:	15840018 	strne	r0, [r4, #24]	; fField24
         c1978:	e1a00004 	mov	r0, r4
         c197c:	eb68fddd 	bl	1b010f8 <TFlashIterator::$Probe(void)>
         c1980:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c1984:	e3300003 	teq	r0, #3	; 0x3
         c1988:	0a00000c 	beq	c19c0 <TFlashIterator::Done(void)+0x88>
         c198c:	e5a45018 	str	r5, [r4, #24]!	; fField24
         c1990:	ea00000c 	b	c19c8 <TFlashIterator::Done(void)+0x90>
         c1994:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1998:	e59000a0 	ldr	r0, [r0, #160]
         c199c:	e5840030 	str	r0, [r4, #48]	; fField48
         c19a0:	e1a00004 	mov	r0, r4
         c19a4:	eb68fdd3 	bl	1b010f8 <TFlashIterator::$Probe(void)>
         c19a8:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c19ac:	e3300003 	teq	r0, #3	; 0x3
         c19b0:	1afffff5 	bne	c198c <TFlashIterator::Done(void)+0x54>
         c19b4:	ea000001 	b	c19c0 <TFlashIterator::Done(void)+0x88>
         c19b8:	e3300003 	teq	r0, #3	; 0x3
         c19bc:	1a000001 	bne	c19c8 <TFlashIterator::Done(void)+0x90>
         c19c0:	e3a00001 	mov	r0, #1	; 0x1
         c19c4:	ea000000 	b	c19cc <TFlashIterator::Done(void)+0x94>
         c19c8:	e3a00000 	mov	r0, #0	; 0x0
         c19cc:	e20000ff 	and	r0, r0, #255	; 0xff
         c19d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashIterator::Probe(void)
 * Address: 000c19d4
 */
TFlashIterator::Probe(void) {
    /*
         c19d4:	e1a0c00d 	mov	ip, sp
         c19d8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c19dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c19e0:	e1a04000 	mov	r4, r0
         c19e4:	e3a02002 	mov	r2, #2	; 0x2
         c19e8:	e5901018 	ldr	r1, [r0, #24]	; fField24
         c19ec:	e3e00000 	mvn	r0, #0	; 0x0
         c19f0:	e3a05004 	mov	r5, #4	; 0x4
         c19f4:	e3a03000 	mov	r3, #0	; 0x0
         c19f8:	e3310000 	teq	r1, #0	; 0x0
         c19fc:	1a000026 	bne	c1a9c <TFlashIterator::Probe(void)+0xc8>
         c1a00:	e5941010 	ldr	r1, [r4, #16]	; fField16
         c1a04:	e3510005 	cmp	r1, #5	; 0x5
         c1a08:	908ff101 	addls	pc, pc, r1, lsl #2
         c1a0c:	ea000005 	b	c1a28 <TFlashIterator::Probe(void)+0x54>
         c1a10:	ea000009 	b	c1a3c <TFlashIterator::Probe(void)+0x68>
         c1a14:	ea000008 	b	c1a3c <TFlashIterator::Probe(void)+0x68>
         c1a18:	ea000016 	b	c1a78 <TFlashIterator::Probe(void)+0xa4>
         c1a1c:	ea000015 	b	c1a78 <TFlashIterator::Probe(void)+0xa4>
         c1a20:	ea000017 	b	c1a84 <TFlashIterator::Probe(void)+0xb0>
         c1a24:	e584002c 	str	r0, [r4, #44]	; fField44
         c1a28:	e5842018 	str	r2, [r4, #24]	; fField24
         c1a2c:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c1a30:	e59110a0 	ldr	r1, [r1, #160]
         c1a34:	e5841030 	str	r1, [r4, #48]	; fField48
         c1a38:	ea00001a 	b	c1aa8 <TFlashIterator::Probe(void)+0xd4>
         c1a3c:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c1a40:	e594c030 	ldr	ip, [r4, #48]	; fField48
         c1a44:	e59130a0 	ldr	r3, [r1, #160]
         c1a48:	e13c0003 	teq	ip, r3
         c1a4c:	0a000009 	beq	c1a78 <TFlashIterator::Probe(void)+0xa4>
         c1a50:	e5911050 	ldr	r1, [r1, #80]
         c1a54:	e2411001 	sub	r1, r1, #1	; 0x1
         c1a58:	e1e03001 	mvn	r3, r1
         c1a5c:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c1a60:	e0031001 	and	r1, r3, r1
         c1a64:	e2811004 	add	r1, r1, #4	; 0x4
         c1a68:	ea000003 	b	c1a7c <TFlashIterator::Probe(void)+0xa8>
         c1a6c:	e5840028 	str	r0, [r4, #40]	; fField40
         c1a70:	e584501c 	str	r5, [r4, #28]	; fField28
         c1a74:	eaffffeb 	b	c1a28 <TFlashIterator::Probe(void)+0x54>
         c1a78:	e5941014 	ldr	r1, [r4, #20]	; fField20
         c1a7c:	e5841024 	str	r1, [r4, #36]	; fField36
         c1a80:	eafffff9 	b	c1a6c <TFlashIterator::Probe(void)+0x98>
         c1a84:	e5840024 	str	r0, [r4, #36]	; fField36
         c1a88:	e5840034 	str	r0, [r4, #52]	; fField52
         c1a8c:	e5941014 	ldr	r1, [r4, #20]	; fField20
         c1a90:	e5841028 	str	r1, [r4, #40]	; fField40
         c1a94:	e584301c 	str	r3, [r4, #28]	; fField28
         c1a98:	eaffffe2 	b	c1a28 <TFlashIterator::Probe(void)+0x54>
         c1a9c:	e3310001 	teq	r1, #1	; 0x1
         c1aa0:	05a42018 	streq	r2, [r4, #24]!	; fField24
         c1aa4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         c1aa8:	e3a06003 	mov	r6, #3	; 0x3
         c1aac:	e5941010 	ldr	r1, [r4, #16]	; fField16
         c1ab0:	e3510005 	cmp	r1, #5	; 0x5
         c1ab4:	908ff101 	addls	pc, pc, r1, lsl #2
         c1ab8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c1abc:	ea000004 	b	c1ad4 <TFlashIterator::Probe(void)+0x100>
         c1ac0:	ea000068 	b	c1c68 <TFlashIterator::Probe(void)+0x294>
         c1ac4:	ea0000c8 	b	c1dec <TFlashIterator::Probe(void)+0x418>
         c1ac8:	ea000101 	b	c1ed4 <TFlashIterator::Probe(void)+0x500>
         c1acc:	ea000138 	b	c1fb4 <TFlashIterator::Probe(void)+0x5e0>
         c1ad0:	ea000160 	b	c2058 <TFlashIterator::Probe(void)+0x684>
         c1ad4:	e5840028 	str	r0, [r4, #40]	; fField40
         c1ad8:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c1adc:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c1ae0:	e0813000 	add	r3, r1, r0
         c1ae4:	e5843024 	str	r3, [r4, #36]	; fField36
         c1ae8:	e1a0c003 	mov	ip, r3
         c1aec:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1af0:	e1a02000 	mov	r2, r0
         c1af4:	e5d0103d 	ldrb	r1, [r0, #61]
         c1af8:	e3310000 	teq	r1, #0	; 0x0
         c1afc:	03a0eb01 	moveq	lr, #1024	; 0x400
         c1b00:	13a0ec01 	movne	lr, #256	; 0x100
         c1b04:	e5901050 	ldr	r1, [r0, #80]
         c1b08:	e041e00e 	sub	lr, r1, lr
         c1b0c:	e590005c 	ldr	r0, [r0, #92]
         c1b10:	e000000c 	and	r0, r0, ip
         c1b14:	e15e0000 	cmp	lr, r0
         c1b18:	8a000011 	bhi	c1b64 <TFlashIterator::Probe(void)+0x190>
         c1b1c:	e0810003 	add	r0, r1, r3
         c1b20:	e2400001 	sub	r0, r0, #1	; 0x1
         c1b24:	e2411001 	sub	r1, r1, #1	; 0x1
         c1b28:	e1c00001 	bic	r0, r0, r1
         c1b2c:	e5840024 	str	r0, [r4, #36]	; fField36
         c1b30:	e1a00002 	mov	r0, r2
         c1b34:	eb69162e 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c1b38:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c1b3c:	e1500001 	cmp	r0, r1
         c1b40:	9a00014c 	bls	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1b44:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1b48:	e590202c 	ldr	r2, [r0, #44]	; fField44
         c1b4c:	e5900058 	ldr	r0, [r0, #88]
         c1b50:	e1a00031 	mov	r0, r1, lsr r0
         c1b54:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         c1b58:	eb68f4fa 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c1b5c:	e3300000 	teq	r0, #0	; 0x0
         c1b60:	1a000144 	bne	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1b64:	e3e02000 	mvn	r2, #0	; 0x0
         c1b68:	e5940000 	ldr	r0, [r4]
         c1b6c:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c1b70:	eb690dd6 	bl	1b052d0 <TObjRef::$Set(unsigned long, unsigned long)>
         c1b74:	e5940000 	ldr	r0, [r4]
         c1b78:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c1b7c:	eb68f4ef 	bl	1afef40 <SObject::$IsValid(TFlashStore *)>
         c1b80:	e3300000 	teq	r0, #0	; 0x0
         c1b84:	e5940000 	ldr	r0, [r4]
         c1b88:	0a000019 	beq	c1bf4 <TFlashIterator::Probe(void)+0x220>
         c1b8c:	e1a01000 	mov	r1, r0
         c1b90:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c1b94:	e5900000 	ldr	r0, [r0]
         c1b98:	e1a00100 	mov	r0, r0, lsl #2
         c1b9c:	e592204c 	ldr	r2, [r2, #76]
         c1ba0:	e2022001 	and	r2, r2, #1	; 0x1
         c1ba4:	e1320fa0 	teq	r2, r0, lsr #31
         c1ba8:	1a000004 	bne	c1bc0 <TFlashIterator::Probe(void)+0x1ec>
         c1bac:	e5910004 	ldr	r0, [r1, #4]	; fField4
         c1bb0:	e0860820 	add	r0, r6, r0, lsr #16
         c1bb4:	e3c00003 	bic	r0, r0, #3	; 0x3
         c1bb8:	e2800008 	add	r0, r0, #8	; 0x8
         c1bbc:	ea000000 	b	c1bc4 <TFlashIterator::Probe(void)+0x1f0>
         c1bc0:	e3a00004 	mov	r0, #4	; 0x4
         c1bc4:	e584001c 	str	r0, [r4, #28]	; fField28
         c1bc8:	e5912010 	ldr	r2, [r1, #16]	; fField16
         c1bcc:	e5911000 	ldr	r1, [r1]
         c1bd0:	e1a00081 	mov	r0, r1, lsl #1
         c1bd4:	e5922048 	ldr	r2, [r2, #72]
         c1bd8:	e2022001 	and	r2, r2, #1	; 0x1
         c1bdc:	e1320fa0 	teq	r2, r0, lsr #31
         c1be0:	0affffbc 	beq	c1ad8 <TFlashIterator::Probe(void)+0x104>
         c1be4:	e3c1020f 	bic	r0, r1, #-268435456	; 0xf0000000
         c1be8:	e3500021 	cmp	r0, #33	; 0x21
         c1bec:	baffffb9 	blt	c1ad8 <TFlashIterator::Probe(void)+0x104>
         c1bf0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c1bf4:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c1bf8:	e591104c 	ldr	r1, [r1, #76]
         c1bfc:	e5900000 	ldr	r0, [r0]
         c1c00:	e1310000 	teq	r1, r0
         c1c04:	1a000015 	bne	c1c60 <TFlashIterator::Probe(void)+0x28c>
         c1c08:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1c0c:	e1a01000 	mov	r1, r0
         c1c10:	e5900050 	ldr	r0, [r0, #80]
         c1c14:	e5943024 	ldr	r3, [r4, #36]	; fField36
         c1c18:	e0802003 	add	r2, r0, r3
         c1c1c:	e2422001 	sub	r2, r2, #1	; 0x1
         c1c20:	e2400001 	sub	r0, r0, #1	; 0x1
         c1c24:	e1c20000 	bic	r0, r2, r0
         c1c28:	e5840024 	str	r0, [r4, #36]	; fField36
         c1c2c:	e1a00001 	mov	r0, r1
         c1c30:	eb6915ef 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c1c34:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c1c38:	e1500001 	cmp	r0, r1
         c1c3c:	9a00010d 	bls	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1c40:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1c44:	e590202c 	ldr	r2, [r0, #44]	; fField44
         c1c48:	e5900058 	ldr	r0, [r0, #88]
         c1c4c:	e1a00031 	mov	r0, r1, lsr r0
         c1c50:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         c1c54:	eb68f4bb 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c1c58:	e3300000 	teq	r0, #0	; 0x0
         c1c5c:	1a000105 	bne	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1c60:	e584501c 	str	r5, [r4, #28]	; fField28
         c1c64:	eaffff9b 	b	c1ad8 <TFlashIterator::Probe(void)+0x104>
         c1c68:	e5840028 	str	r0, [r4, #40]	; fField40
         c1c6c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c1c70:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c1c74:	e0813000 	add	r3, r1, r0
         c1c78:	e5843024 	str	r3, [r4, #36]	; fField36
         c1c7c:	e1a0c003 	mov	ip, r3
         c1c80:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1c84:	e1a02000 	mov	r2, r0
         c1c88:	e5d0103d 	ldrb	r1, [r0, #61]
         c1c8c:	e3310000 	teq	r1, #0	; 0x0
         c1c90:	03a0eb01 	moveq	lr, #1024	; 0x400
         c1c94:	13a0ec01 	movne	lr, #256	; 0x100
         c1c98:	e5901050 	ldr	r1, [r0, #80]
         c1c9c:	e041e00e 	sub	lr, r1, lr
         c1ca0:	e590005c 	ldr	r0, [r0, #92]
         c1ca4:	e000000c 	and	r0, r0, ip
         c1ca8:	e15e0000 	cmp	lr, r0
         c1cac:	8a000011 	bhi	c1cf8 <TFlashIterator::Probe(void)+0x324>
         c1cb0:	e0810003 	add	r0, r1, r3
         c1cb4:	e2400001 	sub	r0, r0, #1	; 0x1
         c1cb8:	e2411001 	sub	r1, r1, #1	; 0x1
         c1cbc:	e1c00001 	bic	r0, r0, r1
         c1cc0:	e5840024 	str	r0, [r4, #36]	; fField36
         c1cc4:	e1a00002 	mov	r0, r2
         c1cc8:	eb6915c9 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c1ccc:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c1cd0:	e1500001 	cmp	r0, r1
         c1cd4:	9a0000e7 	bls	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1cd8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1cdc:	e590202c 	ldr	r2, [r0, #44]	; fField44
         c1ce0:	e5900058 	ldr	r0, [r0, #88]
         c1ce4:	e1a00031 	mov	r0, r1, lsr r0
         c1ce8:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         c1cec:	eb68f495 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c1cf0:	e3300000 	teq	r0, #0	; 0x0
         c1cf4:	1a0000df 	bne	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1cf8:	e3e02000 	mvn	r2, #0	; 0x0
         c1cfc:	e5940000 	ldr	r0, [r4]
         c1d00:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c1d04:	eb690d71 	bl	1b052d0 <TObjRef::$Set(unsigned long, unsigned long)>
         c1d08:	e5940000 	ldr	r0, [r4]
         c1d0c:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c1d10:	eb68f48a 	bl	1afef40 <SObject::$IsValid(TFlashStore *)>
         c1d14:	e3300000 	teq	r0, #0	; 0x0
         c1d18:	e5940000 	ldr	r0, [r4]
         c1d1c:	0a000015 	beq	c1d78 <TFlashIterator::Probe(void)+0x3a4>
         c1d20:	e5901000 	ldr	r1, [r0]
         c1d24:	e1a01101 	mov	r1, r1, lsl #2
         c1d28:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c1d2c:	e592204c 	ldr	r2, [r2, #76]
         c1d30:	e2022001 	and	r2, r2, #1	; 0x1
         c1d34:	e1320fa1 	teq	r2, r1, lsr #31
         c1d38:	1a000004 	bne	c1d50 <TFlashIterator::Probe(void)+0x37c>
         c1d3c:	e5901004 	ldr	r1, [r0, #4]	; fField4
         c1d40:	e0861821 	add	r1, r6, r1, lsr #16
         c1d44:	e3c11003 	bic	r1, r1, #3	; 0x3
         c1d48:	e2811008 	add	r1, r1, #8	; 0x8
         c1d4c:	ea000000 	b	c1d54 <TFlashIterator::Probe(void)+0x380>
         c1d50:	e3a01004 	mov	r1, #4	; 0x4
         c1d54:	e584101c 	str	r1, [r4, #28]	; fField28
         c1d58:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c1d5c:	e5900000 	ldr	r0, [r0]
         c1d60:	e1a00080 	mov	r0, r0, lsl #1
         c1d64:	e5911048 	ldr	r1, [r1, #72]
         c1d68:	e2011001 	and	r1, r1, #1	; 0x1
         c1d6c:	e1310fa0 	teq	r1, r0, lsr #31
         c1d70:	0affffbd 	beq	c1c6c <TFlashIterator::Probe(void)+0x298>
         c1d74:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c1d78:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c1d7c:	e591104c 	ldr	r1, [r1, #76]
         c1d80:	e5900000 	ldr	r0, [r0]
         c1d84:	e1310000 	teq	r1, r0
         c1d88:	1a000015 	bne	c1de4 <TFlashIterator::Probe(void)+0x410>
         c1d8c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1d90:	e1a01000 	mov	r1, r0
         c1d94:	e5900050 	ldr	r0, [r0, #80]
         c1d98:	e5943024 	ldr	r3, [r4, #36]	; fField36
         c1d9c:	e0802003 	add	r2, r0, r3
         c1da0:	e2422001 	sub	r2, r2, #1	; 0x1
         c1da4:	e2400001 	sub	r0, r0, #1	; 0x1
         c1da8:	e1c20000 	bic	r0, r2, r0
         c1dac:	e5840024 	str	r0, [r4, #36]	; fField36
         c1db0:	e1a00001 	mov	r0, r1
         c1db4:	eb69158e 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c1db8:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c1dbc:	e1500001 	cmp	r0, r1
         c1dc0:	9a0000ac 	bls	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1dc4:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1dc8:	e590202c 	ldr	r2, [r0, #44]	; fField44
         c1dcc:	e5900058 	ldr	r0, [r0, #88]
         c1dd0:	e1a00031 	mov	r0, r1, lsr r0
         c1dd4:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         c1dd8:	eb68f45a 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c1ddc:	e3300000 	teq	r0, #0	; 0x0
         c1de0:	1a0000a4 	bne	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1de4:	e584501c 	str	r5, [r4, #28]	; fField28
         c1de8:	eaffff9f 	b	c1c6c <TFlashIterator::Probe(void)+0x298>
         c1dec:	e5840028 	str	r0, [r4, #40]	; fField40
         c1df0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         c1df4:	e594101c 	ldr	r1, [r4, #28]	; fField28
         c1df8:	e0801001 	add	r1, r0, r1
         c1dfc:	e5841024 	str	r1, [r4, #36]	; fField36
         c1e00:	e1a02001 	mov	r2, r1
         c1e04:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1e08:	e5d0303d 	ldrb	r3, [r0, #61]
         c1e0c:	e3330000 	teq	r3, #0	; 0x0
         c1e10:	03a03b01 	moveq	r3, #1024	; 0x400
         c1e14:	13a03c01 	movne	r3, #256	; 0x100
         c1e18:	e590c050 	ldr	ip, [r0, #80]
         c1e1c:	e04c3003 	sub	r3, ip, r3
         c1e20:	e590005c 	ldr	r0, [r0, #92]
         c1e24:	e0000002 	and	r0, r0, r2
         c1e28:	e1530000 	cmp	r3, r0
         c1e2c:	9a000091 	bls	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1e30:	e3e02000 	mvn	r2, #0	; 0x0
         c1e34:	e5940000 	ldr	r0, [r4]
         c1e38:	eb690d24 	bl	1b052d0 <TObjRef::$Set(unsigned long, unsigned long)>
         c1e3c:	e5940000 	ldr	r0, [r4]
         c1e40:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c1e44:	eb68f43d 	bl	1afef40 <SObject::$IsValid(TFlashStore *)>
         c1e48:	e3300000 	teq	r0, #0	; 0x0
         c1e4c:	e5940000 	ldr	r0, [r4]
         c1e50:	0a000018 	beq	c1eb8 <TFlashIterator::Probe(void)+0x4e4>
         c1e54:	e5901000 	ldr	r1, [r0]
         c1e58:	e1a01101 	mov	r1, r1, lsl #2
         c1e5c:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c1e60:	e592204c 	ldr	r2, [r2, #76]
         c1e64:	e2022001 	and	r2, r2, #1	; 0x1
         c1e68:	e1320fa1 	teq	r2, r1, lsr #31
         c1e6c:	1a000004 	bne	c1e84 <TFlashIterator::Probe(void)+0x4b0>
         c1e70:	e5901004 	ldr	r1, [r0, #4]	; fField4
         c1e74:	e0861821 	add	r1, r6, r1, lsr #16
         c1e78:	e3c11003 	bic	r1, r1, #3	; 0x3
         c1e7c:	e2811008 	add	r1, r1, #8	; 0x8
         c1e80:	ea000000 	b	c1e88 <TFlashIterator::Probe(void)+0x4b4>
         c1e84:	e3a01004 	mov	r1, #4	; 0x4
         c1e88:	e584101c 	str	r1, [r4, #28]	; fField28
         c1e8c:	e4901010 	ldr	r1, [r0], #16	; fField16
         c1e90:	e5902000 	ldr	r2, [r0]
         c1e94:	e1a00081 	mov	r0, r1, lsl #1
         c1e98:	e5922048 	ldr	r2, [r2, #72]
         c1e9c:	e2022001 	and	r2, r2, #1	; 0x1
         c1ea0:	e1320fa0 	teq	r2, r0, lsr #31
         c1ea4:	0affffd1 	beq	c1df0 <TFlashIterator::Probe(void)+0x41c>
         c1ea8:	e3c1020f 	bic	r0, r1, #-268435456	; 0xf0000000
         c1eac:	e3500021 	cmp	r0, #33	; 0x21
         c1eb0:	baffffce 	blt	c1df0 <TFlashIterator::Probe(void)+0x41c>
         c1eb4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c1eb8:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c1ebc:	e591104c 	ldr	r1, [r1, #76]
         c1ec0:	e5900000 	ldr	r0, [r0]
         c1ec4:	e1310000 	teq	r1, r0
         c1ec8:	1584501c 	strne	r5, [r4, #28]	; fField28
         c1ecc:	1affffc7 	bne	c1df0 <TFlashIterator::Probe(void)+0x41c>
         c1ed0:	ea000068 	b	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1ed4:	e5840028 	str	r0, [r4, #40]	; fField40
         c1ed8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         c1edc:	e594101c 	ldr	r1, [r4, #28]	; fField28
         c1ee0:	e0801001 	add	r1, r0, r1
         c1ee4:	e5841024 	str	r1, [r4, #36]	; fField36
         c1ee8:	e1a02001 	mov	r2, r1
         c1eec:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c1ef0:	e5d0303d 	ldrb	r3, [r0, #61]
         c1ef4:	e3330000 	teq	r3, #0	; 0x0
         c1ef8:	03a03b01 	moveq	r3, #1024	; 0x400
         c1efc:	13a03c01 	movne	r3, #256	; 0x100
         c1f00:	e590c050 	ldr	ip, [r0, #80]
         c1f04:	e04c3003 	sub	r3, ip, r3
         c1f08:	e590005c 	ldr	r0, [r0, #92]
         c1f0c:	e0000002 	and	r0, r0, r2
         c1f10:	e1530000 	cmp	r3, r0
         c1f14:	9a000057 	bls	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1f18:	e3e02000 	mvn	r2, #0	; 0x0
         c1f1c:	e5940000 	ldr	r0, [r4]
         c1f20:	eb690cea 	bl	1b052d0 <TObjRef::$Set(unsigned long, unsigned long)>
         c1f24:	e5940000 	ldr	r0, [r4]
         c1f28:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c1f2c:	eb68f403 	bl	1afef40 <SObject::$IsValid(TFlashStore *)>
         c1f30:	e3300000 	teq	r0, #0	; 0x0
         c1f34:	e5940000 	ldr	r0, [r4]
         c1f38:	0a000016 	beq	c1f98 <TFlashIterator::Probe(void)+0x5c4>
         c1f3c:	e1a01000 	mov	r1, r0
         c1f40:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c1f44:	e5900000 	ldr	r0, [r0]
         c1f48:	e1a00100 	mov	r0, r0, lsl #2
         c1f4c:	e592204c 	ldr	r2, [r2, #76]
         c1f50:	e2022001 	and	r2, r2, #1	; 0x1
         c1f54:	e1320fa0 	teq	r2, r0, lsr #31
         c1f58:	1a000004 	bne	c1f70 <TFlashIterator::Probe(void)+0x59c>
         c1f5c:	e5910004 	ldr	r0, [r1, #4]	; fField4
         c1f60:	e0860820 	add	r0, r6, r0, lsr #16
         c1f64:	e3c00003 	bic	r0, r0, #3	; 0x3
         c1f68:	e2800008 	add	r0, r0, #8	; 0x8
         c1f6c:	ea000000 	b	c1f74 <TFlashIterator::Probe(void)+0x5a0>
         c1f70:	e3a00004 	mov	r0, #4	; 0x4
         c1f74:	e584001c 	str	r0, [r4, #28]	; fField28
         c1f78:	e5910010 	ldr	r0, [r1, #16]	; fField16
         c1f7c:	e5911000 	ldr	r1, [r1]
         c1f80:	e1a01081 	mov	r1, r1, lsl #1
         c1f84:	e5900048 	ldr	r0, [r0, #72]
         c1f88:	e2000001 	and	r0, r0, #1	; 0x1
         c1f8c:	e1300fa1 	teq	r0, r1, lsr #31
         c1f90:	0affffd0 	beq	c1ed8 <TFlashIterator::Probe(void)+0x504>
         c1f94:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c1f98:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c1f9c:	e591104c 	ldr	r1, [r1, #76]
         c1fa0:	e5900000 	ldr	r0, [r0]
         c1fa4:	e1310000 	teq	r1, r0
         c1fa8:	1584501c 	strne	r5, [r4, #28]	; fField28
         c1fac:	1affffc9 	bne	c1ed8 <TFlashIterator::Probe(void)+0x504>
         c1fb0:	ea000030 	b	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1fb4:	e5940028 	ldr	r0, [r4, #40]	; fField40
         c1fb8:	e2802004 	add	r2, r0, #4	; 0x4
         c1fbc:	e5842028 	str	r2, [r4, #40]	; fField40
         c1fc0:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c1fc4:	e1a01004 	mov	r1, r4
         c1fc8:	ebfffe12 	bl	c1818 <TFlashIterator::GetDirEnt(unsigned long)>
         c1fcc:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c1fd0:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c1fd4:	e591204c 	ldr	r2, [r1, #76]
         c1fd8:	e5903000 	ldr	r3, [r0]
         c1fdc:	e1320003 	teq	r2, r3
         c1fe0:	0a000024 	beq	c2078 <TFlashIterator::Probe(void)+0x6a4>
         c1fe4:	eb68f3d4 	bl	1afef3c <SDirEnt::$IsValid(TFlashStore *)>
         c1fe8:	e3300000 	teq	r0, #0	; 0x0
         c1fec:	0afffff0 	beq	c1fb4 <TFlashIterator::Probe(void)+0x5e0>
         c1ff0:	e5941004 	ldr	r1, [r4, #4]	; fField4
         c1ff4:	e1a02001 	mov	r2, r1
         c1ff8:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c1ffc:	e5900000 	ldr	r0, [r0]
         c2000:	e1a03c80 	mov	r3, r0, lsl #25
         c2004:	e5911048 	ldr	r1, [r1, #72]
         c2008:	e2011001 	and	r1, r1, #1	; 0x1
         c200c:	e1310fa3 	teq	r1, r3, lsr #31
         c2010:	1a000002 	bne	c2020 <TFlashIterator::Probe(void)+0x64c>
         c2014:	e1a03e80 	mov	r3, r0, lsl #29
         c2018:	e1310fa3 	teq	r1, r3, lsr #31
         c201c:	1affffe4 	bne	c1fb4 <TFlashIterator::Probe(void)+0x5e0>
         c2020:	e1a03c00 	mov	r3, r0, lsl #24
         c2024:	e1310fa3 	teq	r1, r3, lsr #31
         c2028:	01a00420 	moveq	r0, r0, lsr #8
         c202c:	01a00100 	moveq	r0, r0, lsl #2
         c2030:	05840028 	streq	r0, [r4, #40]	; fField40
         c2034:	05b2006c 	ldreq	r0, [r2, #108]!
         c2038:	0594100c 	ldreq	r1, [r4, #12]	; fField12
         c203c:	00800001 	addeq	r0, r0, r1
         c2040:	0584000c 	streq	r0, [r4, #12]	; fField12
         c2044:	0affffda 	beq	c1fb4 <TFlashIterator::Probe(void)+0x5e0>
         c2048:	e594000c 	ldr	r0, [r4, #12]	; fField12
         c204c:	e2400001 	sub	r0, r0, #1	; 0x1
         c2050:	e5a4000c 	str	r0, [r4, #12]!	; fField12
         c2054:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c2058:	e5940020 	ldr	r0, [r4, #32]	; fField32
         c205c:	e1a01000 	mov	r1, r0
         c2060:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
         c2064:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c2068:	e2800001 	add	r0, r0, #1	; 0x1
         c206c:	e584002c 	str	r0, [r4, #44]	; fField44
         c2070:	e1520000 	cmp	r2, r0
         c2074:	8a000001 	bhi	c2080 <TFlashIterator::Probe(void)+0x6ac>
         c2078:	e5a46018 	str	r6, [r4, #24]!	; fField24
         c207c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c2080:	e5911008 	ldr	r1, [r1, #8]	; fField8
         c2084:	e7911100 	ldr	r1, [r1, r0, lsl #2]
         c2088:	e3710001 	cmn	r1, #1	; 0x1
         c208c:	0afffff1 	beq	c2058 <TFlashIterator::Probe(void)+0x684>
         c2090:	e3e02000 	mvn	r2, #0	; 0x0
         c2094:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2098:	e5943000 	ldr	r3, [r4]
         c209c:	eb68f3b3 	bl	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
         c20a0:	e3300000 	teq	r0, #0	; 0x0
         c20a4:	1affffeb 	bne	c2058 <TFlashIterator::Probe(void)+0x684>
         c20a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashIterator::ReadDirBucket(unsigned long)
 * Address: 000c20ac
 */
TFlashIterator::ReadDirBucket(unsigned long) {
    /*
         c20ac:	e1a0c00d 	mov	ip, sp
         c20b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c20b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c20b8:	e1a06000 	mov	r6, r0
         c20bc:	e1a04001 	mov	r4, r1
         c20c0:	e1a05002 	mov	r5, r2
         c20c4:	e5910004 	ldr	r0, [r1, #4]	; fField4
         c20c8:	e1a01002 	mov	r1, r2
         c20cc:	eb6918de 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         c20d0:	e1a01000 	mov	r1, r0
         c20d4:	e2842038 	add	r2, r4, #56	; 0x38
         c20d8:	e1a07002 	mov	r7, r2
         c20dc:	e3a03040 	mov	r3, #64	; 0x40
         c20e0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c20e4:	eb68c633 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c20e8:	e5a45034 	str	r5, [r4, #52]!	; fField52
         c20ec:	e5970000 	ldr	r0, [r7]
         c20f0:	e5860000 	str	r0, [r6]
         c20f4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashIterator::Next(void)
 * Address: 000c20f8
 */
TFlashIterator::Next(void) {
    /*
         c20f8:	e1a0c00d 	mov	ip, sp
         c20fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c2100:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2104:	e1a04000 	mov	r4, r0
         c2108:	eb68fbfa 	bl	1b010f8 <TFlashIterator::$Probe(void)>
         c210c:	e5940000 	ldr	r0, [r4]
         c2110:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashIterator::Reset(void)
 * Address: 000c2114
 */
TFlashIterator::Reset(void) {
    /*
         c2114:	e3a01000 	mov	r1, #0	; 0x0
         c2118:	e5a01018 	str	r1, [r0, #24]!	; fField24
         c211c:	e1a0f00e 	mov	pc, lr
    */
}

