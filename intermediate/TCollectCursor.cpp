#include "include/TCollectCursor.h"

/**
 * Symbol: TCollectCursor::RebuildInfo(unsigned char, long)
 * Address: 002cdce8
 */
TCollectCursor::RebuildInfo(unsigned char, long) {
    /*
        2cdce8:	e1a0c00d 	mov	ip, sp
        2cdcec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cdcf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdcf4:	e1a04000 	mov	r4, r0
        2cdcf8:	e20110ff 	and	r1, r1, #255	; 0xff
        2cdcfc:	eb5de5a5 	bl	1a47398 <TCursor::$RebuildInfo(unsigned char, long)>
        2cdd00:	e1a00004 	mov	r0, r4
        2cdd04:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2cdd08:	ea5de9c5 	b	1a48424 <TCollectCursor::$Collect(void)>
    */
}

/**
 * Symbol: TCollectCursor::Invalidate(void)
 * Address: 002cdd0c
 */
TCollectCursor::Invalidate(void) {
    /*
        2cdd0c:	e1a0c00d 	mov	ip, sp
        2cdd10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cdd14:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdd18:	e1a04000 	mov	r4, r0
        2cdd1c:	eb5de180 	bl	1a46324 <TCursor::$Invalidate(void)>
        2cdd20:	e59f000c 	ldr	r0, [pc, #c]	; 2cdd34 <TCollectCursor::Invalidate(void)+0x28>
        2cdd24:	e3a01000 	mov	r1, #0	; 0x0
        2cdd28:	eb63d102 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2cdd2c:	e5a400c0 	str	r0, [r4, #192]!	; fField192
        2cdd30:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2cdd34:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TCollectCursor::GCMark(void)
 * Address: 002cdd38
 */
TCollectCursor::GCMark(void) {
    /*
        2cdd38:	e1a0c00d 	mov	ip, sp
        2cdd3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cdd40:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdd44:	e1a04000 	mov	r4, r0
        2cdd48:	eb5de5a8 	bl	1a473f0 <TCursor::$GCMark(void)>
        2cdd4c:	e5b400c0 	ldr	r0, [r4, #192]!	; fField192
        2cdd50:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2cdd54:	ea63d519 	b	1bc31c0 <$DIYGCMark(long)>
    */
}

/**
 * Symbol: TCollectCursor::GCUpdate(void)
 * Address: 002cdd58
 */
TCollectCursor::GCUpdate(void) {
    /*
        2cdd58:	e1a0c00d 	mov	ip, sp
        2cdd5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cdd60:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdd64:	e1a04000 	mov	r4, r0
        2cdd68:	eb5de5a1 	bl	1a473f4 <TCursor::$GCUpdate(void)>
        2cdd6c:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2cdd70:	eb63d515 	bl	1bc31cc <$DIYGCUpdate(long)>
        2cdd74:	e5a400c0 	str	r0, [r4, #192]!	; fField192
        2cdd78:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CreateNewCollectCursor__14TCollectCursorSFv
 * Address: 002d14fc
 */
void TCollectCursor::CreateNewCollectCursor() {
    /*
        2d14fc:	e1a0c00d 	mov	ip, sp
        2d1500:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d1504:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1508:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d150c:	e59f0064 	ldr	r0, [pc, #64]	; 2d1578 <CreateNewCollectCursor__14TCollectCursorSFv+0x7c>
        2d1510:	eb63c315 	bl	1bc216c <$Clone(RefVar const &)>
        2d1514:	eb63c30c 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1518:	e58d0004 	str	r0, [sp, #4]
        2d151c:	e59f3058 	ldr	r3, [pc, #58]	; 2d157c <CreateNewCollectCursor__14TCollectCursorSFv+0x80>
        2d1520:	e59f2058 	ldr	r2, [pc, #58]	; 2d1580 <CreateNewCollectCursor__14TCollectCursorSFv+0x84>
        2d1524:	e59f1058 	ldr	r1, [pc, #58]	; 2d1584 <CreateNewCollectCursor__14TCollectCursorSFv+0x88>
        2d1528:	e3a000c8 	mov	r0, #200	; 0xc8
        2d152c:	eb5e3edd 	bl	1a610a8 <$AllocateFramesCObject__FlPFPv_vN22>
        2d1530:	eb63c305 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1534:	e58d0000 	str	r0, [sp]
        2d1538:	e5900000 	ldr	r0, [r0]
        2d153c:	eb63c306 	bl	1bc215c <$BinaryData(long)>
        2d1540:	e3300000 	teq	r0, #0	; 0x0
        2d1544:	1b5ddbb4 	blne	1a4841c <TCollectCursor::$__ct(void)>
        2d1548:	e1a0200d 	mov	r2, sp
        2d154c:	e59f1034 	ldr	r1, [pc, #34]	; 2d1588 <CreateNewCollectCursor__14TCollectCursorSFv+0x8c>
        2d1550:	e28d0004 	add	r0, sp, #4	; 0x4
        2d1554:	eb63d383 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d1558:	e59d0004 	ldr	r0, [sp, #4]
        2d155c:	e5904000 	ldr	r4, [r0]
        2d1560:	e59d0000 	ldr	r0, [sp]
        2d1564:	eb63c714 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1568:	e59d0004 	ldr	r0, [sp, #4]
        2d156c:	eb63c712 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1570:	e1a00004 	mov	r0, r4
        2d1574:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2d1578:	0067fd78 	rsbeq	pc, r7, r8, ror sp
        2d157c:	002ceba4 	eoreq	lr, ip, r4, lsr #23
        2d1580:	002cdc78 	eoreq	sp, ip, r8, ror ip
        2d1584:	002cf354 	eoreq	pc, ip, r4, asr r3
        2d1588:	00684a80 	rsbeq	r4, r8, r0, lsl #21
    */
}

/**
 * Symbol: TCollectCursor::__ct(void)
 * Address: 002d158c
 */
TCollectCursor::TCollectCursor(void) {
    /*
        2d158c:	e1a0c00d 	mov	ip, sp
        2d1590:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d1594:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1598:	e1b04000 	movs	r4, r0
        2d159c:	1a000003 	bne	2d15b0 <TCollectCursor::__ct(void)+0x24>
        2d15a0:	e3a000c8 	mov	r0, #200	; 0xc8
        2d15a4:	eb63f463 	bl	1bce738 <$__nw(unsigned int)>
        2d15a8:	e1b04000 	movs	r4, r0
        2d15ac:	0a000007 	beq	2d15d0 <TCollectCursor::__ct(void)+0x44>
        2d15b0:	e1a00004 	mov	r0, r4
        2d15b4:	eb5dd36c 	bl	1a4636c <TCursor::$__ct(void)>
        2d15b8:	e59f0018 	ldr	r0, [pc, #18]	; 2d15d8 <TCollectCursor::__ct(void)+0x4c>
        2d15bc:	e5840000 	str	r0, [r4]
        2d15c0:	e3a00000 	mov	r0, #0	; 0x0
        2d15c4:	e58400c4 	str	r0, [r4, #196]	; fField196
        2d15c8:	e3a00002 	mov	r0, #2	; 0x2
        2d15cc:	e58400c0 	str	r0, [r4, #192]	; fField192
        2d15d0:	e1a00004 	mov	r0, r4
        2d15d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2d15d8:	0001d650 	andeq	sp, r1, r0, asr r6
    */
}

/**
 * Symbol: TCollectCursor::__dt(void)
 * Address: 002d15dc
 */
TCollectCursor::~TCollectCursor(void) {
    /*
        2d15dc:	e1a0c00d 	mov	ip, sp
        2d15e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d15e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d15e8:	e1a04000 	mov	r4, r0
        2d15ec:	e1a05001 	mov	r5, r1
        2d15f0:	e59f0020 	ldr	r0, [pc, #20]	; 2d1618 <TCollectCursor::__dt(void)+0x3c>	; fField20
        2d15f4:	e5840000 	str	r0, [r4]
        2d15f8:	e1a00004 	mov	r0, r4
        2d15fc:	e3a01000 	mov	r1, #0	; 0x0
        2d1600:	eb5ddb83 	bl	1a48414 <TCursor::$__dt(void)>
        2d1604:	e3150001 	tst	r5, #1	; 0x1
        2d1608:	11a00004 	movne	r0, r4
        2d160c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2d1610:	1a63f032 	bne	1bcd6e0 <$__dl(void *)>
        2d1614:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d1618:	0001d650 	andeq	sp, r1, r0, asr r6
    */
}

/**
 * Symbol: TCollectCursor::Collect(void)
 * Address: 002d167c
 */
TCollectCursor::Collect(void) {
    /*
        2d167c:	e1a0c00d 	mov	ip, sp
        2d1680:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d1684:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1688:	e1a04000 	mov	r4, r0
        2d168c:	e3a01000 	mov	r1, #0	; 0x0
        2d1690:	eb5e2194 	bl	1a59ce8 <TCursor::$Park(unsigned char)>
        2d1694:	e1a00004 	mov	r0, r4
        2d1698:	e3a01001 	mov	r1, #1	; 0x1
        2d169c:	eb5dd335 	bl	1a46378 <TCursor::$Move(long)>
        2d16a0:	e5941068 	ldr	r1, [r4, #104]	; fField104
        2d16a4:	e59f0100 	ldr	r0, [pc, #100]	; 2d17ac <TCollectCursor::Collect(void)+0x130>	; fField100
        2d16a8:	e3a05000 	mov	r5, #0	; 0x0
        2d16ac:	e3310002 	teq	r1, #2	; 0x2
        2d16b0:	0a000040 	beq	2d17b8 <TCollectCursor::Collect(void)+0x13c>
        2d16b4:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2d16b8:	e5b1600c 	ldr	r6, [r1, #12]!
        2d16bc:	e3a01040 	mov	r1, #64	; 0x40
        2d16c0:	eb63c29c 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d16c4:	e58400c0 	str	r0, [r4, #192]	; fField192
        2d16c8:	e5941064 	ldr	r1, [r4, #100]	; fField100
        2d16cc:	e1a02101 	mov	r2, r1, lsl #2
        2d16d0:	e1a01005 	mov	r1, r5
        2d16d4:	eb63d31f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d16d8:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d16dc:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2d16e0:	e591100c 	ldr	r1, [r1, #12]
        2d16e4:	e1a02101 	mov	r2, r1, lsl #2
        2d16e8:	e3a07001 	mov	r7, #1	; 0x1
        2d16ec:	e1a01007 	mov	r1, r7
        2d16f0:	eb63d318 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d16f4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2d16f8:	e3a00002 	mov	r0, #2	; 0x2
        2d16fc:	eb63c292 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1700:	e58d0004 	str	r0, [sp, #4]
        2d1704:	e5a05004 	str	r5, [r0, #4]!
        2d1708:	e58d4000 	str	r4, [sp]
        2d170c:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d1710:	e59d1004 	ldr	r1, [sp, #4]
        2d1714:	e5810000 	str	r0, [r1]
        2d1718:	e3a03000 	mov	r3, #0	; 0x0
        2d171c:	e3a02000 	mov	r2, #0	; 0x0
        2d1720:	e3a01000 	mov	r1, #0	; 0x0
        2d1724:	e58d7008 	str	r7, [sp, #8]
        2d1728:	e1a0000d 	mov	r0, sp
        2d172c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2d1730:	e59f3078 	ldr	r3, [pc, #78]	; 2d17b0 <TCollectCursor::Collect(void)+0x134>
        2d1734:	e92d0008 	stmdb	sp!, {r3}
        2d1738:	e2843064 	add	r3, r4, #100	; 0x64
        2d173c:	e284206c 	add	r2, r4, #108	; 0x6c
        2d1740:	e3a01001 	mov	r1, #1	; 0x1
        2d1744:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2d1748:	eb5de795 	bl	1a4b5a4 <TUnionSoupIndex::$Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)>
        2d174c:	e28dd010 	add	sp, sp, #16	; 0x10
        2d1750:	e59f705c 	ldr	r7, [pc, #5c]	; 2d17b4 <TCollectCursor::Collect(void)+0x138>
        2d1754:	e5970000 	ldr	r0, [r7]
        2d1758:	e3300000 	teq	r0, #0	; 0x0
        2d175c:	0a000001 	beq	2d1768 <TCollectCursor::Collect(void)+0xec>
        2d1760:	eb5de371 	bl	1a4a52c <$ReleasePermObjectTextCache(void *)>
        2d1764:	e5875000 	str	r5, [r7]
        2d1768:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d176c:	eb63c276 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1770:	e58d0000 	str	r0, [sp]
        2d1774:	e1a0000d 	mov	r0, sp
        2d1778:	e59d100c 	ldr	r1, [sp, #12]
        2d177c:	e1a01081 	mov	r1, r1, lsl #1
        2d1780:	eb63d2f9 	bl	1bc636c <$SetLength(RefVar const &, long)>
        2d1784:	e59d0000 	ldr	r0, [sp]
        2d1788:	eb63c68b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d178c:	e1a01006 	mov	r1, r6
        2d1790:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2d1794:	eb5de785 	bl	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2d1798:	e28dd004 	add	sp, sp, #4	; 0x4
        2d179c:	e59d0004 	ldr	r0, [sp, #4]
        2d17a0:	eb63c685 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d17a4:	e28dd00c 	add	sp, sp, #12	; 0xc
        2d17a8:	ea000005 	b	2d17c4 <TCollectCursor::Collect(void)+0x148>
        2d17ac:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2d17b0:	01a48418 	moveq	r8, r8, lsl r4
        2d17b4:	0c105358 	ldceq	3, cr5, [r0], -#352
        2d17b8:	e3a01000 	mov	r1, #0	; 0x0
        2d17bc:	eb63c25d 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d17c0:	e58400c0 	str	r0, [r4, #192]	; fField192
        2d17c4:	e5a450c4 	str	r5, [r4, #196]!	; fField196
        2d17c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCollectCursor::Move(long)
 * Address: 002d17cc
 */
TCollectCursor::Move(long) {
    /*
        2d17cc:	e1a0c00d 	mov	ip, sp
        2d17d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d17d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d17d8:	e1a04000 	mov	r4, r0
        2d17dc:	e1a05001 	mov	r5, r1
        2d17e0:	e5901000 	ldr	r1, [r0]
        2d17e4:	e1a0e00f 	mov	lr, pc
        2d17e8:	e281f010 	add	pc, r1, #16	; 0x10
        2d17ec:	e5941068 	ldr	r1, [r4, #104]	; fField104
        2d17f0:	e3310002 	teq	r1, #2	; 0x2
        2d17f4:	1a000004 	bne	2d180c <TCollectCursor::Move(long)+0x40>
        2d17f8:	e5d410bc 	ldrb	r1, [r4, #188]	; fField188
        2d17fc:	e3310000 	teq	r1, #0	; 0x0
        2d1800:	03e01000 	mvneq	r1, #0	; 0x0
        2d1804:	058410c4 	streq	r1, [r4, #196]	; fField196
        2d1808:	158400c4 	strne	r0, [r4, #196]	; fField196
        2d180c:	e59410c4 	ldr	r1, [r4, #196]	; fField196
        2d1810:	e0911005 	adds	r1, r1, r5
        2d1814:	e58410c4 	str	r1, [r4, #196]	; fField196
        2d1818:	41a00004 	movmi	r0, r4
        2d181c:	43a01000 	movmi	r1, #0	; 0x0
        2d1820:	4a000003 	bmi	2d1834 <TCollectCursor::Move(long)+0x68>
        2d1824:	e1510000 	cmp	r1, r0
        2d1828:	e1a00004 	mov	r0, r4
        2d182c:	ba000002 	blt	2d183c <TCollectCursor::Move(long)+0x70>
        2d1830:	e3a01001 	mov	r1, #1	; 0x1
        2d1834:	eb5e212b 	bl	1a59ce8 <TCursor::$Park(unsigned char)>
        2d1838:	ea000000 	b	2d1840 <TCollectCursor::Move(long)+0x74>
        2d183c:	eb5ddafa 	bl	1a4842c <TCollectCursor::$DefineCurrentEntry(void)>
        2d1840:	e5b40068 	ldr	r0, [r4, #104]!	; fField104
        2d1844:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCollectCursor::DefineCurrentEntry(void)
 * Address: 002d1848
 */
TCollectCursor::DefineCurrentEntry(void) {
    /*
        2d1848:	e1a0c00d 	mov	ip, sp
        2d184c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d1850:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1854:	e1a04000 	mov	r4, r0
        2d1858:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d185c:	e59000c4 	ldr	r0, [r0, #196]	; fField196
        2d1860:	e1a05080 	mov	r5, r0, lsl #1
        2d1864:	e1a01005 	mov	r1, r5
        2d1868:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d186c:	eb63ca78 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d1870:	e3100003 	tst	r0, #3	; 0x3
        2d1874:	01a00140 	moveq	r0, r0, asr #2
        2d1878:	0a000000 	beq	2d1880 <TCollectCursor::DefineCurrentEntry(void)+0x38>
        2d187c:	eb63c226 	bl	1bc211c <$_RINTError(long)>
        2d1880:	e1a06000 	mov	r6, r0
        2d1884:	e2851001 	add	r1, r5, #1	; 0x1
        2d1888:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d188c:	eb63ca70 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d1890:	e3100003 	tst	r0, #3	; 0x3
        2d1894:	01a00140 	moveq	r0, r0, asr #2
        2d1898:	0a000000 	beq	2d18a0 <TCollectCursor::DefineCurrentEntry(void)+0x58>
        2d189c:	eb63c21e 	bl	1bc211c <$_RINTError(long)>
        2d18a0:	e1a05000 	mov	r5, r0
        2d18a4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d18a8:	e7900185 	ldr	r0, [r0, r5, lsl #3]
        2d18ac:	eb63c226 	bl	1bc214c <$AllocateRefHandle(long)>
        2d18b0:	e58d0000 	str	r0, [sp]
        2d18b4:	e1a0000d 	mov	r0, sp
        2d18b8:	e1a01006 	mov	r1, r6
        2d18bc:	eb5ddae0 	bl	1a48444 <$GetEntry(RefVar const &, unsigned long)>
        2d18c0:	e5840068 	str	r0, [r4, #104]	; fField104
        2d18c4:	e59d0000 	ldr	r0, [sp]
        2d18c8:	eb63c63b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d18cc:	e1a01005 	mov	r1, r5
        2d18d0:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        2d18d4:	eb5de735 	bl	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2d18d8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCollectCursor::FindEntry(RefVar const &)
 * Address: 002d18dc
 */
TCollectCursor::FindEntry(RefVar const &) {
    /*
        2d18dc:	e1a0c00d 	mov	ip, sp
        2d18e0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2d18e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d18e8:	e1a04000 	mov	r4, r0
        2d18ec:	e5910000 	ldr	r0, [r1]
        2d18f0:	e5900000 	ldr	r0, [r0]
        2d18f4:	eb5dc205 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2d18f8:	e1a05000 	mov	r5, r0
        2d18fc:	e590000c 	ldr	r0, [r0, #12]
        2d1900:	eb63c211 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1904:	e1a06000 	mov	r6, r0
        2d1908:	e5b50014 	ldr	r0, [r5, #20]!	; fField20
        2d190c:	e3100003 	tst	r0, #3	; 0x3
        2d1910:	01a00140 	moveq	r0, r0, asr #2
        2d1914:	0a000000 	beq	2d191c <TCollectCursor::FindEntry(RefVar const &)+0x40>
        2d1918:	eb63c1ff 	bl	1bc211c <$_RINTError(long)>
        2d191c:	e1a08000 	mov	r8, r0
        2d1920:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d1924:	eb63ce60 	bl	1bc52ac <$Length(long)>
        2d1928:	e1a07000 	mov	r7, r0
        2d192c:	e3a05000 	mov	r5, #0	; 0x0
        2d1930:	e3500000 	cmp	r0, #0	; 0x0
        2d1934:	da00001e 	ble	2d19b4 <TCollectCursor::FindEntry(RefVar const &)+0xd8>
        2d1938:	e1a01005 	mov	r1, r5
        2d193c:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d1940:	eb63ca43 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d1944:	e3100003 	tst	r0, #3	; 0x3
        2d1948:	01a00140 	moveq	r0, r0, asr #2
        2d194c:	0a000000 	beq	2d1954 <TCollectCursor::FindEntry(RefVar const &)+0x78>
        2d1950:	eb63c1f1 	bl	1bc211c <$_RINTError(long)>
        2d1954:	e1300008 	teq	r0, r8
        2d1958:	1a000012 	bne	2d19a8 <TCollectCursor::FindEntry(RefVar const &)+0xcc>
        2d195c:	e2851001 	add	r1, r5, #1	; 0x1
        2d1960:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d1964:	eb63ca3a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d1968:	e3100003 	tst	r0, #3	; 0x3
        2d196c:	01a00140 	moveq	r0, r0, asr #2
        2d1970:	0a000000 	beq	2d1978 <TCollectCursor::FindEntry(RefVar const &)+0x9c>
        2d1974:	eb63c1e8 	bl	1bc211c <$_RINTError(long)>
        2d1978:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2d197c:	e7910180 	ldr	r0, [r1, r0, lsl #3]
        2d1980:	e5961000 	ldr	r1, [r6]
        2d1984:	eb63ca29 	bl	1bc4230 <$EQRef__FlT1>
        2d1988:	e3300000 	teq	r0, #0	; 0x0
        2d198c:	0a000005 	beq	2d19a8 <TCollectCursor::FindEntry(RefVar const &)+0xcc>
        2d1990:	e0855fa5 	add	r5, r5, r5, lsr #31
        2d1994:	e1a050c5 	mov	r5, r5, asr #1
        2d1998:	e1a00006 	mov	r0, r6
        2d199c:	eb63c606 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d19a0:	e1a00005 	mov	r0, r5
        2d19a4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2d19a8:	e2855002 	add	r5, r5, #2	; 0x2
        2d19ac:	e1550007 	cmp	r5, r7
        2d19b0:	baffffe0 	blt	2d1938 <TCollectCursor::FindEntry(RefVar const &)+0x5c>
        2d19b4:	e3e04000 	mvn	r4, #0	; 0x0
        2d19b8:	e1a00006 	mov	r0, r6
        2d19bc:	eb63c5fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d19c0:	e1a00004 	mov	r0, r4
        2d19c4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCollectCursor::GotoEntry(RefVar const &)
 * Address: 002d19c8
 */
TCollectCursor::GotoEntry(RefVar const &) {
    /*
        2d19c8:	e1a0c00d 	mov	ip, sp
        2d19cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d19d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d19d4:	e1a04000 	mov	r4, r0
        2d19d8:	e1a05001 	mov	r5, r1
        2d19dc:	e5910000 	ldr	r0, [r1]
        2d19e0:	e5900000 	ldr	r0, [r0]
        2d19e4:	eb63ce27 	bl	1bc5288 <$IsFaultBlock(long)>
        2d19e8:	e3300000 	teq	r0, #0	; 0x0
        2d19ec:	1a000004 	bne	2d1a04 <TCollectCursor::GotoEntry(RefVar const &)+0x3c>
        2d19f0:	e59f1038 	ldr	r1, [pc, #38]	; 2d1a30 <TCollectCursor::GotoEntry(RefVar const &)+0x68>
        2d19f4:	e59f0038 	ldr	r0, [pc, #38]	; 2d1a34 <TCollectCursor::GotoEntry(RefVar const &)+0x6c>
        2d19f8:	e5900000 	ldr	r0, [r0]
        2d19fc:	e3a02000 	mov	r2, #0	; 0x0
        2d1a00:	eb6445e5 	bl	1be319c <$Throw>
        2d1a04:	e1a01005 	mov	r1, r5
        2d1a08:	e1a00004 	mov	r0, r4
        2d1a0c:	eb5dda87 	bl	1a48430 <TCollectCursor::$FindEntry(RefVar const &)>
        2d1a10:	e3500000 	cmp	r0, #0	; 0x0
        2d1a14:	b3a00002 	movlt	r0, #2	; 0x2
        2d1a18:	b91ba830 	ldmltdb	fp, {r4, r5, fp, sp, pc}
        2d1a1c:	e58400c4 	str	r0, [r4, #196]	; fField196
        2d1a20:	e1a00004 	mov	r0, r4
        2d1a24:	eb5dda80 	bl	1a4842c <TCollectCursor::$DefineCurrentEntry(void)>
        2d1a28:	e3a0001a 	mov	r0, #26	; 0x1a
        2d1a2c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d1a30:	ffff4477 	swinv	0x00ff4477
        2d1a34:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: TCollectCursor::GotoKey(RefVar const &)
 * Address: 002d1a38
 */
TCollectCursor::GotoKey(RefVar const &) {
    /*
        2d1a38:	e1a0c00d 	mov	ip, sp
        2d1a3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d1a40:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1a44:	e1a04000 	mov	r4, r0
        2d1a48:	eb5dd65c 	bl	1a473c0 <TCursor::$GotoKey(RefVar const &)>
        2d1a4c:	e1a05000 	mov	r5, r0
        2d1a50:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d1a54:	e3300002 	teq	r0, #2	; 0x2
        2d1a58:	0a000009 	beq	2d1a84 <TCollectCursor::GotoKey(RefVar const &)+0x4c>
        2d1a5c:	e1a00005 	mov	r0, r5
        2d1a60:	eb63c1b9 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1a64:	e58d0000 	str	r0, [sp]
        2d1a68:	e1a0100d 	mov	r1, sp
        2d1a6c:	e1a00004 	mov	r0, r4
        2d1a70:	e5942000 	ldr	r2, [r4]
        2d1a74:	e1a0e00f 	mov	lr, pc
        2d1a78:	e282f004 	add	pc, r2, #4	; 0x4
        2d1a7c:	e59d0000 	ldr	r0, [sp]
        2d1a80:	eb63c5cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1a84:	e1a00005 	mov	r0, r5
        2d1a88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCollectCursor::CountEntries(void)
 * Address: 002d1a8c
 */
TCollectCursor::CountEntries(void) {
    /*
        2d1a8c:	e1a0c00d 	mov	ip, sp
        2d1a90:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2d1a94:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1a98:	e59000c0 	ldr	r0, [r0, #192]	; fField192
        2d1a9c:	eb63ce02 	bl	1bc52ac <$Length(long)>
        2d1aa0:	e0800fa0 	add	r0, r0, r0, lsr #31
        2d1aa4:	e1a000c0 	mov	r0, r0, asr #1
        2d1aa8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCollectCursor::Clone(void)
 * Address: 002d1aac
 */
TCollectCursor::Clone(void) {
    /*
        2d1aac:	e1a0c00d 	mov	ip, sp
        2d1ab0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d1ab4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1ab8:	e1a04000 	mov	r4, r0
        2d1abc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d1ac0:	eb5e3d7b 	bl	1a610b4 <$CreateNewCollectCursor__14TCollectCursorSFv>
        2d1ac4:	eb63c1a0 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1ac8:	e58d0000 	str	r0, [sp]
        2d1acc:	e1a0000d 	mov	r0, sp
        2d1ad0:	eb5dd645 	bl	1a473ec <$CursorObj(RefVar const &)>
        2d1ad4:	e1a05000 	mov	r5, r0
        2d1ad8:	e1a02004 	mov	r2, r4
        2d1adc:	e1a0100d 	mov	r1, sp
        2d1ae0:	eb5dd645 	bl	1a473fc <TCursor::$Init(RefVar const &, TCursor const *)>
        2d1ae4:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d1ae8:	e58500c0 	str	r0, [r5, #192]	; fField192
        2d1aec:	e5b400c4 	ldr	r0, [r4, #196]!	; fField196
        2d1af0:	e5a500c4 	str	r0, [r5, #196]!	; fField196
        2d1af4:	e59d0000 	ldr	r0, [sp]
        2d1af8:	e5904000 	ldr	r4, [r0]
        2d1afc:	eb63c5ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1b00:	e1a00004 	mov	r0, r4
        2d1b04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCollectCursor::EntryRemoved(RefVar const &)
 * Address: 002d1b08
 */
TCollectCursor::EntryRemoved(RefVar const &) {
    /*
        2d1b08:	e1a0c00d 	mov	ip, sp
        2d1b0c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d1b10:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1b14:	e1a04000 	mov	r4, r0
        2d1b18:	eb5dda44 	bl	1a48430 <TCollectCursor::$FindEntry(RefVar const &)>
        2d1b1c:	e1b06000 	movs	r6, r0
        2d1b20:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d1b24:	4a000028 	bmi	2d1bcc <TCollectCursor::EntryRemoved(RefVar const &)+0xc4>
        2d1b28:	e3a03000 	mov	r3, #0	; 0x0
        2d1b2c:	e3a02000 	mov	r2, #0	; 0x0
        2d1b30:	e92d000c 	stmdb	sp!, {r2, r3}
        2d1b34:	e3a00002 	mov	r0, #2	; 0x2
        2d1b38:	eb63c183 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1b3c:	e58d0008 	str	r0, [sp, #8]
        2d1b40:	e28d5008 	add	r5, sp, #8	; 0x8
        2d1b44:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d1b48:	eb63c17f 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1b4c:	e58d000c 	str	r0, [sp, #12]
        2d1b50:	e28d000c 	add	r0, sp, #12	; 0xc
        2d1b54:	e1a01086 	mov	r1, r6, lsl #1
        2d1b58:	e3a02002 	mov	r2, #2	; 0x2
        2d1b5c:	e1a03005 	mov	r3, r5
        2d1b60:	eb63c17a 	bl	1bc2150 <$ArrayMunger__FRC6RefVarlT2T1N22>
        2d1b64:	e5bd0008 	ldr	r0, [sp, #8]!
        2d1b68:	eb63c593 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1b6c:	e59d0004 	ldr	r0, [sp, #4]
        2d1b70:	eb63c591 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1b74:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        2d1b78:	e1500006 	cmp	r0, r6
        2d1b7c:	1a000010 	bne	2d1bc4 <TCollectCursor::EntryRemoved(RefVar const &)+0xbc>
        2d1b80:	e1a00004 	mov	r0, r4
        2d1b84:	e5941000 	ldr	r1, [r4]
        2d1b88:	e1a0e00f 	mov	lr, pc
        2d1b8c:	e281f010 	add	pc, r1, #16	; 0x10
        2d1b90:	e3300000 	teq	r0, #0	; 0x0
        2d1b94:	1a000003 	bne	2d1ba8 <TCollectCursor::EntryRemoved(RefVar const &)+0xa0>
        2d1b98:	e1a00004 	mov	r0, r4
        2d1b9c:	e3a01000 	mov	r1, #0	; 0x0
        2d1ba0:	eb5e2050 	bl	1a59ce8 <TCursor::$Park(unsigned char)>
        2d1ba4:	ea000008 	b	2d1bcc <TCollectCursor::EntryRemoved(RefVar const &)+0xc4>
        2d1ba8:	e59410c4 	ldr	r1, [r4, #196]	; fField196
        2d1bac:	e1310000 	teq	r1, r0
        2d1bb0:	02410001 	subeq	r0, r1, #1	; 0x1
        2d1bb4:	058400c4 	streq	r0, [r4, #196]	; fField196
        2d1bb8:	e1a00004 	mov	r0, r4
        2d1bbc:	eb5dda1a 	bl	1a4842c <TCollectCursor::$DefineCurrentEntry(void)>
        2d1bc0:	ea000001 	b	2d1bcc <TCollectCursor::EntryRemoved(RefVar const &)+0xc4>
        2d1bc4:	c2400001 	subgt	r0, r0, #1	; 0x1
        2d1bc8:	c5a400c4 	strgt	r0, [r4, #196]!	; fField196
        2d1bcc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCollectCursor::EntrySoupChanged(RefVar const &, RefVar const &)
 * Address: 002d1bd0
 */
TCollectCursor::EntrySoupChanged(RefVar const &, RefVar const &) {
    /*
        2d1bd0:	e1a0c00d 	mov	ip, sp
        2d1bd4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d1bd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1bdc:	e1a04000 	mov	r4, r0
        2d1be0:	e1a05001 	mov	r5, r1
        2d1be4:	e1a06002 	mov	r6, r2
        2d1be8:	eb5dda10 	bl	1a48430 <TCollectCursor::$FindEntry(RefVar const &)>
        2d1bec:	e1b07000 	movs	r7, r0
        2d1bf0:	4a00001c 	bmi	2d1c68 <TCollectCursor::EntrySoupChanged(RefVar const &, RefVar const &)+0x98>
        2d1bf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d1bf8:	e5960000 	ldr	r0, [r6]
        2d1bfc:	e5900000 	ldr	r0, [r0]
        2d1c00:	eb5dc142 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2d1c04:	e1a08000 	mov	r8, r0
        2d1c08:	e590000c 	ldr	r0, [r0, #12]
        2d1c0c:	eb63c14e 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1c10:	e58d0000 	str	r0, [sp]
        2d1c14:	e1a0100d 	mov	r1, sp
        2d1c18:	e1a00004 	mov	r0, r4
        2d1c1c:	eb5dd5de 	bl	1a4739c <TCursor::$GetSoupInfoIndex(RefVar const &)>
        2d1c20:	e1b09000 	movs	r9, r0
        2d1c24:	5a000003 	bpl	2d1c38 <TCollectCursor::EntrySoupChanged(RefVar const &, RefVar const &)+0x68>
        2d1c28:	e1a01005 	mov	r1, r5
        2d1c2c:	e1a00004 	mov	r0, r4
        2d1c30:	eb5dd1bd 	bl	1a4632c <TCollectCursor::$EntryRemoved(RefVar const &)>
        2d1c34:	ea000008 	b	2d1c5c <TCollectCursor::EntrySoupChanged(RefVar const &, RefVar const &)+0x8c>
        2d1c38:	e1a07087 	mov	r7, r7, lsl #1
        2d1c3c:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d1c40:	e1a01007 	mov	r1, r7
        2d1c44:	e5b82014 	ldr	r2, [r8, #20]!	; fField20
        2d1c48:	eb63d1c2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d1c4c:	e2871001 	add	r1, r7, #1	; 0x1
        2d1c50:	e1a02109 	mov	r2, r9, lsl #2
        2d1c54:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        2d1c58:	eb63d1be 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d1c5c:	e59d0000 	ldr	r0, [sp]
        2d1c60:	eb63c555 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1c64:	e28dd004 	add	sp, sp, #4	; 0x4
        2d1c68:	e1a02006 	mov	r2, r6
        2d1c6c:	e1a01005 	mov	r1, r5
        2d1c70:	e1a00004 	mov	r0, r4
        2d1c74:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2d1c78:	ea5dd5d7 	b	1a473dc <TCursor::$EntrySoupChanged(RefVar const &, RefVar const &)>
    */
}

