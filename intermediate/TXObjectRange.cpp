#include "include/TXObjectRange.h"

/**
 * Symbol: TXObjectRange::__ct(int)
 * Address: 0024055c
 */
TXObjectRange::TXObjectRange(int) {
    /*
        24055c:	e1a0c00d 	mov	ip, sp
        240560:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        240564:	e24cb004 	sub	fp, ip, #4	; 0x4
        240568:	e1b04000 	movs	r4, r0
        24056c:	e1a05001 	mov	r5, r1
        240570:	1a000003 	bne	240584 <TXObjectRange::__ct(int)+0x28>
        240574:	e3a00020 	mov	r0, #32	; 0x20
        240578:	eb66386e 	bl	1bce738 <$__nw(unsigned int)>
        24057c:	e1b04000 	movs	r4, r0
        240580:	0a000009 	beq	2405ac <TXObjectRange::__ct(int)+0x50>
        240584:	e1a02005 	mov	r2, r5
        240588:	e1a00004 	mov	r0, r4
        24058c:	e3a01008 	mov	r1, #8	; 0x8
        240590:	eb65175c 	bl	1b86308 <TXRanges::$__ct(unsigned char, int)>
        240594:	e59f0018 	ldr	r0, [pc, #18]	; 2405b4 <TXObjectRange::__ct(int)+0x58>
        240598:	e5840000 	str	r0, [r4]
        24059c:	e3a00000 	mov	r0, #0	; 0x0
        2405a0:	e5840018 	str	r0, [r4, #24]	; fField24
        2405a4:	e3a00001 	mov	r0, #1	; 0x1
        2405a8:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        2405ac:	e1a00004 	mov	r0, r4
        2405b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2405b4:	0001d344 	andeq	sp, r1, r4, asr #6
    */
}

/**
 * Symbol: TXObjectRange::__dt(void)
 * Address: 002405b8
 */
TXObjectRange::~TXObjectRange(void) {
    /*
        2405b8:	e1a0c00d 	mov	ip, sp
        2405bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2405c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2405c4:	e1a04000 	mov	r4, r0
        2405c8:	e1a05001 	mov	r5, r1
        2405cc:	e59f003c 	ldr	r0, [pc, #3c]	; 240610 <TXObjectRange::__dt(void)+0x58>
        2405d0:	e5840000 	str	r0, [r4]
        2405d4:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        2405d8:	e3300000 	teq	r0, #0	; 0x0
        2405dc:	0a000003 	beq	2405f0 <TXObjectRange::__dt(void)+0x38>
        2405e0:	e1a00004 	mov	r0, r4
        2405e4:	e3e02000 	mvn	r2, #0	; 0x0
        2405e8:	e3a01000 	mov	r1, #0	; 0x0
        2405ec:	eb65510e 	bl	1b94a2c <TXObjectRange::$FreeObjects(long, long)>
        2405f0:	e1a00004 	mov	r0, r4
        2405f4:	e3a01000 	mov	r1, #0	; 0x0
        2405f8:	eb65133e 	bl	1b852f8 <TXLongTagArray::$__dt(void)>
        2405fc:	e3150001 	tst	r5, #1	; 0x1
        240600:	11a00004 	movne	r0, r4
        240604:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        240608:	1a663434 	bne	1bcd6e0 <$__dl(void *)>
        24060c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        240610:	0001d344 	andeq	sp, r1, r4, asr #6
    */
}

/**
 * Symbol: TXObjectRange::SetObjectRange(long, long, TXAttrObject *, unsigned char)
 * Address: 00240614
 */
TXObjectRange::SetObjectRange(long, long, TXAttrObject *, unsigned char) {
    /*
        240614:	e1a0c00d 	mov	ip, sp
        240618:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        24061c:	e24cb004 	sub	fp, ip, #4	; 0x4
        240620:	e1a05000 	mov	r5, r0
        240624:	e1a07001 	mov	r7, r1
        240628:	e1a06002 	mov	r6, r2
        24062c:	e1a04003 	mov	r4, r3
        240630:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        240634:	e31000ff 	tst	r0, #255	; 0xff
        240638:	0a000004 	beq	240650 <TXObjectRange::SetObjectRange(long, long, TXAttrObject *, unsigned char)+0x3c>
        24063c:	e1a00004 	mov	r0, r4
        240640:	e5941000 	ldr	r1, [r4]
        240644:	e1a0e00f 	mov	lr, pc
        240648:	e281f010 	add	pc, r1, #16	; 0x10
        24064c:	e1a04000 	mov	r4, r0
        240650:	e1a01007 	mov	r1, r7
        240654:	e1a00005 	mov	r0, r5
        240658:	eb65131c 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        24065c:	e5806000 	str	r6, [r0]
        240660:	e5901004 	ldr	r1, [r0, #4]	; fField4
        240664:	e5a04004 	str	r4, [r0, #4]!	; fField4
        240668:	e1a00001 	mov	r0, r1
        24066c:	e5911000 	ldr	r1, [r1]
        240670:	e1a0e00f 	mov	lr, pc
        240674:	e281f004 	add	pc, r1, #4	; 0x4
        240678:	e3a00000 	mov	r0, #0	; 0x0
        24067c:	e5a50018 	str	r0, [r5, #24]!	; fField24
        240680:	e1a00004 	mov	r0, r4
        240684:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::InsertObjectRange(long, long, TXAttrObject *, unsigned char)
 * Address: 00240688
 */
TXObjectRange::InsertObjectRange(long, long, TXAttrObject *, unsigned char) {
    /*
        240688:	e1a0c00d 	mov	ip, sp
        24068c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        240690:	e24cb004 	sub	fp, ip, #4	; 0x4
        240694:	e1a07000 	mov	r7, r0
        240698:	e1a06001 	mov	r6, r1
        24069c:	e1a05002 	mov	r5, r2
        2406a0:	e1a04003 	mov	r4, r3
        2406a4:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        2406a8:	e21080ff 	ands	r8, r0, #255	; 0xff
        2406ac:	0a000004 	beq	2406c4 <TXObjectRange::InsertObjectRange(long, long, TXAttrObject *, unsigned char)+0x3c>
        2406b0:	e1a00004 	mov	r0, r4
        2406b4:	e5941000 	ldr	r1, [r4]
        2406b8:	e1a0e00f 	mov	lr, pc
        2406bc:	e281f010 	add	pc, r1, #16	; 0x10
        2406c0:	e1a04000 	mov	r4, r0
        2406c4:	e1a03006 	mov	r3, r6
        2406c8:	e1a00007 	mov	r0, r7
        2406cc:	e3a02001 	mov	r2, #1	; 0x1
        2406d0:	e3a01000 	mov	r1, #0	; 0x0
        2406d4:	eb651301 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        2406d8:	e3300000 	teq	r0, #0	; 0x0
        2406dc:	0a000003 	beq	2406f0 <TXObjectRange::InsertObjectRange(long, long, TXAttrObject *, unsigned char)+0x68>
        2406e0:	e5804004 	str	r4, [r0, #4]	; fField4
        2406e4:	e5805000 	str	r5, [r0]
        2406e8:	e1a00004 	mov	r0, r4
        2406ec:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2406f0:	e3380000 	teq	r8, #0	; 0x0
        2406f4:	13340000 	teqne	r4, #0	; 0x0
        2406f8:	0a000003 	beq	24070c <TXObjectRange::InsertObjectRange(long, long, TXAttrObject *, unsigned char)+0x84>
        2406fc:	e1a00004 	mov	r0, r4
        240700:	e5941000 	ldr	r1, [r4]
        240704:	e1a0e00f 	mov	lr, pc
        240708:	e281f004 	add	pc, r1, #4	; 0x4
        24070c:	e3a00000 	mov	r0, #0	; 0x0
        240710:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)
 * Address: 00240714
 */
TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *) {
    /*
        240714:	e1a0c00d 	mov	ip, sp
        240718:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        24071c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        240720:	e24cb014 	sub	fp, ip, #20	; 0x14
        240724:	e1a04000 	mov	r4, r0
        240728:	e1a05003 	mov	r5, r3
        24072c:	e59b9018 	ldr	r9, [fp, #24]	; fField24
        240730:	e59ba014 	ldr	sl, [fp, #20]
        240734:	e24dd020 	sub	sp, sp, #32	; 0x20
        240738:	e28b2008 	add	r2, fp, #8	; 0x8
        24073c:	e8920006 	ldmia	r2, {r1, r2}
        240740:	e0422001 	sub	r2, r2, r1
        240744:	e1a0300d 	mov	r3, sp
        240748:	e59b1008 	ldr	r1, [fp, #8]
        24074c:	eb6516f8 	bl	1b86334 <$SectRanges__8TXRangesCFlT1P12TXSectRanges>
        240750:	e59d0000 	ldr	r0, [sp]
        240754:	e58a0000 	str	r0, [sl]
        240758:	e59d0014 	ldr	r0, [sp, #20]
        24075c:	e5890000 	str	r0, [r9]
        240760:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        240764:	e3300000 	teq	r0, #0	; 0x0
        240768:	e59d7000 	ldr	r7, [sp]
        24076c:	02477001 	subeq	r7, r7, #1	; 0x1
        240770:	e24dd004 	sub	sp, sp, #4	; 0x4
        240774:	e3570000 	cmp	r7, #0	; 0x0
        240778:	ba000003 	blt	24078c <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x78>
        24077c:	e1a01007 	mov	r1, r7
        240780:	e1a00004 	mov	r0, r4
        240784:	eb6550ad 	bl	1b94a40 <TXObjectRange::$RangeIndexToObject( const(long))>
        240788:	ea000000 	b	240790 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x7c>
        24078c:	e3a00000 	mov	r0, #0	; 0x0
        240790:	e1a08000 	mov	r8, r0
        240794:	e1a00004 	mov	r0, r4
        240798:	eb6516e3 	bl	1b8632c <TXRanges::$GetLastRangeEnd( const(void))>
        24079c:	e59b200c 	ldr	r2, [fp, #12]
        2407a0:	e1500002 	cmp	r0, r2
        2407a4:	d3e06000 	mvnle	r6, #0	; 0x0
        2407a8:	d3a00000 	movle	r0, #0	; 0x0
        2407ac:	da00000a 	ble	2407dc <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0xc8>
        2407b0:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        2407b4:	e3300000 	teq	r0, #0	; 0x0
        2407b8:	e59d6018 	ldr	r6, [sp, #24]	; fField24
        2407bc:	1a000003 	bne	2407d0 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0xbc>
        2407c0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2407c4:	e2400001 	sub	r0, r0, #1	; 0x1
        2407c8:	e1500006 	cmp	r0, r6
        2407cc:	c2866001 	addgt	r6, r6, #1	; 0x1
        2407d0:	e1a01006 	mov	r1, r6
        2407d4:	e1a00004 	mov	r0, r4
        2407d8:	eb655098 	bl	1b94a40 <TXObjectRange::$RangeIndexToObject( const(long))>
        2407dc:	e40d0004 	str	r0, [sp], -#4	; fField4
        2407e0:	e1a00005 	mov	r0, r5
        2407e4:	e5951000 	ldr	r1, [r5]
        2407e8:	e1a0e00f 	mov	lr, pc
        2407ec:	e281f01c 	add	pc, r1, #28	; 0x1c
        2407f0:	e2000004 	and	r0, r0, #4	; 0x4
        2407f4:	e58d0000 	str	r0, [sp]
        2407f8:	e59a0000 	ldr	r0, [sl]
        2407fc:	e1370000 	teq	r7, r0
        240800:	1a000017 	bne	240864 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x150>
        240804:	e1380005 	teq	r8, r5
        240808:	059d0000 	ldreq	r0, [sp]
        24080c:	03300000 	teqeq	r0, #0	; 0x0
        240810:	0a000010 	beq	240858 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x144>
        240814:	e1360007 	teq	r6, r7
        240818:	0a000004 	beq	240830 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x11c>
        24081c:	e59b2008 	ldr	r2, [fp, #8]
        240820:	e1a00004 	mov	r0, r4
        240824:	e59d1008 	ldr	r1, [sp, #8]
        240828:	eb6516bc 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        24082c:	ea000009 	b	240858 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x144>
        240830:	e3a03001 	mov	r3, #1	; 0x1
        240834:	e92d0008 	stmdb	sp!, {r3}
        240838:	e1a03008 	mov	r3, r8
        24083c:	e59b2008 	ldr	r2, [fp, #8]
        240840:	e1a00004 	mov	r0, r4
        240844:	e59d100c 	ldr	r1, [sp, #12]
        240848:	e594c000 	ldr	ip, [r4]
        24084c:	e1a0e00f 	mov	lr, pc
        240850:	e28cf010 	add	pc, ip, #16	; 0x10
        240854:	e28dd004 	add	sp, sp, #4	; 0x4
        240858:	e59a0000 	ldr	r0, [sl]
        24085c:	e2800001 	add	r0, r0, #1	; 0x1
        240860:	e58a0000 	str	r0, [sl]
        240864:	e5990000 	ldr	r0, [r9]
        240868:	e1360000 	teq	r6, r0
        24086c:	02400001 	subeq	r0, r0, #1	; 0x1
        240870:	05890000 	streq	r0, [r9]
        240874:	e1380005 	teq	r8, r5
        240878:	059d0000 	ldreq	r0, [sp]
        24087c:	03300000 	teqeq	r0, #0	; 0x0
        240880:	1a00000d 	bne	2408bc <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x1a8>
        240884:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        240888:	e1300005 	teq	r0, r5
        24088c:	1a000004 	bne	2408a4 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x190>
        240890:	e5896000 	str	r6, [r9]
        240894:	e1a01006 	mov	r1, r6
        240898:	e1a00004 	mov	r0, r4
        24089c:	eb65169b 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        2408a0:	ea000000 	b	2408a8 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x194>
        2408a4:	e59b000c 	ldr	r0, [fp, #12]
        2408a8:	e1a02000 	mov	r2, r0
        2408ac:	e1a01007 	mov	r1, r7
        2408b0:	e1a00004 	mov	r0, r4
        2408b4:	eb651699 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        2408b8:	ea000002 	b	2408c8 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x1b4>
        2408bc:	e59d0000 	ldr	r0, [sp]
        2408c0:	e3300000 	teq	r0, #0	; 0x0
        2408c4:	1a000004 	bne	2408dc <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x1c8>
        2408c8:	e1380005 	teq	r8, r5
        2408cc:	159d0004 	ldrne	r0, [sp, #4]	; fField4
        2408d0:	11300005 	teqne	r0, r5
        2408d4:	03a00001 	moveq	r0, #1	; 0x1
        2408d8:	0a000000 	beq	2408e0 <TXObjectRange::UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)+0x1cc>
        2408dc:	e3a00000 	mov	r0, #0	; 0x0
        2408e0:	e20000ff 	and	r0, r0, #255	; 0xff
        2408e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::Remove(long, long)
 * Address: 002408e8
 */
TXObjectRange::Remove(long, long) {
    /*
        2408e8:	e1a0c00d 	mov	ip, sp
        2408ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2408f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2408f4:	e1a06000 	mov	r6, r0
        2408f8:	e1a04001 	mov	r4, r1
        2408fc:	e1a05002 	mov	r5, r2
        240900:	e0810002 	add	r0, r1, r2
        240904:	e2402001 	sub	r2, r0, #1	; 0x1
        240908:	e1a00006 	mov	r0, r6
        24090c:	eb655046 	bl	1b94a2c <TXObjectRange::$FreeObjects(long, long)>
        240910:	e1a02005 	mov	r2, r5
        240914:	e1a01004 	mov	r1, r4
        240918:	e1a00006 	mov	r0, r6
        24091c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        240920:	ea65126f 	b	1b852e4 <TXArray::$Remove(long, long)>
    */
}

/**
 * Symbol: TXObjectRange::ReplaceRangeObj(long, long, TXAttrObject *, unsigned char)
 * Address: 00240924
 */
TXObjectRange::ReplaceRangeObj(long, long, TXAttrObject *, unsigned char) {
    /*
        240924:	e1a0c00d 	mov	ip, sp
        240928:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        24092c:	e24cb004 	sub	fp, ip, #4	; 0x4
        240930:	e1a05000 	mov	r5, r0
        240934:	e1b04003 	movs	r4, r3
        240938:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        24093c:	e20070ff 	and	r7, r0, #255	; 0xff
        240940:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        240944:	e24dd008 	sub	sp, sp, #8	; 0x8
        240948:	e0816002 	add	r6, r1, r2
        24094c:	e1a0300d 	mov	r3, sp
        240950:	e28d2004 	add	r2, sp, #4	; 0x4
        240954:	e92d000c 	stmdb	sp!, {r2, r3}
        240958:	e1a03004 	mov	r3, r4
        24095c:	e1a02006 	mov	r2, r6
        240960:	e1a00005 	mov	r0, r5
        240964:	eb65503a 	bl	1b94a54 <TXObjectRange::$UpdateRangesBounds(long, long, TXAttrObject *, long *, long *)>
        240968:	e28dd008 	add	sp, sp, #8	; 0x8
        24096c:	e3300000 	teq	r0, #0	; 0x0
        240970:	1a000015 	bne	2409cc <TXObjectRange::ReplaceRangeObj(long, long, TXAttrObject *, unsigned char)+0xa8>
        240974:	e89d0003 	ldmia	sp, {r0, r1}
        240978:	e1510000 	cmp	r1, r0
        24097c:	e1a0c005 	mov	ip, r5
        240980:	e1a03007 	mov	r3, r7
        240984:	e92d0008 	stmdb	sp!, {r3}
        240988:	ca000007 	bgt	2409ac <TXObjectRange::ReplaceRangeObj(long, long, TXAttrObject *, unsigned char)+0x88>
        24098c:	e2810001 	add	r0, r1, #1	; 0x1
        240990:	e1a03004 	mov	r3, r4
        240994:	e1a02006 	mov	r2, r6
        240998:	e58d0008 	str	r0, [sp, #8]
        24099c:	e1a0000c 	mov	r0, ip
        2409a0:	e59cc000 	ldr	ip, [ip]
        2409a4:	e28cc018 	add	ip, ip, #24	; 0x18
        2409a8:	ea000004 	b	2409c0 <TXObjectRange::ReplaceRangeObj(long, long, TXAttrObject *, unsigned char)+0x9c>
        2409ac:	e1a03004 	mov	r3, r4
        2409b0:	e1a02006 	mov	r2, r6
        2409b4:	e1a0000c 	mov	r0, ip
        2409b8:	e59cc000 	ldr	ip, [ip]
        2409bc:	e28cc010 	add	ip, ip, #16	; 0x10
        2409c0:	e1a0e00f 	mov	lr, pc
        2409c4:	e1a0f00c 	mov	pc, ip
        2409c8:	e28dd004 	add	sp, sp, #4	; 0x4
        2409cc:	e89d0003 	ldmia	sp, {r0, r1}
        2409d0:	e0400001 	sub	r0, r0, r1
        2409d4:	e2802001 	add	r2, r0, #1	; 0x1
        2409d8:	e3520000 	cmp	r2, #0	; 0x0
        2409dc:	da000003 	ble	2409f0 <TXObjectRange::ReplaceRangeObj(long, long, TXAttrObject *, unsigned char)+0xcc>
        2409e0:	e1a00005 	mov	r0, r5
        2409e4:	e5953000 	ldr	r3, [r5]
        2409e8:	e1a0e00f 	mov	lr, pc
        2409ec:	e283f004 	add	pc, r3, #4	; 0x4
        2409f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::ClearRange(long, long)
 * Address: 002409f4
 */
TXObjectRange::ClearRange(long, long) {
    /*
        2409f4:	e3320000 	teq	r2, #0	; 0x0
        2409f8:	01a0f00e 	moveq	pc, lr
        2409fc:	e1a0c00d 	mov	ip, sp
        240a00:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        240a04:	e24cb004 	sub	fp, ip, #4	; 0x4
        240a08:	e1a04000 	mov	r4, r0
        240a0c:	e1a06001 	mov	r6, r1
        240a10:	e1a05002 	mov	r5, r2
        240a14:	eb651644 	bl	1b8632c <TXRanges::$GetLastRangeEnd( const(void))>
        240a18:	e1500005 	cmp	r0, r5
        240a1c:	ca000004 	bgt	240a34 <TXObjectRange::ClearRange(long, long)+0x40>
        240a20:	e1a00004 	mov	r0, r4
        240a24:	e3a01001 	mov	r1, #1	; 0x1
        240a28:	e5942000 	ldr	r2, [r4]
        240a2c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        240a30:	e282f008 	add	pc, r2, #8	; 0x8
        240a34:	e24dd020 	sub	sp, sp, #32	; 0x20
        240a38:	e1a0300d 	mov	r3, sp
        240a3c:	e1a02005 	mov	r2, r5
        240a40:	e1a01006 	mov	r1, r6
        240a44:	e1a00004 	mov	r0, r4
        240a48:	eb651639 	bl	1b86334 <$SectRanges__8TXRangesCFlT1P12TXSectRanges>
        240a4c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        240a50:	e3300000 	teq	r0, #0	; 0x0
        240a54:	159d7000 	ldrne	r7, [sp]
        240a58:	1a00000e 	bne	240a98 <TXObjectRange::ClearRange(long, long)+0xa4>
        240a5c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        240a60:	e3300000 	teq	r0, #0	; 0x0
        240a64:	159d7014 	ldrne	r7, [sp, #20]
        240a68:	1a00000a 	bne	240a98 <TXObjectRange::ClearRange(long, long)+0xa4>
        240a6c:	e59d0000 	ldr	r0, [sp]
        240a70:	e2507001 	subs	r7, r0, #1	; 0x1
        240a74:	4a000007 	bmi	240a98 <TXObjectRange::ClearRange(long, long)+0xa4>
        240a78:	e1a01007 	mov	r1, r7
        240a7c:	e1a00004 	mov	r0, r4
        240a80:	eb654fee 	bl	1b94a40 <TXObjectRange::$RangeIndexToObject( const(long))>
        240a84:	e5901000 	ldr	r1, [r0]
        240a88:	e1a0e00f 	mov	lr, pc
        240a8c:	e281f01c 	add	pc, r1, #28	; 0x1c
        240a90:	e3100004 	tst	r0, #4	; 0x4
        240a94:	13e07000 	mvnne	r7, #0	; 0x0
        240a98:	e3570000 	cmp	r7, #0	; 0x0
        240a9c:	ba000013 	blt	240af0 <TXObjectRange::ClearRange(long, long)+0xfc>
        240aa0:	e24dd008 	sub	sp, sp, #8	; 0x8
        240aa4:	e3a03001 	mov	r3, #1	; 0x1
        240aa8:	e92d0008 	stmdb	sp!, {r3}
        240aac:	e1a01007 	mov	r1, r7
        240ab0:	e1a00004 	mov	r0, r4
        240ab4:	eb654fe1 	bl	1b94a40 <TXObjectRange::$RangeIndexToObject( const(long))>
        240ab8:	e1a03000 	mov	r3, r0
        240abc:	e1a02005 	mov	r2, r5
        240ac0:	e1a01006 	mov	r1, r6
        240ac4:	e1a00004 	mov	r0, r4
        240ac8:	eb654fe3 	bl	1b94a5c <TXObjectRange::$ReplaceRangeObj(long, long, TXAttrObject *, unsigned char)>
        240acc:	e3a00000 	mov	r0, #0	; 0x0
        240ad0:	e5ad6004 	str	r6, [sp, #4]!	; fField4
        240ad4:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        240ad8:	e1a00004 	mov	r0, r4
        240adc:	e89d0006 	ldmia	sp, {r1, r2}
        240ae0:	eb651612 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        240ae4:	e1a01000 	mov	r1, r0
        240ae8:	e28dd008 	add	sp, sp, #8	; 0x8
        240aec:	ea000006 	b	240b0c <TXObjectRange::ClearRange(long, long)+0x118>
        240af0:	e1a00004 	mov	r0, r4
        240af4:	e28d200c 	add	r2, sp, #12	; 0xc
        240af8:	e8920006 	ldmia	r2, {r1, r2}
        240afc:	e5943000 	ldr	r3, [r4]
        240b00:	e1a0e00f 	mov	lr, pc
        240b04:	e283f004 	add	pc, r3, #4	; 0x4
        240b08:	e59d100c 	ldr	r1, [sp, #12]
        240b0c:	e2652000 	rsb	r2, r5, #0	; 0x0
        240b10:	e1a00004 	mov	r0, r4
        240b14:	e3e03000 	mvn	r3, #0	; 0x0
        240b18:	eb6515f9 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        240b1c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)
 * Address: 00240b20
 */
TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char) {
    /*
        240b20:	e1a0c00d 	mov	ip, sp
        240b24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        240b28:	e24cb004 	sub	fp, ip, #4	; 0x4
        240b2c:	e1a04000 	mov	r4, r0
        240b30:	e1a06001 	mov	r6, r1
        240b34:	e1a05002 	mov	r5, r2
        240b38:	e1a07003 	mov	r7, r3
        240b3c:	e59b0008 	ldr	r0, [fp, #8]
        240b40:	e200a0ff 	and	sl, r0, #255	; 0xff
        240b44:	e1a00004 	mov	r0, r4
        240b48:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        240b4c:	eb6515f6 	bl	1b8632c <TXRanges::$GetLastRangeEnd( const(void))>
        240b50:	e1a09000 	mov	r9, r0
        240b54:	e0400006 	sub	r0, r0, r6
        240b58:	e1550000 	cmp	r5, r0
        240b5c:	b1a00005 	movlt	r0, r5
        240b60:	e1a05000 	mov	r5, r0
        240b64:	e3370000 	teq	r7, #0	; 0x0
        240b68:	1a00000d 	bne	240ba4 <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0x84>
        240b6c:	e1a02005 	mov	r2, r5
        240b70:	e1a01006 	mov	r1, r6
        240b74:	e1a00004 	mov	r0, r4
        240b78:	eb654fb8 	bl	1b94a60 <TXObjectRange::$ClearRange(long, long)>
        240b7c:	e3380000 	teq	r8, #0	; 0x0
        240b80:	0a000005 	beq	240b9c <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0x7c>
        240b84:	e33a0000 	teq	sl, #0	; 0x0
        240b88:	1a000003 	bne	240b9c <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0x7c>
        240b8c:	e1a00008 	mov	r0, r8
        240b90:	e5981000 	ldr	r1, [r8]
        240b94:	e1a0e00f 	mov	lr, pc
        240b98:	e281f004 	add	pc, r1, #4	; 0x4
        240b9c:	e3a00000 	mov	r0, #0	; 0x0
        240ba0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        240ba4:	e24dd004 	sub	sp, sp, #4	; 0x4
        240ba8:	e3380000 	teq	r8, #0	; 0x0
        240bac:	1a00000c 	bne	240be4 <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0xc4>
        240bb0:	e3a00000 	mov	r0, #0	; 0x0
        240bb4:	e52d6008 	str	r6, [sp, -#8]!
        240bb8:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        240bbc:	e1a00004 	mov	r0, r4
        240bc0:	e89d0006 	ldmia	sp, {r1, r2}
        240bc4:	e5943000 	ldr	r3, [r4]
        240bc8:	e1a0e00f 	mov	lr, pc
        240bcc:	e283f00c 	add	pc, r3, #12	; 0xc
        240bd0:	e1a08000 	mov	r8, r0
        240bd4:	e3a00001 	mov	r0, #1	; 0x1
        240bd8:	e5cd0008 	strb	r0, [sp, #8]
        240bdc:	e28dd008 	add	sp, sp, #8	; 0x8
        240be0:	ea000005 	b	240bfc <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0xdc>
        240be4:	e1a0300d 	mov	r3, sp
        240be8:	e1a0200a 	mov	r2, sl
        240bec:	e1a01008 	mov	r1, r8
        240bf0:	e1a00004 	mov	r0, r4
        240bf4:	eb654f93 	bl	1b94a48 <TXObjectRange::$MapObject(TXAttrObject *, unsigned char, unsigned char *)>
        240bf8:	e1a08000 	mov	r8, r0
        240bfc:	e3380000 	teq	r8, #0	; 0x0
        240c00:	03a000e9 	moveq	r0, #233	; 0xe9
        240c04:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        240c08:	0a000037 	beq	240cec <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0x1cc>
        240c0c:	e3350000 	teq	r5, #0	; 0x0
        240c10:	0a000013 	beq	240c64 <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0x144>
        240c14:	e24dd008 	sub	sp, sp, #8	; 0x8
        240c18:	e5dd3008 	ldrb	r3, [sp, #8]
        240c1c:	e92d0008 	stmdb	sp!, {r3}
        240c20:	e1a03008 	mov	r3, r8
        240c24:	e1a02005 	mov	r2, r5
        240c28:	e1a01006 	mov	r1, r6
        240c2c:	e1a00004 	mov	r0, r4
        240c30:	eb654f89 	bl	1b94a5c <TXObjectRange::$ReplaceRangeObj(long, long, TXAttrObject *, unsigned char)>
        240c34:	e3a00000 	mov	r0, #0	; 0x0
        240c38:	e5ad6004 	str	r6, [sp, #4]!	; fField4
        240c3c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        240c40:	e1a00004 	mov	r0, r4
        240c44:	e89d0006 	ldmia	sp, {r1, r2}
        240c48:	eb6515b8 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        240c4c:	e1a01000 	mov	r1, r0
        240c50:	e0472005 	sub	r2, r7, r5
        240c54:	e1a00004 	mov	r0, r4
        240c58:	e3e03000 	mvn	r3, #0	; 0x0
        240c5c:	eb6515a8 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        240c60:	ea00001f 	b	240ce4 <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0x1c4>
        240c64:	e3390000 	teq	r9, #0	; 0x0
        240c68:	1a00000a 	bne	240c98 <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0x178>
        240c6c:	e5dd3000 	ldrb	r3, [sp]
        240c70:	e92d0008 	stmdb	sp!, {r3}
        240c74:	e1a03008 	mov	r3, r8
        240c78:	e1a02007 	mov	r2, r7
        240c7c:	e1a00004 	mov	r0, r4
        240c80:	e3e01000 	mvn	r1, #0	; 0x0
        240c84:	e594c000 	ldr	ip, [r4]
        240c88:	e1a0e00f 	mov	lr, pc
        240c8c:	e28cf010 	add	pc, ip, #16	; 0x10
        240c90:	e28dd004 	add	sp, sp, #4	; 0x4
        240c94:	ea000013 	b	240ce8 <TXObjectRange::ReplaceRange(long, long, long, TXAttrObject *, unsigned char)+0x1c8>
        240c98:	e3a00000 	mov	r0, #0	; 0x0
        240c9c:	e52d6008 	str	r6, [sp, -#8]!
        240ca0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        240ca4:	e1a00004 	mov	r0, r4
        240ca8:	e89d0006 	ldmia	sp, {r1, r2}
        240cac:	eb65159f 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        240cb0:	e1a01000 	mov	r1, r0
        240cb4:	e1a02007 	mov	r2, r7
        240cb8:	e1a00004 	mov	r0, r4
        240cbc:	e3e03000 	mvn	r3, #0	; 0x0
        240cc0:	eb65158f 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        240cc4:	e5dd3008 	ldrb	r3, [sp, #8]
        240cc8:	e92d0008 	stmdb	sp!, {r3}
        240ccc:	e1a03008 	mov	r3, r8
        240cd0:	e1a02007 	mov	r2, r7
        240cd4:	e1a01006 	mov	r1, r6
        240cd8:	e1a00004 	mov	r0, r4
        240cdc:	eb654f5e 	bl	1b94a5c <TXObjectRange::$ReplaceRangeObj(long, long, TXAttrObject *, unsigned char)>
        240ce0:	e28dd004 	add	sp, sp, #4	; 0x4
        240ce4:	e28dd008 	add	sp, sp, #8	; 0x8
        240ce8:	e3a00000 	mov	r0, #0	; 0x0
        240cec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::ReplaceRange(long, long, TXObjectRange *, unsigned char)
 * Address: 00240cf0
 */
TXObjectRange::ReplaceRange(long, long, TXObjectRange *, unsigned char) {
    /*
        240cf0:	e1a0c00d 	mov	ip, sp
        240cf4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        240cf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        240cfc:	e1a04000 	mov	r4, r0
        240d00:	e1a07001 	mov	r7, r1
        240d04:	e1a06002 	mov	r6, r2
        240d08:	e1a05003 	mov	r5, r3
        240d0c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        240d10:	e20000ff 	and	r0, r0, #255	; 0xff
        240d14:	e5938004 	ldr	r8, [r3, #4]	; fField4
        240d18:	e3380000 	teq	r8, #0	; 0x0
        240d1c:	1a000008 	bne	240d44 <TXObjectRange::ReplaceRange(long, long, TXObjectRange *, unsigned char)+0x54>
        240d20:	e3a03001 	mov	r3, #1	; 0x1
        240d24:	e3a02000 	mov	r2, #0	; 0x0
        240d28:	e92d000c 	stmdb	sp!, {r2, r3}
        240d2c:	e1a02006 	mov	r2, r6
        240d30:	e1a01007 	mov	r1, r7
        240d34:	e1a00004 	mov	r0, r4
        240d38:	e3a03000 	mov	r3, #0	; 0x0
        240d3c:	eb654f48 	bl	1b94a64 <TXObjectRange::$ReplaceRange(long, long, long, TXAttrObject *, unsigned char)>
        240d40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        240d44:	e3300000 	teq	r0, #0	; 0x0
        240d48:	13360000 	teqne	r6, #0	; 0x0
        240d4c:	0a000025 	beq	240de8 <TXObjectRange::ReplaceRange(long, long, TXObjectRange *, unsigned char)+0xf8>
        240d50:	e24dd020 	sub	sp, sp, #32	; 0x20
        240d54:	e1a0300d 	mov	r3, sp
        240d58:	e1a02006 	mov	r2, r6
        240d5c:	e1a01007 	mov	r1, r7
        240d60:	e1a00004 	mov	r0, r4
        240d64:	eb651572 	bl	1b86334 <$SectRanges__8TXRangesCFlT1P12TXSectRanges>
        240d68:	e1a00004 	mov	r0, r4
        240d6c:	e59d1000 	ldr	r1, [sp]
        240d70:	e59d2014 	ldr	r2, [sp, #20]
        240d74:	eb654f2c 	bl	1b94a2c <TXObjectRange::$FreeObjects(long, long)>
        240d78:	e1a00005 	mov	r0, r5
        240d7c:	e3a01000 	mov	r1, #0	; 0x0
        240d80:	ebffbf56 	bl	230ae0 <TXArray::Lock(unsigned char)>
        240d84:	e1a03008 	mov	r3, r8
        240d88:	e92d0008 	stmdb	sp!, {r3}
        240d8c:	e1a03000 	mov	r3, r0
        240d90:	e1a00004 	mov	r0, r4
        240d94:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        240d98:	e59d2014 	ldr	r2, [sp, #20]
        240d9c:	eb651151 	bl	1b852e8 <TXArray::$Replace(long, long, void const *, long)>
        240da0:	e28dd004 	add	sp, sp, #4	; 0x4
        240da4:	e1a00005 	mov	r0, r5
        240da8:	ebffbfec 	bl	230d60 <TXArray::Unlock(void)>
        240dac:	e1a03008 	mov	r3, r8
        240db0:	e1a02007 	mov	r2, r7
        240db4:	e1a00004 	mov	r0, r4
        240db8:	e59d1000 	ldr	r1, [sp]
        240dbc:	eb651550 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        240dc0:	e1a00005 	mov	r0, r5
        240dc4:	eb651558 	bl	1b8632c <TXRanges::$GetLastRangeEnd( const(void))>
        240dc8:	e0402006 	sub	r2, r0, r6
        240dcc:	e59d0000 	ldr	r0, [sp]
        240dd0:	e0801008 	add	r1, r0, r8
        240dd4:	e1a00004 	mov	r0, r4
        240dd8:	e3e03000 	mvn	r3, #0	; 0x0
        240ddc:	eb651548 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        240de0:	e28dd020 	add	sp, sp, #32	; 0x20
        240de4:	ea000019 	b	240e50 <TXObjectRange::ReplaceRange(long, long, TXObjectRange *, unsigned char)+0x160>
        240de8:	e3a09000 	mov	r9, #0	; 0x0
        240dec:	e3580000 	cmp	r8, #0	; 0x0
        240df0:	da000016 	ble	240e50 <TXObjectRange::ReplaceRange(long, long, TXObjectRange *, unsigned char)+0x160>
        240df4:	e24dd004 	sub	sp, sp, #4	; 0x4
        240df8:	e1a01009 	mov	r1, r9
        240dfc:	e1a00005 	mov	r0, r5
        240e00:	eb654f0e 	bl	1b94a40 <TXObjectRange::$RangeIndexToObject( const(long))>
        240e04:	e1a01009 	mov	r1, r9
        240e08:	e58d0000 	str	r0, [sp]
        240e0c:	e1a00005 	mov	r0, r5
        240e10:	eb651540 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        240e14:	e1a0a000 	mov	sl, r0
        240e18:	e3a03000 	mov	r3, #0	; 0x0
        240e1c:	e59d2000 	ldr	r2, [sp]
        240e20:	e92d000c 	stmdb	sp!, {r2, r3}
        240e24:	e1a03000 	mov	r3, r0
        240e28:	e1a02006 	mov	r2, r6
        240e2c:	e1a01007 	mov	r1, r7
        240e30:	e1a00004 	mov	r0, r4
        240e34:	eb654f0a 	bl	1b94a64 <TXObjectRange::$ReplaceRange(long, long, long, TXAttrObject *, unsigned char)>
        240e38:	e3a06000 	mov	r6, #0	; 0x0
        240e3c:	e087700a 	add	r7, r7, sl
        240e40:	e28dd00c 	add	sp, sp, #12	; 0xc
        240e44:	e2899001 	add	r9, r9, #1	; 0x1
        240e48:	e1590008 	cmp	r9, r8
        240e4c:	baffffe8 	blt	240df4 <TXObjectRange::ReplaceRange(long, long, TXObjectRange *, unsigned char)+0x104>
        240e50:	e3a00000 	mov	r0, #0	; 0x0
        240e54:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::UpdateRangeObjects(long, long, TXAttrValues const *, long)
 * Address: 00240e58
 */
TXObjectRange::UpdateRangeObjects(long, long, TXAttrValues const *, long) {
    /*
        240e58:	e1a0c00d 	mov	ip, sp
        240e5c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        240e60:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        240e64:	e24cb014 	sub	fp, ip, #20	; 0x14
        240e68:	e1a06000 	mov	r6, r0
        240e6c:	e1a05001 	mov	r5, r1
        240e70:	e1a04002 	mov	r4, r2
        240e74:	e3a07000 	mov	r7, #0	; 0x0
        240e78:	e3520000 	cmp	r2, #0	; 0x0
        240e7c:	e59ba014 	ldr	sl, [fp, #20]
        240e80:	da000034 	ble	240f58 <TXObjectRange::UpdateRangeObjects(long, long, TXAttrValues const *, long)+0x100>
        240e84:	e24dd004 	sub	sp, sp, #4	; 0x4
        240e88:	e1a0200d 	mov	r2, sp
        240e8c:	e1a01005 	mov	r1, r5
        240e90:	e1a00006 	mov	r0, r6
        240e94:	eb654ee7 	bl	1b94a38 <TXObjectRange::$GetNextObjectRange( const(long, long *))>
        240e98:	e1a08000 	mov	r8, r0
        240e9c:	e5901000 	ldr	r1, [r0]
        240ea0:	e1a0e00f 	mov	lr, pc
        240ea4:	e281f01c 	add	pc, r1, #28	; 0x1c
        240ea8:	e3100004 	tst	r0, #4	; 0x4
        240eac:	0a000005 	beq	240ec8 <TXObjectRange::UpdateRangeObjects(long, long, TXAttrValues const *, long)+0x70>
        240eb0:	e1a0200a 	mov	r2, sl
        240eb4:	e1a00008 	mov	r0, r8
        240eb8:	e59b1010 	ldr	r1, [fp, #16]
        240ebc:	eb651527 	bl	1b86360 <TXAttrObject::$Update(TXAttrValues const *, long)>
        240ec0:	e1807007 	orr	r7, r0, r7
        240ec4:	ea00001e 	b	240f44 <TXObjectRange::UpdateRangeObjects(long, long, TXAttrValues const *, long)+0xec>
        240ec8:	e1a00008 	mov	r0, r8
        240ecc:	e5981000 	ldr	r1, [r8]
        240ed0:	e1a0e00f 	mov	lr, pc
        240ed4:	e281f00c 	add	pc, r1, #12	; 0xc
        240ed8:	e1a09000 	mov	r9, r0
        240edc:	e1a01008 	mov	r1, r8
        240ee0:	e5902000 	ldr	r2, [r0]
        240ee4:	e1a0e00f 	mov	lr, pc
        240ee8:	e282f028 	add	pc, r2, #40	; 0x28
        240eec:	e1a0200a 	mov	r2, sl
        240ef0:	e1a00009 	mov	r0, r9
        240ef4:	e59b1010 	ldr	r1, [fp, #16]
        240ef8:	eb651518 	bl	1b86360 <TXAttrObject::$Update(TXAttrValues const *, long)>
        240efc:	e1807007 	orr	r7, r0, r7
        240f00:	e24dd004 	sub	sp, sp, #4	; 0x4
        240f04:	e1a0300d 	mov	r3, sp
        240f08:	e1a01009 	mov	r1, r9
        240f0c:	e1a00006 	mov	r0, r6
        240f10:	e3a02000 	mov	r2, #0	; 0x0
        240f14:	eb654ecb 	bl	1b94a48 <TXObjectRange::$MapObject(TXAttrObject *, unsigned char, unsigned char *)>
        240f18:	e5dd3000 	ldrb	r3, [sp]
        240f1c:	e92d0008 	stmdb	sp!, {r3}
        240f20:	e59d1008 	ldr	r1, [sp, #8]
        240f24:	e1540001 	cmp	r4, r1
        240f28:	a1a02001 	movge	r2, r1
        240f2c:	b1a02004 	movlt	r2, r4
        240f30:	e1a03000 	mov	r3, r0
        240f34:	e1a01005 	mov	r1, r5
        240f38:	e1a00006 	mov	r0, r6
        240f3c:	eb654ec6 	bl	1b94a5c <TXObjectRange::$ReplaceRangeObj(long, long, TXAttrObject *, unsigned char)>
        240f40:	e28dd008 	add	sp, sp, #8	; 0x8
        240f44:	e49d0004 	ldr	r0, [sp], #4	; fField4
        240f48:	e0855000 	add	r5, r5, r0
        240f4c:	e0444000 	sub	r4, r4, r0
        240f50:	e3540000 	cmp	r4, #0	; 0x0
        240f54:	caffffca 	bgt	240e84 <TXObjectRange::UpdateRangeObjects(long, long, TXAttrValues const *, long)+0x2c>
        240f58:	e1a00007 	mov	r0, r7
        240f5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::FreeObjects(long, long)
 * Address: 00240fac
 */
TXObjectRange::FreeObjects(long, long) {
    /*
        240fac:	e1a0c00d 	mov	ip, sp
        240fb0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        240fb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        240fb8:	e1a05000 	mov	r5, r0
        240fbc:	e1a06001 	mov	r6, r1
        240fc0:	e1b04002 	movs	r4, r2
        240fc4:	52844001 	addpl	r4, r4, #1	; 0x1
        240fc8:	45954004 	ldrmi	r4, [r5, #4]	; fField4
        240fcc:	e1a00005 	mov	r0, r5
        240fd0:	e3a01000 	mov	r1, #0	; 0x0
        240fd4:	ebffbec1 	bl	230ae0 <TXArray::Lock(unsigned char)>
        240fd8:	e1a01006 	mov	r1, r6
        240fdc:	e1a00005 	mov	r0, r5
        240fe0:	eb6510ba 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        240fe4:	e1a07000 	mov	r7, r0
        240fe8:	e0440006 	sub	r0, r4, r6
        240fec:	e2504001 	subs	r4, r0, #1	; 0x1
        240ff0:	4a000006 	bmi	241010 <TXObjectRange::FreeObjects(long, long)+0x64>
        240ff4:	e5970004 	ldr	r0, [r7, #4]	; fField4
        240ff8:	e5901000 	ldr	r1, [r0]
        240ffc:	e1a0e00f 	mov	lr, pc
        241000:	e281f004 	add	pc, r1, #4	; 0x4
        241004:	e2877008 	add	r7, r7, #8	; 0x8
        241008:	e2544001 	subs	r4, r4, #1	; 0x1
        24100c:	5afffff8 	bpl	240ff4 <TXObjectRange::FreeObjects(long, long)+0x48>
        241010:	e1a00005 	mov	r0, r5
        241014:	ebffbf51 	bl	230d60 <TXArray::Unlock(void)>
        241018:	e3a00000 	mov	r0, #0	; 0x0
        24101c:	e5a50018 	str	r0, [r5, #24]!	; fField24
        241020:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::FreeData(unsigned char)
 * Address: 002410fc
 */
TXObjectRange::FreeData(unsigned char) {
    /*
        2410fc:	e1a0c00d 	mov	ip, sp
        241100:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        241104:	e24cb004 	sub	fp, ip, #4	; 0x4
        241108:	e1a04000 	mov	r4, r0
        24110c:	e20150ff 	and	r5, r1, #255	; 0xff
        241110:	e3e02000 	mvn	r2, #0	; 0x0
        241114:	e3a01000 	mov	r1, #0	; 0x0
        241118:	eb654e43 	bl	1b94a2c <TXObjectRange::$FreeObjects(long, long)>
        24111c:	e1a01005 	mov	r1, r5
        241120:	e1a00004 	mov	r0, r4
        241124:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        241128:	ea651477 	b	1b8630c <TXRanges::$FreeData(unsigned char)>
    */
}

/**
 * Symbol: TXObjectRange::OffsetToObject(TXOffset)
 * Address: 0024112c
 */
TXObjectRange::OffsetToObject(TXOffset) {
    /*
        24112c:	e1a0c00d 	mov	ip, sp
        241130:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        241134:	e24cb004 	sub	fp, ip, #4	; 0x4
        241138:	e1a04000 	mov	r4, r0
        24113c:	eb65147b 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        241140:	e3500000 	cmp	r0, #0	; 0x0
        241144:	b3a00000 	movlt	r0, #0	; 0x0
        241148:	b91ba810 	ldmltdb	fp, {r4, fp, sp, pc}
        24114c:	e1a01000 	mov	r1, r0
        241150:	e1a00004 	mov	r0, r4
        241154:	eb65105d 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241158:	e5900004 	ldr	r0, [r0, #4]	; fField4
        24115c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::GetNextObjectRange( const(long, long *))
 * Address: 00241160
 */
TXObjectRange::GetNextObjectRange( const(long, long *)) {
    /*
        241160:	e1a0c00d 	mov	ip, sp
        241164:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        241168:	e24cb004 	sub	fp, ip, #4	; 0x4
        24116c:	e1a05000 	mov	r5, r0
        241170:	e1a04001 	mov	r4, r1
        241174:	e1a06002 	mov	r6, r2
        241178:	eb65146b 	bl	1b8632c <TXRanges::$GetLastRangeEnd( const(void))>
        24117c:	e3a01000 	mov	r1, #0	; 0x0
        241180:	e1500004 	cmp	r0, r4
        241184:	d1a00001 	movle	r0, r1
        241188:	d5861000 	strle	r1, [r6]
        24118c:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        241190:	e52d4008 	str	r4, [sp, -#8]!
        241194:	e5cd1004 	strb	r1, [sp, #4]	; fField4
        241198:	e1a00005 	mov	r0, r5
        24119c:	e89d0006 	ldmia	sp, {r1, r2}
        2411a0:	eb651462 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        2411a4:	e1a01000 	mov	r1, r0
        2411a8:	e1a00005 	mov	r0, r5
        2411ac:	eb651047 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2411b0:	e5901000 	ldr	r1, [r0]
        2411b4:	e0411004 	sub	r1, r1, r4
        2411b8:	e5861000 	str	r1, [r6]
        2411bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2411c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::CountRangeObjects(long, long)
 * Address: 002411c4
 */
TXObjectRange::CountRangeObjects(long, long) {
    /*
        2411c4:	e1a0c00d 	mov	ip, sp
        2411c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2411cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2411d0:	e1a04000 	mov	r4, r0
        2411d4:	e1a05001 	mov	r5, r1
        2411d8:	e1a06002 	mov	r6, r2
        2411dc:	eb651452 	bl	1b8632c <TXRanges::$GetLastRangeEnd( const(void))>
        2411e0:	e1a01000 	mov	r1, r0
        2411e4:	e3a00000 	mov	r0, #0	; 0x0
        2411e8:	e1510005 	cmp	r1, r5
        2411ec:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        2411f0:	e0856006 	add	r6, r5, r6
        2411f4:	e52d5008 	str	r5, [sp, -#8]!
        2411f8:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2411fc:	e1a00004 	mov	r0, r4
        241200:	e89d0006 	ldmia	sp, {r1, r2}
        241204:	eb651449 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        241208:	e1a01000 	mov	r1, r0
        24120c:	e1a00004 	mov	r0, r4
        241210:	eb65102e 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241214:	e1a05000 	mov	r5, r0
        241218:	e5940004 	ldr	r0, [r4, #4]	; fField4
        24121c:	e2401001 	sub	r1, r0, #1	; 0x1
        241220:	e1a00004 	mov	r0, r4
        241224:	eb651029 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241228:	e1a01000 	mov	r1, r0
        24122c:	e3a00001 	mov	r0, #1	; 0x1
        241230:	e1550001 	cmp	r5, r1
        241234:	2a000006 	bcs	241254 <TXObjectRange::CountRangeObjects(long, long)+0x90>
        241238:	e5952000 	ldr	r2, [r5]
        24123c:	e1520006 	cmp	r2, r6
        241240:	aa000003 	bge	241254 <TXObjectRange::CountRangeObjects(long, long)+0x90>
        241244:	e2855008 	add	r5, r5, #8	; 0x8
        241248:	e2800001 	add	r0, r0, #1	; 0x1
        24124c:	e1550001 	cmp	r5, r1
        241250:	3afffff8 	bcc	241238 <TXObjectRange::CountRangeObjects(long, long)+0x74>
        241254:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::RangeIndexToObject( const(long))
 * Address: 00241258
 */
TXObjectRange::RangeIndexToObject( const(long)) {
    /*
        241258:	e1a0c00d 	mov	ip, sp
        24125c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        241260:	e24cb004 	sub	fp, ip, #4	; 0x4
        241264:	eb651019 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241268:	e5900004 	ldr	r0, [r0, #4]	; fField4
        24126c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::SearchObject(TXAttrObject const *)
 * Address: 00241270
 */
TXObjectRange::SearchObject(TXAttrObject const *) {
    /*
        241270:	e1a0c00d 	mov	ip, sp
        241274:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        241278:	e24cb004 	sub	fp, ip, #4	; 0x4
        24127c:	e1a04000 	mov	r4, r0
        241280:	e1a05001 	mov	r5, r1
        241284:	e3a01000 	mov	r1, #0	; 0x0
        241288:	ebffbe14 	bl	230ae0 <TXArray::Lock(unsigned char)>
        24128c:	e1a00004 	mov	r0, r4
        241290:	e3a01000 	mov	r1, #0	; 0x0
        241294:	eb65100d 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241298:	e1a06000 	mov	r6, r0
        24129c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2412a0:	e2507001 	subs	r7, r0, #1	; 0x1
        2412a4:	4a00000d 	bmi	2412e0 <TXObjectRange::SearchObject(TXAttrObject const *)+0x70>
        2412a8:	e1a00005 	mov	r0, r5
        2412ac:	e5961004 	ldr	r1, [r6, #4]	; fField4
        2412b0:	e5952000 	ldr	r2, [r5]
        2412b4:	e1a0e00f 	mov	lr, pc
        2412b8:	e282f024 	add	pc, r2, #36	; 0x24
        2412bc:	e3300000 	teq	r0, #0	; 0x0
        2412c0:	0a000003 	beq	2412d4 <TXObjectRange::SearchObject(TXAttrObject const *)+0x64>
        2412c4:	e1a00004 	mov	r0, r4
        2412c8:	ebffbea4 	bl	230d60 <TXArray::Unlock(void)>
        2412cc:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        2412d0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2412d4:	e2866008 	add	r6, r6, #8	; 0x8
        2412d8:	e2577001 	subs	r7, r7, #1	; 0x1
        2412dc:	5afffff1 	bpl	2412a8 <TXObjectRange::SearchObject(TXAttrObject const *)+0x38>
        2412e0:	e1a00004 	mov	r0, r4
        2412e4:	ebffbe9d 	bl	230d60 <TXArray::Unlock(void)>
        2412e8:	e3a00000 	mov	r0, #0	; 0x0
        2412ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *)
 * Address: 002412f0
 */
TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *) {
    /*
        2412f0:	e1a0c00d 	mov	ip, sp
        2412f4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2412f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2412fc:	e1a05000 	mov	r5, r0
        241300:	e1a04001 	mov	r4, r1
        241304:	e1a06003 	mov	r6, r3
        241308:	e20280ff 	and	r8, r2, #255	; 0xff
        24130c:	e1a00001 	mov	r0, r1
        241310:	e5911000 	ldr	r1, [r1]
        241314:	e1a0e00f 	mov	lr, pc
        241318:	e281f01c 	add	pc, r1, #28	; 0x1c
        24131c:	e3100004 	tst	r0, #4	; 0x4
        241320:	1a000019 	bne	24138c <TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *)+0x9c>
        241324:	e5952018 	ldr	r2, [r5, #24]	; fField24
        241328:	e3320000 	teq	r2, #0	; 0x0
        24132c:	0a000007 	beq	241350 <TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *)+0x60>
        241330:	e1a01004 	mov	r1, r4
        241334:	e1a00002 	mov	r0, r2
        241338:	e5922000 	ldr	r2, [r2]
        24133c:	e1a0e00f 	mov	lr, pc
        241340:	e282f024 	add	pc, r2, #36	; 0x24
        241344:	e3300000 	teq	r0, #0	; 0x0
        241348:	15957018 	ldrne	r7, [r5, #24]	; fField24
        24134c:	1a000003 	bne	241360 <TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *)+0x70>
        241350:	e1a01004 	mov	r1, r4
        241354:	e1a00005 	mov	r0, r5
        241358:	eb654db9 	bl	1b94a44 <TXObjectRange::$SearchObject(TXAttrObject const *)>
        24135c:	e1a07000 	mov	r7, r0
        241360:	e3370000 	teq	r7, #0	; 0x0
        241364:	0a000008 	beq	24138c <TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *)+0x9c>
        241368:	e3380000 	teq	r8, #0	; 0x0
        24136c:	1a000003 	bne	241380 <TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *)+0x90>
        241370:	e1a00004 	mov	r0, r4
        241374:	e5941000 	ldr	r1, [r4]
        241378:	e1a0e00f 	mov	lr, pc
        24137c:	e281f004 	add	pc, r1, #4	; 0x4
        241380:	e3a00001 	mov	r0, #1	; 0x1
        241384:	e5c60000 	strb	r0, [r6]
        241388:	ea000011 	b	2413d4 <TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *)+0xe4>
        24138c:	e3a09000 	mov	r9, #0	; 0x0
        241390:	e5c69000 	strb	r9, [r6]
        241394:	e3380000 	teq	r8, #0	; 0x0
        241398:	0a00000c 	beq	2413d0 <TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *)+0xe0>
        24139c:	e1a00004 	mov	r0, r4
        2413a0:	e5941000 	ldr	r1, [r4]
        2413a4:	e1a0e00f 	mov	lr, pc
        2413a8:	e281f00c 	add	pc, r1, #12	; 0xc
        2413ac:	e1b07000 	movs	r7, r0
        2413b0:	01a00009 	moveq	r0, r9
        2413b4:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2413b8:	e1a01004 	mov	r1, r4
        2413bc:	e1a00007 	mov	r0, r7
        2413c0:	e5972000 	ldr	r2, [r7]
        2413c4:	e1a0e00f 	mov	lr, pc
        2413c8:	e282f028 	add	pc, r2, #40	; 0x28
        2413cc:	ea000000 	b	2413d4 <TXObjectRange::MapObject(TXAttrObject *, unsigned char, unsigned char *)+0xe4>
        2413d0:	e1a07004 	mov	r7, r4
        2413d4:	e5a57018 	str	r7, [r5, #24]!	; fField24
        2413d8:	e1a00007 	mov	r0, r7
        2413dc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

