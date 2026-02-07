#include "include/TFlashRange.h"

/**
 * Symbol: TFlashRange::__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)
 * Address: 000c26e0
 */
TFlashRange::TFlashRange(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &) {
    /*
         c26e0:	e1a0c00d 	mov	ip, sp
         c26e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         c26e8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c26ec:	e24cb014 	sub	fp, ip, #20	; 0x14
         c26f0:	e1b04000 	movs	r4, r0
         c26f4:	e1a05001 	mov	r5, r1
         c26f8:	e1a06002 	mov	r6, r2
         c26fc:	e28b901c 	add	r9, fp, #28	; 0x1c
         c2700:	e8990280 	ldmia	r9, {r7, r9}
         c2704:	e59b8018 	ldr	r8, [fp, #24]
         c2708:	e59ba014 	ldr	sl, [fp, #20]
         c270c:	1a000005 	bne	c2728 <TFlashRange::__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)+0x48>
         c2710:	e3a0004c 	mov	r0, #76	; 0x4c
         c2714:	eb0b2857 	bl	38c878 <C$$dtorvec$$Limit+0x1f04>
         c2718:	e1b04000 	movs	r4, r0
         c271c:	1a000001 	bne	c2728 <TFlashRange::__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)+0x48>
         c2720:	e1a00004 	mov	r0, r4
         c2724:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c2728:	e9840060 	stmib	r4, {r5, r6}
         c272c:	e59b3010 	ldr	r3, [fp, #16]
         c2730:	e284400c 	add	r4, r4, #12	; 0xc
         c2734:	e8840408 	stmia	r4, {r3, sl}
         c2738:	e5848008 	str	r8, [r4, #8]	; fField8
         c273c:	e244400c 	sub	r4, r4, #12	; 0xc
         c2740:	e2841018 	add	r1, r4, #24	; 0x18
         c2744:	e1a00007 	mov	r0, r7
         c2748:	e8b01008 	ldmia	r0!, {r3, ip}
         c274c:	e8a11008 	stmia	r1!, {r3, ip}
         c2750:	e8b01008 	ldmia	r0!, {r3, ip}
         c2754:	e8a11008 	stmia	r1!, {r3, ip}
         c2758:	e8901008 	ldmia	r0, {r3, ip}
         c275c:	e8811008 	stmia	r1, {r3, ip}
         c2760:	e3a00000 	mov	r0, #0	; 0x0
         c2764:	e5840048 	str	r0, [r4, #72]	; fField72
         c2768:	e59f0064 	ldr	r0, [pc, #64]	; c27d4 <TFlashRange::__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)+0xf4>
         c276c:	e3a06000 	mov	r6, #0	; 0x0
         c2770:	e5840000 	str	r0, [r4]
         c2774:	e3a000ff 	mov	r0, #255	; 0xff
         c2778:	e3a01000 	mov	r1, #0	; 0x0
         c277c:	e1100008 	tst	r0, r8
         c2780:	12866001 	addne	r6, r6, #1	; 0x1
         c2784:	e1a00400 	mov	r0, r0, lsl #8
         c2788:	e2811001 	add	r1, r1, #1	; 0x1
         c278c:	e3510004 	cmp	r1, #4	; 0x4
         c2790:	bafffff9 	blt	c277c <TFlashRange::__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)+0x9c>
         c2794:	e1a01006 	mov	r1, r6
         c2798:	e597000c 	ldr	r0, [r7, #12]	; fField12
         c279c:	eb6bc069 	bl	1bb2948 <$__rt_udiv>
         c27a0:	e5840034 	str	r0, [r4, #52]
         c27a4:	e5971010 	ldr	r1, [r7, #16]
         c27a8:	e0010190 	mul	r1, r0, r1
         c27ac:	e5841030 	str	r1, [r4, #48]	; fField48
         c27b0:	e5b71014 	ldr	r1, [r7, #20]!
         c27b4:	e0010190 	mul	r1, r0, r1
         c27b8:	e1a02009 	mov	r2, r9
         c27bc:	e584103c 	str	r1, [r4, #60]	; fField60
         c27c0:	e5846038 	str	r6, [r4, #56]
         c27c4:	e1a01004 	mov	r1, r4
         c27c8:	e1a00005 	mov	r0, r5
         c27cc:	eb0b07e3 	bl	384760 <TFlashDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &)>
         c27d0:	eaffffd2 	b	c2720 <TFlashRange::__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)+0x40>
         c27d4:	0001b1d8 	ldreqd	fp, [r1], -r8
    */
}

/**
 * Symbol: TFlashRange::IsEraseComplete(long &)
 * Address: 000c27d8
 */
TFlashRange::IsEraseComplete(long &) {
    /*
         c27d8:	e1a0c00d 	mov	ip, sp
         c27dc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c27e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c27e4:	e1a04000 	mov	r4, r0
         c27e8:	e1a05001 	mov	r5, r1
         c27ec:	e3a07000 	mov	r7, #0	; 0x0
         c27f0:	e3a09000 	mov	r9, #0	; 0x0
         c27f4:	e5906048 	ldr	r6, [r0, #72]	; fField72
         c27f8:	e3360000 	teq	r6, #0	; 0x0
         c27fc:	e5908044 	ldr	r8, [r0, #68]	; fField68
         c2800:	0a000017 	beq	c2864 <TFlashRange::IsEraseComplete(long &)+0x8c>
         c2804:	e24dd004 	sub	sp, sp, #4	; 0x4
         c2808:	e1a01008 	mov	r1, r8
         c280c:	e1a00004 	mov	r0, r4
         c2810:	e5942000 	ldr	r2, [r4]
         c2814:	e1a0e00f 	mov	lr, pc
         c2818:	e282f014 	add	pc, r2, #20	; 0x14
         c281c:	e1a02000 	mov	r2, r0
         c2820:	e1a0300d 	mov	r3, sp
         c2824:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2828:	e1a01004 	mov	r1, r4
         c282c:	eb0b07e0 	bl	3847b4 <TFlashDriver::IsEraseComplete(TFlashRange &, unsigned long, long &)>
         c2830:	e3300000 	teq	r0, #0	; 0x0
         c2834:	01a00009 	moveq	r0, r9
         c2838:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c283c:	e59d0000 	ldr	r0, [sp]
         c2840:	e3300000 	teq	r0, #0	; 0x0
         c2844:	0a000001 	beq	c2850 <TFlashRange::IsEraseComplete(long &)+0x78>
         c2848:	e3370000 	teq	r7, #0	; 0x0
         c284c:	01a07000 	moveq	r7, r0
         c2850:	e594003c 	ldr	r0, [r4, #60]	; fField60
         c2854:	e0566000 	subs	r6, r6, r0
         c2858:	e0808008 	add	r8, r0, r8
         c285c:	e28dd004 	add	sp, sp, #4	; 0x4
         c2860:	1affffe7 	bne	c2804 <TFlashRange::IsEraseComplete(long &)+0x2c>
         c2864:	e5a49048 	str	r9, [r4, #72]!	; fField72
         c2868:	e3a00001 	mov	r0, #1	; 0x1
         c286c:	e5857000 	str	r7, [r5]
         c2870:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashRange::Write(unsigned long, unsigned long, char *)
 * Address: 000c2874
 */
TFlashRange::Write(unsigned long, unsigned long, char *) {
    /*
         c2874:	e1a0c00d 	mov	ip, sp
         c2878:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c287c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2880:	e1a05000 	mov	r5, r0
         c2884:	e1a04001 	mov	r4, r1
         c2888:	e1a06002 	mov	r6, r2
         c288c:	e1a07003 	mov	r7, r3
         c2890:	e5900008 	ldr	r0, [r0, #8]	; fField8
         c2894:	e0411000 	sub	r1, r1, r0
         c2898:	e595000c 	ldr	r0, [r5, #12]	; fField12
         c289c:	e0811000 	add	r1, r1, r0
         c28a0:	e1a00005 	mov	r0, r5
         c28a4:	eb6696da 	bl	1a68414 <$FlushDataCache__11TFlashRangeCFUlT1>
         c28a8:	e3360000 	teq	r6, #0	; 0x0
         c28ac:	0a00001b 	beq	c2920 <TFlashRange::Write(unsigned long, unsigned long, char *)+0xac>
         c28b0:	e1a08006 	mov	r8, r6
         c28b4:	e1a01004 	mov	r1, r4
         c28b8:	e1a00005 	mov	r0, r5
         c28bc:	eb668e98 	bl	1a66324 <TFlashRange::$StartOfBlockFlashAddress( const(unsigned long))>
         c28c0:	e595103c 	ldr	r1, [r5, #60]	; fField60
         c28c4:	e0800001 	add	r0, r0, r1
         c28c8:	e0842006 	add	r2, r4, r6
         c28cc:	e1500002 	cmp	r0, r2
         c28d0:	2a000005 	bcs	c28ec <TFlashRange::Write(unsigned long, unsigned long, char *)+0x78>
         c28d4:	e1a08001 	mov	r8, r1
         c28d8:	e1a01004 	mov	r1, r4
         c28dc:	e1a00005 	mov	r0, r5
         c28e0:	eb668e8f 	bl	1a66324 <TFlashRange::$StartOfBlockFlashAddress( const(unsigned long))>
         c28e4:	e0440000 	sub	r0, r4, r0
         c28e8:	e0488000 	sub	r8, r8, r0
         c28ec:	e1a03007 	mov	r3, r7
         c28f0:	e1a02008 	mov	r2, r8
         c28f4:	e1a01004 	mov	r1, r4
         c28f8:	e1a00005 	mov	r0, r5
         c28fc:	e595c000 	ldr	ip, [r5]
         c2900:	e1a0e00f 	mov	lr, pc
         c2904:	e28cf010 	add	pc, ip, #16	; 0x10
         c2908:	e3300000 	teq	r0, #0	; 0x0
         c290c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         c2910:	e0844008 	add	r4, r4, r8
         c2914:	e0566008 	subs	r6, r6, r8
         c2918:	e0877008 	add	r7, r7, r8
         c291c:	1affffe3 	bne	c28b0 <TFlashRange::Write(unsigned long, unsigned long, char *)+0x3c>
         c2920:	e3a00000 	mov	r0, #0	; 0x0
         c2924:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashRange::StartReadingArray(void)
 * Address: 000c2928
 */
TFlashRange::StartReadingArray(void) {
    /*
         c2928:	e1a0c00d 	mov	ip, sp
         c292c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c2930:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2934:	e1a04000 	mov	r4, r0
         c2938:	eb6696b8 	bl	1a68420 <$GetBankControlRegister__20TBankControlRegisterSFv>
         c293c:	e1a05000 	mov	r5, r0
         c2940:	e3e01000 	mvn	r1, #0	; 0x0
         c2944:	eb6696b4 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
         c2948:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c294c:	e1a01004 	mov	r1, r4
         c2950:	eb0b0788 	bl	384778 <TFlashDriver::StartReadingArray(TFlashRange &)>
         c2954:	e5b41014 	ldr	r1, [r4, #20]!
         c2958:	e3710001 	cmn	r1, #1	; 0x1
         c295c:	11a00005 	movne	r0, r5
         c2960:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         c2964:	1a6696ac 	bne	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
         c2968:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashRange::DoneReadingArray(void)
 * Address: 000c296c
 */
TFlashRange::DoneReadingArray(void) {
    /*
         c296c:	e1a0c00d 	mov	ip, sp
         c2970:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c2974:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2978:	e1a04000 	mov	r4, r0
         c297c:	eb6696a7 	bl	1a68420 <$GetBankControlRegister__20TBankControlRegisterSFv>
         c2980:	e3e01000 	mvn	r1, #0	; 0x0
         c2984:	eb6696a4 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
         c2988:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c298c:	e1a01004 	mov	r1, r4
         c2990:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         c2994:	ea0b077a 	b	384784 <TFlashDriver::DoneReadingArray(TFlashRange &)>
    */
}

/**
 * Symbol: TFlashRange::EarlyPrepareForReadingArray(void)
 * Address: 000c2998
 */
TFlashRange::EarlyPrepareForReadingArray(void) {
    /*
         c2998:	ea668e65 	b	1a66334 <TFlashRange::$StartReadingArray(void)>
    */
}

/**
 * Symbol: TFlashRange::Read(unsigned long, unsigned long, char *)
 * Address: 000c299c
 */
TFlashRange::Read(unsigned long, unsigned long, char *) {
    /*
         c299c:	e1a0c00d 	mov	ip, sp
         c29a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c29a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c29a8:	e1a04000 	mov	r4, r0
         c29ac:	e1a06002 	mov	r6, r2
         c29b0:	e1a05003 	mov	r5, r3
         c29b4:	e5900008 	ldr	r0, [r0, #8]	; fField8
         c29b8:	e0410000 	sub	r0, r1, r0
         c29bc:	e594100c 	ldr	r1, [r4, #12]	; fField12
         c29c0:	e0807001 	add	r7, r0, r1
         c29c4:	e1a00004 	mov	r0, r4
         c29c8:	eb668e59 	bl	1a66334 <TFlashRange::$StartReadingArray(void)>
         c29cc:	e1a02006 	mov	r2, r6
         c29d0:	e1a01005 	mov	r1, r5
         c29d4:	e1a00007 	mov	r0, r7
         c29d8:	eb6c715d 	bl	1bdef54 <$BlockMove>
         c29dc:	e1a00004 	mov	r0, r4
         c29e0:	eb668a44 	bl	1a652f8 <TFlashRange::$DoneReadingArray(void)>
         c29e4:	e3a00000 	mov	r0, #0	; 0x0
         c29e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashRange::StartOfBlockFlashAddress( const(unsigned long))
 * Address: 000c29ec
 */
TFlashRange::StartOfBlockFlashAddress( const(unsigned long)) {
    /*
         c29ec:	e1a0c00d 	mov	ip, sp
         c29f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c29f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c29f8:	e5905008 	ldr	r5, [r0, #8]	; fField8
         c29fc:	e0411005 	sub	r1, r1, r5
         c2a00:	e590003c 	ldr	r0, [r0, #60]	; fField60
         c2a04:	e1a04000 	mov	r4, r0
         c2a08:	eb6bbfce 	bl	1bb2948 <$__rt_udiv>
         c2a0c:	e0205094 	mla	r0, r4, r0, r5
         c2a10:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashRange::IsVirgin(unsigned long, unsigned long)
 * Address: 000c2a14
 */
TFlashRange::IsVirgin(unsigned long, unsigned long) {
    /*
         c2a14:	e1a0c00d 	mov	ip, sp
         c2a18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c2a1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2a20:	e1a05000 	mov	r5, r0
         c2a24:	e1a06001 	mov	r6, r1
         c2a28:	e1a04002 	mov	r4, r2
         c2a2c:	eb668e40 	bl	1a66334 <TFlashRange::$StartReadingArray(void)>
         c2a30:	e5950008 	ldr	r0, [r5, #8]	; fField8
         c2a34:	e0461000 	sub	r1, r6, r0
         c2a38:	e595000c 	ldr	r0, [r5, #12]	; fField12
         c2a3c:	e0811000 	add	r1, r1, r0
         c2a40:	e3a00000 	mov	r0, #0	; 0x0
         c2a44:	ea000004 	b	c2a5c <TFlashRange::IsVirgin(unsigned long, unsigned long)+0x48>
         c2a48:	e5d12000 	ldrb	r2, [r1]
         c2a4c:	e33200ff 	teq	r2, #255	; 0xff
         c2a50:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         c2a54:	e2811001 	add	r1, r1, #1	; 0x1
         c2a58:	e2444001 	sub	r4, r4, #1	; 0x1
         c2a5c:	e3110003 	tst	r1, #3	; 0x3
         c2a60:	13340000 	teqne	r4, #0	; 0x0
         c2a64:	1afffff7 	bne	c2a48 <TFlashRange::IsVirgin(unsigned long, unsigned long)+0x34>
         c2a68:	e3d42003 	bics	r2, r4, #3	; 0x3
         c2a6c:	e0444002 	sub	r4, r4, r2
         c2a70:	0a000005 	beq	c2a8c <TFlashRange::IsVirgin(unsigned long, unsigned long)+0x78>
         c2a74:	e5913000 	ldr	r3, [r1]
         c2a78:	e3730001 	cmn	r3, #1	; 0x1
         c2a7c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         c2a80:	e2811004 	add	r1, r1, #4	; 0x4
         c2a84:	e2522004 	subs	r2, r2, #4	; 0x4
         c2a88:	1afffff9 	bne	c2a74 <TFlashRange::IsVirgin(unsigned long, unsigned long)+0x60>
         c2a8c:	e3340000 	teq	r4, #0	; 0x0
         c2a90:	0a000005 	beq	c2aac <TFlashRange::IsVirgin(unsigned long, unsigned long)+0x98>
         c2a94:	e5d12000 	ldrb	r2, [r1]
         c2a98:	e33200ff 	teq	r2, #255	; 0xff
         c2a9c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         c2aa0:	e2811001 	add	r1, r1, #1	; 0x1
         c2aa4:	e2544001 	subs	r4, r4, #1	; 0x1
         c2aa8:	1afffff9 	bne	c2a94 <TFlashRange::IsVirgin(unsigned long, unsigned long)+0x80>
         c2aac:	e1a00005 	mov	r0, r5
         c2ab0:	eb668a10 	bl	1a652f8 <TFlashRange::$DoneReadingArray(void)>
         c2ab4:	e3a00001 	mov	r0, #1	; 0x1
         c2ab8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashRange::ResetAllBlocksStatus(void)
 * Address: 000c2cd8
 */
TFlashRange::ResetAllBlocksStatus(void) {
    /*
         c2cd8:	e1a0c00d 	mov	ip, sp
         c2cdc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c2ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2ce4:	e1a04000 	mov	r4, r0
         c2ce8:	e5905008 	ldr	r5, [r0, #8]	; fField8
         c2cec:	e1a06005 	mov	r6, r5
         c2cf0:	e5900030 	ldr	r0, [r0, #48]	; fField48
         c2cf4:	e0800005 	add	r0, r0, r5
         c2cf8:	e1500005 	cmp	r0, r5
         c2cfc:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
         c2d00:	e1a01005 	mov	r1, r5
         c2d04:	e1a00004 	mov	r0, r4
         c2d08:	e5942000 	ldr	r2, [r4]
         c2d0c:	e1a0e00f 	mov	lr, pc
         c2d10:	e282f014 	add	pc, r2, #20	; 0x14
         c2d14:	e1a02000 	mov	r2, r0
         c2d18:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2d1c:	e1a01004 	mov	r1, r4
         c2d20:	eb0b06a0 	bl	3847a8 <TFlashDriver::ResetBlockStatus(TFlashRange &, unsigned long)>
         c2d24:	e594003c 	ldr	r0, [r4, #60]	; fField60
         c2d28:	e0805005 	add	r5, r0, r5
         c2d2c:	e5940030 	ldr	r0, [r4, #48]	; fField48
         c2d30:	e0800006 	add	r0, r0, r6
         c2d34:	e1500005 	cmp	r0, r5
         c2d38:	8afffff0 	bhi	c2d00 <TFlashRange::ResetAllBlocksStatus(void)+0x28>
         c2d3c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashRange::__dt(void)
 * Address: 000c3114
 */
TFlashRange::~TFlashRange(void) {
    /*
         c3114:	e59f200c 	ldr	r2, [pc, #c]	; c3128 <TFlashRange::__dt(void)+0x14>
         c3118:	e3110001 	tst	r1, #1	; 0x1
         c311c:	e5802000 	str	r2, [r0]
         c3120:	1a0b1f71 	bne	38aeec <C$$dtorvec$$Limit+0x578>
         c3124:	e1a0f00e 	mov	pc, lr
         c3128:	0001b1d8 	ldreqd	fp, [r1], -r8
    */
}

/**
 * Symbol: TFlashRange::Delete(TMemoryAllocator &)
 * Address: 000c312c
 */
TFlashRange::Delete(TMemoryAllocator &) {
    /*
         c312c:	e1a02001 	mov	r2, r1
         c3130:	e5903004 	ldr	r3, [r0, #4]	; fField4
         c3134:	e1a01000 	mov	r1, r0
         c3138:	e1a00003 	mov	r0, r3
         c313c:	ea0b058a 	b	38476c <TFlashDriver::CleanUpDriverData(TFlashRange &, TMemoryAllocator &)>
    */
}

/**
 * Symbol: FlushDataCache__11TFlashRangeCFUlT1
 * Address: 000c3140
 */
void TFlashRange::FlushDataCache() {
    /*
         c3140:	e1a0c00d 	mov	ip, sp
         c3144:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c3148:	e24cb004 	sub	fp, ip, #4	; 0x4
         c314c:	e1a04001 	mov	r4, r1
         c3150:	e1a05002 	mov	r5, r2
         c3154:	e1a06001 	mov	r6, r1
         c3158:	eb0b44ac 	bl	394410 <IsSuperMode>
         c315c:	e0841005 	add	r1, r4, r5
         c3160:	e3300000 	teq	r0, #0	; 0x0
         c3164:	11a00006 	movne	r0, r6
         c3168:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         c316c:	1afd565d 	bne	18ae8 <CleanRangeInDCSWIGlue>
         c3170:	e1a02001 	mov	r2, r1
         c3174:	e1a01006 	mov	r1, r6
         c3178:	e3a00049 	mov	r0, #73	; 0x49
         c317c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         c3180:	ea0babfb 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: TFlashRange::EraseRange(void)
 * Address: 000c3184
 */
TFlashRange::EraseRange(void) {
    /*
         c3184:	e1a0c00d 	mov	ip, sp
         c3188:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c318c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3190:	e1a04000 	mov	r4, r0
         c3194:	e5905008 	ldr	r5, [r0, #8]	; fField8
         c3198:	e1a06005 	mov	r6, r5
         c319c:	e5900030 	ldr	r0, [r0, #48]	; fField48
         c31a0:	e0800005 	add	r0, r0, r5
         c31a4:	e1500005 	cmp	r0, r5
         c31a8:	9a00000b 	bls	c31dc <TFlashRange::EraseRange(void)+0x58>
         c31ac:	e1a01005 	mov	r1, r5
         c31b0:	e594203c 	ldr	r2, [r4, #60]	; fField60
         c31b4:	e1a00004 	mov	r0, r4
         c31b8:	eb668c5e 	bl	1a66338 <TFlashRange::$SyncErase(unsigned long, unsigned long)>
         c31bc:	e3300000 	teq	r0, #0	; 0x0
         c31c0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         c31c4:	e594003c 	ldr	r0, [r4, #60]	; fField60
         c31c8:	e0805005 	add	r5, r0, r5
         c31cc:	e5940030 	ldr	r0, [r4, #48]	; fField48
         c31d0:	e0800006 	add	r0, r0, r6
         c31d4:	e1500005 	cmp	r0, r5
         c31d8:	8afffff3 	bhi	c31ac <TFlashRange::EraseRange(void)+0x28>
         c31dc:	e3a00000 	mov	r0, #0	; 0x0
         c31e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashRange::SyncErase(unsigned long, unsigned long)
 * Address: 000c31e4
 */
TFlashRange::SyncErase(unsigned long, unsigned long) {
    /*
         c31e4:	e1a0c00d 	mov	ip, sp
         c31e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c31ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         c31f0:	e1a04000 	mov	r4, r0
         c31f4:	e24dd004 	sub	sp, sp, #4	; 0x4
         c31f8:	eb668c48 	bl	1a66320 <TFlashRange::$StartErase(unsigned long, unsigned long)>
         c31fc:	e58d0000 	str	r0, [sp]
         c3200:	e3300000 	teq	r0, #0	; 0x0
         c3204:	0a000000 	beq	c320c <TFlashRange::SyncErase(unsigned long, unsigned long)+0x28>
         c3208:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c320c:	e1a0100d 	mov	r1, sp
         c3210:	e1a00004 	mov	r0, r4
         c3214:	eb668c39 	bl	1a66300 <TFlashRange::$IsEraseComplete(long &)>
         c3218:	e3a060fe 	mov	r6, #254	; 0xfe
         c321c:	e2866c47 	add	r6, r6, #18176	; 0x4700
         c3220:	e3a05066 	mov	r5, #102	; 0x66
         c3224:	e2855c0e 	add	r5, r5, #3584	; 0xe00
         c3228:	e3300000 	teq	r0, #0	; 0x0
         c322c:	1a00000c 	bne	c3264 <TFlashRange::SyncErase(unsigned long, unsigned long)+0x80>
         c3230:	eb0b4476 	bl	394410 <IsSuperMode>
         c3234:	e3300000 	teq	r0, #0	; 0x0
         c3238:	1a000002 	bne	c3248 <TFlashRange::SyncErase(unsigned long, unsigned long)+0x64>
         c323c:	e1a00006 	mov	r0, r6
         c3240:	eb6c66f9 	bl	1bdce2c <$Sleep(unsigned long)>
         c3244:	ea000001 	b	c3250 <TFlashRange::SyncErase(unsigned long, unsigned long)+0x6c>
         c3248:	e1a00005 	mov	r0, r5
         c324c:	eb6ceb1d 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
         c3250:	e1a0100d 	mov	r1, sp
         c3254:	e1a00004 	mov	r0, r4
         c3258:	eb668c28 	bl	1a66300 <TFlashRange::$IsEraseComplete(long &)>
         c325c:	e3300000 	teq	r0, #0	; 0x0
         c3260:	0afffff2 	beq	c3230 <TFlashRange::SyncErase(unsigned long, unsigned long)+0x4c>
         c3264:	e59d0000 	ldr	r0, [sp]
         c3268:	eaffffe6 	b	c3208 <TFlashRange::SyncErase(unsigned long, unsigned long)+0x24>
    */
}

/**
 * Symbol: TFlashRange::StartErase(unsigned long, unsigned long)
 * Address: 000c326c
 */
TFlashRange::StartErase(unsigned long, unsigned long) {
    /*
         c326c:	e1a0c00d 	mov	ip, sp
         c3270:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c3274:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3278:	e1a04000 	mov	r4, r0
         c327c:	e1a06001 	mov	r6, r1
         c3280:	e1a05002 	mov	r5, r2
         c3284:	e5900008 	ldr	r0, [r0, #8]	; fField8
         c3288:	e0410000 	sub	r0, r1, r0
         c328c:	e594100c 	ldr	r1, [r4, #12]	; fField12
         c3290:	e0801001 	add	r1, r0, r1
         c3294:	e1a00004 	mov	r0, r4
         c3298:	eb66945d 	bl	1a68414 <$FlushDataCache__11TFlashRangeCFUlT1>
         c329c:	e3a07000 	mov	r7, #0	; 0x0
         c32a0:	e5845048 	str	r5, [r4, #72]	; fField72
         c32a4:	e3350000 	teq	r5, #0	; 0x0
         c32a8:	e5846044 	str	r6, [r4, #68]	; fField68
         c32ac:	0a00000f 	beq	c32f0 <TFlashRange::StartErase(unsigned long, unsigned long)+0x84>
         c32b0:	e1a01006 	mov	r1, r6
         c32b4:	e1a00004 	mov	r0, r4
         c32b8:	e5942000 	ldr	r2, [r4]
         c32bc:	e1a0e00f 	mov	lr, pc
         c32c0:	e282f014 	add	pc, r2, #20	; 0x14
         c32c4:	e1a02000 	mov	r2, r0
         c32c8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c32cc:	e1a01004 	mov	r1, r4
         c32d0:	eb0b0531 	bl	38479c <TFlashDriver::StartErase(TFlashRange &, unsigned long)>
         c32d4:	e3300000 	teq	r0, #0	; 0x0
         c32d8:	15a47048 	strne	r7, [r4, #72]!	; fField72
         c32dc:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c32e0:	e594003c 	ldr	r0, [r4, #60]	; fField60
         c32e4:	e0555000 	subs	r5, r5, r0
         c32e8:	e0806006 	add	r6, r0, r6
         c32ec:	1affffef 	bne	c32b0 <TFlashRange::StartErase(unsigned long, unsigned long)+0x44>
         c32f0:	e1a00007 	mov	r0, r7
         c32f4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashRange::LockBlock(unsigned long)
 * Address: 000c32f8
 */
TFlashRange::LockBlock(unsigned long) {
    /*
         c32f8:	e1a0c00d 	mov	ip, sp
         c32fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c3300:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3304:	e1a04000 	mov	r4, r0
         c3308:	e5902000 	ldr	r2, [r0]
         c330c:	e1a0e00f 	mov	lr, pc
         c3310:	e282f014 	add	pc, r2, #20	; 0x14
         c3314:	e1a02000 	mov	r2, r0
         c3318:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c331c:	e1a01004 	mov	r1, r4
         c3320:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         c3324:	ea0b0525 	b	3847c0 <TFlashDriver::LockBlock(TFlashRange &, unsigned long)>
    */
}

