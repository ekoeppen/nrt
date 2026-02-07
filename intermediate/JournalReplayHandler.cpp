#include "include/JournalReplayHandler.h"

/**
 * Symbol: JournalReplayHandler::__ct(void)
 * Address: 000f8e08
 */
JournalReplayHandler::JournalReplayHandler(void) {
    /*
         f8e08:	e1a0c00d 	mov	ip, sp
         f8e0c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f8e10:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8e14:	e1b04000 	movs	r4, r0
         f8e18:	1a000003 	bne	f8e2c <JournalReplayHandler::__ct(void)+0x24>
         f8e1c:	e3a00048 	mov	r0, #72	; 0x48
         f8e20:	eb6b5644 	bl	1bce738 <$__nw(unsigned int)>
         f8e24:	e1b04000 	movs	r4, r0
         f8e28:	0a000008 	beq	f8e50 <JournalReplayHandler::__ct(void)+0x48>
         f8e2c:	e2840004 	add	r0, r4, #4	; 0x4
         f8e30:	eb6b20aa 	bl	1bc10e0 <TObjectPtr::$__ct(void)>
         f8e34:	e3a00000 	mov	r0, #0	; 0x0
         f8e38:	e5c4001f 	strb	r0, [r4, #31]	; fField31
         f8e3c:	e5c4001e 	strb	r0, [r4, #30]	; fField30
         f8e40:	e5840000 	str	r0, [r4]
         f8e44:	e5c4003e 	strb	r0, [r4, #62]	; fField62
         f8e48:	e3a00001 	mov	r0, #1	; 0x1
         f8e4c:	e5c4003d 	strb	r0, [r4, #61]	; fField61
         f8e50:	e1a00004 	mov	r0, r4
         f8e54:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: JournalReplayHandler::__dt(void)
 * Address: 000f8e58
 */
JournalReplayHandler::~JournalReplayHandler(void) {
    /*
         f8e58:	e1a0c00d 	mov	ip, sp
         f8e5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f8e60:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8e64:	e1a04000 	mov	r4, r0
         f8e68:	e1a05001 	mov	r5, r1
         f8e6c:	e5900000 	ldr	r0, [r0]
         f8e70:	e3300000 	teq	r0, #0	; 0x0
         f8e74:	1b6ba08e 	blne	1be10b4 <$DisposPtr>
         f8e78:	e2840004 	add	r0, r4, #4	; 0x4
         f8e7c:	e3a01000 	mov	r1, #0	; 0x0
         f8e80:	eb6b249e 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         f8e84:	e3150001 	tst	r5, #1	; 0x1
         f8e88:	11a00004 	movne	r0, r4
         f8e8c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f8e90:	1a6b5212 	bne	1bcd6e0 <$__dl(void *)>
         f8e94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: JournalReplayHandler::InitStroke(unsigned long, unsigned long)
 * Address: 000f98e8
 */
JournalReplayHandler::InitStroke(unsigned long, unsigned long) {
    /*
         f98e8:	e1a0c00d 	mov	ip, sp
         f98ec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f98f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f98f4:	e1a04000 	mov	r4, r0
         f98f8:	e1a06001 	mov	r6, r1
         f98fc:	e1a05002 	mov	r5, r2
         f9900:	e590001e 	ldr	r0, [r0, #30]	; fField30
         f9904:	e1a00840 	mov	r0, r0, asr #16
         f9908:	e3a07000 	mov	r7, #0	; 0x0
         f990c:	e3300001 	teq	r0, #1	; 0x1
         f9910:	1a00000d 	bne	f994c <JournalReplayHandler::InitStroke(unsigned long, unsigned long)+0x64>
         f9914:	e5c47019 	strb	r7, [r4, #25]	; fField25
         f9918:	e5c47018 	strb	r7, [r4, #24]	; fField24
         f991c:	e59f001c 	ldr	r0, [pc, #1c]	; f9940 <JournalReplayHandler::InitStroke(unsigned long, unsigned long)+0x58>
         f9920:	e5900008 	ldr	r0, [r0, #8]	; fField8
         f9924:	e5900008 	ldr	r0, [r0, #8]	; fField8
         f9928:	e1a00840 	mov	r0, r0, asr #16
         f992c:	e3500001 	cmp	r0, #1	; 0x1
         f9930:	da000003 	ble	f9944 <JournalReplayHandler::InitStroke(unsigned long, unsigned long)+0x5c>
         f9934:	eb6be3f9 	bl	1bf2920 <$Ticks(void)>
         f9938:	e2800f4b 	add	r0, r0, #300	; 0x12c
         f993c:	ea000001 	b	f9948 <JournalReplayHandler::InitStroke(unsigned long, unsigned long)+0x60>
         f9940:	0c100fb8 	ldceq	15, cr0, [r0], -#736
         f9944:	eb6be3f5 	bl	1bf2920 <$Ticks(void)>
         f9948:	e5840028 	str	r0, [r4, #40]	; fField40
         f994c:	e5845014 	str	r5, [r4, #20]	; fField20
         f9950:	e5846010 	str	r6, [r4, #16]	; fField16
         f9954:	e5940000 	ldr	r0, [r4]
         f9958:	e2802008 	add	r2, r0, #8	; 0x8
         f995c:	e8920006 	ldmia	r2, {r1, r2}
         f9960:	e0423001 	sub	r3, r2, r1
         f9964:	e5843024 	str	r3, [r4, #36]	; fField36
         f9968:	e5901004 	ldr	r1, [r0, #4]
         f996c:	e5841020 	str	r1, [r4, #32]	; fField32
         f9970:	e1a02001 	mov	r2, r1
         f9974:	e5847034 	str	r7, [r4, #52]	; fField52
         f9978:	e594c028 	ldr	ip, [r4, #40]	; fField40
         f997c:	e5900008 	ldr	r0, [r0, #8]	; fField8
         f9980:	e08c0000 	add	r0, ip, r0
         f9984:	e584002c 	str	r0, [r4, #44]	; fField44
         f9988:	e5c4703c 	strb	r7, [r4, #60]	; fField60
         f998c:	e351003c 	cmp	r1, #60	; 0x3c
         f9990:	9a00000a 	bls	f99c0 <JournalReplayHandler::InitStroke(unsigned long, unsigned long)+0xd8>
         f9994:	e0621202 	rsb	r1, r2, r2, lsl #4
         f9998:	e1a01101 	mov	r1, r1, lsl #2
         f999c:	e1a00003 	mov	r0, r3
         f99a0:	eb6ae3e8 	bl	1bb2948 <$__rt_udiv>
         f99a4:	e594101a 	ldr	r1, [r4, #26]	; fField26
         f99a8:	e1a01841 	mov	r1, r1, asr #16
         f99ac:	e2411008 	sub	r1, r1, #8	; 0x8
         f99b0:	e1500001 	cmp	r0, r1
         f99b4:	23a00000 	movcs	r0, #0	; 0x0
         f99b8:	33a00001 	movcc	r0, #1	; 0x1
         f99bc:	e5c4003c 	strb	r0, [r4, #60]	; fField60
         f99c0:	e1a00007 	mov	r0, r7
         f99c4:	e5a47038 	str	r7, [r4, #56]!	; fField56
         f99c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: JournalReplayHandler::PlayAStroke(JournalStroke *, unsigned long, unsigned long, unsigned char)
 * Address: 000f99cc
 */
JournalReplayHandler::PlayAStroke(JournalStroke *, unsigned long, unsigned long, unsigned char) {
    /*
         f99cc:	e1a0c00d 	mov	ip, sp
         f99d0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         f99d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f99d8:	e1a04000 	mov	r4, r0
         f99dc:	e1a05001 	mov	r5, r1
         f99e0:	e1a07002 	mov	r7, r2
         f99e4:	e1a06003 	mov	r6, r3
         f99e8:	e59b0004 	ldr	r0, [fp, #4]
         f99ec:	e20000ff 	and	r0, r0, #255	; 0xff
         f99f0:	e5941000 	ldr	r1, [r4]
         f99f4:	e3310000 	teq	r1, #0	; 0x0
         f99f8:	13e00000 	mvnne	r0, #0	; 0x0
         f99fc:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f9a00:	e3300000 	teq	r0, #0	; 0x0
         f9a04:	e5959000 	ldr	r9, [r5]
         f9a08:	1a00000a 	bne	f9a38 <JournalReplayHandler::PlayAStroke(JournalStroke *, unsigned long, unsigned long, unsigned char)+0x6c>
         f9a0c:	e1a00009 	mov	r0, r9
         f9a10:	eb6ba1ca 	bl	1be2140 <$NewPtr>
         f9a14:	e1b08000 	movs	r8, r0
         f9a18:	091b6bf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         f9a1c:	0a6ba1bf 	beq	1be2120 <$MemError>
         f9a20:	e1a02009 	mov	r2, r9
         f9a24:	e1a01008 	mov	r1, r8
         f9a28:	e1a00005 	mov	r0, r5
         f9a2c:	eb6b9548 	bl	1bdef54 <$BlockMove>
         f9a30:	e5848000 	str	r8, [r4]
         f9a34:	ea000000 	b	f9a3c <JournalReplayHandler::PlayAStroke(JournalStroke *, unsigned long, unsigned long, unsigned char)+0x70>
         f9a38:	e5845000 	str	r5, [r4]
         f9a3c:	e3570000 	cmp	r7, #0	; 0x0
         f9a40:	e5b51004 	ldr	r1, [r5, #4]!
         f9a44:	93560000 	cmpls	r6, #0	; 0x0
         f9a48:	9a00000c 	bls	f9a80 <JournalReplayHandler::PlayAStroke(JournalStroke *, unsigned long, unsigned long, unsigned char)+0xb4>
         f9a4c:	e1a00a87 	mov	r0, r7, lsl #21
         f9a50:	e0802386 	add	r2, r0, r6, lsl #7
         f9a54:	e3a00000 	mov	r0, #0	; 0x0
         f9a58:	e3510000 	cmp	r1, #0	; 0x0
         f9a5c:	9a000007 	bls	f9a80 <JournalReplayHandler::PlayAStroke(JournalStroke *, unsigned long, unsigned long, unsigned char)+0xb4>
         f9a60:	e5943000 	ldr	r3, [r4]
         f9a64:	e0833100 	add	r3, r3, r0, lsl #2
         f9a68:	e5b3c010 	ldr	ip, [r3, #16]!	; fField16
         f9a6c:	e08cc002 	add	ip, ip, r2
         f9a70:	e2800001 	add	r0, r0, #1	; 0x1
         f9a74:	e1500001 	cmp	r0, r1
         f9a78:	e583c000 	str	ip, [r3]
         f9a7c:	3afffff7 	bcc	f9a60 <JournalReplayHandler::PlayAStroke(JournalStroke *, unsigned long, unsigned long, unsigned char)+0x94>
         f9a80:	e1a02006 	mov	r2, r6
         f9a84:	e1a01007 	mov	r1, r7
         f9a88:	e1a00004 	mov	r0, r4
         f9a8c:	ebffff95 	bl	f98e8 <JournalReplayHandler::InitStroke(unsigned long, unsigned long)>
         f9a90:	e3a00000 	mov	r0, #0	; 0x0
         f9a94:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: JournalReplayHandler::IsJournalReplayBusy(void)
 * Address: 000f9a98
 */
JournalReplayHandler::IsJournalReplayBusy(void) {
    /*
         f9a98:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         f9a9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: JournalReplayHandler::GetNextTabletSample(unsigned long *)
 * Address: 000f9aa0
 */
JournalReplayHandler::GetNextTabletSample(unsigned long *) {
    /*
         f9aa0:	e1a0c00d 	mov	ip, sp
         f9aa4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         f9aa8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f9aac:	e1a04000 	mov	r4, r0
         f9ab0:	e1a05001 	mov	r5, r1
         f9ab4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         f9ab8:	eb6be398 	bl	1bf2920 <$Ticks(void)>
         f9abc:	e1a06000 	mov	r6, r0
         f9ac0:	e3a09000 	mov	r9, #0	; 0x0
         f9ac4:	e3a08000 	mov	r8, #0	; 0x0
         f9ac8:	e5940000 	ldr	r0, [r4]
         f9acc:	e3300000 	teq	r0, #0	; 0x0
         f9ad0:	1a00000f 	bne	f9b14 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x74>
         f9ad4:	e5d4003e 	ldrb	r0, [r4, #62]	; fField62
         f9ad8:	e3300000 	teq	r0, #0	; 0x0
         f9adc:	0a00000f 	beq	f9b20 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x80>
         f9ae0:	e1a00004 	mov	r0, r4
         f9ae4:	eb671d7e 	bl	1ac10e4 <JournalReplayHandler::$GetNextStroke(void)>
         f9ae8:	e1b01000 	movs	r1, r0
         f9aec:	0a000007 	beq	f9b10 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x70>
         f9af0:	e3a03000 	mov	r3, #0	; 0x0
         f9af4:	e92d0008 	stmdb	sp!, {r3}
         f9af8:	e2843010 	add	r3, r4, #16	; 0x10
         f9afc:	e893000c 	ldmia	r3, {r2, r3}
         f9b00:	e1a00004 	mov	r0, r4
         f9b04:	eb672192 	bl	1ac2154 <JournalReplayHandler::$PlayAStroke(JournalStroke *, unsigned long, unsigned long, unsigned char)>
         f9b08:	e28dd004 	add	sp, sp, #4	; 0x4
         f9b0c:	ea000000 	b	f9b14 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x74>
         f9b10:	e5c4803e 	strb	r8, [r4, #62]	; fField62
         f9b14:	e594a000 	ldr	sl, [r4]
         f9b18:	e33a0000 	teq	sl, #0	; 0x0
         f9b1c:	1a000002 	bne	f9b2c <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x8c>
         f9b20:	e1a00008 	mov	r0, r8
         f9b24:	e5c4803d 	strb	r8, [r4, #61]	; fField61
         f9b28:	ea00004d 	b	f9c64 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x1c4>
         f9b2c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         f9b30:	e1500006 	cmp	r0, r6
         f9b34:	81a00008 	movhi	r0, r8
         f9b38:	8a000049 	bhi	f9c64 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x1c4>
         f9b3c:	e5941038 	ldr	r1, [r4, #56]	; fField56
         f9b40:	e5947034 	ldr	r7, [r4, #52]	; fField52
         f9b44:	e1510007 	cmp	r1, r7
         f9b48:	91500006 	cmpls	r0, r6
         f9b4c:	8a000013 	bhi	f9ba0 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x100>
         f9b50:	e5d4103c 	ldrb	r1, [r4, #60]	; fField60
         f9b54:	e3310000 	teq	r1, #0	; 0x0
         f9b58:	0a000004 	beq	f9b70 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0xd0>
         f9b5c:	e337003b 	teq	r7, #59	; 0x3b
         f9b60:	05846030 	streq	r6, [r4, #48]	; fField48
         f9b64:	0a000001 	beq	f9b70 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0xd0>
         f9b68:	e357003c 	cmp	r7, #60	; 0x3c
         f9b6c:	2a000005 	bcs	f9b88 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0xe8>
         f9b70:	e0461000 	sub	r1, r6, r0
         f9b74:	e5940020 	ldr	r0, [r4, #32]	; fField32
         f9b78:	e0010190 	mul	r1, r0, r1
         f9b7c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f9b80:	eb6ae370 	bl	1bb2948 <$__rt_udiv>
         f9b84:	ea000004 	b	f9b9c <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0xfc>
         f9b88:	e5940030 	ldr	r0, [r4, #48]	; fField48
         f9b8c:	e0461000 	sub	r1, r6, r0
         f9b90:	e3a00003 	mov	r0, #3	; 0x3
         f9b94:	eb6ae36b 	bl	1bb2948 <$__rt_udiv>
         f9b98:	e280003d 	add	r0, r0, #61	; 0x3d
         f9b9c:	e5840038 	str	r0, [r4, #56]	; fField56
         f9ba0:	e5940038 	ldr	r0, [r4, #56]	; fField56
         f9ba4:	e1570000 	cmp	r7, r0
         f9ba8:	2a000022 	bcs	f9c38 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x198>
         f9bac:	e594000a 	ldr	r0, [r4, #10]	; fField10
         f9bb0:	e1a00840 	mov	r0, r0, asr #16
         f9bb4:	e3300001 	teq	r0, #1	; 0x1
         f9bb8:	1a000005 	bne	f9bd4 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x134>
         f9bbc:	e08a0107 	add	r0, sl, r7, lsl #2
         f9bc0:	e2800010 	add	r0, r0, #16	; 0x10
         f9bc4:	e1a01005 	mov	r1, r5
         f9bc8:	e3a02004 	mov	r2, #4	; 0x4
         f9bcc:	eb6b94e0 	bl	1bdef54 <$BlockMove>
         f9bd0:	ea00000f 	b	f9c14 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x174>
         f9bd4:	e3300002 	teq	r0, #2	; 0x2
         f9bd8:	1a00000d 	bne	f9c14 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x174>
         f9bdc:	e0870087 	add	r0, r7, r7, lsl #1
         f9be0:	e08a0100 	add	r0, sl, r0, lsl #2
         f9be4:	e2800010 	add	r0, r0, #16	; 0x10
         f9be8:	e1a0100d 	mov	r1, sp
         f9bec:	e3a0200c 	mov	r2, #12	; 0xc
         f9bf0:	eb6b94d7 	bl	1bdef54 <$BlockMove>
         f9bf4:	e59d0000 	ldr	r0, [sp]
         f9bf8:	e1a00280 	mov	r0, r0, lsl #5
         f9bfc:	e59d1004 	ldr	r1, [sp, #4]
         f9c00:	e18004c1 	orr	r0, r0, r1, asr #9
         f9c04:	e59d100a 	ldr	r1, [sp, #10]	; fField10
         f9c08:	e201100f 	and	r1, r1, #15	; 0xf
         f9c0c:	e1800001 	orr	r0, r0, r1
         f9c10:	e5850000 	str	r0, [r5]
         f9c14:	e5940034 	ldr	r0, [r4, #52]	; fField52
         f9c18:	e2800001 	add	r0, r0, #1	; 0x1
         f9c1c:	e5840034 	str	r0, [r4, #52]	; fField52
         f9c20:	e5d4103c 	ldrb	r1, [r4, #60]	; fField60
         f9c24:	e3310000 	teq	r1, #0	; 0x0
         f9c28:	0a000001 	beq	f9c34 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x194>
         f9c2c:	e330003b 	teq	r0, #59	; 0x3b
         f9c30:	05846030 	streq	r6, [r4, #48]	; fField48
         f9c34:	e3a09001 	mov	r9, #1	; 0x1
         f9c38:	e5940034 	ldr	r0, [r4, #52]	; fField52
         f9c3c:	e5941000 	ldr	r1, [r4]
         f9c40:	e5911004 	ldr	r1, [r1, #4]
         f9c44:	e1500001 	cmp	r0, r1
         f9c48:	3a000004 	bcc	f9c60 <JournalReplayHandler::GetNextTabletSample(unsigned long *)+0x1c0>
         f9c4c:	e3a0000e 	mov	r0, #14	; 0xe
         f9c50:	e5850000 	str	r0, [r5]
         f9c54:	e5940000 	ldr	r0, [r4]
         f9c58:	eb6b9d15 	bl	1be10b4 <$DisposPtr>
         f9c5c:	e5848000 	str	r8, [r4]
         f9c60:	e1a00009 	mov	r0, r9
         f9c64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: JournalReplayHandler::ParseStrokeFileHeader(void)
 * Address: 000f9c68
 */
JournalReplayHandler::ParseStrokeFileHeader(void) {
    /*
         f9c68:	e1a0c00d 	mov	ip, sp
         f9c6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f9c70:	e24cb004 	sub	fp, ip, #4	; 0x4
         f9c74:	e1a04000 	mov	r4, r0
         f9c78:	e2800004 	add	r0, r0, #4	; 0x4
         f9c7c:	eb6b2124 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         f9c80:	e3a01001 	mov	r1, #1	; 0x1
         f9c84:	e5c4103e 	strb	r1, [r4, #62]	; fField62
         f9c88:	e5901004 	ldr	r1, [r0, #4]
         f9c8c:	e1a01821 	mov	r1, r1, lsr #16
         f9c90:	e5c41009 	strb	r1, [r4, #9]	; fField9
         f9c94:	e1a01441 	mov	r1, r1, asr #8
         f9c98:	e5c41008 	strb	r1, [r4, #8]	; fField8
         f9c9c:	e5901002 	ldr	r1, [r0, #2]
         f9ca0:	e1a01821 	mov	r1, r1, lsr #16
         f9ca4:	e5c4100b 	strb	r1, [r4, #11]	; fField11
         f9ca8:	e1a01441 	mov	r1, r1, asr #8
         f9cac:	e5c4100a 	strb	r1, [r4, #10]	; fField10
         f9cb0:	e3a01000 	mov	r1, #0	; 0x0
         f9cb4:	e5c4101f 	strb	r1, [r4, #31]	; fField31
         f9cb8:	e5c4101e 	strb	r1, [r4, #30]	; fField30
         f9cbc:	e5942008 	ldr	r2, [r4, #8]	; fField8
         f9cc0:	e1a02822 	mov	r2, r2, lsr #16
         f9cc4:	e5c4200d 	strb	r2, [r4, #13]	; fField13
         f9cc8:	e1a02442 	mov	r2, r2, asr #8
         f9ccc:	e5c4200c 	strb	r2, [r4, #12]	; fField12
         f9cd0:	e5902006 	ldr	r2, [r0, #6]
         f9cd4:	e1a02822 	mov	r2, r2, lsr #16
         f9cd8:	e5c4201b 	strb	r2, [r4, #27]	; fField27
         f9cdc:	e1a02442 	mov	r2, r2, asr #8
         f9ce0:	e5c4201a 	strb	r2, [r4, #26]	; fField26
         f9ce4:	e5900008 	ldr	r0, [r0, #8]	; fField8
         f9ce8:	e1a00820 	mov	r0, r0, lsr #16
         f9cec:	e5c4001d 	strb	r0, [r4, #29]	; fField29
         f9cf0:	e1a00440 	mov	r0, r0, asr #8
         f9cf4:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         f9cf8:	e3a00018 	mov	r0, #24	; 0x18
         f9cfc:	e284403c 	add	r4, r4, #60	; 0x3c
         f9d00:	e9a40003 	stmib	r4!, {r0, r1}
         f9d04:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: JournalReplayHandler::SetStrokesToPlay(short)
 * Address: 000f9d08
 */
JournalReplayHandler::SetStrokesToPlay(short) {
    /*
         f9d08:	e1a02801 	mov	r2, r1, lsl #16
         f9d0c:	e1a02842 	mov	r2, r2, asr #16
         f9d10:	e5901008 	ldr	r1, [r0, #8]	; fField8
         f9d14:	e1a01841 	mov	r1, r1, asr #16
         f9d18:	e3520000 	cmp	r2, #0	; 0x0
         f9d1c:	c1510002 	cmpgt	r1, r2
         f9d20:	d5c0100d 	strleb	r1, [r0, #13]	; fField13
         f9d24:	d1a01441 	movle	r1, r1, asr #8
         f9d28:	c5c0200d 	strgtb	r2, [r0, #13]	; fField13
         f9d2c:	c1a01442 	movgt	r1, r2, asr #8
         f9d30:	e5c0100c 	strb	r1, [r0, #12]	; fField12
         f9d34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: JournalReplayHandler::GetNextStroke(void)
 * Address: 000f9d38
 */
JournalReplayHandler::GetNextStroke(void) {
    /*
         f9d38:	e1a0c00d 	mov	ip, sp
         f9d3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f9d40:	e24cb004 	sub	fp, ip, #4	; 0x4
         f9d44:	e1a04000 	mov	r4, r0
         f9d48:	e3a00000 	mov	r0, #0	; 0x0
         f9d4c:	e594201e 	ldr	r2, [r4, #30]	; fField30
         f9d50:	e1a02842 	mov	r2, r2, asr #16
         f9d54:	e594100c 	ldr	r1, [r4, #12]	; fField12
         f9d58:	e1520841 	cmp	r2, r1, asr #16
         f9d5c:	a91ba810 	ldmgedb	fp, {r4, fp, sp, pc}
         f9d60:	e2840004 	add	r0, r4, #4	; 0x4
         f9d64:	eb6b20ea 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         f9d68:	e5942040 	ldr	r2, [r4, #64]	; fField64
         f9d6c:	e0800002 	add	r0, r0, r2
         f9d70:	e5941044 	ldr	r1, [r4, #68]	; fField68
         f9d74:	e0800001 	add	r0, r0, r1
         f9d78:	e0821001 	add	r1, r2, r1
         f9d7c:	e5841040 	str	r1, [r4, #64]	; fField64
         f9d80:	e5901000 	ldr	r1, [r0]
         f9d84:	e5841044 	str	r1, [r4, #68]	; fField68
         f9d88:	e594101e 	ldr	r1, [r4, #30]	; fField30
         f9d8c:	e1a01821 	mov	r1, r1, lsr #16
         f9d90:	e2811001 	add	r1, r1, #1	; 0x1
         f9d94:	e5c4101f 	strb	r1, [r4, #31]	; fField31
         f9d98:	e1a01441 	mov	r1, r1, asr #8
         f9d9c:	e5c4101e 	strb	r1, [r4, #30]	; fField30
         f9da0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

