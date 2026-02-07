#include "include/TXView.h"

/**
 * Symbol: TXView::ClassID( const(void))
 * Address: 0024659c
 */
TXView::ClassID( const(void)) {
    /*
        24659c:	e3a0006c 	mov	r0, #108	; 0x6c
        2465a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXView::KeyDown(unsigned short, unsigned char)
 * Address: 002465ac
 */
TXView::KeyDown(unsigned short, unsigned char) {
    /*
        2465ac:	e1a0c00d 	mov	ip, sp
        2465b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2465b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2465b8:	e1a04000 	mov	r4, r0
        2465bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2465c0:	e5cd1001 	strb	r1, [sp, #1]
        2465c4:	e1a00421 	mov	r0, r1, lsr #8
        2465c8:	e5cd0000 	strb	r0, [sp]
        2465cc:	e20260ff 	and	r6, r2, #255	; 0xff
        2465d0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2465d4:	e59d1000 	ldr	r1, [sp]
        2465d8:	e1a01821 	mov	r1, r1, lsr #16
        2465dc:	eb65667c 	bl	1b9ffd4 <Textension::$GetKeyDownFlags(unsigned short)>
        2465e0:	e1a05000 	mov	r5, r0
        2465e4:	e3360000 	teq	r6, #0	; 0x0
        2465e8:	0a000001 	beq	2465f4 <TXView::KeyDown(unsigned short, unsigned char)+0x48>
        2465ec:	e3150008 	tst	r5, #8	; 0x8
        2465f0:	0a000012 	beq	246640 <TXView::KeyDown(unsigned short, unsigned char)+0x94>
        2465f4:	e59d0000 	ldr	r0, [sp]
        2465f8:	e1a00820 	mov	r0, r0, lsr #16
        2465fc:	e330001e 	teq	r0, #30	; 0x1e
        246600:	159d0000 	ldrne	r0, [sp]
        246604:	11a00820 	movne	r0, r0, lsr #16
        246608:	1330001c 	teqne	r0, #28	; 0x1c
        24660c:	03a03000 	moveq	r3, #0	; 0x0
        246610:	13a03001 	movne	r3, #1	; 0x1
        246614:	e92d0008 	stmdb	sp!, {r3}
        246618:	e3a00001 	mov	r0, #1	; 0x1
        24661c:	eb6230c3 	bl	1ad2930 <$Modifiers(unsigned char)>
        246620:	e1a03000 	mov	r3, r0
        246624:	e92d0008 	stmdb	sp!, {r3}
        246628:	e1a03005 	mov	r3, r5
        24662c:	e28d1008 	add	r1, sp, #8	; 0x8
        246630:	e1a00004 	mov	r0, r4
        246634:	e3a02001 	mov	r2, #1	; 0x1
        246638:	eb655e1f 	bl	1b9debc <TXView::$NewKey(unsigned short const *, long, int, long, unsigned char)>
        24663c:	e28dd008 	add	sp, sp, #8	; 0x8
        246640:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::GetBestCoveredLine(TRect *, long, long, long *)
 * Address: 00246644
 */
TXView::GetBestCoveredLine(TRect *, long, long, long *) {
    /*
        246644:	e1a0c00d 	mov	ip, sp
        246648:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        24664c:	e24cb004 	sub	fp, ip, #4	; 0x4
        246650:	e1a04001 	mov	r4, r1
        246654:	e1a05003 	mov	r5, r3
        246658:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        24665c:	e5900030 	ldr	r0, [r0, #48]	; fField48
        246660:	e5900010 	ldr	r0, [r0, #16]	; fField16
        246664:	e5b09008 	ldr	r9, [r0, #8]!	; fField8
        246668:	e3e00000 	mvn	r0, #0	; 0x0
        24666c:	e5870000 	str	r0, [r7]
        246670:	e24dd008 	sub	sp, sp, #8	; 0x8
        246674:	e8941008 	ldmia	r4, {r3, ip}
        246678:	e88d1008 	stmia	sp, {r3, ip}
        24667c:	e1a06002 	mov	r6, r2
        246680:	e1520005 	cmp	r2, r5
        246684:	ca000018 	bgt	2466ec <TXView::GetBestCoveredLine(TRect *, long, long, long *)+0xa8>
        246688:	e24dd008 	sub	sp, sp, #8	; 0x8
        24668c:	e1a0200d 	mov	r2, sp
        246690:	e1a01006 	mov	r1, r6
        246694:	e1a00009 	mov	r0, r9
        246698:	eb652444 	bl	1b8f7b0 <TXFrames::$GetLineBounds( const(long, Rect *))>
        24669c:	e1a01004 	mov	r1, r4
        2466a0:	e1a0000d 	mov	r0, sp
        2466a4:	eb612438 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        2466a8:	e5971000 	ldr	r1, [r7]
        2466ac:	e1500001 	cmp	r0, r1
        2466b0:	da000009 	ble	2466dc <TXView::GetBestCoveredLine(TRect *, long, long, long *)+0x98>
        2466b4:	e5870000 	str	r0, [r7]
        2466b8:	e59d0002 	ldr	r0, [sp, #2]
        2466bc:	e5cd0009 	strb	r0, [sp, #9]
        2466c0:	e1a00440 	mov	r0, r0, asr #8
        2466c4:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        2466c8:	e59d0006 	ldr	r0, [sp, #6]
        2466cc:	e5cd000d 	strb	r0, [sp, #13]
        2466d0:	e1a00440 	mov	r0, r0, asr #8
        2466d4:	e5cd000c 	strb	r0, [sp, #12]	; fField12
        2466d8:	e1a08006 	mov	r8, r6
        2466dc:	e28dd008 	add	sp, sp, #8	; 0x8
        2466e0:	e2866001 	add	r6, r6, #1	; 0x1
        2466e4:	e1560005 	cmp	r6, r5
        2466e8:	daffffe6 	ble	246688 <TXView::GetBestCoveredLine(TRect *, long, long, long *)+0x44>
        2466ec:	e8bd5000 	ldmia	sp!, {ip, lr}
        2466f0:	e8845000 	stmia	r4, {ip, lr}
        2466f4:	e1a00008 	mov	r0, r8
        2466f8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::GetBestCoveredLine(TRect *, long *)
 * Address: 002466fc
 */
TXView::GetBestCoveredLine(TRect *, long *) {
    /*
        2466fc:	e1a0c00d 	mov	ip, sp
        246700:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        246704:	e24cb004 	sub	fp, ip, #4	; 0x4
        246708:	e1a05000 	mov	r5, r0
        24670c:	e1a04001 	mov	r4, r1
        246710:	e1a06002 	mov	r6, r2
        246714:	e24dd008 	sub	sp, sp, #8	; 0x8
        246718:	e1a0300d 	mov	r3, sp
        24671c:	e28d2004 	add	r2, sp, #4	; 0x4
        246720:	eb655dd6 	bl	1b9de80 <TXView::$GetIntersectedLines(TRect const &, long *, long *)>
        246724:	e3300000 	teq	r0, #0	; 0x0
        246728:	03e00000 	mvneq	r0, #0	; 0x0
        24672c:	0a000007 	beq	246750 <TXView::GetBestCoveredLine(TRect *, long *)+0x54>
        246730:	e1a03006 	mov	r3, r6
        246734:	e92d0008 	stmdb	sp!, {r3}
        246738:	e1a01004 	mov	r1, r4
        24673c:	e1a00005 	mov	r0, r5
        246740:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        246744:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        246748:	eb655dcd 	bl	1b9de84 <TXView::$GetBestCoveredLine(TRect *, long, long, long *)>
        24674c:	e28dd004 	add	sp, sp, #4	; 0x4
        246750:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::IsLinesScrub(TRect const &, long, long, TXOffsetRange *)
 * Address: 00246754
 */
TXView::IsLinesScrub(TRect const &, long, long, TXOffsetRange *) {
    /*
        246754:	e1a0c00d 	mov	ip, sp
        246758:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        24675c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        246760:	e24cb014 	sub	fp, ip, #20	; 0x14
        246764:	e1a05000 	mov	r5, r0
        246768:	e1a04002 	mov	r4, r2
        24676c:	e1a06003 	mov	r6, r3
        246770:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        246774:	e5900030 	ldr	r0, [r0, #48]	; fField48
        246778:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24677c:	e3a07000 	mov	r7, #0	; 0x0
        246780:	e1a08002 	mov	r8, r2
        246784:	e1520003 	cmp	r2, r3
        246788:	e5b09008 	ldr	r9, [r0, #8]!	; fField8
        24678c:	ca000028 	bgt	246834 <TXView::IsLinesScrub(TRect const &, long, long, TXOffsetRange *)+0xe0>
        246790:	e24dd008 	sub	sp, sp, #8	; 0x8
        246794:	e1a0200d 	mov	r2, sp
        246798:	e1a01008 	mov	r1, r8
        24679c:	e1a00009 	mov	r0, r9
        2467a0:	eb652402 	bl	1b8f7b0 <TXFrames::$GetLineBounds( const(long, Rect *))>
        2467a4:	e1a0000d 	mov	r0, sp
        2467a8:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        2467ac:	eb6123f6 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        2467b0:	e350001e 	cmp	r0, #30	; 0x1e
        2467b4:	ba000003 	blt	2467c8 <TXView::IsLinesScrub(TRect const &, long, long, TXOffsetRange *)+0x74>
        2467b8:	e1b00007 	movs	r0, r7
        2467bc:	e2877001 	add	r7, r7, #1	; 0x1
        2467c0:	01a04008 	moveq	r4, r8
        2467c4:	ea000002 	b	2467d4 <TXView::IsLinesScrub(TRect const &, long, long, TXOffsetRange *)+0x80>
        2467c8:	e3370000 	teq	r7, #0	; 0x0
        2467cc:	128dd008 	addne	sp, sp, #8	; 0x8
        2467d0:	1a000003 	bne	2467e4 <TXView::IsLinesScrub(TRect const &, long, long, TXOffsetRange *)+0x90>
        2467d4:	e28dd008 	add	sp, sp, #8	; 0x8
        2467d8:	e2888001 	add	r8, r8, #1	; 0x1
        2467dc:	e1580006 	cmp	r8, r6
        2467e0:	daffffea 	ble	246790 <TXView::IsLinesScrub(TRect const &, long, long, TXOffsetRange *)+0x3c>
        2467e4:	e3570000 	cmp	r7, #0	; 0x0
        2467e8:	da000011 	ble	246834 <TXView::IsLinesScrub(TRect const &, long, long, TXOffsetRange *)+0xe0>
        2467ec:	e5950030 	ldr	r0, [r5, #48]	; fField48
        2467f0:	e5900018 	ldr	r0, [r0, #24]
        2467f4:	e1a0200a 	mov	r2, sl
        2467f8:	e1a01004 	mov	r1, r4
        2467fc:	eb651799 	bl	1b8c668 <TXFormatter::$GetLineRange( const(long, TXOffsetRange *))>
        246800:	e24dd010 	sub	sp, sp, #16	; 0x10
        246804:	e0841007 	add	r1, r4, r7
        246808:	e2411001 	sub	r1, r1, #1	; 0x1
        24680c:	e5b50030 	ldr	r0, [r5, #48]!	; fField48
        246810:	e5900018 	ldr	r0, [r0, #24]
        246814:	e1a0200d 	mov	r2, sp
        246818:	eb651792 	bl	1b8c668 <TXFormatter::$GetLineRange( const(long, TXOffsetRange *))>
        24681c:	e28a1008 	add	r1, sl, #8	; 0x8
        246820:	e28d0008 	add	r0, sp, #8	; 0x8
        246824:	e8905000 	ldmia	r0, {ip, lr}
        246828:	e8815000 	stmia	r1, {ip, lr}
        24682c:	e3a00001 	mov	r0, #1	; 0x1
        246830:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        246834:	e3a00000 	mov	r0, #0	; 0x0
        246838:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::IsCharOrWordsScrub(TRect const &, long, long, TXOffsetRange *)
 * Address: 0024683c
 */
TXView::IsCharOrWordsScrub(TRect const &, long, long, TXOffsetRange *) {
    /*
        24683c:	e1a0c00d 	mov	ip, sp
        246840:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        246844:	e24cb004 	sub	fp, ip, #4	; 0x4
        246848:	e1a04000 	mov	r4, r0
        24684c:	e1a06001 	mov	r6, r1
        246850:	e1a00003 	mov	r0, r3
        246854:	e59b5004 	ldr	r5, [fp, #4]	; fField4
        246858:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24685c:	e28d1004 	add	r1, sp, #4	; 0x4
        246860:	e8965000 	ldmia	r6, {ip, lr}
        246864:	e8815000 	stmia	r1, {ip, lr}
        246868:	e1a0300d 	mov	r3, sp
        24686c:	e92d0008 	stmdb	sp!, {r3}
        246870:	e1a03000 	mov	r3, r0
        246874:	e28d1008 	add	r1, sp, #8	; 0x8
        246878:	e1a00004 	mov	r0, r4
        24687c:	eb655d80 	bl	1b9de84 <TXView::$GetBestCoveredLine(TRect *, long, long, long *)>
        246880:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        246884:	e5cd0003 	strb	r0, [sp, #3]
        246888:	e1a00440 	mov	r0, r0, asr #8
        24688c:	e5cd0002 	strb	r0, [sp, #2]
        246890:	e59d000a 	ldr	r0, [sp, #10]
        246894:	e5cd0001 	strb	r0, [sp, #1]
        246898:	e1a00440 	mov	r0, r0, asr #8
        24689c:	e44d0008 	strb	r0, [sp], -#8	; fField8
        2468a0:	e5960006 	ldr	r0, [r6, #6]
        2468a4:	e1a00820 	mov	r0, r0, lsr #16
        2468a8:	e5961002 	ldr	r1, [r6, #2]
        2468ac:	e1a01821 	mov	r1, r1, lsr #16
        2468b0:	e0400001 	sub	r0, r0, r1
        2468b4:	e1a00800 	mov	r0, r0, lsl #16
        2468b8:	e1a00840 	mov	r0, r0, asr #16
        2468bc:	e3a06001 	mov	r6, #1	; 0x1
        2468c0:	e3500005 	cmp	r0, #5	; 0x5
        2468c4:	ca00001d 	bgt	246940 <TXView::IsCharOrWordsScrub(TRect const &, long, long, TXOffsetRange *)+0x104>
        2468c8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2468cc:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2468d0:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        2468d4:	e28d2004 	add	r2, sp, #4	; 0x4
        2468d8:	e1a0300d 	mov	r3, sp
        2468dc:	e92d0008 	stmdb	sp!, {r3}
        2468e0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2468e4:	e1a03002 	mov	r3, r2
        2468e8:	e1a02005 	mov	r2, r5
        2468ec:	eb651751 	bl	1b8c638 <TXDisplay::$PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        2468f0:	e5fd0004 	ldrb	r0, [sp, #4]!	; fField4
        2468f4:	e3300000 	teq	r0, #0	; 0x0
        2468f8:	05950008 	ldreq	r0, [r5, #8]	; fField8
        2468fc:	05957000 	ldreq	r7, [r5]
        246900:	01300007 	teqeq	r0, r7
        246904:	1a00000b 	bne	246938 <TXView::IsCharOrWordsScrub(TRect const &, long, long, TXOffsetRange *)+0xfc>
        246908:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        24690c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        246910:	e5901000 	ldr	r1, [r0]
        246914:	e1a0e00f 	mov	lr, pc
        246918:	e281f004 	add	pc, r1, #4	; 0x4
        24691c:	e1570000 	cmp	r7, r0
        246920:	aa000004 	bge	246938 <TXView::IsCharOrWordsScrub(TRect const &, long, long, TXOffsetRange *)+0xfc>
        246924:	e5950008 	ldr	r0, [r5, #8]	; fField8
        246928:	e2800001 	add	r0, r0, #1	; 0x1
        24692c:	e5a50008 	str	r0, [r5, #8]!	; fField8
        246930:	e1a00006 	mov	r0, r6
        246934:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        246938:	e28dd008 	add	sp, sp, #8	; 0x8
        24693c:	ea00003a 	b	246a2c <TXView::IsCharOrWordsScrub(TRect const &, long, long, TXOffsetRange *)+0x1f0>
        246940:	e24dd010 	sub	sp, sp, #16	; 0x10
        246944:	e28d3010 	add	r3, sp, #16	; 0x10
        246948:	e92d0008 	stmdb	sp!, {r3}
        24694c:	e28d3018 	add	r3, sp, #24	; 0x18
        246950:	e28d2004 	add	r2, sp, #4	; 0x4
        246954:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246958:	e59d101c 	ldr	r1, [sp, #28]
        24695c:	eb656592 	bl	1b9ffac <Textension::$PointToWord(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        246960:	e24dd004 	sub	sp, sp, #4	; 0x4
        246964:	e1a0200d 	mov	r2, sp
        246968:	e28d1008 	add	r1, sp, #8	; 0x8
        24696c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246970:	eb656590 	bl	1b9ffb8 <Textension::$GetRangeBounds(TXOffsetRange const &, Rect *)>
        246974:	e28d1028 	add	r1, sp, #40	; 0x28
        246978:	e1a0000d 	mov	r0, sp
        24697c:	eb612382 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        246980:	e3500032 	cmp	r0, #50	; 0x32
        246984:	aa000003 	bge	246998 <TXView::IsCharOrWordsScrub(TRect const &, long, long, TXOffsetRange *)+0x15c>
        246988:	e28d1008 	add	r1, sp, #8	; 0x8
        24698c:	e28d0010 	add	r0, sp, #16	; 0x10
        246990:	e8905000 	ldmia	r0, {ip, lr}
        246994:	e8815000 	stmia	r1, {ip, lr}
        246998:	e24dd010 	sub	sp, sp, #16	; 0x10
        24699c:	e59d003c 	ldr	r0, [sp, #60]	; fField60
        2469a0:	e5cd0033 	strb	r0, [sp, #51]
        2469a4:	e1a00440 	mov	r0, r0, asr #8
        2469a8:	e5cd0032 	strb	r0, [sp, #50]
        2469ac:	e28d3028 	add	r3, sp, #40	; 0x28
        2469b0:	e92d0008 	stmdb	sp!, {r3}
        2469b4:	e28d3030 	add	r3, sp, #48	; 0x30
        2469b8:	e28d2004 	add	r2, sp, #4	; 0x4
        2469bc:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2469c0:	e59d1034 	ldr	r1, [sp, #52]	; fField52
        2469c4:	eb656578 	bl	1b9ffac <Textension::$PointToWord(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        2469c8:	e28dd004 	add	sp, sp, #4	; 0x4
        2469cc:	e28d2010 	add	r2, sp, #16	; 0x10
        2469d0:	e1a0100d 	mov	r1, sp
        2469d4:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        2469d8:	eb656576 	bl	1b9ffb8 <Textension::$GetRangeBounds(TXOffsetRange const &, Rect *)>
        2469dc:	e28d1038 	add	r1, sp, #56	; 0x38
        2469e0:	e28d0010 	add	r0, sp, #16	; 0x10
        2469e4:	eb612368 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        2469e8:	e28d1008 	add	r1, sp, #8	; 0x8
        2469ec:	e3500032 	cmp	r0, #50	; 0x32
        2469f0:	b89d5000 	ldmltia	sp, {ip, lr}
        2469f4:	b8815000 	stmltia	r1, {ip, lr}
        2469f8:	e59d0018 	ldr	r0, [sp, #24]
        2469fc:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        246a00:	e1500002 	cmp	r0, r2
        246a04:	aa000007 	bge	246a28 <TXView::IsCharOrWordsScrub(TRect const &, long, long, TXOffsetRange *)+0x1ec>
        246a08:	e28d0018 	add	r0, sp, #24	; 0x18
        246a0c:	e8901008 	ldmia	r0, {r3, ip}
        246a10:	e8851008 	stmia	r5, {r3, ip}
        246a14:	e2850008 	add	r0, r5, #8	; 0x8
        246a18:	e8911008 	ldmia	r1, {r3, ip}
        246a1c:	e8801008 	stmia	r0, {r3, ip}
        246a20:	e1a00006 	mov	r0, r6
        246a24:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        246a28:	e28dd028 	add	sp, sp, #40	; 0x28
        246a2c:	e3a00000 	mov	r0, #0	; 0x0
        246a30:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::HandleCaretGesture(TUnitPublic *)
 * Address: 00246a34
 */
TXView::HandleCaretGesture(TUnitPublic *) {
    /*
        246a34:	e1a0c00d 	mov	ip, sp
        246a38:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        246a3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        246a40:	e1a04000 	mov	r4, r0
        246a44:	e1a05001 	mov	r5, r1
        246a48:	e5d0005c 	ldrb	r0, [r0, #92]	; fField92
        246a4c:	e3a06000 	mov	r6, #0	; 0x0
        246a50:	e3300000 	teq	r0, #0	; 0x0
        246a54:	11a00006 	movne	r0, r6
        246a58:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        246a5c:	e24dd008 	sub	sp, sp, #8	; 0x8
        246a60:	e1a00005 	mov	r0, r5
        246a64:	eb6112d1 	bl	1a8b5b0 <TUnitPublic::$CaretType(void)>
        246a68:	e1a08000 	mov	r8, r0
        246a6c:	e1a00005 	mov	r0, r5
        246a70:	eb613c06 	bl	1a95a90 <TUnitPublic::$GestureAngle(void)>
        246a74:	e3a07000 	mov	r7, #0	; 0x0
        246a78:	e3380002 	teq	r8, #2	; 0x2
        246a7c:	1a000013 	bne	246ad0 <TXView::HandleCaretGesture(TUnitPublic *)+0x9c>
        246a80:	e3300000 	teq	r0, #0	; 0x0
        246a84:	1a000008 	bne	246aac <TXView::HandleCaretGesture(TUnitPublic *)+0x78>
        246a88:	e1a01005 	mov	r1, r5
        246a8c:	e28d0004 	add	r0, sp, #4	; 0x4
        246a90:	e3a02001 	mov	r2, #1	; 0x1
        246a94:	eb613bfe 	bl	1a95a94 <TUnitPublic::$GesturePoint(long)>
        246a98:	e3a00020 	mov	r0, #32	; 0x20
        246a9c:	e5cd0001 	strb	r0, [sp, #1]
        246aa0:	e5cd6000 	strb	r6, [sp]
        246aa4:	e3a05001 	mov	r5, #1	; 0x1
        246aa8:	ea000025 	b	246b44 <TXView::HandleCaretGesture(TUnitPublic *)+0x110>
        246aac:	e33000b4 	teq	r0, #180	; 0xb4
        246ab0:	1a000068 	bne	246c58 <TXView::HandleCaretGesture(TUnitPublic *)+0x224>
        246ab4:	e1a01005 	mov	r1, r5
        246ab8:	e28d0004 	add	r0, sp, #4	; 0x4
        246abc:	e3a02000 	mov	r2, #0	; 0x0
        246ac0:	eb613bf3 	bl	1a95a94 <TUnitPublic::$GesturePoint(long)>
        246ac4:	e3a05000 	mov	r5, #0	; 0x0
        246ac8:	e3a07001 	mov	r7, #1	; 0x1
        246acc:	ea00001c 	b	246b44 <TXView::HandleCaretGesture(TUnitPublic *)+0x110>
        246ad0:	e3380006 	teq	r8, #6	; 0x6
        246ad4:	03300087 	teqeq	r0, #135	; 0x87
        246ad8:	1a00005e 	bne	246c58 <TXView::HandleCaretGesture(TUnitPublic *)+0x224>
        246adc:	e24dd008 	sub	sp, sp, #8	; 0x8
        246ae0:	e1a0100d 	mov	r1, sp
        246ae4:	e1a00005 	mov	r0, r5
        246ae8:	eb610ea0 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        246aec:	e24dd004 	sub	sp, sp, #4	; 0x4
        246af0:	e1a0200d 	mov	r2, sp
        246af4:	e28d1004 	add	r1, sp, #4	; 0x4
        246af8:	e1a00004 	mov	r0, r4
        246afc:	eb655ce1 	bl	1b9de88 <TXView::$GetBestCoveredLine(TRect *, long *)>
        246b00:	e3700001 	cmn	r0, #1	; 0x1
        246b04:	01a00006 	moveq	r0, r6
        246b08:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        246b0c:	e59d0006 	ldr	r0, [sp, #6]
        246b10:	e5cd0011 	strb	r0, [sp, #17]
        246b14:	e1a00440 	mov	r0, r0, asr #8
        246b18:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        246b1c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        246b20:	e5cd0013 	strb	r0, [sp, #19]
        246b24:	e1a00440 	mov	r0, r0, asr #8
        246b28:	e5cd0012 	strb	r0, [sp, #18]
        246b2c:	e3a0000d 	mov	r0, #13	; 0xd
        246b30:	e5cd000d 	strb	r0, [sp, #13]
        246b34:	e5cd600c 	strb	r6, [sp, #12]	; fField12
        246b38:	e3a05001 	mov	r5, #1	; 0x1
        246b3c:	e3a07001 	mov	r7, #1	; 0x1
        246b40:	e28dd00c 	add	sp, sp, #12	; 0xc
        246b44:	e24dd018 	sub	sp, sp, #24	; 0x18
        246b48:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246b4c:	e59d101c 	ldr	r1, [sp, #28]
        246b50:	e28d2004 	add	r2, sp, #4	; 0x4
        246b54:	e1a0300d 	mov	r3, sp
        246b58:	e92d0008 	stmdb	sp!, {r3}
        246b5c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        246b60:	e1a03002 	mov	r3, r2
        246b64:	e28d200c 	add	r2, sp, #12	; 0xc
        246b68:	eb6516b2 	bl	1b8c638 <TXDisplay::$PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        246b6c:	e28dd004 	add	sp, sp, #4	; 0x4
        246b70:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        246b74:	e3500000 	cmp	r0, #0	; 0x0
        246b78:	ba000035 	blt	246c54 <TXView::HandleCaretGesture(TUnitPublic *)+0x220>
        246b7c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        246b80:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        246b84:	e1300001 	teq	r0, r1
        246b88:	1a000031 	bne	246c54 <TXView::HandleCaretGesture(TUnitPublic *)+0x220>
        246b8c:	e3370000 	teq	r7, #0	; 0x0
        246b90:	0a00001c 	beq	246c08 <TXView::HandleCaretGesture(TUnitPublic *)+0x1d4>
        246b94:	e59d7008 	ldr	r7, [sp, #8]	; fField8
        246b98:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246b9c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        246ba0:	e5901000 	ldr	r1, [r0]
        246ba4:	e1a0e00f 	mov	lr, pc
        246ba8:	e281f004 	add	pc, r1, #4	; 0x4
        246bac:	e1570000 	cmp	r7, r0
        246bb0:	aa000014 	bge	246c08 <TXView::HandleCaretGesture(TUnitPublic *)+0x1d4>
        246bb4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246bb8:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        246bbc:	e1a00002 	mov	r0, r2
        246bc0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        246bc4:	e5922000 	ldr	r2, [r2]
        246bc8:	e1a0e00f 	mov	lr, pc
        246bcc:	e282f01c 	add	pc, r2, #28	; 0x1c
        246bd0:	e1a01000 	mov	r1, r0
        246bd4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246bd8:	eb655051 	bl	1b9ad24 <TXStyledText::$IsWordSpace( const(unsigned short))>
        246bdc:	e3300000 	teq	r0, #0	; 0x0
        246be0:	0a000008 	beq	246c08 <TXView::HandleCaretGesture(TUnitPublic *)+0x1d4>
        246be4:	e5cd600c 	strb	r6, [sp, #12]	; fField12
        246be8:	e3a03001 	mov	r3, #1	; 0x1
        246bec:	e92d0008 	stmdb	sp!, {r3}
        246bf0:	e28d300c 	add	r3, sp, #12	; 0xc
        246bf4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246bf8:	e28d200c 	add	r2, sp, #12	; 0xc
        246bfc:	e8920006 	ldmia	r2, {r1, r2}
        246c00:	eb655048 	bl	1b9ad28 <TXStyledText::$CharToWord(TXOffset, TXOffsetRange *, char)>
        246c04:	e28dd004 	add	sp, sp, #4	; 0x4
        246c08:	e3350000 	teq	r5, #0	; 0x0
        246c0c:	059d0010 	ldreq	r0, [sp, #16]	; fField16
        246c10:	059d1008 	ldreq	r1, [sp, #8]	; fField8
        246c14:	01300001 	teqeq	r0, r1
        246c18:	0a00000d 	beq	246c54 <TXView::HandleCaretGesture(TUnitPublic *)+0x220>
        246c1c:	e24dd038 	sub	sp, sp, #56	; 0x38
        246c20:	e28d1050 	add	r1, sp, #80	; 0x50
        246c24:	e1a02005 	mov	r2, r5
        246c28:	e28d0024 	add	r0, sp, #36	; 0x24
        246c2c:	eb6505f5 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        246c30:	e28d1024 	add	r1, sp, #36	; 0x24
        246c34:	e1a0000d 	mov	r0, sp
        246c38:	eb6564f1 	bl	1ba0004 <TXReplaceParams::$__ct(TXTextDescriptor const &)>
        246c3c:	e1a0200d 	mov	r2, sp
        246c40:	e28d1040 	add	r1, sp, #64	; 0x40
        246c44:	e1a00004 	mov	r0, r4
        246c48:	eb655c97 	bl	1b9deac <TXView::$NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)>
        246c4c:	e3a00001 	mov	r0, #1	; 0x1
        246c50:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        246c54:	e28dd018 	add	sp, sp, #24	; 0x18
        246c58:	e1a00006 	mov	r0, r6
        246c5c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)
 * Address: 00246c60
 */
TXView::ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char) {
    /*
        246c60:	e1a0c00d 	mov	ip, sp
        246c64:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        246c68:	e24cb004 	sub	fp, ip, #4	; 0x4
        246c6c:	e1a04000 	mov	r4, r0
        246c70:	e1a05001 	mov	r5, r1
        246c74:	e20360ff 	and	r6, r3, #255	; 0xff
        246c78:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        246c7c:	e20090ff 	and	r9, r0, #255	; 0xff
        246c80:	e5d4005c 	ldrb	r0, [r4, #92]	; fField92
        246c84:	e3300000 	teq	r0, #0	; 0x0
        246c88:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        246c8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        246c90:	e1a00002 	mov	r0, r2
        246c94:	eb653761 	bl	1b94a20 <$TXGetRunAttrValues(RefVar const &)>
        246c98:	e1a08000 	mov	r8, r0
        246c9c:	e3a07000 	mov	r7, #0	; 0x0
        246ca0:	e3360000 	teq	r6, #0	; 0x0
        246ca4:	0a000020 	beq	246d2c <TXView::ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0xcc>
        246ca8:	e1a0200d 	mov	r2, sp
        246cac:	e1a00008 	mov	r0, r8
        246cb0:	e59f60a0 	ldr	r6, [pc, #a0]	; 246d58 <TXView::ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0xf8>
        246cb4:	e1a01006 	mov	r1, r6
        246cb8:	eb6501b5 	bl	1b87394 <TXAttrValues::$GetValue( const(unsigned long, void *))>
        246cbc:	e3300000 	teq	r0, #0	; 0x0
        246cc0:	159d0000 	ldrne	r0, [sp]
        246cc4:	13300000 	teqne	r0, #0	; 0x0
        246cc8:	0a000017 	beq	246d2c <TXView::ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0xcc>
        246ccc:	e24dd018 	sub	sp, sp, #24	; 0x18
        246cd0:	e1a0000d 	mov	r0, sp
        246cd4:	eb64fda8 	bl	1b8637c <TXAttrValues::$__ct(void)>
        246cd8:	e1a0100d 	mov	r1, sp
        246cdc:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246ce0:	eb6564c1 	bl	1b9ffec <Textension::$GetContinuousAttrValues(TXAttrValues *)>
        246ce4:	e24dd004 	sub	sp, sp, #4	; 0x4
        246ce8:	e1a0200d 	mov	r2, sp
        246cec:	e28d0004 	add	r0, sp, #4	; 0x4
        246cf0:	e1a01006 	mov	r1, r6
        246cf4:	eb6501a6 	bl	1b87394 <TXAttrValues::$GetValue( const(unsigned long, void *))>
        246cf8:	e3300000 	teq	r0, #0	; 0x0
        246cfc:	159d001c 	ldrne	r0, [sp, #28]
        246d00:	159d1000 	ldrne	r1, [sp]
        246d04:	10010000 	andne	r0, r1, r0
        246d08:	13300000 	teqne	r0, #0	; 0x0
        246d0c:	03a07004 	moveq	r7, #4	; 0x4
        246d10:	13a07008 	movne	r7, #8	; 0x8
        246d14:	e28dd004 	add	sp, sp, #4	; 0x4
        246d18:	e1a0000d 	mov	r0, sp
        246d1c:	e3a01000 	mov	r1, #0	; 0x0
        246d20:	e1a0e00f 	mov	lr, pc
        246d24:	e59df000 	ldr	pc, [sp]
        246d28:	e28dd018 	add	sp, sp, #24	; 0x18
        246d2c:	e3390000 	teq	r9, #0	; 0x0
        246d30:	0a000009 	beq	246d5c <TXView::ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0xfc>
        246d34:	e1a03007 	mov	r3, r7
        246d38:	e92d0008 	stmdb	sp!, {r3}
        246d3c:	e1a03008 	mov	r3, r8
        246d40:	e1a02005 	mov	r2, r5
        246d44:	e1a00004 	mov	r0, r4
        246d48:	e3a01002 	mov	r1, #2	; 0x2
        246d4c:	eb655c55 	bl	1b9dea8 <TXView::$NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long)>
        246d50:	e28dd004 	add	sp, sp, #4	; 0x4
        246d54:	ea000015 	b	246db0 <TXView::ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0x150>
        246d58:	66616365 	strvsbt	r6, [r1], -r5, ror #6
        246d5c:	e59f0050 	ldr	r0, [pc, #50]	; 246db4 <TXView::ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0x154>
        246d60:	e5900000 	ldr	r0, [r0]
        246d64:	eb61163f 	bl	1a8c668 <TApplication::$ClearUndo(void)>
        246d68:	e1a03007 	mov	r3, r7
        246d6c:	e1a02008 	mov	r2, r8
        246d70:	e1a01005 	mov	r1, r5
        246d74:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246d78:	eb65649d 	bl	1b9fff4 <Textension::$UpdateRangeRuns(TXOffsetRange const &, TXAttrValues const *, long)>
        246d7c:	e1b00008 	movs	r0, r8
        246d80:	0a000002 	beq	246d90 <TXView::ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0x130>
        246d84:	e3a01001 	mov	r1, #1	; 0x1
        246d88:	e1a0e00f 	mov	lr, pc
        246d8c:	e590f000 	ldr	pc, [r0]
        246d90:	e594004c 	ldr	r0, [r4, #76]	; fField76
        246d94:	e3800002 	orr	r0, r0, #2	; 0x2
        246d98:	e584004c 	str	r0, [r4, #76]	; fField76
        246d9c:	e1a00004 	mov	r0, r4
        246da0:	e3a03001 	mov	r3, #1	; 0x1
        246da4:	e3a02000 	mov	r2, #0	; 0x0
        246da8:	e3a01001 	mov	r1, #1	; 0x1
        246dac:	eb655c3b 	bl	1b9dea0 <TXView::$Edited(unsigned char, unsigned char, unsigned char)>
        246db0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        246db4:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TXView::ChangeRangeRulers(TXOffsetRange const &, RefVar const &, unsigned char)
 * Address: 00246db8
 */
TXView::ChangeRangeRulers(TXOffsetRange const &, RefVar const &, unsigned char) {
    /*
        246db8:	e1a0c00d 	mov	ip, sp
        246dbc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        246dc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        246dc4:	e1a04000 	mov	r4, r0
        246dc8:	e1a05001 	mov	r5, r1
        246dcc:	e20370ff 	and	r7, r3, #255	; 0xff
        246dd0:	e5d0005c 	ldrb	r0, [r0, #92]	; fField92
        246dd4:	e3300000 	teq	r0, #0	; 0x0
        246dd8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        246ddc:	e1a00002 	mov	r0, r2
        246de0:	eb64f92d 	bl	1b8529c <$TXGetRulerAttrValues(RefVar const &)>
        246de4:	e1a06000 	mov	r6, r0
        246de8:	e3370000 	teq	r7, #0	; 0x0
        246dec:	0a000007 	beq	246e10 <TXView::ChangeRangeRulers(TXOffsetRange const &, RefVar const &, unsigned char)+0x58>
        246df0:	e3a03000 	mov	r3, #0	; 0x0
        246df4:	e92d0008 	stmdb	sp!, {r3}
        246df8:	e1a03006 	mov	r3, r6
        246dfc:	e1a02005 	mov	r2, r5
        246e00:	e1a00004 	mov	r0, r4
        246e04:	e3a01003 	mov	r1, #3	; 0x3
        246e08:	eb655c26 	bl	1b9dea8 <TXView::$NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long)>
        246e0c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        246e10:	e59f005c 	ldr	r0, [pc, #5c]	; 246e74 <TXView::ChangeRangeRulers(TXOffsetRange const &, RefVar const &, unsigned char)+0xbc>
        246e14:	e5900000 	ldr	r0, [r0]
        246e18:	eb611612 	bl	1a8c668 <TApplication::$ClearUndo(void)>
        246e1c:	e1a02006 	mov	r2, r6
        246e20:	e1a01005 	mov	r1, r5
        246e24:	e3a03000 	mov	r3, #0	; 0x0
        246e28:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246e2c:	eb656472 	bl	1b9fffc <Textension::$UpdateRangeRulers(TXOffsetRange const &, TXAttrValues const *, long)>
        246e30:	e1b00006 	movs	r0, r6
        246e34:	0a000002 	beq	246e44 <TXView::ChangeRangeRulers(TXOffsetRange const &, RefVar const &, unsigned char)+0x8c>
        246e38:	e3a01001 	mov	r1, #1	; 0x1
        246e3c:	e1a0e00f 	mov	lr, pc
        246e40:	e590f000 	ldr	pc, [r0]
        246e44:	e594004c 	ldr	r0, [r4, #76]	; fField76
        246e48:	e3800002 	orr	r0, r0, #2	; 0x2
        246e4c:	e584004c 	str	r0, [r4, #76]	; fField76
        246e50:	e1a00004 	mov	r0, r4
        246e54:	e3a03001 	mov	r3, #1	; 0x1
        246e58:	e3a02000 	mov	r2, #0	; 0x0
        246e5c:	e3a01001 	mov	r1, #1	; 0x1
        246e60:	eb655c0e 	bl	1b9dea0 <TXView::$Edited(unsigned char, unsigned char, unsigned char)>
        246e64:	e1a00004 	mov	r0, r4
        246e68:	e3a01001 	mov	r1, #1	; 0x1
        246e6c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        246e70:	ea6553c3 	b	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
        246e74:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TXView::Edited(unsigned char, unsigned char, unsigned char)
 * Address: 00246e78
 */
TXView::Edited(unsigned char, unsigned char, unsigned char) {
    /*
        246e78:	e1a0c00d 	mov	ip, sp
        246e7c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        246e80:	e24cb004 	sub	fp, ip, #4	; 0x4
        246e84:	e1a04000 	mov	r4, r0
        246e88:	e20160ff 	and	r6, r1, #255	; 0xff
        246e8c:	e20270ff 	and	r7, r2, #255	; 0xff
        246e90:	e21350ff 	ands	r5, r3, #255	; 0xff
        246e94:	1594004c 	ldrne	r0, [r4, #76]	; fField76
        246e98:	12000001 	andne	r0, r0, #1	; 0x1
        246e9c:	13300000 	teqne	r0, #0	; 0x0
        246ea0:	0a000009 	beq	246ecc <TXView::Edited(unsigned char, unsigned char, unsigned char)+0x54>
        246ea4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246ea8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        246eac:	e5900008 	ldr	r0, [r0, #8]	; fField8
        246eb0:	e5901000 	ldr	r1, [r0]
        246eb4:	e1a0e00f 	mov	lr, pc
        246eb8:	e281f01c 	add	pc, r1, #28	; 0x1c
        246ebc:	e5941050 	ldr	r1, [r4, #80]	; fField80
        246ec0:	e1310000 	teq	r1, r0
        246ec4:	15840050 	strne	r0, [r4, #80]	; fField80
        246ec8:	03a05000 	moveq	r5, #0	; 0x0
        246ecc:	e3360000 	teq	r6, #0	; 0x0
        246ed0:	0a00000a 	beq	246f00 <TXView::Edited(unsigned char, unsigned char, unsigned char)+0x88>
        246ed4:	e24dd008 	sub	sp, sp, #8	; 0x8
        246ed8:	e1a02007 	mov	r2, r7
        246edc:	e5940030 	ldr	r0, [r4, #48]	; fField48
        246ee0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        246ee4:	e1a0100d 	mov	r1, sp
        246ee8:	eb6511bf 	bl	1b8b5ec <TXDisplay::$IsHiliteVisible(TXLongPoint *, unsigned char)>
        246eec:	e3300000 	teq	r0, #0	; 0x0
        246ef0:	01a0100d 	moveq	r1, sp
        246ef4:	01a00004 	moveq	r0, r4
        246ef8:	0b6553a3 	bleq	1b9bd8c <TXView::$Scroll(TXLongPoint *)>
        246efc:	e28dd008 	add	sp, sp, #8	; 0x8
        246f00:	e3350000 	teq	r5, #0	; 0x0
        246f04:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        246f08:	e1a00004 	mov	r0, r4
        246f0c:	e3a02000 	mov	r2, #0	; 0x0
        246f10:	e3a01001 	mov	r1, #1	; 0x1
        246f14:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        246f18:	ea655be1 	b	1b9dea4 <TXView::$UpdateScrollers(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TXView::UpdateScrollers(unsigned char, unsigned char)
 * Address: 00246f1c
 */
TXView::UpdateScrollers(unsigned char, unsigned char) {
    /*
        246f1c:	e1a0c00d 	mov	ip, sp
        246f20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        246f24:	e24cb004 	sub	fp, ip, #4	; 0x4
        246f28:	e1a04000 	mov	r4, r0
        246f2c:	e20150ff 	and	r5, r1, #255	; 0xff
        246f30:	e20260ff 	and	r6, r2, #255	; 0xff
        246f34:	e590004c 	ldr	r0, [r0, #76]	; fField76
        246f38:	e3100001 	tst	r0, #1	; 0x1
        246f3c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        246f40:	e24dd004 	sub	sp, sp, #4	; 0x4
        246f44:	e3a00002 	mov	r0, #2	; 0x2
        246f48:	eb615393 	bl	1a9bd9c <$MakeArray(long)>
        246f4c:	eb65ec7e 	bl	1bc214c <$AllocateRefHandle(long)>
        246f50:	e3350000 	teq	r5, #0	; 0x0
        246f54:	e58d0000 	str	r0, [sp]
        246f58:	03a00002 	moveq	r0, #2	; 0x2
        246f5c:	13a0001a 	movne	r0, #26	; 0x1a
        246f60:	eb65ec79 	bl	1bc214c <$AllocateRefHandle(long)>
        246f64:	e1a05000 	mov	r5, r0
        246f68:	e5902000 	ldr	r2, [r0]
        246f6c:	e59d0000 	ldr	r0, [sp]
        246f70:	e5900000 	ldr	r0, [r0]
        246f74:	e3a01000 	mov	r1, #0	; 0x0
        246f78:	eb65fcf6 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        246f7c:	e1a00005 	mov	r0, r5
        246f80:	eb65f08d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        246f84:	e3360000 	teq	r6, #0	; 0x0
        246f88:	03a00002 	moveq	r0, #2	; 0x2
        246f8c:	13a0001a 	movne	r0, #26	; 0x1a
        246f90:	eb65ec6d 	bl	1bc214c <$AllocateRefHandle(long)>
        246f94:	e1a05000 	mov	r5, r0
        246f98:	e5902000 	ldr	r2, [r0]
        246f9c:	e59d0000 	ldr	r0, [sp]
        246fa0:	e5900000 	ldr	r0, [r0]
        246fa4:	e3a01001 	mov	r1, #1	; 0x1
        246fa8:	eb65fcea 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        246fac:	e1a00005 	mov	r0, r5
        246fb0:	eb65f081 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        246fb4:	e3a03000 	mov	r3, #0	; 0x0
        246fb8:	e92d0008 	stmdb	sp!, {r3}
        246fbc:	e28d2004 	add	r2, sp, #4	; 0x4
        246fc0:	e59f1010 	ldr	r1, [pc, #10]	; 246fd8 <TXView::UpdateScrollers(unsigned char, unsigned char)+0xbc>
        246fc4:	e1a00004 	mov	r0, r4
        246fc8:	eb661184 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        246fcc:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        246fd0:	eb65f079 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        246fd4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        246fd8:	00685100 	rsbeq	r5, r8, r0, lsl #2
    */
}

/**
 * Symbol: TXView::NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long)
 * Address: 00246fdc
 */
TXView::NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long) {
    /*
        246fdc:	e1a0c00d 	mov	ip, sp
        246fe0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        246fe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        246fe8:	e1a04000 	mov	r4, r0
        246fec:	e1a07001 	mov	r7, r1
        246ff0:	e1a06002 	mov	r6, r2
        246ff4:	e1a05003 	mov	r5, r3
        246ff8:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        246ffc:	e24dd010 	sub	sp, sp, #16	; 0x10
        247000:	e5900030 	ldr	r0, [r0, #48]	; fField48
        247004:	e5900014 	ldr	r0, [r0, #20]	; fField20
        247008:	e1a0100d 	mov	r1, sp
        24700c:	eb65261a 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        247010:	e59d0000 	ldr	r0, [sp]
        247014:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        247018:	e0410000 	sub	r0, r1, r0
        24701c:	e3500c02 	cmp	r0, #512	; 0x200
        247020:	c3a00033 	movgt	r0, #51	; 0x33
        247024:	cb61f476 	blgt	1ac4204 <$BusyBoxSend(long)>
        247028:	e24dd008 	sub	sp, sp, #8	; 0x8
        24702c:	e59f107c 	ldr	r1, [pc, #7c]	; 2470b0 <TXView::NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long)+0xd4>
        247030:	e3a03000 	mov	r3, #0	; 0x0
        247034:	e3a02000 	mov	r2, #0	; 0x0
        247038:	e3a00068 	mov	r0, #104	; 0x68
        24703c:	eb606819 	bl	1a610a8 <$AllocateFramesCObject__FlPFPv_vN22>
        247040:	eb65ec41 	bl	1bc214c <$AllocateRefHandle(long)>
        247044:	e58d0004 	str	r0, [sp, #4]	; fField4
        247048:	e5900000 	ldr	r0, [r0]
        24704c:	eb65ec42 	bl	1bc215c <$BinaryData(long)>
        247050:	e1b08000 	movs	r8, r0
        247054:	11a00008 	movne	r0, r8
        247058:	1b6504f1 	blne	1b88424 <TXEditCommand::$__ct(void)>
        24705c:	e1a00008 	mov	r0, r8
        247060:	e1a0300d 	mov	r3, sp
        247064:	e1a02006 	mov	r2, r6
        247068:	e1a01009 	mov	r1, r9
        24706c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        247070:	e1a03005 	mov	r3, r5
        247074:	e1a02007 	mov	r2, r7
        247078:	e5941030 	ldr	r1, [r4, #48]	; fField48
        24707c:	eb6504ea 	bl	1b8842c <TXEditCommand::$ITXEditCommand(Textension *, int, TXAttrValues *, long, TXOffsetRange const &, unsigned char *)>
        247080:	e1a01000 	mov	r1, r0
        247084:	e5fd000c 	ldrb	r0, [sp, #12]!	; fField12
        247088:	e3300000 	teq	r0, #0	; 0x0
        24708c:	13a010e9 	movne	r1, #233	; 0xe9
        247090:	12411b0a 	subne	r1, r1, #10240	; 0x2800
        247094:	1a000006 	bne	2470b4 <TXView::NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long)+0xd8>
        247098:	e3310000 	teq	r1, #0	; 0x0
        24709c:	1a000004 	bne	2470b4 <TXView::NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long)+0xd8>
        2470a0:	e28d1004 	add	r1, sp, #4	; 0x4
        2470a4:	e1a00004 	mov	r0, r4
        2470a8:	eb655b85 	bl	1b9dec4 <TXView::$ExecuteCommand(RefVar const &)>
        2470ac:	ea000004 	b	2470c4 <TXView::NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long)+0xe8>
        2470b0:	01b9ce5c 	moveqs	ip, ip, asr lr
        2470b4:	e59f0014 	ldr	r0, [pc, #14]	; 2470d0 <TXView::NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long)+0xf4>
        2470b8:	e5900000 	ldr	r0, [r0]
        2470bc:	e3a02000 	mov	r2, #0	; 0x0
        2470c0:	eb667035 	bl	1be319c <$Throw>
        2470c4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2470c8:	eb65f03b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2470cc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2470d0:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TXView::KeyString(unsigned short *, long)
 * Address: 002470d4
 */
TXView::KeyString(unsigned short *, long) {
    /*
        2470d4:	e3320000 	teq	r2, #0	; 0x0
        2470d8:	01a0f00e 	moveq	pc, lr
        2470dc:	e1a0c00d 	mov	ip, sp
        2470e0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2470e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2470e8:	e1a0c002 	mov	ip, r2
        2470ec:	e3a03001 	mov	r3, #1	; 0x1
        2470f0:	e3a02000 	mov	r2, #0	; 0x0
        2470f4:	e92d000c 	stmdb	sp!, {r2, r3}
        2470f8:	e1a0200c 	mov	r2, ip
        2470fc:	e3a03003 	mov	r3, #3	; 0x3
        247100:	eb655b6d 	bl	1b9debc <TXView::$NewKey(unsigned short const *, long, int, long, unsigned char)>
        247104:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXView::NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)
 * Address: 00247108
 */
TXView::NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *) {
    /*
        247108:	e1a0c00d 	mov	ip, sp
        24710c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        247110:	e24cb004 	sub	fp, ip, #4	; 0x4
        247114:	e1a04000 	mov	r4, r0
        247118:	e1a06001 	mov	r6, r1
        24711c:	e1a05002 	mov	r5, r2
        247120:	e24dd008 	sub	sp, sp, #8	; 0x8
        247124:	e59f1084 	ldr	r1, [pc, #84]	; 2471b0 <TXView::NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)+0xa8>	; fField84
        247128:	e3a03000 	mov	r3, #0	; 0x0
        24712c:	e3a02000 	mov	r2, #0	; 0x0
        247130:	e3a0007c 	mov	r0, #124	; 0x7c
        247134:	eb6067db 	bl	1a610a8 <$AllocateFramesCObject__FlPFPv_vN22>
        247138:	eb65ec03 	bl	1bc214c <$AllocateRefHandle(long)>
        24713c:	e58d0004 	str	r0, [sp, #4]	; fField4
        247140:	e5900000 	ldr	r0, [r0]
        247144:	eb65ec04 	bl	1bc215c <$BinaryData(long)>
        247148:	e1b08000 	movs	r8, r0
        24714c:	0a000004 	beq	247164 <TXView::NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)+0x5c>
        247150:	e1a07008 	mov	r7, r8
        247154:	e1a00008 	mov	r0, r8
        247158:	eb6504b1 	bl	1b88424 <TXEditCommand::$__ct(void)>
        24715c:	e59f0050 	ldr	r0, [pc, #50]	; 2471b4 <TXView::NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)+0xac>
        247160:	e5870000 	str	r0, [r7]
        247164:	e1a00008 	mov	r0, r8
        247168:	e1a0300d 	mov	r3, sp
        24716c:	e92d0008 	stmdb	sp!, {r3}
        247170:	e1a03005 	mov	r3, r5
        247174:	e1a02006 	mov	r2, r6
        247178:	e5941030 	ldr	r1, [r4, #48]	; fField48
        24717c:	eb6508c7 	bl	1b894a0 <TXReplaceTextCommand::$ITXReplaceTextCommand(Textension *, TXOffsetRange const &, TXReplaceParams *, unsigned char *)>
        247180:	e1a01000 	mov	r1, r0
        247184:	e5fd0004 	ldrb	r0, [sp, #4]!	; fField4
        247188:	e3300000 	teq	r0, #0	; 0x0
        24718c:	13a010e9 	movne	r1, #233	; 0xe9
        247190:	12411b0a 	subne	r1, r1, #10240	; 0x2800
        247194:	1a000007 	bne	2471b8 <TXView::NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)+0xb0>
        247198:	e3310000 	teq	r1, #0	; 0x0
        24719c:	1a000005 	bne	2471b8 <TXView::NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)+0xb0>
        2471a0:	e28d1004 	add	r1, sp, #4	; 0x4
        2471a4:	e1a00004 	mov	r0, r4
        2471a8:	eb655b45 	bl	1b9dec4 <TXView::$ExecuteCommand(RefVar const &)>
        2471ac:	ea000005 	b	2471c8 <TXView::NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)+0xc0>
        2471b0:	01b9ce5c 	moveqs	ip, ip, asr lr
        2471b4:	0001f068 	andeq	pc, r1, r8, rrx
        2471b8:	e59f0014 	ldr	r0, [pc, #14]	; 2471d4 <TXView::NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)+0xcc>
        2471bc:	e5900000 	ldr	r0, [r0]
        2471c0:	e3a02000 	mov	r2, #0	; 0x0
        2471c4:	eb666ff4 	bl	1be319c <$Throw>
        2471c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2471cc:	eb65effa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2471d0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2471d4:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TXView::NewPasteCommand(void)
 * Address: 002471d8
 */
TXView::NewPasteCommand(void) {
    /*
        2471d8:	e1a0c00d 	mov	ip, sp
        2471dc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2471e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2471e4:	e1a04000 	mov	r4, r0
        2471e8:	e24dd014 	sub	sp, sp, #20	; 0x14
        2471ec:	e59f1098 	ldr	r1, [pc, #98]	; 24728c <TXView::NewPasteCommand(void)+0xb4>
        2471f0:	e3a03000 	mov	r3, #0	; 0x0
        2471f4:	e3a02000 	mov	r2, #0	; 0x0
        2471f8:	e3a0007c 	mov	r0, #124	; 0x7c
        2471fc:	eb6067a9 	bl	1a610a8 <$AllocateFramesCObject__FlPFPv_vN22>
        247200:	eb65ebd1 	bl	1bc214c <$AllocateRefHandle(long)>
        247204:	e58d0010 	str	r0, [sp, #16]	; fField16
        247208:	e5900000 	ldr	r0, [r0]
        24720c:	eb65ebd2 	bl	1bc215c <$BinaryData(long)>
        247210:	e1b06000 	movs	r6, r0
        247214:	0a000004 	beq	24722c <TXView::NewPasteCommand(void)+0x54>
        247218:	e1a05006 	mov	r5, r6
        24721c:	e1a00006 	mov	r0, r6
        247220:	eb65047f 	bl	1b88424 <TXEditCommand::$__ct(void)>
        247224:	e59f0064 	ldr	r0, [pc, #64]	; 247290 <TXView::NewPasteCommand(void)+0xb8>	; fField64
        247228:	e5850000 	str	r0, [r5]
        24722c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        247230:	e5900014 	ldr	r0, [r0, #20]	; fField20
        247234:	e1a0100d 	mov	r1, sp
        247238:	eb65258f 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        24723c:	e24dd004 	sub	sp, sp, #4	; 0x4
        247240:	e1a0300d 	mov	r3, sp
        247244:	e5941030 	ldr	r1, [r4, #48]	; fField48
        247248:	e92d0008 	stmdb	sp!, {r3}
        24724c:	e28d2008 	add	r2, sp, #8	; 0x8
        247250:	e1a00006 	mov	r0, r6
        247254:	e3a03000 	mov	r3, #0	; 0x0
        247258:	eb650890 	bl	1b894a0 <TXReplaceTextCommand::$ITXReplaceTextCommand(Textension *, TXOffsetRange const &, TXReplaceParams *, unsigned char *)>
        24725c:	e1a01000 	mov	r1, r0
        247260:	e5fd0004 	ldrb	r0, [sp, #4]!	; fField4
        247264:	e3300000 	teq	r0, #0	; 0x0
        247268:	13a010e9 	movne	r1, #233	; 0xe9
        24726c:	12411b0a 	subne	r1, r1, #10240	; 0x2800
        247270:	1a000007 	bne	247294 <TXView::NewPasteCommand(void)+0xbc>
        247274:	e3310000 	teq	r1, #0	; 0x0
        247278:	1a000005 	bne	247294 <TXView::NewPasteCommand(void)+0xbc>
        24727c:	e28d1014 	add	r1, sp, #20	; 0x14
        247280:	e1a00004 	mov	r0, r4
        247284:	eb655b0e 	bl	1b9dec4 <TXView::$ExecuteCommand(RefVar const &)>
        247288:	ea000005 	b	2472a4 <TXView::NewPasteCommand(void)+0xcc>
        24728c:	01b9ce5c 	moveqs	ip, ip, asr lr
        247290:	0001ebac 	andeq	lr, r1, ip, lsr #23
        247294:	e59f0018 	ldr	r0, [pc, #18]	; 2472b4 <TXView::NewPasteCommand(void)+0xdc>
        247298:	e5900000 	ldr	r0, [r0]
        24729c:	e3a02000 	mov	r2, #0	; 0x0
        2472a0:	eb666fbd 	bl	1be319c <$Throw>
        2472a4:	e28dd004 	add	sp, sp, #4	; 0x4
        2472a8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2472ac:	eb65efc2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2472b0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2472b4:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TXView::NewMoveTextCommand(TXOffsetRange const &, TXOffset const &, unsigned char)
 * Address: 002472b8
 */
TXView::NewMoveTextCommand(TXOffsetRange const &, TXOffset const &, unsigned char) {
    /*
        2472b8:	e1a0c00d 	mov	ip, sp
        2472bc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2472c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2472c4:	e1a04000 	mov	r4, r0
        2472c8:	e1a06001 	mov	r6, r1
        2472cc:	e1a05002 	mov	r5, r2
        2472d0:	e20390ff 	and	r9, r3, #255	; 0xff
        2472d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2472d8:	e59f107c 	ldr	r1, [pc, #7c]	; 24735c <TXView::NewMoveTextCommand(TXOffsetRange const &, TXOffset const &, unsigned char)+0xa4>
        2472dc:	e3a03000 	mov	r3, #0	; 0x0
        2472e0:	e3a02000 	mov	r2, #0	; 0x0
        2472e4:	e3a00084 	mov	r0, #132	; 0x84
        2472e8:	eb60676e 	bl	1a610a8 <$AllocateFramesCObject__FlPFPv_vN22>
        2472ec:	eb65eb96 	bl	1bc214c <$AllocateRefHandle(long)>
        2472f0:	e58d0000 	str	r0, [sp]
        2472f4:	e5900000 	ldr	r0, [r0]
        2472f8:	eb65eb97 	bl	1bc215c <$BinaryData(long)>
        2472fc:	e1b07000 	movs	r7, r0
        247300:	0a000004 	beq	247318 <TXView::NewMoveTextCommand(TXOffsetRange const &, TXOffset const &, unsigned char)+0x60>
        247304:	e1a08007 	mov	r8, r7
        247308:	e1a00007 	mov	r0, r7
        24730c:	eb650444 	bl	1b88424 <TXEditCommand::$__ct(void)>
        247310:	e59f0048 	ldr	r0, [pc, #48]	; 247360 <TXView::NewMoveTextCommand(TXOffsetRange const &, TXOffset const &, unsigned char)+0xa8>	; fField48
        247314:	e5880000 	str	r0, [r8]
        247318:	e1a00007 	mov	r0, r7
        24731c:	e1a03009 	mov	r3, r9
        247320:	e92d0008 	stmdb	sp!, {r3}
        247324:	e24dd008 	sub	sp, sp, #8	; 0x8
        247328:	e8955000 	ldmia	r5, {ip, lr}
        24732c:	e88d5000 	stmia	sp, {ip, lr}
        247330:	e1a02006 	mov	r2, r6
        247334:	e5941030 	ldr	r1, [r4, #48]	; fField48
        247338:	e49d3004 	ldr	r3, [sp], #4	; fField4
        24733c:	eb650852 	bl	1b8948c <TXMoveTextCommand::$ITXMoveTextCommand(Textension *, TXOffsetRange const &, TXOffset, unsigned char)>
        247340:	e28dd008 	add	sp, sp, #8	; 0x8
        247344:	e3300000 	teq	r0, #0	; 0x0
        247348:	1a000005 	bne	247364 <TXView::NewMoveTextCommand(TXOffsetRange const &, TXOffset const &, unsigned char)+0xac>
        24734c:	e1a0100d 	mov	r1, sp
        247350:	e1a00004 	mov	r0, r4
        247354:	eb655ada 	bl	1b9dec4 <TXView::$ExecuteCommand(RefVar const &)>
        247358:	ea000006 	b	247378 <TXView::NewMoveTextCommand(TXOffsetRange const &, TXOffset const &, unsigned char)+0xc0>
        24735c:	01b9ce5c 	moveqs	ip, ip, asr lr
        247360:	0001e9e0 	andeq	lr, r1, r0, ror #19
        247364:	e1a01000 	mov	r1, r0
        247368:	e59f0014 	ldr	r0, [pc, #14]	; 247384 <TXView::NewMoveTextCommand(TXOffsetRange const &, TXOffset const &, unsigned char)+0xcc>
        24736c:	e5900000 	ldr	r0, [r0]
        247370:	e3a02000 	mov	r2, #0	; 0x0
        247374:	eb666f88 	bl	1be319c <$Throw>
        247378:	e59d0000 	ldr	r0, [sp]
        24737c:	eb65ef8e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        247380:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        247384:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TXView::GetCurrentKeyCommand(void)
 * Address: 00247388
 */
TXView::GetCurrentKeyCommand(void) {
    /*
        247388:	e1a0c00d 	mov	ip, sp
        24738c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        247390:	e24cb004 	sub	fp, ip, #4	; 0x4
        247394:	e2800054 	add	r0, r0, #84	; 0x54
        247398:	e1a06000 	mov	r6, r0
        24739c:	e5900000 	ldr	r0, [r0]
        2473a0:	e5900000 	ldr	r0, [r0]
        2473a4:	e3a08000 	mov	r8, #0	; 0x0
        2473a8:	e3300002 	teq	r0, #2	; 0x2
        2473ac:	0a000023 	beq	247440 <TXView::GetCurrentKeyCommand(void)+0xb8>
        2473b0:	e59f007c 	ldr	r0, [pc, #7c]	; 247434 <TXView::GetCurrentKeyCommand(void)+0xac>
        2473b4:	e5900000 	ldr	r0, [r0]
        2473b8:	e3a01000 	mov	r1, #0	; 0x0
        2473bc:	eb625283 	bl	1adbdd0 <TApplication::$GetUndoStack(long)>
        2473c0:	eb65eb61 	bl	1bc214c <$AllocateRefHandle(long)>
        2473c4:	e1a04000 	mov	r4, r0
        2473c8:	e5900000 	ldr	r0, [r0]
        2473cc:	eb65f7b6 	bl	1bc52ac <$Length(long)>
        2473d0:	e3300000 	teq	r0, #0	; 0x0
        2473d4:	0a000017 	beq	247438 <TXView::GetCurrentKeyCommand(void)+0xb0>
        2473d8:	e2401001 	sub	r1, r0, #1	; 0x1
        2473dc:	e5940000 	ldr	r0, [r4]
        2473e0:	eb65f39b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2473e4:	eb65eb58 	bl	1bc214c <$AllocateRefHandle(long)>
        2473e8:	e1a05000 	mov	r5, r0
        2473ec:	e5960000 	ldr	r0, [r6]
        2473f0:	e5901000 	ldr	r1, [r0]
        2473f4:	e5950000 	ldr	r0, [r5]
        2473f8:	eb65f38c 	bl	1bc4230 <$EQRef__FlT1>
        2473fc:	e1b07000 	movs	r7, r0
        247400:	13a07001 	movne	r7, #1	; 0x1
        247404:	e1a00005 	mov	r0, r5
        247408:	eb65ef6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24740c:	e3370000 	teq	r7, #0	; 0x0
        247410:	0a000008 	beq	247438 <TXView::GetCurrentKeyCommand(void)+0xb0>
        247414:	e1a00006 	mov	r0, r6
        247418:	eb617bd0 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        24741c:	eb65eb4e 	bl	1bc215c <$BinaryData(long)>
        247420:	e1a05000 	mov	r5, r0
        247424:	e1a00004 	mov	r0, r4
        247428:	eb65ef63 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24742c:	e1a00005 	mov	r0, r5
        247430:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        247434:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        247438:	e1a00004 	mov	r0, r4
        24743c:	eb65ef5e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        247440:	e1a00008 	mov	r0, r8
        247444:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::NewKey(unsigned short const *, long, int, long, unsigned char)
 * Address: 00247448
 */
TXView::NewKey(unsigned short const *, long, int, long, unsigned char) {
    /*
        247448:	e1a0c00d 	mov	ip, sp
        24744c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        247450:	e24cb004 	sub	fp, ip, #4	; 0x4
        247454:	e1a04000 	mov	r4, r0
        247458:	e1a07001 	mov	r7, r1
        24745c:	e1a06002 	mov	r6, r2
        247460:	e1a05003 	mov	r5, r3
        247464:	e59b0008 	ldr	r0, [fp, #8]	; fField8
        247468:	e20000ff 	and	r0, r0, #255	; 0xff
        24746c:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        247470:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        247474:	e5d4005c 	ldrb	r0, [r4, #92]	; fField92
        247478:	e3300000 	teq	r0, #0	; 0x0
        24747c:	1a000001 	bne	247488 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x40>
        247480:	e3150001 	tst	r5, #1	; 0x1
        247484:	1a000000 	bne	24748c <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x44>
        247488:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        24748c:	e3150002 	tst	r5, #2	; 0x2
        247490:	0a000057 	beq	2475f4 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x1ac>
        247494:	e3a08001 	mov	r8, #1	; 0x1
        247498:	e594004c 	ldr	r0, [r4, #76]	; fField76
        24749c:	e3800002 	orr	r0, r0, #2	; 0x2
        2474a0:	e584004c 	str	r0, [r4, #76]	; fField76
        2474a4:	e1a00004 	mov	r0, r4
        2474a8:	eb655a82 	bl	1b9deb8 <TXView::$GetCurrentKeyCommand(void)>
        2474ac:	e3300000 	teq	r0, #0	; 0x0
        2474b0:	03a00002 	moveq	r0, #2	; 0x2
        2474b4:	0a000009 	beq	2474e0 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x98>
        2474b8:	e3a03000 	mov	r3, #0	; 0x0
        2474bc:	e1a02005 	mov	r2, r5
        2474c0:	e92d000c 	stmdb	sp!, {r2, r3}
        2474c4:	e1a0300a 	mov	r3, sl
        2474c8:	e1a02006 	mov	r2, r6
        2474cc:	e1a01007 	mov	r1, r7
        2474d0:	eb6503e7 	bl	1b88474 <TXKeyCommand::$NewKey(unsigned short const *, long, long, unsigned int, void *)>
        2474d4:	e28dd008 	add	sp, sp, #8	; 0x8
        2474d8:	e3300000 	teq	r0, #0	; 0x0
        2474dc:	0a00004f 	beq	247620 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x1d8>
        2474e0:	e2841054 	add	r1, r4, #84	; 0x54
        2474e4:	e3a02002 	mov	r2, #2	; 0x2
        2474e8:	e58d1004 	str	r1, [sp, #4]	; fField4
        2474ec:	e5911000 	ldr	r1, [r1]
        2474f0:	e5812000 	str	r2, [r1]
        2474f4:	e1100002 	tst	r0, r2
        2474f8:	0a000037 	beq	2475dc <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x194>
        2474fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        247500:	e59f10a8 	ldr	r1, [pc, #a8]	; 2475b0 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x168>
        247504:	e3a03000 	mov	r3, #0	; 0x0
        247508:	e3a02000 	mov	r2, #0	; 0x0
        24750c:	e3a00074 	mov	r0, #116	; 0x74
        247510:	eb6066e4 	bl	1a610a8 <$AllocateFramesCObject__FlPFPv_vN22>
        247514:	eb65eb0c 	bl	1bc214c <$AllocateRefHandle(long)>
        247518:	e58d0000 	str	r0, [sp]
        24751c:	e5900000 	ldr	r0, [r0]
        247520:	eb65eb0d 	bl	1bc215c <$BinaryData(long)>
        247524:	e1b09000 	movs	r9, r0
        247528:	11a00009 	movne	r0, r9
        24752c:	1b6503cc 	blne	1b88464 <TXKeyCommand::$__ct(void)>
        247530:	e24dd004 	sub	sp, sp, #4	; 0x4
        247534:	e1a0300d 	mov	r3, sp
        247538:	e1a02005 	mov	r2, r5
        24753c:	e92d000c 	stmdb	sp!, {r2, r3}
        247540:	e1a03006 	mov	r3, r6
        247544:	e1a02007 	mov	r2, r7
        247548:	e1a00009 	mov	r0, r9
        24754c:	e5941030 	ldr	r1, [r4, #48]	; fField48
        247550:	eb6503c4 	bl	1b88468 <TXKeyCommand::$ITXKeyCommand(Textension *, unsigned short const *, long, unsigned int, unsigned char *)>
        247554:	e5fd1008 	ldrb	r1, [sp, #8]!	; fField8
        247558:	e3310000 	teq	r1, #0	; 0x0
        24755c:	13a000e9 	movne	r0, #233	; 0xe9
        247560:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        247564:	1a000012 	bne	2475b4 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x16c>
        247568:	e3300000 	teq	r0, #0	; 0x0
        24756c:	1a000010 	bne	2475b4 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x16c>
        247570:	e3a03000 	mov	r3, #0	; 0x0
        247574:	e1a02005 	mov	r2, r5
        247578:	e92d000c 	stmdb	sp!, {r2, r3}
        24757c:	e1a0300a 	mov	r3, sl
        247580:	e1a02006 	mov	r2, r6
        247584:	e1a01007 	mov	r1, r7
        247588:	e1a00009 	mov	r0, r9
        24758c:	eb6503b8 	bl	1b88474 <TXKeyCommand::$NewKey(unsigned short const *, long, long, unsigned int, void *)>
        247590:	e28dd008 	add	sp, sp, #8	; 0x8
        247594:	e59d600c 	ldr	r6, [sp, #12]	; fField12
        247598:	e28d1004 	add	r1, sp, #4	; 0x4
        24759c:	e1a00004 	mov	r0, r4
        2475a0:	eb655a46 	bl	1b9dec0 <TXView::$PostUndo(RefVar const &)>
        2475a4:	e5961000 	ldr	r1, [r6]
        2475a8:	e5810000 	str	r0, [r1]
        2475ac:	ea000005 	b	2475c8 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x180>
        2475b0:	01b9ce5c 	moveqs	ip, ip, asr lr
        2475b4:	e1a01000 	mov	r1, r0
        2475b8:	e59f0018 	ldr	r0, [pc, #18]	; 2475d8 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x190>
        2475bc:	e5900000 	ldr	r0, [r0]
        2475c0:	e3a02000 	mov	r2, #0	; 0x0
        2475c4:	eb666ef4 	bl	1be319c <$Throw>
        2475c8:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2475cc:	eb65eefa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2475d0:	e28dd004 	add	sp, sp, #4	; 0x4
        2475d4:	ea000011 	b	247620 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x1d8>
        2475d8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        2475dc:	e3100001 	tst	r0, #1	; 0x1
        2475e0:	159f0008 	ldrne	r0, [pc, #8]	; 2475f0 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x1a8>	; fField8
        2475e4:	15900000 	ldrne	r0, [r0]
        2475e8:	1b61141e 	blne	1a8c668 <TApplication::$ClearUndo(void)>
        2475ec:	ea00000b 	b	247620 <TXView::NewKey(unsigned short const *, long, int, long, unsigned char)+0x1d8>
        2475f0:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        2475f4:	e1a03005 	mov	r3, r5
        2475f8:	e92d0008 	stmdb	sp!, {r3}
        2475fc:	e3a00001 	mov	r0, #1	; 0x1
        247600:	eb622cca 	bl	1ad2930 <$Modifiers(unsigned char)>
        247604:	e1a03000 	mov	r3, r0
        247608:	e1a02006 	mov	r2, r6
        24760c:	e1a01007 	mov	r1, r7
        247610:	e5940030 	ldr	r0, [r4, #48]	; fField48
        247614:	eb65626f 	bl	1b9ffd8 <Textension::$KeyDown(unsigned short const *, long, long, unsigned int)>
        247618:	e28dd004 	add	sp, sp, #4	; 0x4
        24761c:	e3a08000 	mov	r8, #0	; 0x0
        247620:	e5940034 	ldr	r0, [r4, #52]	; fField52
        247624:	e3300000 	teq	r0, #0	; 0x0
        247628:	12050018 	andne	r0, r5, #24	; 0x18
        24762c:	13300000 	teqne	r0, #0	; 0x0
        247630:	11a00004 	movne	r0, r4
        247634:	13a01001 	movne	r1, #1	; 0x1
        247638:	1b6551d1 	blne	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
        24763c:	e1a03008 	mov	r3, r8
        247640:	e1a00004 	mov	r0, r4
        247644:	e3a01001 	mov	r1, #1	; 0x1
        247648:	e59d2000 	ldr	r2, [sp]
        24764c:	eb655a13 	bl	1b9dea0 <TXView::$Edited(unsigned char, unsigned char, unsigned char)>
        247650:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::PostUndo(RefVar const &)
 * Address: 00247654
 */
TXView::PostUndo(RefVar const &) {
    /*
        247654:	e1a0c00d 	mov	ip, sp
        247658:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24765c:	e24cb004 	sub	fp, ip, #4	; 0x4
        247660:	e1a04001 	mov	r4, r1
        247664:	e3a02002 	mov	r2, #2	; 0x2
        247668:	e5901054 	ldr	r1, [r0, #84]	; fField84
        24766c:	e5812000 	str	r2, [r1]
        247670:	e24dd004 	sub	sp, sp, #4	; 0x4
        247674:	e1a01000 	mov	r1, r0
        247678:	e3a02302 	mov	r2, #134217728	; 0x8000000
        24767c:	e3a000d3 	mov	r0, #211	; 0xd3
        247680:	eb617b2e 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        247684:	eb65eab0 	bl	1bc214c <$AllocateRefHandle(long)>
        247688:	e1a01004 	mov	r1, r4
        24768c:	e58d0000 	str	r0, [sp]
        247690:	e1a0000d 	mov	r0, sp
        247694:	eb617b32 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        247698:	e1a0100d 	mov	r1, sp
        24769c:	e59f0018 	ldr	r0, [pc, #18]	; 2476bc <TXView::PostUndo(RefVar const &)+0x68>
        2476a0:	e5900000 	ldr	r0, [r0]
        2476a4:	eb615a14 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
        2476a8:	e59d0000 	ldr	r0, [sp]
        2476ac:	e5904000 	ldr	r4, [r0]
        2476b0:	eb65eec1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2476b4:	e1a00004 	mov	r0, r4
        2476b8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2476bc:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TXView::ExecuteCommand(RefVar const &)
 * Address: 002476c0
 */
TXView::ExecuteCommand(RefVar const &) {
    /*
        2476c0:	e1a0c00d 	mov	ip, sp
        2476c4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2476c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2476cc:	e1a04000 	mov	r4, r0
        2476d0:	e1a05001 	mov	r5, r1
        2476d4:	e5910000 	ldr	r0, [r1]
        2476d8:	e5900000 	ldr	r0, [r0]
        2476dc:	eb65ea9e 	bl	1bc215c <$BinaryData(long)>
        2476e0:	e1a06000 	mov	r6, r0
        2476e4:	e3a01000 	mov	r1, #0	; 0x0
        2476e8:	e3a00000 	mov	r0, #0	; 0x0
        2476ec:	eb6413c9 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        2476f0:	e3a00000 	mov	r0, #0	; 0x0
        2476f4:	e3a07000 	mov	r7, #0	; 0x0
        2476f8:	e52d006c 	str	r0, [sp, -#108]!
        2476fc:	e28d0008 	add	r0, sp, #8	; 0x8
        247700:	eb65ac9b 	bl	1bb2974 <$setjmp>
        247704:	e3300000 	teq	r0, #0	; 0x0
        247708:	1a00002c 	bne	2477c0 <TXView::ExecuteCommand(RefVar const &)+0x100>
        24770c:	e1a0000d 	mov	r0, sp
        247710:	eb666259 	bl	1be007c <$AddExceptionHandler>
        247714:	e24dd004 	sub	sp, sp, #4	; 0x4
        247718:	e1a0100d 	mov	r1, sp
        24771c:	e1a00006 	mov	r0, r6
        247720:	eb65033e 	bl	1b88420 <TXCommand::$Execute(int *)>
        247724:	e3300000 	teq	r0, #0	; 0x0
        247728:	1a00001a 	bne	247798 <TXView::ExecuteCommand(RefVar const &)+0xd8>
        24772c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        247730:	e3800002 	orr	r0, r0, #2	; 0x2
        247734:	e584004c 	str	r0, [r4, #76]	; fField76
        247738:	e5960008 	ldr	r0, [r6, #8]	; fField8
        24773c:	e3300001 	teq	r0, #1	; 0x1
        247740:	13300005 	teqne	r0, #5	; 0x5
        247744:	03a02001 	moveq	r2, #1	; 0x1
        247748:	13a02000 	movne	r2, #0	; 0x0
        24774c:	e1a00004 	mov	r0, r4
        247750:	e3a03001 	mov	r3, #1	; 0x1
        247754:	e3a01001 	mov	r1, #1	; 0x1
        247758:	eb6559d0 	bl	1b9dea0 <TXView::$Edited(unsigned char, unsigned char, unsigned char)>
        24775c:	e1a00004 	mov	r0, r4
        247760:	e3a01001 	mov	r1, #1	; 0x1
        247764:	eb655186 	bl	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
        247768:	e5d6000c 	ldrb	r0, [r6, #12]	; fField12
        24776c:	e3300000 	teq	r0, #0	; 0x0
        247770:	0a000003 	beq	247784 <TXView::ExecuteCommand(RefVar const &)+0xc4>
        247774:	e1a01005 	mov	r1, r5
        247778:	e1a00004 	mov	r0, r4
        24777c:	eb6559cf 	bl	1b9dec0 <TXView::$PostUndo(RefVar const &)>
        247780:	ea000009 	b	2477ac <TXView::ExecuteCommand(RefVar const &)+0xec>
        247784:	e59f0008 	ldr	r0, [pc, #8]	; 247794 <TXView::ExecuteCommand(RefVar const &)+0xd4>	; fField8
        247788:	e5900000 	ldr	r0, [r0]
        24778c:	eb6113b5 	bl	1a8c668 <TApplication::$ClearUndo(void)>
        247790:	ea000005 	b	2477ac <TXView::ExecuteCommand(RefVar const &)+0xec>
        247794:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        247798:	e1a01000 	mov	r1, r0
        24779c:	e59f0018 	ldr	r0, [pc, #18]	; 2477bc <TXView::ExecuteCommand(RefVar const &)+0xfc>
        2477a0:	e5900000 	ldr	r0, [r0]
        2477a4:	e3a02000 	mov	r2, #0	; 0x0
        2477a8:	eb666e7b 	bl	1be319c <$Throw>
        2477ac:	e28dd004 	add	sp, sp, #4	; 0x4
        2477b0:	e1a0000d 	mov	r0, sp
        2477b4:	eb66663f 	bl	1be10b8 <$ExitHandler>
        2477b8:	ea000001 	b	2477c4 <TXView::ExecuteCommand(RefVar const &)+0x104>
        2477bc:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        2477c0:	e3a07001 	mov	r7, #1	; 0x1
        2477c4:	e3a01000 	mov	r1, #0	; 0x0
        2477c8:	e3a00000 	mov	r0, #0	; 0x0
        2477cc:	eb641393 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        2477d0:	e3370000 	teq	r7, #0	; 0x0
        2477d4:	11a0000d 	movne	r0, sp
        2477d8:	1b666a5d 	blne	1be2154 <$NextHandler>
        2477dc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)
 * Address: 002477e0
 */
TXView::Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char) {
    /*
        2477e0:	e1a0c00d 	mov	ip, sp
        2477e4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2477e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2477ec:	e1a04000 	mov	r4, r0
        2477f0:	e1a05001 	mov	r5, r1
        2477f4:	e1a06002 	mov	r6, r2
        2477f8:	e20370ff 	and	r7, r3, #255	; 0xff
        2477fc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        247800:	e20080ff 	and	r8, r0, #255	; 0xff
        247804:	e1a00002 	mov	r0, r2
        247808:	eb66b060 	bl	1bf3990 <$IsFrame(RefVar const &)>
        24780c:	e3300000 	teq	r0, #0	; 0x0
        247810:	1a000005 	bne	24782c <TXView::Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0x4c>
        247814:	e59f0070 	ldr	r0, [pc, #70]	; 24788c <TXView::Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0xac>	; fField70
        247818:	e5900000 	ldr	r0, [r0]
        24781c:	e3a02000 	mov	r2, #0	; 0x0
        247820:	e3a01e2f 	mov	r1, #752	; 0x2f0
        247824:	e2411903 	sub	r1, r1, #49152	; 0xc000
        247828:	eb666e5b 	bl	1be319c <$Throw>
        24782c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        247830:	e5951000 	ldr	r1, [r5]
        247834:	e0402001 	sub	r2, r0, r1
        247838:	e1a01006 	mov	r1, r6
        24783c:	e1a00004 	mov	r0, r4
        247840:	eb6559a1 	bl	1b9decc <TXView::$CheckReplaceData(RefVar const &, long)>
        247844:	e24dd034 	sub	sp, sp, #52	; 0x34
        247848:	e1a01006 	mov	r1, r6
        24784c:	e28d0024 	add	r0, sp, #36	; 0x24
        247850:	eb652c38 	bl	1b92938 <TXNewtContainer::$__ct(RefVar const &)>
        247854:	e3380000 	teq	r8, #0	; 0x0
        247858:	03a00003 	moveq	r0, #3	; 0x3
        24785c:	13a00007 	movne	r0, #7	; 0x7
        247860:	e20020ff 	and	r2, r0, #255	; 0xff
        247864:	e28d1024 	add	r1, sp, #36	; 0x24
        247868:	e1a0000d 	mov	r0, sp
        24786c:	eb6561e5 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        247870:	e3370000 	teq	r7, #0	; 0x0
        247874:	0a000005 	beq	247890 <TXView::Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0xb0>
        247878:	e1a0200d 	mov	r2, sp
        24787c:	e1a01005 	mov	r1, r5
        247880:	e1a00004 	mov	r0, r4
        247884:	eb655988 	bl	1b9deac <TXView::$NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)>
        247888:	ea00001a 	b	2478f8 <TXView::Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0x118>
        24788c:	00371310 	eoreqs	r1, r7, r0, lsl r3
        247890:	e59f0070 	ldr	r0, [pc, #70]	; 247908 <TXView::Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0x128>	; fField70
        247894:	e5900000 	ldr	r0, [r0]
        247898:	eb611372 	bl	1a8c668 <TApplication::$ClearUndo(void)>
        24789c:	e4951008 	ldr	r1, [r5], #8	; fField8
        2478a0:	e5952000 	ldr	r2, [r5]
        2478a4:	e1a0300d 	mov	r3, sp
        2478a8:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2478ac:	eb6561c6 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        2478b0:	e3300000 	teq	r0, #0	; 0x0
        2478b4:	0a000004 	beq	2478cc <TXView::Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0xec>
        2478b8:	e1a01000 	mov	r1, r0
        2478bc:	e59f0048 	ldr	r0, [pc, #48]	; 24790c <TXView::Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)+0x12c>	; fField48
        2478c0:	e5900000 	ldr	r0, [r0]
        2478c4:	e3a02000 	mov	r2, #0	; 0x0
        2478c8:	eb666e33 	bl	1be319c <$Throw>
        2478cc:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2478d0:	e3800002 	orr	r0, r0, #2	; 0x2
        2478d4:	e584004c 	str	r0, [r4, #76]	; fField76
        2478d8:	e1a00004 	mov	r0, r4
        2478dc:	e3a03001 	mov	r3, #1	; 0x1
        2478e0:	e3a02001 	mov	r2, #1	; 0x1
        2478e4:	e3a01001 	mov	r1, #1	; 0x1
        2478e8:	eb65596c 	bl	1b9dea0 <TXView::$Edited(unsigned char, unsigned char, unsigned char)>
        2478ec:	e1a00004 	mov	r0, r4
        2478f0:	e3a01001 	mov	r1, #1	; 0x1
        2478f4:	eb655122 	bl	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
        2478f8:	e28d0024 	add	r0, sp, #36	; 0x24
        2478fc:	e3a01000 	mov	r1, #0	; 0x0
        247900:	eb652c0d 	bl	1b9293c <TXNewtContainer::$__dt(void)>
        247904:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        247908:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        24790c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TXView::CheckReplaceData(RefVar const &, long)
 * Address: 00247910
 */
TXView::CheckReplaceData(RefVar const &, long) {
    /*
        247910:	e1a0c00d 	mov	ip, sp
        247914:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        247918:	e24cb004 	sub	fp, ip, #4	; 0x4
        24791c:	e1a04001 	mov	r4, r1
        247920:	e1a08002 	mov	r8, r2
        247924:	e1a00001 	mov	r0, r1
        247928:	eb65ea0e 	bl	1bc2168 <$ClassOf(RefVar const &)>
        24792c:	eb65ea06 	bl	1bc214c <$AllocateRefHandle(long)>
        247930:	e1a05000 	mov	r5, r0
        247934:	e59f016c 	ldr	r0, [pc, #16c]	; 247aa8 <TXView::CheckReplaceData(RefVar const &, long)+0x198>	; fField16
        247938:	e5900000 	ldr	r0, [r0]
        24793c:	e5901000 	ldr	r1, [r0]
        247940:	e5950000 	ldr	r0, [r5]
        247944:	eb65f239 	bl	1bc4230 <$EQRef__FlT1>
        247948:	e1b06000 	movs	r6, r0
        24794c:	13a06001 	movne	r6, #1	; 0x1
        247950:	e1a00005 	mov	r0, r5
        247954:	eb65ee18 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        247958:	e3360000 	teq	r6, #0	; 0x0
        24795c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        247960:	e24dd004 	sub	sp, sp, #4	; 0x4
        247964:	e59f0140 	ldr	r0, [pc, #140]	; 247aac <TXView::CheckReplaceData(RefVar const &, long)+0x19c>
        247968:	e5900000 	ldr	r0, [r0]
        24796c:	e5901000 	ldr	r1, [r0]
        247970:	e5940000 	ldr	r0, [r4]
        247974:	e5900000 	ldr	r0, [r0]
        247978:	eb65f238 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        24797c:	eb65e9f2 	bl	1bc214c <$AllocateRefHandle(long)>
        247980:	e58d0000 	str	r0, [sp]
        247984:	e5900000 	ldr	r0, [r0]
        247988:	e3300002 	teq	r0, #2	; 0x2
        24798c:	0a00000b 	beq	2479c0 <TXView::CheckReplaceData(RefVar const &, long)+0xb0>
        247990:	e1a0000d 	mov	r0, sp
        247994:	eb65f640 	bl	1bc529c <$IsString(RefVar const &)>
        247998:	e3300000 	teq	r0, #0	; 0x0
        24799c:	01a0100d 	moveq	r1, sp
        2479a0:	03a000ee 	moveq	r0, #238	; 0xee
        2479a4:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2479a8:	0b6702ab 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2479ac:	e59d0000 	ldr	r0, [sp]
        2479b0:	e5900000 	ldr	r0, [r0]
        2479b4:	eb65f63c 	bl	1bc52ac <$Length(long)>
        2479b8:	e1a000a0 	mov	r0, r0, lsr #1
        2479bc:	e2408001 	sub	r8, r0, #1	; 0x1
        2479c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2479c4:	e59f00e4 	ldr	r0, [pc, #e4]	; 247ab0 <TXView::CheckReplaceData(RefVar const &, long)+0x1a0>
        2479c8:	e5900000 	ldr	r0, [r0]
        2479cc:	e5901000 	ldr	r1, [r0]
        2479d0:	e5940000 	ldr	r0, [r4]
        2479d4:	e5900000 	ldr	r0, [r0]
        2479d8:	eb65f220 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2479dc:	eb65e9da 	bl	1bc214c <$AllocateRefHandle(long)>
        2479e0:	e58d0000 	str	r0, [sp]
        2479e4:	e5900000 	ldr	r0, [r0]
        2479e8:	e3300002 	teq	r0, #2	; 0x2
        2479ec:	0a000028 	beq	247a94 <TXView::CheckReplaceData(RefVar const &, long)+0x184>
        2479f0:	e1a0000d 	mov	r0, sp
        2479f4:	eb66afe4 	bl	1bf398c <$IsArray(RefVar const &)>
        2479f8:	e3300000 	teq	r0, #0	; 0x0
        2479fc:	01a0100d 	moveq	r1, sp
        247a00:	059f00ac 	ldreq	r0, [pc, #ac]	; 247ab4 <TXView::CheckReplaceData(RefVar const &, long)+0x1a4>
        247a04:	0b670294 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        247a08:	e59d0000 	ldr	r0, [sp]
        247a0c:	e5900000 	ldr	r0, [r0]
        247a10:	eb65f625 	bl	1bc52ac <$Length(long)>
        247a14:	e1a05000 	mov	r5, r0
        247a18:	e3500000 	cmp	r0, #0	; 0x0
        247a1c:	e2000001 	and	r0, r0, #1	; 0x1
        247a20:	b2600000 	rsblt	r0, r0, #0	; 0x0
        247a24:	e59f708c 	ldr	r7, [pc, #8c]	; 247ab8 <TXView::CheckReplaceData(RefVar const &, long)+0x1a8>	; fField8
        247a28:	e59f408c 	ldr	r4, [pc, #8c]	; 247abc <TXView::CheckReplaceData(RefVar const &, long)+0x1ac>	; fField8
        247a2c:	e3300000 	teq	r0, #0	; 0x0
        247a30:	0a000003 	beq	247a44 <TXView::CheckReplaceData(RefVar const &, long)+0x134>
        247a34:	e3a02000 	mov	r2, #0	; 0x0
        247a38:	e1a01004 	mov	r1, r4
        247a3c:	e5970000 	ldr	r0, [r7]
        247a40:	eb666dd5 	bl	1be319c <$Throw>
        247a44:	e3a06000 	mov	r6, #0	; 0x0
        247a48:	e2555002 	subs	r5, r5, #2	; 0x2
        247a4c:	4a00000a 	bmi	247a7c <TXView::CheckReplaceData(RefVar const &, long)+0x16c>
        247a50:	e59d0000 	ldr	r0, [sp]
        247a54:	e5900000 	ldr	r0, [r0]
        247a58:	e1a01005 	mov	r1, r5
        247a5c:	eb65f1fc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        247a60:	e3100003 	tst	r0, #3	; 0x3
        247a64:	01a00140 	moveq	r0, r0, asr #2
        247a68:	0a000000 	beq	247a70 <TXView::CheckReplaceData(RefVar const &, long)+0x160>
        247a6c:	eb65e9aa 	bl	1bc211c <$_RINTError(long)>
        247a70:	e0806006 	add	r6, r0, r6
        247a74:	e2555002 	subs	r5, r5, #2	; 0x2
        247a78:	5afffff4 	bpl	247a50 <TXView::CheckReplaceData(RefVar const &, long)+0x140>
        247a7c:	e1360008 	teq	r6, r8
        247a80:	0a000003 	beq	247a94 <TXView::CheckReplaceData(RefVar const &, long)+0x184>
        247a84:	e3a02000 	mov	r2, #0	; 0x0
        247a88:	e1a01004 	mov	r1, r4
        247a8c:	e5970000 	ldr	r0, [r7]
        247a90:	eb666dc1 	bl	1be319c <$Throw>
        247a94:	e59d0000 	ldr	r0, [sp]
        247a98:	eb65edc7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        247a9c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        247aa0:	eb65edc5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        247aa4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        247aa8:	00683020 	rsbeq	r3, r8, r0, lsr #32
        247aac:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        247ab0:	00684930 	rsbeq	r4, r8, r0, lsr r9
        247ab4:	ffff42ef 	swinv	0x00ff42ef
        247ab8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        247abc:	ffffde03 	swinv	0x00ffde03
    */
}

/**
 * Symbol: TXView::ReplaceAll(unsigned short *, long, RefVar const &)
 * Address: 00247ac0
 */
TXView::ReplaceAll(unsigned short *, long, RefVar const &) {
    /*
        247ac0:	e1a0c00d 	mov	ip, sp
        247ac4:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        247ac8:	e24cb004 	sub	fp, ip, #4	; 0x4
        247acc:	e1a05000 	mov	r5, r0
        247ad0:	e1a06001 	mov	r6, r1
        247ad4:	e1a04002 	mov	r4, r2
        247ad8:	e24dd004 	sub	sp, sp, #4	; 0x4
        247adc:	e1a00001 	mov	r0, r1
        247ae0:	eb669b1e 	bl	1bee760 <$Ustrlen>
        247ae4:	e58d0000 	str	r0, [sp]
        247ae8:	e3300000 	teq	r0, #0	; 0x0
        247aec:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        247af0:	e3a00033 	mov	r0, #51	; 0x33
        247af4:	eb61f1c2 	bl	1ac4204 <$BusyBoxSend(long)>
        247af8:	e3a09000 	mov	r9, #0	; 0x0
        247afc:	e3e0a000 	mvn	sl, #0	; 0x0
        247b00:	e3e08000 	mvn	r8, #0	; 0x0
        247b04:	e59f00c8 	ldr	r0, [pc, #c8]	; 247bd4 <TXView::ReplaceAll(unsigned short *, long, RefVar const &)+0x114>
        247b08:	e5900000 	ldr	r0, [r0]
        247b0c:	eb6112d5 	bl	1a8c668 <TApplication::$ClearUndo(void)>
        247b10:	e24dd004 	sub	sp, sp, #4	; 0x4
        247b14:	e5950030 	ldr	r0, [r5, #48]	; fField48
        247b18:	e5907018 	ldr	r7, [r0, #24]
        247b1c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        247b20:	e58d0000 	str	r0, [sp]
        247b24:	e5970020 	ldr	r0, [r7, #32]	; fField32
        247b28:	e2400001 	sub	r0, r0, #1	; 0x1
        247b2c:	e5870020 	str	r0, [r7, #32]	; fField32
        247b30:	e59d0000 	ldr	r0, [sp]
        247b34:	eb650ea4 	bl	1b8b5cc <TXDisplay::$DisableDrawing(void)>
        247b38:	e24dd038 	sub	sp, sp, #56	; 0x38
        247b3c:	e28d0028 	add	r0, sp, #40	; 0x28
        247b40:	e51b102c 	ldr	r1, [fp, -#44]
        247b44:	eb652b7b 	bl	1b92938 <TXNewtContainer::$__ct(RefVar const &)>
        247b48:	e28d1028 	add	r1, sp, #40	; 0x28
        247b4c:	e28d0004 	add	r0, sp, #4	; 0x4
        247b50:	e3a02007 	mov	r2, #7	; 0x7
        247b54:	eb65612b 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        247b58:	e3a00000 	mov	r0, #0	; 0x0
        247b5c:	e58d0000 	str	r0, [sp]
        247b60:	e1a02004 	mov	r2, r4
        247b64:	e1a01006 	mov	r1, r6
        247b68:	e1a00005 	mov	r0, r5
        247b6c:	eb6554a6 	bl	1b9ce0c <TXView::$FindString(unsigned short *, long)>
        247b70:	e1b04000 	movs	r4, r0
        247b74:	4a000017 	bmi	247bd8 <TXView::ReplaceAll(unsigned short *, long, RefVar const &)+0x118>
        247b78:	e3580000 	cmp	r8, #0	; 0x0
        247b7c:	b1a08004 	movlt	r8, r4
        247b80:	e2899001 	add	r9, r9, #1	; 0x1
        247b84:	e59d003c 	ldr	r0, [sp, #60]	; fField60
        247b88:	e0842000 	add	r2, r4, r0
        247b8c:	e28d3004 	add	r3, sp, #4	; 0x4
        247b90:	e1a01004 	mov	r1, r4
        247b94:	e5950030 	ldr	r0, [r5, #48]	; fField48
        247b98:	eb65610b 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        247b9c:	e3300000 	teq	r0, #0	; 0x0
        247ba0:	1a00000c 	bne	247bd8 <TXView::ReplaceAll(unsigned short *, long, RefVar const &)+0x118>
        247ba4:	e35a0000 	cmp	sl, #0	; 0x0
        247ba8:	aa000007 	bge	247bcc <TXView::ReplaceAll(unsigned short *, long, RefVar const &)+0x10c>
        247bac:	e24dd010 	sub	sp, sp, #16	; 0x10
        247bb0:	e5950030 	ldr	r0, [r5, #48]	; fField48
        247bb4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        247bb8:	e1a0100d 	mov	r1, sp
        247bbc:	eb65232e 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        247bc0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        247bc4:	e040a004 	sub	sl, r0, r4
        247bc8:	e28dd010 	add	sp, sp, #16	; 0x10
        247bcc:	e084400a 	add	r4, r4, sl
        247bd0:	eaffffe2 	b	247b60 <TXView::ReplaceAll(unsigned short *, long, RefVar const &)+0xa0>
        247bd4:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        247bd8:	e5970020 	ldr	r0, [r7, #32]	; fField32
        247bdc:	e2800001 	add	r0, r0, #1	; 0x1
        247be0:	e5a70020 	str	r0, [r7, #32]!	; fField32
        247be4:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        247be8:	eb650e78 	bl	1b8b5d0 <TXDisplay::$EnableDrawing(void)>
        247bec:	e3390000 	teq	r9, #0	; 0x0
        247bf0:	0a00000f 	beq	247c34 <TXView::ReplaceAll(unsigned short *, long, RefVar const &)+0x174>
        247bf4:	e0443008 	sub	r3, r4, r8
        247bf8:	e1a02008 	mov	r2, r8
        247bfc:	e3a01000 	mov	r1, #0	; 0x0
        247c00:	e5950030 	ldr	r0, [r5, #48]	; fField48
        247c04:	eb6560e6 	bl	1b9ffa4 <Textension::$Format(unsigned char, long, long)>
        247c08:	e1a00005 	mov	r0, r5
        247c0c:	e3a03001 	mov	r3, #1	; 0x1
        247c10:	e3a02001 	mov	r2, #1	; 0x1
        247c14:	e3a01001 	mov	r1, #1	; 0x1
        247c18:	eb6558a0 	bl	1b9dea0 <TXView::$Edited(unsigned char, unsigned char, unsigned char)>
        247c1c:	e1a00005 	mov	r0, r5
        247c20:	e3a01001 	mov	r1, #1	; 0x1
        247c24:	eb655056 	bl	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
        247c28:	e595004c 	ldr	r0, [r5, #76]	; fField76
        247c2c:	e3800002 	orr	r0, r0, #2	; 0x2
        247c30:	e5a5004c 	str	r0, [r5, #76]!	; fField76
        247c34:	e59d0000 	ldr	r0, [sp]
        247c38:	e3300000 	teq	r0, #0	; 0x0
        247c3c:	0a000004 	beq	247c54 <TXView::ReplaceAll(unsigned short *, long, RefVar const &)+0x194>
        247c40:	e59d1000 	ldr	r1, [sp]
        247c44:	e59f001c 	ldr	r0, [pc, #1c]	; 247c68 <TXView::ReplaceAll(unsigned short *, long, RefVar const &)+0x1a8>
        247c48:	e5900000 	ldr	r0, [r0]
        247c4c:	e3a02000 	mov	r2, #0	; 0x0
        247c50:	eb666d51 	bl	1be319c <$Throw>
        247c54:	e28d0028 	add	r0, sp, #40	; 0x28
        247c58:	e3a01000 	mov	r1, #0	; 0x0
        247c5c:	eb652b36 	bl	1b9293c <TXNewtContainer::$__dt(void)>
        247c60:	e1a00009 	mov	r0, r9
        247c64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        247c68:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TXView::DoEditCommand(long)
 * Address: 00247c6c
 */
TXView::DoEditCommand(long) {
    /*
        247c6c:	e1a0c00d 	mov	ip, sp
        247c70:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        247c74:	e24cb004 	sub	fp, ip, #4	; 0x4
        247c78:	e3510004 	cmp	r1, #4	; 0x4
        247c7c:	908ff101 	addls	pc, pc, r1, lsl #2
        247c80:	ea000004 	b	247c98 <TXView::DoEditCommand(long)+0x2c>
        247c84:	ea000005 	b	247ca0 <TXView::DoEditCommand(long)+0x34>
        247c88:	ea000006 	b	247ca8 <TXView::DoEditCommand(long)+0x3c>
        247c8c:	ea000009 	b	247cb8 <TXView::DoEditCommand(long)+0x4c>
        247c90:	ea000006 	b	247cb0 <TXView::DoEditCommand(long)+0x44>
        247c94:	eb655477 	bl	1b9ce78 <TXView::$Clear(void)>
        247c98:	e3a00001 	mov	r0, #1	; 0x1
        247c9c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        247ca0:	eb655471 	bl	1b9ce6c <TXView::$Cut(void)>
        247ca4:	eafffffb 	b	247c98 <TXView::DoEditCommand(long)+0x2c>
        247ca8:	eb655470 	bl	1b9ce70 <TXView::$Copy(void)>
        247cac:	eafffff9 	b	247c98 <TXView::DoEditCommand(long)+0x2c>
        247cb0:	eb65546f 	bl	1b9ce74 <TXView::$Paste(void)>
        247cb4:	eafffff7 	b	247c98 <TXView::DoEditCommand(long)+0x2c>
        247cb8:	eb65546d 	bl	1b9ce74 <TXView::$Paste(void)>
        247cbc:	e59f0008 	ldr	r0, [pc, #8]	; 247ccc <TXView::DoEditCommand(long)+0x60>	; fField8
        247cc0:	e5900000 	ldr	r0, [r0]
        247cc4:	eb61dc9d 	bl	1abef40 <TRootView::$RemoveClipboard(void)>
        247cc8:	eafffff2 	b	247c98 <TXView::DoEditCommand(long)+0x2c>
        247ccc:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXView::InsertPageBreak(TXOffsetRange const &)
 * Address: 00247cd0
 */
TXView::InsertPageBreak(TXOffsetRange const &) {
    /*
        247cd0:	e1a0c00d 	mov	ip, sp
        247cd4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        247cd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        247cdc:	e1a04000 	mov	r4, r0
        247ce0:	e1a05001 	mov	r5, r1
        247ce4:	e5d0005c 	ldrb	r0, [r0, #92]	; fField92
        247ce8:	e3300000 	teq	r0, #0	; 0x0
        247cec:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        247cf0:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        247cf4:	e3a0000a 	mov	r0, #10	; 0xa
        247cf8:	e5cd0039 	strb	r0, [sp, #57]
        247cfc:	e3a00000 	mov	r0, #0	; 0x0
        247d00:	e5cd0038 	strb	r0, [sp, #56]	; fField56
        247d04:	e28d1038 	add	r1, sp, #56	; 0x38
        247d08:	e3a02001 	mov	r2, #1	; 0x1
        247d0c:	e28d0024 	add	r0, sp, #36	; 0x24
        247d10:	eb6501bc 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        247d14:	e28d1024 	add	r1, sp, #36	; 0x24
        247d18:	e1a0000d 	mov	r0, sp
        247d1c:	eb6560b8 	bl	1ba0004 <TXReplaceParams::$__ct(TXTextDescriptor const &)>
        247d20:	e1a0200d 	mov	r2, sp
        247d24:	e1a01005 	mov	r1, r5
        247d28:	e1a00004 	mov	r0, r4
        247d2c:	eb65585e 	bl	1b9deac <TXView::$NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)>
        247d30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::AddTextDragItem(TDragInfo *, long, long, int *)
 * Address: 00247d34
 */
TXView::AddTextDragItem(TDragInfo *, long, long, int *) {
    /*
        247d34:	e1a0c00d 	mov	ip, sp
        247d38:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        247d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        247d40:	e1a04000 	mov	r4, r0
        247d44:	e1a07001 	mov	r7, r1
        247d48:	e1a05002 	mov	r5, r2
        247d4c:	e1a06003 	mov	r6, r3
        247d50:	e24dd018 	sub	sp, sp, #24	; 0x18
        247d54:	e3a00002 	mov	r0, #2	; 0x2
        247d58:	eb65e8fb 	bl	1bc214c <$AllocateRefHandle(long)>
        247d5c:	e58d0000 	str	r0, [sp]
        247d60:	e5940030 	ldr	r0, [r4, #48]	; fField48
        247d64:	e28d1010 	add	r1, sp, #16	; 0x10
        247d68:	e5b09018 	ldr	r9, [r0, #24]!
        247d6c:	e1a00004 	mov	r0, r4
        247d70:	eb655423 	bl	1b9ce04 <TXView::$GetHiliteBounds(Rect *)>
        247d74:	e24dd008 	sub	sp, sp, #8	; 0x8
        247d78:	e3560000 	cmp	r6, #0	; 0x0
        247d7c:	da000018 	ble	247de4 <TXView::AddTextDragItem(TDragInfo *, long, long, int *)+0xb0>
        247d80:	e1a01005 	mov	r1, r5
        247d84:	e1a00009 	mov	r0, r9
        247d88:	eb65123b 	bl	1b8c67c <TXFormatter::$IsLineFeed( const(long))>
        247d8c:	e3300000 	teq	r0, #0	; 0x0
        247d90:	0a000013 	beq	247de4 <TXView::AddTextDragItem(TDragInfo *, long, long, int *)+0xb0>
        247d94:	e24dd008 	sub	sp, sp, #8	; 0x8
        247d98:	e28d301c 	add	r3, sp, #28	; 0x1c
        247d9c:	e92d0008 	stmdb	sp!, {r3}
        247da0:	e2850001 	add	r0, r5, #1	; 0x1
        247da4:	e3a01000 	mov	r1, #0	; 0x0
        247da8:	e58d0004 	str	r0, [sp, #4]	; fField4
        247dac:	e5cd1008 	strb	r1, [sp, #8]	; fField8
        247db0:	e1a01004 	mov	r1, r4
        247db4:	e28d001c 	add	r0, sp, #28	; 0x1c
        247db8:	e99d000c 	ldmib	sp, {r2, r3}
        247dbc:	eb654ffb 	bl	1b9bdb0 <TXView::$CharToPoint(TXOffset, int *)>
        247dc0:	e28dd004 	add	sp, sp, #4	; 0x4
        247dc4:	e59d101a 	ldr	r1, [sp, #26]
        247dc8:	e59d001c 	ldr	r0, [sp, #28]
        247dcc:	e0410000 	sub	r0, r1, r0
        247dd0:	e5cd0019 	strb	r0, [sp, #25]
        247dd4:	e1a00440 	mov	r0, r0, asr #8
        247dd8:	e5cd0018 	strb	r0, [sp, #24]
        247ddc:	e28dd008 	add	sp, sp, #8	; 0x8
        247de0:	ea000009 	b	247e0c <TXView::AddTextDragItem(TDragInfo *, long, long, int *)+0xd8>
        247de4:	e28d3014 	add	r3, sp, #20	; 0x14
        247de8:	e92d0008 	stmdb	sp!, {r3}
        247dec:	e3a01000 	mov	r1, #0	; 0x0
        247df0:	e58d5004 	str	r5, [sp, #4]	; fField4
        247df4:	e5cd1008 	strb	r1, [sp, #8]	; fField8
        247df8:	e1a01004 	mov	r1, r4
        247dfc:	e28d0014 	add	r0, sp, #20	; 0x14
        247e00:	e99d000c 	ldmib	sp, {r2, r3}
        247e04:	eb654fe9 	bl	1b9bdb0 <TXView::$CharToPoint(TXOffset, int *)>
        247e08:	e28dd004 	add	sp, sp, #4	; 0x4
        247e0c:	e24dd008 	sub	sp, sp, #8	; 0x8
        247e10:	e0858006 	add	r8, r5, r6
        247e14:	e3560000 	cmp	r6, #0	; 0x0
        247e18:	da000018 	ble	247e80 <TXView::AddTextDragItem(TDragInfo *, long, long, int *)+0x14c>
        247e1c:	e2481001 	sub	r1, r8, #1	; 0x1
        247e20:	e1a0a001 	mov	sl, r1
        247e24:	e1a00009 	mov	r0, r9
        247e28:	eb651213 	bl	1b8c67c <TXFormatter::$IsLineFeed( const(long))>
        247e2c:	e3300000 	teq	r0, #0	; 0x0
        247e30:	0a000012 	beq	247e80 <TXView::AddTextDragItem(TDragInfo *, long, long, int *)+0x14c>
        247e34:	e24dd008 	sub	sp, sp, #8	; 0x8
        247e38:	e28d3024 	add	r3, sp, #36	; 0x24
        247e3c:	e92d0008 	stmdb	sp!, {r3}
        247e40:	e3a01000 	mov	r1, #0	; 0x0
        247e44:	e58da004 	str	sl, [sp, #4]	; fField4
        247e48:	e5cd1008 	strb	r1, [sp, #8]	; fField8
        247e4c:	e1a01004 	mov	r1, r4
        247e50:	e28d0020 	add	r0, sp, #32	; 0x20
        247e54:	e99d000c 	ldmib	sp, {r2, r3}
        247e58:	eb654fd4 	bl	1b9bdb0 <TXView::$CharToPoint(TXOffset, int *)>
        247e5c:	e28dd004 	add	sp, sp, #4	; 0x4
        247e60:	e59d001e 	ldr	r0, [sp, #30]
        247e64:	e59d1024 	ldr	r1, [sp, #36]
        247e68:	e0800001 	add	r0, r0, r1
        247e6c:	e5cd001d 	strb	r0, [sp, #29]
        247e70:	e1a00440 	mov	r0, r0, asr #8
        247e74:	e5cd001c 	strb	r0, [sp, #28]
        247e78:	e28dd008 	add	sp, sp, #8	; 0x8
        247e7c:	ea000009 	b	247ea8 <TXView::AddTextDragItem(TDragInfo *, long, long, int *)+0x174>
        247e80:	e28d301c 	add	r3, sp, #28	; 0x1c
        247e84:	e92d0008 	stmdb	sp!, {r3}
        247e88:	e3a01000 	mov	r1, #0	; 0x0
        247e8c:	e58d8004 	str	r8, [sp, #4]	; fField4
        247e90:	e5cd1008 	strb	r1, [sp, #8]	; fField8
        247e94:	e1a01004 	mov	r1, r4
        247e98:	e28d0018 	add	r0, sp, #24	; 0x18
        247e9c:	e99d000c 	ldmib	sp, {r2, r3}
        247ea0:	eb654fc2 	bl	1b9bdb0 <TXView::$CharToPoint(TXOffset, int *)>
        247ea4:	e28dd004 	add	sp, sp, #4	; 0x4
        247ea8:	e59d001a 	ldr	r0, [sp, #26]
        247eac:	e5cd0021 	strb	r0, [sp, #33]
        247eb0:	e1a00440 	mov	r0, r0, asr #8
        247eb4:	e5cd0020 	strb	r0, [sp, #32]	; fField32
        247eb8:	e59d1016 	ldr	r1, [sp, #22]
        247ebc:	e59d001c 	ldr	r0, [sp, #28]
        247ec0:	e0810000 	add	r0, r1, r0
        247ec4:	e5cd0025 	strb	r0, [sp, #37]
        247ec8:	e1a00440 	mov	r0, r0, asr #8
        247ecc:	e5cd0024 	strb	r0, [sp, #36]
        247ed0:	e24dd004 	sub	sp, sp, #4	; 0x4
        247ed4:	e59d101c 	ldr	r1, [sp, #28]
        247ed8:	e1a01841 	mov	r1, r1, asr #16
        247edc:	e59d0018 	ldr	r0, [sp, #24]
        247ee0:	e1310840 	teq	r1, r0, asr #16
        247ee4:	1a000007 	bne	247f08 <TXView::AddTextDragItem(TDragInfo *, long, long, int *)+0x1d4>
        247ee8:	e59d001c 	ldr	r0, [sp, #28]
        247eec:	e5cd0027 	strb	r0, [sp, #39]
        247ef0:	e1a00440 	mov	r0, r0, asr #8
        247ef4:	e5cd0026 	strb	r0, [sp, #38]
        247ef8:	e59d0018 	ldr	r0, [sp, #24]
        247efc:	e5cd002b 	strb	r0, [sp, #43]
        247f00:	e1a00440 	mov	r0, r0, asr #8
        247f04:	e5cd002a 	strb	r0, [sp, #42]
        247f08:	e24dd008 	sub	sp, sp, #8	; 0x8
        247f0c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        247f10:	e58d0004 	str	r0, [sp, #4]	; fField4
        247f14:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        247f18:	e2600000 	rsb	r0, r0, #0	; 0x0
        247f1c:	e1a00800 	mov	r0, r0, lsl #16
        247f20:	e1a00840 	mov	r0, r0, asr #16
        247f24:	e59d1006 	ldr	r1, [sp, #6]
        247f28:	e2611000 	rsb	r1, r1, #0	; 0x0
        247f2c:	e1a01801 	mov	r1, r1, lsl #16
        247f30:	e1a01841 	mov	r1, r1, asr #16
        247f34:	e24dd004 	sub	sp, sp, #4	; 0x4
        247f38:	e5cd0003 	strb	r0, [sp, #3]
        247f3c:	e1a00440 	mov	r0, r0, asr #8
        247f40:	e5cd0002 	strb	r0, [sp, #2]
        247f44:	e5cd1001 	strb	r1, [sp, #1]
        247f48:	e1a00441 	mov	r0, r1, asr #8
        247f4c:	e5cd0000 	strb	r0, [sp]
        247f50:	e49d0004 	ldr	r0, [sp], #4	; fField4
        247f54:	e58d0000 	str	r0, [sp]
        247f58:	e28d002c 	add	r0, sp, #44	; 0x2c
        247f5c:	e59d1002 	ldr	r1, [sp, #2]
        247f60:	e1a01841 	mov	r1, r1, asr #16
        247f64:	e59d2000 	ldr	r2, [sp]
        247f68:	e1a02842 	mov	r2, r2, asr #16
        247f6c:	eb64265d 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        247f70:	e28dd008 	add	sp, sp, #8	; 0x8
        247f74:	e3a00003 	mov	r0, #3	; 0x3
        247f78:	eb614f87 	bl	1a9bd9c <$MakeArray(long)>
        247f7c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        247f80:	e5810000 	str	r0, [r1]
        247f84:	e1a00105 	mov	r0, r5, lsl #2
        247f88:	eb65e86f 	bl	1bc214c <$AllocateRefHandle(long)>
        247f8c:	e1a04000 	mov	r4, r0
        247f90:	e5902000 	ldr	r2, [r0]
        247f94:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        247f98:	e5900000 	ldr	r0, [r0]
        247f9c:	e3a01000 	mov	r1, #0	; 0x0
        247fa0:	eb65f8ec 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        247fa4:	e1a00004 	mov	r0, r4
        247fa8:	eb65ec83 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        247fac:	e1a00106 	mov	r0, r6, lsl #2
        247fb0:	eb65e865 	bl	1bc214c <$AllocateRefHandle(long)>
        247fb4:	e1a04000 	mov	r4, r0
        247fb8:	e5902000 	ldr	r2, [r0]
        247fbc:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        247fc0:	e5900000 	ldr	r0, [r0]
        247fc4:	e3a01001 	mov	r1, #1	; 0x1
        247fc8:	eb65f8e2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        247fcc:	e1a00004 	mov	r0, r4
        247fd0:	eb65ec79 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        247fd4:	e28d0024 	add	r0, sp, #36	; 0x24
        247fd8:	eb669def 	bl	1bef79c <$ToObject(TRect const &)>
        247fdc:	eb65e85a 	bl	1bc214c <$AllocateRefHandle(long)>
        247fe0:	e1a04000 	mov	r4, r0
        247fe4:	e5902000 	ldr	r2, [r0]
        247fe8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        247fec:	e5900000 	ldr	r0, [r0]
        247ff0:	e3a05002 	mov	r5, #2	; 0x2
        247ff4:	e1a01005 	mov	r1, r5
        247ff8:	eb65f8d6 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        247ffc:	e1a00004 	mov	r0, r4
        248000:	eb65ec6d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248004:	e1a00005 	mov	r0, r5
        248008:	eb65e84f 	bl	1bc214c <$AllocateRefHandle(long)>
        24800c:	e58d0000 	str	r0, [sp]
        248010:	e1a0300d 	mov	r3, sp
        248014:	e28d2014 	add	r2, sp, #20	; 0x14
        248018:	e59f1018 	ldr	r1, [pc, #18]	; 248038 <TXView::AddTextDragItem(TDragInfo *, long, long, int *)+0x304>
        24801c:	e1a00007 	mov	r0, r7
        248020:	eb618101 	bl	1aa842c <TDragInfo::$AddDragItem(RefVar const &, RefVar const &, RefVar const &)>
        248024:	e59d0000 	ldr	r0, [sp]
        248028:	eb65ec63 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24802c:	e5bd0014 	ldr	r0, [sp, #20]!	; fField20
        248030:	eb65ec61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248034:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        248038:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: TXView::GetDragInfo(TDragInfo *)
 * Address: 0024803c
 */
TXView::GetDragInfo(TDragInfo *) {
    /*
        24803c:	e1a0c00d 	mov	ip, sp
        248040:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        248044:	e24cb004 	sub	fp, ip, #4	; 0x4
        248048:	e1a04000 	mov	r4, r0
        24804c:	e1a05001 	mov	r5, r1
        248050:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        248054:	e3a00000 	mov	r0, #0	; 0x0
        248058:	e58d0010 	str	r0, [sp, #16]	; fField16
        24805c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        248060:	e5900014 	ldr	r0, [r0, #20]	; fField20
        248064:	e1a0100d 	mov	r1, sp
        248068:	eb652203 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        24806c:	e1a0100d 	mov	r1, sp
        248070:	e5940030 	ldr	r0, [r4, #48]	; fField48
        248074:	eb655fd2 	bl	1b9ffc4 <Textension::$GetHiliteRangeRuns(TXOffsetRange *)>
        248078:	e1b08000 	movs	r8, r0
        24807c:	0a0000d8 	beq	2483e4 <TXView::GetDragInfo(TDragInfo *)+0x3a8>
        248080:	e24dd00c 	sub	sp, sp, #12	; 0xc
        248084:	e3a00002 	mov	r0, #2	; 0x2
        248088:	eb65e82f 	bl	1bc214c <$AllocateRefHandle(long)>
        24808c:	e58d0008 	str	r0, [sp, #8]	; fField8
        248090:	e59f02c4 	ldr	r0, [pc, #2c4]	; 24835c <TXView::GetDragInfo(TDragInfo *)+0x320>
        248094:	e5900000 	ldr	r0, [r0]
        248098:	e5900000 	ldr	r0, [r0]
        24809c:	eb65e82a 	bl	1bc214c <$AllocateRefHandle(long)>
        2480a0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2480a4:	e3a00002 	mov	r0, #2	; 0x2
        2480a8:	eb65e827 	bl	1bc214c <$AllocateRefHandle(long)>
        2480ac:	e58d0000 	str	r0, [sp]
        2480b0:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2480b4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2480b8:	e0409001 	sub	r9, r0, r1
        2480bc:	e3e06000 	mvn	r6, #0	; 0x0
        2480c0:	e3a00000 	mov	r0, #0	; 0x0
        2480c4:	e3590000 	cmp	r9, #0	; 0x0
        2480c8:	da0000bc 	ble	2483c0 <TXView::GetDragInfo(TDragInfo *)+0x384>
        2480cc:	e2841010 	add	r1, r4, #16	; 0x10
        2480d0:	e58d1024 	str	r1, [sp, #36]
        2480d4:	e24dd010 	sub	sp, sp, #16	; 0x10
        2480d8:	e3a03001 	mov	r3, #1	; 0x1
        2480dc:	e9980480 	ldmib	r8, {r7, sl}
        2480e0:	e92d0008 	stmdb	sp!, {r3}
        2480e4:	e087200a 	add	r2, r7, sl
        2480e8:	e1a01007 	mov	r1, r7
        2480ec:	e58d2034 	str	r2, [sp, #52]	; fField52
        2480f0:	e28d0004 	add	r0, sp, #4	; 0x4
        2480f4:	e3a03000 	mov	r3, #0	; 0x0
        2480f8:	ebffafcf 	bl	23403c <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)>
        2480fc:	e28dd004 	add	sp, sp, #4	; 0x4
        248100:	e1a0100d 	mov	r1, sp
        248104:	e5940030 	ldr	r0, [r4, #48]	; fField48
        248108:	eb655fac 	bl	1b9ffc0 <Textension::$IsRangeGraphicsRun(TXOffsetRange const *)>
        24810c:	e3300000 	teq	r0, #0	; 0x0
        248110:	0a000094 	beq	248368 <TXView::GetDragInfo(TDragInfo *)+0x32c>
        248114:	e3760001 	cmn	r6, #1	; 0x1
        248118:	0a000008 	beq	248140 <TXView::GetDragInfo(TDragInfo *)+0x104>
        24811c:	e28d302c 	add	r3, sp, #44	; 0x2c
        248120:	e92d0008 	stmdb	sp!, {r3}
        248124:	e0473006 	sub	r3, r7, r6
        248128:	e1a02006 	mov	r2, r6
        24812c:	e1a01005 	mov	r1, r5
        248130:	e1a00004 	mov	r0, r4
        248134:	eb655767 	bl	1b9ded8 <TXView::$AddTextDragItem(TDragInfo *, long, long, int *)>
        248138:	e28dd004 	add	sp, sp, #4	; 0x4
        24813c:	e3e06000 	mvn	r6, #0	; 0x0
        248140:	e3a00002 	mov	r0, #2	; 0x2
        248144:	eb614f14 	bl	1a9bd9c <$MakeArray(long)>
        248148:	e59d1018 	ldr	r1, [sp, #24]
        24814c:	e5810000 	str	r0, [r1]
        248150:	e59f1208 	ldr	r1, [pc, #208]	; 248360 <TXView::GetDragInfo(TDragInfo *)+0x324>
        248154:	e5911000 	ldr	r1, [r1]
        248158:	e5912000 	ldr	r2, [r1]
        24815c:	e3a01000 	mov	r1, #0	; 0x0
        248160:	eb65f87c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        248164:	e59f01f8 	ldr	r0, [pc, #1f8]	; 248364 <TXView::GetDragInfo(TDragInfo *)+0x328>
        248168:	e5900000 	ldr	r0, [r0]
        24816c:	e5902000 	ldr	r2, [r0]
        248170:	e59d0018 	ldr	r0, [sp, #24]
        248174:	e5900000 	ldr	r0, [r0]
        248178:	e3a01001 	mov	r1, #1	; 0x1
        24817c:	eb65f875 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        248180:	e24dd024 	sub	sp, sp, #36	; 0x24
        248184:	e28d3020 	add	r3, sp, #32	; 0x20
        248188:	e92d0008 	stmdb	sp!, {r3}
        24818c:	e3a01000 	mov	r1, #0	; 0x0
        248190:	e58d7004 	str	r7, [sp, #4]	; fField4
        248194:	e5cd1008 	strb	r1, [sp, #8]	; fField8
        248198:	e1a01004 	mov	r1, r4
        24819c:	e28d0020 	add	r0, sp, #32	; 0x20
        2481a0:	e99d000c 	ldmib	sp, {r2, r3}
        2481a4:	eb654f01 	bl	1b9bdb0 <TXView::$CharToPoint(TXOffset, int *)>
        2481a8:	e28dd004 	add	sp, sp, #4	; 0x4
        2481ac:	e28d3020 	add	r3, sp, #32	; 0x20
        2481b0:	e92d0008 	stmdb	sp!, {r3}
        2481b4:	e59d0058 	ldr	r0, [sp, #88]	; fField88
        2481b8:	e3a01000 	mov	r1, #0	; 0x0
        2481bc:	e58d000c 	str	r0, [sp, #12]	; fField12
        2481c0:	e5cd1010 	strb	r1, [sp, #16]	; fField16
        2481c4:	e1a01004 	mov	r1, r4
        2481c8:	e28d001c 	add	r0, sp, #28	; 0x1c
        2481cc:	e28d300c 	add	r3, sp, #12	; 0xc
        2481d0:	e893000c 	ldmia	r3, {r2, r3}
        2481d4:	eb654ef5 	bl	1b9bdb0 <TXView::$CharToPoint(TXOffset, int *)>
        2481d8:	e28dd004 	add	sp, sp, #4	; 0x4
        2481dc:	e59d201c 	ldr	r2, [sp, #28]
        2481e0:	e1a02842 	mov	r2, r2, asr #16
        2481e4:	e59d101e 	ldr	r1, [sp, #30]
        2481e8:	e1a01841 	mov	r1, r1, asr #16
        2481ec:	e59d301e 	ldr	r3, [sp, #30]
        2481f0:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        2481f4:	e0830000 	add	r0, r3, r0
        2481f8:	e1a00800 	mov	r0, r0, lsl #16
        2481fc:	e1a00840 	mov	r0, r0, asr #16
        248200:	e59d301a 	ldr	r3, [sp, #26]
        248204:	e1a03843 	mov	r3, r3, asr #16
        248208:	e5cd2011 	strb	r2, [sp, #17]
        24820c:	e1a02442 	mov	r2, r2, asr #8
        248210:	e5cd2010 	strb	r2, [sp, #16]	; fField16
        248214:	e5cd1013 	strb	r1, [sp, #19]
        248218:	e1a01441 	mov	r1, r1, asr #8
        24821c:	e5cd1012 	strb	r1, [sp, #18]
        248220:	e5cd0015 	strb	r0, [sp, #21]
        248224:	e1a00440 	mov	r0, r0, asr #8
        248228:	e5cd0014 	strb	r0, [sp, #20]	; fField20
        24822c:	e5cd3017 	strb	r3, [sp, #23]
        248230:	e1a00443 	mov	r0, r3, asr #8
        248234:	e5cd0016 	strb	r0, [sp, #22]
        248238:	e24dd008 	sub	sp, sp, #8	; 0x8
        24823c:	e59d0060 	ldr	r0, [sp, #96]
        248240:	e5900000 	ldr	r0, [r0]
        248244:	e58d0004 	str	r0, [sp, #4]	; fField4
        248248:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24824c:	e2600000 	rsb	r0, r0, #0	; 0x0
        248250:	e1a01800 	mov	r1, r0, lsl #16
        248254:	e1a01841 	mov	r1, r1, asr #16
        248258:	e59d0006 	ldr	r0, [sp, #6]
        24825c:	e2600000 	rsb	r0, r0, #0	; 0x0
        248260:	e1a00800 	mov	r0, r0, lsl #16
        248264:	e1a00840 	mov	r0, r0, asr #16
        248268:	e24dd004 	sub	sp, sp, #4	; 0x4
        24826c:	e5cd1003 	strb	r1, [sp, #3]
        248270:	e1a01441 	mov	r1, r1, asr #8
        248274:	e5cd1002 	strb	r1, [sp, #2]
        248278:	e5cd0001 	strb	r0, [sp, #1]
        24827c:	e1a00440 	mov	r0, r0, asr #8
        248280:	e5cd0000 	strb	r0, [sp]
        248284:	e49d0004 	ldr	r0, [sp], #4	; fField4
        248288:	e58d0000 	str	r0, [sp]
        24828c:	e28d0018 	add	r0, sp, #24	; 0x18
        248290:	e59d1002 	ldr	r1, [sp, #2]
        248294:	e1a01841 	mov	r1, r1, asr #16
        248298:	e59d2000 	ldr	r2, [sp]
        24829c:	e1a02842 	mov	r2, r2, asr #16
        2482a0:	eb642590 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        2482a4:	e28dd008 	add	sp, sp, #8	; 0x8
        2482a8:	e3a00003 	mov	r0, #3	; 0x3
        2482ac:	eb614eba 	bl	1a9bd9c <$MakeArray(long)>
        2482b0:	e59d1034 	ldr	r1, [sp, #52]	; fField52
        2482b4:	e5810000 	str	r0, [r1]
        2482b8:	e1a00107 	mov	r0, r7, lsl #2
        2482bc:	eb65e7a2 	bl	1bc214c <$AllocateRefHandle(long)>
        2482c0:	e1a07000 	mov	r7, r0
        2482c4:	e5902000 	ldr	r2, [r0]
        2482c8:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        2482cc:	e5900000 	ldr	r0, [r0]
        2482d0:	e3a01000 	mov	r1, #0	; 0x0
        2482d4:	eb65f81f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2482d8:	e1a00007 	mov	r0, r7
        2482dc:	eb65ebb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2482e0:	e1a0010a 	mov	r0, sl, lsl #2
        2482e4:	eb65e798 	bl	1bc214c <$AllocateRefHandle(long)>
        2482e8:	e1a07000 	mov	r7, r0
        2482ec:	e5902000 	ldr	r2, [r0]
        2482f0:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        2482f4:	e5900000 	ldr	r0, [r0]
        2482f8:	e3a01001 	mov	r1, #1	; 0x1
        2482fc:	eb65f815 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        248300:	e1a00007 	mov	r0, r7
        248304:	eb65ebac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248308:	e28d0010 	add	r0, sp, #16	; 0x10
        24830c:	eb669d22 	bl	1bef79c <$ToObject(TRect const &)>
        248310:	eb65e78d 	bl	1bc214c <$AllocateRefHandle(long)>
        248314:	e1a07000 	mov	r7, r0
        248318:	e5902000 	ldr	r2, [r0]
        24831c:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        248320:	e5900000 	ldr	r0, [r0]
        248324:	e3a01002 	mov	r1, #2	; 0x2
        248328:	eb65f80a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        24832c:	e1a00007 	mov	r0, r7
        248330:	eb65eba1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248334:	e28d3038 	add	r3, sp, #56	; 0x38
        248338:	e28d2034 	add	r2, sp, #52	; 0x34
        24833c:	e28d103c 	add	r1, sp, #60	; 0x3c
        248340:	e1a00005 	mov	r0, r5
        248344:	eb618038 	bl	1aa842c <TDragInfo::$AddDragItem(RefVar const &, RefVar const &, RefVar const &)>
        248348:	e59d0050 	ldr	r0, [sp, #80]	; fField80
        24834c:	e2800001 	add	r0, r0, #1	; 0x1
        248350:	e58d0050 	str	r0, [sp, #80]	; fField80
        248354:	e28dd024 	add	sp, sp, #36	; 0x24
        248358:	ea000004 	b	248370 <TXView::GetDragInfo(TDragInfo *)+0x334>
        24835c:	006809d0 	ldreqd	r0, [r8], -#144
        248360:	00684600 	rsbeq	r4, r8, r0, lsl #12
        248364:	00683ec0 	rsbeq	r3, r8, r0, asr #29
        248368:	e3760001 	cmn	r6, #1	; 0x1
        24836c:	01a06007 	moveq	r6, r7
        248370:	e049900a 	sub	r9, r9, sl
        248374:	e1a00008 	mov	r0, r8
        248378:	eb6531be 	bl	1b94a78 <TXObjectIterator::$Next(void)>
        24837c:	e28dd010 	add	sp, sp, #16	; 0x10
        248380:	e3590000 	cmp	r9, #0	; 0x0
        248384:	caffff52 	bgt	2480d4 <TXView::GetDragInfo(TDragInfo *)+0x98>
        248388:	e3760001 	cmn	r6, #1	; 0x1
        24838c:	0a00000b 	beq	2483c0 <TXView::GetDragInfo(TDragInfo *)+0x384>
        248390:	e28d301c 	add	r3, sp, #28	; 0x1c
        248394:	e92d0008 	stmdb	sp!, {r3}
        248398:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        24839c:	e59d2018 	ldr	r2, [sp, #24]
        2483a0:	e0421000 	sub	r1, r2, r0
        2483a4:	e0800001 	add	r0, r0, r1
        2483a8:	e0403006 	sub	r3, r0, r6
        2483ac:	e1a02006 	mov	r2, r6
        2483b0:	e1a01005 	mov	r1, r5
        2483b4:	e1a00004 	mov	r0, r4
        2483b8:	eb6556c6 	bl	1b9ded8 <TXView::$AddTextDragItem(TDragInfo *, long, long, int *)>
        2483bc:	e28dd004 	add	sp, sp, #4	; 0x4
        2483c0:	e1a00008 	mov	r0, r8
        2483c4:	eb6614c5 	bl	1bcd6e0 <$__dl(void *)>
        2483c8:	e59d0000 	ldr	r0, [sp]
        2483cc:	eb65eb7a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2483d0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2483d4:	eb65eb78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2483d8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2483dc:	eb65eb76 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2483e0:	e28dd00c 	add	sp, sp, #12	; 0xc
        2483e4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2483e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::CheckDrag(TXNewtPen *)
 * Address: 002483ec
 */
TXView::CheckDrag(TXNewtPen *) {
    /*
        2483ec:	e1a0c00d 	mov	ip, sp
        2483f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2483f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2483f8:	e1a04000 	mov	r4, r0
        2483fc:	e1a05001 	mov	r5, r1
        248400:	e3a06000 	mov	r6, #0	; 0x0
        248404:	e24dd004 	sub	sp, sp, #4	; 0x4
        248408:	e1a0000d 	mov	r0, sp
        24840c:	e1a0e00f 	mov	lr, pc
        248410:	e591f000 	ldr	pc, [r1]
        248414:	e49d1004 	ldr	r1, [sp], #4	; fField4
        248418:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24841c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        248420:	eb65251c 	bl	1b91898 <TXHilite::$IsPointInHilite(Point)>
        248424:	e3300000 	teq	r0, #0	; 0x0
        248428:	0a000027 	beq	2484cc <TXView::CheckDrag(TXNewtPen *)+0xe0>
        24842c:	e24dd008 	sub	sp, sp, #8	; 0x8
        248430:	e594004c 	ldr	r0, [r4, #76]	; fField76
        248434:	e3100004 	tst	r0, #4	; 0x4
        248438:	1a000005 	bne	248454 <TXView::CheckDrag(TXNewtPen *)+0x68>
        24843c:	e3a00001 	mov	r0, #1	; 0x1
        248440:	eb62293a 	bl	1ad2930 <$Modifiers(unsigned char)>
        248444:	e3100008 	tst	r0, #8	; 0x8
        248448:	05d4005c 	ldreqb	r0, [r4, #92]	; fField92
        24844c:	03300000 	teqeq	r0, #0	; 0x0
        248450:	0a000001 	beq	24845c <TXView::CheckDrag(TXNewtPen *)+0x70>
        248454:	e3a00001 	mov	r0, #1	; 0x1
        248458:	ea000000 	b	248460 <TXView::CheckDrag(TXNewtPen *)+0x74>
        24845c:	e3a00000 	mov	r0, #0	; 0x0
        248460:	e20060ff 	and	r6, r0, #255	; 0xff
        248464:	e1a0100d 	mov	r1, sp
        248468:	e1a00004 	mov	r0, r4
        24846c:	eb655264 	bl	1b9ce04 <TXView::$GetHiliteBounds(Rect *)>
        248470:	e24dd004 	sub	sp, sp, #4	; 0x4
        248474:	e1a0000d 	mov	r0, sp
        248478:	e3a01000 	mov	r1, #0	; 0x0
        24847c:	eb623179 	bl	1ad4a68 <TDragInfo::$__ct(long)>
        248480:	e1a0100d 	mov	r1, sp
        248484:	e1a00004 	mov	r0, r4
        248488:	eb655693 	bl	1b9dedc <TXView::$GetDragInfo(TDragInfo *)>
        24848c:	e3a03000 	mov	r3, #0	; 0x0
        248490:	e1a0200d 	mov	r2, sp
        248494:	e1a01006 	mov	r1, r6
        248498:	e28d0004 	add	r0, sp, #4	; 0x4
        24849c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2484a0:	e28d3014 	add	r3, sp, #20	; 0x14
        2484a4:	e28d2014 	add	r2, sp, #20	; 0x14
        2484a8:	e1a00004 	mov	r0, r4
        2484ac:	e5b51004 	ldr	r1, [r5, #4]!	; fField4
        2484b0:	e594c000 	ldr	ip, [r4]
        2484b4:	e1a0e00f 	mov	lr, pc
        2484b8:	e28cf0d0 	add	pc, ip, #208	; 0xd0
        2484bc:	e1a06000 	mov	r6, r0
        2484c0:	e5bd0010 	ldr	r0, [sp, #16]!	; fField16
        2484c4:	eb65eb3c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2484c8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2484cc:	e1a00006 	mov	r0, r6
        2484d0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::GetClipboardDataText(int)
 * Address: 002484d4
 */
TXView::GetClipboardDataText(int) {
    /*
        2484d4:	e1a0c00d 	mov	ip, sp
        2484d8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2484dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2484e0:	e1a04000 	mov	r4, r0
        2484e4:	e24dd014 	sub	sp, sp, #20	; 0x14
        2484e8:	e28d0004 	add	r0, sp, #4	; 0x4
        2484ec:	eb655aa1 	bl	1b9ef78 <TXHandlers::$__ct(void)>
        2484f0:	e3a00002 	mov	r0, #2	; 0x2
        2484f4:	eb65e714 	bl	1bc214c <$AllocateRefHandle(long)>
        2484f8:	e58d0000 	str	r0, [sp]
        2484fc:	e1a0100d 	mov	r1, sp
        248500:	e3a00000 	mov	r0, #0	; 0x0
        248504:	eb652917 	bl	1b92968 <TXBinaryChars::$__ct(RefVar const &)>
        248508:	e58d0010 	str	r0, [sp, #16]	; fField16
        24850c:	e59d0000 	ldr	r0, [sp]
        248510:	eb65eb29 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248514:	e3a07000 	mov	r7, #0	; 0x0
        248518:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        24851c:	e3300000 	teq	r0, #0	; 0x0
        248520:	1a000005 	bne	24853c <TXView::GetClipboardDataText(int)+0x68>
        248524:	e59f01b4 	ldr	r0, [pc, #1b4]	; 2486e0 <TXView::GetClipboardDataText(int)+0x20c>
        248528:	e5900000 	ldr	r0, [r0]
        24852c:	e3a02000 	mov	r2, #0	; 0x0
        248530:	e3a010e9 	mov	r1, #233	; 0xe9
        248534:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        248538:	eb666b17 	bl	1be319c <$Throw>
        24853c:	e3a00000 	mov	r0, #0	; 0x0
        248540:	eb655e92 	bl	1b9ff90 <Textension::$__ct(void)>
        248544:	e1a05000 	mov	r5, r0
        248548:	e28d2004 	add	r2, sp, #4	; 0x4
        24854c:	e3a03000 	mov	r3, #0	; 0x0
        248550:	e3a01000 	mov	r1, #0	; 0x0
        248554:	eb655e8e 	bl	1b9ff94 <Textension::$ITextension(GrafPort *, TXHandlers const &, char)>
        248558:	e1b06000 	movs	r6, r0
        24855c:	1a000051 	bne	2486a8 <TXView::GetClipboardDataText(int)+0x1d4>
        248560:	e24dd008 	sub	sp, sp, #8	; 0x8
        248564:	e1a00004 	mov	r0, r4
        248568:	eb654e0d 	bl	1b9bda4 <TXView::$GetTotalWidth(void)>
        24856c:	e58d0004 	str	r0, [sp, #4]	; fField4
        248570:	e58d7000 	str	r7, [sp]
        248574:	e5950010 	ldr	r0, [r5, #16]	; fField16
        248578:	e1a0100d 	mov	r1, sp
        24857c:	e5b0c008 	ldr	ip, [r0, #8]!	; fField8
        248580:	e1a0000c 	mov	r0, ip
        248584:	e3a03000 	mov	r3, #0	; 0x0
        248588:	e3a02000 	mov	r2, #0	; 0x0
        24858c:	e59cc000 	ldr	ip, [ip]
        248590:	e1a0e00f 	mov	lr, pc
        248594:	e28cf00c 	add	pc, ip, #12	; 0xc
        248598:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24859c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2485a0:	e1a09000 	mov	r9, r0
        2485a4:	eb650c08 	bl	1b8b5cc <TXDisplay::$DisableDrawing(void)>
        2485a8:	e24dd010 	sub	sp, sp, #16	; 0x10
        2485ac:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2485b0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2485b4:	e1a0100d 	mov	r1, sp
        2485b8:	eb6520af 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        2485bc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2485c0:	e59d1000 	ldr	r1, [sp]
        2485c4:	e0407001 	sub	r7, r0, r1
        2485c8:	e3570080 	cmp	r7, #128	; 0x80
        2485cc:	d3a08000 	movle	r8, #0	; 0x0
        2485d0:	c3a07080 	movgt	r7, #128	; 0x80
        2485d4:	c3a08001 	movgt	r8, #1	; 0x1
        2485d8:	e24dd05c 	sub	sp, sp, #92	; 0x5c
        2485dc:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        2485e0:	e5903018 	ldr	r3, [r0, #24]
        2485e4:	e92d0008 	stmdb	sp!, {r3}
        2485e8:	e5903008 	ldr	r3, [r0, #8]	; fField8
        2485ec:	e92d0008 	stmdb	sp!, {r3}
        2485f0:	e5903020 	ldr	r3, [r0, #32]	; fField32
        2485f4:	e92d0008 	stmdb	sp!, {r3}
        2485f8:	e5b0300c 	ldr	r3, [r0, #12]!	; fField12
        2485fc:	e1a02007 	mov	r2, r7
        248600:	e59d1068 	ldr	r1, [sp, #104]
        248604:	e28d0030 	add	r0, sp, #48	; 0x30
        248608:	eb6507d9 	bl	1b8a574 <TXPrivateContainer::$__ct(long, long, TXObjectRange *, TXObjectRange *, TXChars *, TXFormatter *)>
        24860c:	e28dd00c 	add	sp, sp, #12	; 0xc
        248610:	e28d1024 	add	r1, sp, #36	; 0x24
        248614:	e1a0000d 	mov	r0, sp
        248618:	e3a02007 	mov	r2, #7	; 0x7
        24861c:	eb655e79 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        248620:	e1a0300d 	mov	r3, sp
        248624:	e1a00005 	mov	r0, r5
        248628:	e3a02000 	mov	r2, #0	; 0x0
        24862c:	e3a01000 	mov	r1, #0	; 0x0
        248630:	eb655e65 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        248634:	e1a06000 	mov	r6, r0
        248638:	e28dd05c 	add	sp, sp, #92	; 0x5c
        24863c:	e3380000 	teq	r8, #0	; 0x0
        248640:	0a000015 	beq	24869c <TXView::GetClipboardDataText(int)+0x1c8>
        248644:	e3360000 	teq	r6, #0	; 0x0
        248648:	1a000013 	bne	24869c <TXView::GetClipboardDataText(int)+0x1c8>
        24864c:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        248650:	e3a000c9 	mov	r0, #201	; 0xc9
        248654:	eb657327 	bl	1ba52f8 <$U_CONST_CHAR>
        248658:	e5cd0039 	strb	r0, [sp, #57]
        24865c:	e1a00440 	mov	r0, r0, asr #8
        248660:	e5cd0038 	strb	r0, [sp, #56]	; fField56
        248664:	e28d1038 	add	r1, sp, #56	; 0x38
        248668:	e3a02001 	mov	r2, #1	; 0x1
        24866c:	e28d0024 	add	r0, sp, #36	; 0x24
        248670:	eb64ff64 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        248674:	e28d1024 	add	r1, sp, #36	; 0x24
        248678:	e1a0000d 	mov	r0, sp
        24867c:	eb655e60 	bl	1ba0004 <TXReplaceParams::$__ct(TXTextDescriptor const &)>
        248680:	e1a0300d 	mov	r3, sp
        248684:	e1a02007 	mov	r2, r7
        248688:	e1a01007 	mov	r1, r7
        24868c:	e1a00005 	mov	r0, r5
        248690:	eb655e4d 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        248694:	e1a06000 	mov	r6, r0
        248698:	e28dd03c 	add	sp, sp, #60	; 0x3c
        24869c:	e1a00009 	mov	r0, r9
        2486a0:	eb650bca 	bl	1b8b5d0 <TXDisplay::$EnableDrawing(void)>
        2486a4:	e28dd018 	add	sp, sp, #24	; 0x18
        2486a8:	e3360000 	teq	r6, #0	; 0x0
        2486ac:	0a000009 	beq	2486d8 <TXView::GetClipboardDataText(int)+0x204>
        2486b0:	e1b00005 	movs	r0, r5
        2486b4:	0a000002 	beq	2486c4 <TXView::GetClipboardDataText(int)+0x1f0>
        2486b8:	e3a01001 	mov	r1, #1	; 0x1
        2486bc:	e1a0e00f 	mov	lr, pc
        2486c0:	e590f000 	ldr	pc, [r0]
        2486c4:	e1a01006 	mov	r1, r6
        2486c8:	e59f0014 	ldr	r0, [pc, #14]	; 2486e4 <TXView::GetClipboardDataText(int)+0x210>
        2486cc:	e5900000 	ldr	r0, [r0]
        2486d0:	e3a02000 	mov	r2, #0	; 0x0
        2486d4:	eb666ab0 	bl	1be319c <$Throw>
        2486d8:	e1a00005 	mov	r0, r5
        2486dc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2486e0:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2486e4:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TXView::GetClipboardDataBits(TRect *)
 * Address: 002486e8
 */
TXView::GetClipboardDataBits(TRect *) {
    /*
        2486e8:	e1a0c00d 	mov	ip, sp
        2486ec:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2486f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2486f4:	e1a05000 	mov	r5, r0
        2486f8:	e1a04001 	mov	r4, r1
        2486fc:	e59f01c0 	ldr	r0, [pc, #1c0]	; 2488c4 <TXView::GetClipboardDataBits(TRect *)+0x1dc>
        248700:	e5900000 	ldr	r0, [r0]
        248704:	e1a01080 	mov	r1, r0, lsl #1
        248708:	e3a00003 	mov	r0, #3	; 0x3
        24870c:	eb65a88b 	bl	1bb2940 <$__rt_sdiv>
        248710:	e1a06000 	mov	r6, r0
        248714:	e5948000 	ldr	r8, [r4]
        248718:	e5940002 	ldr	r0, [r4, #2]
        24871c:	e1a00840 	mov	r0, r0, asr #16
        248720:	e2601000 	rsb	r1, r0, #0	; 0x0
        248724:	e5940000 	ldr	r0, [r4]
        248728:	e1a00840 	mov	r0, r0, asr #16
        24872c:	e2602000 	rsb	r2, r0, #0	; 0x0
        248730:	e1a00004 	mov	r0, r4
        248734:	eb64246b 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        248738:	e5940006 	ldr	r0, [r4, #6]
        24873c:	e1560840 	cmp	r6, r0, asr #16
        248740:	b5c46007 	strltb	r6, [r4, #7]
        248744:	b1a00446 	movlt	r0, r6, asr #8
        248748:	b5c40006 	strltb	r0, [r4, #6]
        24874c:	e5941006 	ldr	r1, [r4, #6]
        248750:	e1a01841 	mov	r1, r1, asr #16
        248754:	e1a00005 	mov	r0, r5
        248758:	eb6555e1 	bl	1b9dee4 <TXView::$GetClipboardDataText(int)>
        24875c:	e1a05000 	mov	r5, r0
        248760:	e5900010 	ldr	r0, [r0, #16]	; fField16
        248764:	e5900008 	ldr	r0, [r0, #8]	; fField8
        248768:	e5901000 	ldr	r1, [r0]
        24876c:	e1a0e00f 	mov	lr, pc
        248770:	e281f01c 	add	pc, r1, #28	; 0x1c
        248774:	e5c40005 	strb	r0, [r4, #5]
        248778:	e1a00440 	mov	r0, r0, asr #8
        24877c:	e5c40004 	strb	r0, [r4, #4]	; fField4
        248780:	e24dd004 	sub	sp, sp, #4	; 0x4
        248784:	e3a00002 	mov	r0, #2	; 0x2
        248788:	eb65e66f 	bl	1bc214c <$AllocateRefHandle(long)>
        24878c:	e3a06000 	mov	r6, #0	; 0x0
        248790:	e3a07000 	mov	r7, #0	; 0x0
        248794:	e40d006c 	str	r0, [sp], -#108
        248798:	e58d6000 	str	r6, [sp]
        24879c:	e28d0008 	add	r0, sp, #8	; 0x8
        2487a0:	eb65a873 	bl	1bb2974 <$setjmp>
        2487a4:	e3300000 	teq	r0, #0	; 0x0
        2487a8:	1a000051 	bne	2488f4 <TXView::GetClipboardDataBits(TRect *)+0x20c>
        2487ac:	e1a0000d 	mov	r0, sp
        2487b0:	eb665e31 	bl	1be007c <$AddExceptionHandler>
        2487b4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2487b8:	e1a0100d 	mov	r1, sp
        2487bc:	e1a00004 	mov	r0, r4
        2487c0:	eb626a82 	bl	1ae31d0 <$AllocateClipboardBits__10TClipboardSFRC5TRectP8PixelMap>
        2487c4:	e59d1088 	ldr	r1, [sp, #136]
        2487c8:	e5810000 	str	r0, [r1]
        2487cc:	e3300002 	teq	r0, #2	; 0x2
        2487d0:	0a000037 	beq	2488b4 <TXView::GetClipboardDataBits(TRect *)+0x1cc>
        2487d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2487d8:	e28d108c 	add	r1, sp, #140	; 0x8c
        2487dc:	e1a0000d 	mov	r0, sp
        2487e0:	eb65e23c 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2487e4:	e1a0000d 	mov	r0, sp
        2487e8:	eb65e649 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2487ec:	e58d0004 	str	r0, [sp, #4]	; fField4
        2487f0:	e24dd038 	sub	sp, sp, #56	; 0x38
        2487f4:	e28d0004 	add	r0, sp, #4	; 0x4
        2487f8:	eb60ff06 	bl	1a88418 <TBits::$__ct(void)>
        2487fc:	e3a00000 	mov	r0, #0	; 0x0
        248800:	e40d006c 	str	r0, [sp], -#108
        248804:	e58d6000 	str	r6, [sp]
        248808:	e28d0008 	add	r0, sp, #8	; 0x8
        24880c:	eb65a858 	bl	1bb2974 <$setjmp>
        248810:	e59f60b0 	ldr	r6, [pc, #b0]	; 2488c8 <TXView::GetClipboardDataBits(TRect *)+0x1e0>
        248814:	e3300000 	teq	r0, #0	; 0x0
        248818:	1a00002b 	bne	2488cc <TXView::GetClipboardDataBits(TRect *)+0x1e4>
        24881c:	e1a0000d 	mov	r0, sp
        248820:	eb665e15 	bl	1be007c <$AddExceptionHandler>
        248824:	e28d10a8 	add	r1, sp, #168	; 0xa8
        248828:	e28d0070 	add	r0, sp, #112	; 0x70
        24882c:	eb6213af 	bl	1acd6f0 <TBits::$Constructor(PixelMap const &)>
        248830:	e28d0070 	add	r0, sp, #112	; 0x70
        248834:	e5941000 	ldr	r1, [r4]
        248838:	eb610747 	bl	1a8a55c <TBits::$BeginDrawing(TPoint)>
        24883c:	e5960000 	ldr	r0, [r6]
        248840:	eb650320 	bl	1b894c8 <TXTempReferences::$Get(void)>
        248844:	e1a01004 	mov	r1, r4
        248848:	e58d006c 	str	r0, [sp, #108]
        24884c:	eb642c52 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        248850:	e59d106c 	ldr	r1, [sp, #108]
        248854:	e5950010 	ldr	r0, [r5, #16]	; fField16
        248858:	eb650b66 	bl	1b8b5f8 <TXDisplay::$SetViewRgn(Region **)>
        24885c:	e5960000 	ldr	r0, [r6]
        248860:	e59d106c 	ldr	r1, [sp, #108]
        248864:	eb650318 	bl	1b894cc <TXTempReferences::$Done(void *)>
        248868:	e1a01004 	mov	r1, r4
        24886c:	e5952010 	ldr	r2, [r5, #16]	; fField16
        248870:	e1a00002 	mov	r0, r2
        248874:	e5922000 	ldr	r2, [r2]
        248878:	e1a0e00f 	mov	lr, pc
        24887c:	e282f008 	add	pc, r2, #8	; 0x8
        248880:	e28d0070 	add	r0, sp, #112	; 0x70
        248884:	eb615df2 	bl	1aa0054 <TBits::$RestorePort(void)>
        248888:	e1a0000d 	mov	r0, sp
        24888c:	eb666209 	bl	1be10b8 <$ExitHandler>
        248890:	e28dd06c 	add	sp, sp, #108	; 0x6c
        248894:	e28d0004 	add	r0, sp, #4	; 0x4
        248898:	e3a01000 	mov	r1, #0	; 0x0
        24889c:	eb60fef5 	bl	1a88478 <TBits::$__dt(void)>
        2488a0:	e28dd038 	add	sp, sp, #56	; 0x38
        2488a4:	e1a0000d 	mov	r0, sp
        2488a8:	e3a01000 	mov	r1, #0	; 0x0
        2488ac:	eb65e613 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2488b0:	e28dd004 	add	sp, sp, #4	; 0x4
        2488b4:	e28dd01c 	add	sp, sp, #28	; 0x1c
        2488b8:	e1a0000d 	mov	r0, sp
        2488bc:	eb6661fd 	bl	1be10b8 <$ExitHandler>
        2488c0:	ea00000c 	b	2488f8 <TXView::GetClipboardDataBits(TRect *)+0x210>
        2488c4:	0c104c58 	ldceq	12, cr4, [r0], -#352
        2488c8:	0c104d78 	ldceq	13, cr4, [r0], -#480
        2488cc:	e59d106c 	ldr	r1, [sp, #108]
        2488d0:	e3310000 	teq	r1, #0	; 0x0
        2488d4:	15960000 	ldrne	r0, [r6]
        2488d8:	1b6502fb 	blne	1b894cc <TXTempReferences::$Done(void *)>
        2488dc:	e28d00a4 	add	r0, sp, #164	; 0xa4
        2488e0:	e3a01000 	mov	r1, #0	; 0x0
        2488e4:	eb65e605 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2488e8:	e1a0000d 	mov	r0, sp
        2488ec:	eb666618 	bl	1be2154 <$NextHandler>
        2488f0:	eafffff5 	b	2488cc <TXView::GetClipboardDataBits(TRect *)+0x1e4>
        2488f4:	e3a07001 	mov	r7, #1	; 0x1
        2488f8:	e1b00005 	movs	r0, r5
        2488fc:	0a000002 	beq	24890c <TXView::GetClipboardDataBits(TRect *)+0x224>
        248900:	e3a01001 	mov	r1, #1	; 0x1
        248904:	e1a0e00f 	mov	lr, pc
        248908:	e590f000 	ldr	pc, [r0]
        24890c:	e3370000 	teq	r7, #0	; 0x0
        248910:	11a0000d 	movne	r0, sp
        248914:	1b66660e 	blne	1be2154 <$NextHandler>
        248918:	e1a00004 	mov	r0, r4
        24891c:	e5ad8068 	str	r8, [sp, #104]!
        248920:	e59d1002 	ldr	r1, [sp, #2]
        248924:	e1a01841 	mov	r1, r1, asr #16
        248928:	e59d2000 	ldr	r2, [sp]
        24892c:	e1a02842 	mov	r2, r2, asr #16
        248930:	eb6423ec 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        248934:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        248938:	e5904000 	ldr	r4, [r0]
        24893c:	eb65ea1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248940:	e1a00004 	mov	r0, r4
        248944:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::DrawDragData(TRect const &)
 * Address: 00248948
 */
TXView::DrawDragData(TRect const &) {
    /*
        248948:	e1a0c00d 	mov	ip, sp
        24894c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        248950:	e24cb004 	sub	fp, ip, #4	; 0x4
        248954:	e1a04000 	mov	r4, r0
        248958:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24895c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        248960:	e3a02000 	mov	r2, #0	; 0x0
        248964:	e3a01000 	mov	r1, #0	; 0x0
        248968:	eb6523c9 	bl	1b91894 <TXHilite::$GetHiliteRgn(unsigned char, unsigned char)>
        24896c:	e1a05000 	mov	r5, r0
        248970:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        248974:	e5900010 	ldr	r0, [r0, #16]	; fField16
        248978:	e1a02005 	mov	r2, r5
        24897c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        248980:	e1a00005 	mov	r0, r5
        248984:	eb642c11 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        248988:	e24dd010 	sub	sp, sp, #16	; 0x10
        24898c:	e1a0000d 	mov	r0, sp
        248990:	eb641b8e 	bl	1b4f7d0 <$GetPenState(PenState *)>
        248994:	eb6427e2 	bl	1b52924 <$PenNormal(void)>
        248998:	e3a00002 	mov	r0, #2	; 0x2
        24899c:	eb641b8f 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        2489a0:	eb642c12 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        2489a4:	e3a01002 	mov	r1, #2	; 0x2
        2489a8:	e3a00002 	mov	r0, #2	; 0x2
        2489ac:	eb6427dd 	bl	1b52928 <$PenSize__FlT1>
        2489b0:	e1a00005 	mov	r0, r5
        2489b4:	eb641b79 	bl	1b4f7a0 <$FrameRgn(Region **)>
        2489b8:	e1a0000d 	mov	r0, sp
        2489bc:	eb642c0d 	bl	1b539f8 <$SetPenState(PenState *)>
        2489c0:	e1a00005 	mov	r0, r5
        2489c4:	eb641345 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        2489c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::DrawDragBackground(TRect const &, unsigned char)
 * Address: 002489cc
 */
TXView::DrawDragBackground(TRect const &, unsigned char) {
    /*
        2489cc:	e3a00001 	mov	r0, #1	; 0x1
        2489d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXView::GetDropData(RefVar const &, RefVar const &)
 * Address: 002489d4
 */
TXView::GetDropData(RefVar const &, RefVar const &) {
    /*
        2489d4:	e1a0c00d 	mov	ip, sp
        2489d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2489dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2489e0:	e1a06000 	mov	r6, r0
        2489e4:	e1a05001 	mov	r5, r1
        2489e8:	e1a04002 	mov	r4, r2
        2489ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2489f0:	eb61a7c6 	bl	1ab2910 <TView::$GetDropData(RefVar const &, RefVar const &)>
        2489f4:	eb65e5d4 	bl	1bc214c <$AllocateRefHandle(long)>
        2489f8:	e58d0000 	str	r0, [sp]
        2489fc:	e5900000 	ldr	r0, [r0]
        248a00:	e3a08000 	mov	r8, #0	; 0x0
        248a04:	e3300002 	teq	r0, #2	; 0x2
        248a08:	1a0000a9 	bne	248cb4 <TXView::GetDropData(RefVar const &, RefVar const &)+0x2e0>
        248a0c:	e5940000 	ldr	r0, [r4]
        248a10:	e5900000 	ldr	r0, [r0]
        248a14:	e1a01008 	mov	r1, r8
        248a18:	eb65ee0d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        248a1c:	e3100003 	tst	r0, #3	; 0x3
        248a20:	01a00140 	moveq	r0, r0, asr #2
        248a24:	0a000000 	beq	248a2c <TXView::GetDropData(RefVar const &, RefVar const &)+0x58>
        248a28:	eb65e5bb 	bl	1bc211c <$_RINTError(long)>
        248a2c:	e1a07000 	mov	r7, r0
        248a30:	e5940000 	ldr	r0, [r4]
        248a34:	e5900000 	ldr	r0, [r0]
        248a38:	e3a01001 	mov	r1, #1	; 0x1
        248a3c:	eb65ee04 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        248a40:	e3100003 	tst	r0, #3	; 0x3
        248a44:	01a00140 	moveq	r0, r0, asr #2
        248a48:	0a000000 	beq	248a50 <TXView::GetDropData(RefVar const &, RefVar const &)+0x7c>
        248a4c:	eb65e5b2 	bl	1bc211c <$_RINTError(long)>
        248a50:	e1a0a000 	mov	sl, r0
        248a54:	e59f0128 	ldr	r0, [pc, #128]	; 248b84 <TXView::GetDropData(RefVar const &, RefVar const &)+0x1b0>
        248a58:	e5900000 	ldr	r0, [r0]
        248a5c:	e5901000 	ldr	r1, [r0]
        248a60:	e5950000 	ldr	r0, [r5]
        248a64:	e5900000 	ldr	r0, [r0]
        248a68:	eb65edf0 	bl	1bc4230 <$EQRef__FlT1>
        248a6c:	e3a09002 	mov	r9, #2	; 0x2
        248a70:	e3300000 	teq	r0, #0	; 0x0
        248a74:	1a000057 	bne	248bd8 <TXView::GetDropData(RefVar const &, RefVar const &)+0x204>
        248a78:	e24dd008 	sub	sp, sp, #8	; 0x8
        248a7c:	e5b60030 	ldr	r0, [r6, #48]!	; fField48
        248a80:	e58d7000 	str	r7, [sp]
        248a84:	e5cd8004 	strb	r8, [sp, #4]	; fField4
        248a88:	e89d0006 	ldmia	sp, {r1, r2}
        248a8c:	e5b0300c 	ldr	r3, [r0, #12]!	; fField12
        248a90:	e1a00003 	mov	r0, r3
        248a94:	e5933000 	ldr	r3, [r3]
        248a98:	e1a0e00f 	mov	lr, pc
        248a9c:	e283f00c 	add	pc, r3, #12	; 0xc
        248aa0:	e5901000 	ldr	r1, [r0]
        248aa4:	e1a0e00f 	mov	lr, pc
        248aa8:	e281f034 	add	pc, r1, #52	; 0x34
        248aac:	eb65e5a6 	bl	1bc214c <$AllocateRefHandle(long)>
        248ab0:	e1a06000 	mov	r6, r0
        248ab4:	e5900000 	ldr	r0, [r0]
        248ab8:	e3300002 	teq	r0, #2	; 0x2
        248abc:	0a000040 	beq	248bc4 <TXView::GetDropData(RefVar const &, RefVar const &)+0x1f0>
        248ac0:	e24dd008 	sub	sp, sp, #8	; 0x8
        248ac4:	e59f10bc 	ldr	r1, [pc, #bc]	; 248b88 <TXView::GetDropData(RefVar const &, RefVar const &)+0x1b4>
        248ac8:	e5911000 	ldr	r1, [r1]
        248acc:	e5911000 	ldr	r1, [r1]
        248ad0:	eb65ede2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        248ad4:	eb65e59c 	bl	1bc214c <$AllocateRefHandle(long)>
        248ad8:	e58d0000 	str	r0, [sp]
        248adc:	e1a0000d 	mov	r0, sp
        248ae0:	eb65e5a1 	bl	1bc216c <$Clone(RefVar const &)>
        248ae4:	eb65e598 	bl	1bc214c <$AllocateRefHandle(long)>
        248ae8:	e58d0004 	str	r0, [sp, #4]	; fField4
        248aec:	e59d0000 	ldr	r0, [sp]
        248af0:	eb65e9b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248af4:	e59f0090 	ldr	r0, [pc, #90]	; 248b8c <TXView::GetDropData(RefVar const &, RefVar const &)+0x1b8>
        248af8:	e5900000 	ldr	r0, [r0]
        248afc:	e5901000 	ldr	r1, [r0]
        248b00:	e5950000 	ldr	r0, [r5]
        248b04:	e5900000 	ldr	r0, [r0]
        248b08:	eb65edc8 	bl	1bc4230 <$EQRef__FlT1>
        248b0c:	e3300000 	teq	r0, #0	; 0x0
        248b10:	0a000020 	beq	248b98 <TXView::GetDropData(RefVar const &, RefVar const &)+0x1c4>
        248b14:	e24dd008 	sub	sp, sp, #8	; 0x8
        248b18:	e59f0070 	ldr	r0, [pc, #70]	; 248b90 <TXView::GetDropData(RefVar const &, RefVar const &)+0x1bc>	; fField70
        248b1c:	eb65e592 	bl	1bc216c <$Clone(RefVar const &)>
        248b20:	e59d1018 	ldr	r1, [sp, #24]
        248b24:	e5810000 	str	r0, [r1]
        248b28:	e1a00009 	mov	r0, r9
        248b2c:	eb65e586 	bl	1bc214c <$AllocateRefHandle(long)>
        248b30:	e58d0000 	str	r0, [sp]
        248b34:	e1a0500d 	mov	r5, sp
        248b38:	e1a00009 	mov	r0, r9
        248b3c:	eb65e582 	bl	1bc214c <$AllocateRefHandle(long)>
        248b40:	e58d0004 	str	r0, [sp, #4]	; fField4
        248b44:	e28d0004 	add	r0, sp, #4	; 0x4
        248b48:	e28d100c 	add	r1, sp, #12	; 0xc
        248b4c:	e1a02005 	mov	r2, r5
        248b50:	eb62402e 	bl	1ad8c10 <$FMakePict>
        248b54:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        248b58:	e5810000 	str	r0, [r1]
        248b5c:	e59d0000 	ldr	r0, [sp]
        248b60:	eb65e995 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248b64:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        248b68:	eb65e993 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248b6c:	e28d200c 	add	r2, sp, #12	; 0xc
        248b70:	e59f101c 	ldr	r1, [pc, #1c]	; 248b94 <TXView::GetDropData(RefVar const &, RefVar const &)+0x1c0>
        248b74:	e28d0018 	add	r0, sp, #24	; 0x18
        248b78:	eb65f5fa 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        248b7c:	e28dd008 	add	sp, sp, #8	; 0x8
        248b80:	ea00000c 	b	248bb8 <TXView::GetDropData(RefVar const &, RefVar const &)+0x1e4>
        248b84:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        248b88:	00684600 	rsbeq	r4, r8, r0, lsl #12
        248b8c:	00683ec0 	rsbeq	r3, r8, r0, asr #29
        248b90:	00680800 	rsbeq	r0, r8, r0, lsl #16
        248b94:	00683150 	rsbeq	r3, r8, r0, asr r1
        248b98:	e59f0034 	ldr	r0, [pc, #34]	; 248bd4 <TXView::GetDropData(RefVar const &, RefVar const &)+0x200>
        248b9c:	eb65e572 	bl	1bc216c <$Clone(RefVar const &)>
        248ba0:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        248ba4:	e28d2004 	add	r2, sp, #4	; 0x4
        248ba8:	e5810000 	str	r0, [r1]
        248bac:	e51f102c 	ldr	r1, [pc, #ffffffd4]	; 248b88 <TXView::GetDropData(RefVar const &, RefVar const &)+0x1b4>
        248bb0:	e28d0010 	add	r0, sp, #16	; 0x10
        248bb4:	eb65f5eb 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        248bb8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        248bbc:	eb65e97e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248bc0:	e28dd008 	add	sp, sp, #8	; 0x8
        248bc4:	e1a00006 	mov	r0, r6
        248bc8:	eb65e97b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248bcc:	e28dd008 	add	sp, sp, #8	; 0x8
        248bd0:	ea00001f 	b	248c54 <TXView::GetDropData(RefVar const &, RefVar const &)+0x280>
        248bd4:	00680e58 	rsbeq	r0, r8, r8, asr lr
        248bd8:	e59f00e8 	ldr	r0, [pc, #e8]	; 248cc8 <TXView::GetDropData(RefVar const &, RefVar const &)+0x2f4>
        248bdc:	eb65e562 	bl	1bc216c <$Clone(RefVar const &)>
        248be0:	e41d1020 	ldr	r1, [sp], -#32	; fField32
        248be4:	e5810000 	str	r0, [r1]
        248be8:	e28d1020 	add	r1, sp, #32	; 0x20
        248bec:	e28d0010 	add	r0, sp, #16	; 0x10
        248bf0:	eb652750 	bl	1b92938 <TXNewtContainer::$__ct(RefVar const &)>
        248bf4:	e3a03001 	mov	r3, #1	; 0x1
        248bf8:	e92d0008 	stmdb	sp!, {r3}
        248bfc:	e087200a 	add	r2, r7, sl
        248c00:	e1a01007 	mov	r1, r7
        248c04:	e28d0004 	add	r0, sp, #4	; 0x4
        248c08:	e3a03000 	mov	r3, #0	; 0x0
        248c0c:	ebffad0a 	bl	23403c <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)>
        248c10:	e28dd004 	add	sp, sp, #4	; 0x4
        248c14:	e28d2010 	add	r2, sp, #16	; 0x10
        248c18:	e1a0100d 	mov	r1, sp
        248c1c:	e3a03007 	mov	r3, #7	; 0x7
        248c20:	e5b60030 	ldr	r0, [r6, #48]!	; fField48
        248c24:	eb655cf3 	bl	1b9fff8 <Textension::$Export(TXOffsetRange *, TXContainer *, unsigned char)>
        248c28:	e3300000 	teq	r0, #0	; 0x0
        248c2c:	0a000004 	beq	248c44 <TXView::GetDropData(RefVar const &, RefVar const &)+0x270>
        248c30:	e1a01000 	mov	r1, r0
        248c34:	e59f0090 	ldr	r0, [pc, #90]	; 248ccc <TXView::GetDropData(RefVar const &, RefVar const &)+0x2f8>
        248c38:	e5900000 	ldr	r0, [r0]
        248c3c:	e3a02000 	mov	r2, #0	; 0x0
        248c40:	eb666955 	bl	1be319c <$Throw>
        248c44:	e28d0010 	add	r0, sp, #16	; 0x10
        248c48:	e3a01000 	mov	r1, #0	; 0x0
        248c4c:	eb65273a 	bl	1b9293c <TXNewtContainer::$__dt(void)>
        248c50:	e28dd020 	add	sp, sp, #32	; 0x20
        248c54:	e24dd008 	sub	sp, sp, #8	; 0x8
        248c58:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        248c5c:	e5900000 	ldr	r0, [r0]
        248c60:	e3300002 	teq	r0, #2	; 0x2
        248c64:	0a000011 	beq	248cb0 <TXView::GetDropData(RefVar const &, RefVar const &)+0x2dc>
        248c68:	e5940000 	ldr	r0, [r4]
        248c6c:	e5900000 	ldr	r0, [r0]
        248c70:	e1a01009 	mov	r1, r9
        248c74:	eb65ed76 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        248c78:	eb65e533 	bl	1bc214c <$AllocateRefHandle(long)>
        248c7c:	e58d0004 	str	r0, [sp, #4]	; fField4
        248c80:	e28d0004 	add	r0, sp, #4	; 0x4
        248c84:	eb65e538 	bl	1bc216c <$Clone(RefVar const &)>
        248c88:	eb65e52f 	bl	1bc214c <$AllocateRefHandle(long)>
        248c8c:	e58d0000 	str	r0, [sp]
        248c90:	e1a0200d 	mov	r2, sp
        248c94:	e59f1034 	ldr	r1, [pc, #34]	; 248cd0 <TXView::GetDropData(RefVar const &, RefVar const &)+0x2fc>
        248c98:	e28d0008 	add	r0, sp, #8	; 0x8
        248c9c:	eb65f5b1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        248ca0:	e59d0000 	ldr	r0, [sp]
        248ca4:	eb65e944 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248ca8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        248cac:	eb65e942 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248cb0:	e28dd008 	add	sp, sp, #8	; 0x8
        248cb4:	e59d0000 	ldr	r0, [sp]
        248cb8:	e5904000 	ldr	r4, [r0]
        248cbc:	eb65e93e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248cc0:	e1a00004 	mov	r0, r4
        248cc4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        248cc8:	00680878 	rsbeq	r0, r8, r8, ror r8
        248ccc:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        248cd0:	00684f08 	rsbeq	r4, r8, r8, lsl #30
    */
}

/**
 * Symbol: TXView::GetDropOffset(TPoint const &)
 * Address: 00248cd4
 */
TXView::GetDropOffset(TPoint const &) {
    /*
        248cd4:	e1a0c00d 	mov	ip, sp
        248cd8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        248cdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        248ce0:	e24dd018 	sub	sp, sp, #24	; 0x18
        248ce4:	e5900030 	ldr	r0, [r0, #48]	; fField48
        248ce8:	e5911000 	ldr	r1, [r1]
        248cec:	e28d2004 	add	r2, sp, #4	; 0x4
        248cf0:	e1a0300d 	mov	r3, sp
        248cf4:	e92d0008 	stmdb	sp!, {r3}
        248cf8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        248cfc:	e1a03002 	mov	r3, r2
        248d00:	e28d200c 	add	r2, sp, #12	; 0xc
        248d04:	eb650e4b 	bl	1b8c638 <TXDisplay::$PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        248d08:	e28dd004 	add	sp, sp, #4	; 0x4
        248d0c:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        248d10:	e3300000 	teq	r0, #0	; 0x0
        248d14:	13e00000 	mvnne	r0, #0	; 0x0
        248d18:	059d0008 	ldreq	r0, [sp, #8]	; fField8
        248d1c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXView::Cut(void)
 * Address: 00248d20
 */
TXView::Cut(void) {
    /*
        248d20:	e1a0c00d 	mov	ip, sp
        248d24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        248d28:	e24cb004 	sub	fp, ip, #4	; 0x4
        248d2c:	e1a04000 	mov	r4, r0
        248d30:	eb65504e 	bl	1b9ce70 <TXView::$Copy(void)>
        248d34:	e5d4005c 	ldrb	r0, [r4, #92]	; fField92
        248d38:	e3300000 	teq	r0, #0	; 0x0
        248d3c:	01a00004 	moveq	r0, r4
        248d40:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        248d44:	0a65504b 	beq	1b9ce78 <TXView::$Clear(void)>
        248d48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::GetSupportedDropTypes(void)
 * Address: 00248d4c
 */
TXView::GetSupportedDropTypes(void) {
    /*
        248d4c:	e1a0c00d 	mov	ip, sp
        248d50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        248d54:	e24cb004 	sub	fp, ip, #4	; 0x4
        248d58:	e3a00005 	mov	r0, #5	; 0x5
        248d5c:	eb614c0e 	bl	1a9bd9c <$MakeArray(long)>
        248d60:	eb65e4f9 	bl	1bc214c <$AllocateRefHandle(long)>
        248d64:	e1a04000 	mov	r4, r0
        248d68:	e59f0084 	ldr	r0, [pc, #84]	; 248df4 <TXView::GetSupportedDropTypes(void)+0xa8>	; fField84
        248d6c:	e5900000 	ldr	r0, [r0]
        248d70:	e5902000 	ldr	r2, [r0]
        248d74:	e3a01000 	mov	r1, #0	; 0x0
        248d78:	e5940000 	ldr	r0, [r4]
        248d7c:	eb65f575 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        248d80:	e59f0070 	ldr	r0, [pc, #70]	; 248df8 <TXView::GetSupportedDropTypes(void)+0xac>	; fField70
        248d84:	e5900000 	ldr	r0, [r0]
        248d88:	e5902000 	ldr	r2, [r0]
        248d8c:	e3a01001 	mov	r1, #1	; 0x1
        248d90:	e5940000 	ldr	r0, [r4]
        248d94:	eb65f56f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        248d98:	e59f005c 	ldr	r0, [pc, #5c]	; 248dfc <TXView::GetSupportedDropTypes(void)+0xb0>
        248d9c:	e5900000 	ldr	r0, [r0]
        248da0:	e5902000 	ldr	r2, [r0]
        248da4:	e3a01002 	mov	r1, #2	; 0x2
        248da8:	e5940000 	ldr	r0, [r4]
        248dac:	eb65f569 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        248db0:	e59f0048 	ldr	r0, [pc, #48]	; 248e00 <TXView::GetSupportedDropTypes(void)+0xb4>	; fField48
        248db4:	e5900000 	ldr	r0, [r0]
        248db8:	e5902000 	ldr	r2, [r0]
        248dbc:	e3a01003 	mov	r1, #3	; 0x3
        248dc0:	e5940000 	ldr	r0, [r4]
        248dc4:	eb65f563 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        248dc8:	e59f0034 	ldr	r0, [pc, #34]	; 248e04 <TXView::GetSupportedDropTypes(void)+0xb8>
        248dcc:	e5900000 	ldr	r0, [r0]
        248dd0:	e5902000 	ldr	r2, [r0]
        248dd4:	e3a01004 	mov	r1, #4	; 0x4
        248dd8:	e5940000 	ldr	r0, [r4]
        248ddc:	eb65f55d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        248de0:	e5945000 	ldr	r5, [r4]
        248de4:	e1a00004 	mov	r0, r4
        248de8:	eb65e8f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248dec:	e1a00005 	mov	r0, r5
        248df0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        248df4:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        248df8:	00684600 	rsbeq	r4, r8, r0, lsl #12
        248dfc:	00683f28 	rsbeq	r3, r8, r8, lsr #30
        248e00:	00683220 	rsbeq	r3, r8, r0, lsr #4
        248e04:	00683ec0 	rsbeq	r3, r8, r0, asr #29
    */
}

/**
 * Symbol: TXView::GetSupportedDropTypes(TPoint const &)
 * Address: 00248e08
 */
TXView::GetSupportedDropTypes(TPoint const &) {
    /*
        248e08:	e1a0c00d 	mov	ip, sp
        248e0c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        248e10:	e24cb004 	sub	fp, ip, #4	; 0x4
        248e14:	e1a04000 	mov	r4, r0
        248e18:	e1a05001 	mov	r5, r1
        248e1c:	eb61aae0 	bl	1ab39a4 <TView::$GetSupportedDropTypes(TPoint const &)>
        248e20:	eb65e4c9 	bl	1bc214c <$AllocateRefHandle(long)>
        248e24:	e1a06000 	mov	r6, r0
        248e28:	e5900000 	ldr	r0, [r0]
        248e2c:	e3300002 	teq	r0, #2	; 0x2
        248e30:	1a00000d 	bne	248e6c <TXView::GetSupportedDropTypes(TPoint const &)+0x64>
        248e34:	e1a01005 	mov	r1, r5
        248e38:	e1a00004 	mov	r0, r4
        248e3c:	eb65542d 	bl	1b9def8 <TXView::$GetDropOffset(TPoint const &)>
        248e40:	e3500000 	cmp	r0, #0	; 0x0
        248e44:	ba000008 	blt	248e6c <TXView::GetSupportedDropTypes(TPoint const &)+0x64>
        248e48:	e24dd010 	sub	sp, sp, #16	; 0x10
        248e4c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        248e50:	e5900014 	ldr	r0, [r0, #20]	; fField20
        248e54:	e1a0100d 	mov	r1, sp
        248e58:	eb651e87 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        248e5c:	e1a00004 	mov	r0, r4
        248e60:	eb655425 	bl	1b9defc <TXView::$GetSupportedDropTypes(void)>
        248e64:	e5860000 	str	r0, [r6]
        248e68:	e28dd010 	add	sp, sp, #16	; 0x10
        248e6c:	e5964000 	ldr	r4, [r6]
        248e70:	e1a00006 	mov	r0, r6
        248e74:	eb65e8d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        248e78:	e1a00004 	mov	r0, r4
        248e7c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char)
 * Address: 00248e80
 */
TXView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char) {
    /*
        248e80:	e1a0c00d 	mov	ip, sp
        248e84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        248e88:	e24cb004 	sub	fp, ip, #4	; 0x4
        248e8c:	e1a04000 	mov	r4, r0
        248e90:	e1a05002 	mov	r5, r2
        248e94:	e20330ff 	and	r3, r3, #255	; 0xff
        248e98:	eb619204 	bl	1aad6b0 <TView::$DragFeedback(TDragInfo const &, TPoint const &, unsigned char)>
        248e9c:	e3300000 	teq	r0, #0	; 0x0
        248ea0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        248ea4:	e1a01005 	mov	r1, r5
        248ea8:	e1a00004 	mov	r0, r4
        248eac:	eb655411 	bl	1b9def8 <TXView::$GetDropOffset(TPoint const &)>
        248eb0:	e1a01000 	mov	r1, r0
        248eb4:	e24dd010 	sub	sp, sp, #16	; 0x10
        248eb8:	e3a02000 	mov	r2, #0	; 0x0
        248ebc:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        248ec0:	e58d1000 	str	r1, [sp]
        248ec4:	e5cd2004 	strb	r2, [sp, #4]	; fField4
        248ec8:	e59dc004 	ldr	ip, [sp, #4]	; fField4
        248ecc:	e59de000 	ldr	lr, [sp]
        248ed0:	e28d200c 	add	r2, sp, #12	; 0xc
        248ed4:	e3a03000 	mov	r3, #0	; 0x0
        248ed8:	e92d000c 	stmdb	sp!, {r2, r3}
        248edc:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        248ee0:	e28d0010 	add	r0, sp, #16	; 0x10
        248ee4:	e1a0200e 	mov	r2, lr
        248ee8:	e1a0300c 	mov	r3, ip
        248eec:	eb650dd3 	bl	1b8c640 <TXDisplay::$CharToPoint(TXOffset, int *, int *)>
        248ef0:	e28dd008 	add	sp, sp, #8	; 0x8
        248ef4:	e59d000a 	ldr	r0, [sp, #10]
        248ef8:	e1a00840 	mov	r0, r0, asr #16
        248efc:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        248f00:	e1a01841 	mov	r1, r1, asr #16
        248f04:	eb64226d 	bl	1b518c0 <$MoveTo__FlT1>
        248f08:	e3a00004 	mov	r0, #4	; 0x4
        248f0c:	eb641a33 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        248f10:	eb642ab6 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        248f14:	e3a0000a 	mov	r0, #10	; 0xa
        248f18:	eb642680 	bl	1b52920 <$PenMode(long)>
        248f1c:	e3a01001 	mov	r1, #1	; 0x1
        248f20:	e3a00002 	mov	r0, #2	; 0x2
        248f24:	eb64267f 	bl	1b52928 <$PenSize__FlT1>
        248f28:	e3a00000 	mov	r0, #0	; 0x0
        248f2c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        248f30:	eb642252 	bl	1b51880 <$Line__FlT1>
        248f34:	eb64267a 	bl	1b52924 <$PenNormal(void)>
        248f38:	e3a00001 	mov	r0, #1	; 0x1
        248f3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::AcceptDrop(TDragInfo const &, TPoint const &)
 * Address: 00248f40
 */
TXView::AcceptDrop(TDragInfo const &, TPoint const &) {
    /*
        248f40:	e5d0005c 	ldrb	r0, [r0, #92]	; fField92
        248f44:	e3300000 	teq	r0, #0	; 0x0
        248f48:	13a00000 	movne	r0, #0	; 0x0
        248f4c:	03a00001 	moveq	r0, #1	; 0x1
        248f50:	e20000ff 	and	r0, r0, #255	; 0xff
        248f54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)
 * Address: 00248f58
 */
TXView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char) {
    /*
        248f58:	e1a0c00d 	mov	ip, sp
        248f5c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        248f60:	e24cb004 	sub	fp, ip, #4	; 0x4
        248f64:	e1a04000 	mov	r4, r0
        248f68:	e1a05003 	mov	r5, r3
        248f6c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        248f70:	e20030ff 	and	r3, r0, #255	; 0xff
        248f74:	e1a06003 	mov	r6, r3
        248f78:	e92d0008 	stmdb	sp!, {r3}
        248f7c:	e1a03005 	mov	r3, r5
        248f80:	e1a00004 	mov	r0, r4
        248f84:	eb6191d6 	bl	1aad6e4 <TView::$DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)>
        248f88:	e28dd004 	add	sp, sp, #4	; 0x4
        248f8c:	e3300000 	teq	r0, #0	; 0x0
        248f90:	1a000021 	bne	24901c <TXView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0xc4>
        248f94:	e1a01005 	mov	r1, r5
        248f98:	e1a00004 	mov	r0, r4
        248f9c:	eb6553d5 	bl	1b9def8 <TXView::$GetDropOffset(TPoint const &)>
        248fa0:	e1b05000 	movs	r5, r0
        248fa4:	4a00001c 	bmi	24901c <TXView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0xc4>
        248fa8:	e59f0074 	ldr	r0, [pc, #74]	; 249024 <TXView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0xcc>
        248fac:	e5900000 	ldr	r0, [r0]
        248fb0:	e3a01000 	mov	r1, #0	; 0x0
        248fb4:	eb6170ba 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        248fb8:	e24dd010 	sub	sp, sp, #16	; 0x10
        248fbc:	e5940030 	ldr	r0, [r4, #48]	; fField48
        248fc0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        248fc4:	e1a0100d 	mov	r1, sp
        248fc8:	eb651e2b 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        248fcc:	e24dd008 	sub	sp, sp, #8	; 0x8
        248fd0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        248fd4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        248fd8:	e1300001 	teq	r0, r1
        248fdc:	0a000005 	beq	248ff8 <TXView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0xa0>
        248fe0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        248fe4:	e1500005 	cmp	r0, r5
        248fe8:	ca000002 	bgt	248ff8 <TXView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0xa0>
        248fec:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        248ff0:	e1500005 	cmp	r0, r5
        248ff4:	aa000007 	bge	249018 <TXView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0xc0>
        248ff8:	e3a00000 	mov	r0, #0	; 0x0
        248ffc:	e58d5000 	str	r5, [sp]
        249000:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        249004:	e1a0200d 	mov	r2, sp
        249008:	e1a03006 	mov	r3, r6
        24900c:	e28d1008 	add	r1, sp, #8	; 0x8
        249010:	e1a00004 	mov	r0, r4
        249014:	eb6553a6 	bl	1b9deb4 <TXView::$NewMoveTextCommand(TXOffsetRange const &, TXOffset const &, unsigned char)>
        249018:	e28dd018 	add	sp, sp, #24	; 0x18
        24901c:	e3a00001 	mov	r0, #1	; 0x1
        249020:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        249024:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXView::DropRemove(RefVar const &)
 * Address: 00249028
 */
TXView::DropRemove(RefVar const &) {
    /*
        249028:	e1a0c00d 	mov	ip, sp
        24902c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        249030:	e24cb004 	sub	fp, ip, #4	; 0x4
        249034:	e1a04000 	mov	r4, r0
        249038:	eb6191ae 	bl	1aad6f8 <TView::$DropRemove(RefVar const &)>
        24903c:	e3300000 	teq	r0, #0	; 0x0
        249040:	1a000005 	bne	24905c <TXView::DropRemove(RefVar const &)+0x34>
        249044:	e59f0018 	ldr	r0, [pc, #18]	; 249064 <TXView::DropRemove(RefVar const &)+0x3c>
        249048:	e5900000 	ldr	r0, [r0]
        24904c:	e3a01000 	mov	r1, #0	; 0x0
        249050:	eb617093 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        249054:	e1a00004 	mov	r0, r4
        249058:	eb654f86 	bl	1b9ce78 <TXView::$Clear(void)>
        24905c:	e3a00001 	mov	r0, #1	; 0x1
        249060:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        249064:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXView::Drop(RefVar const &, RefVar const &, TPoint *)
 * Address: 00249184
 */
TXView::Drop(RefVar const &, RefVar const &, TPoint *) {
    /*
        249184:	e1a0c00d 	mov	ip, sp
        249188:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24918c:	e24cb004 	sub	fp, ip, #4	; 0x4
        249190:	e1a04000 	mov	r4, r0
        249194:	e1a07001 	mov	r7, r1
        249198:	e1a06002 	mov	r6, r2
        24919c:	e1a05003 	mov	r5, r3
        2491a0:	e5d0105c 	ldrb	r1, [r0, #92]	; fField92
        2491a4:	e3a00000 	mov	r0, #0	; 0x0
        2491a8:	e3310000 	teq	r1, #0	; 0x0
        2491ac:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2491b0:	e1a03005 	mov	r3, r5
        2491b4:	e1a02006 	mov	r2, r6
        2491b8:	e1a01007 	mov	r1, r7
        2491bc:	e1a00004 	mov	r0, r4
        2491c0:	eb619551 	bl	1aae70c <TView::$Drop(RefVar const &, RefVar const &, TPoint *)>
        2491c4:	e3300000 	teq	r0, #0	; 0x0
        2491c8:	1a000033 	bne	24929c <TXView::Drop(RefVar const &, RefVar const &, TPoint *)+0x118>
        2491cc:	e1a01005 	mov	r1, r5
        2491d0:	e1a00004 	mov	r0, r4
        2491d4:	eb655347 	bl	1b9def8 <TXView::$GetDropOffset(TPoint const &)>
        2491d8:	e1b08000 	movs	r8, r0
        2491dc:	4a00002e 	bmi	24929c <TXView::Drop(RefVar const &, RefVar const &, TPoint *)+0x118>
        2491e0:	e59f00bc 	ldr	r0, [pc, #bc]	; 2492a4 <TXView::Drop(RefVar const &, RefVar const &, TPoint *)+0x120>
        2491e4:	e5900000 	ldr	r0, [r0]
        2491e8:	e3a01000 	mov	r1, #0	; 0x0
        2491ec:	eb61702c 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        2491f0:	e24dd014 	sub	sp, sp, #20	; 0x14
        2491f4:	e1a01006 	mov	r1, r6
        2491f8:	e1a00007 	mov	r0, r7
        2491fc:	eb655744 	bl	1b9ef14 <$FixupDropData__FRC6RefVarT1>
        249200:	eb65e3d1 	bl	1bc214c <$AllocateRefHandle(long)>
        249204:	e3a03001 	mov	r3, #1	; 0x1
        249208:	e58d0010 	str	r0, [sp, #16]	; fField16
        24920c:	e92d0008 	stmdb	sp!, {r3}
        249210:	e1a02008 	mov	r2, r8
        249214:	e1a01008 	mov	r1, r8
        249218:	e28d0004 	add	r0, sp, #4	; 0x4
        24921c:	e3a03000 	mov	r3, #0	; 0x0
        249220:	ebffab85 	bl	23403c <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)>
        249224:	e28dd004 	add	sp, sp, #4	; 0x4
        249228:	e3a03001 	mov	r3, #1	; 0x1
        24922c:	e92d0008 	stmdb	sp!, {r3}
        249230:	e28d2014 	add	r2, sp, #20	; 0x14
        249234:	e28d1004 	add	r1, sp, #4	; 0x4
        249238:	e1a00004 	mov	r0, r4
        24923c:	eb655321 	bl	1b9dec8 <TXView::$Replace(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)>
        249240:	e24dd00c 	sub	sp, sp, #12	; 0xc
        249244:	e5940030 	ldr	r0, [r4, #48]	; fField48
        249248:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24924c:	e1a0100d 	mov	r1, sp
        249250:	eb651d89 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        249254:	e24dd004 	sub	sp, sp, #4	; 0x4
        249258:	e28d1004 	add	r1, sp, #4	; 0x4
        24925c:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        249260:	e3a02000 	mov	r2, #0	; 0x0
        249264:	e3a03000 	mov	r3, #0	; 0x0
        249268:	e8915000 	ldmia	r1, {ip, lr}
        24926c:	e92d000c 	stmdb	sp!, {r2, r3}
        249270:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        249274:	e28d0008 	add	r0, sp, #8	; 0x8
        249278:	e1a0200c 	mov	r2, ip
        24927c:	e1a0300e 	mov	r3, lr
        249280:	eb650cee 	bl	1b8c640 <TXDisplay::$CharToPoint(TXOffset, int *, int *)>
        249284:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        249288:	e5850000 	str	r0, [r5]
        24928c:	e28dd014 	add	sp, sp, #20	; 0x14
        249290:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        249294:	eb65e7c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        249298:	e28dd014 	add	sp, sp, #20	; 0x14
        24929c:	e3a00001 	mov	r0, #1	; 0x1
        2492a0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2492a4:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXView::Copy(void)
 * Address: 00249550
 */
TXView::Copy(void) {
    /*
        249550:	e1a0c00d 	mov	ip, sp
        249554:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        249558:	e24cb004 	sub	fp, ip, #4	; 0x4
        24955c:	e1a04000 	mov	r4, r0
        249560:	e24dd010 	sub	sp, sp, #16	; 0x10
        249564:	e5900030 	ldr	r0, [r0, #48]	; fField48
        249568:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24956c:	e1a0100d 	mov	r1, sp
        249570:	eb651cc1 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        249574:	e59d0000 	ldr	r0, [sp]
        249578:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        24957c:	e1310000 	teq	r1, r0
        249580:	0a000012 	beq	2495d0 <TXView::Copy(void)+0x80>
        249584:	e24dd004 	sub	sp, sp, #4	; 0x4
        249588:	e1a0000d 	mov	r0, sp
        24958c:	e3a01000 	mov	r1, #0	; 0x0
        249590:	eb622d34 	bl	1ad4a68 <TDragInfo::$__ct(long)>
        249594:	e1a0100d 	mov	r1, sp
        249598:	e1a00004 	mov	r0, r4
        24959c:	eb65524e 	bl	1b9dedc <TXView::$GetDragInfo(TDragInfo *)>
        2495a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2495a4:	e1a0100d 	mov	r1, sp
        2495a8:	e1a00004 	mov	r0, r4
        2495ac:	eb654e14 	bl	1b9ce04 <TXView::$GetHiliteBounds(Rect *)>
        2495b0:	e1a0200d 	mov	r2, sp
        2495b4:	e1a01004 	mov	r1, r4
        2495b8:	e28d0008 	add	r0, sp, #8	; 0x8
        2495bc:	e3a03000 	mov	r3, #0	; 0x0
        2495c0:	eb626703 	bl	1ae31d4 <$NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint>
        2495c4:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        2495c8:	eb65e6fb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2495cc:	e28dd004 	add	sp, sp, #4	; 0x4
        2495d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::Paste(void)
 * Address: 002495d4
 */
TXView::Paste(void) {
    /*
        2495d4:	e1a0c00d 	mov	ip, sp
        2495d8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2495dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2495e0:	e1a04000 	mov	r4, r0
        2495e4:	e3a05000 	mov	r5, #0	; 0x0
        2495e8:	e5d0005c 	ldrb	r0, [r0, #92]	; fField92
        2495ec:	e3300000 	teq	r0, #0	; 0x0
        2495f0:	1a00001d 	bne	24966c <TXView::Paste(void)+0x98>
        2495f4:	e59f0078 	ldr	r0, [pc, #78]	; 249674 <TXView::Paste(void)+0xa0>
        2495f8:	e5900000 	ldr	r0, [r0]
        2495fc:	eb62734c 	bl	1ae6334 <TRootView::$GetClipboard(void)>
        249600:	e1b06000 	movs	r6, r0
        249604:	0a000018 	beq	24966c <TXView::Paste(void)+0x98>
        249608:	e24dd004 	sub	sp, sp, #4	; 0x4
        24960c:	e1a0000d 	mov	r0, sp
        249610:	e3a01000 	mov	r1, #0	; 0x0
        249614:	eb622d13 	bl	1ad4a68 <TDragInfo::$__ct(long)>
        249618:	e1a0100d 	mov	r1, sp
        24961c:	e1a00006 	mov	r0, r6
        249620:	eb6266ed 	bl	1ae31dc <TClipboard::$GetClipboardDataInfo(TDragInfo *)>
        249624:	e24dd004 	sub	sp, sp, #4	; 0x4
        249628:	e1a00004 	mov	r0, r4
        24962c:	eb655232 	bl	1b9defc <TXView::$GetSupportedDropTypes(void)>
        249630:	eb65e2c5 	bl	1bc214c <$AllocateRefHandle(long)>
        249634:	e58d0000 	str	r0, [sp]
        249638:	e1a0100d 	mov	r1, sp
        24963c:	e28d0004 	add	r0, sp, #4	; 0x4
        249640:	eb621022 	bl	1acd6d0 <TDragInfo::$CheckTypes( const(RefVar const &))>
        249644:	e3300000 	teq	r0, #0	; 0x0
        249648:	0a000002 	beq	249658 <TXView::Paste(void)+0x84>
        24964c:	e1a00004 	mov	r0, r4
        249650:	eb655216 	bl	1b9deb0 <TXView::$NewPasteCommand(void)>
        249654:	e3a05001 	mov	r5, #1	; 0x1
        249658:	e59d0000 	ldr	r0, [sp]
        24965c:	eb65e6d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        249660:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        249664:	eb65e6d4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        249668:	e28dd004 	add	sp, sp, #4	; 0x4
        24966c:	e1a00005 	mov	r0, r5
        249670:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        249674:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXView::Clear(void)
 * Address: 00249678
 */
TXView::Clear(void) {
    /*
        249678:	e1a0c00d 	mov	ip, sp
        24967c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        249680:	e24cb004 	sub	fp, ip, #4	; 0x4
        249684:	e1a04000 	mov	r4, r0
        249688:	e5d0005c 	ldrb	r0, [r0, #92]	; fField92
        24968c:	e3300000 	teq	r0, #0	; 0x0
        249690:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        249694:	e24dd010 	sub	sp, sp, #16	; 0x10
        249698:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24969c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2496a0:	e1a0100d 	mov	r1, sp
        2496a4:	eb651c74 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        2496a8:	e24dd024 	sub	sp, sp, #36	; 0x24
        2496ac:	e1a0000d 	mov	r0, sp
        2496b0:	eb655a52 	bl	1ba0000 <TXReplaceParams::$__ct(void)>
        2496b4:	e1a0200d 	mov	r2, sp
        2496b8:	e28d1024 	add	r1, sp, #36	; 0x24
        2496bc:	e1a00004 	mov	r0, r4
        2496c0:	eb6551f9 	bl	1b9deac <TXView::$NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)>
        2496c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::Scrub(TUnitPublic *)
 * Address: 002496c8
 */
TXView::Scrub(TUnitPublic *) {
    /*
        2496c8:	e1a0c00d 	mov	ip, sp
        2496cc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2496d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2496d4:	e1a04000 	mov	r4, r0
        2496d8:	e1a05001 	mov	r5, r1
        2496dc:	e5d0005c 	ldrb	r0, [r0, #92]	; fField92
        2496e0:	e3a08000 	mov	r8, #0	; 0x0
        2496e4:	e3300000 	teq	r0, #0	; 0x0
        2496e8:	11a00008 	movne	r0, r8
        2496ec:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2496f0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2496f4:	e1a0100d 	mov	r1, sp
        2496f8:	e1a00005 	mov	r0, r5
        2496fc:	eb61039b 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        249700:	e24dd010 	sub	sp, sp, #16	; 0x10
        249704:	e5940030 	ldr	r0, [r4, #48]	; fField48
        249708:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24970c:	e1a0100d 	mov	r1, sp
        249710:	eb651c59 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        249714:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        249718:	e59d1000 	ldr	r1, [sp]
        24971c:	e1300001 	teq	r0, r1
        249720:	0a000017 	beq	249784 <TXView::Scrub(TUnitPublic *)+0xbc>
        249724:	e5940030 	ldr	r0, [r4, #48]	; fField48
        249728:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24972c:	e3a02000 	mov	r2, #0	; 0x0
        249730:	e3a01000 	mov	r1, #0	; 0x0
        249734:	eb652056 	bl	1b91894 <TXHilite::$GetHiliteRgn(unsigned char, unsigned char)>
        249738:	e1a01000 	mov	r1, r0
        24973c:	e1a07000 	mov	r7, r0
        249740:	e28d0010 	add	r0, sp, #16	; 0x10
        249744:	eb642893 	bl	1b53998 <$RectInRgn(Rect *, Region **)>
        249748:	e1b06000 	movs	r6, r0
        24974c:	e24dd008 	sub	sp, sp, #8	; 0x8
        249750:	0a000006 	beq	249770 <TXView::Scrub(TUnitPublic *)+0xa8>
        249754:	e5970000 	ldr	r0, [r7]
        249758:	e2800004 	add	r0, r0, #4	; 0x4
        24975c:	e8905000 	ldmia	r0, {ip, lr}
        249760:	e88d5000 	stmia	sp, {ip, lr}
        249764:	e28d1018 	add	r1, sp, #24	; 0x18
        249768:	e89d5000 	ldmia	sp, {ip, lr}
        24976c:	e8815000 	stmia	r1, {ip, lr}
        249770:	e1a00007 	mov	r0, r7
        249774:	eb640fd9 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        249778:	e28dd008 	add	sp, sp, #8	; 0x8
        24977c:	e3360000 	teq	r6, #0	; 0x0
        249780:	1a000021 	bne	24980c <TXView::Scrub(TUnitPublic *)+0x144>
        249784:	e24dd008 	sub	sp, sp, #8	; 0x8
        249788:	e1a0300d 	mov	r3, sp
        24978c:	e28d2004 	add	r2, sp, #4	; 0x4
        249790:	e28d1018 	add	r1, sp, #24	; 0x18
        249794:	e1a00004 	mov	r0, r4
        249798:	eb6551b8 	bl	1b9de80 <TXView::$GetIntersectedLines(TRect const &, long *, long *)>
        24979c:	e3300000 	teq	r0, #0	; 0x0
        2497a0:	01a00008 	moveq	r0, r8
        2497a4:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2497a8:	e28d3008 	add	r3, sp, #8	; 0x8
        2497ac:	e92d0008 	stmdb	sp!, {r3}
        2497b0:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2497b4:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        2497b8:	e28d101c 	add	r1, sp, #28	; 0x1c
        2497bc:	e1a00004 	mov	r0, r4
        2497c0:	eb6551b1 	bl	1b9de8c <TXView::$IsLinesScrub(TRect const &, long, long, TXOffsetRange *)>
        2497c4:	e28dd004 	add	sp, sp, #4	; 0x4
        2497c8:	e3300000 	teq	r0, #0	; 0x0
        2497cc:	1a000009 	bne	2497f8 <TXView::Scrub(TUnitPublic *)+0x130>
        2497d0:	e28d3008 	add	r3, sp, #8	; 0x8
        2497d4:	e92d0008 	stmdb	sp!, {r3}
        2497d8:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2497dc:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        2497e0:	e28d101c 	add	r1, sp, #28	; 0x1c
        2497e4:	e1a00004 	mov	r0, r4
        2497e8:	eb6551a8 	bl	1b9de90 <TXView::$IsCharOrWordsScrub(TRect const &, long, long, TXOffsetRange *)>
        2497ec:	e28dd004 	add	sp, sp, #4	; 0x4
        2497f0:	e3300000 	teq	r0, #0	; 0x0
        2497f4:	0a000001 	beq	249800 <TXView::Scrub(TUnitPublic *)+0x138>
        2497f8:	e3a00001 	mov	r0, #1	; 0x1
        2497fc:	ea000000 	b	249804 <TXView::Scrub(TUnitPublic *)+0x13c>
        249800:	e3a00000 	mov	r0, #0	; 0x0
        249804:	e20060ff 	and	r6, r0, #255	; 0xff
        249808:	e28dd008 	add	sp, sp, #8	; 0x8
        24980c:	e3360000 	teq	r6, #0	; 0x0
        249810:	0a000018 	beq	249878 <TXView::Scrub(TUnitPublic *)+0x1b0>
        249814:	e24dd024 	sub	sp, sp, #36	; 0x24
        249818:	e1a0000d 	mov	r0, sp
        24981c:	eb6559f7 	bl	1ba0000 <TXReplaceParams::$__ct(void)>
        249820:	e1a00005 	mov	r0, r5
        249824:	eb616671 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        249828:	e3a01000 	mov	r1, #0	; 0x0
        24982c:	eb614132 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        249830:	e24dd0bc 	sub	sp, sp, #188	; 0xbc
        249834:	e1a0000d 	mov	r0, sp
        249838:	eb60fafb 	bl	1a8842c <TAnimate::$__ct(void)>
        24983c:	e28d20f0 	add	r2, sp, #240	; 0xf0
        249840:	e1a01004 	mov	r1, r4
        249844:	e1a0000d 	mov	r0, sp
        249848:	eb616247 	bl	1aa216c <TAnimate::$SetupPoofEffect(TView *, TRect const &)>
        24984c:	e59f102c 	ldr	r1, [pc, #2c]	; 249880 <TXView::Scrub(TUnitPublic *)+0x1b8>
        249850:	e1a0000d 	mov	r0, sp
        249854:	eb611c05 	bl	1a90870 <TAnimate::$DoEffect(RefVar const &)>
        249858:	e28d20bc 	add	r2, sp, #188	; 0xbc
        24985c:	e28d10e0 	add	r1, sp, #224	; 0xe0
        249860:	e1a00004 	mov	r0, r4
        249864:	eb655190 	bl	1b9deac <TXView::$NewReplaceTextCommand(TXOffsetRange const &, TXReplaceParams *)>
        249868:	e1a0000d 	mov	r0, sp
        24986c:	e3a01000 	mov	r1, #0	; 0x0
        249870:	ebf7e4af 	bl	42b34 <TAnimate::__dt(void)>
        249874:	e28dd0e0 	add	sp, sp, #224	; 0xe0
        249878:	e1a00006 	mov	r0, r6
        24987c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        249880:	00680628 	rsbeq	r0, r8, r8, lsr #12
    */
}

/**
 * Symbol: TXView::GetIntersectedLines(TRect const &, long *, long *)
 * Address: 00249884
 */
TXView::GetIntersectedLines(TRect const &, long *, long *) {
    /*
        249884:	e1a0c00d 	mov	ip, sp
        249888:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24988c:	e24cb004 	sub	fp, ip, #4	; 0x4
        249890:	e1a04001 	mov	r4, r1
        249894:	e1a05002 	mov	r5, r2
        249898:	e1a06003 	mov	r6, r3
        24989c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2498a0:	e5900030 	ldr	r0, [r0, #48]	; fField48
        2498a4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2498a8:	e5b07008 	ldr	r7, [r0, #8]!	; fField8
        2498ac:	e5910006 	ldr	r0, [r1, #6]
        2498b0:	e1a00820 	mov	r0, r0, lsr #16
        2498b4:	e5cd0003 	strb	r0, [sp, #3]
        2498b8:	e1a00440 	mov	r0, r0, asr #8
        2498bc:	e5cd0002 	strb	r0, [sp, #2]
        2498c0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2498c4:	e1a00820 	mov	r0, r0, lsr #16
        2498c8:	e5cd0001 	strb	r0, [sp, #1]
        2498cc:	e1a00440 	mov	r0, r0, asr #8
        2498d0:	e44d0024 	strb	r0, [sp], -#36
        2498d4:	e28d2028 	add	r2, sp, #40	; 0x28
        2498d8:	e1a00007 	mov	r0, r7
        2498dc:	e59d1024 	ldr	r1, [sp, #36]
        2498e0:	eb6517b4 	bl	1b8f7b8 <TXFrames::$PointToFrame( const(Point, unsigned char *))>
        2498e4:	e1a08000 	mov	r8, r0
        2498e8:	e28d000c 	add	r0, sp, #12	; 0xc
        2498ec:	e3a02000 	mov	r2, #0	; 0x0
        2498f0:	e3a01014 	mov	r1, #20	; 0x14
        2498f4:	eb64ee73 	bl	1b852c8 <TXArray::$__ct(unsigned char, int)>
        2498f8:	e28d0004 	add	r0, sp, #4	; 0x4
        2498fc:	e8945000 	ldmia	r4, {ip, lr}
        249900:	e8805000 	stmia	r0, {ip, lr}
        249904:	e28d300c 	add	r3, sp, #12	; 0xc
        249908:	e1a0200d 	mov	r2, sp
        24990c:	e92d000c 	stmdb	sp!, {r2, r3}
        249910:	e1a03005 	mov	r3, r5
        249914:	e1a02008 	mov	r2, r8
        249918:	e28d100c 	add	r1, sp, #12	; 0xc
        24991c:	e1a00007 	mov	r0, r7
        249920:	eb6517a5 	bl	1b8f7bc <$SectLines__8TXFramesCFP4RectlPlT3P7TXArray>
        249924:	e28dd008 	add	sp, sp, #8	; 0x8
        249928:	e3300000 	teq	r0, #0	; 0x0
        24992c:	159d0000 	ldrne	r0, [sp]
        249930:	13300000 	teqne	r0, #0	; 0x0
        249934:	03a04000 	moveq	r4, #0	; 0x0
        249938:	0a000004 	beq	249950 <TXView::GetIntersectedLines(TRect const &, long *, long *)+0xcc>
        24993c:	e5951000 	ldr	r1, [r5]
        249940:	e0810000 	add	r0, r1, r0
        249944:	e2400001 	sub	r0, r0, #1	; 0x1
        249948:	e3a04001 	mov	r4, #1	; 0x1
        24994c:	e5860000 	str	r0, [r6]
        249950:	e28d000c 	add	r0, sp, #12	; 0xc
        249954:	e3a01000 	mov	r1, #0	; 0x0
        249958:	e1a0e00f 	mov	lr, pc
        24995c:	e59df00c 	ldr	pc, [sp, #12]	; fField12
        249960:	e1a00004 	mov	r0, r4
        249964:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::DerivedFrom( const(long))
 * Address: 0024af18
 */
TXView::DerivedFrom( const(long)) {
    /*
        24af18:	e1a0c00d 	mov	ip, sp
        24af1c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        24af20:	e24cb004 	sub	fp, ip, #4	; 0x4
        24af24:	e331006c 	teq	r1, #108	; 0x6c
        24af28:	0a000002 	beq	24af38 <TXView::DerivedFrom( const(long))+0x20>
        24af2c:	eb0061a3 	bl	2635c0 <TView::DerivedFrom( const(long))>
        24af30:	e3300000 	teq	r0, #0	; 0x0
        24af34:	0a000001 	beq	24af40 <TXView::DerivedFrom( const(long))+0x28>
        24af38:	e3a00001 	mov	r0, #1	; 0x1
        24af3c:	ea000000 	b	24af44 <TXView::DerivedFrom( const(long))+0x2c>
        24af40:	e3a00000 	mov	r0, #0	; 0x0
        24af44:	e20000ff 	and	r0, r0, #255	; 0xff
        24af48:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXView::SetBounds(TRect const &)
 * Address: 0024af4c
 */
TXView::SetBounds(TRect const &) {
    /*
        24af4c:	e1a0c00d 	mov	ip, sp
        24af50:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24af54:	e24cb004 	sub	fp, ip, #4	; 0x4
        24af58:	e1a04000 	mov	r4, r0
        24af5c:	eb6601a2 	bl	1bcb5ec <TView::$SetBounds(TRect const &)>
        24af60:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24af64:	e3300000 	teq	r0, #0	; 0x0
        24af68:	11a00004 	movne	r0, r4
        24af6c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        24af70:	1a653f79 	bne	1b9ad5c <TXView::$SyncViewRgn(void)>
        24af74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::SyncViewRgn(void)
 * Address: 0024af78
 */
TXView::SyncViewRgn(void) {
    /*
        24af78:	e1a0c00d 	mov	ip, sp
        24af7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24af80:	e24cb004 	sub	fp, ip, #4	; 0x4
        24af84:	e1a04000 	mov	r4, r0
        24af88:	e24dd010 	sub	sp, sp, #16	; 0x10
        24af8c:	e2800010 	add	r0, r0, #16	; 0x10
        24af90:	e28d1008 	add	r1, sp, #8	; 0x8
        24af94:	e8901008 	ldmia	r0, {r3, ip}
        24af98:	e8811008 	stmia	r1, {r3, ip}
        24af9c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        24afa0:	e3300000 	teq	r0, #0	; 0x0
        24afa4:	0a00000b 	beq	24afd8 <TXView::SyncViewRgn(void)+0x60>
        24afa8:	e28d1008 	add	r1, sp, #8	; 0x8
        24afac:	e8911008 	ldmia	r1, {r3, ip}
        24afb0:	e88d1008 	stmia	sp, {r3, ip}
        24afb4:	e59d0002 	ldr	r0, [sp, #2]
        24afb8:	e2800026 	add	r0, r0, #38	; 0x26
        24afbc:	e5cd0005 	strb	r0, [sp, #5]
        24afc0:	e1a00440 	mov	r0, r0, asr #8
        24afc4:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        24afc8:	e59d0006 	ldr	r0, [sp, #6]
        24afcc:	e5cd0009 	strb	r0, [sp, #9]
        24afd0:	e1a00440 	mov	r0, r0, asr #8
        24afd4:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        24afd8:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24afdc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24afe0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24afe4:	e59d100a 	ldr	r1, [sp, #10]
        24afe8:	e1a01841 	mov	r1, r1, asr #16
        24afec:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        24aff0:	e1a02842 	mov	r2, r2, asr #16
        24aff4:	eb6511e9 	bl	1b8f7a0 <TXFrames::$SetFramesOrigin(long, long)>
        24aff8:	e59f6054 	ldr	r6, [pc, #54]	; 24b054 <TXView::SyncViewRgn(void)+0xdc>
        24affc:	e5960000 	ldr	r0, [r6]
        24b000:	eb64f930 	bl	1b894c8 <TXTempReferences::$Get(void)>
        24b004:	e1a05000 	mov	r5, r0
        24b008:	e28d1008 	add	r1, sp, #8	; 0x8
        24b00c:	eb642262 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        24b010:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24b014:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24b018:	e1a01005 	mov	r1, r5
        24b01c:	eb650175 	bl	1b8b5f8 <TXDisplay::$SetViewRgn(Region **)>
        24b020:	e1a01005 	mov	r1, r5
        24b024:	e5960000 	ldr	r0, [r6]
        24b028:	eb64f927 	bl	1b894cc <TXTempReferences::$Done(void *)>
        24b02c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        24b030:	e3300000 	teq	r0, #0	; 0x0
        24b034:	11a0100d 	movne	r1, sp
        24b038:	1b6532de 	blne	1b97bb8 <TXRulerUI::$SetBounds(Rect const &)>
        24b03c:	e1a00004 	mov	r0, r4
        24b040:	e3a01000 	mov	r1, #0	; 0x0
        24b044:	e5942000 	ldr	r2, [r4]
        24b048:	e1a0e00f 	mov	lr, pc
        24b04c:	e282f054 	add	pc, r2, #84	; 0x54
        24b050:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        24b054:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXView::GeometryChanged(unsigned char)
 * Address: 0024b058
 */
TXView::GeometryChanged(unsigned char) {
    /*
        24b058:	e1a0c00d 	mov	ip, sp
        24b05c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24b060:	e24cb004 	sub	fp, ip, #4	; 0x4
        24b064:	e1a04000 	mov	r4, r0
        24b068:	e20160ff 	and	r6, r1, #255	; 0xff
        24b06c:	e24dd008 	sub	sp, sp, #8	; 0x8
        24b070:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24b074:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24b078:	e5900020 	ldr	r0, [r0, #32]	; fField32
        24b07c:	e5900000 	ldr	r0, [r0]
        24b080:	e2800004 	add	r0, r0, #4	; 0x4
        24b084:	e8901008 	ldmia	r0, {r3, ip}
        24b088:	e88d1008 	stmia	sp, {r3, ip}
        24b08c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        24b090:	e3500000 	cmp	r0, #0	; 0x0
        24b094:	ca000013 	bgt	24b0e8 <TXView::GeometryChanged(unsigned char)+0x90>
        24b098:	e59d1006 	ldr	r1, [sp, #6]
        24b09c:	e1a01841 	mov	r1, r1, asr #16
        24b0a0:	e59d0002 	ldr	r0, [sp, #2]
        24b0a4:	e0411840 	sub	r1, r1, r0, asr #16
        24b0a8:	e5942042 	ldr	r2, [r4, #66]	; fField66
        24b0ac:	e1a02842 	mov	r2, r2, asr #16
        24b0b0:	e5940046 	ldr	r0, [r4, #70]	; fField70
        24b0b4:	e0820840 	add	r0, r2, r0, asr #16
        24b0b8:	e0410000 	sub	r0, r1, r0
        24b0bc:	e5840038 	str	r0, [r4, #56]	; fField56
        24b0c0:	e5941040 	ldr	r1, [r4, #64]	; fField64
        24b0c4:	e1a01841 	mov	r1, r1, asr #16
        24b0c8:	e5940044 	ldr	r0, [r4, #68]	; fField68
        24b0cc:	e0812840 	add	r2, r1, r0, asr #16
        24b0d0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        24b0d4:	e1a01841 	mov	r1, r1, asr #16
        24b0d8:	e59d0000 	ldr	r0, [sp]
        24b0dc:	e0410840 	sub	r0, r1, r0, asr #16
        24b0e0:	e0400002 	sub	r0, r0, r2
        24b0e4:	e584003c 	str	r0, [r4, #60]	; fField60
        24b0e8:	e24dd014 	sub	sp, sp, #20	; 0x14
        24b0ec:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24b0f0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24b0f4:	e5b05008 	ldr	r5, [r0, #8]!	; fField8
        24b0f8:	e28d0008 	add	r0, sp, #8	; 0x8
        24b0fc:	eb650d99 	bl	1b8e768 <TXDisplayChanges::$__ct(void)>
        24b100:	e2841038 	add	r1, r4, #56	; 0x38
        24b104:	e8910003 	ldmia	r1, {r0, r1}
        24b108:	e58d0004 	str	r0, [sp, #4]	; fField4
        24b10c:	e58d1000 	str	r1, [sp]
        24b110:	e28d2008 	add	r2, sp, #8	; 0x8
        24b114:	e1a0100d 	mov	r1, sp
        24b118:	e1a00005 	mov	r0, r5
        24b11c:	e3a03000 	mov	r3, #0	; 0x0
        24b120:	e595c000 	ldr	ip, [r5]
        24b124:	e1a0e00f 	mov	lr, pc
        24b128:	e28cf00c 	add	pc, ip, #12	; 0xc
        24b12c:	e2841040 	add	r1, r4, #64	; 0x40
        24b130:	e28d2008 	add	r2, sp, #8	; 0x8
        24b134:	e1a00005 	mov	r0, r5
        24b138:	e5953000 	ldr	r3, [r5]
        24b13c:	e1a0e00f 	mov	lr, pc
        24b140:	e283f014 	add	pc, r3, #20	; 0x14
        24b144:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24b148:	e5900018 	ldr	r0, [r0, #24]
        24b14c:	eb6553b3 	bl	1ba0020 <TXFormatter::$CheckRulerSettings(void)>
        24b150:	e3360000 	teq	r6, #0	; 0x0
        24b154:	0a00000f 	beq	24b198 <TXView::GeometryChanged(unsigned char)+0x140>
        24b158:	e28d1008 	add	r1, sp, #8	; 0x8
        24b15c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24b160:	eb65538e 	bl	1b9ffa0 <Textension::$DisplayChanged(TXDisplayChanges const &)>
        24b164:	e1a00004 	mov	r0, r4
        24b168:	e3a01000 	mov	r1, #0	; 0x0
        24b16c:	eb654304 	bl	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
        24b170:	e1a00004 	mov	r0, r4
        24b174:	e3a01000 	mov	r1, #0	; 0x0
        24b178:	e5942000 	ldr	r2, [r4]
        24b17c:	e1a0e00f 	mov	lr, pc
        24b180:	e282f054 	add	pc, r2, #84	; 0x54
        24b184:	e1a00004 	mov	r0, r4
        24b188:	e3a03001 	mov	r3, #1	; 0x1
        24b18c:	e3a02001 	mov	r2, #1	; 0x1
        24b190:	e3a01000 	mov	r1, #0	; 0x0
        24b194:	eb654b41 	bl	1b9dea0 <TXView::$Edited(unsigned char, unsigned char, unsigned char)>
        24b198:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::RealDoCommand(RefVar const &)
 * Address: 0024b19c
 */
TXView::RealDoCommand(RefVar const &) {
    /*
        24b19c:	e1a0c00d 	mov	ip, sp
        24b1a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        24b1a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24b1a8:	e1a04000 	mov	r4, r0
        24b1ac:	e1a05001 	mov	r5, r1
        24b1b0:	e3a06000 	mov	r6, #0	; 0x0
        24b1b4:	e1a00001 	mov	r0, r1
        24b1b8:	eb616c62 	bl	1aa6348 <$CommandID(RefVar const &)>
        24b1bc:	e1a07000 	mov	r7, r0
        24b1c0:	e3500023 	cmp	r0, #35	; 0x23
        24b1c4:	0a000060 	beq	24b34c <TXView::RealDoCommand(RefVar const &)+0x1b0>
        24b1c8:	ca00004c 	bgt	24b300 <TXView::RealDoCommand(RefVar const &)+0x164>
        24b1cc:	e350000f 	cmp	r0, #15	; 0xf
        24b1d0:	0a000004 	beq	24b1e8 <TXView::RealDoCommand(RefVar const &)+0x4c>
        24b1d4:	ca000020 	bgt	24b25c <TXView::RealDoCommand(RefVar const &)+0xc0>
        24b1d8:	e330000b 	teq	r0, #11	; 0xb
        24b1dc:	0a00006e 	beq	24b39c <TXView::RealDoCommand(RefVar const &)+0x200>
        24b1e0:	e330000d 	teq	r0, #13	; 0xd
        24b1e4:	1a0000d4 	bne	24b53c <TXView::RealDoCommand(RefVar const &)+0x3a0>
        24b1e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        24b1ec:	e1a00005 	mov	r0, r5
        24b1f0:	eb616c58 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        24b1f4:	e1a06000 	mov	r6, r0
        24b1f8:	e1a0100d 	mov	r1, sp
        24b1fc:	eb60fcdb 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        24b200:	e24dd008 	sub	sp, sp, #8	; 0x8
        24b204:	e2840010 	add	r0, r4, #16	; 0x10
        24b208:	e8905000 	ldmia	r0, {ip, lr}
        24b20c:	e88d5000 	stmia	sp, {ip, lr}
        24b210:	e5940034 	ldr	r0, [r4, #52]	; fField52
        24b214:	e3300000 	teq	r0, #0	; 0x0
        24b218:	0a000004 	beq	24b230 <TXView::RealDoCommand(RefVar const &)+0x94>
        24b21c:	e59d0002 	ldr	r0, [sp, #2]
        24b220:	e2800026 	add	r0, r0, #38	; 0x26
        24b224:	e5cd0001 	strb	r0, [sp, #1]
        24b228:	e1a00440 	mov	r0, r0, asr #8
        24b22c:	e5cd0000 	strb	r0, [sp]
        24b230:	e1a0100d 	mov	r1, sp
        24b234:	e28d0008 	add	r0, sp, #8	; 0x8
        24b238:	eb611153 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        24b23c:	e350004b 	cmp	r0, #75	; 0x4b
        24b240:	da000068 	ble	24b3e8 <TXView::RealDoCommand(RefVar const &)+0x24c>
        24b244:	e337000f 	teq	r7, #15	; 0xf
        24b248:	e1a01006 	mov	r1, r6
        24b24c:	e1a00004 	mov	r0, r4
        24b250:	1a000061 	bne	24b3dc <TXView::RealDoCommand(RefVar const &)+0x240>
        24b254:	eb654b0e 	bl	1b9de94 <TXView::$HandleCaretGesture(TUnitPublic *)>
        24b258:	ea000060 	b	24b3e0 <TXView::RealDoCommand(RefVar const &)+0x244>
        24b25c:	e3300020 	teq	r0, #32	; 0x20
        24b260:	0a000039 	beq	24b34c <TXView::RealDoCommand(RefVar const &)+0x1b0>
        24b264:	e3300022 	teq	r0, #34	; 0x22
        24b268:	1a0000b3 	bne	24b53c <TXView::RealDoCommand(RefVar const &)+0x3a0>
        24b26c:	e1a02007 	mov	r2, r7
        24b270:	e1a01005 	mov	r1, r5
        24b274:	e1a00004 	mov	r0, r4
        24b278:	e3a03000 	mov	r3, #0	; 0x0
        24b27c:	eb627895 	bl	1ae94d8 <TView::$HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)>
        24b280:	e1b06000 	movs	r6, r0
        24b284:	1a0000ac 	bne	24b53c <TXView::RealDoCommand(RefVar const &)+0x3a0>
        24b288:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24b28c:	e1a00005 	mov	r0, r5
        24b290:	eb616c32 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        24b294:	eb65dbac 	bl	1bc214c <$AllocateRefHandle(long)>
        24b298:	e58d0008 	str	r0, [sp, #8]	; fField8
        24b29c:	e28d1008 	add	r1, sp, #8	; 0x8
        24b2a0:	e1a0000d 	mov	r0, sp
        24b2a4:	eb65d78b 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        24b2a8:	e1a0100d 	mov	r1, sp
        24b2ac:	e28d0004 	add	r0, sp, #4	; 0x4
        24b2b0:	eb65d787 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        24b2b4:	e1a0000d 	mov	r0, sp
        24b2b8:	e3a01000 	mov	r1, #0	; 0x0
        24b2bc:	eb65db8f 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        24b2c0:	e28d0004 	add	r0, sp, #4	; 0x4
        24b2c4:	eb65db92 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        24b2c8:	e1a06000 	mov	r6, r0
        24b2cc:	eb668d23 	bl	1bee760 <$Ustrlen>
        24b2d0:	e1a02000 	mov	r2, r0
        24b2d4:	e1a01006 	mov	r1, r6
        24b2d8:	e1a00004 	mov	r0, r4
        24b2dc:	eb6546e0 	bl	1b9ce64 <TXView::$KeyString(unsigned short *, long)>
        24b2e0:	e3a06001 	mov	r6, #1	; 0x1
        24b2e4:	e28d0004 	add	r0, sp, #4	; 0x4
        24b2e8:	e3a01000 	mov	r1, #0	; 0x0
        24b2ec:	eb65db83 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        24b2f0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        24b2f4:	eb65dfb0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b2f8:	e28dd00c 	add	sp, sp, #12	; 0xc
        24b2fc:	ea00008e 	b	24b53c <TXView::RealDoCommand(RefVar const &)+0x3a0>
        24b300:	e3300031 	teq	r0, #49	; 0x31
        24b304:	13300034 	teqne	r0, #52	; 0x34
        24b308:	0a000023 	beq	24b39c <TXView::RealDoCommand(RefVar const &)+0x200>
        24b30c:	e3300049 	teq	r0, #73	; 0x49
        24b310:	0a000037 	beq	24b3f4 <TXView::RealDoCommand(RefVar const &)+0x258>
        24b314:	e33000d3 	teq	r0, #211	; 0xd3
        24b318:	1a000087 	bne	24b53c <TXView::RealDoCommand(RefVar const &)+0x3a0>
        24b31c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24b320:	e1a00005 	mov	r0, r5
        24b324:	eb616c0d 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        24b328:	eb65db87 	bl	1bc214c <$AllocateRefHandle(long)>
        24b32c:	e58d0000 	str	r0, [sp]
        24b330:	e1a0100d 	mov	r1, sp
        24b334:	e1a00004 	mov	r0, r4
        24b338:	eb654ae1 	bl	1b9dec4 <TXView::$ExecuteCommand(RefVar const &)>
        24b33c:	e59d0000 	ldr	r0, [sp]
        24b340:	eb65df9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b344:	e28dd004 	add	sp, sp, #4	; 0x4
        24b348:	ea00007b 	b	24b53c <TXView::RealDoCommand(RefVar const &)+0x3a0>
        24b34c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24b350:	e1a0300d 	mov	r3, sp
        24b354:	e1a02007 	mov	r2, r7
        24b358:	e1a01005 	mov	r1, r5
        24b35c:	e1a00004 	mov	r0, r4
        24b360:	eb62785c 	bl	1ae94d8 <TView::$HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)>
        24b364:	e1b06000 	movs	r6, r0
        24b368:	03a06001 	moveq	r6, #1	; 0x1
        24b36c:	05dd0000 	ldreqb	r0, [sp]
        24b370:	03300000 	teqeq	r0, #0	; 0x0
        24b374:	1afffff2 	bne	24b344 <TXView::RealDoCommand(RefVar const &)+0x1a8>
        24b378:	e1a00005 	mov	r0, r5
        24b37c:	eb616bf5 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        24b380:	e2102402 	ands	r2, r0, #33554432	; 0x2000000
        24b384:	13a02001 	movne	r2, #1	; 0x1
        24b388:	e1a01800 	mov	r1, r0, lsl #16
        24b38c:	e1a01821 	mov	r1, r1, lsr #16
        24b390:	e1a00004 	mov	r0, r4
        24b394:	eb6546b1 	bl	1b9ce60 <TXView::$KeyDown(unsigned short, unsigned char)>
        24b398:	eaffffe9 	b	24b344 <TXView::RealDoCommand(RefVar const &)+0x1a8>
        24b39c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24b3a0:	e1a00005 	mov	r0, r5
        24b3a4:	eb616beb 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        24b3a8:	eb615f90 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        24b3ac:	e1a01000 	mov	r1, r0
        24b3b0:	e1a0000d 	mov	r0, sp
        24b3b4:	eb65469e 	bl	1b9ce34 <TXNewtPen::$__ct(TStrokePublic *)>
        24b3b8:	e1a02007 	mov	r2, r7
        24b3bc:	e1a0100d 	mov	r1, sp
        24b3c0:	e1a00004 	mov	r0, r4
        24b3c4:	eb653e6c 	bl	1b9ad7c <TXView::$Click(TXNewtPen *, unsigned long)>
        24b3c8:	e1a06000 	mov	r6, r0
        24b3cc:	e1a0000d 	mov	r0, sp
        24b3d0:	e3a01000 	mov	r1, #0	; 0x0
        24b3d4:	eb64f843 	bl	1b894e8 <TXPointingDevice::$__dt(void)>
        24b3d8:	eaffffc6 	b	24b2f8 <TXView::RealDoCommand(RefVar const &)+0x15c>
        24b3dc:	eb6546a6 	bl	1b9ce7c <TXView::$Scrub(TUnitPublic *)>
        24b3e0:	e1a06000 	mov	r6, r0
        24b3e4:	ea000000 	b	24b3ec <TXView::RealDoCommand(RefVar const &)+0x250>
        24b3e8:	e3a06001 	mov	r6, #1	; 0x1
        24b3ec:	e28dd010 	add	sp, sp, #16	; 0x10
        24b3f0:	ea000051 	b	24b53c <TXView::RealDoCommand(RefVar const &)+0x3a0>
        24b3f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        24b3f8:	e1a00005 	mov	r0, r5
        24b3fc:	eb616bd7 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        24b400:	eb65db51 	bl	1bc214c <$AllocateRefHandle(long)>
        24b404:	e58d0004 	str	r0, [sp, #4]	; fField4
        24b408:	e3a00002 	mov	r0, #2	; 0x2
        24b40c:	eb65db4e 	bl	1bc214c <$AllocateRefHandle(long)>
        24b410:	e58d0000 	str	r0, [sp]
        24b414:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24b418:	e5900000 	ldr	r0, [r0]
        24b41c:	e3300002 	teq	r0, #2	; 0x2
        24b420:	1a000004 	bne	24b438 <TXView::RealDoCommand(RefVar const &)+0x29c>
        24b424:	e1a00005 	mov	r0, r5
        24b428:	eb616bca 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        24b42c:	e1a00100 	mov	r0, r0, lsl #2
        24b430:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        24b434:	e5810000 	str	r0, [r1]
        24b438:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24b43c:	e5900000 	ldr	r0, [r0]
        24b440:	e3100003 	tst	r0, #3	; 0x3
        24b444:	1a000028 	bne	24b4ec <TXView::RealDoCommand(RefVar const &)+0x350>
        24b448:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24b44c:	e59f0088 	ldr	r0, [pc, #88]	; 24b4dc <TXView::RealDoCommand(RefVar const &)+0x340>	; fField88
        24b450:	eb65db45 	bl	1bc216c <$Clone(RefVar const &)>
        24b454:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        24b458:	e5810000 	str	r0, [r1]
        24b45c:	e28d0010 	add	r0, sp, #16	; 0x10
        24b460:	ebfcbe10 	bl	17aca8 <GetFontSize(RefVar const &)>
        24b464:	eb65db38 	bl	1bc214c <$AllocateRefHandle(long)>
        24b468:	e58d0000 	str	r0, [sp]
        24b46c:	e1a0200d 	mov	r2, sp
        24b470:	e59f1068 	ldr	r1, [pc, #68]	; 24b4e0 <TXView::RealDoCommand(RefVar const &)+0x344>	; fField68
        24b474:	e28d000c 	add	r0, sp, #12	; 0xc
        24b478:	eb65ebba 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24b47c:	e59d0000 	ldr	r0, [sp]
        24b480:	eb65df4d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b484:	e28d0010 	add	r0, sp, #16	; 0x10
        24b488:	eb6214df 	bl	1ad080c <$GetFontFace(RefVar const &)>
        24b48c:	eb65db2e 	bl	1bc214c <$AllocateRefHandle(long)>
        24b490:	e58d0004 	str	r0, [sp, #4]	; fField4
        24b494:	e28d2004 	add	r2, sp, #4	; 0x4
        24b498:	e59f1044 	ldr	r1, [pc, #44]	; 24b4e4 <TXView::RealDoCommand(RefVar const &)+0x348>
        24b49c:	e28d000c 	add	r0, sp, #12	; 0xc
        24b4a0:	eb65ebb0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24b4a4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24b4a8:	eb65df43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b4ac:	e28d0010 	add	r0, sp, #16	; 0x10
        24b4b0:	eb6214d6 	bl	1ad0810 <$GetFontFamilyNum(RefVar const &)>
        24b4b4:	eb65db24 	bl	1bc214c <$AllocateRefHandle(long)>
        24b4b8:	e58d0008 	str	r0, [sp, #8]	; fField8
        24b4bc:	e28d2008 	add	r2, sp, #8	; 0x8
        24b4c0:	e59f1020 	ldr	r1, [pc, #20]	; 24b4e8 <TXView::RealDoCommand(RefVar const &)+0x34c>	; fField20
        24b4c4:	e28d000c 	add	r0, sp, #12	; 0xc
        24b4c8:	eb65eba6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24b4cc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        24b4d0:	eb65df39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b4d4:	e28dd00c 	add	sp, sp, #12	; 0xc
        24b4d8:	ea000005 	b	24b4f4 <TXView::RealDoCommand(RefVar const &)+0x358>
        24b4dc:	00680ad8 	ldreqd	r0, [r8], -#168
        24b4e0:	006846a8 	rsbeq	r4, r8, r8, lsr #13
        24b4e4:	00682d28 	rsbeq	r2, r8, r8, lsr #26
        24b4e8:	00682d30 	rsbeq	r2, r8, r0, lsr sp
        24b4ec:	e59d1000 	ldr	r1, [sp]
        24b4f0:	e5810000 	str	r0, [r1]
        24b4f4:	e24dd010 	sub	sp, sp, #16	; 0x10
        24b4f8:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24b4fc:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24b500:	e1a0100d 	mov	r1, sp
        24b504:	eb6514dc 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        24b508:	e3a03000 	mov	r3, #0	; 0x0
        24b50c:	e92d0008 	stmdb	sp!, {r3}
        24b510:	e28d2014 	add	r2, sp, #20	; 0x14
        24b514:	e28d1004 	add	r1, sp, #4	; 0x4
        24b518:	e1a00004 	mov	r0, r4
        24b51c:	eb654a5d 	bl	1b9de98 <TXView::$ChangeRangeRuns(TXOffsetRange const &, RefVar const &, unsigned char, unsigned char)>
        24b520:	e28dd004 	add	sp, sp, #4	; 0x4
        24b524:	e3a06001 	mov	r6, #1	; 0x1
        24b528:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        24b52c:	eb65df22 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b530:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        24b534:	eb65df20 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b538:	e28dd018 	add	sp, sp, #24	; 0x18
        24b53c:	e1a01006 	mov	r1, r6
        24b540:	e1a00005 	mov	r0, r5
        24b544:	eb616b82 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        24b548:	e3360000 	teq	r6, #0	; 0x0
        24b54c:	1a000003 	bne	24b560 <TXView::RealDoCommand(RefVar const &)+0x3c4>
        24b550:	e1a01005 	mov	r1, r5
        24b554:	e1a00004 	mov	r0, r4
        24b558:	eb614e83 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
        24b55c:	e1a06000 	mov	r6, r0
        24b560:	e1a00006 	mov	r0, r6
        24b564:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::IsModified(void)
 * Address: 0024b568
 */
TXView::IsModified(void) {
    /*
        24b568:	e590004c 	ldr	r0, [r0, #76]	; fField76
        24b56c:	e2100002 	ands	r0, r0, #2	; 0x2
        24b570:	13a00001 	movne	r0, #1	; 0x1
        24b574:	e20000ff 	and	r0, r0, #255	; 0xff
        24b578:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXView::RealDraw(TRect &)
 * Address: 0024b57c
 */
TXView::RealDraw(TRect &) {
    /*
        24b57c:	e1a0c00d 	mov	ip, sp
        24b580:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24b584:	e24cb004 	sub	fp, ip, #4	; 0x4
        24b588:	e1a04000 	mov	r4, r0
        24b58c:	e1a05001 	mov	r5, r1
        24b590:	e5900034 	ldr	r0, [r0, #52]	; fField52
        24b594:	e3300000 	teq	r0, #0	; 0x0
        24b598:	0a00000a 	beq	24b5c8 <TXView::RealDraw(TRect &)+0x4c>
        24b59c:	e24dd008 	sub	sp, sp, #8	; 0x8
        24b5a0:	e1a0100d 	mov	r1, sp
        24b5a4:	eb653186 	bl	1b97bc4 <TXRulerUI::$GetBounds( const(Rect *))>
        24b5a8:	e1a0200d 	mov	r2, sp
        24b5ac:	e1a01005 	mov	r1, r5
        24b5b0:	e1a0000d 	mov	r0, sp
        24b5b4:	eb642104 	bl	1b539cc <$SectRect__FP4RectN21>
        24b5b8:	e3300000 	teq	r0, #0	; 0x0
        24b5bc:	15940034 	ldrne	r0, [r4, #52]	; fField52
        24b5c0:	1b653185 	blne	1b97bdc <TXRulerUI::$Draw(void)>
        24b5c4:	e28dd008 	add	sp, sp, #8	; 0x8
        24b5c8:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        24b5cc:	e1a01005 	mov	r1, r5
        24b5d0:	e5b02010 	ldr	r2, [r0, #16]!	; fField16
        24b5d4:	e1a00002 	mov	r0, r2
        24b5d8:	e5922000 	ldr	r2, [r2]
        24b5dc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        24b5e0:	e282f008 	add	pc, r2, #8	; 0x8
    */
}

/**
 * Symbol: TXView::Idle(long)
 * Address: 0024b5e4
 */
TXView::Idle(long) {
    /*
        24b5e4:	e1a0c00d 	mov	ip, sp
        24b5e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24b5ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        24b5f0:	e1a04000 	mov	r4, r0
        24b5f4:	e1a05001 	mov	r5, r1
        24b5f8:	e590004c 	ldr	r0, [r0, #76]	; fField76
        24b5fc:	e3100004 	tst	r0, #4	; 0x4
        24b600:	0a00000e 	beq	24b640 <TXView::Idle(long)+0x5c>
        24b604:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24b608:	e1a0000d 	mov	r0, sp
        24b60c:	e5941048 	ldr	r1, [r4, #72]	; fField72
        24b610:	eb654608 	bl	1b9ce38 <TXNewtPen::$__ct(Point)>
        24b614:	e1a0100d 	mov	r1, sp
        24b618:	e1a00004 	mov	r0, r4
        24b61c:	e3a02031 	mov	r2, #49	; 0x31
        24b620:	eb653dd5 	bl	1b9ad7c <TXView::$Click(TXNewtPen *, unsigned long)>
        24b624:	e594004c 	ldr	r0, [r4, #76]	; fField76
        24b628:	e3c00004 	bic	r0, r0, #4	; 0x4
        24b62c:	e584004c 	str	r0, [r4, #76]	; fField76
        24b630:	e1a0000d 	mov	r0, sp
        24b634:	e3a01000 	mov	r1, #0	; 0x0
        24b638:	eb64f7aa 	bl	1b894e8 <TXPointingDevice::$__dt(void)>
        24b63c:	e28dd00c 	add	sp, sp, #12	; 0xc
        24b640:	e1a01005 	mov	r1, r5
        24b644:	e1a00004 	mov	r0, r4
        24b648:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        24b64c:	ea65fbca 	b	1bca57c <TView::$Idle(long)>
    */
}

/**
 * Symbol: TXView::ClickLoop(unsigned char, void *)
 * Address: 0024b650
 */
TXView::ClickLoop(unsigned char, void *) {
    /*
        24b650:	e1a0c00d 	mov	ip, sp
        24b654:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24b658:	e24cb004 	sub	fp, ip, #4	; 0x4
        24b65c:	e1a04000 	mov	r4, r0
        24b660:	e20100ff 	and	r0, r1, #255	; 0xff
        24b664:	e3300001 	teq	r0, #1	; 0x1
        24b668:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        24b66c:	e5b20004 	ldr	r0, [r2, #4]!	; fField4
        24b670:	e3300000 	teq	r0, #0	; 0x0
        24b674:	15940034 	ldrne	r0, [r4, #52]	; fField52
        24b678:	13300000 	teqne	r0, #0	; 0x0
        24b67c:	1b65315a 	blne	1b97bec <TXRulerUI::$Scrolled(void)>
        24b680:	e1a00004 	mov	r0, r4
        24b684:	e3a02001 	mov	r2, #1	; 0x1
        24b688:	e3a01000 	mov	r1, #0	; 0x0
        24b68c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        24b690:	ea654a03 	b	1b9dea4 <TXView::$UpdateScrollers(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TXView::Click(TXNewtPen *, unsigned long)
 * Address: 0024b6ac
 */
TXView::Click(TXNewtPen *, unsigned long) {
    /*
        24b6ac:	e1a0c00d 	mov	ip, sp
        24b6b0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        24b6b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24b6b8:	e1a05000 	mov	r5, r0
        24b6bc:	e1a06001 	mov	r6, r1
        24b6c0:	e1a08002 	mov	r8, r2
        24b6c4:	e332000b 	teq	r2, #11	; 0xb
        24b6c8:	1a00000a 	bne	24b6f8 <TXView::Click(TXNewtPen *, unsigned long)+0x4c>
        24b6cc:	e1a01006 	mov	r1, r6
        24b6d0:	e1a00005 	mov	r0, r5
        24b6d4:	eb6541a9 	bl	1b9bd80 <TXView::$RulerClick(TXNewtPen *)>
        24b6d8:	e3300000 	teq	r0, #0	; 0x0
        24b6dc:	01a01006 	moveq	r1, r6
        24b6e0:	01a00005 	moveq	r0, r5
        24b6e4:	0b6549fd 	bleq	1b9dee0 <TXView::$CheckDrag(TXNewtPen *)>
        24b6e8:	e595104c 	ldr	r1, [r5, #76]	; fField76
        24b6ec:	e3c11004 	bic	r1, r1, #4	; 0x4
        24b6f0:	e5a5104c 	str	r1, [r5, #76]!	; fField76
        24b6f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        24b6f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        24b6fc:	e1a01006 	mov	r1, r6
        24b700:	e1a0000d 	mov	r0, sp
        24b704:	e1a0e00f 	mov	lr, pc
        24b708:	e596f000 	ldr	pc, [r6]
        24b70c:	e49d4004 	ldr	r4, [sp], #4	; fField4
        24b710:	e5950030 	ldr	r0, [r5, #48]	; fField48
        24b714:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24b718:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        24b71c:	e1a00004 	mov	r0, r4
        24b720:	eb641c86 	bl	1b52940 <$PtInRgn(Point, Region **)>
        24b724:	e3a07000 	mov	r7, #0	; 0x0
        24b728:	e3300000 	teq	r0, #0	; 0x0
        24b72c:	01a00007 	moveq	r0, r7
        24b730:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        24b734:	e3a0a000 	mov	sl, #0	; 0x0
        24b738:	e5950030 	ldr	r0, [r5, #48]	; fField48
        24b73c:	e5b09014 	ldr	r9, [r0, #20]!	; fField20
        24b740:	e1a00008 	mov	r0, r8
        24b744:	e59f8060 	ldr	r8, [pc, #60]	; 24b7ac <TXView::Click(TXNewtPen *, unsigned long)+0x100>	; fField60
        24b748:	e3300031 	teq	r0, #49	; 0x31
        24b74c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24b750:	1a000020 	bne	24b7d8 <TXView::Click(TXNewtPen *, unsigned long)+0x12c>
        24b754:	e595004c 	ldr	r0, [r5, #76]	; fField76
        24b758:	e3100004 	tst	r0, #4	; 0x4
        24b75c:	1a000014 	bne	24b7b4 <TXView::Click(TXNewtPen *, unsigned long)+0x108>
        24b760:	e1a00009 	mov	r0, r9
        24b764:	e1a01004 	mov	r1, r4
        24b768:	eb65184a 	bl	1b91898 <TXHilite::$IsPointInHilite(Point)>
        24b76c:	e3300000 	teq	r0, #0	; 0x0
        24b770:	0a00000f 	beq	24b7b4 <TXView::Click(TXNewtPen *, unsigned long)+0x108>
        24b774:	e595004c 	ldr	r0, [r5, #76]	; fField76
        24b778:	e3800004 	orr	r0, r0, #4	; 0x4
        24b77c:	e585004c 	str	r0, [r5, #76]	; fField76
        24b780:	e2850048 	add	r0, r5, #72	; 0x48
        24b784:	e5804000 	str	r4, [r0]
        24b788:	e59f0020 	ldr	r0, [pc, #20]	; 24b7b0 <TXView::Click(TXNewtPen *, unsigned long)+0x104>	; fField20
        24b78c:	e5900000 	ldr	r0, [r0]
        24b790:	e1a02200 	mov	r2, r0, lsl #4
        24b794:	e1a01005 	mov	r1, r5
        24b798:	e3a03000 	mov	r3, #0	; 0x0
        24b79c:	e5980000 	ldr	r0, [r8]
        24b7a0:	eb60f74d 	bl	1a894dc <TRootView::$AddIdler(TView *, unsigned long, long)>
        24b7a4:	e1a00007 	mov	r0, r7
        24b7a8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        24b7ac:	0c101934 	ldceq	9, cr1, [r0], -#208
        24b7b0:	0c101854 	ldceq	8, cr1, [r0], -#336
        24b7b4:	e5c9704c 	strb	r7, [r9, #76]	; fField76
        24b7b8:	e3a00002 	mov	r0, #2	; 0x2
        24b7bc:	eb65da62 	bl	1bc214c <$AllocateRefHandle(long)>
        24b7c0:	e58d0000 	str	r0, [sp]
        24b7c4:	e1a0000d 	mov	r0, sp
        24b7c8:	eb61e6c3 	bl	1ac52dc <$FClicker>
        24b7cc:	e59d0000 	ldr	r0, [sp]
        24b7d0:	eb65de79 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b7d4:	ea000010 	b	24b81c <TXView::Click(TXNewtPen *, unsigned long)+0x170>
        24b7d8:	e3a00037 	mov	r0, #55	; 0x37
        24b7dc:	eb61e288 	bl	1ac4204 <$BusyBoxSend(long)>
        24b7e0:	e3a00001 	mov	r0, #1	; 0x1
        24b7e4:	e5c9004c 	strb	r0, [r9, #76]	; fField76
        24b7e8:	e3a00002 	mov	r0, #2	; 0x2
        24b7ec:	eb65da56 	bl	1bc214c <$AllocateRefHandle(long)>
        24b7f0:	e58d0000 	str	r0, [sp]
        24b7f4:	e1a0000d 	mov	r0, sp
        24b7f8:	e59f111c 	ldr	r1, [pc, #11c]	; 24b91c <TXView::Click(TXNewtPen *, unsigned long)+0x270>
        24b7fc:	eb669832 	bl	1bf18cc <$FPlaySound__FRC6RefVarT1>
        24b800:	e59d0000 	ldr	r0, [sp]
        24b804:	eb65de6c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b808:	e595004c 	ldr	r0, [r5, #76]	; fField76
        24b80c:	e3100001 	tst	r0, #1	; 0x1
        24b810:	05950034 	ldreq	r0, [r5, #52]	; fField52
        24b814:	03300000 	teqeq	r0, #0	; 0x0
        24b818:	159fa100 	ldrne	sl, [pc, #100]	; 24b920 <TXView::Click(TXNewtPen *, unsigned long)+0x274>
        24b81c:	e28dd004 	add	sp, sp, #4	; 0x4
        24b820:	e1a00006 	mov	r0, r6
        24b824:	eb654588 	bl	1b9ce4c <TXNewtPen::$InkOff(void)>
        24b828:	e52d701c 	str	r7, [sp, -#28]!
        24b82c:	e5980000 	ldr	r0, [r8]
        24b830:	e5900068 	ldr	r0, [r0, #104]
        24b834:	e1300005 	teq	r0, r5
        24b838:	0a000027 	beq	24b8dc <TXView::Click(TXNewtPen *, unsigned long)+0x230>
        24b83c:	e24dd010 	sub	sp, sp, #16	; 0x10
        24b840:	e5950030 	ldr	r0, [r5, #48]	; fField48
        24b844:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24b848:	e1a0100d 	mov	r1, sp
        24b84c:	eb65140a 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        24b850:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24b854:	e59f00c8 	ldr	r0, [pc, #c8]	; 24b924 <TXView::Click(TXNewtPen *, unsigned long)+0x278>
        24b858:	eb65da43 	bl	1bc216c <$Clone(RefVar const &)>
        24b85c:	eb65da3a 	bl	1bc214c <$AllocateRefHandle(long)>
        24b860:	e58d0008 	str	r0, [sp, #8]	; fField8
        24b864:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        24b868:	e1a00100 	mov	r0, r0, lsl #2
        24b86c:	eb65da36 	bl	1bc214c <$AllocateRefHandle(long)>
        24b870:	e58d0000 	str	r0, [sp]
        24b874:	e1a0200d 	mov	r2, sp
        24b878:	e59f10a8 	ldr	r1, [pc, #a8]	; 24b928 <TXView::Click(TXNewtPen *, unsigned long)+0x27c>
        24b87c:	e28d0008 	add	r0, sp, #8	; 0x8
        24b880:	eb65eab8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24b884:	e59d0000 	ldr	r0, [sp]
        24b888:	eb65de4b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b88c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        24b890:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        24b894:	e0400001 	sub	r0, r0, r1
        24b898:	e1a00100 	mov	r0, r0, lsl #2
        24b89c:	eb65da2a 	bl	1bc214c <$AllocateRefHandle(long)>
        24b8a0:	e58d0004 	str	r0, [sp, #4]	; fField4
        24b8a4:	e28d2004 	add	r2, sp, #4	; 0x4
        24b8a8:	e59f107c 	ldr	r1, [pc, #7c]	; 24b92c <TXView::Click(TXNewtPen *, unsigned long)+0x280>
        24b8ac:	e28d0008 	add	r0, sp, #8	; 0x8
        24b8b0:	eb65eaac 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24b8b4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24b8b8:	eb65de3f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b8bc:	e28d2008 	add	r2, sp, #8	; 0x8
        24b8c0:	e1a01005 	mov	r1, r5
        24b8c4:	e3a03001 	mov	r3, #1	; 0x1
        24b8c8:	e5980000 	ldr	r0, [r8]
        24b8cc:	eb626a90 	bl	1ae6314 <TRootView::$SetKeyViewSelection(TView *, RefVar const &, unsigned char)>
        24b8d0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        24b8d4:	eb65de38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24b8d8:	e28dd01c 	add	sp, sp, #28	; 0x1c
        24b8dc:	e1a03005 	mov	r3, r5
        24b8e0:	e1a0200a 	mov	r2, sl
        24b8e4:	e92d000c 	stmdb	sp!, {r2, r3}
        24b8e8:	e3a00001 	mov	r0, #1	; 0x1
        24b8ec:	eb621c0f 	bl	1ad2930 <$Modifiers(unsigned char)>
        24b8f0:	e1a02000 	mov	r2, r0
        24b8f4:	e28d3008 	add	r3, sp, #8	; 0x8
        24b8f8:	e1a01006 	mov	r1, r6
        24b8fc:	e5950030 	ldr	r0, [r5, #48]	; fField48
        24b900:	eb6551ad 	bl	1b9ffbc <Textension::$Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)>
        24b904:	e28dd008 	add	sp, sp, #8	; 0x8
        24b908:	e1a00005 	mov	r0, r5
        24b90c:	e3a01001 	mov	r1, #1	; 0x1
        24b910:	eb65411b 	bl	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
        24b914:	e3a00001 	mov	r0, #1	; 0x1
        24b918:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        24b91c:	0067ff28 	rsbeq	pc, r7, r8, lsr #30
        24b920:	01b9ad78 	moveqs	sl, r8, ror sp
        24b924:	00680028 	rsbeq	r0, r8, r8, lsr #32
        24b928:	00683b30 	rsbeq	r3, r8, r0, lsr fp
        24b92c:	00683500 	rsbeq	r3, r8, r0, lsl #10
    */
}

/**
 * Symbol: TXView::Constructor(RefVar const &, TView *)
 * Address: 0024b930
 */
TXView::Constructor(RefVar const &, TView *) {
    /*
        24b930:	e1a0c00d 	mov	ip, sp
        24b934:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24b938:	e24cb004 	sub	fp, ip, #4	; 0x4
        24b93c:	e1a04000 	mov	r4, r0
        24b940:	e1a06001 	mov	r6, r1
        24b944:	e1a05002 	mov	r5, r2
        24b948:	e3a00000 	mov	r0, #0	; 0x0
        24b94c:	e5840030 	str	r0, [r4, #48]	; fField48
        24b950:	e3a01002 	mov	r1, #2	; 0x2
        24b954:	e584104c 	str	r1, [r4, #76]	; fField76
        24b958:	e3e01000 	mvn	r1, #0	; 0x0
        24b95c:	e5840034 	str	r0, [r4, #52]	; fField52
        24b960:	e5841050 	str	r1, [r4, #80]	; fField80
        24b964:	e5840038 	str	r0, [r4, #56]	; fField56
        24b968:	e5c40047 	strb	r0, [r4, #71]	; fField71
        24b96c:	e5c40046 	strb	r0, [r4, #70]	; fField70
        24b970:	e5c40045 	strb	r0, [r4, #69]	; fField69
        24b974:	e5c40044 	strb	r0, [r4, #68]	; fField68
        24b978:	e5c40043 	strb	r0, [r4, #67]	; fField67
        24b97c:	e5c40042 	strb	r0, [r4, #66]	; fField66
        24b980:	e5c40041 	strb	r0, [r4, #65]	; fField65
        24b984:	e5c40040 	strb	r0, [r4, #64]	; fField64
        24b988:	e59f80c4 	ldr	r8, [pc, #c4]	; 24ba54 <TXView::Constructor(RefVar const &, TView *)+0x124>
        24b98c:	e5d80008 	ldrb	r0, [r8, #8]	; fField8
        24b990:	e3300000 	teq	r0, #0	; 0x0
        24b994:	1a000029 	bne	24ba40 <TXView::Constructor(RefVar const &, TView *)+0x110>
        24b998:	e3a00004 	mov	r0, #4	; 0x4
        24b99c:	eb660b65 	bl	1bce738 <$__nw(unsigned int)>
        24b9a0:	e1b07000 	movs	r7, r0
        24b9a4:	0a000003 	beq	24b9b8 <TXView::Constructor(RefVar const &, TView *)+0x88>
        24b9a8:	e1a00007 	mov	r0, r7
        24b9ac:	eb653cd4 	bl	1b9ad04 <TXTempStreamFactory::$__ct(void)>
        24b9b0:	e59f00a0 	ldr	r0, [pc, #a0]	; 24ba58 <TXView::Constructor(RefVar const &, TView *)+0x128>
        24b9b4:	e5870000 	str	r0, [r7]
        24b9b8:	e1a00007 	mov	r0, r7
        24b9bc:	eb653cd1 	bl	1b9ad08 <$TXSetTempStreamFactory(TXTempStreamFactory *)>
        24b9c0:	eb654d6d 	bl	1b9ef7c <$TextensionStart__10TextensionSFv>
        24b9c4:	e3300000 	teq	r0, #0	; 0x0
        24b9c8:	0a000004 	beq	24b9e0 <TXView::Constructor(RefVar const &, TView *)+0xb0>
        24b9cc:	e1a01000 	mov	r1, r0
        24b9d0:	e59f0084 	ldr	r0, [pc, #84]	; 24ba5c <TXView::Constructor(RefVar const &, TView *)+0x12c>	; fField84
        24b9d4:	e5900000 	ldr	r0, [r0]
        24b9d8:	e3a02000 	mov	r2, #0	; 0x0
        24b9dc:	eb665dee 	bl	1be319c <$Throw>
        24b9e0:	e3a00000 	mov	r0, #0	; 0x0
        24b9e4:	eb651ff2 	bl	1b939b4 <TXNewtTextRun::$__ct(void)>
        24b9e8:	eb655164 	bl	1b9ff80 <$RegisterRun__10TextensionSFP5TXRun>
        24b9ec:	e3a00000 	mov	r0, #0	; 0x0
        24b9f0:	eb6517c0 	bl	1b918f8 <TXNewtGraphicsRun::$__ct(void)>
        24b9f4:	eb655161 	bl	1b9ff80 <$RegisterRun__10TextensionSFP5TXRun>
        24b9f8:	e3a00000 	mov	r0, #0	; 0x0
        24b9fc:	eb64e210 	bl	1b84244 <TXAdvancedRuler::$__ct(void)>
        24ba00:	eb65515f 	bl	1b9ff84 <$RegisterRuler__10TextensionSFP7TXRuler>
        24ba04:	e3a00016 	mov	r0, #22	; 0x16
        24ba08:	e52d0014 	str	r0, [sp, -#20]!	; fField20
        24ba0c:	e3a00010 	mov	r0, #16	; 0x10
        24ba10:	e58d0004 	str	r0, [sp, #4]	; fField4
        24ba14:	e3a00003 	mov	r0, #3	; 0x3
        24ba18:	e58d0008 	str	r0, [sp, #8]	; fField8
        24ba1c:	e3a0000b 	mov	r0, #11	; 0xb
        24ba20:	e58d000c 	str	r0, [sp, #12]	; fField12
        24ba24:	e3a00005 	mov	r0, #5	; 0x5
        24ba28:	e58d0010 	str	r0, [sp, #16]	; fField16
        24ba2c:	e1a0000d 	mov	r0, sp
        24ba30:	eb65305d 	bl	1b97bac <$Start__9TXRulerUISFRC13TXRulerUIData>
        24ba34:	e3a00001 	mov	r0, #1	; 0x1
        24ba38:	e5c80008 	strb	r0, [r8, #8]	; fField8
        24ba3c:	e28dd014 	add	sp, sp, #20	; 0x14
        24ba40:	e1a02005 	mov	r2, r5
        24ba44:	e1a01006 	mov	r1, r6
        24ba48:	e1a00004 	mov	r0, r4
        24ba4c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        24ba50:	ea65f6a0 	b	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
        24ba54:	0c104e90 	ldceq	14, cr4, [r0], -#576
        24ba58:	0001ef54 	andeq	lr, r1, r4, asr pc
        24ba5c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TXView::RulerClick(TXNewtPen *)
 * Address: 0024ba60
 */
TXView::RulerClick(TXNewtPen *) {
    /*
        24ba60:	e1a0c00d 	mov	ip, sp
        24ba64:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24ba68:	e24cb004 	sub	fp, ip, #4	; 0x4
        24ba6c:	e1a04000 	mov	r4, r0
        24ba70:	e1a05001 	mov	r5, r1
        24ba74:	e24dd004 	sub	sp, sp, #4	; 0x4
        24ba78:	e5900034 	ldr	r0, [r0, #52]	; fField52
        24ba7c:	e3a06000 	mov	r6, #0	; 0x0
        24ba80:	e3300000 	teq	r0, #0	; 0x0
        24ba84:	0a000009 	beq	24bab0 <TXView::RulerClick(TXNewtPen *)+0x50>
        24ba88:	e1a01005 	mov	r1, r5
        24ba8c:	e1a0000d 	mov	r0, sp
        24ba90:	e5952000 	ldr	r2, [r5]
        24ba94:	e1a0e00f 	mov	lr, pc
        24ba98:	e282f004 	add	pc, r2, #4	; 0x4
        24ba9c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        24baa0:	e59d1000 	ldr	r1, [sp]
        24baa4:	eb65304d 	bl	1b97be0 <TXRulerUI::$HitTest(Point)>
        24baa8:	e3300000 	teq	r0, #0	; 0x0
        24baac:	1a000001 	bne	24bab8 <TXView::RulerClick(TXNewtPen *)+0x58>
        24bab0:	e1a00006 	mov	r0, r6
        24bab4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        24bab8:	e28dd004 	add	sp, sp, #4	; 0x4
        24babc:	e3a00000 	mov	r0, #0	; 0x0
        24bac0:	eb64ea2d 	bl	1b8637c <TXAttrValues::$__ct(void)>
        24bac4:	e1b06000 	movs	r6, r0
        24bac8:	e24dd004 	sub	sp, sp, #4	; 0x4
        24bacc:	1a000005 	bne	24bae8 <TXView::RulerClick(TXNewtPen *)+0x88>
        24bad0:	e59f00ac 	ldr	r0, [pc, #ac]	; 24bb84 <TXView::RulerClick(TXNewtPen *)+0x124>
        24bad4:	e5900000 	ldr	r0, [r0]
        24bad8:	e3a02000 	mov	r2, #0	; 0x0
        24badc:	e3a010e9 	mov	r1, #233	; 0xe9
        24bae0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        24bae4:	eb665dac 	bl	1be319c <$Throw>
        24bae8:	e1a00005 	mov	r0, r5
        24baec:	eb6544d6 	bl	1b9ce4c <TXNewtPen::$InkOff(void)>
        24baf0:	e3a00002 	mov	r0, #2	; 0x2
        24baf4:	eb65d994 	bl	1bc214c <$AllocateRefHandle(long)>
        24baf8:	e58d0000 	str	r0, [sp]
        24bafc:	e1a0000d 	mov	r0, sp
        24bb00:	eb61e5f5 	bl	1ac52dc <$FClicker>
        24bb04:	e59d0000 	ldr	r0, [sp]
        24bb08:	eb65ddab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24bb0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24bb10:	e3a00037 	mov	r0, #55	; 0x37
        24bb14:	eb61e1ba 	bl	1ac4204 <$BusyBoxSend(long)>
        24bb18:	e1a0300d 	mov	r3, sp
        24bb1c:	e92d0008 	stmdb	sp!, {r3}
        24bb20:	e3a00001 	mov	r0, #1	; 0x1
        24bb24:	eb621b81 	bl	1ad2930 <$Modifiers(unsigned char)>
        24bb28:	e1a02000 	mov	r2, r0
        24bb2c:	e1a03006 	mov	r3, r6
        24bb30:	e1a01005 	mov	r1, r5
        24bb34:	e5940034 	ldr	r0, [r4, #52]	; fField52
        24bb38:	eb653029 	bl	1b97be4 <TXRulerUI::$Click(TXPointingDevice *, long, TXAttrValues *, long *)>
        24bb3c:	e28dd004 	add	sp, sp, #4	; 0x4
        24bb40:	e3300000 	teq	r0, #0	; 0x0
        24bb44:	0a00000c 	beq	24bb7c <TXView::RulerClick(TXNewtPen *)+0x11c>
        24bb48:	e24dd010 	sub	sp, sp, #16	; 0x10
        24bb4c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24bb50:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24bb54:	e1a0100d 	mov	r1, sp
        24bb58:	eb651347 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        24bb5c:	e59d3010 	ldr	r3, [sp, #16]	; fField16
        24bb60:	e92d0008 	stmdb	sp!, {r3}
        24bb64:	e1a03006 	mov	r3, r6
        24bb68:	e28d2004 	add	r2, sp, #4	; 0x4
        24bb6c:	e1a00004 	mov	r0, r4
        24bb70:	e3a01003 	mov	r1, #3	; 0x3
        24bb74:	eb6548cb 	bl	1b9dea8 <TXView::$NewAttrCommand(int, TXOffsetRange const &, TXAttrValues *, long)>
        24bb78:	e28dd014 	add	sp, sp, #20	; 0x14
        24bb7c:	e3a00001 	mov	r0, #1	; 0x1
        24bb80:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        24bb84:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TXView::UpdateRuler(unsigned char)
 * Address: 0024bb88
 */
TXView::UpdateRuler(unsigned char) {
    /*
        24bb88:	e20110ff 	and	r1, r1, #255	; 0xff
        24bb8c:	e5900034 	ldr	r0, [r0, #52]	; fField52
        24bb90:	e3300000 	teq	r0, #0	; 0x0
        24bb94:	1a653013 	bne	1b97be8 <TXRulerUI::$CheckUpdate(unsigned char)>
        24bb98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXView::GetContinuousRun(void)
 * Address: 0024bb9c
 */
TXView::GetContinuousRun(void) {
    /*
        24bb9c:	e1a0c00d 	mov	ip, sp
        24bba0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24bba4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24bba8:	e1a04000 	mov	r4, r0
        24bbac:	e24dd004 	sub	sp, sp, #4	; 0x4
        24bbb0:	e3a00002 	mov	r0, #2	; 0x2
        24bbb4:	eb65d964 	bl	1bc214c <$AllocateRefHandle(long)>
        24bbb8:	e58d0000 	str	r0, [sp]
        24bbbc:	e3a01000 	mov	r1, #0	; 0x0
        24bbc0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24bbc4:	eb6550fd 	bl	1b9ffc0 <Textension::$IsRangeGraphicsRun(TXOffsetRange const *)>
        24bbc8:	e3300000 	teq	r0, #0	; 0x0
        24bbcc:	0a000005 	beq	24bbe8 <TXView::GetContinuousRun(void)+0x4c>
        24bbd0:	e5901000 	ldr	r1, [r0]
        24bbd4:	e1a0e00f 	mov	lr, pc
        24bbd8:	e281f034 	add	pc, r1, #52	; 0x34
        24bbdc:	e59d1000 	ldr	r1, [sp]
        24bbe0:	e5810000 	str	r0, [r1]
        24bbe4:	ea00003c 	b	24bcdc <TXView::GetContinuousRun(void)+0x140>
        24bbe8:	e59f0100 	ldr	r0, [pc, #100]	; 24bcf0 <TXView::GetContinuousRun(void)+0x154>
        24bbec:	eb65d95e 	bl	1bc216c <$Clone(RefVar const &)>
        24bbf0:	e41d1018 	ldr	r1, [sp], -#24
        24bbf4:	e5810000 	str	r0, [r1]
        24bbf8:	e1a0000d 	mov	r0, sp
        24bbfc:	eb64e9de 	bl	1b8637c <TXAttrValues::$__ct(void)>
        24bc00:	e1a0100d 	mov	r1, sp
        24bc04:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        24bc08:	eb6550f7 	bl	1b9ffec <Textension::$GetContinuousAttrValues(TXAttrValues *)>
        24bc0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24bc10:	e1a0200d 	mov	r2, sp
        24bc14:	e28d0004 	add	r0, sp, #4	; 0x4
        24bc18:	e59f10d4 	ldr	r1, [pc, #d4]	; 24bcf4 <TXView::GetContinuousRun(void)+0x158>
        24bc1c:	eb64eddc 	bl	1b87394 <TXAttrValues::$GetValue( const(unsigned long, void *))>
        24bc20:	e3300000 	teq	r0, #0	; 0x0
        24bc24:	0a000004 	beq	24bc3c <TXView::GetContinuousRun(void)+0xa0>
        24bc28:	e59d0000 	ldr	r0, [sp]
        24bc2c:	e2802004 	add	r2, r0, #4	; 0x4
        24bc30:	e59f10c0 	ldr	r1, [pc, #c0]	; 24bcf8 <TXView::GetContinuousRun(void)+0x15c>
        24bc34:	e28d001c 	add	r0, sp, #28	; 0x1c
        24bc38:	eb65e9ca 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24bc3c:	e24dd008 	sub	sp, sp, #8	; 0x8
        24bc40:	e28d2004 	add	r2, sp, #4	; 0x4
        24bc44:	e28d000c 	add	r0, sp, #12	; 0xc
        24bc48:	e59f10ac 	ldr	r1, [pc, #ac]	; 24bcfc <TXView::GetContinuousRun(void)+0x160>
        24bc4c:	eb64edd0 	bl	1b87394 <TXAttrValues::$GetValue( const(unsigned long, void *))>
        24bc50:	e3300000 	teq	r0, #0	; 0x0
        24bc54:	0a000009 	beq	24bc80 <TXView::GetContinuousRun(void)+0xe4>
        24bc58:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24bc5c:	e1a00100 	mov	r0, r0, lsl #2
        24bc60:	eb65d939 	bl	1bc214c <$AllocateRefHandle(long)>
        24bc64:	e58d0000 	str	r0, [sp]
        24bc68:	e1a0200d 	mov	r2, sp
        24bc6c:	e59f108c 	ldr	r1, [pc, #8c]	; 24bd00 <TXView::GetContinuousRun(void)+0x164>	; fField8
        24bc70:	e28d0024 	add	r0, sp, #36	; 0x24
        24bc74:	eb65e9bb 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24bc78:	e59d0000 	ldr	r0, [sp]
        24bc7c:	eb65dd4e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24bc80:	e24dd008 	sub	sp, sp, #8	; 0x8
        24bc84:	e28d2004 	add	r2, sp, #4	; 0x4
        24bc88:	e28d0014 	add	r0, sp, #20	; 0x14
        24bc8c:	e59f1070 	ldr	r1, [pc, #70]	; 24bd04 <TXView::GetContinuousRun(void)+0x168>	; fField70
        24bc90:	eb64edbf 	bl	1b87394 <TXAttrValues::$GetValue( const(unsigned long, void *))>
        24bc94:	e3300000 	teq	r0, #0	; 0x0
        24bc98:	0a000009 	beq	24bcc4 <TXView::GetContinuousRun(void)+0x128>
        24bc9c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24bca0:	e1a00100 	mov	r0, r0, lsl #2
        24bca4:	eb65d928 	bl	1bc214c <$AllocateRefHandle(long)>
        24bca8:	e58d0000 	str	r0, [sp]
        24bcac:	e1a0200d 	mov	r2, sp
        24bcb0:	e59f1050 	ldr	r1, [pc, #50]	; 24bd08 <TXView::GetContinuousRun(void)+0x16c>
        24bcb4:	e28d002c 	add	r0, sp, #44	; 0x2c
        24bcb8:	eb65e9aa 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24bcbc:	e59d0000 	ldr	r0, [sp]
        24bcc0:	eb65dd3d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24bcc4:	e28dd014 	add	sp, sp, #20	; 0x14
        24bcc8:	e1a0000d 	mov	r0, sp
        24bccc:	e3a01000 	mov	r1, #0	; 0x0
        24bcd0:	e1a0e00f 	mov	lr, pc
        24bcd4:	e59df000 	ldr	pc, [sp]
        24bcd8:	e28dd018 	add	sp, sp, #24	; 0x18
        24bcdc:	e59d0000 	ldr	r0, [sp]
        24bce0:	e5904000 	ldr	r4, [r0]
        24bce4:	eb65dd34 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24bce8:	e1a00004 	mov	r0, r4
        24bcec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        24bcf0:	00680ad8 	ldreqd	r0, [r8], -#168
        24bcf4:	666f6e74 	undefined
        24bcf8:	00682d30 	rsbeq	r2, r8, r0, lsr sp
        24bcfc:	73697a65 	cmnvc	r9, #413696	; 0x65000
        24bd00:	006846a8 	rsbeq	r4, r8, r8, lsr #13
        24bd04:	66616365 	strvsbt	r6, [r1], -r5, ror #6
        24bd08:	00682d28 	rsbeq	r2, r8, r8, lsr #26
    */
}

/**
 * Symbol: TXView::Scroll(TXLongPoint *)
 * Address: 0024bd0c
 */
TXView::Scroll(TXLongPoint *) {
    /*
        24bd0c:	e1a0c00d 	mov	ip, sp
        24bd10:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24bd14:	e24cb004 	sub	fp, ip, #4	; 0x4
        24bd18:	e1a04000 	mov	r4, r0
        24bd1c:	e1a05001 	mov	r5, r1
        24bd20:	e59f6048 	ldr	r6, [pc, #48]	; 24bd70 <TXView::Scroll(TXLongPoint *)+0x64>	; fField48
        24bd24:	e5960000 	ldr	r0, [r6]
        24bd28:	eb6216dd 	bl	1ad18a4 <TRootView::$HideCaret(void)>
        24bd2c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24bd30:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24bd34:	e1a01005 	mov	r1, r5
        24bd38:	eb64fe27 	bl	1b8b5dc <TXDisplay::$Scroll(TXLongPoint *)>
        24bd3c:	e5960000 	ldr	r0, [r6]
        24bd40:	eb615d14 	bl	1aa3198 <TRootView::$ShowCaret(void)>
        24bd44:	e1a00004 	mov	r0, r4
        24bd48:	e3a02001 	mov	r2, #1	; 0x1
        24bd4c:	e3a01000 	mov	r1, #0	; 0x0
        24bd50:	eb654853 	bl	1b9dea4 <TXView::$UpdateScrollers(unsigned char, unsigned char)>
        24bd54:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        24bd58:	e3300000 	teq	r0, #0	; 0x0
        24bd5c:	15b40034 	ldrne	r0, [r4, #52]!	; fField52
        24bd60:	13300000 	teqne	r0, #0	; 0x0
        24bd64:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        24bd68:	1a652f9f 	bne	1b97bec <TXRulerUI::$Scrolled(void)>
        24bd6c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        24bd70:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXView::GetScrollValues(TXLongPoint *)
 * Address: 0024bd74
 */
TXView::GetScrollValues(TXLongPoint *) {
    /*
        24bd74:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24bd78:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24bd7c:	ea64fe18 	b	1b8b5e4 <TXDisplay::$GetScrolledValues(TXLongPoint *)>
    */
}

/**
 * Symbol: TXView::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)
 * Address: 0024bd80
 */
TXView::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char) {
    /*
        24bd80:	e1a0c00d 	mov	ip, sp
        24bd84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24bd88:	e24cb004 	sub	fp, ip, #4	; 0x4
        24bd8c:	e1a04000 	mov	r4, r0
        24bd90:	e20250ff 	and	r5, r2, #255	; 0xff
        24bd94:	e20330ff 	and	r3, r3, #255	; 0xff
        24bd98:	e590c030 	ldr	ip, [r0, #48]	; fField48
        24bd9c:	e1a0000c 	mov	r0, ip
        24bda0:	e3a02001 	mov	r2, #1	; 0x1
        24bda4:	e59cc000 	ldr	ip, [ip]
        24bda8:	e1a0e00f 	mov	lr, pc
        24bdac:	e28cf008 	add	pc, ip, #8	; 0x8
        24bdb0:	e3350000 	teq	r5, #0	; 0x0
        24bdb4:	0a00000a 	beq	24bde4 <TXView::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)+0x64>
        24bdb8:	e24dd008 	sub	sp, sp, #8	; 0x8
        24bdbc:	e3a02000 	mov	r2, #0	; 0x0
        24bdc0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24bdc4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24bdc8:	e1a0100d 	mov	r1, sp
        24bdcc:	eb64fe06 	bl	1b8b5ec <TXDisplay::$IsHiliteVisible(TXLongPoint *, unsigned char)>
        24bdd0:	e3300000 	teq	r0, #0	; 0x0
        24bdd4:	01a0100d 	moveq	r1, sp
        24bdd8:	01a00004 	moveq	r0, r4
        24bddc:	0b653fea 	bleq	1b9bd8c <TXView::$Scroll(TXLongPoint *)>
        24bde0:	e28dd008 	add	sp, sp, #8	; 0x8
        24bde4:	e1a00004 	mov	r0, r4
        24bde8:	e3a01001 	mov	r1, #1	; 0x1
        24bdec:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        24bdf0:	ea653fe3 	b	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
    */
}

/**
 * Symbol: TXView::GetHiliteRange(TXOffsetRange *)
 * Address: 0024bdf4
 */
TXView::GetHiliteRange(TXOffsetRange *) {
    /*
        24bdf4:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24bdf8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24bdfc:	ea65129e 	b	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
    */
}

/**
 * Symbol: TXView::CountChars(void)
 * Address: 0024be00
 */
TXView::CountChars(void) {
    /*
        24be00:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24be04:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24be08:	e5901000 	ldr	r1, [r0]
        24be0c:	e281f004 	add	pc, r1, #4	; 0x4
    */
}

/**
 * Symbol: TXView::GetTotalHeight(void)
 * Address: 0024be10
 */
TXView::GetTotalHeight(void) {
    /*
        24be10:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24be14:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24be18:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24be1c:	e5901000 	ldr	r1, [r0]
        24be20:	e281f01c 	add	pc, r1, #28	; 0x1c
    */
}

/**
 * Symbol: TXView::GetTotalWidth(void)
 * Address: 0024be24
 */
TXView::GetTotalWidth(void) {
    /*
        24be24:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24be28:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24be2c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24be30:	e5901000 	ldr	r1, [r0]
        24be34:	e281f020 	add	pc, r1, #32	; 0x20
    */
}

/**
 * Symbol: TXView::SetupDone(void)
 * Address: 0024be38
 */
TXView::SetupDone(void) {
    /*
        24be38:	e1a0c00d 	mov	ip, sp
        24be3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24be40:	e24cb004 	sub	fp, ip, #4	; 0x4
        24be44:	e1a04000 	mov	r4, r0
        24be48:	eb653bbd 	bl	1b9ad44 <TXView::$CreateNewTextension(void)>
        24be4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24be50:	e59f1170 	ldr	r1, [pc, #170]	; 24bfc8 <TXView::SetupDone(void)+0x190>
        24be54:	e1a00004 	mov	r0, r4
        24be58:	eb65f9ba 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        24be5c:	eb65d8ba 	bl	1bc214c <$AllocateRefHandle(long)>
        24be60:	e58d0000 	str	r0, [sp]
        24be64:	e5900000 	ldr	r0, [r0]
        24be68:	e3300002 	teq	r0, #2	; 0x2
        24be6c:	1a000004 	bne	24be84 <TXView::SetupDone(void)+0x4c>
        24be70:	e59f1154 	ldr	r1, [pc, #154]	; 24bfcc <TXView::SetupDone(void)+0x194>
        24be74:	e59f0154 	ldr	r0, [pc, #154]	; 24bfd0 <TXView::SetupDone(void)+0x198>
        24be78:	eb66d068 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
        24be7c:	e59d1000 	ldr	r1, [sp]
        24be80:	e5810000 	str	r0, [r1]
        24be84:	e59d0000 	ldr	r0, [sp]
        24be88:	e5900000 	ldr	r0, [r0]
        24be8c:	e3300002 	teq	r0, #2	; 0x2
        24be90:	0a000032 	beq	24bf60 <TXView::SetupDone(void)+0x128>
        24be94:	eb04fb00 	bl	38aa9c <C$$dtorvec$$Limit+0x128>
        24be98:	e3300000 	teq	r0, #0	; 0x0
        24be9c:	0a000002 	beq	24beac <TXView::SetupDone(void)+0x74>
        24bea0:	e3a01001 	mov	r1, #1	; 0x1
        24bea4:	e1a0e00f 	mov	lr, pc
        24bea8:	e590f000 	ldr	pc, [r0]
        24beac:	e3a00000 	mov	r0, #0	; 0x0
        24beb0:	eb64e931 	bl	1b8637c <TXAttrValues::$__ct(void)>
        24beb4:	e1a05000 	mov	r5, r0
        24beb8:	e24dd008 	sub	sp, sp, #8	; 0x8
        24bebc:	e28d0008 	add	r0, sp, #8	; 0x8
        24bec0:	eb621253 	bl	1ad0814 <$GetFontFamilySym(RefVar const &)>
        24bec4:	eb65d8a0 	bl	1bc214c <$AllocateRefHandle(long)>
        24bec8:	e58d0000 	str	r0, [sp]
        24becc:	e1a0100d 	mov	r1, sp
        24bed0:	e3a00000 	mov	r0, #0	; 0x0
        24bed4:	eb6522cf 	bl	1b94a18 <TXNewtFontFamilyInfo::$__ct(RefVar const &)>
        24bed8:	e58d0004 	str	r0, [sp, #4]	; fField4
        24bedc:	e59d0000 	ldr	r0, [sp]
        24bee0:	eb65dcb5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24bee4:	e3a03001 	mov	r3, #1	; 0x1
        24bee8:	e92d0008 	stmdb	sp!, {r3}
        24beec:	e28d2008 	add	r2, sp, #8	; 0x8
        24bef0:	e1a00005 	mov	r0, r5
        24bef4:	e3a03004 	mov	r3, #4	; 0x4
        24bef8:	e59f10d4 	ldr	r1, [pc, #d4]	; 24bfd4 <TXView::SetupDone(void)+0x19c>
        24befc:	eb64ed20 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        24bf00:	e28d000c 	add	r0, sp, #12	; 0xc
        24bf04:	ebfcbb67 	bl	17aca8 <GetFontSize(RefVar const &)>
        24bf08:	e3a03000 	mov	r3, #0	; 0x0
        24bf0c:	e58d0000 	str	r0, [sp]
        24bf10:	e92d0008 	stmdb	sp!, {r3}
        24bf14:	e28d2004 	add	r2, sp, #4	; 0x4
        24bf18:	e1a00005 	mov	r0, r5
        24bf1c:	e3a03004 	mov	r3, #4	; 0x4
        24bf20:	e59f10b0 	ldr	r1, [pc, #b0]	; 24bfd8 <TXView::SetupDone(void)+0x1a0>
        24bf24:	eb64ed16 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        24bf28:	e28d0010 	add	r0, sp, #16	; 0x10
        24bf2c:	eb621236 	bl	1ad080c <$GetFontFace(RefVar const &)>
        24bf30:	e3a03000 	mov	r3, #0	; 0x0
        24bf34:	e58d0000 	str	r0, [sp]
        24bf38:	e92d0008 	stmdb	sp!, {r3}
        24bf3c:	e28d2004 	add	r2, sp, #4	; 0x4
        24bf40:	e1a00005 	mov	r0, r5
        24bf44:	e3a03004 	mov	r3, #4	; 0x4
        24bf48:	e59f108c 	ldr	r1, [pc, #8c]	; 24bfdc <TXView::SetupDone(void)+0x1a4>	; fField8
        24bf4c:	eb64ed0c 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        24bf50:	e28dd004 	add	sp, sp, #4	; 0x4
        24bf54:	e1a00005 	mov	r0, r5
        24bf58:	eb04fb16 	bl	38abb8 <C$$dtorvec$$Limit+0x244>
        24bf5c:	e28dd010 	add	sp, sp, #16	; 0x10
        24bf60:	e3a02001 	mov	r2, #1	; 0x1
        24bf64:	e3a01001 	mov	r1, #1	; 0x1
        24bf68:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24bf6c:	eb65501b 	bl	1b9ffe0 <Textension::$Activate(unsigned char, unsigned char)>
        24bf70:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24bf74:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24bf78:	e1a05000 	mov	r5, r0
        24bf7c:	eb64fd92 	bl	1b8b5cc <TXDisplay::$DisableDrawing(void)>
        24bf80:	e1a00004 	mov	r0, r4
        24bf84:	eb6243a8 	bl	1adce2c <TView::$SetupDone(void)>
        24bf88:	e1a00005 	mov	r0, r5
        24bf8c:	eb64fd8f 	bl	1b8b5d0 <TXDisplay::$EnableDrawing(void)>
        24bf90:	e59f1048 	ldr	r1, [pc, #48]	; 24bfe0 <TXView::SetupDone(void)+0x1a8>	; fField48
        24bf94:	e1a00004 	mov	r0, r4
        24bf98:	eb65f96a 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        24bf9c:	e3300002 	teq	r0, #2	; 0x2
        24bfa0:	1594004c 	ldrne	r0, [r4, #76]	; fField76
        24bfa4:	13800001 	orrne	r0, r0, #1	; 0x1
        24bfa8:	1584004c 	strne	r0, [r4, #76]	; fField76
        24bfac:	e1a00004 	mov	r0, r4
        24bfb0:	e3a02001 	mov	r2, #1	; 0x1
        24bfb4:	e3a01001 	mov	r1, #1	; 0x1
        24bfb8:	eb6547b9 	bl	1b9dea4 <TXView::$UpdateScrollers(unsigned char, unsigned char)>
        24bfbc:	e59d0000 	ldr	r0, [sp]
        24bfc0:	eb65dc7d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24bfc4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24bfc8:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        24bfcc:	00684e48 	rsbeq	r4, r8, r8, asr #28
        24bfd0:	00683000 	rsbeq	r3, r8, r0
        24bfd4:	666f6e74 	undefined
        24bfd8:	73697a65 	cmnvc	r9, #413696	; 0x65000
        24bfdc:	66616365 	strvsbt	r6, [r1], -r5, ror #6
        24bfe0:	00685100 	rsbeq	r5, r8, r0, lsl #2
    */
}

/**
 * Symbol: TXView::GetTextViewRgn(void)
 * Address: 0024bfe4
 */
TXView::GetTextViewRgn(void) {
    /*
        24bfe4:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24bfe8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24bfec:	e5900020 	ldr	r0, [r0, #32]	; fField32
        24bff0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXView::PointToChar(Point, TXOffsetRange *)
 * Address: 0024bff4
 */
TXView::PointToChar(Point, TXOffsetRange *) {
    /*
        24bff4:	e1a0c00d 	mov	ip, sp
        24bff8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24bffc:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c000:	e1a04002 	mov	r4, r2
        24c004:	e24dd008 	sub	sp, sp, #8	; 0x8
        24c008:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24c00c:	e28d2004 	add	r2, sp, #4	; 0x4
        24c010:	e1a0300d 	mov	r3, sp
        24c014:	e92d0008 	stmdb	sp!, {r3}
        24c018:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24c01c:	e1a03002 	mov	r3, r2
        24c020:	e1a02004 	mov	r2, r4
        24c024:	eb650183 	bl	1b8c638 <TXDisplay::$PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        24c028:	e28dd004 	add	sp, sp, #4	; 0x4
        24c02c:	e5940000 	ldr	r0, [r4]
        24c030:	e3500000 	cmp	r0, #0	; 0x0
        24c034:	b3a00000 	movlt	r0, #0	; 0x0
        24c038:	a3a00001 	movge	r0, #1	; 0x1
        24c03c:	e20000ff 	and	r0, r0, #255	; 0xff
        24c040:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::CharToPoint(TXOffset, int *)
 * Address: 0024c044
 */
TXView::CharToPoint(TXOffset, int *) {
    /*
        24c044:	e1a0c00d 	mov	ip, sp
        24c048:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24c04c:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c050:	e59b4004 	ldr	r4, [fp, #4]	; fField4
        24c054:	e5911030 	ldr	r1, [r1, #48]	; fField48
        24c058:	e1a0e002 	mov	lr, r2
        24c05c:	e1a0c003 	mov	ip, r3
        24c060:	e1a02004 	mov	r2, r4
        24c064:	e3a03000 	mov	r3, #0	; 0x0
        24c068:	e92d000c 	stmdb	sp!, {r2, r3}
        24c06c:	e5911010 	ldr	r1, [r1, #16]	; fField16
        24c070:	e1a0200e 	mov	r2, lr
        24c074:	e1a0300c 	mov	r3, ip
        24c078:	eb650170 	bl	1b8c640 <TXDisplay::$CharToPoint(TXOffset, int *, int *)>
        24c07c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::OffsetToCaret(long, TRect *)
 * Address: 0024c080
 */
TXView::OffsetToCaret(long, TRect *) {
    /*
        24c080:	e1a0c00d 	mov	ip, sp
        24c084:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24c088:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c08c:	e1a05000 	mov	r5, r0
        24c090:	e1a04002 	mov	r4, r2
        24c094:	e24dd010 	sub	sp, sp, #16	; 0x10
        24c098:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24c09c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24c0a0:	e1a0100d 	mov	r1, sp
        24c0a4:	eb6511f4 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        24c0a8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24c0ac:	e28d100c 	add	r1, sp, #12	; 0xc
        24c0b0:	e5950030 	ldr	r0, [r5, #48]	; fField48
        24c0b4:	e3a02000 	mov	r2, #0	; 0x0
        24c0b8:	e3a03000 	mov	r3, #0	; 0x0
        24c0bc:	e591c004 	ldr	ip, [r1, #4]	; fField4
        24c0c0:	e591e000 	ldr	lr, [r1]
        24c0c4:	e92d000c 	stmdb	sp!, {r2, r3}
        24c0c8:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        24c0cc:	e28d0010 	add	r0, sp, #16	; 0x10
        24c0d0:	e1a0200e 	mov	r2, lr
        24c0d4:	e1a0300c 	mov	r3, ip
        24c0d8:	eb650158 	bl	1b8c640 <TXDisplay::$CharToPoint(TXOffset, int *, int *)>
        24c0dc:	e28dd008 	add	sp, sp, #8	; 0x8
        24c0e0:	e3a03000 	mov	r3, #0	; 0x0
        24c0e4:	e5950030 	ldr	r0, [r5, #48]	; fField48
        24c0e8:	e28d200c 	add	r2, sp, #12	; 0xc
        24c0ec:	e8920006 	ldmia	r2, {r1, r2}
        24c0f0:	eb654fae 	bl	1b9ffb0 <Textension::$CharToLine( const(TXOffset, TXOffsetRange *))>
        24c0f4:	e1a01000 	mov	r1, r0
        24c0f8:	e5b50030 	ldr	r0, [r5, #48]!	; fField48
        24c0fc:	e590001c 	ldr	r0, [r0, #28]
        24c100:	e1a0200d 	mov	r2, sp
        24c104:	eb650571 	bl	1b8d6d0 <TXLinesHeights::$GetLineHeightInfo( const(long, TXLineHeightInfo *))>
        24c108:	e59d000a 	ldr	r0, [sp, #10]
        24c10c:	e5c40001 	strb	r0, [r4, #1]
        24c110:	e1a00440 	mov	r0, r0, asr #8
        24c114:	e5c40000 	strb	r0, [r4]
        24c118:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24c11c:	e59d100a 	ldr	r1, [sp, #10]
        24c120:	e0800001 	add	r0, r0, r1
        24c124:	e5c40005 	strb	r0, [r4, #5]
        24c128:	e1a00440 	mov	r0, r0, asr #8
        24c12c:	e5c40004 	strb	r0, [r4, #4]	; fField4
        24c130:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        24c134:	e5c40003 	strb	r0, [r4, #3]
        24c138:	e1a00440 	mov	r0, r0, asr #8
        24c13c:	e5c40002 	strb	r0, [r4, #2]
        24c140:	e5940002 	ldr	r0, [r4, #2]
        24c144:	e1a00820 	mov	r0, r0, lsr #16
        24c148:	e5c40007 	strb	r0, [r4, #7]
        24c14c:	e1a00440 	mov	r0, r0, asr #8
        24c150:	e5c40006 	strb	r0, [r4, #6]
        24c154:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)
 * Address: 0024c158
 */
TXView::NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *) {
    /*
        24c158:	e1a0c00d 	mov	ip, sp
        24c15c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24c160:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c164:	e1a04000 	mov	r4, r0
        24c168:	eb623f22 	bl	1adbdf8 <TView::$NarrowVisByIntersectingObscuringSiblingsAndUncles(TView *, TRect *)>
        24c16c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        24c170:	e3300000 	teq	r0, #0	; 0x0
        24c174:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        24c178:	e24dd020 	sub	sp, sp, #32	; 0x20
        24c17c:	e1a0000d 	mov	r0, sp
        24c180:	eb668d87 	bl	1bef7a4 <$GetPort(GrafPort **)>
        24c184:	e49d0004 	ldr	r0, [sp], #4	; fField4
        24c188:	e5900024 	ldr	r0, [r0, #36]
        24c18c:	e58d0000 	str	r0, [sp]
        24c190:	e1a05000 	mov	r5, r0
        24c194:	e28d1014 	add	r1, sp, #20	; 0x14
        24c198:	e5b40034 	ldr	r0, [r4, #52]!	; fField52
        24c19c:	eb652e88 	bl	1b97bc4 <TXRulerUI::$GetBounds( const(Rect *))>
        24c1a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        24c1a4:	e28d1018 	add	r1, sp, #24	; 0x18
        24c1a8:	e28d0008 	add	r0, sp, #8	; 0x8
        24c1ac:	eb60f097 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        24c1b0:	e28d0008 	add	r0, sp, #8	; 0x8
        24c1b4:	e58d0000 	str	r0, [sp]
        24c1b8:	e1a01000 	mov	r1, r0
        24c1bc:	e1a02005 	mov	r2, r5
        24c1c0:	e1a00005 	mov	r0, r5
        24c1c4:	eb640540 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        24c1c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::SetCaretOffset(long *, long *)
 * Address: 0024c1cc
 */
TXView::SetCaretOffset(long *, long *) {
    /*
        24c1cc:	e1a0c00d 	mov	ip, sp
        24c1d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24c1d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c1d8:	e1a04001 	mov	r4, r1
        24c1dc:	e1a05002 	mov	r5, r2
        24c1e0:	eb653eed 	bl	1b9bd9c <TXView::$CountChars(void)>
        24c1e4:	e5941000 	ldr	r1, [r4]
        24c1e8:	e1510000 	cmp	r1, r0
        24c1ec:	c5840000 	strgt	r0, [r4]
        24c1f0:	e5941000 	ldr	r1, [r4]
        24c1f4:	e5952000 	ldr	r2, [r5]
        24c1f8:	e0812002 	add	r2, r1, r2
        24c1fc:	e1520000 	cmp	r2, r0
        24c200:	c0400001 	subgt	r0, r0, r1
        24c204:	c5850000 	strgt	r0, [r5]
        24c208:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::SetSelection(RefVar const &, long *, long *)
 * Address: 0024c20c
 */
TXView::SetSelection(RefVar const &, long *, long *) {
    /*
        24c20c:	e1a0c00d 	mov	ip, sp
        24c210:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        24c214:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c218:	e1a06000 	mov	r6, r0
        24c21c:	e1a07001 	mov	r7, r1
        24c220:	e1a05002 	mov	r5, r2
        24c224:	e1a04003 	mov	r4, r3
        24c228:	e5910000 	ldr	r0, [r1]
        24c22c:	e5900000 	ldr	r0, [r0]
        24c230:	e3300002 	teq	r0, #2	; 0x2
        24c234:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        24c238:	e59f10bc 	ldr	r1, [pc, #bc]	; 24c2fc <TXView::SetSelection(RefVar const &, long *, long *)+0xf0>
        24c23c:	e1a00007 	mov	r0, r7
        24c240:	e3a02000 	mov	r2, #0	; 0x0
        24c244:	eb65e007 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        24c248:	e3100003 	tst	r0, #3	; 0x3
        24c24c:	01a00140 	moveq	r0, r0, asr #2
        24c250:	0a000000 	beq	24c258 <TXView::SetSelection(RefVar const &, long *, long *)+0x4c>
        24c254:	eb65d7b0 	bl	1bc211c <$_RINTError(long)>
        24c258:	e5850000 	str	r0, [r5]
        24c25c:	e59f109c 	ldr	r1, [pc, #9c]	; 24c300 <TXView::SetSelection(RefVar const &, long *, long *)+0xf4>
        24c260:	e1a00007 	mov	r0, r7
        24c264:	e3a02000 	mov	r2, #0	; 0x0
        24c268:	eb65dffe 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        24c26c:	eb65d7b6 	bl	1bc214c <$AllocateRefHandle(long)>
        24c270:	e1a07000 	mov	r7, r0
        24c274:	e5900000 	ldr	r0, [r0]
        24c278:	e3300002 	teq	r0, #2	; 0x2
        24c27c:	03a00000 	moveq	r0, #0	; 0x0
        24c280:	0a000003 	beq	24c294 <TXView::SetSelection(RefVar const &, long *, long *)+0x88>
        24c284:	e3100003 	tst	r0, #3	; 0x3
        24c288:	01a00140 	moveq	r0, r0, asr #2
        24c28c:	0a000000 	beq	24c294 <TXView::SetSelection(RefVar const &, long *, long *)+0x88>
        24c290:	eb65d7a1 	bl	1bc211c <$_RINTError(long)>
        24c294:	e5840000 	str	r0, [r4]
        24c298:	e1a02004 	mov	r2, r4
        24c29c:	e1a01005 	mov	r1, r5
        24c2a0:	e1a00006 	mov	r0, r6
        24c2a4:	e5963000 	ldr	r3, [r6]
        24c2a8:	e1a0e00f 	mov	lr, pc
        24c2ac:	e283f05c 	add	pc, r3, #92	; 0x5c
        24c2b0:	e24dd010 	sub	sp, sp, #16	; 0x10
        24c2b4:	e3a03001 	mov	r3, #1	; 0x1
        24c2b8:	e92d0008 	stmdb	sp!, {r3}
        24c2bc:	e5951000 	ldr	r1, [r5]
        24c2c0:	e5940000 	ldr	r0, [r4]
        24c2c4:	e0812000 	add	r2, r1, r0
        24c2c8:	e28d0004 	add	r0, sp, #4	; 0x4
        24c2cc:	e3a03000 	mov	r3, #0	; 0x0
        24c2d0:	ebff9f6d 	bl	23408c <TXOffsetRange::Set(long, long, unsigned char, unsigned char)>
        24c2d4:	e28dd004 	add	sp, sp, #4	; 0x4
        24c2d8:	e1a0100d 	mov	r1, sp
        24c2dc:	e1a00006 	mov	r0, r6
        24c2e0:	e3a03000 	mov	r3, #0	; 0x0
        24c2e4:	e3a02000 	mov	r2, #0	; 0x0
        24c2e8:	eb653ea9 	bl	1b9bd94 <TXView::$SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)>
        24c2ec:	e1a00007 	mov	r0, r7
        24c2f0:	eb65dbb1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c2f4:	e1a00006 	mov	r0, r6
        24c2f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        24c2fc:	00683b30 	rsbeq	r3, r8, r0, lsr fp
        24c300:	00683500 	rsbeq	r3, r8, r0, lsl #10
    */
}

/**
 * Symbol: TXView::GetSelection(void)
 * Address: 0024c304
 */
TXView::GetSelection(void) {
    /*
        24c304:	e1a0c00d 	mov	ip, sp
        24c308:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24c30c:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c310:	e24dd010 	sub	sp, sp, #16	; 0x10
        24c314:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24c318:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24c31c:	e1a0100d 	mov	r1, sp
        24c320:	eb651155 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        24c324:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24c328:	e59f0074 	ldr	r0, [pc, #74]	; 24c3a4 <TXView::GetSelection(void)+0xa0>
        24c32c:	eb65d78e 	bl	1bc216c <$Clone(RefVar const &)>
        24c330:	eb65d785 	bl	1bc214c <$AllocateRefHandle(long)>
        24c334:	e58d0008 	str	r0, [sp, #8]	; fField8
        24c338:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        24c33c:	e1a00100 	mov	r0, r0, lsl #2
        24c340:	eb65d781 	bl	1bc214c <$AllocateRefHandle(long)>
        24c344:	e58d0000 	str	r0, [sp]
        24c348:	e1a0200d 	mov	r2, sp
        24c34c:	e59f1054 	ldr	r1, [pc, #54]	; 24c3a8 <TXView::GetSelection(void)+0xa4>
        24c350:	e28d0008 	add	r0, sp, #8	; 0x8
        24c354:	eb65e803 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24c358:	e59d0000 	ldr	r0, [sp]
        24c35c:	eb65db96 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c360:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        24c364:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        24c368:	e0400001 	sub	r0, r0, r1
        24c36c:	e1a00100 	mov	r0, r0, lsl #2
        24c370:	eb65d775 	bl	1bc214c <$AllocateRefHandle(long)>
        24c374:	e58d0004 	str	r0, [sp, #4]	; fField4
        24c378:	e28d2004 	add	r2, sp, #4	; 0x4
        24c37c:	e59f1028 	ldr	r1, [pc, #28]	; 24c3ac <TXView::GetSelection(void)+0xa8>
        24c380:	e28d0008 	add	r0, sp, #8	; 0x8
        24c384:	eb65e7f7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24c388:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24c38c:	eb65db8a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c390:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        24c394:	e5904000 	ldr	r4, [r0]
        24c398:	eb65db87 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c39c:	e1a00004 	mov	r0, r4
        24c3a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        24c3a4:	00680028 	rsbeq	r0, r8, r8, lsr #32
        24c3a8:	00683b30 	rsbeq	r3, r8, r0, lsr fp
        24c3ac:	00683500 	rsbeq	r3, r8, r0, lsl #10
    */
}

/**
 * Symbol: TXView::ActivateSelection(unsigned char)
 * Address: 0024c3b0
 */
TXView::ActivateSelection(unsigned char) {
    /*
        24c3b0:	e1a0c00d 	mov	ip, sp
        24c3b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24c3b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c3bc:	e1a04000 	mov	r4, r0
        24c3c0:	e20110ff 	and	r1, r1, #255	; 0xff
        24c3c4:	e1a05001 	mov	r5, r1
        24c3c8:	eb626bfb 	bl	1ae73bc <TView::$ActivateSelection(unsigned char)>
        24c3cc:	e1a01005 	mov	r1, r5
        24c3d0:	e3a02001 	mov	r2, #1	; 0x1
        24c3d4:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        24c3d8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        24c3dc:	ea654eff 	b	1b9ffe0 <Textension::$Activate(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TXView::TextFlags( const(void))
 * Address: 0024c3e0
 */
TXView::TextFlags( const(void)) {
    /*
        24c3e0:	e1a0c00d 	mov	ip, sp
        24c3e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24c3e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c3ec:	e5904008 	ldr	r4, [r0, #8]	; fField8
        24c3f0:	eb626bed 	bl	1ae73ac <TView::$TextFlags( const(void))>
        24c3f4:	e1a01004 	mov	r1, r4
        24c3f8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        24c3fc:	ea627425 	b	1ae9498 <$GetInputViewTextFlags__FUlT1>
    */
}

/**
 * Symbol: TXView::__dt(void)
 * Address: 0024c400
 */
TXView::~TXView(void) {
    /*
        24c400:	e1a0c00d 	mov	ip, sp
        24c404:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24c408:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c40c:	e1a04000 	mov	r4, r0
        24c410:	e1a05001 	mov	r5, r1
        24c414:	e59f0068 	ldr	r0, [pc, #68]	; 24c484 <TXView::__dt(void)+0x84>	; fField68
        24c418:	e5840000 	str	r0, [r4]
        24c41c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24c420:	e3300000 	teq	r0, #0	; 0x0
        24c424:	0a000002 	beq	24c434 <TXView::__dt(void)+0x34>
        24c428:	e3a01001 	mov	r1, #1	; 0x1
        24c42c:	e1a0e00f 	mov	lr, pc
        24c430:	e590f000 	ldr	pc, [r0]
        24c434:	e5940034 	ldr	r0, [r4, #52]	; fField52
        24c438:	e3300000 	teq	r0, #0	; 0x0
        24c43c:	0a000004 	beq	24c454 <TXView::__dt(void)+0x54>
        24c440:	e3a01001 	mov	r1, #1	; 0x1
        24c444:	e1a0e00f 	mov	lr, pc
        24c448:	e590f000 	ldr	pc, [r0]
        24c44c:	e59f0034 	ldr	r0, [pc, #34]	; 24c488 <TXView::__dt(void)+0x88>
        24c450:	eb654280 	bl	1b9ce58 <TXRulerPixMaps::$Release(void)>
        24c454:	e5940058 	ldr	r0, [r4, #88]	; fField88
        24c458:	eb65db57 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c45c:	e5940054 	ldr	r0, [r4, #84]	; fField84
        24c460:	eb65db55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c464:	e1a00004 	mov	r0, r4
        24c468:	e3a01000 	mov	r1, #0	; 0x0
        24c46c:	eb65f406 	bl	1bc948c <TView::$__dt(void)>
        24c470:	e3150001 	tst	r5, #1	; 0x1
        24c474:	11a00004 	movne	r0, r4
        24c478:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        24c47c:	1a60efee 	bne	1a8843c <$__dl__8TxObjectSFPv>
        24c480:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24c484:	0001fa00 	andeq	pc, r1, r0, lsl #20
        24c488:	0c104e90 	ldceq	14, cr4, [r0], -#576
    */
}

/**
 * Symbol: TXView::GetRangeText(long, long)
 * Address: 0024c48c
 */
TXView::GetRangeText(long, long) {
    /*
        24c48c:	e1a0c00d 	mov	ip, sp
        24c490:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24c494:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c498:	e1a04000 	mov	r4, r0
        24c49c:	e24dd010 	sub	sp, sp, #16	; 0x10
        24c4a0:	e3a03001 	mov	r3, #1	; 0x1
        24c4a4:	e92d0008 	stmdb	sp!, {r3}
        24c4a8:	e0812002 	add	r2, r1, r2
        24c4ac:	e28d0004 	add	r0, sp, #4	; 0x4
        24c4b0:	e3a03000 	mov	r3, #0	; 0x0
        24c4b4:	ebff9ee0 	bl	23403c <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)>
        24c4b8:	e28dd004 	add	sp, sp, #4	; 0x4
        24c4bc:	e59f200c 	ldr	r2, [pc, #c]	; 24c4d0 <TXView::GetRangeText(long, long)+0x44>
        24c4c0:	e1a0100d 	mov	r1, sp
        24c4c4:	e1a00004 	mov	r0, r4
        24c4c8:	eb653e48 	bl	1b9bdf0 <TXView::$GetRangeData(TXOffsetRange *, RefVar const &)>
        24c4cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        24c4d0:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: TXView::GetValue(RefVar const &, RefVar const &)
 * Address: 0024c4d4
 */
TXView::GetValue(RefVar const &, RefVar const &) {
    /*
        24c4d4:	e1a0c00d 	mov	ip, sp
        24c4d8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24c4dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c4e0:	e1a04000 	mov	r4, r0
        24c4e4:	e1a06001 	mov	r6, r1
        24c4e8:	e1a05002 	mov	r5, r2
        24c4ec:	e24dd014 	sub	sp, sp, #20	; 0x14
        24c4f0:	e3a00002 	mov	r0, #2	; 0x2
        24c4f4:	eb65d714 	bl	1bc214c <$AllocateRefHandle(long)>
        24c4f8:	e58d0010 	str	r0, [sp, #16]	; fField16
        24c4fc:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24c500:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24c504:	e1a0100d 	mov	r1, sp
        24c508:	eb6510db 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        24c50c:	e59f7084 	ldr	r7, [pc, #84]	; 24c598 <TXView::GetValue(RefVar const &, RefVar const &)+0xc4>	; fField84
        24c510:	e5970000 	ldr	r0, [r7]
        24c514:	e5901000 	ldr	r1, [r0]
        24c518:	e5960000 	ldr	r0, [r6]
        24c51c:	e5900000 	ldr	r0, [r0]
        24c520:	eb65df42 	bl	1bc4230 <$EQRef__FlT1>
        24c524:	e3a08000 	mov	r8, #0	; 0x0
        24c528:	e3300000 	teq	r0, #0	; 0x0
        24c52c:	0a00001c 	beq	24c5a4 <TXView::GetValue(RefVar const &, RefVar const &)+0xd0>
        24c530:	e59f0064 	ldr	r0, [pc, #64]	; 24c59c <TXView::GetValue(RefVar const &, RefVar const &)+0xc8>	; fField64
        24c534:	e5900000 	ldr	r0, [r0]
        24c538:	e5901000 	ldr	r1, [r0]
        24c53c:	e5950000 	ldr	r0, [r5]
        24c540:	e5900000 	ldr	r0, [r0]
        24c544:	eb65df39 	bl	1bc4230 <$EQRef__FlT1>
        24c548:	e3300000 	teq	r0, #0	; 0x0
        24c54c:	0a000014 	beq	24c5a4 <TXView::GetValue(RefVar const &, RefVar const &)+0xd0>
        24c550:	e24dd004 	sub	sp, sp, #4	; 0x4
        24c554:	e3a00000 	mov	r0, #0	; 0x0
        24c558:	eb613e0f 	bl	1a9bd9c <$MakeArray(long)>
        24c55c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        24c560:	e5810000 	str	r0, [r1]
        24c564:	e59f2034 	ldr	r2, [pc, #34]	; 24c5a0 <TXView::GetValue(RefVar const &, RefVar const &)+0xcc>
        24c568:	e28d1004 	add	r1, sp, #4	; 0x4
        24c56c:	e1a00004 	mov	r0, r4
        24c570:	eb653e1e 	bl	1b9bdf0 <TXView::$GetRangeData(TXOffsetRange *, RefVar const &)>
        24c574:	eb65d6f4 	bl	1bc214c <$AllocateRefHandle(long)>
        24c578:	e58d0000 	str	r0, [sp]
        24c57c:	e1a0100d 	mov	r1, sp
        24c580:	e28d0014 	add	r0, sp, #20	; 0x14
        24c584:	eb65d6e7 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        24c588:	e59d0000 	ldr	r0, [sp]
        24c58c:	eb65db0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c590:	e28dd004 	add	sp, sp, #4	; 0x4
        24c594:	ea000049 	b	24c6c0 <TXView::GetValue(RefVar const &, RefVar const &)+0x1ec>
        24c598:	00683110 	rsbeq	r3, r8, r0, lsl r1
        24c59c:	006848d0 	ldreqd	r4, [r8], -#128
        24c5a0:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        24c5a4:	e5970000 	ldr	r0, [r7]
        24c5a8:	e5901000 	ldr	r1, [r0]
        24c5ac:	e5960000 	ldr	r0, [r6]
        24c5b0:	e5900000 	ldr	r0, [r0]
        24c5b4:	eb65df1d 	bl	1bc4230 <$EQRef__FlT1>
        24c5b8:	e3300000 	teq	r0, #0	; 0x0
        24c5bc:	0a000039 	beq	24c6a8 <TXView::GetValue(RefVar const &, RefVar const &)+0x1d4>
        24c5c0:	e59f00dc 	ldr	r0, [pc, #dc]	; 24c6a4 <TXView::GetValue(RefVar const &, RefVar const &)+0x1d0>
        24c5c4:	e5900000 	ldr	r0, [r0]
        24c5c8:	e5901000 	ldr	r1, [r0]
        24c5cc:	e5950000 	ldr	r0, [r5]
        24c5d0:	e5900000 	ldr	r0, [r0]
        24c5d4:	eb65df15 	bl	1bc4230 <$EQRef__FlT1>
        24c5d8:	e3300000 	teq	r0, #0	; 0x0
        24c5dc:	0a000031 	beq	24c6a8 <TXView::GetValue(RefVar const &, RefVar const &)+0x1d4>
        24c5e0:	e59d0000 	ldr	r0, [sp]
        24c5e4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        24c5e8:	e0410000 	sub	r0, r1, r0
        24c5ec:	e3500000 	cmp	r0, #0	; 0x0
        24c5f0:	da000032 	ble	24c6c0 <TXView::GetValue(RefVar const &, RefVar const &)+0x1ec>
        24c5f4:	e3a00001 	mov	r0, #1	; 0x1
        24c5f8:	eb613de7 	bl	1a9bd9c <$MakeArray(long)>
        24c5fc:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        24c600:	e5810000 	str	r0, [r1]
        24c604:	e3a00003 	mov	r0, #3	; 0x3
        24c608:	eb613de3 	bl	1a9bd9c <$MakeArray(long)>
        24c60c:	eb65d6ce 	bl	1bc214c <$AllocateRefHandle(long)>
        24c610:	e1a05000 	mov	r5, r0
        24c614:	e5902000 	ldr	r2, [r0]
        24c618:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        24c61c:	e5900000 	ldr	r0, [r0]
        24c620:	e1a01008 	mov	r1, r8
        24c624:	eb65e74b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        24c628:	e5940024 	ldr	r0, [r4, #36]
        24c62c:	e5902000 	ldr	r2, [r0]
        24c630:	e1a01008 	mov	r1, r8
        24c634:	e5950000 	ldr	r0, [r5]
        24c638:	eb65e746 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        24c63c:	e59d0000 	ldr	r0, [sp]
        24c640:	e1a00100 	mov	r0, r0, lsl #2
        24c644:	eb65d6c0 	bl	1bc214c <$AllocateRefHandle(long)>
        24c648:	e1a04000 	mov	r4, r0
        24c64c:	e5902000 	ldr	r2, [r0]
        24c650:	e3a01001 	mov	r1, #1	; 0x1
        24c654:	e5950000 	ldr	r0, [r5]
        24c658:	eb65e73e 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        24c65c:	e1a00004 	mov	r0, r4
        24c660:	eb65dad5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c664:	e59d0000 	ldr	r0, [sp]
        24c668:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        24c66c:	e0421000 	sub	r1, r2, r0
        24c670:	e0800001 	add	r0, r0, r1
        24c674:	e1a00100 	mov	r0, r0, lsl #2
        24c678:	eb65d6b3 	bl	1bc214c <$AllocateRefHandle(long)>
        24c67c:	e1a04000 	mov	r4, r0
        24c680:	e5902000 	ldr	r2, [r0]
        24c684:	e3a01002 	mov	r1, #2	; 0x2
        24c688:	e5950000 	ldr	r0, [r5]
        24c68c:	eb65e731 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        24c690:	e1a00004 	mov	r0, r4
        24c694:	eb65dac8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c698:	e1a00005 	mov	r0, r5
        24c69c:	eb65dac6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c6a0:	ea000006 	b	24c6c0 <TXView::GetValue(RefVar const &, RefVar const &)+0x1ec>
        24c6a4:	00683b30 	rsbeq	r3, r8, r0, lsr fp
        24c6a8:	e1a02005 	mov	r2, r5
        24c6ac:	e1a01006 	mov	r1, r6
        24c6b0:	e1a00004 	mov	r0, r4
        24c6b4:	eb65f7a6 	bl	1bca554 <TView::$GetValue(RefVar const &, RefVar const &)>
        24c6b8:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        24c6bc:	e5810000 	str	r0, [r1]
        24c6c0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        24c6c4:	e5904000 	ldr	r4, [r0]
        24c6c8:	eb65dabb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c6cc:	e1a00004 	mov	r0, r4
        24c6d0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::ShowRuler(RefVar const &)
 * Address: 0024c6d4
 */
TXView::ShowRuler(RefVar const &) {
    /*
        24c6d4:	e1a0c00d 	mov	ip, sp
        24c6d8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24c6dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c6e0:	e1a04000 	mov	r4, r0
        24c6e4:	e1a05001 	mov	r5, r1
        24c6e8:	e5900034 	ldr	r0, [r0, #52]	; fField52
        24c6ec:	e3300000 	teq	r0, #0	; 0x0
        24c6f0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        24c6f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        24c6f8:	e1a0100d 	mov	r1, sp
        24c6fc:	e59f0084 	ldr	r0, [pc, #84]	; 24c788 <TXView::ShowRuler(RefVar const &)+0xb4>	; fField84
        24c700:	e1a06000 	mov	r6, r0
        24c704:	eb6541d2 	bl	1b9ce54 <$Get__14TXRulerPixMapsFPPA17_8PixelMap>
        24c708:	e3300000 	teq	r0, #0	; 0x0
        24c70c:	0a000004 	beq	24c724 <TXView::ShowRuler(RefVar const &)+0x50>
        24c710:	e1a01000 	mov	r1, r0
        24c714:	e59f0070 	ldr	r0, [pc, #70]	; 24c78c <TXView::ShowRuler(RefVar const &)+0xb8>	; fField70
        24c718:	e5900000 	ldr	r0, [r0]
        24c71c:	e3a02000 	mov	r2, #0	; 0x0
        24c720:	eb665a9d 	bl	1be319c <$Throw>
        24c724:	e1a03005 	mov	r3, r5
        24c728:	e92d0008 	stmdb	sp!, {r3}
        24c72c:	e5942030 	ldr	r2, [r4, #48]	; fField48
        24c730:	e1a01004 	mov	r1, r4
        24c734:	e3a00000 	mov	r0, #0	; 0x0
        24c738:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        24c73c:	eb654e34 	bl	1ba0014 <TXNewtRulerUI::$__ct(TView *, Textension *, PixelMap *, RefVar const &)>
        24c740:	e28dd004 	add	sp, sp, #4	; 0x4
        24c744:	e5840034 	str	r0, [r4, #52]	; fField52
        24c748:	e3300000 	teq	r0, #0	; 0x0
        24c74c:	1a000007 	bne	24c770 <TXView::ShowRuler(RefVar const &)+0x9c>
        24c750:	e1a00006 	mov	r0, r6
        24c754:	eb6541bf 	bl	1b9ce58 <TXRulerPixMaps::$Release(void)>
        24c758:	e59f0030 	ldr	r0, [pc, #30]	; 24c790 <TXView::ShowRuler(RefVar const &)+0xbc>
        24c75c:	e5900000 	ldr	r0, [r0]
        24c760:	e3a02000 	mov	r2, #0	; 0x0
        24c764:	e3a010e9 	mov	r1, #233	; 0xe9
        24c768:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        24c76c:	eb665a8a 	bl	1be319c <$Throw>
        24c770:	e1a00004 	mov	r0, r4
        24c774:	eb653978 	bl	1b9ad5c <TXView::$SyncViewRgn(void)>
        24c778:	e1a00004 	mov	r0, r4
        24c77c:	e3a01000 	mov	r1, #0	; 0x0
        24c780:	eb653d7f 	bl	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
        24c784:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        24c788:	0c104e90 	ldceq	14, cr4, [r0], -#576
        24c78c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        24c790:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TXView::HideRuler(void)
 * Address: 0024c794
 */
TXView::HideRuler(void) {
    /*
        24c794:	e1a0c00d 	mov	ip, sp
        24c798:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24c79c:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c7a0:	e1a04000 	mov	r4, r0
        24c7a4:	e5900034 	ldr	r0, [r0, #52]	; fField52
        24c7a8:	e3300000 	teq	r0, #0	; 0x0
        24c7ac:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        24c7b0:	e3a01001 	mov	r1, #1	; 0x1
        24c7b4:	e1a0e00f 	mov	lr, pc
        24c7b8:	e590f000 	ldr	pc, [r0]
        24c7bc:	e59f0024 	ldr	r0, [pc, #24]	; 24c7e8 <TXView::HideRuler(void)+0x54>
        24c7c0:	eb6541a4 	bl	1b9ce58 <TXRulerPixMaps::$Release(void)>
        24c7c4:	e3a00000 	mov	r0, #0	; 0x0
        24c7c8:	e5840034 	str	r0, [r4, #52]	; fField52
        24c7cc:	e1a00004 	mov	r0, r4
        24c7d0:	eb653961 	bl	1b9ad5c <TXView::$SyncViewRgn(void)>
        24c7d4:	e1a00004 	mov	r0, r4
        24c7d8:	e3a01000 	mov	r1, #0	; 0x0
        24c7dc:	e5942000 	ldr	r2, [r4]
        24c7e0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        24c7e4:	e282f054 	add	pc, r2, #84	; 0x54
        24c7e8:	0c104e90 	ldceq	14, cr4, [r0], -#576
    */
}

/**
 * Symbol: TXView::UpdateRulerInfo(RefVar const &)
 * Address: 0024c7ec
 */
TXView::UpdateRulerInfo(RefVar const &) {
    /*
        24c7ec:	e5900034 	ldr	r0, [r0, #52]	; fField52
        24c7f0:	e3300000 	teq	r0, #0	; 0x0
        24c7f4:	1a652cf0 	bne	1b97bbc <TXRulerUI::$UpdateRulerInfo(RefVar const &)>
        24c7f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXView::Externalize(void)
 * Address: 0024c7fc
 */
TXView::Externalize(void) {
    /*
        24c7fc:	e1a0c00d 	mov	ip, sp
        24c800:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24c804:	e24cb004 	sub	fp, ip, #4	; 0x4
        24c808:	e1a04000 	mov	r4, r0
        24c80c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24c810:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24c814:	e5b07008 	ldr	r7, [r0, #8]!	; fField8
        24c818:	e3a00002 	mov	r0, #2	; 0x2
        24c81c:	eb65d64a 	bl	1bc214c <$AllocateRefHandle(long)>
        24c820:	e40d0004 	str	r0, [sp], -#4	; fField4
        24c824:	e2840058 	add	r0, r4, #88	; 0x58
        24c828:	e1a08000 	mov	r8, r0
        24c82c:	e5900000 	ldr	r0, [r0]
        24c830:	e5900000 	ldr	r0, [r0]
        24c834:	e3300002 	teq	r0, #2	; 0x2
        24c838:	0a00000f 	beq	24c87c <TXView::Externalize(void)+0x80>
        24c83c:	e59f0030 	ldr	r0, [pc, #30]	; 24c874 <TXView::Externalize(void)+0x78>
        24c840:	eb65d649 	bl	1bc216c <$Clone(RefVar const &)>
        24c844:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        24c848:	e5810000 	str	r0, [r1]
        24c84c:	e1a00007 	mov	r0, r7
        24c850:	eb651c51 	bl	1b9399c <TXVBOChars::$GetCharsVBO(void)>
        24c854:	eb65d63c 	bl	1bc214c <$AllocateRefHandle(long)>
        24c858:	e58d0000 	str	r0, [sp]
        24c85c:	e1a0200d 	mov	r2, sp
        24c860:	e59f1010 	ldr	r1, [pc, #10]	; 24c878 <TXView::Externalize(void)+0x7c>
        24c864:	e28d0004 	add	r0, sp, #4	; 0x4
        24c868:	eb65e6be 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24c86c:	e59d0000 	ldr	r0, [sp]
        24c870:	ea00000e 	b	24c8b0 <TXView::Externalize(void)+0xb4>
        24c874:	006806e8 	rsbeq	r0, r8, r8, ror #13
        24c878:	00684ca8 	rsbeq	r4, r8, r8, lsr #25
        24c87c:	e59f0238 	ldr	r0, [pc, #238]	; 24cabc <TXView::Externalize(void)+0x2c0>
        24c880:	eb65d639 	bl	1bc216c <$Clone(RefVar const &)>
        24c884:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        24c888:	e5810000 	str	r0, [r1]
        24c88c:	e5970004 	ldr	r0, [r7, #4]	; fField4
        24c890:	e5900000 	ldr	r0, [r0]
        24c894:	eb65d62c 	bl	1bc214c <$AllocateRefHandle(long)>
        24c898:	e58d0000 	str	r0, [sp]
        24c89c:	e1a0200d 	mov	r2, sp
        24c8a0:	e59f1218 	ldr	r1, [pc, #218]	; 24cac0 <TXView::Externalize(void)+0x2c4>
        24c8a4:	e28d0004 	add	r0, sp, #4	; 0x4
        24c8a8:	eb65e6ae 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24c8ac:	e59d0000 	ldr	r0, [sp]
        24c8b0:	eb65da41 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24c8b4:	e24dd018 	sub	sp, sp, #24	; 0x18
        24c8b8:	e59f0204 	ldr	r0, [pc, #204]	; 24cac4 <TXView::Externalize(void)+0x2c8>
        24c8bc:	e3a01000 	mov	r1, #0	; 0x0
        24c8c0:	eb65d61d 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        24c8c4:	eb65d620 	bl	1bc214c <$AllocateRefHandle(long)>
        24c8c8:	e3a03001 	mov	r3, #1	; 0x1
        24c8cc:	e58d0018 	str	r0, [sp, #24]
        24c8d0:	e92d0008 	stmdb	sp!, {r3}
        24c8d4:	e28d101c 	add	r1, sp, #28	; 0x1c
        24c8d8:	e28d0004 	add	r0, sp, #4	; 0x4
        24c8dc:	e3a03020 	mov	r3, #32	; 0x20
        24c8e0:	e3a02000 	mov	r2, #0	; 0x0
        24c8e4:	eb65180e 	bl	1b92924 <TXBinaryStream::$__ct(RefVar const &, unsigned char, int, unsigned char)>
        24c8e8:	e28dd004 	add	sp, sp, #4	; 0x4
        24c8ec:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24c8f0:	e5900018 	ldr	r0, [r0, #24]
        24c8f4:	e590002c 	ldr	r0, [r0, #44]
        24c8f8:	e2800001 	add	r0, r0, #1	; 0x1
        24c8fc:	e350003c 	cmp	r0, #60	; 0x3c
        24c900:	d3a06000 	movle	r6, #0	; 0x0
        24c904:	c3a06001 	movgt	r6, #1	; 0x1
        24c908:	e594004c 	ldr	r0, [r4, #76]	; fField76
        24c90c:	e3100008 	tst	r0, #8	; 0x8
        24c910:	120600ff 	andne	r0, r6, #255	; 0xff
        24c914:	13806002 	orrne	r6, r0, #2	; 0x2
        24c918:	e56d6004 	strb	r6, [sp, -#4]!	; fField4
        24c91c:	e1a0100d 	mov	r1, sp
        24c920:	e28d0004 	add	r0, sp, #4	; 0x4
        24c924:	e3a02001 	mov	r2, #1	; 0x1
        24c928:	eb6534ee 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        24c92c:	e1b01000 	movs	r1, r0
        24c930:	e28dd004 	add	sp, sp, #4	; 0x4
        24c934:	e59f518c 	ldr	r5, [pc, #18c]	; 24cac8 <TXView::Externalize(void)+0x2cc>
        24c938:	13a02000 	movne	r2, #0	; 0x0
        24c93c:	15950000 	ldrne	r0, [r5]
        24c940:	1b665a15 	blne	1be319c <$Throw>
        24c944:	e5980000 	ldr	r0, [r8]
        24c948:	e5900000 	ldr	r0, [r0]
        24c94c:	e3300002 	teq	r0, #2	; 0x2
        24c950:	0a000008 	beq	24c978 <TXView::Externalize(void)+0x17c>
        24c954:	e1a0100d 	mov	r1, sp
        24c958:	e1a00007 	mov	r0, r7
        24c95c:	eb64eaa5 	bl	1b873f8 <TXChunkedChars::$WriteChunksRanges(TXStream *)>
        24c960:	e3300000 	teq	r0, #0	; 0x0
        24c964:	0a000003 	beq	24c978 <TXView::Externalize(void)+0x17c>
        24c968:	e1a01000 	mov	r1, r0
        24c96c:	e3a02000 	mov	r2, #0	; 0x0
        24c970:	e5950000 	ldr	r0, [r5]
        24c974:	eb665a08 	bl	1be319c <$Throw>
        24c978:	e3160001 	tst	r6, #1	; 0x1
        24c97c:	0a00001b 	beq	24c9f0 <TXView::Externalize(void)+0x1f4>
        24c980:	e24dd004 	sub	sp, sp, #4	; 0x4
        24c984:	e5940038 	ldr	r0, [r4, #56]	; fField56
        24c988:	e1a00800 	mov	r0, r0, lsl #16
        24c98c:	e1a00840 	mov	r0, r0, asr #16
        24c990:	e5cd0001 	strb	r0, [sp, #1]
        24c994:	e1a00440 	mov	r0, r0, asr #8
        24c998:	e5cd0000 	strb	r0, [sp]
        24c99c:	e1a0100d 	mov	r1, sp
        24c9a0:	e28d0004 	add	r0, sp, #4	; 0x4
        24c9a4:	e3a02002 	mov	r2, #2	; 0x2
        24c9a8:	eb6534ce 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        24c9ac:	e28dd004 	add	sp, sp, #4	; 0x4
        24c9b0:	e3300000 	teq	r0, #0	; 0x0
        24c9b4:	0a000003 	beq	24c9c8 <TXView::Externalize(void)+0x1cc>
        24c9b8:	e1a01000 	mov	r1, r0
        24c9bc:	e3a02000 	mov	r2, #0	; 0x0
        24c9c0:	e5950000 	ldr	r0, [r5]
        24c9c4:	eb6659f4 	bl	1be319c <$Throw>
        24c9c8:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24c9cc:	e5900018 	ldr	r0, [r0, #24]
        24c9d0:	e1a0100d 	mov	r1, sp
        24c9d4:	eb650334 	bl	1b8d6ac <TXFormatter::$WriteToStream(TXStream *)>
        24c9d8:	e3300000 	teq	r0, #0	; 0x0
        24c9dc:	0a000003 	beq	24c9f0 <TXView::Externalize(void)+0x1f4>
        24c9e0:	e1a01000 	mov	r1, r0
        24c9e4:	e3a02000 	mov	r2, #0	; 0x0
        24c9e8:	e5950000 	ldr	r0, [r5]
        24c9ec:	eb6659ea 	bl	1be319c <$Throw>
        24c9f0:	e28d2018 	add	r2, sp, #24	; 0x18
        24c9f4:	e59f10d0 	ldr	r1, [pc, #d0]	; 24cacc <TXView::Externalize(void)+0x2d0>
        24c9f8:	e28d001c 	add	r0, sp, #28	; 0x1c
        24c9fc:	eb65e659 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        24ca00:	e24dd020 	sub	sp, sp, #32	; 0x20
        24ca04:	e3a03001 	mov	r3, #1	; 0x1
        24ca08:	e92d0008 	stmdb	sp!, {r3}
        24ca0c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24ca10:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24ca14:	e5901000 	ldr	r1, [r0]
        24ca18:	e1a0e00f 	mov	lr, pc
        24ca1c:	e281f004 	add	pc, r1, #4	; 0x4
        24ca20:	e1a02000 	mov	r2, r0
        24ca24:	e28d0014 	add	r0, sp, #20	; 0x14
        24ca28:	e3a03000 	mov	r3, #0	; 0x0
        24ca2c:	e3a01000 	mov	r1, #0	; 0x0
        24ca30:	ebff9d81 	bl	23403c <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)>
        24ca34:	e28dd004 	add	sp, sp, #4	; 0x4
        24ca38:	e28d103c 	add	r1, sp, #60	; 0x3c
        24ca3c:	e1a0000d 	mov	r0, sp
        24ca40:	eb6517bc 	bl	1b92938 <TXNewtContainer::$__ct(RefVar const &)>
        24ca44:	e1a0200d 	mov	r2, sp
        24ca48:	e28d1010 	add	r1, sp, #16	; 0x10
        24ca4c:	e3a03006 	mov	r3, #6	; 0x6
        24ca50:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24ca54:	eb654d67 	bl	1b9fff8 <Textension::$Export(TXOffsetRange *, TXContainer *, unsigned char)>
        24ca58:	e3300000 	teq	r0, #0	; 0x0
        24ca5c:	0a000003 	beq	24ca70 <TXView::Externalize(void)+0x274>
        24ca60:	e1a01000 	mov	r1, r0
        24ca64:	e3a02000 	mov	r2, #0	; 0x0
        24ca68:	e5950000 	ldr	r0, [r5]
        24ca6c:	eb6659ca 	bl	1be319c <$Throw>
        24ca70:	e1a0000d 	mov	r0, sp
        24ca74:	e3a01000 	mov	r1, #0	; 0x0
        24ca78:	eb6517af 	bl	1b9293c <TXNewtContainer::$__dt(void)>
        24ca7c:	e28dd020 	add	sp, sp, #32	; 0x20
        24ca80:	e594004c 	ldr	r0, [r4, #76]	; fField76
        24ca84:	e3c00002 	bic	r0, r0, #2	; 0x2
        24ca88:	e5a4004c 	str	r0, [r4, #76]!	; fField76
        24ca8c:	e59d001c 	ldr	r0, [sp, #28]
        24ca90:	e5904000 	ldr	r4, [r0]
        24ca94:	e1a0000d 	mov	r0, sp
        24ca98:	e3a01000 	mov	r1, #0	; 0x0
        24ca9c:	e1a0e00f 	mov	lr, pc
        24caa0:	e59df000 	ldr	pc, [sp]
        24caa4:	e59d0018 	ldr	r0, [sp, #24]
        24caa8:	eb65d9c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24caac:	e59d001c 	ldr	r0, [sp, #28]
        24cab0:	eb65d9c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24cab4:	e1a00004 	mov	r0, r4
        24cab8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        24cabc:	00680f50 	rsbeq	r0, r8, r0, asr pc
        24cac0:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        24cac4:	006820a0 	rsbeq	r2, r8, r0, lsr #1
        24cac8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        24cacc:	00684ca0 	rsbeq	r4, r8, r0, lsr #25
    */
}

/**
 * Symbol: TXView::InternalizeChars(RefVar const &)
 * Address: 0024cad0
 */
TXView::InternalizeChars(RefVar const &) {
    /*
        24cad0:	e1a0c00d 	mov	ip, sp
        24cad4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        24cad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        24cadc:	e1a04000 	mov	r4, r0
        24cae0:	e1a07001 	mov	r7, r1
        24cae4:	e24dd004 	sub	sp, sp, #4	; 0x4
        24cae8:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24caec:	e5b05008 	ldr	r5, [r0, #8]!	; fField8
        24caf0:	e1a09005 	mov	r9, r5
        24caf4:	e59f00a8 	ldr	r0, [pc, #a8]	; 24cba4 <TXView::InternalizeChars(RefVar const &)+0xd4>
        24caf8:	e5900000 	ldr	r0, [r0]
        24cafc:	e5901000 	ldr	r1, [r0]
        24cb00:	e5970000 	ldr	r0, [r7]
        24cb04:	e5900000 	ldr	r0, [r0]
        24cb08:	eb65ddd4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        24cb0c:	eb65d58e 	bl	1bc214c <$AllocateRefHandle(long)>
        24cb10:	e58d0000 	str	r0, [sp]
        24cb14:	e5900000 	ldr	r0, [r0]
        24cb18:	e3a08002 	mov	r8, #2	; 0x2
        24cb1c:	e2846058 	add	r6, r4, #88	; 0x58
        24cb20:	e3300002 	teq	r0, #2	; 0x2
        24cb24:	0a00001f 	beq	24cba8 <TXView::InternalizeChars(RefVar const &)+0xd8>
        24cb28:	e24dd004 	sub	sp, sp, #4	; 0x4
        24cb2c:	e5960000 	ldr	r0, [r6]
        24cb30:	e5900000 	ldr	r0, [r0]
        24cb34:	eb65d584 	bl	1bc214c <$AllocateRefHandle(long)>
        24cb38:	e1a07000 	mov	r7, r0
        24cb3c:	e1a0a006 	mov	sl, r6
        24cb40:	e1a00008 	mov	r0, r8
        24cb44:	eb65d580 	bl	1bc214c <$AllocateRefHandle(long)>
        24cb48:	e58d0000 	str	r0, [sp]
        24cb4c:	e1a0000d 	mov	r0, sp
        24cb50:	e28d1004 	add	r1, sp, #4	; 0x4
        24cb54:	eb5fe1e4 	bl	1a452ec <$FGetBinaryStore>
        24cb58:	e59a1000 	ldr	r1, [sl]
        24cb5c:	e5810000 	str	r0, [r1]
        24cb60:	e59d0000 	ldr	r0, [sp]
        24cb64:	eb65d994 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24cb68:	e5970000 	ldr	r0, [r7]
        24cb6c:	e3300002 	teq	r0, #2	; 0x2
        24cb70:	1a000003 	bne	24cb84 <TXView::InternalizeChars(RefVar const &)+0xb4>
        24cb74:	e1a01006 	mov	r1, r6
        24cb78:	e3a00000 	mov	r0, #0	; 0x0
        24cb7c:	eb651b84 	bl	1b93994 <TXVBOChars::$__ct(RefVar const &)>
        24cb80:	e1a05000 	mov	r5, r0
        24cb84:	e3350000 	teq	r5, #0	; 0x0
        24cb88:	128d1004 	addne	r1, sp, #4	; 0x4
        24cb8c:	11a00005 	movne	r0, r5
        24cb90:	1b651b80 	blne	1b93998 <TXVBOChars::$SetCharsVBO(RefVar const &)>
        24cb94:	e1a00007 	mov	r0, r7
        24cb98:	eb65d987 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24cb9c:	e28dd004 	add	sp, sp, #4	; 0x4
        24cba0:	ea000020 	b	24cc28 <TXView::InternalizeChars(RefVar const &)+0x158>
        24cba4:	00684ca8 	rsbeq	r4, r8, r8, lsr #25
        24cba8:	e59f005c 	ldr	r0, [pc, #5c]	; 24cc0c <TXView::InternalizeChars(RefVar const &)+0x13c>
        24cbac:	e5900000 	ldr	r0, [r0]
        24cbb0:	e5901000 	ldr	r1, [r0]
        24cbb4:	e5970000 	ldr	r0, [r7]
        24cbb8:	e5900000 	ldr	r0, [r0]
        24cbbc:	eb65dda7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        24cbc0:	e59d1000 	ldr	r1, [sp]
        24cbc4:	e5810000 	str	r0, [r1]
        24cbc8:	e3300002 	teq	r0, #2	; 0x2
        24cbcc:	1a000004 	bne	24cbe4 <TXView::InternalizeChars(RefVar const &)+0x114>
        24cbd0:	e59f0038 	ldr	r0, [pc, #38]	; 24cc10 <TXView::InternalizeChars(RefVar const &)+0x140>
        24cbd4:	e5900000 	ldr	r0, [r0]
        24cbd8:	e3a02000 	mov	r2, #0	; 0x0
        24cbdc:	e59f1030 	ldr	r1, [pc, #30]	; 24cc14 <TXView::InternalizeChars(RefVar const &)+0x144>
        24cbe0:	eb66596d 	bl	1be319c <$Throw>
        24cbe4:	e5960000 	ldr	r0, [r6]
        24cbe8:	e5901000 	ldr	r1, [r0]
        24cbec:	e3310002 	teq	r1, #2	; 0x2
        24cbf0:	0a000008 	beq	24cc18 <TXView::InternalizeChars(RefVar const &)+0x148>
        24cbf4:	e1a0100d 	mov	r1, sp
        24cbf8:	e5808000 	str	r8, [r0]
        24cbfc:	e3a00000 	mov	r0, #0	; 0x0
        24cc00:	eb651758 	bl	1b92968 <TXBinaryChars::$__ct(RefVar const &)>
        24cc04:	e1a05000 	mov	r5, r0
        24cc08:	ea000006 	b	24cc28 <TXView::InternalizeChars(RefVar const &)+0x158>
        24cc0c:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        24cc10:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        24cc14:	ffffde03 	swinv	0x00ffde03
        24cc18:	e59d1000 	ldr	r1, [sp]
        24cc1c:	e5911000 	ldr	r1, [r1]
        24cc20:	e5950004 	ldr	r0, [r5, #4]	; fField4
        24cc24:	e5801000 	str	r1, [r0]
        24cc28:	e3350000 	teq	r5, #0	; 0x0
        24cc2c:	1a000005 	bne	24cc48 <TXView::InternalizeChars(RefVar const &)+0x178>
        24cc30:	e59f0030 	ldr	r0, [pc, #30]	; 24cc68 <TXView::InternalizeChars(RefVar const &)+0x198>
        24cc34:	e5900000 	ldr	r0, [r0]
        24cc38:	e3a02000 	mov	r2, #0	; 0x0
        24cc3c:	e3a010e9 	mov	r1, #233	; 0xe9
        24cc40:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        24cc44:	eb665954 	bl	1be319c <$Throw>
        24cc48:	e1350009 	teq	r5, r9
        24cc4c:	11a01005 	movne	r1, r5
        24cc50:	15b40030 	ldrne	r0, [r4, #48]!	; fField48
        24cc54:	1b654cd0 	blne	1b9ff9c <Textension::$SetCharsHandler(TXChars *)>
        24cc58:	e59d0000 	ldr	r0, [sp]
        24cc5c:	eb65d956 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24cc60:	e1a00005 	mov	r0, r5
        24cc64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        24cc68:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TXView::InternalizeFormattingData(TXStream *, char)
 * Address: 0024cc6c
 */
TXView::InternalizeFormattingData(TXStream *, char) {
    /*
        24cc6c:	e1a0c00d 	mov	ip, sp
        24cc70:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24cc74:	e24cb004 	sub	fp, ip, #4	; 0x4
        24cc78:	e1a04000 	mov	r4, r0
        24cc7c:	e1a05001 	mov	r5, r1
        24cc80:	e20270ff 	and	r7, r2, #255	; 0xff
        24cc84:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24cc88:	e3a06000 	mov	r6, #0	; 0x0
        24cc8c:	e5b08018 	ldr	r8, [r0, #24]!
        24cc90:	e3170001 	tst	r7, #1	; 0x1
        24cc94:	0a00001d 	beq	24cd10 <TXView::InternalizeFormattingData(TXStream *, char)+0xa4>
        24cc98:	e24dd004 	sub	sp, sp, #4	; 0x4
        24cc9c:	e1a0100d 	mov	r1, sp
        24cca0:	e1a00005 	mov	r0, r5
        24cca4:	e3a02002 	mov	r2, #2	; 0x2
        24cca8:	eb65340f 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        24ccac:	e3300000 	teq	r0, #0	; 0x0
        24ccb0:	1a000015 	bne	24cd0c <TXView::InternalizeFormattingData(TXStream *, char)+0xa0>
        24ccb4:	e5940038 	ldr	r0, [r4, #56]	; fField56
        24ccb8:	e59d1000 	ldr	r1, [sp]
        24ccbc:	e1300841 	teq	r0, r1, asr #16
        24ccc0:	1a000008 	bne	24cce8 <TXView::InternalizeFormattingData(TXStream *, char)+0x7c>
        24ccc4:	e594004c 	ldr	r0, [r4, #76]	; fField76
        24ccc8:	e3100008 	tst	r0, #8	; 0x8
        24cccc:	13a00000 	movne	r0, #0	; 0x0
        24ccd0:	03a00001 	moveq	r0, #1	; 0x1
        24ccd4:	e3170002 	tst	r7, #2	; 0x2
        24ccd8:	13a01000 	movne	r1, #0	; 0x0
        24ccdc:	03a01001 	moveq	r1, #1	; 0x1
        24cce0:	e1300001 	teq	r0, r1
        24cce4:	0a000003 	beq	24ccf8 <TXView::InternalizeFormattingData(TXStream *, char)+0x8c>
        24cce8:	e594004c 	ldr	r0, [r4, #76]	; fField76
        24ccec:	e3800002 	orr	r0, r0, #2	; 0x2
        24ccf0:	e5a4004c 	str	r0, [r4, #76]!	; fField76
        24ccf4:	ea000004 	b	24cd0c <TXView::InternalizeFormattingData(TXStream *, char)+0xa0>
        24ccf8:	e1a01005 	mov	r1, r5
        24ccfc:	e1a00008 	mov	r0, r8
        24cd00:	eb65026a 	bl	1b8d6b0 <TXFormatter::$ReadFromStream(TXStream *)>
        24cd04:	e3300000 	teq	r0, #0	; 0x0
        24cd08:	03a06001 	moveq	r6, #1	; 0x1
        24cd0c:	e28dd004 	add	sp, sp, #4	; 0x4
        24cd10:	e1a00006 	mov	r0, r6
        24cd14:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::Internalize(RefVar const &)
 * Address: 0024cd18
 */
TXView::Internalize(RefVar const &) {
    /*
        24cd18:	e1a0c00d 	mov	ip, sp
        24cd1c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        24cd20:	e24cb004 	sub	fp, ip, #4	; 0x4
        24cd24:	e1a04000 	mov	r4, r0
        24cd28:	e1a05001 	mov	r5, r1
        24cd2c:	e590004c 	ldr	r0, [r0, #76]	; fField76
        24cd30:	e3c00002 	bic	r0, r0, #2	; 0x2
        24cd34:	e584004c 	str	r0, [r4, #76]	; fField76
        24cd38:	e3a00000 	mov	r0, #0	; 0x0
        24cd3c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        24cd40:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24cd44:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24cd48:	e5901000 	ldr	r1, [r0]
        24cd4c:	e1a0e00f 	mov	lr, pc
        24cd50:	e281f004 	add	pc, r1, #4	; 0x4
        24cd54:	e1b06000 	movs	r6, r0
        24cd58:	0a000008 	beq	24cd80 <TXView::Internalize(RefVar const &)+0x68>
        24cd5c:	e24dd024 	sub	sp, sp, #36	; 0x24
        24cd60:	e1a0000d 	mov	r0, sp
        24cd64:	eb654ca5 	bl	1ba0000 <TXReplaceParams::$__ct(void)>
        24cd68:	e1a0300d 	mov	r3, sp
        24cd6c:	e1a02006 	mov	r2, r6
        24cd70:	e3a01000 	mov	r1, #0	; 0x0
        24cd74:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24cd78:	eb654c93 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        24cd7c:	e28dd024 	add	sp, sp, #36	; 0x24
        24cd80:	e3a06000 	mov	r6, #0	; 0x0
        24cd84:	e3a09000 	mov	r9, #0	; 0x0
        24cd88:	e52d606c 	str	r6, [sp, -#108]!
        24cd8c:	e28d0008 	add	r0, sp, #8	; 0x8
        24cd90:	eb6596f7 	bl	1bb2974 <$setjmp>
        24cd94:	e3300000 	teq	r0, #0	; 0x0
        24cd98:	1a000095 	bne	24cff4 <TXView::Internalize(RefVar const &)+0x2dc>
        24cd9c:	e1a0000d 	mov	r0, sp
        24cda0:	eb664cb5 	bl	1be007c <$AddExceptionHandler>
        24cda4:	e24dd008 	sub	sp, sp, #8	; 0x8
        24cda8:	e1a01005 	mov	r1, r5
        24cdac:	e1a00004 	mov	r0, r4
        24cdb0:	eb653c0b 	bl	1b9bde4 <TXView::$InternalizeChars(RefVar const &)>
        24cdb4:	e1a08000 	mov	r8, r0
        24cdb8:	e59f020c 	ldr	r0, [pc, #20c]	; 24cfcc <TXView::Internalize(RefVar const &)+0x2b4>	; fField20
        24cdbc:	e5900000 	ldr	r0, [r0]
        24cdc0:	e5901000 	ldr	r1, [r0]
        24cdc4:	e5950000 	ldr	r0, [r5]
        24cdc8:	e5900000 	ldr	r0, [r0]
        24cdcc:	eb65dd23 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        24cdd0:	eb65d4dd 	bl	1bc214c <$AllocateRefHandle(long)>
        24cdd4:	e58d0004 	str	r0, [sp, #4]	; fField4
        24cdd8:	e5cd6000 	strb	r6, [sp]
        24cddc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24cde0:	e5900000 	ldr	r0, [r0]
        24cde4:	e2847058 	add	r7, r4, #88	; 0x58
        24cde8:	e3300002 	teq	r0, #2	; 0x2
        24cdec:	0a000079 	beq	24cfd8 <TXView::Internalize(RefVar const &)+0x2c0>
        24cdf0:	e3a03001 	mov	r3, #1	; 0x1
        24cdf4:	e92d0008 	stmdb	sp!, {r3}
        24cdf8:	e28d1008 	add	r1, sp, #8	; 0x8
        24cdfc:	e3a03000 	mov	r3, #0	; 0x0
        24ce00:	e3a02001 	mov	r2, #1	; 0x1
        24ce04:	e3a00000 	mov	r0, #0	; 0x0
        24ce08:	eb6516c5 	bl	1b92924 <TXBinaryStream::$__ct(RefVar const &, unsigned char, int, unsigned char)>
        24ce0c:	e28dd004 	add	sp, sp, #4	; 0x4
        24ce10:	e58d0074 	str	r0, [sp, #116]
        24ce14:	e3300000 	teq	r0, #0	; 0x0
        24ce18:	1a000005 	bne	24ce34 <TXView::Internalize(RefVar const &)+0x11c>
        24ce1c:	e59f01ac 	ldr	r0, [pc, #1ac]	; 24cfd0 <TXView::Internalize(RefVar const &)+0x2b8>
        24ce20:	e5900000 	ldr	r0, [r0]
        24ce24:	e3a02000 	mov	r2, #0	; 0x0
        24ce28:	e3a010e9 	mov	r1, #233	; 0xe9
        24ce2c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        24ce30:	eb6658d9 	bl	1be319c <$Throw>
        24ce34:	e59d0074 	ldr	r0, [sp, #116]
        24ce38:	e1a0100d 	mov	r1, sp
        24ce3c:	e3a02001 	mov	r2, #1	; 0x1
        24ce40:	eb6533a9 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        24ce44:	e1b06000 	movs	r6, r0
        24ce48:	1a000007 	bne	24ce6c <TXView::Internalize(RefVar const &)+0x154>
        24ce4c:	e5970000 	ldr	r0, [r7]
        24ce50:	e5900000 	ldr	r0, [r0]
        24ce54:	e3300002 	teq	r0, #2	; 0x2
        24ce58:	0a000005 	beq	24ce74 <TXView::Internalize(RefVar const &)+0x15c>
        24ce5c:	e1a00008 	mov	r0, r8
        24ce60:	e59d1074 	ldr	r1, [sp, #116]
        24ce64:	eb64e964 	bl	1b873fc <TXChunkedChars::$ReadChunksRanges(TXStream *)>
        24ce68:	e1a06000 	mov	r6, r0
        24ce6c:	e3360000 	teq	r6, #0	; 0x0
        24ce70:	1a000048 	bne	24cf98 <TXView::Internalize(RefVar const &)+0x280>
        24ce74:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24ce78:	e5b0a010 	ldr	sl, [r0, #16]!	; fField16
        24ce7c:	e5907008 	ldr	r7, [r0, #8]	; fField8
        24ce80:	e5970020 	ldr	r0, [r7, #32]	; fField32
        24ce84:	e2400001 	sub	r0, r0, #1	; 0x1
        24ce88:	e5870020 	str	r0, [r7, #32]	; fField32
        24ce8c:	e1a0000a 	mov	r0, sl
        24ce90:	eb64f9cd 	bl	1b8b5cc <TXDisplay::$DisableDrawing(void)>
        24ce94:	e24dd034 	sub	sp, sp, #52	; 0x34
        24ce98:	e1a01005 	mov	r1, r5
        24ce9c:	e28d0024 	add	r0, sp, #36	; 0x24
        24cea0:	eb6516a4 	bl	1b92938 <TXNewtContainer::$__ct(RefVar const &)>
        24cea4:	e28d1024 	add	r1, sp, #36	; 0x24
        24cea8:	e1a0000d 	mov	r0, sp
        24ceac:	e3a02006 	mov	r2, #6	; 0x6
        24ceb0:	eb654c54 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        24ceb4:	e1a00008 	mov	r0, r8
        24ceb8:	e5981000 	ldr	r1, [r8]
        24cebc:	e1a0e00f 	mov	lr, pc
        24cec0:	e281f004 	add	pc, r1, #4	; 0x4
        24cec4:	e1a02000 	mov	r2, r0
        24cec8:	e1a0300d 	mov	r3, sp
        24cecc:	e3a01000 	mov	r1, #0	; 0x0
        24ced0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24ced4:	eb654c3c 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        24ced8:	e1a06000 	mov	r6, r0
        24cedc:	e5970020 	ldr	r0, [r7, #32]	; fField32
        24cee0:	e2800001 	add	r0, r0, #1	; 0x1
        24cee4:	e5870020 	str	r0, [r7, #32]	; fField32
        24cee8:	e1a0000a 	mov	r0, sl
        24ceec:	eb64f9b7 	bl	1b8b5d0 <TXDisplay::$EnableDrawing(void)>
        24cef0:	e3360000 	teq	r6, #0	; 0x0
        24cef4:	1a000023 	bne	24cf88 <TXView::Internalize(RefVar const &)+0x270>
        24cef8:	e1a0000a 	mov	r0, sl
        24cefc:	eb64fdc2 	bl	1b8c60c <TXDisplay::$InvalidDraw(void)>
        24cf00:	e5dd2034 	ldrb	r2, [sp, #52]	; fField52
        24cf04:	e1a00004 	mov	r0, r4
        24cf08:	e59d10a8 	ldr	r1, [sp, #168]
        24cf0c:	eb653bb5 	bl	1b9bde8 <TXView::$InternalizeFormattingData(TXStream *, char)>
        24cf10:	e3300000 	teq	r0, #0	; 0x0
        24cf14:	1a00001b 	bne	24cf88 <TXView::Internalize(RefVar const &)+0x270>
        24cf18:	e3a00033 	mov	r0, #51	; 0x33
        24cf1c:	eb61dcb8 	bl	1ac4204 <$BusyBoxSend(long)>
        24cf20:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24cf24:	e3a03004 	mov	r3, #4	; 0x4
        24cf28:	e5b0501c 	ldr	r5, [r0, #28]!
        24cf2c:	e92d0008 	stmdb	sp!, {r3}
        24cf30:	e1a00008 	mov	r0, r8
        24cf34:	e5981000 	ldr	r1, [r8]
        24cf38:	e1a0e00f 	mov	lr, pc
        24cf3c:	e081f003 	add	pc, r1, r3
        24cf40:	e1a03000 	mov	r3, r0
        24cf44:	e92d0008 	stmdb	sp!, {r3}
        24cf48:	e1a01008 	mov	r1, r8
        24cf4c:	e1a00005 	mov	r0, r5
        24cf50:	e3a03000 	mov	r3, #0	; 0x0
        24cf54:	e3a02000 	mov	r2, #0	; 0x0
        24cf58:	e595c000 	ldr	ip, [r5]
        24cf5c:	e1a0e00f 	mov	lr, pc
        24cf60:	e28cf038 	add	pc, ip, #56	; 0x38
        24cf64:	e28dd008 	add	sp, sp, #8	; 0x8
        24cf68:	e3a03000 	mov	r3, #0	; 0x0
        24cf6c:	e92d0008 	stmdb	sp!, {r3}
        24cf70:	e1a00007 	mov	r0, r7
        24cf74:	e3e02000 	mvn	r2, #0	; 0x0
        24cf78:	e3a01000 	mov	r1, #0	; 0x0
        24cf7c:	eb6501c7 	bl	1b8d6a0 <TXFormatter::$Format(long, long, long *, long *)>
        24cf80:	e28dd004 	add	sp, sp, #4	; 0x4
        24cf84:	e1a06000 	mov	r6, r0
        24cf88:	e28d0024 	add	r0, sp, #36	; 0x24
        24cf8c:	e3a01000 	mov	r1, #0	; 0x0
        24cf90:	eb651669 	bl	1b9293c <TXNewtContainer::$__dt(void)>
        24cf94:	e28dd034 	add	sp, sp, #52	; 0x34
        24cf98:	e3360000 	teq	r6, #0	; 0x0
        24cf9c:	0a000004 	beq	24cfb4 <TXView::Internalize(RefVar const &)+0x29c>
        24cfa0:	e1a01006 	mov	r1, r6
        24cfa4:	e59f0028 	ldr	r0, [pc, #28]	; 24cfd4 <TXView::Internalize(RefVar const &)+0x2bc>
        24cfa8:	e5900000 	ldr	r0, [r0]
        24cfac:	e3a02000 	mov	r2, #0	; 0x0
        24cfb0:	eb665879 	bl	1be319c <$Throw>
        24cfb4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24cfb8:	eb65d87f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24cfbc:	e28dd008 	add	sp, sp, #8	; 0x8
        24cfc0:	e1a0000d 	mov	r0, sp
        24cfc4:	eb66503b 	bl	1be10b8 <$ExitHandler>
        24cfc8:	ea00000a 	b	24cff8 <TXView::Internalize(RefVar const &)+0x2e0>
        24cfcc:	00684ca0 	rsbeq	r4, r8, r0, lsr #25
        24cfd0:	00371318 	eoreqs	r1, r7, r8, lsl r3
        24cfd4:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        24cfd8:	e5970000 	ldr	r0, [r7]
        24cfdc:	e5900000 	ldr	r0, [r0]
        24cfe0:	e3300002 	teq	r0, #2	; 0x2
        24cfe4:	0affffa2 	beq	24ce74 <TXView::Internalize(RefVar const &)+0x15c>
        24cfe8:	e59f6000 	ldr	r6, [pc, #0]	; 24cff0 <TXView::Internalize(RefVar const &)+0x2d8>
        24cfec:	eaffffeb 	b	24cfa0 <TXView::Internalize(RefVar const &)+0x288>
        24cff0:	ffffde03 	swinv	0x00ffde03
        24cff4:	e3a09001 	mov	r9, #1	; 0x1
        24cff8:	e59d006c 	ldr	r0, [sp, #108]
        24cffc:	e3300000 	teq	r0, #0	; 0x0
        24d000:	0a000002 	beq	24d010 <TXView::Internalize(RefVar const &)+0x2f8>
        24d004:	e3a01001 	mov	r1, #1	; 0x1
        24d008:	e1a0e00f 	mov	lr, pc
        24d00c:	e590f000 	ldr	pc, [r0]
        24d010:	e3390000 	teq	r9, #0	; 0x0
        24d014:	0a000007 	beq	24d038 <TXView::Internalize(RefVar const &)+0x320>
        24d018:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24d01c:	e3300000 	teq	r0, #0	; 0x0
        24d020:	0a000002 	beq	24d030 <TXView::Internalize(RefVar const &)+0x318>
        24d024:	e3a01001 	mov	r1, #1	; 0x1
        24d028:	e1a0e00f 	mov	lr, pc
        24d02c:	e590f000 	ldr	pc, [r0]
        24d030:	e1a00004 	mov	r0, r4
        24d034:	eb653742 	bl	1b9ad44 <TXView::$CreateNewTextension(void)>
        24d038:	e1a00004 	mov	r0, r4
        24d03c:	e3a01000 	mov	r1, #0	; 0x0
        24d040:	e5942000 	ldr	r2, [r4]
        24d044:	e1a0e00f 	mov	lr, pc
        24d048:	e282f054 	add	pc, r2, #84	; 0x54
        24d04c:	e1a00004 	mov	r0, r4
        24d050:	e3a03001 	mov	r3, #1	; 0x1
        24d054:	e3a02000 	mov	r2, #0	; 0x0
        24d058:	e3a01001 	mov	r1, #1	; 0x1
        24d05c:	eb65438f 	bl	1b9dea0 <TXView::$Edited(unsigned char, unsigned char, unsigned char)>
        24d060:	e1a00004 	mov	r0, r4
        24d064:	e3a01000 	mov	r1, #0	; 0x0
        24d068:	eb653b45 	bl	1b9bd84 <TXView::$UpdateRuler(unsigned char)>
        24d06c:	e3390000 	teq	r9, #0	; 0x0
        24d070:	11a0000d 	movne	r0, sp
        24d074:	1b665436 	blne	1be2154 <$NextHandler>
        24d078:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::GetRangeData(TXOffsetRange *, RefVar const &)
 * Address: 0024d07c
 */
TXView::GetRangeData(TXOffsetRange *, RefVar const &) {
    /*
        24d07c:	e1a0c00d 	mov	ip, sp
        24d080:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        24d084:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d088:	e1a06000 	mov	r6, r0
        24d08c:	e1a05001 	mov	r5, r1
        24d090:	e1a04002 	mov	r4, r2
        24d094:	e24dd014 	sub	sp, sp, #20	; 0x14
        24d098:	e59f0108 	ldr	r0, [pc, #108]	; 24d1a8 <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0x12c>
        24d09c:	eb65d432 	bl	1bc216c <$Clone(RefVar const &)>
        24d0a0:	eb65d429 	bl	1bc214c <$AllocateRefHandle(long)>
        24d0a4:	e58d0010 	str	r0, [sp, #16]	; fField16
        24d0a8:	e28d1010 	add	r1, sp, #16	; 0x10
        24d0ac:	e1a0000d 	mov	r0, sp
        24d0b0:	eb651620 	bl	1b92938 <TXNewtContainer::$__ct(RefVar const &)>
        24d0b4:	e59f90f0 	ldr	r9, [pc, #f0]	; 24d1ac <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0x130>
        24d0b8:	e5990000 	ldr	r0, [r9]
        24d0bc:	e5901000 	ldr	r1, [r0]
        24d0c0:	e5940000 	ldr	r0, [r4]
        24d0c4:	e5900000 	ldr	r0, [r0]
        24d0c8:	eb65dc58 	bl	1bc4230 <$EQRef__FlT1>
        24d0cc:	e59f80dc 	ldr	r8, [pc, #dc]	; 24d1b0 <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0x134>
        24d0d0:	e59f70dc 	ldr	r7, [pc, #dc]	; 24d1b4 <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0x138>
        24d0d4:	e3300000 	teq	r0, #0	; 0x0
        24d0d8:	13a04001 	movne	r4, #1	; 0x1
        24d0dc:	1a00000f 	bne	24d120 <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0xa4>
        24d0e0:	e5980000 	ldr	r0, [r8]
        24d0e4:	e5901000 	ldr	r1, [r0]
        24d0e8:	e5940000 	ldr	r0, [r4]
        24d0ec:	e5900000 	ldr	r0, [r0]
        24d0f0:	eb65dc4e 	bl	1bc4230 <$EQRef__FlT1>
        24d0f4:	e3300000 	teq	r0, #0	; 0x0
        24d0f8:	13a04002 	movne	r4, #2	; 0x2
        24d0fc:	1a000007 	bne	24d120 <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0xa4>
        24d100:	e5970000 	ldr	r0, [r7]
        24d104:	e5901000 	ldr	r1, [r0]
        24d108:	e5940000 	ldr	r0, [r4]
        24d10c:	e5900000 	ldr	r0, [r0]
        24d110:	eb65dc46 	bl	1bc4230 <$EQRef__FlT1>
        24d114:	e3300000 	teq	r0, #0	; 0x0
        24d118:	03a04007 	moveq	r4, #7	; 0x7
        24d11c:	13a04004 	movne	r4, #4	; 0x4
        24d120:	e1a03004 	mov	r3, r4
        24d124:	e1a0200d 	mov	r2, sp
        24d128:	e1a01005 	mov	r1, r5
        24d12c:	e5b60030 	ldr	r0, [r6, #48]!	; fField48
        24d130:	eb654bb0 	bl	1b9fff8 <Textension::$Export(TXOffsetRange *, TXContainer *, unsigned char)>
        24d134:	e3300000 	teq	r0, #0	; 0x0
        24d138:	0a000004 	beq	24d150 <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0xd4>
        24d13c:	e1a01000 	mov	r1, r0
        24d140:	e59f0070 	ldr	r0, [pc, #70]	; 24d1b8 <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0x13c>	; fField70
        24d144:	e5900000 	ldr	r0, [r0]
        24d148:	e3a02000 	mov	r2, #0	; 0x0
        24d14c:	eb665812 	bl	1be319c <$Throw>
        24d150:	e3340007 	teq	r4, #7	; 0x7
        24d154:	059d0010 	ldreq	r0, [sp, #16]	; fField16
        24d158:	05904000 	ldreq	r4, [r0]
        24d15c:	0a00000a 	beq	24d18c <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0x110>
        24d160:	e3340001 	teq	r4, #1	; 0x1
        24d164:	05990000 	ldreq	r0, [r9]
        24d168:	0a000002 	beq	24d178 <TXView::GetRangeData(TXOffsetRange *, RefVar const &)+0xfc>
        24d16c:	e3340002 	teq	r4, #2	; 0x2
        24d170:	15970000 	ldrne	r0, [r7]
        24d174:	05980000 	ldreq	r0, [r8]
        24d178:	e5901000 	ldr	r1, [r0]
        24d17c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        24d180:	e5900000 	ldr	r0, [r0]
        24d184:	eb65dc35 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        24d188:	e1a04000 	mov	r4, r0
        24d18c:	e1a0000d 	mov	r0, sp
        24d190:	e3a01000 	mov	r1, #0	; 0x0
        24d194:	eb6515e8 	bl	1b9293c <TXNewtContainer::$__dt(void)>
        24d198:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        24d19c:	eb65d806 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24d1a0:	e1a00004 	mov	r0, r4
        24d1a4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        24d1a8:	00680590 	streqb	r0, [r8], -#80	; fField80
        24d1ac:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        24d1b0:	00684930 	rsbeq	r4, r8, r0, lsr r9
        24d1b4:	006843f8 	streqd	r4, [r8], -#56	; fField56
        24d1b8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TXView::CreateNewTextension(void)
 * Address: 0024d1bc
 */
TXView::CreateNewTextension(void) {
    /*
        24d1bc:	e1a0c00d 	mov	ip, sp
        24d1c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24d1c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d1c8:	e1a04000 	mov	r4, r0
        24d1cc:	e24dd010 	sub	sp, sp, #16	; 0x10
        24d1d0:	e1a0000d 	mov	r0, sp
        24d1d4:	eb654767 	bl	1b9ef78 <TXHandlers::$__ct(void)>
        24d1d8:	e3a00000 	mov	r0, #0	; 0x0
        24d1dc:	eb654b6b 	bl	1b9ff90 <Textension::$__ct(void)>
        24d1e0:	e5840030 	str	r0, [r4, #48]	; fField48
        24d1e4:	e3300000 	teq	r0, #0	; 0x0
        24d1e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        24d1ec:	0a000051 	beq	24d338 <TXView::CreateNewTextension(void)+0x17c>
        24d1f0:	e2840058 	add	r0, r4, #88	; 0x58
        24d1f4:	e1a01000 	mov	r1, r0
        24d1f8:	e5900000 	ldr	r0, [r0]
        24d1fc:	e5900000 	ldr	r0, [r0]
        24d200:	e3300002 	teq	r0, #2	; 0x2
        24d204:	0a000003 	beq	24d218 <TXView::CreateNewTextension(void)+0x5c>
        24d208:	e3a00000 	mov	r0, #0	; 0x0
        24d20c:	eb6519e0 	bl	1b93994 <TXVBOChars::$__ct(RefVar const &)>
        24d210:	e58d0010 	str	r0, [sp, #16]	; fField16
        24d214:	ea000008 	b	24d23c <TXView::CreateNewTextension(void)+0x80>
        24d218:	e3a00002 	mov	r0, #2	; 0x2
        24d21c:	eb65d3ca 	bl	1bc214c <$AllocateRefHandle(long)>
        24d220:	e58d0000 	str	r0, [sp]
        24d224:	e1a0100d 	mov	r1, sp
        24d228:	e3a00000 	mov	r0, #0	; 0x0
        24d22c:	eb6515cd 	bl	1b92968 <TXBinaryChars::$__ct(RefVar const &)>
        24d230:	e58d0010 	str	r0, [sp, #16]	; fField16
        24d234:	e59d0000 	ldr	r0, [sp]
        24d238:	eb65d7df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24d23c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        24d240:	e3300000 	teq	r0, #0	; 0x0
        24d244:	0a00003b 	beq	24d338 <TXView::CreateNewTextension(void)+0x17c>
        24d248:	e1a01004 	mov	r1, r4
        24d24c:	e3a00000 	mov	r0, #0	; 0x0
        24d250:	eb653ef3 	bl	1b9ce24 <TXNewtHilite::$__ct(TView *)>
        24d254:	e58d0008 	str	r0, [sp, #8]	; fField8
        24d258:	e3300000 	teq	r0, #0	; 0x0
        24d25c:	0a00002f 	beq	24d320 <TXView::CreateNewTextension(void)+0x164>
        24d260:	e1a01004 	mov	r1, r4
        24d264:	e3a00000 	mov	r0, #0	; 0x0
        24d268:	eb653ee8 	bl	1b9ce10 <TXNewtDisplay::$__ct(TView *)>
        24d26c:	e58d000c 	str	r0, [sp, #12]	; fField12
        24d270:	e3300000 	teq	r0, #0	; 0x0
        24d274:	0a000027 	beq	24d318 <TXView::CreateNewTextension(void)+0x15c>
        24d278:	e594004c 	ldr	r0, [r4, #76]	; fField76
        24d27c:	e3100008 	tst	r0, #8	; 0x8
        24d280:	0a00000a 	beq	24d2b0 <TXView::CreateNewTextension(void)+0xf4>
        24d284:	e3a00034 	mov	r0, #52	; 0x34
        24d288:	eb66052a 	bl	1bce738 <$__nw(unsigned int)>
        24d28c:	e1b05000 	movs	r5, r0
        24d290:	0a000003 	beq	24d2a4 <TXView::CreateNewTextension(void)+0xe8>
        24d294:	e1a00005 	mov	r0, r5
        24d298:	eb651df7 	bl	1b94a7c <TXPageFrames::$__ct(void)>
        24d29c:	e59f0054 	ldr	r0, [pc, #54]	; 24d2f8 <TXView::CreateNewTextension(void)+0x13c>
        24d2a0:	e5850000 	str	r0, [r5]
        24d2a4:	e58d5004 	str	r5, [sp, #4]	; fField4
        24d2a8:	e3350000 	teq	r5, #0	; 0x0
        24d2ac:	0a000013 	beq	24d300 <TXView::CreateNewTextension(void)+0x144>
        24d2b0:	e28d2004 	add	r2, sp, #4	; 0x4
        24d2b4:	e3a03000 	mov	r3, #0	; 0x0
        24d2b8:	e3a01000 	mov	r1, #0	; 0x0
        24d2bc:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24d2c0:	eb654b33 	bl	1b9ff94 <Textension::$ITextension(GrafPort *, TXHandlers const &, char)>
        24d2c4:	e3300000 	teq	r0, #0	; 0x0
        24d2c8:	0a000004 	beq	24d2e0 <TXView::CreateNewTextension(void)+0x124>
        24d2cc:	e1a01000 	mov	r1, r0
        24d2d0:	e59f0024 	ldr	r0, [pc, #24]	; 24d2fc <TXView::CreateNewTextension(void)+0x140>
        24d2d4:	e5900000 	ldr	r0, [r0]
        24d2d8:	e3a02000 	mov	r2, #0	; 0x0
        24d2dc:	eb6657ae 	bl	1be319c <$Throw>
        24d2e0:	e1a00004 	mov	r0, r4
        24d2e4:	eb65369c 	bl	1b9ad5c <TXView::$SyncViewRgn(void)>
        24d2e8:	e1a00004 	mov	r0, r4
        24d2ec:	e3a01000 	mov	r1, #0	; 0x0
        24d2f0:	eb65369a 	bl	1b9ad60 <TXView::$GeometryChanged(unsigned char)>
        24d2f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24d2f8:	0001e6d4 	ldreqd	lr, [r1], -r4
        24d2fc:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        24d300:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        24d304:	e3300000 	teq	r0, #0	; 0x0
        24d308:	0a000002 	beq	24d318 <TXView::CreateNewTextension(void)+0x15c>
        24d30c:	e3a01001 	mov	r1, #1	; 0x1
        24d310:	e1a0e00f 	mov	lr, pc
        24d314:	e590f000 	ldr	pc, [r0]
        24d318:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        24d31c:	eb6600ef 	bl	1bcd6e0 <$__dl(void *)>
        24d320:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        24d324:	e3300000 	teq	r0, #0	; 0x0
        24d328:	0a000002 	beq	24d338 <TXView::CreateNewTextension(void)+0x17c>
        24d32c:	e3a01001 	mov	r1, #1	; 0x1
        24d330:	e1a0e00f 	mov	lr, pc
        24d334:	e590f000 	ldr	pc, [r0]
        24d338:	e59f0014 	ldr	r0, [pc, #14]	; 24d354 <TXView::CreateNewTextension(void)+0x198>
        24d33c:	e5900000 	ldr	r0, [r0]
        24d340:	e3a02000 	mov	r2, #0	; 0x0
        24d344:	e3a010e9 	mov	r1, #233	; 0xe9
        24d348:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        24d34c:	eb665792 	bl	1be319c <$Throw>
        24d350:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24d354:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TXView::GetCountPages(void)
 * Address: 0024d358
 */
TXView::GetCountPages(void) {
    /*
        24d358:	e590104c 	ldr	r1, [r0, #76]	; fField76
        24d35c:	e3110008 	tst	r1, #8	; 0x8
        24d360:	03a00000 	moveq	r0, #0	; 0x0
        24d364:	01a0f00e 	moveq	pc, lr
        24d368:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24d36c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24d370:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24d374:	e5901000 	ldr	r1, [r0]
        24d378:	e281f03c 	add	pc, r1, #60	; 0x3c
    */
}

/**
 * Symbol: TXView::GetWordRange(TXOffset, TXOffsetRange *)
 * Address: 0024d37c
 */
TXView::GetWordRange(TXOffset, TXOffsetRange *) {
    /*
        24d37c:	e1a0c00d 	mov	ip, sp
        24d380:	e92dd8ff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, fp, ip, lr, pc}
        24d384:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d388:	e1a05000 	mov	r5, r0
        24d38c:	e1a04003 	mov	r4, r3
        24d390:	e3a03001 	mov	r3, #1	; 0x1
        24d394:	e92d0008 	stmdb	sp!, {r3}
        24d398:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24d39c:	e1a03004 	mov	r3, r4
        24d3a0:	e24b2028 	sub	r2, fp, #40	; 0x28
        24d3a4:	e8920006 	ldmia	r2, {r1, r2}
        24d3a8:	eb65365e 	bl	1b9ad28 <TXStyledText::$CharToWord(TXOffset, TXOffsetRange *, char)>
        24d3ac:	e28dd004 	add	sp, sp, #4	; 0x4
        24d3b0:	e3a07000 	mov	r7, #0	; 0x0
        24d3b4:	e3300000 	teq	r0, #0	; 0x0
        24d3b8:	0a000020 	beq	24d440 <TXView::GetWordRange(TXOffset, TXOffsetRange *)+0xc4>
        24d3bc:	e5950030 	ldr	r0, [r5, #48]	; fField48
        24d3c0:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        24d3c4:	e1a00002 	mov	r0, r2
        24d3c8:	e5941000 	ldr	r1, [r4]
        24d3cc:	e5922000 	ldr	r2, [r2]
        24d3d0:	e1a0e00f 	mov	lr, pc
        24d3d4:	e282f01c 	add	pc, r2, #28	; 0x1c
        24d3d8:	e1a06000 	mov	r6, r0
        24d3dc:	eb66745a 	bl	1bea54c <$IsWhiteSpace(unsigned short)>
        24d3e0:	e3300000 	teq	r0, #0	; 0x0
        24d3e4:	1a000004 	bne	24d3fc <TXView::GetWordRange(TXOffset, TXOffsetRange *)+0x80>
        24d3e8:	e1a00006 	mov	r0, r6
        24d3ec:	eb66744d 	bl	1bea528 <$IsDelimiter(unsigned short)>
        24d3f0:	e3300000 	teq	r0, #0	; 0x0
        24d3f4:	03a00001 	moveq	r0, #1	; 0x1
        24d3f8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        24d3fc:	e5940000 	ldr	r0, [r4]
        24d400:	e5941008 	ldr	r1, [r4, #8]	; fField8
        24d404:	e0410000 	sub	r0, r1, r0
        24d408:	e51b1028 	ldr	r1, [fp, -#40]
        24d40c:	e0800001 	add	r0, r0, r1
        24d410:	e50b0028 	str	r0, [fp, -#40]
        24d414:	e54b7024 	strb	r7, [fp, -#36]
        24d418:	e3a03001 	mov	r3, #1	; 0x1
        24d41c:	e92d0008 	stmdb	sp!, {r3}
        24d420:	e1a03004 	mov	r3, r4
        24d424:	e5950030 	ldr	r0, [r5, #48]	; fField48
        24d428:	e24b2028 	sub	r2, fp, #40	; 0x28
        24d42c:	e8920006 	ldmia	r2, {r1, r2}
        24d430:	eb65363c 	bl	1b9ad28 <TXStyledText::$CharToWord(TXOffset, TXOffsetRange *, char)>
        24d434:	e28dd004 	add	sp, sp, #4	; 0x4
        24d438:	e3300000 	teq	r0, #0	; 0x0
        24d43c:	1affffde 	bne	24d3bc <TXView::GetWordRange(TXOffset, TXOffsetRange *)+0x40>
        24d440:	e1a00007 	mov	r0, r7
        24d444:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::GetLineRange(TXOffset, TXOffsetRange *)
 * Address: 0024d448
 */
TXView::GetLineRange(TXOffset, TXOffsetRange *) {
    /*
        24d448:	e1a0c00d 	mov	ip, sp
        24d44c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24d450:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d454:	e1a04000 	mov	r4, r0
        24d458:	e1a05003 	mov	r5, r3
        24d45c:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24d460:	e3a03000 	mov	r3, #0	; 0x0
        24d464:	eb654ad1 	bl	1b9ffb0 <Textension::$CharToLine( const(TXOffset, TXOffsetRange *))>
        24d468:	e1b01000 	movs	r1, r0
        24d46c:	43a00000 	movmi	r0, #0	; 0x0
        24d470:	491ba830 	ldmmidb	fp, {r4, r5, fp, sp, pc}
        24d474:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        24d478:	e5900018 	ldr	r0, [r0, #24]
        24d47c:	e1a02005 	mov	r2, r5
        24d480:	eb64fc78 	bl	1b8c668 <TXFormatter::$GetLineRange( const(long, TXOffsetRange *))>
        24d484:	e3a00001 	mov	r0, #1	; 0x1
        24d488:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::GetParagraphRange(TXOffset, TXOffsetRange *)
 * Address: 0024d48c
 */
TXView::GetParagraphRange(TXOffset, TXOffsetRange *) {
    /*
        24d48c:	e1a0c00d 	mov	ip, sp
        24d490:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24d494:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d498:	e1a04001 	mov	r4, r1
        24d49c:	e1a05003 	mov	r5, r3
        24d4a0:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24d4a4:	e1a07001 	mov	r7, r1
        24d4a8:	e5b06008 	ldr	r6, [r0, #8]!	; fField8
        24d4ac:	e1a00006 	mov	r0, r6
        24d4b0:	eb65259c 	bl	1b96b28 <$TXGetParagStartOffset(TXChars *, long)>
        24d4b4:	e0477000 	sub	r7, r7, r0
        24d4b8:	e1a08004 	mov	r8, r4
        24d4bc:	e1a01004 	mov	r1, r4
        24d4c0:	e1a00006 	mov	r0, r6
        24d4c4:	eb652598 	bl	1b96b2c <$TXGetParagEndOffset(TXChars *, long)>
        24d4c8:	e0882000 	add	r2, r8, r0
        24d4cc:	e3a03001 	mov	r3, #1	; 0x1
        24d4d0:	e92d0008 	stmdb	sp!, {r3}
        24d4d4:	e1a01007 	mov	r1, r7
        24d4d8:	e1a00005 	mov	r0, r5
        24d4dc:	e3a03000 	mov	r3, #0	; 0x0
        24d4e0:	ebff9ae9 	bl	23408c <TXOffsetRange::Set(long, long, unsigned char, unsigned char)>
        24d4e4:	e3a00001 	mov	r0, #1	; 0x1
        24d4e8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::GetHiliteBounds(Rect *)
 * Address: 0024d4ec
 */
TXView::GetHiliteBounds(Rect *) {
    /*
        24d4ec:	e1a0c00d 	mov	ip, sp
        24d4f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24d4f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d4f8:	e1a04000 	mov	r4, r0
        24d4fc:	e1a05001 	mov	r5, r1
        24d500:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24d504:	e5900014 	ldr	r0, [r0, #20]	; fField20
        24d508:	e3a02000 	mov	r2, #0	; 0x0
        24d50c:	e3a01000 	mov	r1, #0	; 0x0
        24d510:	eb6510df 	bl	1b91894 <TXHilite::$GetHiliteRgn(unsigned char, unsigned char)>
        24d514:	e1a06000 	mov	r6, r0
        24d518:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        24d51c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24d520:	e1a02006 	mov	r2, r6
        24d524:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        24d528:	e1a00006 	mov	r0, r6
        24d52c:	eb641927 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        24d530:	e5960000 	ldr	r0, [r6]
        24d534:	e2800004 	add	r0, r0, #4	; 0x4
        24d538:	e8905000 	ldmia	r0, {ip, lr}
        24d53c:	e8855000 	stmia	r5, {ip, lr}
        24d540:	e1a00006 	mov	r0, r6
        24d544:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        24d548:	ea640064 	b	1b4d6e0 <$DisposeRgn(Region **)>
    */
}

/**
 * Symbol: TXView::FindString(unsigned short *, long)
 * Address: 0024d6ac
 */
TXView::FindString(unsigned short *, long) {
    /*
        24d6ac:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24d6b0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24d6b4:	ea653dd3 	b	1b9ce08 <$TXFindString(TXChars *, unsigned short *, long)>
    */
}

/**
 * Symbol: TXView::SetStore(RefVar const &)
 * Address: 0024d78c
 */
TXView::SetStore(RefVar const &) {
    /*
        24d78c:	e1a0c00d 	mov	ip, sp
        24d790:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24d794:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d798:	e1a04001 	mov	r4, r1
        24d79c:	e5901030 	ldr	r1, [r0, #48]	; fField48
        24d7a0:	e3310000 	teq	r1, #0	; 0x0
        24d7a4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        24d7a8:	e2800058 	add	r0, r0, #88	; 0x58
        24d7ac:	e1a05000 	mov	r5, r0
        24d7b0:	e5900000 	ldr	r0, [r0]
        24d7b4:	e5900000 	ldr	r0, [r0]
        24d7b8:	e3300002 	teq	r0, #2	; 0x2
        24d7bc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        24d7c0:	e1a00004 	mov	r0, r4
        24d7c4:	eb600c2a 	bl	1a50874 <$StoreIsValid>
        24d7c8:	e3300002 	teq	r0, #2	; 0x2
        24d7cc:	1a000004 	bne	24d7e4 <TXView::SetStore(RefVar const &)+0x58>
        24d7d0:	e59f0020 	ldr	r0, [pc, #20]	; 24d7f8 <TXView::SetStore(RefVar const &)+0x6c>	; fField20
        24d7d4:	e5900000 	ldr	r0, [r0]
        24d7d8:	e3a02000 	mov	r2, #0	; 0x0
        24d7dc:	e59f1018 	ldr	r1, [pc, #18]	; 24d7fc <TXView::SetStore(RefVar const &)+0x70>
        24d7e0:	eb66566d 	bl	1be319c <$Throw>
        24d7e4:	e5940000 	ldr	r0, [r4]
        24d7e8:	e5900000 	ldr	r0, [r0]
        24d7ec:	e5951000 	ldr	r1, [r5]
        24d7f0:	e5810000 	str	r0, [r1]
        24d7f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24d7f8:	003712fc 	ldreqsh	r1, [r7], -ip
        24d7fc:	ffff446f 	swinv	0x00ff446f
        24d800:	e1a0c00d 	mov	ip, sp
        24d804:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        24d808:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d80c:	e24dd004 	sub	sp, sp, #4	; 0x4
        24d810:	e1a0000d 	mov	r0, sp
        24d814:	eb6687e2 	bl	1bef7a4 <$GetPort(GrafPort **)>
        24d818:	e59d0000 	ldr	r0, [sp]
        24d81c:	e5900040 	ldr	r0, [r0, #64]	; fField64
        24d820:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXView::SetReadOnly(unsigned char)
 * Address: 0024dba8
 */
TXView::SetReadOnly(unsigned char) {
    /*
        24dba8:	e5c0105c 	strb	r1, [r0, #92]	; fField92
        24dbac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXView::SetGeometry(unsigned char, int, int, TRect const &)
 * Address: 0024dea4
 */
TXView::SetGeometry(unsigned char, int, int, TRect const &) {
    /*
        24dea4:	e1a0c00d 	mov	ip, sp
        24dea8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24deac:	e24cb004 	sub	fp, ip, #4	; 0x4
        24deb0:	e1a04000 	mov	r4, r0
        24deb4:	e1a00003 	mov	r0, r3
        24deb8:	e20110ff 	and	r1, r1, #255	; 0xff
        24debc:	e59b3004 	ldr	r3, [fp, #4]	; fField4
        24dec0:	e5d4c05c 	ldrb	ip, [r4, #92]	; fField92
        24dec4:	e33c0000 	teq	ip, #0	; 0x0
        24dec8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        24decc:	e594c030 	ldr	ip, [r4, #48]	; fField48
        24ded0:	e33c0000 	teq	ip, #0	; 0x0
        24ded4:	1a000003 	bne	24dee8 <TXView::SetGeometry(unsigned char, int, int, TRect const &)+0x44>
        24ded8:	e3310000 	teq	r1, #0	; 0x0
        24dedc:	1594104c 	ldrne	r1, [r4, #76]	; fField76
        24dee0:	13811008 	orrne	r1, r1, #8	; 0x8
        24dee4:	1584104c 	strne	r1, [r4, #76]	; fField76
        24dee8:	e24dd008 	sub	sp, sp, #8	; 0x8
        24deec:	e1a01003 	mov	r1, r3
        24def0:	e8915000 	ldmia	r1, {ip, lr}
        24def4:	e88d5000 	stmia	sp, {ip, lr}
        24def8:	e594104c 	ldr	r1, [r4, #76]	; fField76
        24defc:	e3110008 	tst	r1, #8	; 0x8
        24df00:	e3a01000 	mov	r1, #0	; 0x0
        24df04:	0a000005 	beq	24df20 <TXView::SetGeometry(unsigned char, int, int, TRect const &)+0x7c>
        24df08:	e59d3000 	ldr	r3, [sp]
        24df0c:	e1a03843 	mov	r3, r3, asr #16
        24df10:	e3530001 	cmp	r3, #1	; 0x1
        24df14:	b3a03001 	movlt	r3, #1	; 0x1
        24df18:	b5cd3001 	strltb	r3, [sp, #1]
        24df1c:	b5cd1000 	strltb	r1, [sp]
        24df20:	e352000a 	cmp	r2, #10	; 0xa
        24df24:	ba00000c 	blt	24df5c <TXView::SetGeometry(unsigned char, int, int, TRect const &)+0xb8>
        24df28:	e59dc002 	ldr	ip, [sp, #2]
        24df2c:	e1a0c84c 	mov	ip, ip, asr #16
        24df30:	e59d3006 	ldr	r3, [sp, #6]
        24df34:	e08c3843 	add	r3, ip, r3, asr #16
        24df38:	e0423003 	sub	r3, r2, r3
        24df3c:	e353000a 	cmp	r3, #10	; 0xa
        24df40:	a1a02003 	movge	r2, r3
        24df44:	aa000005 	bge	24df60 <TXView::SetGeometry(unsigned char, int, int, TRect const &)+0xbc>
        24df48:	e5cd1007 	strb	r1, [sp, #7]
        24df4c:	e5cd1006 	strb	r1, [sp, #6]
        24df50:	e5cd1003 	strb	r1, [sp, #3]
        24df54:	e5cd1002 	strb	r1, [sp, #2]
        24df58:	ea000000 	b	24df60 <TXView::SetGeometry(unsigned char, int, int, TRect const &)+0xbc>
        24df5c:	e3e02000 	mvn	r2, #0	; 0x0
        24df60:	e3500010 	cmp	r0, #16	; 0x10
        24df64:	ba00000c 	blt	24df9c <TXView::SetGeometry(unsigned char, int, int, TRect const &)+0xf8>
        24df68:	e59dc004 	ldr	ip, [sp, #4]	; fField4
        24df6c:	e1a0c84c 	mov	ip, ip, asr #16
        24df70:	e59d3000 	ldr	r3, [sp]
        24df74:	e08c3843 	add	r3, ip, r3, asr #16
        24df78:	e0403003 	sub	r3, r0, r3
        24df7c:	e3530010 	cmp	r3, #16	; 0x10
        24df80:	a1a00003 	movge	r0, r3
        24df84:	aa000005 	bge	24dfa0 <TXView::SetGeometry(unsigned char, int, int, TRect const &)+0xfc>
        24df88:	e5cd1005 	strb	r1, [sp, #5]
        24df8c:	e5cd1004 	strb	r1, [sp, #4]	; fField4
        24df90:	e5cd1001 	strb	r1, [sp, #1]
        24df94:	e5cd1000 	strb	r1, [sp]
        24df98:	ea000000 	b	24dfa0 <TXView::SetGeometry(unsigned char, int, int, TRect const &)+0xfc>
        24df9c:	e3e00000 	mvn	r0, #0	; 0x0
        24dfa0:	e584003c 	str	r0, [r4, #60]	; fField60
        24dfa4:	e5842038 	str	r2, [r4, #56]	; fField56
        24dfa8:	e2841040 	add	r1, r4, #64	; 0x40
        24dfac:	e89d1008 	ldmia	sp, {r3, ip}
        24dfb0:	e8811008 	stmia	r1, {r3, ip}
        24dfb4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24dfb8:	e3300000 	teq	r0, #0	; 0x0
        24dfbc:	11a00004 	movne	r0, r4
        24dfc0:	13a01001 	movne	r1, #1	; 0x1
        24dfc4:	1b653365 	blne	1b9ad60 <TXView::$GeometryChanged(unsigned char)>
        24dfc8:	e594004c 	ldr	r0, [r4, #76]	; fField76
        24dfcc:	e3800002 	orr	r0, r0, #2	; 0x2
        24dfd0:	e5a4004c 	str	r0, [r4, #76]!	; fField76
        24dfd4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXView::SetDrawOrigin(TXLongPoint const &)
 * Address: 0024dfd8
 */
TXView::SetDrawOrigin(TXLongPoint const &) {
    /*
        24dfd8:	e1a02001 	mov	r2, r1
        24dfdc:	e5900030 	ldr	r0, [r0, #48]	; fField48
        24dfe0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24dfe4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24dfe8:	e5911004 	ldr	r1, [r1, #4]	; fField4
        24dfec:	e5922000 	ldr	r2, [r2]
        24dff0:	ea6505e9 	b	1b8f79c <TXFrames::$SetDrawOrigin(long, long)>
    */
}

