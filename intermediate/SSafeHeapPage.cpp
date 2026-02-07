#include "include/SSafeHeapPage.h"

/**
 * Symbol: SSafeHeapPage::FirstPage(void)
 * Address: 001c57b4
 */
SSafeHeapPage::FirstPage(void) {
    /*
        1c57b4:	ea000000 	b	1c57bc <SSafeHeapPage::FirstPage(void)+0x8>
        1c57b8:	e1a00001 	mov	r0, r1
        1c57bc:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1c57c0:	e3310000 	teq	r1, #0	; 0x0
        1c57c4:	1afffffb 	bne	1c57b8 <SSafeHeapPage::FirstPage(void)+0x4>
        1c57c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: SSafeHeapPage::Init(unsigned long, TPhys *, SSafeHeapPage *)
 * Address: 001c57cc
 */
SSafeHeapPage::Init(unsigned long, TPhys *, SSafeHeapPage *) {
    /*
        1c57cc:	e1a0c00d 	mov	ip, sp
        1c57d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1c57d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c57d8:	e1a04000 	mov	r4, r0
        1c57dc:	e1a05003 	mov	r5, r3
        1c57e0:	e1a03a00 	mov	r3, r0, lsl #20
        1c57e4:	e1a03a23 	mov	r3, r3, lsr #20
        1c57e8:	e2633a01 	rsb	r3, r3, #4096	; 0x1000
        1c57ec:	e353003c 	cmp	r3, #60	; 0x3c
        1c57f0:	391ba830 	ldmccdb	fp, {r4, r5, fp, sp, pc}
        1c57f4:	e3a00000 	mov	r0, #0	; 0x0
        1c57f8:	e3550000 	cmp	r5, #0	; 0x0
        1c57fc:	e5840004 	str	r0, [r4, #4]	; fField4
        1c5800:	03a0c000 	moveq	ip, #0	; 0x0
        1c5804:	1595c010 	ldrne	ip, [r5, #16]	; fField16
        1c5808:	e584c008 	str	ip, [r4, #8]	; fField8
        1c580c:	e59fc084 	ldr	ip, [pc, #84]	; 1c5898 <SSafeHeapPage::Init(unsigned long, TPhys *, SSafeHeapPage *)+0xcc>
        1c5810:	e584c00c 	str	ip, [r4, #12]	; fField12
        1c5814:	e5844010 	str	r4, [r4, #16]	; fField16
        1c5818:	e2433030 	sub	r3, r3, #48	; 0x30
        1c581c:	e5843018 	str	r3, [r4, #24]	; fField24
        1c5820:	e284302c 	add	r3, r4, #44	; 0x2c
        1c5824:	e5840024 	str	r0, [r4, #36]	; fField36
        1c5828:	e284401c 	add	r4, r4, #28	; 0x1c
        1c582c:	e8840006 	stmia	r4, {r1, r2}
        1c5830:	e5243008 	str	r3, [r4, -#8]!	; fField8
        1c5834:	e2444014 	sub	r4, r4, #20	; 0x14
        1c5838:	03a00000 	moveq	r0, #0	; 0x0
        1c583c:	15950028 	ldrne	r0, [r5, #40]	; fField40
        1c5840:	e5840028 	str	r0, [r4, #40]	; fField40
        1c5844:	e5930000 	ldr	r0, [r3]
        1c5848:	e38024ff 	orr	r2, r0, #-16777216	; 0xff000000
        1c584c:	e5832000 	str	r2, [r3]
        1c5850:	e20224ff 	and	r2, r2, #-16777216	; 0xff000000
        1c5854:	e2841014 	add	r1, r4, #20	; 0x14
        1c5858:	e8910003 	ldmia	r1, {r0, r1}
        1c585c:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        1c5860:	e1821001 	orr	r1, r2, r1
        1c5864:	e5801000 	str	r1, [r0]
        1c5868:	e1a00004 	mov	r0, r4
        1c586c:	eb64fa81 	bl	1b04278 <$SafeHeapEndSentinelFor(void *)>
        1c5870:	e3350000 	teq	r5, #0	; 0x0
        1c5874:	e5804000 	str	r4, [r0]
        1c5878:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1c587c:	e5950010 	ldr	r0, [r5, #16]	; fField16
        1c5880:	e5a04004 	str	r4, [r0, #4]!	; fField4
        1c5884:	e5854010 	str	r4, [r5, #16]	; fField16
        1c5888:	e5955004 	ldr	r5, [r5, #4]	; fField4
        1c588c:	e3350000 	teq	r5, #0	; 0x0
        1c5890:	1afffffb 	bne	1c5884 <SSafeHeapPage::Init(unsigned long, TPhys *, SSafeHeapPage *)+0xb8>
        1c5894:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1c5898:	73616665 	cmnvc	r1, #105906176	; 0x6500000
    */
}

/**
 * Symbol: SSafeHeapPage::Alloc(long, long)
 * Address: 001c589c
 */
SSafeHeapPage::Alloc(long, long) {
    /*
        1c589c:	e1a0c00d 	mov	ip, sp
        1c58a0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1c58a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c58a8:	e1a05000 	mov	r5, r0
        1c58ac:	e1a04001 	mov	r4, r1
        1c58b0:	e1a06002 	mov	r6, r2
        1c58b4:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1c58b8:	e3a08000 	mov	r8, #0	; 0x0
        1c58bc:	e1500001 	cmp	r0, r1
        1c58c0:	3a00004a 	bcc	1c59f0 <SSafeHeapPage::Alloc(long, long)+0x154>
        1c58c4:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1c58c8:	e3300000 	teq	r0, #0	; 0x0
        1c58cc:	0a000003 	beq	1c58e0 <SSafeHeapPage::Alloc(long, long)+0x44>
        1c58d0:	e5901000 	ldr	r1, [r0]
        1c58d4:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        1c58d8:	e1510004 	cmp	r1, r4
        1c58dc:	aa000013 	bge	1c5930 <SSafeHeapPage::Alloc(long, long)+0x94>
        1c58e0:	e3a07000 	mov	r7, #0	; 0x0
        1c58e4:	e295002c 	adds	r0, r5, #44	; 0x2c
        1c58e8:	0a000040 	beq	1c59f0 <SSafeHeapPage::Alloc(long, long)+0x154>
        1c58ec:	e3a020ff 	mov	r2, #255	; 0xff
        1c58f0:	e5901000 	ldr	r1, [r0]
        1c58f4:	e1320c21 	teq	r2, r1, lsr #24
        1c58f8:	1a000038 	bne	1c59e0 <SSafeHeapPage::Alloc(long, long)+0x144>
        1c58fc:	e3370000 	teq	r7, #0	; 0x0
        1c5900:	0a00000a 	beq	1c5930 <SSafeHeapPage::Alloc(long, long)+0x94>
        1c5904:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        1c5908:	e5970000 	ldr	r0, [r7]
        1c590c:	e20034ff 	and	r3, r0, #-16777216	; 0xff000000
        1c5910:	e0800001 	add	r0, r0, r1
        1c5914:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        1c5918:	e1830000 	orr	r0, r3, r0
        1c591c:	e5870000 	str	r0, [r7]
        1c5920:	e1a00007 	mov	r0, r7
        1c5924:	e3a07000 	mov	r7, #0	; 0x0
        1c5928:	e5850014 	str	r0, [r5, #20]	; fField20
        1c592c:	eaffffef 	b	1c58f0 <SSafeHeapPage::Alloc(long, long)+0x54>
        1c5930:	e5901000 	ldr	r1, [r0]
        1c5934:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        1c5938:	e1510004 	cmp	r1, r4
        1c593c:	b1a07000 	movlt	r7, r0
        1c5940:	ba000027 	blt	1c59e4 <SSafeHeapPage::Alloc(long, long)+0x148>
        1c5944:	e0412004 	sub	r2, r1, r4
        1c5948:	e352000c 	cmp	r2, #12	; 0xc
        1c594c:	aa00000b 	bge	1c5980 <SSafeHeapPage::Alloc(long, long)+0xe4>
        1c5950:	e0412006 	sub	r2, r1, r6
        1c5954:	e1811c02 	orr	r1, r1, r2, lsl #24
        1c5958:	e5801000 	str	r1, [r0]
        1c595c:	e3c144ff 	bic	r4, r1, #-16777216	; 0xff000000
        1c5960:	e5951018 	ldr	r1, [r5, #24]	; fField24
        1c5964:	e0411004 	sub	r1, r1, r4
        1c5968:	e5851018 	str	r1, [r5, #24]	; fField24
        1c596c:	e5951014 	ldr	r1, [r5, #20]	; fField20
        1c5970:	e1310000 	teq	r1, r0
        1c5974:	05a58014 	streq	r8, [r5, #20]!	; fField20
        1c5978:	e2800004 	add	r0, r0, #4	; 0x4
        1c597c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1c5980:	e0801004 	add	r1, r0, r4
        1c5984:	e5912000 	ldr	r2, [r1]
        1c5988:	e38224ff 	orr	r2, r2, #-16777216	; 0xff000000
        1c598c:	e5812000 	str	r2, [r1]
        1c5990:	e5903000 	ldr	r3, [r0]
        1c5994:	e3c334ff 	bic	r3, r3, #-16777216	; 0xff000000
        1c5998:	e0433004 	sub	r3, r3, r4
        1c599c:	e20224ff 	and	r2, r2, #-16777216	; 0xff000000
        1c59a0:	e3c334ff 	bic	r3, r3, #-16777216	; 0xff000000
        1c59a4:	e1822003 	orr	r2, r2, r3
        1c59a8:	e5812000 	str	r2, [r1]
        1c59ac:	e5851014 	str	r1, [r5, #20]	; fField20
        1c59b0:	e5901000 	ldr	r1, [r0]
        1c59b4:	e20114ff 	and	r1, r1, #-16777216	; 0xff000000
        1c59b8:	e3c424ff 	bic	r2, r4, #-16777216	; 0xff000000
        1c59bc:	e1811002 	orr	r1, r1, r2
        1c59c0:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        1c59c4:	e0442006 	sub	r2, r4, r6
        1c59c8:	e1811c02 	orr	r1, r1, r2, lsl #24
        1c59cc:	e5801000 	str	r1, [r0]
        1c59d0:	e5951018 	ldr	r1, [r5, #24]	; fField24
        1c59d4:	e0411004 	sub	r1, r1, r4
        1c59d8:	e5a51018 	str	r1, [r5, #24]!	; fField24
        1c59dc:	eaffffe5 	b	1c5978 <SSafeHeapPage::Alloc(long, long)+0xdc>
        1c59e0:	e3a07000 	mov	r7, #0	; 0x0
        1c59e4:	eb64e98b 	bl	1b00018 <SSafeHeapBlock::$Next(void)>
        1c59e8:	e3300000 	teq	r0, #0	; 0x0
        1c59ec:	1affffbe 	bne	1c58ec <SSafeHeapPage::Alloc(long, long)+0x50>
        1c59f0:	e1a00008 	mov	r0, r8
        1c59f4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: SSafeHeapPage::Free(void *)
 * Address: 001c59f8
 */
SSafeHeapPage::Free(void *) {
    /*
        1c59f8:	e1a0c00d 	mov	ip, sp
        1c59fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1c5a00:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c5a04:	e1a04000 	mov	r4, r0
        1c5a08:	e2415004 	sub	r5, r1, #4	; 0x4
        1c5a0c:	e5950000 	ldr	r0, [r5]
        1c5a10:	e38004ff 	orr	r0, r0, #-16777216	; 0xff000000
        1c5a14:	e5850000 	str	r0, [r5]
        1c5a18:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        1c5a1c:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1c5a20:	e0810000 	add	r0, r1, r0
        1c5a24:	e5840018 	str	r0, [r4, #24]	; fField24
        1c5a28:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1c5a2c:	e3300000 	teq	r0, #0	; 0x0
        1c5a30:	0a000022 	beq	1c5ac0 <SSafeHeapPage::Free(void *)+0xc8>
        1c5a34:	e1a00005 	mov	r0, r5
        1c5a38:	eb64e976 	bl	1b00018 <SSafeHeapBlock::$Next(void)>
        1c5a3c:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1c5a40:	e1300001 	teq	r0, r1
        1c5a44:	1a000008 	bne	1c5a6c <SSafeHeapPage::Free(void *)+0x74>
        1c5a48:	e5910000 	ldr	r0, [r1]
        1c5a4c:	e3c014ff 	bic	r1, r0, #-16777216	; 0xff000000
        1c5a50:	e5950000 	ldr	r0, [r5]
        1c5a54:	e20024ff 	and	r2, r0, #-16777216	; 0xff000000
        1c5a58:	e0800001 	add	r0, r0, r1
        1c5a5c:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        1c5a60:	e1820000 	orr	r0, r2, r0
        1c5a64:	e5850000 	str	r0, [r5]
        1c5a68:	ea000014 	b	1c5ac0 <SSafeHeapPage::Free(void *)+0xc8>
        1c5a6c:	e1a00001 	mov	r0, r1
        1c5a70:	eb64e968 	bl	1b00018 <SSafeHeapBlock::$Next(void)>
        1c5a74:	e1300005 	teq	r0, r5
        1c5a78:	1a000009 	bne	1c5aa4 <SSafeHeapPage::Free(void *)+0xac>
        1c5a7c:	e5950000 	ldr	r0, [r5]
        1c5a80:	e3c024ff 	bic	r2, r0, #-16777216	; 0xff000000
        1c5a84:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1c5a88:	e5901000 	ldr	r1, [r0]
        1c5a8c:	e20134ff 	and	r3, r1, #-16777216	; 0xff000000
        1c5a90:	e0811002 	add	r1, r1, r2
        1c5a94:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        1c5a98:	e1831001 	orr	r1, r3, r1
        1c5a9c:	e5801000 	str	r1, [r0]
        1c5aa0:	ea000007 	b	1c5ac4 <SSafeHeapPage::Free(void *)+0xcc>
        1c5aa4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1c5aa8:	e5900000 	ldr	r0, [r0]
        1c5aac:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        1c5ab0:	e5951000 	ldr	r1, [r5]
        1c5ab4:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        1c5ab8:	e1500001 	cmp	r0, r1
        1c5abc:	aa000000 	bge	1c5ac4 <SSafeHeapPage::Free(void *)+0xcc>
        1c5ac0:	e5845014 	str	r5, [r4, #20]	; fField20
        1c5ac4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1c5ac8:	e3300efd 	teq	r0, #4048	; 0xfd0
        1c5acc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1c5ad0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1c5ad4:	e3300000 	teq	r0, #0	; 0x0
        1c5ad8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1c5adc:	e2441001 	sub	r1, r4, #1	; 0x1
        1c5ae0:	e2811a01 	add	r1, r1, #4096	; 0x1000
        1c5ae4:	e1a01621 	mov	r1, r1, lsr #12
        1c5ae8:	e1a01601 	mov	r1, r1, lsl #12
        1c5aec:	e1310004 	teq	r1, r4
        1c5af0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1c5af4:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1c5af8:	e5a01004 	str	r1, [r0, #4]!	; fField4
        1c5afc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1c5b00:	e3300000 	teq	r0, #0	; 0x0
        1c5b04:	15941008 	ldrne	r1, [r4, #8]	; fField8
        1c5b08:	15a01008 	strne	r1, [r0, #8]!	; fField8
        1c5b0c:	1a000008 	bne	1c5b34 <SSafeHeapPage::Free(void *)+0x13c>
        1c5b10:	e1a00004 	mov	r0, r4
        1c5b14:	eb64cc42 	bl	1af8c24 <SSafeHeapPage::$FirstPage(void)>
        1c5b18:	e3300000 	teq	r0, #0	; 0x0
        1c5b1c:	0a000004 	beq	1c5b34 <SSafeHeapPage::Free(void *)+0x13c>
        1c5b20:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1c5b24:	e5801010 	str	r1, [r0, #16]	; fField16
        1c5b28:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1c5b2c:	e3300000 	teq	r0, #0	; 0x0
        1c5b30:	1afffffa 	bne	1c5b20 <SSafeHeapPage::Free(void *)+0x128>
        1c5b34:	e1a00004 	mov	r0, r4
        1c5b38:	e5941000 	ldr	r1, [r4]
        1c5b3c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1c5b40:	e281f004 	add	pc, r1, #4	; 0x4
    */
}

/**
 * Symbol: SSafeHeapPage::GetPage(void)
 * Address: 001c5b44
 */
SSafeHeapPage::GetPage(void) {
    /*
        1c5b44:	e1a0c00d 	mov	ip, sp
        1c5b48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1c5b4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c5b50:	e1a04000 	mov	r4, r0
        1c5b54:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1c5b58:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1c5b5c:	e3300000 	teq	r0, #0	; 0x0
        1c5b60:	1b68504c 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        1c5b64:	e1a0200d 	mov	r2, sp
        1c5b68:	e28d1004 	add	r1, sp, #4	; 0x4
        1c5b6c:	e28d0008 	add	r0, sp, #8	; 0x8
        1c5b70:	eb68379d 	bl	1bd39ec <$GetNewPageFromPageMgr(void **, unsigned long *, TPhys **)>
        1c5b74:	e1a05000 	mov	r5, r0
        1c5b78:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1c5b7c:	e3300000 	teq	r0, #0	; 0x0
        1c5b80:	13a01000 	movne	r1, #0	; 0x0
        1c5b84:	1b6822f2 	blne	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1c5b88:	e3350000 	teq	r5, #0	; 0x0
        1c5b8c:	13a00000 	movne	r0, #0	; 0x0
        1c5b90:	1a00000a 	bne	1c5bc0 <SSafeHeapPage::GetPage(void)+0x7c>
        1c5b94:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1c5b98:	e3300000 	teq	r0, #0	; 0x0
        1c5b9c:	0a000001 	beq	1c5ba8 <SSafeHeapPage::GetPage(void)+0x64>
        1c5ba0:	e59f201c 	ldr	r2, [pc, #1c]	; 1c5bc4 <SSafeHeapPage::GetPage(void)+0x80>
        1c5ba4:	e5802000 	str	r2, [r0]
        1c5ba8:	e1a03004 	mov	r3, r4
        1c5bac:	e58d0008 	str	r0, [sp, #8]	; fField8
        1c5bb0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1c5bb4:	e59d2000 	ldr	r2, [sp]
        1c5bb8:	eb64d889 	bl	1afbde4 <SSafeHeapPage::$Init(unsigned long, TPhys *, SSafeHeapPage *)>
        1c5bbc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1c5bc0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1c5bc4:	0001c874 	andeq	ip, r1, r4, ror r8
    */
}

/**
 * Symbol: SSafeHeapPage::FreePage(void)
 * Address: 001c5bc8
 */
SSafeHeapPage::FreePage(void) {
    /*
        1c5bc8:	e1a0c00d 	mov	ip, sp
        1c5bcc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1c5bd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c5bd4:	e5902020 	ldr	r2, [r0, #32]	; fField32
        1c5bd8:	e590401c 	ldr	r4, [r0, #28]	; fField28
        1c5bdc:	e1a01000 	mov	r1, r0
        1c5be0:	e3340000 	teq	r4, #0	; 0x0
        1c5be4:	0a000008 	beq	1c5c0c <SSafeHeapPage::FreePage(void)+0x44>
        1c5be8:	e1a02004 	mov	r2, r4
        1c5bec:	e59f002c 	ldr	r0, [pc, #2c]	; 1c5c20 <SSafeHeapPage::FreePage(void)+0x58>
        1c5bf0:	e5900000 	ldr	r0, [r0]
        1c5bf4:	eb68334f 	bl	1bd2938 <$Forget__15TUDomainManagerSFUlN21>
        1c5bf8:	e1a01004 	mov	r1, r4
        1c5bfc:	e59f0020 	ldr	r0, [pc, #20]	; 1c5c24 <SSafeHeapPage::FreePage(void)+0x5c>	; fField20
        1c5c00:	e5900000 	ldr	r0, [r0]
        1c5c04:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1c5c08:	ea64f560 	b	1b03190 <TPageManager::$Release(unsigned long)>
        1c5c0c:	e1a01002 	mov	r1, r2
        1c5c10:	e59f0010 	ldr	r0, [pc, #10]	; 1c5c28 <SSafeHeapPage::FreePage(void)+0x60>
        1c5c14:	e5900000 	ldr	r0, [r0]
        1c5c18:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1c5c1c:	ea64f137 	b	1b02100 <TPageTracker::$Put(TLittlePhys *)>
        1c5c20:	0c101170 	ldfeqs	f1, [r0], -#448
        1c5c24:	0c1016e8 	ldceq	6, cr1, [r0], -#928
        1c5c28:	0c104f48 	ldceq	15, cr4, [r0], -#288
    */
}

