#include "include/StrokeCentral.h"

/**
 * Symbol: StrokeCentral::__ct(void)
 * Address: 00144790
 */
StrokeCentral::StrokeCentral(void) {
    /*
        144790:	e1a0c00d 	mov	ip, sp
        144794:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        144798:	e24cb004 	sub	fp, ip, #4	; 0x4
        14479c:	e1b04000 	movs	r4, r0
        1447a0:	1a000003 	bne	1447b4 <StrokeCentral::__ct(void)+0x24>
        1447a4:	e3a00044 	mov	r0, #68	; 0x44
        1447a8:	eb6a27e2 	bl	1bce738 <$__nw(unsigned int)>
        1447ac:	e1b04000 	movs	r4, r0
        1447b0:	0a000001 	beq	1447bc <StrokeCentral::__ct(void)+0x2c>
        1447b4:	e1a00004 	mov	r0, r4
        1447b8:	eb65c0a2 	bl	1ab4a48 <StrokeCentral::$InitFields(void)>
        1447bc:	e1a00004 	mov	r0, r4
        1447c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: StrokeCentral::__dt(void)
 * Address: 001447c4
 */
StrokeCentral::~StrokeCentral(void) {
    /*
        1447c4:	e1a0c00d 	mov	ip, sp
        1447c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1447cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1447d0:	e1a04000 	mov	r4, r0
        1447d4:	e1a05001 	mov	r5, r1
        1447d8:	eb65a3b0 	bl	1aad6a0 <StrokeCentral::$DoneFields(void)>
        1447dc:	e3150001 	tst	r5, #1	; 0x1
        1447e0:	11a00004 	movne	r0, r4
        1447e4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1447e8:	1a6a23bc 	bne	1bcd6e0 <$__dl(void *)>
        1447ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: StrokeCentral::InvalidateCurrentStroke(void)
 * Address: 001447f0
 */
StrokeCentral::InvalidateCurrentStroke(void) {
    /*
        1447f0:	e3a01000 	mov	r1, #0	; 0x0
        1447f4:	e5c01000 	strb	r1, [r0]
        1447f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: StrokeCentral::CurrentStroke(void)
 * Address: 001447fc
 */
StrokeCentral::CurrentStroke(void) {
    /*
        1447fc:	e5d01000 	ldrb	r1, [r0]
        144800:	e3310000 	teq	r1, #0	; 0x0
        144804:	03a00000 	moveq	r0, #0	; 0x0
        144808:	15900004 	ldrne	r0, [r0, #4]	; fField4
        14480c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: StrokeCentral::AddDeferredStroke(RefVar const &, long, long)
 * Address: 00144810
 */
StrokeCentral::AddDeferredStroke(RefVar const &, long, long) {
    /*
        144810:	e1a0c00d 	mov	ip, sp
        144814:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        144818:	e24cb004 	sub	fp, ip, #4	; 0x4
        14481c:	e1a04000 	mov	r4, r0
        144820:	e1a06002 	mov	r6, r2
        144824:	e1a05003 	mov	r5, r3
        144828:	e24dd008 	sub	sp, sp, #8	; 0x8
        14482c:	e5900020 	ldr	r0, [r0, #32]	; fField32
        144830:	eb69f63c 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        144834:	e1a00106 	mov	r0, r6, lsl #2
        144838:	eb69f643 	bl	1bc214c <$AllocateRefHandle(long)>
        14483c:	e58d0000 	str	r0, [sp]
        144840:	e1a0100d 	mov	r1, sp
        144844:	e5940020 	ldr	r0, [r4, #32]	; fField32
        144848:	eb69f636 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        14484c:	e59d0000 	ldr	r0, [sp]
        144850:	eb69fa59 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        144854:	e1a00105 	mov	r0, r5, lsl #2
        144858:	eb69f63b 	bl	1bc214c <$AllocateRefHandle(long)>
        14485c:	e58d0004 	str	r0, [sp, #4]	; fField4
        144860:	e28d1004 	add	r1, sp, #4	; 0x4
        144864:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        144868:	eb69f62e 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        14486c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        144870:	eb69fa51 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        144874:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: StrokeCentral::IdleStrokes(void)
 * Address: 001448b8
 */
StrokeCentral::IdleStrokes(void) {
    /*
        1448b8:	e1a0c00d 	mov	ip, sp
        1448bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1448c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1448c4:	e1a04000 	mov	r4, r0
        1448c8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1448cc:	e3500000 	cmp	r0, #0	; 0x0
        1448d0:	c5940018 	ldrgt	r0, [r4, #24]	; fField24
        1448d4:	c2800001 	addgt	r0, r0, #1	; 0x1
        1448d8:	c5840018 	strgt	r0, [r4, #24]	; fField24
        1448dc:	c350000a 	cmpgt	r0, #10	; 0xa
        1448e0:	c3a00000 	movgt	r0, #0	; 0x0
        1448e4:	c5840018 	strgt	r0, [r4, #24]	; fField24
        1448e8:	c5840014 	strgt	r0, [r4, #20]	; fField20
        1448ec:	e59f71b4 	ldr	r7, [pc, #1b4]	; 144aa8 <StrokeCentral::IdleStrokes(void)+0x1f0>
        1448f0:	e59f81b4 	ldr	r8, [pc, #1b4]	; 144aac <StrokeCentral::IdleStrokes(void)+0x1f4>
        1448f4:	e59f51b4 	ldr	r5, [pc, #1b4]	; 144ab0 <StrokeCentral::IdleStrokes(void)+0x1f8>
        1448f8:	eb687a35 	bl	1b631d4 <$StrokeTime(void)>
        1448fc:	e5950000 	ldr	r0, [r5]
        144900:	eb685d31 	bl	1b5bdcc <TController::$CheckBusy(void)>
        144904:	e3300000 	teq	r0, #0	; 0x0
        144908:	05940004 	ldreq	r0, [r4, #4]	; fField4
        14490c:	03300000 	teqeq	r0, #0	; 0x0
        144910:	1a00002b 	bne	1449c4 <StrokeCentral::IdleStrokes(void)+0x10c>
        144914:	e5940014 	ldr	r0, [r4, #20]	; fField20
        144918:	e3300000 	teq	r0, #0	; 0x0
        14491c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        144920:	eb687a27 	bl	1b631c4 <$StrokeGet(void)>
        144924:	e1b06000 	movs	r6, r0
        144928:	0a000025 	beq	1449c4 <StrokeCentral::IdleStrokes(void)+0x10c>
        14492c:	e1a01006 	mov	r1, r6
        144930:	e1a00004 	mov	r0, r4
        144934:	eb657a23 	bl	1aa31c8 <StrokeCentral::$StartNewStroke(TStroke *)>
        144938:	e1a02006 	mov	r2, r6
        14493c:	e3a03000 	mov	r3, #0	; 0x0
        144940:	e3a01001 	mov	r1, #1	; 0x1
        144944:	e5970000 	ldr	r0, [r7]
        144948:	eb686dc9 	bl	1b60074 <$Make__10TClickUnitSFP7TDomainUlP7TStrokeP6TArray>
        14494c:	e5840008 	str	r0, [r4, #8]	; fField8
        144950:	e3300000 	teq	r0, #0	; 0x0
        144954:	0a00001a 	beq	1449c4 <StrokeCentral::IdleStrokes(void)+0x10c>
        144958:	e3a01301 	mov	r1, #67108864	; 0x4000000
        14495c:	eb687604 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        144960:	e5941008 	ldr	r1, [r4, #8]	; fField8
        144964:	e5950000 	ldr	r0, [r5]
        144968:	eb6871da 	bl	1b610d8 <TController::$NewClassification(TUnit *)>
        14496c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        144970:	e5950000 	ldr	r0, [r5]
        144974:	eb686db3 	bl	1b60048 <TController::$IsExternallyArbitrated(TUnit *)>
        144978:	e3300000 	teq	r0, #0	; 0x0
        14497c:	0a000010 	beq	1449c4 <StrokeCentral::IdleStrokes(void)+0x10c>
        144980:	e3a01001 	mov	r1, #1	; 0x1
        144984:	e3a00028 	mov	r0, #40	; 0x28
        144988:	eb6871bf 	bl	1b6108c <$Make__6TArraySFUlT1>
        14498c:	e1b06000 	movs	r6, r0
        144990:	0a00000b 	beq	1449c4 <StrokeCentral::IdleStrokes(void)+0x10c>
        144994:	e1a00006 	mov	r0, r6
        144998:	e3a01000 	mov	r1, #0	; 0x0
        14499c:	e5962000 	ldr	r2, [r6]
        1449a0:	e1a0e00f 	mov	lr, pc
        1449a4:	e282f01c 	add	pc, r2, #28	; 0x1c
        1449a8:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1449ac:	e5801000 	str	r1, [r0]
        1449b0:	e1a00006 	mov	r0, r6
        1449b4:	eb655093 	bl	1a98c08 <$HandleUnit(TArray *)>
        1449b8:	e1a00006 	mov	r0, r6
        1449bc:	e1a0e00f 	mov	lr, pc
        1449c0:	e596f000 	ldr	pc, [r6]
        1449c4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1449c8:	e3300000 	teq	r0, #0	; 0x0
        1449cc:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1449d0:	e1a00004 	mov	r0, r4
        1449d4:	eb6554aa 	bl	1a99c84 <StrokeCentral::$IdleCurrentStroke(void)>
        1449d8:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        1449dc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1449e0:	eb687a00 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        1449e4:	e3300000 	teq	r0, #0	; 0x0
        1449e8:	1a000021 	bne	144a74 <StrokeCentral::IdleStrokes(void)+0x1bc>
        1449ec:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1449f0:	e5b09048 	ldr	r9, [r0, #72]!
        1449f4:	e3590005 	cmp	r9, #5	; 0x5
        1449f8:	908ff109 	addls	pc, pc, r9, lsl #2
        1449fc:	ea00001c 	b	144a74 <StrokeCentral::IdleStrokes(void)+0x1bc>
        144a00:	ea00001b 	b	144a74 <StrokeCentral::IdleStrokes(void)+0x1bc>
        144a04:	ea00001a 	b	144a74 <StrokeCentral::IdleStrokes(void)+0x1bc>
        144a08:	ea000001 	b	144a14 <StrokeCentral::IdleStrokes(void)+0x15c>
        144a0c:	ea000000 	b	144a14 <StrokeCentral::IdleStrokes(void)+0x15c>
        144a10:	eaffffff 	b	144a14 <StrokeCentral::IdleStrokes(void)+0x15c>
        144a14:	e3a02000 	mov	r2, #0	; 0x0
        144a18:	e3a01001 	mov	r1, #1	; 0x1
        144a1c:	e5970000 	ldr	r0, [r7]
        144a20:	eb687197 	bl	1b61084 <$Make__15TClickEventUnitSFP7TDomainUlP6TArray>
        144a24:	e1b06000 	movs	r6, r0
        144a28:	0a000011 	beq	144a74 <StrokeCentral::IdleStrokes(void)+0x1bc>
        144a2c:	e1a00006 	mov	r0, r6
        144a30:	e5941008 	ldr	r1, [r4, #8]	; fField8
        144a34:	e5962000 	ldr	r2, [r6]
        144a38:	e1a0e00f 	mov	lr, pc
        144a3c:	e282f054 	add	pc, r2, #84	; 0x54
        144a40:	e5940004 	ldr	r0, [r4, #4]	; fField4
        144a44:	eb6858c3 	bl	1b5ad58 <$AcquireStroke(TStroke *)>
        144a48:	e1a0a000 	mov	sl, r0
        144a4c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        144a50:	e5900048 	ldr	r0, [r0, #72]
        144a54:	e1300009 	teq	r0, r9
        144a58:	01a00006 	moveq	r0, r6
        144a5c:	0b6860ec 	bleq	1b5ce14 <TClickEventUnit::$ClearEvent(void)>
        144a60:	e33a0000 	teq	sl, #0	; 0x0
        144a64:	1b6875b4 	blne	1b6213c <$ReleaseStroke(void)>
        144a68:	e1a01006 	mov	r1, r6
        144a6c:	e5950000 	ldr	r0, [r5]
        144a70:	eb687198 	bl	1b610d8 <TController::$NewClassification(TUnit *)>
        144a74:	e5940004 	ldr	r0, [r4, #4]	; fField4
        144a78:	eb689aca 	bl	1b6b5a8 <TStroke::$Done(void)>
        144a7c:	e3300000 	teq	r0, #0	; 0x0
        144a80:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        144a84:	e5980000 	ldr	r0, [r8]
        144a88:	e3300001 	teq	r0, #1	; 0x1
        144a8c:	05940004 	ldreq	r0, [r4, #4]	; fField4
        144a90:	0b65f5a6 	bleq	1ac2130 <$JournalRecordAStroke(TStroke *)>
        144a94:	e1a00004 	mov	r0, r4
        144a98:	eb653382 	bl	1a918a8 <StrokeCentral::$DoneCurrentStroke(void)>
        144a9c:	e5950000 	ldr	r0, [r5]
        144aa0:	eb6879d3 	bl	1b631f4 <TController::$TriggerRecognition(void)>
        144aa4:	eaffff93 	b	1448f8 <StrokeCentral::IdleStrokes(void)+0x40>
        144aa8:	0c101884 	ldceq	8, cr1, [r0], -#528
        144aac:	0c100fb8 	ldceq	15, cr0, [r0], -#736
        144ab0:	0c10187c 	ldceq	8, cr1, [r0], -#496
    */
}

/**
 * Symbol: StrokeCentral::BlockStrokes(void)
 * Address: 00144ab4
 */
StrokeCentral::BlockStrokes(void) {
    /*
        144ab4:	e5901014 	ldr	r1, [r0, #20]	; fField20
        144ab8:	e2811001 	add	r1, r1, #1	; 0x1
        144abc:	e5a01014 	str	r1, [r0, #20]!	; fField20
        144ac0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: StrokeCentral::UnblockStrokes(void)
 * Address: 00144ac4
 */
StrokeCentral::UnblockStrokes(void) {
    /*
        144ac4:	e5901014 	ldr	r1, [r0, #20]	; fField20
        144ac8:	e3510000 	cmp	r1, #0	; 0x0
        144acc:	c2411001 	subgt	r1, r1, #1	; 0x1
        144ad0:	c5a01014 	strgt	r1, [r0, #20]!	; fField20
        144ad4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: StrokeCentral::Init(void)
 * Address: 00144ad8
 */
StrokeCentral::Init(void) {
    /*
        144ad8:	e1a0c00d 	mov	ip, sp
        144adc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        144ae0:	e24cb004 	sub	fp, ip, #4	; 0x4
        144ae4:	eb65bfd7 	bl	1ab4a48 <StrokeCentral::$InitFields(void)>
        144ae8:	eb68a2fd 	bl	1b6d6e4 <$SetUpPB(void)>
        144aec:	eb6879b5 	bl	1b631c8 <$StrokeInit(void)>
        144af0:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        144af4:	ea68a701 	b	1b6e700 <$TabOn(void)>
    */
}

/**
 * Symbol: StrokeCentral::FlushStrokes(void)
 * Address: 00144af8
 */
StrokeCentral::FlushStrokes(void) {
    /*
        144af8:	e1a0c00d 	mov	ip, sp
        144afc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        144b00:	e24cb004 	sub	fp, ip, #4	; 0x4
        144b04:	e3a06000 	mov	r6, #0	; 0x0
        144b08:	eb6879ad 	bl	1b631c4 <$StrokeGet(void)>
        144b0c:	e1b04000 	movs	r4, r0
        144b10:	0a000029 	beq	144bbc <StrokeCentral::FlushStrokes(void)+0xc4>
        144b14:	e59f70a8 	ldr	r7, [pc, #a8]	; 144bc4 <StrokeCentral::FlushStrokes(void)+0xcc>
        144b18:	e3a06001 	mov	r6, #1	; 0x1
        144b1c:	e1a02004 	mov	r2, r4
        144b20:	e3a03000 	mov	r3, #0	; 0x0
        144b24:	e3a01001 	mov	r1, #1	; 0x1
        144b28:	e5970000 	ldr	r0, [r7]
        144b2c:	eb686d50 	bl	1b60074 <$Make__10TClickUnitSFP7TDomainUlP7TStrokeP6TArray>
        144b30:	e1a05000 	mov	r5, r0
        144b34:	e3a01301 	mov	r1, #67108864	; 0x4000000
        144b38:	eb68758d 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        144b3c:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        144b40:	e1a01005 	mov	r1, r5
        144b44:	e1a0000d 	mov	r0, sp
        144b48:	e3a02000 	mov	r2, #0	; 0x0
        144b4c:	eb650a24 	bl	1a873e4 <TUnitPublic::$__ct(TUnit *, unsigned long)>
        144b50:	e1a0000d 	mov	r0, sp
        144b54:	eb6579a5 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        144b58:	e3a01001 	mov	r1, #1	; 0x1
        144b5c:	eb655466 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        144b60:	e1a0000d 	mov	r0, sp
        144b64:	eb655870 	bl	1a9ad2c <TUnitPublic::$Invalidate(void)>
        144b68:	e1a0000d 	mov	r0, sp
        144b6c:	e3a01000 	mov	r1, #0	; 0x0
        144b70:	eb650e35 	bl	1a8844c <TUnitPublic::$__dt(void)>
        144b74:	e28dd03c 	add	sp, sp, #60	; 0x3c
        144b78:	e1a00004 	mov	r0, r4
        144b7c:	eb689a89 	bl	1b6b5a8 <TStroke::$Done(void)>
        144b80:	e3300000 	teq	r0, #0	; 0x0
        144b84:	1a000006 	bne	144ba4 <StrokeCentral::FlushStrokes(void)+0xac>
        144b88:	eb687991 	bl	1b631d4 <$StrokeTime(void)>
        144b8c:	e3a00001 	mov	r0, #1	; 0x1
        144b90:	eb6581d8 	bl	1aa52f8 <$Wait(unsigned long)>
        144b94:	e1a00004 	mov	r0, r4
        144b98:	eb689a82 	bl	1b6b5a8 <TStroke::$Done(void)>
        144b9c:	e3300000 	teq	r0, #0	; 0x0
        144ba0:	0afffff8 	beq	144b88 <StrokeCentral::FlushStrokes(void)+0x90>
        144ba4:	e1a00005 	mov	r0, r5
        144ba8:	e1a0e00f 	mov	lr, pc
        144bac:	e595f000 	ldr	pc, [r5]
        144bb0:	eb687983 	bl	1b631c4 <$StrokeGet(void)>
        144bb4:	e1b04000 	movs	r4, r0
        144bb8:	1affffd6 	bne	144b18 <StrokeCentral::FlushStrokes(void)+0x20>
        144bbc:	e1a00006 	mov	r0, r6
        144bc0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        144bc4:	0c101884 	ldceq	8, cr1, [r0], -#528
    */
}

/**
 * Symbol: StrokeCentral::BeforeLastFlush(long)
 * Address: 00144bc8
 */
StrokeCentral::BeforeLastFlush(long) {
    /*
        144bc8:	e1a02000 	mov	r2, r0
        144bcc:	e590c01c 	ldr	ip, [r0, #28]	; fField28
        144bd0:	e3a00000 	mov	r0, #0	; 0x0
        144bd4:	e33c0000 	teq	ip, #0	; 0x0
        144bd8:	01a0f00e 	moveq	pc, lr
        144bdc:	e05c3001 	subs	r3, ip, r1
        144be0:	42633000 	rsbmi	r3, r3, #0	; 0x0
        144be4:	e3530f96 	cmp	r3, #600	; 0x258
        144be8:	c5a2001c 	strgt	r0, [r2, #28]!	; fField28
        144bec:	c1a0f00e 	movgt	pc, lr
        144bf0:	e15c0001 	cmp	ip, r1
        144bf4:	d3a00000 	movle	r0, #0	; 0x0
        144bf8:	c3a00001 	movgt	r0, #1	; 0x1
        144bfc:	e20000ff 	and	r0, r0, #255	; 0xff
        144c00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: StrokeCentral::IGCompressGroup(TStrokeUnit **)
 * Address: 00144c78
 */
StrokeCentral::IGCompressGroup(TStrokeUnit **) {
    /*
        144c78:	e1a0c00d 	mov	ip, sp
        144c7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        144c80:	e24cb004 	sub	fp, ip, #4	; 0x4
        144c84:	e1a05000 	mov	r5, r0
        144c88:	e1a04001 	mov	r4, r1
        144c8c:	e3a06000 	mov	r6, #0	; 0x0
        144c90:	e5910000 	ldr	r0, [r1]
        144c94:	e3300000 	teq	r0, #0	; 0x0
        144c98:	0a000006 	beq	144cb8 <StrokeCentral::IGCompressGroup(TStrokeUnit **)+0x40>
        144c9c:	e7941106 	ldr	r1, [r4, r6, lsl #2]
        144ca0:	e5950028 	ldr	r0, [r5, #40]	; fField40
        144ca4:	eb685c3d 	bl	1b5bda0 <TUnitList::$AddUnit(TUnit *)>
        144ca8:	e2866001 	add	r6, r6, #1	; 0x1
        144cac:	e7940106 	ldr	r0, [r4, r6, lsl #2]
        144cb0:	e3300000 	teq	r0, #0	; 0x0
        144cb4:	1afffff8 	bne	144c9c <StrokeCentral::IGCompressGroup(TStrokeUnit **)+0x24>
        144cb8:	e5856024 	str	r6, [r5, #36]	; fField36
        144cbc:	e1a00005 	mov	r0, r5
        144cc0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        144cc4:	ea000198 	b	14532c <StrokeCentral::CompressGroup(void)>
    */
}

/**
 * Symbol: StrokeCentral::ExpireAll(void)
 * Address: 00144cd8
 */
StrokeCentral::ExpireAll(void) {
    /*
        144cd8:	e1a0c00d 	mov	ip, sp
        144cdc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        144ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        144ce4:	e1a04000 	mov	r4, r0
        144ce8:	e5900034 	ldr	r0, [r0, #52]	; fField52
        144cec:	e3300000 	teq	r0, #0	; 0x0
        144cf0:	0a000008 	beq	144d18 <StrokeCentral::ExpireAll(void)+0x40>
        144cf4:	e2843034 	add	r3, r4, #52	; 0x34
        144cf8:	e92d0008 	stmdb	sp!, {r3}
        144cfc:	e59f0034 	ldr	r0, [pc, #34]	; 144d38 <StrokeCentral::ExpireAll(void)+0x60>
        144d00:	e5902000 	ldr	r2, [r0]
        144d04:	e1a00004 	mov	r0, r4
        144d08:	e3a03001 	mov	r3, #1	; 0x1
        144d0c:	e3a01000 	mov	r1, #0	; 0x0
        144d10:	eb676cd3 	bl	1b20064 <$IGGroupAndCompressStrokes(unsigned long, TStrokeUnit *, TStrokeUnit *, unsigned char, char ***)>
        144d14:	e28dd004 	add	sp, sp, #4	; 0x4
        144d18:	e5940028 	ldr	r0, [r4, #40]	; fField40
        144d1c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        144d20:	e3300000 	teq	r0, #0	; 0x0
        144d24:	0284002c 	addeq	r0, r4, #44	; 0x2c
        144d28:	059f100c 	ldreq	r1, [pc, #c]	; 144d3c <StrokeCentral::ExpireAll(void)+0x64>
        144d2c:	08911008 	ldmeqia	r1, {r3, ip}
        144d30:	08801008 	stmeqia	r0, {r3, ip}
        144d34:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        144d38:	0c101858 	ldceq	8, cr1, [r0], -#352
        144d3c:	0c101690 	ldceq	6, cr1, [r0], -#576
    */
}

/**
 * Symbol: StrokeCentral::InitFields(void)
 * Address: 00144d40
 */
StrokeCentral::InitFields(void) {
    /*
        144d40:	e1a0c00d 	mov	ip, sp
        144d44:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        144d48:	e24cb004 	sub	fp, ip, #4	; 0x4
        144d4c:	e1a04000 	mov	r4, r0
        144d50:	e3a06000 	mov	r6, #0	; 0x0
        144d54:	e5c06000 	strb	r6, [r0]
        144d58:	e5806004 	str	r6, [r0, #4]	; fField4
        144d5c:	e5806008 	str	r6, [r0, #8]	; fField8
        144d60:	e580600c 	str	r6, [r0, #12]	; fField12
        144d64:	e5806010 	str	r6, [r0, #16]	; fField16
        144d68:	e5806014 	str	r6, [r0, #20]	; fField20
        144d6c:	e5806018 	str	r6, [r0, #24]	; fField24
        144d70:	e5c06038 	strb	r6, [r0, #56]	; fField56
        144d74:	e5806024 	str	r6, [r0, #36]	; fField36
        144d78:	eb6870cb 	bl	1b610ac <$Make__9TUnitListSFv>
        144d7c:	e5840028 	str	r0, [r4, #40]	; fField40
        144d80:	e284102c 	add	r1, r4, #44	; 0x2c
        144d84:	e59f0068 	ldr	r0, [pc, #68]	; 144df4 <StrokeCentral::InitFields(void)+0xb4>
        144d88:	e8905000 	ldmia	r0, {ip, lr}
        144d8c:	e8815000 	stmia	r1, {ip, lr}
        144d90:	e3a00004 	mov	r0, #4	; 0x4
        144d94:	e5846034 	str	r6, [r4, #52]	; fField52
        144d98:	eb6a2666 	bl	1bce738 <$__nw(unsigned int)>
        144d9c:	e1b05000 	movs	r5, r0
        144da0:	0a000003 	beq	144db4 <StrokeCentral::InitFields(void)+0x74>
        144da4:	e3a00002 	mov	r0, #2	; 0x2
        144da8:	eb69f4e7 	bl	1bc214c <$AllocateRefHandle(long)>
        144dac:	e5850000 	str	r0, [r5]
        144db0:	e5a06004 	str	r6, [r0, #4]!	; fField4
        144db4:	e3a00000 	mov	r0, #0	; 0x0
        144db8:	e5845020 	str	r5, [r4, #32]	; fField32
        144dbc:	eb655bf6 	bl	1a9bd9c <$MakeArray(long)>
        144dc0:	e5951000 	ldr	r1, [r5]
        144dc4:	e5810000 	str	r0, [r1]
        144dc8:	e3a00004 	mov	r0, #4	; 0x4
        144dcc:	e584603c 	str	r6, [r4, #60]	; fField60
        144dd0:	eb6a2658 	bl	1bce738 <$__nw(unsigned int)>
        144dd4:	e1b05000 	movs	r5, r0
        144dd8:	0a000003 	beq	144dec <StrokeCentral::InitFields(void)+0xac>
        144ddc:	e3a00002 	mov	r0, #2	; 0x2
        144de0:	eb69f4d9 	bl	1bc214c <$AllocateRefHandle(long)>
        144de4:	e5850000 	str	r0, [r5]
        144de8:	e5a06004 	str	r6, [r0, #4]!	; fField4
        144dec:	e5a45040 	str	r5, [r4, #64]!	; fField64
        144df0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        144df4:	0c101690 	ldceq	6, cr1, [r0], -#576
    */
}

/**
 * Symbol: StrokeCentral::AddExpiredStroke(TStrokeUnit *)
 * Address: 00144df8
 */
StrokeCentral::AddExpiredStroke(TStrokeUnit *) {
    /*
        144df8:	e1a0c00d 	mov	ip, sp
        144dfc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        144e00:	e24cb004 	sub	fp, ip, #4	; 0x4
        144e04:	e1a04000 	mov	r4, r0
        144e08:	e1a05001 	mov	r5, r1
        144e0c:	e1a00001 	mov	r0, r1
        144e10:	e5911000 	ldr	r1, [r1]
        144e14:	e1a0e00f 	mov	lr, pc
        144e18:	e281f014 	add	pc, r1, #20	; 0x14
        144e1c:	e2843034 	add	r3, r4, #52	; 0x34
        144e20:	e92d0008 	stmdb	sp!, {r3}
        144e24:	e59f0020 	ldr	r0, [pc, #20]	; 144e4c <StrokeCentral::AddExpiredStroke(TStrokeUnit *)+0x54>	; fField20
        144e28:	e1a01005 	mov	r1, r5
        144e2c:	e5902000 	ldr	r2, [r0]
        144e30:	e1a00004 	mov	r0, r4
        144e34:	e3a03000 	mov	r3, #0	; 0x0
        144e38:	eb676c89 	bl	1b20064 <$IGGroupAndCompressStrokes(unsigned long, TStrokeUnit *, TStrokeUnit *, unsigned char, char ***)>
        144e3c:	e284002c 	add	r0, r4, #44	; 0x2c
        144e40:	e59f1008 	ldr	r1, [pc, #8]	; 144e50 <StrokeCentral::AddExpiredStroke(TStrokeUnit *)+0x58>	; fField8
        144e44:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        144e48:	ea6a6410 	b	1bdde90 <$TimeFromNow>
        144e4c:	0c101858 	ldceq	8, cr1, [r0], -#352
        144e50:	001c1f38 	andeqs	r1, ip, r8, lsr pc
    */
}

/**
 * Symbol: StrokeCentral::ExpireGroup(TUnitPublic **)
 * Address: 00145210
 */
StrokeCentral::ExpireGroup(TUnitPublic **) {
    /*
        145210:	e1a0c00d 	mov	ip, sp
        145214:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        145218:	e24cb004 	sub	fp, ip, #4	; 0x4
        14521c:	e1a04000 	mov	r4, r0
        145220:	e1a05001 	mov	r5, r1
        145224:	e59f0074 	ldr	r0, [pc, #74]	; 1452a0 <StrokeCentral::ExpireGroup(TUnitPublic **)+0x90>
        145228:	e5900000 	ldr	r0, [r0]
        14522c:	e5d00021 	ldrb	r0, [r0, #33]
        145230:	e3a06001 	mov	r6, #1	; 0x1
        145234:	e3300000 	teq	r0, #0	; 0x0
        145238:	1a00002b 	bne	1452ec <StrokeCentral::ExpireGroup(TUnitPublic **)+0xdc>
        14523c:	e3a00000 	mov	r0, #0	; 0x0
        145240:	e52d006c 	str	r0, [sp, -#108]!
        145244:	e28d0008 	add	r0, sp, #8	; 0x8
        145248:	eb69b5c9 	bl	1bb2974 <$setjmp>
        14524c:	e3300000 	teq	r0, #0	; 0x0
        145250:	1a000016 	bne	1452b0 <StrokeCentral::ExpireGroup(TUnitPublic **)+0xa0>
        145254:	e1a0000d 	mov	r0, sp
        145258:	eb6a6b87 	bl	1be007c <$AddExceptionHandler>
        14525c:	e594003c 	ldr	r0, [r4, #60]	; fField60
        145260:	e3300000 	teq	r0, #0	; 0x0
        145264:	0a00000e 	beq	1452a4 <StrokeCentral::ExpireGroup(TUnitPublic **)+0x94>
        145268:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14526c:	e28d1004 	add	r1, sp, #4	; 0x4
        145270:	e1a00005 	mov	r0, r5
        145274:	eb65d6b8 	bl	1abad5c <$StrokeBundle(TUnitPublic **, TRect *)>
        145278:	eb69f3b3 	bl	1bc214c <$AllocateRefHandle(long)>
        14527c:	e58d0000 	str	r0, [sp]
        145280:	e1a0100d 	mov	r1, sp
        145284:	e5940040 	ldr	r0, [r4, #64]	; fField64
        145288:	e1a0e00f 	mov	lr, pc
        14528c:	e594f03c 	ldr	pc, [r4, #60]	; fField60
        145290:	e59d0000 	ldr	r0, [sp]
        145294:	eb69f7c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        145298:	e28dd00c 	add	sp, sp, #12	; 0xc
        14529c:	ea00000f 	b	1452e0 <StrokeCentral::ExpireGroup(TUnitPublic **)+0xd0>
        1452a0:	0c101880 	ldceq	8, cr1, [r0], -#512
        1452a4:	e1a00005 	mov	r0, r5
        1452a8:	eb65a525 	bl	1aae744 <$ExpireUsingCommand(TUnitPublic **)>
        1452ac:	ea00000b 	b	1452e0 <StrokeCentral::ExpireGroup(TUnitPublic **)+0xd0>
        1452b0:	e59d0060 	ldr	r0, [sp, #96]
        1452b4:	e59f101c 	ldr	r1, [pc, #1c]	; 1452d8 <StrokeCentral::ExpireGroup(TUnitPublic **)+0xc8>
        1452b8:	e5911000 	ldr	r1, [r1]
        1452bc:	eb6a77b4 	bl	1be3194 <$Subexception>
        1452c0:	e3300000 	teq	r0, #0	; 0x0
        1452c4:	e1a0000d 	mov	r0, sp
        1452c8:	0a000003 	beq	1452dc <StrokeCentral::ExpireGroup(TUnitPublic **)+0xcc>
        1452cc:	e2800060 	add	r0, r0, #96	; 0x60
        1452d0:	eb6ab9af 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        1452d4:	ea000001 	b	1452e0 <StrokeCentral::ExpireGroup(TUnitPublic **)+0xd0>
        1452d8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        1452dc:	eb6a739c 	bl	1be2154 <$NextHandler>
        1452e0:	e1a0000d 	mov	r0, sp
        1452e4:	eb6a6f73 	bl	1be10b8 <$ExitHandler>
        1452e8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1452ec:	e5b4003c 	ldr	r0, [r4, #60]!	; fField60
        1452f0:	e3300000 	teq	r0, #0	; 0x0
        1452f4:	1a000006 	bne	145314 <StrokeCentral::ExpireGroup(TUnitPublic **)+0x104>
        1452f8:	e59f0020 	ldr	r0, [pc, #20]	; 145320 <StrokeCentral::ExpireGroup(TUnitPublic **)+0x110>	; fField20
        1452fc:	e5900000 	ldr	r0, [r0]
        145300:	e5c06014 	strb	r6, [r0, #20]	; fField20
        145304:	e59f0018 	ldr	r0, [pc, #18]	; 145324 <StrokeCentral::ExpireGroup(TUnitPublic **)+0x114>
        145308:	e5900000 	ldr	r0, [r0]
        14530c:	e3a01000 	mov	r1, #0	; 0x0
        145310:	eb657fe3 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        145314:	e59f000c 	ldr	r0, [pc, #c]	; 145328 <StrokeCentral::ExpireGroup(TUnitPublic **)+0x118>
        145318:	e5c0601c 	strb	r6, [r0, #28]	; fField28
        14531c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        145320:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        145324:	0c101934 	ldceq	9, cr1, [r0], -#208
        145328:	0c106e88 	ldceq	14, cr6, [r0], -#544
    */
}

/**
 * Symbol: StrokeCentral::CompressGroup(void)
 * Address: 0014532c
 */
StrokeCentral::CompressGroup(void) {
    /*
        14532c:	e1a0c00d 	mov	ip, sp
        145330:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        145334:	e24cb004 	sub	fp, ip, #4	; 0x4
        145338:	e1a04000 	mov	r4, r0
        14533c:	e5901024 	ldr	r1, [r0, #36]	; fField36
        145340:	e3a00004 	mov	r0, #4	; 0x4
        145344:	e0800101 	add	r0, r0, r1, lsl #2
        145348:	eb6a24fa 	bl	1bce738 <$__nw(unsigned int)>
        14534c:	e1b07000 	movs	r7, r0
        145350:	e59f90ec 	ldr	r9, [pc, #ec]	; 145444 <StrokeCentral::CompressGroup(void)+0x118>
        145354:	e3a050e9 	mov	r5, #233	; 0xe9
        145358:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        14535c:	1a000003 	bne	145370 <StrokeCentral::CompressGroup(void)+0x44>
        145360:	e3a02000 	mov	r2, #0	; 0x0
        145364:	e1a01005 	mov	r1, r5
        145368:	e5990000 	ldr	r0, [r9]
        14536c:	eb6a778a 	bl	1be319c <$Throw>
        145370:	e3a00000 	mov	r0, #0	; 0x0
        145374:	e3a08000 	mov	r8, #0	; 0x0
        145378:	e5941024 	ldr	r1, [r4, #36]	; fField36
        14537c:	e3510000 	cmp	r1, #0	; 0x0
        145380:	9a000004 	bls	145398 <StrokeCentral::CompressGroup(void)+0x6c>
        145384:	e7878100 	str	r8, [r7, r0, lsl #2]
        145388:	e2800001 	add	r0, r0, #1	; 0x1
        14538c:	e5941024 	ldr	r1, [r4, #36]	; fField36
        145390:	e1510000 	cmp	r1, r0
        145394:	8afffffa 	bhi	145384 <StrokeCentral::CompressGroup(void)+0x58>
        145398:	e3a0a000 	mov	sl, #0	; 0x0
        14539c:	e52d806c 	str	r8, [sp, -#108]!
        1453a0:	e28d0008 	add	r0, sp, #8	; 0x8
        1453a4:	eb69b572 	bl	1bb2974 <$setjmp>
        1453a8:	e3300000 	teq	r0, #0	; 0x0
        1453ac:	1a000025 	bne	145448 <StrokeCentral::CompressGroup(void)+0x11c>
        1453b0:	e1a0000d 	mov	r0, sp
        1453b4:	eb6a6b30 	bl	1be007c <$AddExceptionHandler>
        1453b8:	e3a06000 	mov	r6, #0	; 0x0
        1453bc:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1453c0:	e3500000 	cmp	r0, #0	; 0x0
        1453c4:	9a000015 	bls	145420 <StrokeCentral::CompressGroup(void)+0xf4>
        1453c8:	e1a01006 	mov	r1, r6
        1453cc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1453d0:	eb686af5 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        1453d4:	e1a01000 	mov	r1, r0
        1453d8:	e3a02000 	mov	r2, #0	; 0x0
        1453dc:	e3a00000 	mov	r0, #0	; 0x0
        1453e0:	eb6507ff 	bl	1a873e4 <TUnitPublic::$__ct(TUnit *, unsigned long)>
        1453e4:	e7870106 	str	r0, [r7, r6, lsl #2]
        1453e8:	e3300000 	teq	r0, #0	; 0x0
        1453ec:	1a000003 	bne	145400 <StrokeCentral::CompressGroup(void)+0xd4>
        1453f0:	e3a02000 	mov	r2, #0	; 0x0
        1453f4:	e1a01005 	mov	r1, r5
        1453f8:	e5990000 	ldr	r0, [r9]
        1453fc:	eb6a7766 	bl	1be319c <$Throw>
        145400:	e7970106 	ldr	r0, [r7, r6, lsl #2]
        145404:	eb657779 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        145408:	e3a01000 	mov	r1, #0	; 0x0
        14540c:	eb65523a 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        145410:	e2866001 	add	r6, r6, #1	; 0x1
        145414:	e5940024 	ldr	r0, [r4, #36]	; fField36
        145418:	e1500006 	cmp	r0, r6
        14541c:	8affffe9 	bhi	1453c8 <StrokeCentral::CompressGroup(void)+0x9c>
        145420:	e7878106 	str	r8, [r7, r6, lsl #2]
        145424:	e5940024 	ldr	r0, [r4, #36]	; fField36
        145428:	e3300000 	teq	r0, #0	; 0x0
        14542c:	11a01007 	movne	r1, r7
        145430:	11a00004 	movne	r0, r4
        145434:	1bffff75 	blne	145210 <StrokeCentral::ExpireGroup(TUnitPublic **)>
        145438:	e1a0000d 	mov	r0, sp
        14543c:	eb6a6f1d 	bl	1be10b8 <$ExitHandler>
        145440:	ea000001 	b	14544c <StrokeCentral::CompressGroup(void)+0x120>
        145444:	00371318 	eoreqs	r1, r7, r8, lsl r3
        145448:	e3a0a001 	mov	sl, #1	; 0x1
        14544c:	e3a05000 	mov	r5, #0	; 0x0
        145450:	e5940024 	ldr	r0, [r4, #36]	; fField36
        145454:	e3500000 	cmp	r0, #0	; 0x0
        145458:	9a000015 	bls	1454b4 <StrokeCentral::CompressGroup(void)+0x188>
        14545c:	e1a01005 	mov	r1, r5
        145460:	e5940028 	ldr	r0, [r4, #40]	; fField40
        145464:	eb686ad0 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        145468:	e1a06000 	mov	r6, r0
        14546c:	e1a01005 	mov	r1, r5
        145470:	e5942028 	ldr	r2, [r4, #40]	; fField40
        145474:	e1a00002 	mov	r0, r2
        145478:	e5922000 	ldr	r2, [r2]
        14547c:	e1a0e00f 	mov	lr, pc
        145480:	e282f01c 	add	pc, r2, #28	; 0x1c
        145484:	e5808000 	str	r8, [r0]
        145488:	e1a00006 	mov	r0, r6
        14548c:	e1a0e00f 	mov	lr, pc
        145490:	e596f000 	ldr	pc, [r6]
        145494:	e7970105 	ldr	r0, [r7, r5, lsl #2]
        145498:	e3300000 	teq	r0, #0	; 0x0
        14549c:	13a01001 	movne	r1, #1	; 0x1
        1454a0:	1b650be9 	blne	1a8844c <TUnitPublic::$__dt(void)>
        1454a4:	e2855001 	add	r5, r5, #1	; 0x1
        1454a8:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1454ac:	e1500005 	cmp	r0, r5
        1454b0:	8affffe9 	bhi	14545c <StrokeCentral::CompressGroup(void)+0x130>
        1454b4:	e2843024 	add	r3, r4, #36	; 0x24
        1454b8:	e893000c 	ldmia	r3, {r2, r3}
        1454bc:	e1a00003 	mov	r0, r3
        1454c0:	e3a01000 	mov	r1, #0	; 0x0
        1454c4:	e5933000 	ldr	r3, [r3]
        1454c8:	e1a0e00f 	mov	lr, pc
        1454cc:	e283f044 	add	pc, r3, #68	; 0x44
        1454d0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1454d4:	e5901000 	ldr	r1, [r0]
        1454d8:	e1a0e00f 	mov	lr, pc
        1454dc:	e281f024 	add	pc, r1, #36	; 0x24
        1454e0:	e1a00007 	mov	r0, r7
        1454e4:	e5a48024 	str	r8, [r4, #36]!	; fField36
        1454e8:	eb6a207c 	bl	1bcd6e0 <$__dl(void *)>
        1454ec:	e33a0000 	teq	sl, #0	; 0x0
        1454f0:	11a0000d 	movne	r0, sp
        1454f4:	1b6a7316 	blne	1be2154 <$NextHandler>
        1454f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: StrokeCentral::IdleCompress(void)
 * Address: 001454fc
 */
StrokeCentral::IdleCompress(void) {
    /*
        1454fc:	e1a0c00d 	mov	ip, sp
        145500:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        145504:	e24cb004 	sub	fp, ip, #4	; 0x4
        145508:	e1a04000 	mov	r4, r0
        14550c:	e59f0048 	ldr	r0, [pc, #48]	; 14555c <StrokeCentral::IdleCompress(void)+0x60>
        145510:	ebfffcb9 	bl	1447fc <StrokeCentral::CurrentStroke(void)>
        145514:	e3300000 	teq	r0, #0	; 0x0
        145518:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        14551c:	e24dd008 	sub	sp, sp, #8	; 0x8
        145520:	e284002c 	add	r0, r4, #44	; 0x2c
        145524:	e1a05000 	mov	r5, r0
        145528:	e59f1030 	ldr	r1, [pc, #30]	; 145560 <StrokeCentral::IdleCompress(void)+0x64>
        14552c:	eb6a6ed5 	bl	1be1088 <$CompCompare>
        145530:	e3300000 	teq	r0, #0	; 0x0
        145534:	0a000007 	beq	145558 <StrokeCentral::IdleCompress(void)+0x5c>
        145538:	e1a0000d 	mov	r0, sp
        14553c:	eb6a3925 	bl	1bd39d8 <$GetGlobalTime>
        145540:	e1a01005 	mov	r1, r5
        145544:	e1a0000d 	mov	r0, sp
        145548:	eb6a6ece 	bl	1be1088 <$CompCompare>
        14554c:	e3500000 	cmp	r0, #0	; 0x0
        145550:	a1a00004 	movge	r0, r4
        145554:	ab65a479 	blge	1aae740 <StrokeCentral::$ExpireAll(void)>
        145558:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14555c:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        145560:	0c101690 	ldceq	6, cr1, [r0], -#576
    */
}

/**
 * Symbol: StrokeCentral::UpdateCompressGroup(FRect *)
 * Address: 001455bc
 */
StrokeCentral::UpdateCompressGroup(FRect *) {
    /*
        1455bc:	e1a0c00d 	mov	ip, sp
        1455c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1455c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1455c8:	e1a04000 	mov	r4, r0
        1455cc:	e1a05001 	mov	r5, r1
        1455d0:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1455d4:	e590100c 	ldr	r1, [r0, #12]	; fField12
        1455d8:	e3510000 	cmp	r1, #0	; 0x0
        1455dc:	81a01005 	movhi	r1, r5
        1455e0:	8b666ea7 	blhi	1ae1084 <$UpdateStrokesInList(TUnitList *, FRect *)>
        1455e4:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1455e8:	e3300000 	teq	r0, #0	; 0x0
        1455ec:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1455f0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1455f4:	eb676a9b 	bl	1b20068 <$IGLockGroupData(char **)>
        1455f8:	e1a0200d 	mov	r2, sp
        1455fc:	e28d1004 	add	r1, sp, #4	; 0x4
        145600:	eb676a96 	bl	1b20060 <$IGGetStrokesQueue(void *, TStrokeUnit ***, unsigned long *)>
        145604:	e3a06000 	mov	r6, #0	; 0x0
        145608:	e59d0000 	ldr	r0, [sp]
        14560c:	e3500000 	cmp	r0, #0	; 0x0
        145610:	9a000008 	bls	145638 <StrokeCentral::UpdateCompressGroup(FRect *)+0x7c>
        145614:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        145618:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        14561c:	e3300000 	teq	r0, #0	; 0x0
        145620:	11a01005 	movne	r1, r5
        145624:	1b657f28 	blne	1aa52cc <$UpdateStroke(TStrokeUnit *, FRect *)>
        145628:	e2866001 	add	r6, r6, #1	; 0x1
        14562c:	e59d0000 	ldr	r0, [sp]
        145630:	e1560000 	cmp	r6, r0
        145634:	3afffff6 	bcc	145614 <StrokeCentral::UpdateCompressGroup(FRect *)+0x58>
        145638:	e5b40034 	ldr	r0, [r4, #52]!	; fField52
        14563c:	eb676a8b 	bl	1b20070 <$IGUnlockGroupData(char **)>
        145640:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: StrokeCentral::DoneFields(void)
 * Address: 00145644
 */
StrokeCentral::DoneFields(void) {
    /*
        145644:	e1a0c00d 	mov	ip, sp
        145648:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14564c:	e24cb004 	sub	fp, ip, #4	; 0x4
        145650:	e1a04000 	mov	r4, r0
        145654:	e5900028 	ldr	r0, [r0, #40]	; fField40
        145658:	e3300000 	teq	r0, #0	; 0x0
        14565c:	11a0e00f 	movne	lr, pc
        145660:	1590f000 	ldrne	pc, [r0]
        145664:	e5945020 	ldr	r5, [r4, #32]	; fField32
        145668:	e3350000 	teq	r5, #0	; 0x0
        14566c:	0a000003 	beq	145680 <StrokeCentral::DoneFields(void)+0x3c>
        145670:	e5950000 	ldr	r0, [r5]
        145674:	eb69f6d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        145678:	e1a00005 	mov	r0, r5
        14567c:	eb6a2017 	bl	1bcd6e0 <$__dl(void *)>
        145680:	e5944040 	ldr	r4, [r4, #64]	; fField64
        145684:	e3340000 	teq	r4, #0	; 0x0
        145688:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        14568c:	e5940000 	ldr	r0, [r4]
        145690:	eb69f6c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        145694:	e1a00004 	mov	r0, r4
        145698:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        14569c:	ea6a200f 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: StrokeCentral::SaveRecognitionState(unsigned char *)
 * Address: 001457fc
 */
StrokeCentral::SaveRecognitionState(unsigned char *) {
    /*
        1457fc:	e1a0c00d 	mov	ip, sp
        145800:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        145804:	e24cb004 	sub	fp, ip, #4	; 0x4
        145808:	e1a04000 	mov	r4, r0
        14580c:	e1a05001 	mov	r5, r1
        145810:	e3a00000 	mov	r0, #0	; 0x0
        145814:	e5c10000 	strb	r0, [r1]
        145818:	e3a00038 	mov	r0, #56	; 0x38
        14581c:	eb6a23c5 	bl	1bce738 <$__nw(unsigned int)>
        145820:	e3500000 	cmp	r0, #0	; 0x0
        145824:	e1a06000 	mov	r6, r0
        145828:	03a00001 	moveq	r0, #1	; 0x1
        14582c:	05c50000 	streqb	r0, [r5]
        145830:	0a00001e 	beq	1458b0 <StrokeCentral::SaveRecognitionState(unsigned char *)+0xb4>
        145834:	0a00001d 	beq	1458b0 <StrokeCentral::SaveRecognitionState(unsigned char *)+0xb4>
        145838:	e5d40000 	ldrb	r0, [r4]
        14583c:	e5c60000 	strb	r0, [r6]
        145840:	e5940004 	ldr	r0, [r4, #4]	; fField4
        145844:	e5860004 	str	r0, [r6, #4]	; fField4
        145848:	e5940008 	ldr	r0, [r4, #8]	; fField8
        14584c:	e5860008 	str	r0, [r6, #8]	; fField8
        145850:	e594000c 	ldr	r0, [r4, #12]	; fField12
        145854:	e586000c 	str	r0, [r6, #12]	; fField12
        145858:	e5940010 	ldr	r0, [r4, #16]	; fField16
        14585c:	e5860010 	str	r0, [r6, #16]	; fField16
        145860:	e5940020 	ldr	r0, [r4, #32]	; fField32
        145864:	e5860014 	str	r0, [r6, #20]	; fField20
        145868:	e5940024 	ldr	r0, [r4, #36]	; fField36
        14586c:	e5860018 	str	r0, [r6, #24]	; fField24
        145870:	e5940028 	ldr	r0, [r4, #40]	; fField40
        145874:	e586001c 	str	r0, [r6, #28]	; fField28
        145878:	e2860020 	add	r0, r6, #32	; 0x20
        14587c:	e284102c 	add	r1, r4, #44	; 0x2c
        145880:	e8915000 	ldmia	r1, {ip, lr}
        145884:	e8805000 	stmia	r0, {ip, lr}
        145888:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14588c:	e5860028 	str	r0, [r6, #40]	; fField40
        145890:	e5d40038 	ldrb	r0, [r4, #56]	; fField56
        145894:	e5c6002c 	strb	r0, [r6, #44]
        145898:	e594003c 	ldr	r0, [r4, #60]	; fField60
        14589c:	e5860030 	str	r0, [r6, #48]
        1458a0:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1458a4:	e5860034 	str	r0, [r6, #52]	; fField52
        1458a8:	e1a00004 	mov	r0, r4
        1458ac:	eb65bc65 	bl	1ab4a48 <StrokeCentral::$InitFields(void)>
        1458b0:	e1a00006 	mov	r0, r6
        1458b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: StrokeCentral::RestoreRecognitionState(unsigned long)
 * Address: 00145b6c
 */
StrokeCentral::RestoreRecognitionState(unsigned long) {
    /*
        145b6c:	e3310000 	teq	r1, #0	; 0x0
        145b70:	01a0f00e 	moveq	pc, lr
        145b74:	e1a0c00d 	mov	ip, sp
        145b78:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        145b7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        145b80:	e1a04000 	mov	r4, r0
        145b84:	e1a05001 	mov	r5, r1
        145b88:	e5900008 	ldr	r0, [r0, #8]	; fField8
        145b8c:	e3300000 	teq	r0, #0	; 0x0
        145b90:	13a01301 	movne	r1, #67108864	; 0x4000000
        145b94:	1b68799c 	blne	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        145b98:	e1a00004 	mov	r0, r4
        145b9c:	eb659ebf 	bl	1aad6a0 <StrokeCentral::$DoneFields(void)>
        145ba0:	e5d50000 	ldrb	r0, [r5]
        145ba4:	e5c40000 	strb	r0, [r4]
        145ba8:	e5950004 	ldr	r0, [r5, #4]	; fField4
        145bac:	e5840004 	str	r0, [r4, #4]	; fField4
        145bb0:	e5950008 	ldr	r0, [r5, #8]	; fField8
        145bb4:	e5840008 	str	r0, [r4, #8]	; fField8
        145bb8:	e595000c 	ldr	r0, [r5, #12]	; fField12
        145bbc:	e584000c 	str	r0, [r4, #12]	; fField12
        145bc0:	e5950010 	ldr	r0, [r5, #16]	; fField16
        145bc4:	e5840010 	str	r0, [r4, #16]	; fField16
        145bc8:	e5950014 	ldr	r0, [r5, #20]	; fField20
        145bcc:	e5840020 	str	r0, [r4, #32]	; fField32
        145bd0:	e5950018 	ldr	r0, [r5, #24]	; fField24
        145bd4:	e5840024 	str	r0, [r4, #36]	; fField36
        145bd8:	e595001c 	ldr	r0, [r5, #28]	; fField28
        145bdc:	e5840028 	str	r0, [r4, #40]	; fField40
        145be0:	e284002c 	add	r0, r4, #44	; 0x2c
        145be4:	e2851020 	add	r1, r5, #32	; 0x20
        145be8:	e8915000 	ldmia	r1, {ip, lr}
        145bec:	e8805000 	stmia	r0, {ip, lr}
        145bf0:	e5950028 	ldr	r0, [r5, #40]	; fField40
        145bf4:	e5840034 	str	r0, [r4, #52]	; fField52
        145bf8:	e5d5002c 	ldrb	r0, [r5, #44]
        145bfc:	e5c40038 	strb	r0, [r4, #56]	; fField56
        145c00:	e5950030 	ldr	r0, [r5, #48]
        145c04:	e584003c 	str	r0, [r4, #60]	; fField60
        145c08:	e5950034 	ldr	r0, [r5, #52]	; fField52
        145c0c:	e5a40040 	str	r0, [r4, #64]!	; fField64
        145c10:	e1a00005 	mov	r0, r5
        145c14:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        145c18:	ea6a1eb0 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: StrokeCentral::StartNewStroke(TStroke *)
 * Address: 00145e10
 */
StrokeCentral::StartNewStroke(TStroke *) {
    /*
        145e10:	e3a02001 	mov	r2, #1	; 0x1
        145e14:	e5c02000 	strb	r2, [r0]
        145e18:	e5801004 	str	r1, [r0, #4]	; fField4
        145e1c:	e590200c 	ldr	r2, [r0, #12]	; fField12
        145e20:	e581203c 	str	r2, [r1, #60]	; fField60
        145e24:	e5902010 	ldr	r2, [r0, #16]	; fField16
        145e28:	e5812040 	str	r2, [r1, #64]	; fField64
        145e2c:	e5911034 	ldr	r1, [r1, #52]	; fField52
        145e30:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        145e34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: StrokeCentral::DoneCurrentStroke(void)
 * Address: 00145f14
 */
StrokeCentral::DoneCurrentStroke(void) {
    /*
        145f14:	e1a0c00d 	mov	ip, sp
        145f18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        145f1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        145f20:	e1a04000 	mov	r4, r0
        145f24:	e5900004 	ldr	r0, [r0, #4]	; fField4
        145f28:	e5901034 	ldr	r1, [r0, #52]	; fField52
        145f2c:	e584100c 	str	r1, [r4, #12]	; fField12
        145f30:	e5900038 	ldr	r0, [r0, #56]	; fField56
        145f34:	e3a05000 	mov	r5, #0	; 0x0
        145f38:	e5840010 	str	r0, [r4, #16]	; fField16
        145f3c:	e5c45000 	strb	r5, [r4]
        145f40:	e5845004 	str	r5, [r4, #4]	; fField4
        145f44:	e3a01301 	mov	r1, #67108864	; 0x4000000
        145f48:	e5940008 	ldr	r0, [r4, #8]	; fField8
        145f4c:	eb6878ae 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        145f50:	e5845008 	str	r5, [r4, #8]	; fField8
        145f54:	e284002c 	add	r0, r4, #44	; 0x2c
        145f58:	e59f1004 	ldr	r1, [pc, #4]	; 145f64 <StrokeCentral::DoneCurrentStroke(void)+0x50>	; fField4
        145f5c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        145f60:	ea6a5fca 	b	1bdde90 <$TimeFromNow>
        145f64:	001c1f38 	andeqs	r1, ip, r8, lsr pc
    */
}

/**
 * Symbol: StrokeCentral::IdleCurrentStroke(void)
 * Address: 00145f68
 */
StrokeCentral::IdleCurrentStroke(void) {
    /*
        145f68:	e5901004 	ldr	r1, [r0, #4]	; fField4
        145f6c:	e2811020 	add	r1, r1, #32	; 0x20
        145f70:	e5900008 	ldr	r0, [r0, #8]	; fField8
        145f74:	ea6880e9 	b	1b66320 <TUnit::$SetBBox(FRect *)>
    */
}

