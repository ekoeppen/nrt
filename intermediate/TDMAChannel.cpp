#include "include/TDMAChannel.h"

/**
 * Symbol: TDMAChannel::__ct(unsigned long, TSoundDriverInfo const &)
 * Address: 001e3804
 */
TDMAChannel::TDMAChannel(unsigned long, TSoundDriverInfo const &) {
    /*
        1e3804:	e1a0c00d 	mov	ip, sp
        1e3808:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e380c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3810:	e1b04000 	movs	r4, r0
        1e3814:	e1a06001 	mov	r6, r1
        1e3818:	e1a05002 	mov	r5, r2
        1e381c:	1a000005 	bne	1e3838 <TDMAChannel::__ct(unsigned long, TSoundDriverInfo const &)+0x34>
        1e3820:	e3a00f82 	mov	r0, #520	; 0x208
        1e3824:	eb67abc3 	bl	1bce738 <$__nw(unsigned int)>
        1e3828:	e1b04000 	movs	r4, r0
        1e382c:	1a000001 	bne	1e3838 <TDMAChannel::__ct(unsigned long, TSoundDriverInfo const &)+0x34>
        1e3830:	e1a00004 	mov	r0, r4
        1e3834:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e3838:	e1a01006 	mov	r1, r6
        1e383c:	e1a00004 	mov	r0, r4
        1e3840:	eb666999 	bl	1b7deac <TSoundChannel::$__ct(unsigned long)>
        1e3844:	e59f0094 	ldr	r0, [pc, #94]	; 1e38e0 <TDMAChannel::__ct(unsigned long, TSoundDriverInfo const &)+0xdc>
        1e3848:	e5840000 	str	r0, [r4]
        1e384c:	e3a00000 	mov	r0, #0	; 0x0
        1e3850:	e58401e8 	str	r0, [r4, #488]	; fField488
        1e3854:	e58401e4 	str	r0, [r4, #484]	; fField484
        1e3858:	e58401e0 	str	r0, [r4, #480]	; fField480
        1e385c:	e5951010 	ldr	r1, [r5, #16]
        1e3860:	e58411ec 	str	r1, [r4, #492]
        1e3864:	e5951014 	ldr	r1, [r5, #20]	; fField20
        1e3868:	e58411f0 	str	r1, [r4, #496]	; fField496
        1e386c:	e5b5100c 	ldr	r1, [r5, #12]!	; fField12
        1e3870:	e1a01841 	mov	r1, r1, asr #16
        1e3874:	e58411f4 	str	r1, [r4, #500]	; fField500
        1e3878:	e3e01102 	mvn	r1, #-2147483648	; 0x80000000
        1e387c:	e2844f7f 	add	r4, r4, #508	; 0x1fc
        1e3880:	e8840003 	stmia	r4, {r0, r1}
        1e3884:	e5841008 	str	r1, [r4, #8]
        1e3888:	e5240020 	str	r0, [r4, -#32]!
        1e388c:	e52401b0 	str	r0, [r4, -#432]!
        1e3890:	e244402c 	sub	r4, r4, #44	; 0x2c
        1e3894:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1e3898:	e28d0014 	add	r0, sp, #20	; 0x14
        1e389c:	eb67a78d 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        1e38a0:	e1a0200d 	mov	r2, sp
        1e38a4:	e28d0014 	add	r0, sp, #20	; 0x14
        1e38a8:	e3a03014 	mov	r3, #20	; 0x14
        1e38ac:	e3a01402 	mov	r1, #33554432	; 0x2000000
        1e38b0:	e2811009 	add	r1, r1, #9	; 0x9
        1e38b4:	eb67bc2c 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
        1e38b8:	e5dd0002 	ldrb	r0, [sp, #2]
        1e38bc:	e3300000 	teq	r0, #0	; 0x0
        1e38c0:	15940014 	ldrne	r0, [r4, #20]	; fField20
        1e38c4:	13800080 	orrne	r0, r0, #128	; 0x80
        1e38c8:	15840014 	strne	r0, [r4, #20]	; fField20
        1e38cc:	e28d0014 	add	r0, sp, #20	; 0x14
        1e38d0:	e3a01000 	mov	r1, #0	; 0x0
        1e38d4:	eb67ab92 	bl	1bce724 <TUObject::$__dt(void)>
        1e38d8:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e38dc:	eaffffd3 	b	1e3830 <TDMAChannel::__ct(unsigned long, TSoundDriverInfo const &)+0x2c>
        1e38e0:	0001b1b4 	streqh	fp, [r1], -r4
    */
}

/**
 * Symbol: TDMAChannel::__dt(void)
 * Address: 001e38e4
 */
TDMAChannel::~TDMAChannel(void) {
    /*
        1e38e4:	e1a0c00d 	mov	ip, sp
        1e38e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e38ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e38f0:	e1a04000 	mov	r4, r0
        1e38f4:	e1a05001 	mov	r5, r1
        1e38f8:	e59f0020 	ldr	r0, [pc, #20]	; 1e3920 <TDMAChannel::__dt(void)+0x3c>	; fField20
        1e38fc:	e5840000 	str	r0, [r4]
        1e3900:	e1a00004 	mov	r0, r4
        1e3904:	e3a01000 	mov	r1, #0	; 0x0
        1e3908:	eb666128 	bl	1b7bdb0 <TSoundChannel::$__dt(void)>
        1e390c:	e3150001 	tst	r5, #1	; 0x1
        1e3910:	11a00004 	movne	r0, r4
        1e3914:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1e3918:	1a67a770 	bne	1bcd6e0 <$__dl(void *)>
        1e391c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1e3920:	0001b1b4 	streqh	fp, [r1], -r4
    */
}

/**
 * Symbol: TDMAChannel::GetVolume(void)
 * Address: 001e3924
 */
TDMAChannel::GetVolume(void) {
    /*
        1e3924:	e5901200 	ldr	r1, [r0, #512]	; fField512
        1e3928:	e3710106 	cmn	r1, #-2147483647	; 0x80000001
        1e392c:	11a00001 	movne	r0, r1
        1e3930:	11a0f00e 	movne	pc, lr
        1e3934:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e3938:	e3110080 	tst	r1, #128	; 0x80
        1e393c:	05900204 	ldreq	r0, [r0, #516]	; fField516
        1e3940:	13e00106 	mvnne	r0, #-2147483647	; 0x80000001
        1e3944:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDMAChannel::SetupNode(ChannelNode *)
 * Address: 001e3948
 */
TDMAChannel::SetupNode(ChannelNode *) {
    /*
        1e3948:	e1a0c00d 	mov	ip, sp
        1e394c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e3950:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3954:	e1a04000 	mov	r4, r0
        1e3958:	e1a05001 	mov	r5, r1
        1e395c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1e3960:	e3a03001 	mov	r3, #1	; 0x1
        1e3964:	e3300000 	teq	r0, #0	; 0x0
        1e3968:	05c43030 	streqb	r3, [r4, #48]	; fField48
        1e396c:	e3a06000 	mov	r6, #0	; 0x0
        1e3970:	e3350000 	teq	r5, #0	; 0x0
        1e3974:	0a000087 	beq	1e3b98 <TDMAChannel::SetupNode(ChannelNode *)+0x250>
        1e3978:	e5950024 	ldr	r0, [r5, #36]
        1e397c:	e5840200 	str	r0, [r4, #512]	; fField512
        1e3980:	e5950054 	ldr	r0, [r5, #84]	; fField84
        1e3984:	e5840204 	str	r0, [r4, #516]	; fField516
        1e3988:	e5950020 	ldr	r0, [r5, #32]
        1e398c:	e1a02840 	mov	r2, r0, asr #16
        1e3990:	e58421fc 	str	r2, [r4, #508]	; fField508
        1e3994:	e5950018 	ldr	r0, [r5, #24]
        1e3998:	e58401f8 	str	r0, [r4, #504]	; fField504
        1e399c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e39a0:	e3100002 	tst	r0, #2	; 0x2
        1e39a4:	0a000004 	beq	1e39bc <TDMAChannel::SetupNode(ChannelNode *)+0x74>
        1e39a8:	e284cf7b 	add	ip, r4, #492	; 0x1ec
        1e39ac:	e89c1082 	ldmia	ip, {r1, r7, ip}
        1e39b0:	e595001c 	ldr	r0, [r5, #28]
        1e39b4:	e595e018 	ldr	lr, [r5, #24]
        1e39b8:	ea000005 	b	1e39d4 <TDMAChannel::SetupNode(ChannelNode *)+0x8c>
        1e39bc:	e1a0c002 	mov	ip, r2
        1e39c0:	e595101c 	ldr	r1, [r5, #28]
        1e39c4:	e5957018 	ldr	r7, [r5, #24]
        1e39c8:	e284ef7b 	add	lr, r4, #492	; 0x1ec
        1e39cc:	e89e4001 	ldmia	lr, {r0, lr}
        1e39d0:	e59421f4 	ldr	r2, [r4, #500]	; fField500
        1e39d4:	e1310000 	teq	r1, r0
        1e39d8:	0137000e 	teqeq	r7, lr
        1e39dc:	0a000028 	beq	1e3a84 <TDMAChannel::SetupNode(ChannelNode *)+0x13c>
        1e39e0:	e3310000 	teq	r1, #0	; 0x0
        1e39e4:	1a000007 	bne	1e3a08 <TDMAChannel::SetupNode(ChannelNode *)+0xc0>
        1e39e8:	e3300006 	teq	r0, #6	; 0x6
        1e39ec:	059f800c 	ldreq	r8, [pc, #c]	; 1e3a00 <TDMAChannel::SetupNode(ChannelNode *)+0xb8>
        1e39f0:	058481e8 	streq	r8, [r4, #488]	; fField488
        1e39f4:	059f8008 	ldreq	r8, [pc, #8]	; 1e3a04 <TDMAChannel::SetupNode(ChannelNode *)+0xbc>
        1e39f8:	0a00001d 	beq	1e3a74 <TDMAChannel::SetupNode(ChannelNode *)+0x12c>
        1e39fc:	ea000020 	b	1e3a84 <TDMAChannel::SetupNode(ChannelNode *)+0x13c>
        1e3a00:	01b7ef64 	moveqs	lr, r4, ror #30
        1e3a04:	01b7ef60 	moveqs	lr, r0, ror #30
        1e3a08:	e3310006 	teq	r1, #6	; 0x6
        1e3a0c:	1a000007 	bne	1e3a30 <TDMAChannel::SetupNode(ChannelNode *)+0xe8>
        1e3a10:	e3300000 	teq	r0, #0	; 0x0
        1e3a14:	059f800c 	ldreq	r8, [pc, #c]	; 1e3a28 <TDMAChannel::SetupNode(ChannelNode *)+0xe0>
        1e3a18:	058481e8 	streq	r8, [r4, #488]	; fField488
        1e3a1c:	059f8008 	ldreq	r8, [pc, #8]	; 1e3a2c <TDMAChannel::SetupNode(ChannelNode *)+0xe4>
        1e3a20:	0a000013 	beq	1e3a74 <TDMAChannel::SetupNode(ChannelNode *)+0x12c>
        1e3a24:	ea00000d 	b	1e3a60 <TDMAChannel::SetupNode(ChannelNode *)+0x118>
        1e3a28:	01b7ef6c 	moveqs	lr, ip, ror #30
        1e3a2c:	01b7ef68 	moveqs	lr, r8, ror #30
        1e3a30:	e3310001 	teq	r1, #1	; 0x1
        1e3a34:	1a000007 	bne	1e3a58 <TDMAChannel::SetupNode(ChannelNode *)+0x110>
        1e3a38:	e3300006 	teq	r0, #6	; 0x6
        1e3a3c:	059f800c 	ldreq	r8, [pc, #c]	; 1e3a50 <TDMAChannel::SetupNode(ChannelNode *)+0x108>
        1e3a40:	058481e8 	streq	r8, [r4, #488]	; fField488
        1e3a44:	059f8008 	ldreq	r8, [pc, #8]	; 1e3a54 <TDMAChannel::SetupNode(ChannelNode *)+0x10c>
        1e3a48:	0a000009 	beq	1e3a74 <TDMAChannel::SetupNode(ChannelNode *)+0x12c>
        1e3a4c:	ea00000c 	b	1e3a84 <TDMAChannel::SetupNode(ChannelNode *)+0x13c>
        1e3a50:	01b7ef7c 	moveqs	lr, ip, ror pc
        1e3a54:	01b7ef78 	moveqs	lr, r8, ror pc
        1e3a58:	e3310006 	teq	r1, #6	; 0x6
        1e3a5c:	1a000008 	bne	1e3a84 <TDMAChannel::SetupNode(ChannelNode *)+0x13c>
        1e3a60:	e3300001 	teq	r0, #1	; 0x1
        1e3a64:	1a000006 	bne	1e3a84 <TDMAChannel::SetupNode(ChannelNode *)+0x13c>
        1e3a68:	e59f800c 	ldr	r8, [pc, #c]	; 1e3a7c <TDMAChannel::SetupNode(ChannelNode *)+0x134>
        1e3a6c:	e58481e8 	str	r8, [r4, #488]	; fField488
        1e3a70:	e59f8008 	ldr	r8, [pc, #8]	; 1e3a80 <TDMAChannel::SetupNode(ChannelNode *)+0x138>
        1e3a74:	e58481e4 	str	r8, [r4, #484]	; fField484
        1e3a78:	ea000003 	b	1e3a8c <TDMAChannel::SetupNode(ChannelNode *)+0x144>
        1e3a7c:	01b7ef74 	moveqs	lr, r4, ror pc
        1e3a80:	01b7ef70 	moveqs	lr, r0, ror pc
        1e3a84:	e58461e8 	str	r6, [r4, #488]	; fField488
        1e3a88:	e58461e4 	str	r6, [r4, #484]	; fField484
        1e3a8c:	e59f80d0 	ldr	r8, [pc, #d0]	; 1e3b64 <TDMAChannel::SetupNode(ChannelNode *)+0x21c>
        1e3a90:	e5989000 	ldr	r9, [r8]
        1e3a94:	e59fa0cc 	ldr	sl, [pc, #cc]	; 1e3b68 <TDMAChannel::SetupNode(ChannelNode *)+0x220>
        1e3a98:	e59aa000 	ldr	sl, [sl]
        1e3a9c:	e159000a 	cmp	r9, sl
        1e3aa0:	2a000032 	bcs	1e3b70 <TDMAChannel::SetupNode(ChannelNode *)+0x228>
        1e3aa4:	e58461e0 	str	r6, [r4, #480]	; fField480
        1e3aa8:	e052900c 	subs	r9, r2, ip
        1e3aac:	e58461dc 	str	r6, [r4, #476]	; fField476
        1e3ab0:	42699000 	rsbmi	r9, r9, #0	; 0x0
        1e3ab4:	e1b0a002 	movs	sl, r2
        1e3ab8:	428aa07f 	addmi	sl, sl, #127	; 0x7f
        1e3abc:	e15903ca 	cmp	r9, sl, asr #7
        1e3ac0:	da00003b 	ble	1e3bb4 <TDMAChannel::SetupNode(ChannelNode *)+0x26c>
        1e3ac4:	e5959004 	ldr	r9, [r5, #4]
        1e3ac8:	e3899001 	orr	r9, r9, #1	; 0x1
        1e3acc:	e5859004 	str	r9, [r5, #4]
        1e3ad0:	e5989000 	ldr	r9, [r8]
        1e3ad4:	e2899001 	add	r9, r9, #1	; 0x1
        1e3ad8:	e5889000 	str	r9, [r8]
        1e3adc:	e59f8088 	ldr	r8, [pc, #88]	; 1e3b6c <TDMAChannel::SetupNode(ChannelNode *)+0x224>	; fField88
        1e3ae0:	e58481dc 	str	r8, [r4, #476]	; fField476
        1e3ae4:	e5948058 	ldr	r8, [r4, #88]	; fField88
        1e3ae8:	e138000c 	teq	r8, ip
        1e3aec:	1584c058 	strne	ip, [r4, #88]	; fField88
        1e3af0:	15c43030 	strneb	r3, [r4, #48]	; fField48
        1e3af4:	e594c05c 	ldr	ip, [r4, #92]	; fField92
        1e3af8:	e13c0007 	teq	ip, r7
        1e3afc:	1584705c 	strne	r7, [r4, #92]	; fField92
        1e3b00:	15c43030 	strneb	r3, [r4, #48]	; fField48
        1e3b04:	e594c060 	ldr	ip, [r4, #96]	; fField96
        1e3b08:	e13c0001 	teq	ip, r1
        1e3b0c:	15841060 	strne	r1, [r4, #96]	; fField96
        1e3b10:	15c43030 	strneb	r3, [r4, #48]	; fField48
        1e3b14:	e5941044 	ldr	r1, [r4, #68]	; fField68
        1e3b18:	e1310002 	teq	r1, r2
        1e3b1c:	15842044 	strne	r2, [r4, #68]	; fField68
        1e3b20:	15c43030 	strneb	r3, [r4, #48]	; fField48
        1e3b24:	e5941048 	ldr	r1, [r4, #72]	; fField72
        1e3b28:	e131000e 	teq	r1, lr
        1e3b2c:	1584e048 	strne	lr, [r4, #72]	; fField72
        1e3b30:	15c43030 	strneb	r3, [r4, #48]	; fField48
        1e3b34:	e594104c 	ldr	r1, [r4, #76]	; fField76
        1e3b38:	e1310000 	teq	r1, r0
        1e3b3c:	1584004c 	strne	r0, [r4, #76]	; fField76
        1e3b40:	15c43030 	strneb	r3, [r4, #48]	; fField48
        1e3b44:	1a000002 	bne	1e3b54 <TDMAChannel::SetupNode(ChannelNode *)+0x20c>
        1e3b48:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        1e3b4c:	e3300000 	teq	r0, #0	; 0x0
        1e3b50:	0a000017 	beq	1e3bb4 <TDMAChannel::SetupNode(ChannelNode *)+0x26c>
        1e3b54:	e2840034 	add	r0, r4, #52	; 0x34
        1e3b58:	eb667108 	bl	1b7ff80 <$InitResampleState(ResampleState *)>
        1e3b5c:	e5c46030 	strb	r6, [r4, #48]	; fField48
        1e3b60:	ea000013 	b	1e3bb4 <TDMAChannel::SetupNode(ChannelNode *)+0x26c>
        1e3b64:	0c101b1c 	ldceq	11, cr1, [r0], -#112
        1e3b68:	0c101b18 	ldceq	11, cr1, [r0], -#96	; fField96
        1e3b6c:	01b7ff84 	moveqs	pc, r4, lsl #31
        1e3b70:	e052000c 	subs	r0, r2, ip
        1e3b74:	42600000 	rsbmi	r0, r0, #0	; 0x0
        1e3b78:	e3520000 	cmp	r2, #0	; 0x0
        1e3b7c:	b282207f 	addlt	r2, r2, #127	; 0x7f
        1e3b80:	e15003c2 	cmp	r0, r2, asr #7
        1e3b84:	a59f0008 	ldrge	r0, [pc, #8]	; 1e3b94 <TDMAChannel::SetupNode(ChannelNode *)+0x24c>
        1e3b88:	a58401e0 	strge	r0, [r4, #480]	; fField480
        1e3b8c:	b58461e0 	strlt	r6, [r4, #480]	; fField480
        1e3b90:	ea000007 	b	1e3bb4 <TDMAChannel::SetupNode(ChannelNode *)+0x26c>
        1e3b94:	01b7ef5c 	moveqs	lr, ip, asr pc
        1e3b98:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        1e3b9c:	e5840200 	str	r0, [r4, #512]	; fField512
        1e3ba0:	e58461fc 	str	r6, [r4, #508]	; fField508
        1e3ba4:	e5840204 	str	r0, [r4, #516]	; fField516
        1e3ba8:	e58461e0 	str	r6, [r4, #480]	; fField480
        1e3bac:	e58461e8 	str	r6, [r4, #488]	; fField488
        1e3bb0:	e58461e4 	str	r6, [r4, #484]	; fField484
        1e3bb4:	e5a4500c 	str	r5, [r4, #12]!	; fField12
        1e3bb8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDMAChannel::Prep(void)
 * Address: 001e3bbc
 */
TDMAChannel::Prep(void) {
    /*
        1e3bbc:	e1a0c00d 	mov	ip, sp
        1e3bc0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e3bc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3bc8:	e1a04000 	mov	r4, r0
        1e3bcc:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1e3bd0:	e3100004 	tst	r0, #4	; 0x4
        1e3bd4:	1594500c 	ldrne	r5, [r4, #12]	; fField12
        1e3bd8:	13350000 	teqne	r5, #0	; 0x0
        1e3bdc:	0a00001a 	beq	1e3c4c <TDMAChannel::Prep(void)+0x90>
        1e3be0:	e3100008 	tst	r0, #8	; 0x8
        1e3be4:	1a000018 	bne	1e3c4c <TDMAChannel::Prep(void)+0x90>
        1e3be8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e3bec:	e5900024 	ldr	r0, [r0, #36]
        1e3bf0:	e3300102 	teq	r0, #-2147483648	; 0x80000000
        1e3bf4:	1a000014 	bne	1e3c4c <TDMAChannel::Prep(void)+0x90>
        1e3bf8:	e1a01005 	mov	r1, r5
        1e3bfc:	e1a00004 	mov	r0, r4
        1e3c00:	e5942000 	ldr	r2, [r4]
        1e3c04:	e1a0e00f 	mov	lr, pc
        1e3c08:	e282f020 	add	pc, r2, #32	; 0x20
        1e3c0c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e3c10:	e5901000 	ldr	r1, [r0]
        1e3c14:	e1a00004 	mov	r0, r4
        1e3c18:	e5942000 	ldr	r2, [r4]
        1e3c1c:	e1a0e00f 	mov	lr, pc
        1e3c20:	e282f01c 	add	pc, r2, #28	; 0x1c
        1e3c24:	e1a01005 	mov	r1, r5
        1e3c28:	e1a00004 	mov	r0, r4
        1e3c2c:	e3a03000 	mov	r3, #0	; 0x0
        1e3c30:	e3a02000 	mov	r2, #0	; 0x0
        1e3c34:	e594c000 	ldr	ip, [r4]
        1e3c38:	e1a0e00f 	mov	lr, pc
        1e3c3c:	e28cf018 	add	pc, ip, #24	; 0x18
        1e3c40:	e594500c 	ldr	r5, [r4, #12]	; fField12
        1e3c44:	e3350000 	teq	r5, #0	; 0x0
        1e3c48:	1affffe6 	bne	1e3be8 <TDMAChannel::Prep(void)+0x2c>
        1e3c4c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e3c50:	e3100004 	tst	r0, #4	; 0x4
        1e3c54:	15b4100c 	ldrne	r1, [r4, #12]!	; fField12
        1e3c58:	13310000 	teqne	r1, #0	; 0x0
        1e3c5c:	0a000002 	beq	1e3c6c <TDMAChannel::Prep(void)+0xb0>
        1e3c60:	e3100008 	tst	r0, #8	; 0x8
        1e3c64:	03a00001 	moveq	r0, #1	; 0x1
        1e3c68:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1e3c6c:	e3a00000 	mov	r0, #0	; 0x0
        1e3c70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDMAChannel::Produce(void *, long *)
 * Address: 001e3c74
 */
TDMAChannel::Produce(void *, long *) {
    /*
        1e3c74:	e1a0c00d 	mov	ip, sp
        1e3c78:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e3c7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3c80:	e1a04000 	mov	r4, r0
        1e3c84:	e1a06001 	mov	r6, r1
        1e3c88:	e1a05002 	mov	r5, r2
        1e3c8c:	e590100c 	ldr	r1, [r0, #12]	; fField12
        1e3c90:	e3a00000 	mov	r0, #0	; 0x0
        1e3c94:	e3310000 	teq	r1, #0	; 0x0
        1e3c98:	05850000 	streq	r0, [r5]
        1e3c9c:	03a00fb2 	moveq	r0, #712	; 0x2c8
        1e3ca0:	02400b1e 	subeq	r0, r0, #30720	; 0x7800
        1e3ca4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1e3ca8:	e3a08000 	mov	r8, #0	; 0x0
        1e3cac:	e5951000 	ldr	r1, [r5]
        1e3cb0:	e3c11003 	bic	r1, r1, #3	; 0x3
        1e3cb4:	e284a034 	add	sl, r4, #52	; 0x34
        1e3cb8:	e5851000 	str	r1, [r5]
        1e3cbc:	ea000076 	b	1e3e9c <TDMAChannel::Produce(void *, long *)+0x228>
        1e3cc0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e3cc4:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1e3cc8:	e597102c 	ldr	r1, [r7, #44]
        1e3ccc:	e0410000 	sub	r0, r1, r0
        1e3cd0:	e58d0004 	str	r0, [sp, #4]
        1e3cd4:	e5950000 	ldr	r0, [r5]
        1e3cd8:	e040e008 	sub	lr, r0, r8
        1e3cdc:	e58de000 	str	lr, [sp]
        1e3ce0:	e5970018 	ldr	r0, [r7, #24]
        1e3ce4:	e3500000 	cmp	r0, #0	; 0x0
        1e3ce8:	e597100c 	ldr	r1, [r7, #12]	; fField12
        1e3cec:	b2800007 	addlt	r0, r0, #7	; 0x7
        1e3cf0:	e1a001c0 	mov	r0, r0, asr #3
        1e3cf4:	e0010190 	mul	r1, r0, r1
        1e3cf8:	e5970010 	ldr	r0, [r7, #16]
        1e3cfc:	e0811000 	add	r1, r1, r0
        1e3d00:	e59401f0 	ldr	r0, [r4, #496]	; fField496
        1e3d04:	e1b02000 	movs	r2, r0
        1e3d08:	42800007 	addmi	r0, r0, #7	; 0x7
        1e3d0c:	e1a001c0 	mov	r0, r0, asr #3
        1e3d10:	e0206098 	mla	r0, r8, r0, r6
        1e3d14:	e59431e0 	ldr	r3, [r4, #480]	; fField480
        1e3d18:	e3330000 	teq	r3, #0	; 0x0
        1e3d1c:	0a000018 	beq	1e3d84 <TDMAChannel::Produce(void *, long *)+0x110>
        1e3d20:	e52d001c 	str	r0, [sp, -#28]!
        1e3d24:	e59401f4 	ldr	r0, [r4, #500]	; fField500
        1e3d28:	e58d0004 	str	r0, [sp, #4]
        1e3d2c:	e59401f0 	ldr	r0, [r4, #496]	; fField496
        1e3d30:	e58d0008 	str	r0, [sp, #8]
        1e3d34:	e58d100c 	str	r1, [sp, #12]	; fField12
        1e3d38:	e59401fc 	ldr	r0, [r4, #508]	; fField508
        1e3d3c:	e58d0010 	str	r0, [sp, #16]
        1e3d40:	e59401f8 	ldr	r0, [r4, #504]	; fField504
        1e3d44:	e58d0014 	str	r0, [sp, #20]	; fField20
        1e3d48:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e3d4c:	e58d0018 	str	r0, [sp, #24]
        1e3d50:	e28d2020 	add	r2, sp, #32	; 0x20
        1e3d54:	e28d101c 	add	r1, sp, #28	; 0x1c
        1e3d58:	e1a0000d 	mov	r0, sp
        1e3d5c:	e1a0e00f 	mov	lr, pc
        1e3d60:	e594f1e0 	ldr	pc, [r4, #480]	; fField480
        1e3d64:	e597100c 	ldr	r1, [r7, #12]	; fField12
        1e3d68:	e59d0020 	ldr	r0, [sp, #32]
        1e3d6c:	e0810000 	add	r0, r1, r0
        1e3d70:	e587000c 	str	r0, [r7, #12]	; fField12
        1e3d74:	e59d001c 	ldr	r0, [sp, #28]
        1e3d78:	e0888000 	add	r8, r8, r0
        1e3d7c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e3d80:	ea000026 	b	1e3e20 <TDMAChannel::Produce(void *, long *)+0x1ac>
        1e3d84:	e59431dc 	ldr	r3, [r4, #476]	; fField476
        1e3d88:	e3330000 	teq	r3, #0	; 0x0
        1e3d8c:	0a000007 	beq	1e3db0 <TDMAChannel::Produce(void *, long *)+0x13c>
        1e3d90:	e5840040 	str	r0, [r4, #64]	; fField64
        1e3d94:	e1a0000a 	mov	r0, sl
        1e3d98:	e28d2004 	add	r2, sp, #4	; 0x4
        1e3d9c:	e5841054 	str	r1, [r4, #84]	; fField84
        1e3da0:	e1a0100d 	mov	r1, sp
        1e3da4:	e1a0e00f 	mov	lr, pc
        1e3da8:	e1a0f003 	mov	pc, r3
        1e3dac:	ea000007 	b	1e3dd0 <TDMAChannel::Produce(void *, long *)+0x15c>
        1e3db0:	e594c1e8 	ldr	ip, [r4, #488]	; fField488
        1e3db4:	e33c0000 	teq	ip, #0	; 0x0
        1e3db8:	0a00000b 	beq	1e3dec <TDMAChannel::Produce(void *, long *)+0x178>
        1e3dbc:	e28d3004 	add	r3, sp, #4	; 0x4
        1e3dc0:	e1a02001 	mov	r2, r1
        1e3dc4:	e1a0100d 	mov	r1, sp
        1e3dc8:	e1a0e00f 	mov	lr, pc
        1e3dcc:	e1a0f00c 	mov	pc, ip
        1e3dd0:	e597100c 	ldr	r1, [r7, #12]	; fField12
        1e3dd4:	e59d0004 	ldr	r0, [sp, #4]
        1e3dd8:	e0810000 	add	r0, r1, r0
        1e3ddc:	e587000c 	str	r0, [r7, #12]	; fField12
        1e3de0:	e59d0000 	ldr	r0, [sp]
        1e3de4:	e0888000 	add	r8, r8, r0
        1e3de8:	ea00000c 	b	1e3e20 <TDMAChannel::Produce(void *, long *)+0x1ac>
        1e3dec:	e59d3004 	ldr	r3, [sp, #4]
        1e3df0:	e153000e 	cmp	r3, lr
        1e3df4:	a1a0900e 	movge	r9, lr
        1e3df8:	b1a09003 	movlt	r9, r3
        1e3dfc:	e3520000 	cmp	r2, #0	; 0x0
        1e3e00:	b2822007 	addlt	r2, r2, #7	; 0x7
        1e3e04:	e1a021c2 	mov	r2, r2, asr #3
        1e3e08:	e0020299 	mul	r2, r9, r2
        1e3e0c:	eb67430f 	bl	1bb4a50 <$memcpy>
        1e3e10:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1e3e14:	e0800009 	add	r0, r0, r9
        1e3e18:	e0888009 	add	r8, r8, r9
        1e3e1c:	e587000c 	str	r0, [r7, #12]	; fField12
        1e3e20:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1e3e24:	e597102c 	ldr	r1, [r7, #44]
        1e3e28:	e1300001 	teq	r0, r1
        1e3e2c:	1a000019 	bne	1e3e98 <TDMAChannel::Produce(void *, long *)+0x224>
        1e3e30:	e5970030 	ldr	r0, [r7, #48]	; fField48
        1e3e34:	e3500000 	cmp	r0, #0	; 0x0
        1e3e38:	ca000012 	bgt	1e3e88 <TDMAChannel::Produce(void *, long *)+0x214>
        1e3e3c:	e1a01007 	mov	r1, r7
        1e3e40:	e1a00004 	mov	r0, r4
        1e3e44:	e5942000 	ldr	r2, [r4]
        1e3e48:	e1a0e00f 	mov	lr, pc
        1e3e4c:	e282f020 	add	pc, r2, #32	; 0x20
        1e3e50:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e3e54:	e5901000 	ldr	r1, [r0]
        1e3e58:	e1a00004 	mov	r0, r4
        1e3e5c:	e5942000 	ldr	r2, [r4]
        1e3e60:	e1a0e00f 	mov	lr, pc
        1e3e64:	e282f01c 	add	pc, r2, #28	; 0x1c
        1e3e68:	e1a01007 	mov	r1, r7
        1e3e6c:	e1a00004 	mov	r0, r4
        1e3e70:	e3a03000 	mov	r3, #0	; 0x0
        1e3e74:	e3a02000 	mov	r2, #0	; 0x0
        1e3e78:	e594c000 	ldr	ip, [r4]
        1e3e7c:	e1a0e00f 	mov	lr, pc
        1e3e80:	e28cf018 	add	pc, ip, #24	; 0x18
        1e3e84:	ea000003 	b	1e3e98 <TDMAChannel::Produce(void *, long *)+0x224>
        1e3e88:	e2400001 	sub	r0, r0, #1	; 0x1
        1e3e8c:	e5870030 	str	r0, [r7, #48]	; fField48
        1e3e90:	e3a00000 	mov	r0, #0	; 0x0
        1e3e94:	e5a7000c 	str	r0, [r7, #12]!	; fField12
        1e3e98:	e28dd008 	add	sp, sp, #8	; 0x8
        1e3e9c:	e594700c 	ldr	r7, [r4, #12]	; fField12
        1e3ea0:	e3370000 	teq	r7, #0	; 0x0
        1e3ea4:	0a000002 	beq	1e3eb4 <TDMAChannel::Produce(void *, long *)+0x240>
        1e3ea8:	e5950000 	ldr	r0, [r5]
        1e3eac:	e1580000 	cmp	r8, r0
        1e3eb0:	baffff82 	blt	1e3cc0 <TDMAChannel::Produce(void *, long *)+0x4c>
        1e3eb4:	e3c80003 	bic	r0, r8, #3	; 0x3
        1e3eb8:	e5850000 	str	r0, [r5]
        1e3ebc:	e3a00000 	mov	r0, #0	; 0x0
        1e3ec0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TDMAChannel::Consume(void *, long *)
 * Address: 001e3ec4
 */
TDMAChannel::Consume(void *, long *) {
    /*
        1e3ec4:	e1a0c00d 	mov	ip, sp
        1e3ec8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e3ecc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3ed0:	e1a04000 	mov	r4, r0
        1e3ed4:	e1a06001 	mov	r6, r1
        1e3ed8:	e1a05002 	mov	r5, r2
        1e3edc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1e3ee0:	e3300000 	teq	r0, #0	; 0x0
        1e3ee4:	03a00000 	moveq	r0, #0	; 0x0
        1e3ee8:	05850000 	streq	r0, [r5]
        1e3eec:	03a00fb2 	moveq	r0, #712	; 0x2c8
        1e3ef0:	02400b1e 	subeq	r0, r0, #30720	; 0x7800
        1e3ef4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1e3ef8:	e3a08000 	mov	r8, #0	; 0x0
        1e3efc:	e5950000 	ldr	r0, [r5]
        1e3f00:	e3c00003 	bic	r0, r0, #3	; 0x3
        1e3f04:	e284a034 	add	sl, r4, #52	; 0x34
        1e3f08:	e5850000 	str	r0, [r5]
        1e3f0c:	ea000071 	b	1e40d8 <TDMAChannel::Consume(void *, long *)+0x214>
        1e3f10:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e3f14:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1e3f18:	e597102c 	ldr	r1, [r7, #44]
        1e3f1c:	e0410000 	sub	r0, r1, r0
        1e3f20:	e58d0004 	str	r0, [sp, #4]
        1e3f24:	e5950000 	ldr	r0, [r5]
        1e3f28:	e040e008 	sub	lr, r0, r8
        1e3f2c:	e58de000 	str	lr, [sp]
        1e3f30:	e5971018 	ldr	r1, [r7, #24]
        1e3f34:	e3510000 	cmp	r1, #0	; 0x0
        1e3f38:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1e3f3c:	b2811007 	addlt	r1, r1, #7	; 0x7
        1e3f40:	e1a011c1 	mov	r1, r1, asr #3
        1e3f44:	e0000091 	mul	r0, r1, r0
        1e3f48:	e5971010 	ldr	r1, [r7, #16]
        1e3f4c:	e0800001 	add	r0, r0, r1
        1e3f50:	e59411f0 	ldr	r1, [r4, #496]	; fField496
        1e3f54:	e1b02001 	movs	r2, r1
        1e3f58:	42811007 	addmi	r1, r1, #7	; 0x7
        1e3f5c:	e1a011c1 	mov	r1, r1, asr #3
        1e3f60:	e0216198 	mla	r1, r8, r1, r6
        1e3f64:	e59431e0 	ldr	r3, [r4, #480]	; fField480
        1e3f68:	e3330000 	teq	r3, #0	; 0x0
        1e3f6c:	0a000018 	beq	1e3fd4 <TDMAChannel::Consume(void *, long *)+0x110>
        1e3f70:	e52d001c 	str	r0, [sp, -#28]!
        1e3f74:	e59401fc 	ldr	r0, [r4, #508]	; fField508
        1e3f78:	e58d0004 	str	r0, [sp, #4]
        1e3f7c:	e59401f8 	ldr	r0, [r4, #504]	; fField504
        1e3f80:	e58d0008 	str	r0, [sp, #8]
        1e3f84:	e58d100c 	str	r1, [sp, #12]	; fField12
        1e3f88:	e59401f4 	ldr	r0, [r4, #500]	; fField500
        1e3f8c:	e58d0010 	str	r0, [sp, #16]
        1e3f90:	e59401f0 	ldr	r0, [r4, #496]	; fField496
        1e3f94:	e58d0014 	str	r0, [sp, #20]	; fField20
        1e3f98:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e3f9c:	e58d0018 	str	r0, [sp, #24]
        1e3fa0:	e28d201c 	add	r2, sp, #28	; 0x1c
        1e3fa4:	e28d1020 	add	r1, sp, #32	; 0x20
        1e3fa8:	e1a0000d 	mov	r0, sp
        1e3fac:	e1a0e00f 	mov	lr, pc
        1e3fb0:	e594f1e0 	ldr	pc, [r4, #480]	; fField480
        1e3fb4:	e597100c 	ldr	r1, [r7, #12]	; fField12
        1e3fb8:	e59d0020 	ldr	r0, [sp, #32]
        1e3fbc:	e0810000 	add	r0, r1, r0
        1e3fc0:	e587000c 	str	r0, [r7, #12]	; fField12
        1e3fc4:	e59d001c 	ldr	r0, [sp, #28]
        1e3fc8:	e0888000 	add	r8, r8, r0
        1e3fcc:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e3fd0:	ea000029 	b	1e407c <TDMAChannel::Consume(void *, long *)+0x1b8>
        1e3fd4:	e59431dc 	ldr	r3, [r4, #476]	; fField476
        1e3fd8:	e3330000 	teq	r3, #0	; 0x0
        1e3fdc:	0a00000a 	beq	1e400c <TDMAChannel::Consume(void *, long *)+0x148>
        1e3fe0:	e5840040 	str	r0, [r4, #64]	; fField64
        1e3fe4:	e1a0000a 	mov	r0, sl
        1e3fe8:	e1a0200d 	mov	r2, sp
        1e3fec:	e5841054 	str	r1, [r4, #84]	; fField84
        1e3ff0:	e28d1004 	add	r1, sp, #4	; 0x4
        1e3ff4:	e1a0e00f 	mov	lr, pc
        1e3ff8:	e1a0f003 	mov	pc, r3
        1e3ffc:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1e4000:	e59d1004 	ldr	r1, [sp, #4]
        1e4004:	e0800001 	add	r0, r0, r1
        1e4008:	ea00000a 	b	1e4038 <TDMAChannel::Consume(void *, long *)+0x174>
        1e400c:	e594c1e8 	ldr	ip, [r4, #488]	; fField488
        1e4010:	e33c0000 	teq	ip, #0	; 0x0
        1e4014:	0a00000b 	beq	1e4048 <TDMAChannel::Consume(void *, long *)+0x184>
        1e4018:	e1a0300d 	mov	r3, sp
        1e401c:	e1a02001 	mov	r2, r1
        1e4020:	e28d1004 	add	r1, sp, #4	; 0x4
        1e4024:	e1a0e00f 	mov	lr, pc
        1e4028:	e1a0f00c 	mov	pc, ip
        1e402c:	e597100c 	ldr	r1, [r7, #12]	; fField12
        1e4030:	e59d0004 	ldr	r0, [sp, #4]
        1e4034:	e0810000 	add	r0, r1, r0
        1e4038:	e587000c 	str	r0, [r7, #12]	; fField12
        1e403c:	e59d0000 	ldr	r0, [sp]
        1e4040:	e0888000 	add	r8, r8, r0
        1e4044:	ea00000c 	b	1e407c <TDMAChannel::Consume(void *, long *)+0x1b8>
        1e4048:	e59d3004 	ldr	r3, [sp, #4]
        1e404c:	e15e0003 	cmp	lr, r3
        1e4050:	a1a09003 	movge	r9, r3
        1e4054:	b1a0900e 	movlt	r9, lr
        1e4058:	e3520000 	cmp	r2, #0	; 0x0
        1e405c:	b2822007 	addlt	r2, r2, #7	; 0x7
        1e4060:	e1a021c2 	mov	r2, r2, asr #3
        1e4064:	e0020299 	mul	r2, r9, r2
        1e4068:	eb674278 	bl	1bb4a50 <$memcpy>
        1e406c:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1e4070:	e0800009 	add	r0, r0, r9
        1e4074:	e0888009 	add	r8, r8, r9
        1e4078:	e587000c 	str	r0, [r7, #12]	; fField12
        1e407c:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1e4080:	e597102c 	ldr	r1, [r7, #44]
        1e4084:	e1300001 	teq	r0, r1
        1e4088:	1a000011 	bne	1e40d4 <TDMAChannel::Consume(void *, long *)+0x210>
        1e408c:	e1a01007 	mov	r1, r7
        1e4090:	e1a00004 	mov	r0, r4
        1e4094:	e5942000 	ldr	r2, [r4]
        1e4098:	e1a0e00f 	mov	lr, pc
        1e409c:	e282f020 	add	pc, r2, #32	; 0x20
        1e40a0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e40a4:	e5901000 	ldr	r1, [r0]
        1e40a8:	e1a00004 	mov	r0, r4
        1e40ac:	e5942000 	ldr	r2, [r4]
        1e40b0:	e1a0e00f 	mov	lr, pc
        1e40b4:	e282f01c 	add	pc, r2, #28	; 0x1c
        1e40b8:	e1a01007 	mov	r1, r7
        1e40bc:	e1a00004 	mov	r0, r4
        1e40c0:	e3a03000 	mov	r3, #0	; 0x0
        1e40c4:	e3a02000 	mov	r2, #0	; 0x0
        1e40c8:	e594c000 	ldr	ip, [r4]
        1e40cc:	e1a0e00f 	mov	lr, pc
        1e40d0:	e28cf018 	add	pc, ip, #24	; 0x18
        1e40d4:	e28dd008 	add	sp, sp, #8	; 0x8
        1e40d8:	e594700c 	ldr	r7, [r4, #12]	; fField12
        1e40dc:	e3370000 	teq	r7, #0	; 0x0
        1e40e0:	0a000002 	beq	1e40f0 <TDMAChannel::Consume(void *, long *)+0x22c>
        1e40e4:	e5950000 	ldr	r0, [r5]
        1e40e8:	e1580000 	cmp	r8, r0
        1e40ec:	baffff87 	blt	1e3f10 <TDMAChannel::Consume(void *, long *)+0x4c>
        1e40f0:	e3c80003 	bic	r0, r8, #3	; 0x3
        1e40f4:	e5850000 	str	r0, [r5]
        1e40f8:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        1e40fc:	e3300000 	teq	r0, #0	; 0x0
        1e4100:	03a00000 	moveq	r0, #0	; 0x0
        1e4104:	05850000 	streq	r0, [r5]
        1e4108:	e3a00000 	mov	r0, #0	; 0x0
        1e410c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

