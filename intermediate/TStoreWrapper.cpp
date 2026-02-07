#include "include/TStoreWrapper.h"

/**
 * Symbol: TStoreWrapper::__ct(TStore *)
 * Address: 0035392c
 */
TStoreWrapper::TStoreWrapper(TStore *) {
    /*
        35392c:	e1a0c00d 	mov	ip, sp
        353930:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        353934:	e24cb004 	sub	fp, ip, #4	; 0x4
        353938:	e1b04000 	movs	r4, r0
        35393c:	e1a05001 	mov	r5, r1
        353940:	1a000005 	bne	35395c <TStoreWrapper::__ct(TStore *)+0x30>
        353944:	e3a00098 	mov	r0, #152	; 0x98
        353948:	eb61eb7a 	bl	1bce738 <$__nw(unsigned int)>
        35394c:	e1b04000 	movs	r4, r0
        353950:	1a000001 	bne	35395c <TStoreWrapper::__ct(TStore *)+0x30>
        353954:	e1a00004 	mov	r0, r4
        353958:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        35395c:	e3a00002 	mov	r0, #2	; 0x2
        353960:	eb61b9f9 	bl	1bc214c <$AllocateRefHandle(long)>
        353964:	e3a07000 	mov	r7, #0	; 0x0
        353968:	e5840008 	str	r0, [r4, #8]	; fField8
        35396c:	e5a07004 	str	r7, [r0, #4]!	; fField4
        353970:	e3a00002 	mov	r0, #2	; 0x2
        353974:	eb61b9f4 	bl	1bc214c <$AllocateRefHandle(long)>
        353978:	e5840030 	str	r0, [r4, #48]	; fField48
        35397c:	e5a07004 	str	r7, [r0, #4]!	; fField4
        353980:	e2840080 	add	r0, r4, #128	; 0x80
        353984:	eb5ba10e 	bl	1a3bdc4 <TNodeCache::$__ct(void)>
        353988:	e24dd008 	sub	sp, sp, #8	; 0x8
        35398c:	e5c47090 	strb	r7, [r4, #144]	; fField144
        353990:	e584507c 	str	r5, [r4, #124]	; fField124
        353994:	e5847000 	str	r7, [r4]
        353998:	e5847004 	str	r7, [r4, #4]	; fField4
        35399c:	e2846008 	add	r6, r4, #8	; 0x8
        3539a0:	e3a05012 	mov	r5, #18	; 0x12
        3539a4:	e1a00005 	mov	r0, r5
        3539a8:	eb61b9e7 	bl	1bc214c <$AllocateRefHandle(long)>
        3539ac:	e58d0000 	str	r0, [sp]
        3539b0:	e1a0000d 	mov	r0, sp
        3539b4:	e3a01008 	mov	r1, #8	; 0x8
        3539b8:	eb61b9de 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3539bc:	e5961000 	ldr	r1, [r6]
        3539c0:	e5810000 	str	r0, [r1]
        3539c4:	e59d0000 	ldr	r0, [sp]
        3539c8:	eb61bdfb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3539cc:	e2846030 	add	r6, r4, #48	; 0x30
        3539d0:	e1a00005 	mov	r0, r5
        3539d4:	eb61b9dc 	bl	1bc214c <$AllocateRefHandle(long)>
        3539d8:	e58d0004 	str	r0, [sp, #4]	; fField4
        3539dc:	e28d0004 	add	r0, sp, #4	; 0x4
        3539e0:	e3a01010 	mov	r1, #16	; 0x10
        3539e4:	eb61b9d3 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3539e8:	e5961000 	ldr	r1, [r6]
        3539ec:	e5810000 	str	r0, [r1]
        3539f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3539f4:	eb61bdf0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3539f8:	e3a00000 	mov	r0, #0	; 0x0
        3539fc:	e3e01000 	mvn	r1, #0	; 0x0
        353a00:	e0842100 	add	r2, r4, r0, lsl #2
        353a04:	e2800001 	add	r0, r0, #1	; 0x1
        353a08:	e3500008 	cmp	r0, #8	; 0x8
        353a0c:	e5a2100c 	str	r1, [r2, #12]!
        353a10:	bafffffa 	blt	353a00 <TStoreWrapper::__ct(TStore *)+0xd4>
        353a14:	e3a00000 	mov	r0, #0	; 0x0
        353a18:	e584702c 	str	r7, [r4, #44]	; fField44
        353a1c:	e0842100 	add	r2, r4, r0, lsl #2
        353a20:	e2800001 	add	r0, r0, #1	; 0x1
        353a24:	e3500010 	cmp	r0, #16	; 0x10
        353a28:	e5a21034 	str	r1, [r2, #52]!
        353a2c:	bafffffa 	blt	353a1c <TStoreWrapper::__ct(TStore *)+0xf0>
        353a30:	e5847078 	str	r7, [r4, #120]	; fField120
        353a34:	e5847074 	str	r7, [r4, #116]	; fField116
        353a38:	e5847094 	str	r7, [r4, #148]	; fField148
        353a3c:	e28dd008 	add	sp, sp, #8	; 0x8
        353a40:	eaffffc3 	b	353954 <TStoreWrapper::__ct(TStore *)+0x28>
    */
}

/**
 * Symbol: TStoreWrapper::__dt(void)
 * Address: 00353ae4
 */
TStoreWrapper::~TStoreWrapper(void) {
    /*
        353ae4:	e1a0c00d 	mov	ip, sp
        353ae8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        353aec:	e24cb004 	sub	fp, ip, #4	; 0x4
        353af0:	e1a04000 	mov	r4, r0
        353af4:	e1a05001 	mov	r5, r1
        353af8:	e5900000 	ldr	r0, [r0]
        353afc:	e3300000 	teq	r0, #0	; 0x0
        353b00:	1b61e6f6 	blne	1bcd6e0 <$__dl(void *)>
        353b04:	e5940004 	ldr	r0, [r4, #4]	; fField4
        353b08:	e3300000 	teq	r0, #0	; 0x0
        353b0c:	1b61e6f3 	blne	1bcd6e0 <$__dl(void *)>
        353b10:	e5940094 	ldr	r0, [r4, #148]	; fField148
        353b14:	e3300000 	teq	r0, #0	; 0x0
        353b18:	13a01001 	movne	r1, #1	; 0x1
        353b1c:	1b5bd65b 	blne	1a49490 <TEphemeralTracker::$__dt(void)>
        353b20:	e2840080 	add	r0, r4, #128	; 0x80
        353b24:	e3a01000 	mov	r1, #0	; 0x0
        353b28:	eb5bda89 	bl	1a4a554 <TNodeCache::$__dt(void)>
        353b2c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        353b30:	eb61bda1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        353b34:	e5940008 	ldr	r0, [r4, #8]	; fField8
        353b38:	eb61bd9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        353b3c:	e3150001 	tst	r5, #1	; 0x1
        353b40:	11a00004 	movne	r0, r4
        353b44:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        353b48:	1a61e6e4 	bne	1bcd6e0 <$__dl(void *)>
        353b4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWrapper::Dirty(void)
 * Address: 00353b50
 */
TStoreWrapper::Dirty(void) {
    /*
        353b50:	e1a0c00d 	mov	ip, sp
        353b54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        353b58:	e24cb004 	sub	fp, ip, #4	; 0x4
        353b5c:	e1a04000 	mov	r4, r0
        353b60:	e3a00001 	mov	r0, #1	; 0x1
        353b64:	eb00000d 	bl	353ba0 <AskForFlush(unsigned char)>
        353b68:	e5d40090 	ldrb	r0, [r4, #144]	; fField144
        353b6c:	e3300000 	teq	r0, #0	; 0x0
        353b70:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        353b74:	e3a00001 	mov	r0, #1	; 0x1
        353b78:	e5c40090 	strb	r0, [r4, #144]	; fField144
        353b7c:	e1a00004 	mov	r0, r4
        353b80:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        353b84:	ea5bf32f 	b	1a50848 <TStoreWrapper::$LockStore(void)>
    */
}

/**
 * Symbol: TStoreWrapper::SparklingClean(void)
 * Address: 00353b88
 */
TStoreWrapper::SparklingClean(void) {
    /*
        353b88:	e5d01090 	ldrb	r1, [r0, #144]	; fField144
        353b8c:	e3310000 	teq	r1, #0	; 0x0
        353b90:	13a01000 	movne	r1, #0	; 0x0
        353b94:	15c01090 	strneb	r1, [r0, #144]	; fField144
        353b98:	1a5bf73a 	bne	1a51888 <TStoreWrapper::$UnlockStore(void)>
        353b9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)
 * Address: 00353bb0
 */
TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *) {
    /*
        353bb0:	e1a0c00d 	mov	ip, sp
        353bb4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        353bb8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        353bbc:	e24cb014 	sub	fp, ip, #20	; 0x14
        353bc0:	e1a05001 	mov	r5, r1
        353bc4:	e1a04003 	mov	r4, r3
        353bc8:	e20200ff 	and	r0, r2, #255	; 0xff
        353bcc:	e59ba014 	ldr	sl, [fp, #20]
        353bd0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        353bd4:	e24dd008 	sub	sp, sp, #8	; 0x8
        353bd8:	e59f1098 	ldr	r1, [pc, #98]	; 353c78 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0xc8>
        353bdc:	e59f0098 	ldr	r0, [pc, #98]	; 353c7c <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0xcc>
        353be0:	e5932000 	ldr	r2, [r3]
        353be4:	e08a3102 	add	r3, sl, r2, lsl #2
        353be8:	e58d3000 	str	r3, [sp]
        353bec:	e3a03000 	mov	r3, #0	; 0x0
        353bf0:	e3a09000 	mov	r9, #0	; 0x0
        353bf4:	e3a07002 	mov	r7, #2	; 0x2
        353bf8:	e2522001 	subs	r2, r2, #1	; 0x1
        353bfc:	e5843000 	str	r3, [r4]
        353c00:	e58d2004 	str	r2, [sp, #4]	; fField4
        353c04:	4a000042 	bmi	353d14 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x164>
        353c08:	e5950000 	ldr	r0, [r5]
        353c0c:	e1a06000 	mov	r6, r0
        353c10:	eb61d20f 	bl	1bc8454 <$SymbolHash(long)>
        353c14:	e1a08000 	mov	r8, r0
        353c18:	e59fc060 	ldr	ip, [pc, #60]	; 353c80 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0xd0>
        353c1c:	e130000c 	teq	r0, ip
        353c20:	1a000006 	bne	353c40 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x90>
        353c24:	e59f0058 	ldr	r0, [pc, #58]	; 353c84 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0xd4>
        353c28:	e5900000 	ldr	r0, [r0]
        353c2c:	e5901000 	ldr	r1, [r0]
        353c30:	e1a00006 	mov	r0, r6
        353c34:	eb61d205 	bl	1bc8450 <$SymbolCompare__FlT1>
        353c38:	e3300000 	teq	r0, #0	; 0x0
        353c3c:	0a00002f 	beq	353d00 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x150>
        353c40:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        353c44:	e3300000 	teq	r0, #0	; 0x0
        353c48:	0a000019 	beq	353cb4 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x104>
        353c4c:	e59fc024 	ldr	ip, [pc, #24]	; 353c78 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0xc8>
        353c50:	e138000c 	teq	r8, ip
        353c54:	1a00000c 	bne	353c8c <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0xdc>
        353c58:	e59f0028 	ldr	r0, [pc, #28]	; 353c88 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0xd8>
        353c5c:	e5900000 	ldr	r0, [r0]
        353c60:	e5901000 	ldr	r1, [r0]
        353c64:	e1a00006 	mov	r0, r6
        353c68:	eb61d1f8 	bl	1bc8450 <$SymbolCompare__FlT1>
        353c6c:	e3300000 	teq	r0, #0	; 0x0
        353c70:	1a00000f 	bne	353cb4 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x104>
        353c74:	ea000021 	b	353d00 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x150>
        353c78:	f33529eb 	teqnv	r5, #3850240	; 0x3ac000
        353c7c:	6ac9bf7e 	bvs	ff5c3a7c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd9b3224>
        353c80:	6622439b 	undefined
        353c84:	00685390 	streqb	r5, [r8], -#48	; fField48
        353c88:	006853d0 	ldreqd	r5, [r8], -#48	; fField48
        353c8c:	e51fc018 	ldr	ip, [pc, #ffffffe8]	; 353c7c <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0xcc>
        353c90:	e138000c 	teq	r8, ip
        353c94:	1a000006 	bne	353cb4 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x104>
        353c98:	e59f00a4 	ldr	r0, [pc, #a4]	; 353d44 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x194>
        353c9c:	e5900000 	ldr	r0, [r0]
        353ca0:	e5901000 	ldr	r1, [r0]
        353ca4:	e1a00006 	mov	r0, r6
        353ca8:	eb61d1e8 	bl	1bc8450 <$SymbolCompare__FlT1>
        353cac:	e3300000 	teq	r0, #0	; 0x0
        353cb0:	0a000012 	beq	353d00 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x150>
        353cb4:	e0290008 	eor	r0, r9, r8
        353cb8:	e5941000 	ldr	r1, [r4]
        353cbc:	e1a09170 	mov	r9, r0, ror r1
        353cc0:	e1a00006 	mov	r0, r6
        353cc4:	eb61d1e3 	bl	1bc8458 <$SymbolName(long)>
        353cc8:	e1a08000 	mov	r8, r0
        353ccc:	eb618777 	bl	1bb5ab0 <$strlen>
        353cd0:	e2806001 	add	r6, r0, #1	; 0x1
        353cd4:	e59d0000 	ldr	r0, [sp]
        353cd8:	e0800007 	add	r0, r0, r7
        353cdc:	e1a02006 	mov	r2, r6
        353ce0:	e1a01008 	mov	r1, r8
        353ce4:	eb618359 	bl	1bb4a50 <$memcpy>
        353ce8:	e0877006 	add	r7, r7, r6
        353cec:	e5950004 	ldr	r0, [r5, #4]	; fField4
        353cf0:	e48a0004 	str	r0, [sl], #4	; fField4
        353cf4:	e5940000 	ldr	r0, [r4]
        353cf8:	e2800001 	add	r0, r0, #1	; 0x1
        353cfc:	e5840000 	str	r0, [r4]
        353d00:	e2855008 	add	r5, r5, #8	; 0x8
        353d04:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        353d08:	e2500001 	subs	r0, r0, #1	; 0x1
        353d0c:	e58d0004 	str	r0, [sp, #4]	; fField4
        353d10:	5affffbc 	bpl	353c08 <TStoreWrapper::AddMap(SortedMapTag *, unsigned char, long *, long *)+0x58>
        353d14:	e5940000 	ldr	r0, [r4]
        353d18:	e59d2000 	ldr	r2, [sp]
        353d1c:	e5c20001 	strb	r0, [r2, #1]
        353d20:	e1a00440 	mov	r0, r0, asr #8
        353d24:	e5c20000 	strb	r0, [r2]
        353d28:	e1a03007 	mov	r3, r7
        353d2c:	e1a01009 	mov	r1, r9
        353d30:	e59d2000 	ldr	r2, [sp]
        353d34:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        353d38:	e5900000 	ldr	r0, [r0]
        353d3c:	eb61c14d 	bl	1bc4278 <TStoreHashTable::$Insert(unsigned long, char *, long)>
        353d40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        353d44:	00685360 	rsbeq	r5, r8, r0, ror #6
    */
}

/**
 * Symbol: TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)
 * Address: 00353d48
 */
TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **) {
    /*
        353d48:	e1a0c00d 	mov	ip, sp
        353d4c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        353d50:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        353d54:	e24cb014 	sub	fp, ip, #20	; 0x14
        353d58:	e1a05001 	mov	r5, r1
        353d5c:	e20290ff 	and	r9, r2, #255	; 0xff
        353d60:	e59ba014 	ldr	sl, [fp, #20]
        353d64:	e24ddf41 	sub	sp, sp, #260	; 0x104
        353d68:	e5910000 	ldr	r0, [r1]
        353d6c:	e5900000 	ldr	r0, [r0]
        353d70:	eb61c54d 	bl	1bc52ac <$Length(long)>
        353d74:	e58d0000 	str	r0, [sp]
        353d78:	e59f712c 	ldr	r7, [pc, #12c]	; 353eac <TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)+0x164>
        353d7c:	e3500020 	cmp	r0, #32	; 0x20
        353d80:	d28d4004 	addle	r4, sp, #4	; 0x4
        353d84:	da000008 	ble	353dac <TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)+0x64>
        353d88:	e1a00180 	mov	r0, r0, lsl #3
        353d8c:	eb61ea69 	bl	1bce738 <$__nw(unsigned int)>
        353d90:	e1b04000 	movs	r4, r0
        353d94:	1a000004 	bne	353dac <TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)+0x64>
        353d98:	e3a02000 	mov	r2, #0	; 0x0
        353d9c:	e3a010e9 	mov	r1, #233	; 0xe9
        353da0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        353da4:	e5970000 	ldr	r0, [r7]
        353da8:	eb623cfb 	bl	1be319c <$Throw>
        353dac:	e1a00005 	mov	r0, r5
        353db0:	eb61c535 	bl	1bc528c <$IsFunction(RefVar const &)>
        353db4:	e3300000 	teq	r0, #0	; 0x0
        353db8:	1a000008 	bne	353de0 <TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)+0x98>
        353dbc:	e5950000 	ldr	r0, [r5]
        353dc0:	e5900000 	ldr	r0, [r0]
        353dc4:	e59f10e4 	ldr	r1, [pc, #e4]	; 353eb0 <TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)+0x168>
        353dc8:	e5911000 	ldr	r1, [r1]
        353dcc:	e5911000 	ldr	r1, [r1]
        353dd0:	eb61c11c 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        353dd4:	e3300000 	teq	r0, #0	; 0x0
        353dd8:	03a00001 	moveq	r0, #1	; 0x1
        353ddc:	0a000000 	beq	353de4 <TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)+0x9c>
        353de0:	e3a00000 	mov	r0, #0	; 0x0
        353de4:	e20020ff 	and	r2, r0, #255	; 0xff
        353de8:	e5950000 	ldr	r0, [r5]
        353dec:	e5900000 	ldr	r0, [r0]
        353df0:	e1a01004 	mov	r1, r4
        353df4:	eb5bddfe 	bl	1a4b5f4 <$GetFrameMapTags(long, SortedMapTag *, unsigned char)>
        353df8:	e59d0000 	ldr	r0, [sp]
        353dfc:	e1a06000 	mov	r6, r0
        353e00:	e1a05004 	mov	r5, r4
        353e04:	e0848180 	add	r8, r4, r0, lsl #3
        353e08:	e1540008 	cmp	r4, r8
        353e0c:	2a000006 	bcs	353e2c <TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)+0xe4>
        353e10:	e5950000 	ldr	r0, [r5]
        353e14:	eb61d18f 	bl	1bc8458 <$SymbolName(long)>
        353e18:	eb618724 	bl	1bb5ab0 <$strlen>
        353e1c:	e0806006 	add	r6, r0, r6
        353e20:	e2855008 	add	r5, r5, #8	; 0x8
        353e24:	e1550008 	cmp	r5, r8
        353e28:	3afffff8 	bcc	353e10 <TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)+0xc8>
        353e2c:	e2860005 	add	r0, r6, #5	; 0x5
        353e30:	e1a01120 	mov	r1, r0, lsr #2
        353e34:	e59d0000 	ldr	r0, [sp]
        353e38:	e0810000 	add	r0, r1, r0
        353e3c:	e1a00100 	mov	r0, r0, lsl #2
        353e40:	eb61ea3c 	bl	1bce738 <$__nw(unsigned int)>
        353e44:	e58a0000 	str	r0, [sl]
        353e48:	e3300000 	teq	r0, #0	; 0x0
        353e4c:	1a000004 	bne	353e64 <TStoreWrapper::FrameToMapReference(RefVar const &, unsigned char, long *, long **)+0x11c>
        353e50:	e3a02000 	mov	r2, #0	; 0x0
        353e54:	e3a010e9 	mov	r1, #233	; 0xe9
        353e58:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        353e5c:	e5970000 	ldr	r0, [r7]
        353e60:	eb623ccd 	bl	1be319c <$Throw>
        353e64:	e59a3000 	ldr	r3, [sl]
        353e68:	e92d0008 	stmdb	sp!, {r3}
        353e6c:	e28d3004 	add	r3, sp, #4	; 0x4
        353e70:	e1a02009 	mov	r2, r9
        353e74:	e1a01004 	mov	r1, r4
        353e78:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        353e7c:	eb5bea21 	bl	1a4e708 <TStoreWrapper::$AddMap(SortedMapTag *, unsigned char, long *, long *)>
        353e80:	e28dd004 	add	sp, sp, #4	; 0x4
        353e84:	e1a05000 	mov	r5, r0
        353e88:	e28d0004 	add	r0, sp, #4	; 0x4
        353e8c:	e1340000 	teq	r4, r0
        353e90:	11a00004 	movne	r0, r4
        353e94:	1b61e611 	blne	1bcd6e0 <$__dl(void *)>
        353e98:	e59d0000 	ldr	r0, [sp]
        353e9c:	e59b3010 	ldr	r3, [fp, #16]
        353ea0:	e5830000 	str	r0, [r3]
        353ea4:	e1a00005 	mov	r0, r5
        353ea8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        353eac:	00371318 	eoreqs	r1, r7, r8, lsl r3
        353eb0:	00685328 	rsbeq	r5, r8, r8, lsr #6
    */
}

/**
 * Symbol: TStoreWrapper::ReferenceToMap(long)
 * Address: 00353eb4
 */
TStoreWrapper::ReferenceToMap(long) {
    /*
        353eb4:	e1a0c00d 	mov	ip, sp
        353eb8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        353ebc:	e24cb004 	sub	fp, ip, #4	; 0x4
        353ec0:	e1a04000 	mov	r4, r0
        353ec4:	e1a05001 	mov	r5, r1
        353ec8:	e24dd008 	sub	sp, sp, #8	; 0x8
        353ecc:	e3a00002 	mov	r0, #2	; 0x2
        353ed0:	eb61b89d 	bl	1bc214c <$AllocateRefHandle(long)>
        353ed4:	e3e07000 	mvn	r7, #0	; 0x0
        353ed8:	e58d0000 	str	r0, [sp]
        353edc:	e3a00000 	mov	r0, #0	; 0x0
        353ee0:	e2841008 	add	r1, r4, #8	; 0x8
        353ee4:	e58d1004 	str	r1, [sp, #4]	; fField4
        353ee8:	e0841100 	add	r1, r4, r0, lsl #2
        353eec:	e591100c 	ldr	r1, [r1, #12]
        353ef0:	e1310005 	teq	r1, r5
        353ef4:	1a000008 	bne	353f1c <TStoreWrapper::ReferenceToMap(long)+0x68>
        353ef8:	e1a07000 	mov	r7, r0
        353efc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        353f00:	e5900000 	ldr	r0, [r0]
        353f04:	e5900000 	ldr	r0, [r0]
        353f08:	e1a01007 	mov	r1, r7
        353f0c:	eb61c0d0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        353f10:	e59d1000 	ldr	r1, [sp]
        353f14:	e5810000 	str	r0, [r1]
        353f18:	ea000002 	b	353f28 <TStoreWrapper::ReferenceToMap(long)+0x74>
        353f1c:	e2800001 	add	r0, r0, #1	; 0x1
        353f20:	e3500008 	cmp	r0, #8	; 0x8
        353f24:	baffffef 	blt	353ee8 <TStoreWrapper::ReferenceToMap(long)+0x34>
        353f28:	e59d0000 	ldr	r0, [sp]
        353f2c:	e5900000 	ldr	r0, [r0]
        353f30:	e3300002 	teq	r0, #2	; 0x2
        353f34:	1a00005c 	bne	3540ac <TStoreWrapper::ReferenceToMap(long)+0x1f8>
        353f38:	e24dd004 	sub	sp, sp, #4	; 0x4
        353f3c:	e24ddb01 	sub	sp, sp, #1024	; 0x400
        353f40:	e28d6004 	add	r6, sp, #4	; 0x4
        353f44:	e3a00b01 	mov	r0, #1024	; 0x400
        353f48:	e58d0000 	str	r0, [sp]
        353f4c:	e1a0300d 	mov	r3, sp
        353f50:	e1a02006 	mov	r2, r6
        353f54:	e1a01005 	mov	r1, r5
        353f58:	e5940000 	ldr	r0, [r4]
        353f5c:	eb61c0bb 	bl	1bc4250 <TStoreHashTable::$Get(long, char *, long *)>
        353f60:	e3300000 	teq	r0, #0	; 0x0
        353f64:	1a00000e 	bne	353fa4 <TStoreWrapper::ReferenceToMap(long)+0xf0>
        353f68:	e59d0000 	ldr	r0, [sp]
        353f6c:	eb61e9f1 	bl	1bce738 <$__nw(unsigned int)>
        353f70:	e1b06000 	movs	r6, r0
        353f74:	1a000005 	bne	353f90 <TStoreWrapper::ReferenceToMap(long)+0xdc>
        353f78:	e59f0140 	ldr	r0, [pc, #140]	; 3540c0 <TStoreWrapper::ReferenceToMap(long)+0x20c>
        353f7c:	e5900000 	ldr	r0, [r0]
        353f80:	e3a02000 	mov	r2, #0	; 0x0
        353f84:	e3a010e9 	mov	r1, #233	; 0xe9
        353f88:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        353f8c:	eb623c82 	bl	1be319c <$Throw>
        353f90:	e1a0300d 	mov	r3, sp
        353f94:	e1a02006 	mov	r2, r6
        353f98:	e1a01005 	mov	r1, r5
        353f9c:	e5940000 	ldr	r0, [r4]
        353fa0:	eb61c0aa 	bl	1bc4250 <TStoreHashTable::$Get(long, char *, long *)>
        353fa4:	e24dd004 	sub	sp, sp, #4	; 0x4
        353fa8:	e5961000 	ldr	r1, [r6]
        353fac:	e1a01841 	mov	r1, r1, asr #16
        353fb0:	e2868002 	add	r8, r6, #2	; 0x2
        353fb4:	e58d1000 	str	r1, [sp]
        353fb8:	e59f0104 	ldr	r0, [pc, #104]	; 3540c4 <TStoreWrapper::ReferenceToMap(long)+0x210>
        353fbc:	eb61b85d 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        353fc0:	e59d1408 	ldr	r1, [sp, #1032]
        353fc4:	e3a09000 	mov	r9, #0	; 0x0
        353fc8:	e5810000 	str	r0, [r1]
        353fcc:	e59d1000 	ldr	r1, [sp]
        353fd0:	e3510000 	cmp	r1, #0	; 0x0
        353fd4:	da000012 	ble	354024 <TStoreWrapper::ReferenceToMap(long)+0x170>
        353fd8:	e1a00008 	mov	r0, r8
        353fdc:	eb61c4a7 	bl	1bc5280 <$Intern(char *)>
        353fe0:	eb61b859 	bl	1bc214c <$AllocateRefHandle(long)>
        353fe4:	e1a0a000 	mov	sl, r0
        353fe8:	e1a01009 	mov	r1, r9
        353fec:	e5902000 	ldr	r2, [r0]
        353ff0:	e59d0408 	ldr	r0, [sp, #1032]
        353ff4:	e5900000 	ldr	r0, [r0]
        353ff8:	eb61c8d6 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        353ffc:	e1a0000a 	mov	r0, sl
        354000:	eb61bc6d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354004:	e1a00008 	mov	r0, r8
        354008:	eb6186a8 	bl	1bb5ab0 <$strlen>
        35400c:	e0800008 	add	r0, r0, r8
        354010:	e2808001 	add	r8, r0, #1	; 0x1
        354014:	e2899001 	add	r9, r9, #1	; 0x1
        354018:	e59d1000 	ldr	r1, [sp]
        35401c:	e1590001 	cmp	r9, r1
        354020:	baffffec 	blt	353fd8 <TStoreWrapper::ReferenceToMap(long)+0x124>
        354024:	e24dd004 	sub	sp, sp, #4	; 0x4
        354028:	e28d000c 	add	r0, sp, #12	; 0xc
        35402c:	e1360000 	teq	r6, r0
        354030:	11a00006 	movne	r0, r6
        354034:	1b61e5a9 	blne	1bcd6e0 <$__dl(void *)>
        354038:	e3a00002 	mov	r0, #2	; 0x2
        35403c:	eb61b842 	bl	1bc214c <$AllocateRefHandle(long)>
        354040:	e58d0000 	str	r0, [sp]
        354044:	e1a0000d 	mov	r0, sp
        354048:	e28d100c 	add	r1, sp, #12	; 0xc
        35404c:	e2811b01 	add	r1, r1, #1024	; 0x400
        354050:	eb61b83c 	bl	1bc2148 <$AllocateMapWithTags__FRC6RefVarT1>
        354054:	e59d140c 	ldr	r1, [sp, #1036]
        354058:	e5810000 	str	r0, [r1]
        35405c:	e59d0000 	ldr	r0, [sp]
        354060:	eb61bc55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354064:	e3a01000 	mov	r1, #0	; 0x0
        354068:	e3770001 	cmn	r7, #1	; 0x1
        35406c:	0594702c 	ldreq	r7, [r4, #44]	; fField44
        354070:	02870001 	addeq	r0, r7, #1	; 0x1
        354074:	0584002c 	streq	r0, [r4, #44]	; fField44
        354078:	03300008 	teqeq	r0, #8	; 0x8
        35407c:	0584102c 	streq	r1, [r4, #44]	; fField44
        354080:	e59d0410 	ldr	r0, [sp, #1040]
        354084:	e5900000 	ldr	r0, [r0]
        354088:	e5900000 	ldr	r0, [r0]
        35408c:	e59d140c 	ldr	r1, [sp, #1036]
        354090:	e5912000 	ldr	r2, [r1]
        354094:	e1a01007 	mov	r1, r7
        354098:	eb61c8ae 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        35409c:	e0840107 	add	r0, r4, r7, lsl #2
        3540a0:	e5a0500c 	str	r5, [r0, #12]!
        3540a4:	e28dd00c 	add	sp, sp, #12	; 0xc
        3540a8:	e28ddb01 	add	sp, sp, #1024	; 0x400
        3540ac:	e59d0000 	ldr	r0, [sp]
        3540b0:	e5904000 	ldr	r4, [r0]
        3540b4:	eb61bc40 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3540b8:	e1a00004 	mov	r0, r4
        3540bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3540c0:	00371318 	eoreqs	r1, r7, r8, lsl r3
        3540c4:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TStoreWrapper::StartCopyMaps_Symbols(void)
 * Address: 003540c8
 */
TStoreWrapper::StartCopyMaps_Symbols(void) {
    /*
        3540c8:	e1a0c00d 	mov	ip, sp
        3540cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3540d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3540d4:	e1a04000 	mov	r4, r0
        3540d8:	e3a00f71 	mov	r0, #452	; 0x1c4
        3540dc:	eb61e995 	bl	1bce738 <$__nw(unsigned int)>
        3540e0:	e5840074 	str	r0, [r4, #116]	; fField116
        3540e4:	e3300000 	teq	r0, #0	; 0x0
        3540e8:	1a000005 	bne	354104 <TStoreWrapper::StartCopyMaps_Symbols(void)+0x3c>
        3540ec:	e59f0054 	ldr	r0, [pc, #54]	; 354148 <TStoreWrapper::StartCopyMaps_Symbols(void)+0x80>
        3540f0:	e5900000 	ldr	r0, [r0]
        3540f4:	e3a02000 	mov	r2, #0	; 0x0
        3540f8:	e3a010e9 	mov	r1, #233	; 0xe9
        3540fc:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        354100:	eb623c25 	bl	1be319c <$Throw>
        354104:	e3a0000f 	mov	r0, #15	; 0xf
        354108:	e3e01000 	mvn	r1, #0	; 0x0
        35410c:	e0803080 	add	r3, r0, r0, lsl #1
        354110:	e5942074 	ldr	r2, [r4, #116]	; fField116
        354114:	e7821103 	str	r1, [r2, r3, lsl #2]
        354118:	e2500001 	subs	r0, r0, #1	; 0x1
        35411c:	5afffffa 	bpl	35410c <TStoreWrapper::StartCopyMaps_Symbols(void)+0x44>
        354120:	e3a00000 	mov	r0, #0	; 0x0
        354124:	e5942074 	ldr	r2, [r4, #116]	; fField116
        354128:	e5a200c0 	str	r0, [r2, #192]!
        35412c:	e3a0001f 	mov	r0, #31	; 0x1f
        354130:	e5942074 	ldr	r2, [r4, #116]	; fField116
        354134:	e0822180 	add	r2, r2, r0, lsl #3
        354138:	e2500001 	subs	r0, r0, #1	; 0x1
        35413c:	e5a210c4 	str	r1, [r2, #196]!
        354140:	5afffffa 	bpl	354130 <TStoreWrapper::StartCopyMaps_Symbols(void)+0x68>
        354144:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        354148:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TStoreWrapper::EndCopyMaps_Symbols(void)
 * Address: 0035414c
 */
TStoreWrapper::EndCopyMaps_Symbols(void) {
    /*
        35414c:	e1a0c00d 	mov	ip, sp
        354150:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        354154:	e24cb004 	sub	fp, ip, #4	; 0x4
        354158:	e1a04000 	mov	r4, r0
        35415c:	e5900074 	ldr	r0, [r0, #116]	; fField116
        354160:	e3300000 	teq	r0, #0	; 0x0
        354164:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        354168:	eb61e55c 	bl	1bcd6e0 <$__dl(void *)>
        35416c:	e3a00000 	mov	r0, #0	; 0x0
        354170:	e5a40074 	str	r0, [r4, #116]!	; fField116
        354174:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)
 * Address: 00354730
 */
TStoreWrapper::CopyMap(long, TStoreWrapper *, long *) {
    /*
        354730:	e1a0c00d 	mov	ip, sp
        354734:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        354738:	e24cb004 	sub	fp, ip, #4	; 0x4
        35473c:	e1a05001 	mov	r5, r1
        354740:	e1a08002 	mov	r8, r2
        354744:	e1a04003 	mov	r4, r3
        354748:	e3e00000 	mvn	r0, #0	; 0x0
        35474c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        354750:	e51b0038 	ldr	r0, [fp, -#56]
        354754:	e5b06074 	ldr	r6, [r0, #116]!	; fField116
        354758:	e3a00000 	mov	r0, #0	; 0x0
        35475c:	e5961000 	ldr	r1, [r6]
        354760:	e1310005 	teq	r1, r5
        354764:	1a000003 	bne	354778 <TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)+0x48>
        354768:	e5960008 	ldr	r0, [r6, #8]	; fField8
        35476c:	e5840000 	str	r0, [r4]
        354770:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        354774:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        354778:	e3710001 	cmn	r1, #1	; 0x1
        35477c:	058d0000 	streq	r0, [sp]
        354780:	0a000003 	beq	354794 <TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)+0x64>
        354784:	e286600c 	add	r6, r6, #12	; 0xc
        354788:	e2800001 	add	r0, r0, #1	; 0x1
        35478c:	e3500010 	cmp	r0, #16	; 0x10
        354790:	bafffff1 	blt	35475c <TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)+0x2c>
        354794:	e24dd004 	sub	sp, sp, #4	; 0x4
        354798:	e24ddb01 	sub	sp, sp, #1024	; 0x400
        35479c:	e28d7004 	add	r7, sp, #4	; 0x4
        3547a0:	e3a00b01 	mov	r0, #1024	; 0x400
        3547a4:	e58d0000 	str	r0, [sp]
        3547a8:	e1a0300d 	mov	r3, sp
        3547ac:	e1a02007 	mov	r2, r7
        3547b0:	e1a01005 	mov	r1, r5
        3547b4:	e5980000 	ldr	r0, [r8]
        3547b8:	eb61bea4 	bl	1bc4250 <TStoreHashTable::$Get(long, char *, long *)>
        3547bc:	e3300000 	teq	r0, #0	; 0x0
        3547c0:	1a00000e 	bne	354800 <TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)+0xd0>
        3547c4:	e59d0000 	ldr	r0, [sp]
        3547c8:	eb61e7da 	bl	1bce738 <$__nw(unsigned int)>
        3547cc:	e1b07000 	movs	r7, r0
        3547d0:	1a000005 	bne	3547ec <TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)+0xbc>
        3547d4:	e59f00c0 	ldr	r0, [pc, #c0]	; 35489c <TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)+0x16c>
        3547d8:	e5900000 	ldr	r0, [r0]
        3547dc:	e3a02000 	mov	r2, #0	; 0x0
        3547e0:	e3a010e9 	mov	r1, #233	; 0xe9
        3547e4:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        3547e8:	eb623a6b 	bl	1be319c <$Throw>
        3547ec:	e1a0300d 	mov	r3, sp
        3547f0:	e1a02007 	mov	r2, r7
        3547f4:	e1a01005 	mov	r1, r5
        3547f8:	e5980000 	ldr	r0, [r8]
        3547fc:	eb61be93 	bl	1bc4250 <TStoreHashTable::$Get(long, char *, long *)>
        354800:	e5970000 	ldr	r0, [r7]
        354804:	e1a00840 	mov	r0, r0, asr #16
        354808:	e2878002 	add	r8, r7, #2	; 0x2
        35480c:	e3a09000 	mov	r9, #0	; 0x0
        354810:	e3a0a000 	mov	sl, #0	; 0x0
        354814:	e5840000 	str	r0, [r4]
        354818:	e3500000 	cmp	r0, #0	; 0x0
        35481c:	da00000b 	ble	354850 <TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)+0x120>
        354820:	e1a00008 	mov	r0, r8
        354824:	eb5bbe7e 	bl	1a44224 <$SymbolHashFunction(char *)>
        354828:	e0200009 	eor	r0, r0, r9
        35482c:	e1a09a70 	mov	r9, r0, ror sl
        354830:	e1a00008 	mov	r0, r8
        354834:	eb61849d 	bl	1bb5ab0 <$strlen>
        354838:	e0800008 	add	r0, r0, r8
        35483c:	e2808001 	add	r8, r0, #1	; 0x1
        354840:	e28aa001 	add	sl, sl, #1	; 0x1
        354844:	e5940000 	ldr	r0, [r4]
        354848:	e15a0000 	cmp	sl, r0
        35484c:	bafffff3 	blt	354820 <TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)+0xf0>
        354850:	e1a02007 	mov	r2, r7
        354854:	e1a01009 	mov	r1, r9
        354858:	e59d3000 	ldr	r3, [sp]
        35485c:	e51b0038 	ldr	r0, [fp, -#56]
        354860:	e5900000 	ldr	r0, [r0]
        354864:	eb61be83 	bl	1bc4278 <TStoreHashTable::$Insert(unsigned long, char *, long)>
        354868:	e1a08000 	mov	r8, r0
        35486c:	e28d0004 	add	r0, sp, #4	; 0x4
        354870:	e1370000 	teq	r7, r0
        354874:	11a00007 	movne	r0, r7
        354878:	1b61e398 	blne	1bcd6e0 <$__dl(void *)>
        35487c:	e59d0404 	ldr	r0, [sp, #1028]
        354880:	e3500000 	cmp	r0, #0	; 0x0
        354884:	ba000002 	blt	354894 <TStoreWrapper::CopyMap(long, TStoreWrapper *, long *)+0x164>
        354888:	e8860120 	stmia	r6, {r5, r8}
        35488c:	e5940000 	ldr	r0, [r4]
        354890:	e5a60008 	str	r0, [r6, #8]!	; fField8
        354894:	e1a00008 	mov	r0, r8
        354898:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35489c:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TStoreWrapper::CopySymbol(long, TStoreWrapper *)
 * Address: 003548a0
 */
TStoreWrapper::CopySymbol(long, TStoreWrapper *) {
    /*
        3548a0:	e1a0c00d 	mov	ip, sp
        3548a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        3548a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3548ac:	e1a04000 	mov	r4, r0
        3548b0:	e1a05001 	mov	r5, r1
        3548b4:	e5900074 	ldr	r0, [r0, #116]	; fField116
        3548b8:	e28000c4 	add	r0, r0, #196	; 0xc4
        3548bc:	e3a01000 	mov	r1, #0	; 0x0
        3548c0:	e5903000 	ldr	r3, [r0]
        3548c4:	e1330005 	teq	r3, r5
        3548c8:	05900004 	ldreq	r0, [r0, #4]	; fField4
        3548cc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        3548d0:	e3730001 	cmn	r3, #1	; 0x1
        3548d4:	0a000003 	beq	3548e8 <TStoreWrapper::CopySymbol(long, TStoreWrapper *)+0x48>
        3548d8:	e2800008 	add	r0, r0, #8	; 0x8
        3548dc:	e2811001 	add	r1, r1, #1	; 0x1
        3548e0:	e3510020 	cmp	r1, #32	; 0x20
        3548e4:	bafffff5 	blt	3548c0 <TStoreWrapper::CopySymbol(long, TStoreWrapper *)+0x20>
        3548e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        3548ec:	e1a01005 	mov	r1, r5
        3548f0:	e1a00002 	mov	r0, r2
        3548f4:	eb5bb61f 	bl	1a42178 <TStoreWrapper::$ReferenceToSymbol(long)>
        3548f8:	eb61b613 	bl	1bc214c <$AllocateRefHandle(long)>
        3548fc:	e58d0000 	str	r0, [sp]
        354900:	e1a0100d 	mov	r1, sp
        354904:	e1a00004 	mov	r0, r4
        354908:	eb5bbe46 	bl	1a44228 <TStoreWrapper::$SymbolToReference(RefVar const &)>
        35490c:	e1a06000 	mov	r6, r0
        354910:	e59d0000 	ldr	r0, [sp]
        354914:	eb61ba28 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354918:	e3a00000 	mov	r0, #0	; 0x0
        35491c:	e5941074 	ldr	r1, [r4, #116]	; fField116
        354920:	e59120c0 	ldr	r2, [r1, #192]
        354924:	e0811182 	add	r1, r1, r2, lsl #3
        354928:	e28110c4 	add	r1, r1, #196	; 0xc4
        35492c:	e8810060 	stmia	r1, {r5, r6}
        354930:	e5941074 	ldr	r1, [r4, #116]	; fField116
        354934:	e5b120c0 	ldr	r2, [r1, #192]!
        354938:	e2822001 	add	r2, r2, #1	; 0x1
        35493c:	e5812000 	str	r2, [r1]
        354940:	e5b41074 	ldr	r1, [r4, #116]!	; fField116
        354944:	e59120c0 	ldr	r2, [r1, #192]
        354948:	e3320020 	teq	r2, #32	; 0x20
        35494c:	05a100c0 	streq	r0, [r1, #192]!
        354950:	e1a00006 	mov	r0, r6
        354954:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWrapper::SymbolToReference(RefVar const &)
 * Address: 00354958
 */
TStoreWrapper::SymbolToReference(RefVar const &) {
    /*
        354958:	e1a0c00d 	mov	ip, sp
        35495c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        354960:	e24cb004 	sub	fp, ip, #4	; 0x4
        354964:	e1a06000 	mov	r6, r0
        354968:	e1a04001 	mov	r4, r1
        35496c:	e5910000 	ldr	r0, [r1]
        354970:	e5900000 	ldr	r0, [r0]
        354974:	eb61ceb7 	bl	1bc8458 <$SymbolName(long)>
        354978:	e1a07000 	mov	r7, r0
        35497c:	eb61844b 	bl	1bb5ab0 <$strlen>
        354980:	e1a05000 	mov	r5, r0
        354984:	e5940000 	ldr	r0, [r4]
        354988:	e5900000 	ldr	r0, [r0]
        35498c:	eb61ceb0 	bl	1bc8454 <$SymbolHash(long)>
        354990:	e1a01000 	mov	r1, r0
        354994:	e1a02007 	mov	r2, r7
        354998:	e1a03005 	mov	r3, r5
        35499c:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        3549a0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        3549a4:	ea61be33 	b	1bc4278 <TStoreHashTable::$Insert(unsigned long, char *, long)>
    */
}

/**
 * Symbol: TStoreWrapper::ReferenceToSymbol(long)
 * Address: 003549a8
 */
TStoreWrapper::ReferenceToSymbol(long) {
    /*
        3549a8:	e1a0c00d 	mov	ip, sp
        3549ac:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        3549b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3549b4:	e1a04000 	mov	r4, r0
        3549b8:	e1a05001 	mov	r5, r1
        3549bc:	e3a00002 	mov	r0, #2	; 0x2
        3549c0:	eb61b5e1 	bl	1bc214c <$AllocateRefHandle(long)>
        3549c4:	e1a06000 	mov	r6, r0
        3549c8:	e3e07000 	mvn	r7, #0	; 0x0
        3549cc:	e3a00000 	mov	r0, #0	; 0x0
        3549d0:	e2848030 	add	r8, r4, #48	; 0x30
        3549d4:	e0841100 	add	r1, r4, r0, lsl #2
        3549d8:	e5911034 	ldr	r1, [r1, #52]
        3549dc:	e1310005 	teq	r1, r5
        3549e0:	1a000006 	bne	354a00 <TStoreWrapper::ReferenceToSymbol(long)+0x58>
        3549e4:	e1a07000 	mov	r7, r0
        3549e8:	e5980000 	ldr	r0, [r8]
        3549ec:	e5900000 	ldr	r0, [r0]
        3549f0:	e1a01007 	mov	r1, r7
        3549f4:	eb61be16 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        3549f8:	e5860000 	str	r0, [r6]
        3549fc:	ea000002 	b	354a0c <TStoreWrapper::ReferenceToSymbol(long)+0x64>
        354a00:	e2800001 	add	r0, r0, #1	; 0x1
        354a04:	e3500010 	cmp	r0, #16	; 0x10
        354a08:	bafffff1 	blt	3549d4 <TStoreWrapper::ReferenceToSymbol(long)+0x2c>
        354a0c:	e3a09000 	mov	r9, #0	; 0x0
        354a10:	e5960000 	ldr	r0, [r6]
        354a14:	e3300002 	teq	r0, #2	; 0x2
        354a18:	1a00001a 	bne	354a88 <TStoreWrapper::ReferenceToSymbol(long)+0xe0>
        354a1c:	e3a00c01 	mov	r0, #256	; 0x100
        354a20:	e52d0104 	str	r0, [sp, -#260]!
        354a24:	e1a0300d 	mov	r3, sp
        354a28:	e28d2004 	add	r2, sp, #4	; 0x4
        354a2c:	e1a01005 	mov	r1, r5
        354a30:	e5940004 	ldr	r0, [r4, #4]	; fField4
        354a34:	eb61be05 	bl	1bc4250 <TStoreHashTable::$Get(long, char *, long *)>
        354a38:	e28d1004 	add	r1, sp, #4	; 0x4
        354a3c:	e59d0000 	ldr	r0, [sp]
        354a40:	e7c19000 	strb	r9, [r1, r0]
        354a44:	e28d0004 	add	r0, sp, #4	; 0x4
        354a48:	eb61c20c 	bl	1bc5280 <$Intern(char *)>
        354a4c:	e3770001 	cmn	r7, #1	; 0x1
        354a50:	e5860000 	str	r0, [r6]
        354a54:	05947078 	ldreq	r7, [r4, #120]	; fField120
        354a58:	02870001 	addeq	r0, r7, #1	; 0x1
        354a5c:	05840078 	streq	r0, [r4, #120]	; fField120
        354a60:	03300010 	teqeq	r0, #16	; 0x10
        354a64:	05849078 	streq	r9, [r4, #120]	; fField120
        354a68:	e5980000 	ldr	r0, [r8]
        354a6c:	e5900000 	ldr	r0, [r0]
        354a70:	e1a01007 	mov	r1, r7
        354a74:	e5962000 	ldr	r2, [r6]
        354a78:	eb61c636 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        354a7c:	e0840107 	add	r0, r4, r7, lsl #2
        354a80:	e5a05034 	str	r5, [r0, #52]!
        354a84:	e28ddf41 	add	sp, sp, #260	; 0x104
        354a88:	e5964000 	ldr	r4, [r6]
        354a8c:	e1a00006 	mov	r0, r6
        354a90:	eb61b9c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354a94:	e1a00004 	mov	r0, r4
        354a98:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWrapper::GetStoreSizes(long *, long *)
 * Address: 00354a9c
 */
TStoreWrapper::GetStoreSizes(long *, long *) {
    /*
        354a9c:	e1a0c00d 	mov	ip, sp
        354aa0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        354aa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        354aa8:	e1a06000 	mov	r6, r0
        354aac:	e1a05001 	mov	r5, r1
        354ab0:	e1a04002 	mov	r4, r2
        354ab4:	eb61bde4 	bl	1bc424c <$GC(void)>
        354ab8:	e1a02004 	mov	r2, r4
        354abc:	e1a01005 	mov	r1, r5
        354ac0:	e5b6007c 	ldr	r0, [r6, #124]!	; fField124
        354ac4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        354ac8:	ea5e989f 	b	1afad4c <TStore::$GetStoreSizes(long *, long *)>
    */
}

/**
 * Symbol: TStoreWrapper::LockStore(void)
 * Address: 00354acc
 */
TStoreWrapper::LockStore(void) {
    /*
        354acc:	e1a0c00d 	mov	ip, sp
        354ad0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        354ad4:	e24cb004 	sub	fp, ip, #4	; 0x4
        354ad8:	e1a04000 	mov	r4, r0
        354adc:	e5900094 	ldr	r0, [r0, #148]	; fField148
        354ae0:	e3300000 	teq	r0, #0	; 0x0
        354ae4:	1b5bd26b 	blne	1a49498 <TEphemeralTracker::$LockEphemerals(void)>
        354ae8:	e5b4007c 	ldr	r0, [r4, #124]!	; fField124
        354aec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        354af0:	ea5ea919 	b	1afef5c <TStore::$LockStore(void)>
    */
}

/**
 * Symbol: TStoreWrapper::UnlockStore(void)
 * Address: 00354af4
 */
TStoreWrapper::UnlockStore(void) {
    /*
        354af4:	e1a0c00d 	mov	ip, sp
        354af8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        354afc:	e24cb004 	sub	fp, ip, #4	; 0x4
        354b00:	e1a04000 	mov	r4, r0
        354b04:	e5900094 	ldr	r0, [r0, #148]	; fField148
        354b08:	e3300000 	teq	r0, #0	; 0x0
        354b0c:	1b5bd262 	blne	1a4949c <TEphemeralTracker::$FlushEphemerals(void)>
        354b10:	e594007c 	ldr	r0, [r4, #124]	; fField124
        354b14:	eb5ece56 	bl	1b08474 <TStore::$UnlockStore(void)>
        354b18:	e1a05000 	mov	r5, r0
        354b1c:	e5940094 	ldr	r0, [r4, #148]	; fField148
        354b20:	e3300000 	teq	r0, #0	; 0x0
        354b24:	15900018 	ldrne	r0, [r0, #24]
        354b28:	15900000 	ldrne	r0, [r0]
        354b2c:	13300000 	teqne	r0, #0	; 0x0
        354b30:	0a000004 	beq	354b48 <TStoreWrapper::UnlockStore(void)+0x54>
        354b34:	e594007c 	ldr	r0, [r4, #124]	; fField124
        354b38:	eb5ea4eb 	bl	1afdeec <TStore::$IsLocked(void)>
        354b3c:	e3300000 	teq	r0, #0	; 0x0
        354b40:	05b40094 	ldreq	r0, [r4, #148]!	; fField148
        354b44:	0b5bce49 	bleq	1a48470 <TEphemeralTracker::$DeletePendingEphemerals(void)>
        354b48:	e1a00005 	mov	r0, r5
        354b4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWrapper::Abort(void)
 * Address: 00354b50
 */
TStoreWrapper::Abort(void) {
    /*
        354b50:	e1a0c00d 	mov	ip, sp
        354b54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        354b58:	e24cb004 	sub	fp, ip, #4	; 0x4
        354b5c:	e1a04000 	mov	r4, r0
        354b60:	e5900094 	ldr	r0, [r0, #148]	; fField148
        354b64:	e3300000 	teq	r0, #0	; 0x0
        354b68:	1b5bd24c 	blne	1a494a0 <TEphemeralTracker::$AbortEphemerals(void)>
        354b6c:	e2840080 	add	r0, r4, #128	; 0x80
        354b70:	eb5ba4c6 	bl	1a3de90 <TNodeCache::$Clear(void)>
        354b74:	e594007c 	ldr	r0, [r4, #124]	; fField124
        354b78:	eb5e734b 	bl	1af18ac <TStore::$Abort(void)>
        354b7c:	e1a05000 	mov	r5, r0
        354b80:	e5940000 	ldr	r0, [r4]
        354b84:	eb5be6dd 	bl	1a4e700 <TStoreHashTable::$Abort(void)>
        354b88:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        354b8c:	eb5be6db 	bl	1a4e700 <TStoreHashTable::$Abort(void)>
        354b90:	e1a00005 	mov	r0, r5
        354b94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

