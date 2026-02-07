#include "include/TSerialChipVoyager.h"

/**
 * Symbol: TSerialChipVoyager::Init(TCardSocket *, TCardHandler *, unsigned char *)
 * Address: 001d6780
 */
TSerialChipVoyager::Init(TCardSocket *, TCardHandler *, unsigned char *) {
    /*
        1d6780:	e3a00f5a 	mov	r0, #360	; 0x168
        1d6784:	e2400901 	sub	r0, r0, #16384	; 0x4000
        1d6788:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::InitByOption(TOption *)
 * Address: 001d678c
 */
TSerialChipVoyager::InitByOption(TOption *) {
    /*
        1d678c:	e1a0c00d 	mov	ip, sp
        1d6790:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1d6794:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6798:	e1a04000 	mov	r4, r0
        1d679c:	e1a05001 	mov	r5, r1
        1d67a0:	e24dd010 	sub	sp, sp, #16	; 0x10
        1d67a4:	e3a09000 	mov	r9, #0	; 0x0
        1d67a8:	e3e08000 	mvn	r8, #0	; 0x0
        1d67ac:	e3e07000 	mvn	r7, #0	; 0x0
        1d67b0:	e5910000 	ldr	r0, [r1]
        1d67b4:	e59fc250 	ldr	ip, [pc, #250]	; 1d6a0c <TSerialChipVoyager::InitByOption(TOption *)+0x280>
        1d67b8:	e130000c 	teq	r0, ip
        1d67bc:	13a00069 	movne	r0, #105	; 0x69
        1d67c0:	12400c3f 	subne	r0, r0, #16128	; 0x3f00
        1d67c4:	1a00008f 	bne	1d6a08 <TSerialChipVoyager::InitByOption(TOption *)+0x27c>
        1d67c8:	e595000c 	ldr	r0, [r5, #12]
        1d67cc:	e5840024 	str	r0, [r4, #36]	; fField36
        1d67d0:	e5950010 	ldr	r0, [r5, #16]	; fField16
        1d67d4:	e5840028 	str	r0, [r4, #40]	; fField40
        1d67d8:	e5951018 	ldr	r1, [r5, #24]	; fField24
        1d67dc:	e584102c 	str	r1, [r4, #44]	; fField44
        1d67e0:	e595101c 	ldr	r1, [r5, #28]	; fField28
        1d67e4:	e3a0a000 	mov	sl, #0	; 0x0
        1d67e8:	e3300000 	teq	r0, #0	; 0x0
        1d67ec:	e5841030 	str	r1, [r4, #48]	; fField48
        1d67f0:	e584a03c 	str	sl, [r4, #60]	; fField60
        1d67f4:	03a08000 	moveq	r8, #0	; 0x0
        1d67f8:	03a07001 	moveq	r7, #1	; 0x1
        1d67fc:	0a000008 	beq	1d6824 <TSerialChipVoyager::InitByOption(TOption *)+0x98>
        1d6800:	e3300001 	teq	r0, #1	; 0x1
        1d6804:	03a08008 	moveq	r8, #8	; 0x8
        1d6808:	03a07008 	moveq	r7, #8	; 0x8
        1d680c:	0a000004 	beq	1d6824 <TSerialChipVoyager::InitByOption(TOption *)+0x98>
        1d6810:	e3300002 	teq	r0, #2	; 0x2
        1d6814:	0a000002 	beq	1d6824 <TSerialChipVoyager::InitByOption(TOption *)+0x98>
        1d6818:	e3300003 	teq	r0, #3	; 0x3
        1d681c:	03a08006 	moveq	r8, #6	; 0x6
        1d6820:	03a07007 	moveq	r7, #7	; 0x7
        1d6824:	e1380007 	teq	r8, r7
        1d6828:	1a000002 	bne	1d6838 <TSerialChipVoyager::InitByOption(TOption *)+0xac>
        1d682c:	e3770001 	cmn	r7, #1	; 0x1
        1d6830:	13a00001 	movne	r0, #1	; 0x1
        1d6834:	1a000000 	bne	1d683c <TSerialChipVoyager::InitByOption(TOption *)+0xb0>
        1d6838:	e3a00000 	mov	r0, #0	; 0x0
        1d683c:	e5c4008c 	strb	r0, [r4, #140]	; fField140
        1d6840:	e31000ff 	tst	r0, #255	; 0xff
        1d6844:	0a000004 	beq	1d685c <TSerialChipVoyager::InitByOption(TOption *)+0xd0>
        1d6848:	e1a00004 	mov	r0, r4
        1d684c:	eb625358 	bl	1a6b5b4 <TSerialChipVoyager::$GetFeatures(void)>
        1d6850:	e3100040 	tst	r0, #64	; 0x40
        1d6854:	05c4a08c 	streqb	sl, [r4, #140]	; fField140
        1d6858:	0a00001b 	beq	1d68cc <TSerialChipVoyager::InitByOption(TOption *)+0x140>
        1d685c:	e3770001 	cmn	r7, #1	; 0x1
        1d6860:	0a000019 	beq	1d68cc <TSerialChipVoyager::InitByOption(TOption *)+0x140>
        1d6864:	eb624f2c 	bl	1a6a51c <$GetDMAManagerObject(void)>
        1d6868:	e1a0200d 	mov	r2, sp
        1d686c:	e1a01007 	mov	r1, r7
        1d6870:	eb624b0b 	bl	1a694a4 <TDMAManager::$RequestAssignment(unsigned long, TDMAChannelDiscriptor *)>
        1d6874:	e1b09000 	movs	r9, r0
        1d6878:	1a000013 	bne	1d68cc <TSerialChipVoyager::InitByOption(TOption *)+0x140>
        1d687c:	e3a00000 	mov	r0, #0	; 0x0
        1d6880:	eb000a7d 	bl	1d927c <TSerialDMAEngine::__ct(void)>
        1d6884:	e5840078 	str	r0, [r4, #120]	; fField120
        1d6888:	e3300000 	teq	r0, #0	; 0x0
        1d688c:	0a00000e 	beq	1d68cc <TSerialChipVoyager::InitByOption(TOption *)+0x140>
        1d6890:	e5d4108c 	ldrb	r1, [r4, #140]	; fField140
        1d6894:	e3310000 	teq	r1, #0	; 0x0
        1d6898:	13a03000 	movne	r3, #0	; 0x0
        1d689c:	03a03001 	moveq	r3, #1	; 0x1
        1d68a0:	e1a02004 	mov	r2, r4
        1d68a4:	e1a0100d 	mov	r1, sp
        1d68a8:	eb625767 	bl	1a6c64c <TSerialDMAEngine::$Init(TDMAChannelDiscriptor *, void *, unsigned char)>
        1d68ac:	e1b09000 	movs	r9, r0
        1d68b0:	0a000005 	beq	1d68cc <TSerialChipVoyager::InitByOption(TOption *)+0x140>
        1d68b4:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d68b8:	e3300000 	teq	r0, #0	; 0x0
        1d68bc:	13a01001 	movne	r1, #1	; 0x1
        1d68c0:	1b000a7d 	blne	1d92bc <TSerialDMAEngine::__dt(void)>
        1d68c4:	e3a09000 	mov	r9, #0	; 0x0
        1d68c8:	e584a078 	str	sl, [r4, #120]	; fField120
        1d68cc:	e3780001 	cmn	r8, #1	; 0x1
        1d68d0:	0a000019 	beq	1d693c <TSerialChipVoyager::InitByOption(TOption *)+0x1b0>
        1d68d4:	e5d4008c 	ldrb	r0, [r4, #140]	; fField140
        1d68d8:	e3300000 	teq	r0, #0	; 0x0
        1d68dc:	1a000004 	bne	1d68f4 <TSerialChipVoyager::InitByOption(TOption *)+0x168>
        1d68e0:	eb624f0d 	bl	1a6a51c <$GetDMAManagerObject(void)>
        1d68e4:	e1a0200d 	mov	r2, sp
        1d68e8:	e1a01008 	mov	r1, r8
        1d68ec:	eb624aec 	bl	1a694a4 <TDMAManager::$RequestAssignment(unsigned long, TDMAChannelDiscriptor *)>
        1d68f0:	e1a09000 	mov	r9, r0
        1d68f4:	e3390000 	teq	r9, #0	; 0x0
        1d68f8:	1a00000f 	bne	1d693c <TSerialChipVoyager::InitByOption(TOption *)+0x1b0>
        1d68fc:	e3a00000 	mov	r0, #0	; 0x0
        1d6900:	eb000a5d 	bl	1d927c <TSerialDMAEngine::__ct(void)>
        1d6904:	e5840074 	str	r0, [r4, #116]	; fField116
        1d6908:	e3300000 	teq	r0, #0	; 0x0
        1d690c:	0a00000a 	beq	1d693c <TSerialChipVoyager::InitByOption(TOption *)+0x1b0>
        1d6910:	e1a02004 	mov	r2, r4
        1d6914:	e1a0100d 	mov	r1, sp
        1d6918:	e3a03001 	mov	r3, #1	; 0x1
        1d691c:	eb62574a 	bl	1a6c64c <TSerialDMAEngine::$Init(TDMAChannelDiscriptor *, void *, unsigned char)>
        1d6920:	e3300000 	teq	r0, #0	; 0x0
        1d6924:	0a000004 	beq	1d693c <TSerialChipVoyager::InitByOption(TOption *)+0x1b0>
        1d6928:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d692c:	e3300000 	teq	r0, #0	; 0x0
        1d6930:	13a01001 	movne	r1, #1	; 0x1
        1d6934:	1b000a60 	blne	1d92bc <TSerialDMAEngine::__dt(void)>
        1d6938:	e584a074 	str	sl, [r4, #116]	; fField116
        1d693c:	e5b50014 	ldr	r0, [r5, #20]!
        1d6940:	e5840038 	str	r0, [r4, #56]	; fField56
        1d6944:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d6948:	e3300001 	teq	r0, #1	; 0x1
        1d694c:	1a000006 	bne	1d696c <TSerialChipVoyager::InitByOption(TOption *)+0x1e0>
        1d6950:	e3a00000 	mov	r0, #0	; 0x0
        1d6954:	ebffff6b 	bl	1d6708 <THermesIRControl::__ct(void)>
        1d6958:	e584009c 	str	r0, [r4, #156]	; fField156
        1d695c:	e3300000 	teq	r0, #0	; 0x0
        1d6960:	03a000e9 	moveq	r0, #233	; 0xe9
        1d6964:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1d6968:	0a000026 	beq	1d6a08 <TSerialChipVoyager::InitByOption(TOption *)+0x27c>
        1d696c:	e584a070 	str	sl, [r4, #112]	; fField112
        1d6970:	e3a05001 	mov	r5, #1	; 0x1
        1d6974:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d6978:	e3300003 	teq	r0, #3	; 0x3
        1d697c:	1a00000c 	bne	1d69b4 <TSerialChipVoyager::InitByOption(TOption *)+0x228>
        1d6980:	e3a03003 	mov	r3, #3	; 0x3
        1d6984:	e92d0008 	stmdb	sp!, {r3}
        1d6988:	e2840070 	add	r0, r4, #112	; 0x70
        1d698c:	e59f307c 	ldr	r3, [pc, #7c]	; 1d6a10 <TSerialChipVoyager::InitByOption(TOption *)+0x284>
        1d6990:	e1a02004 	mov	r2, r4
        1d6994:	e3a01602 	mov	r1, #2097152	; 0x200000
        1d6998:	eb68cedf 	bl	1c0a51c <$RegisterInterrupt(InterruptObject **, unsigned long, void *, long (*)(void *), void *)>
        1d699c:	e28dd004 	add	sp, sp, #4	; 0x4
        1d69a0:	e1a01005 	mov	r1, r5
        1d69a4:	e5940070 	ldr	r0, [r4, #112]	; fField112
        1d69a8:	e3300000 	teq	r0, #0	; 0x0
        1d69ac:	11a02006 	movne	r2, r6
        1d69b0:	1b68cad0 	blne	1c094f8 <$ChangeInterruptPriority(InterruptObject *, InterruptPriority)>
        1d69b4:	e28410a0 	add	r1, r4, #160	; 0xa0
        1d69b8:	e1a00004 	mov	r0, r4
        1d69bc:	e3a02000 	mov	r2, #0	; 0x0
        1d69c0:	eb680063 	bl	1bd6b54 <$LockHeapRange>
        1d69c4:	e3300000 	teq	r0, #0	; 0x0
        1d69c8:	1a00000e 	bne	1d6a08 <TSerialChipVoyager::InitByOption(TOption *)+0x27c>
        1d69cc:	eb68adcf 	bl	1c02110 <$GetSerialChipRegistry(void)>
        1d69d0:	e5942038 	ldr	r2, [r4, #56]	; fField56
        1d69d4:	e1a01004 	mov	r1, r4
        1d69d8:	eb06b92a 	bl	384e88 <PSerialChipRegistry::Register(TSerialChip *, unsigned long)>
        1d69dc:	e3300000 	teq	r0, #0	; 0x0
        1d69e0:	1a000008 	bne	1d6a08 <TSerialChipVoyager::InitByOption(TOption *)+0x27c>
        1d69e4:	e5c45056 	strb	r5, [r4, #86]	; fField86
        1d69e8:	e1a00004 	mov	r0, r4
        1d69ec:	eb625302 	bl	1a6b5fc <TSerialChipVoyager::$RegisterPrimaryInterrupt(void)>
        1d69f0:	e3300000 	teq	r0, #0	; 0x0
        1d69f4:	0a000003 	beq	1d6a08 <TSerialChipVoyager::InitByOption(TOption *)+0x27c>
        1d69f8:	e5941028 	ldr	r1, [r4, #40]	; fField40
        1d69fc:	e3310000 	teq	r1, #0	; 0x0
        1d6a00:	05844010 	streq	r4, [r4, #16]	; fField16
        1d6a04:	03a00000 	moveq	r0, #0	; 0x0
        1d6a08:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1d6a0c:	76736877 	undefined
        1d6a10:	001d8d84 	andeqs	r8, sp, r4, lsl #27
    */
}

/**
 * Symbol: TSerialChipVoyager::InstallChipHandler(void *, SCCChannelInts *)
 * Address: 001d6a14
 */
TSerialChipVoyager::InstallChipHandler(void *, SCCChannelInts *) {
    /*
        1d6a14:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1d6a18:	e3330000 	teq	r3, #0	; 0x0
        1d6a1c:	13a00e9b 	movne	r0, #2480	; 0x9b0
        1d6a20:	12400a05 	subne	r0, r0, #20480	; 0x5000
        1d6a24:	11a0f00e 	movne	pc, lr
        1d6a28:	e1a0c00d 	mov	ip, sp
        1d6a2c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d6a30:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6a34:	e5801010 	str	r1, [r0, #16]	; fField16
        1d6a38:	e2801014 	add	r1, r0, #20	; 0x14
        1d6a3c:	e892500c 	ldmia	r2, {r2, r3, ip, lr}
        1d6a40:	e881500c 	stmia	r1, {r2, r3, ip, lr}
        1d6a44:	e3a04000 	mov	r4, #0	; 0x0
        1d6a48:	e5c04054 	strb	r4, [r0, #84]	; fField84
        1d6a4c:	e5901030 	ldr	r1, [r0, #48]	; fField48
        1d6a50:	eb6252d9 	bl	1a6b5bc <TSerialChipVoyager::$SetSerialMode(unsigned long)>
        1d6a54:	e1a00004 	mov	r0, r4
        1d6a58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::RemoveChipHandler(void *)
 * Address: 001d6a5c
 */
TSerialChipVoyager::RemoveChipHandler(void *) {
    /*
        1d6a5c:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1d6a60:	e1320001 	teq	r2, r1
        1d6a64:	13e00051 	mvnne	r0, #81	; 0x51
        1d6a68:	12400c46 	subne	r0, r0, #17920	; 0x4600
        1d6a6c:	11a0f00e 	movne	pc, lr
        1d6a70:	e1a0c00d 	mov	ip, sp
        1d6a74:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1d6a78:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6a7c:	eb000001 	bl	1d6a88 <TSerialChipVoyager::InitializeForNextHandler(void)>
        1d6a80:	e3a00000 	mov	r0, #0	; 0x0
        1d6a84:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::InitializeForNextHandler(void)
 * Address: 001d6a88
 */
TSerialChipVoyager::InitializeForNextHandler(void) {
    /*
        1d6a88:	e1a0c00d 	mov	ip, sp
        1d6a8c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d6a90:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6a94:	e1a04000 	mov	r4, r0
        1d6a98:	e3a05000 	mov	r5, #0	; 0x0
        1d6a9c:	e5805010 	str	r5, [r0, #16]	; fField16
        1d6aa0:	e5805084 	str	r5, [r0, #132]	; fField132
        1d6aa4:	e5805088 	str	r5, [r0, #136]	; fField136
        1d6aa8:	e5c0508f 	strb	r5, [r0, #143]	; fField143
        1d6aac:	e5805090 	str	r5, [r0, #144]	; fField144
        1d6ab0:	e580507c 	str	r5, [r0, #124]	; fField124
        1d6ab4:	e5805080 	str	r5, [r0, #128]	; fField128
        1d6ab8:	e5c0508d 	strb	r5, [r0, #141]	; fField141
        1d6abc:	e5c0508e 	strb	r5, [r0, #142]	; fField142
        1d6ac0:	e5c45059 	strb	r5, [r4, #89]	; fField89
        1d6ac4:	e3a00066 	mov	r0, #102	; 0x66
        1d6ac8:	e2800c0e 	add	r0, r0, #3584	; 0xe00
        1d6acc:	e5840040 	str	r0, [r4, #64]	; fField64
        1d6ad0:	e5840044 	str	r0, [r4, #68]	; fField68
        1d6ad4:	e5941094 	ldr	r1, [r4, #148]	; fField148
        1d6ad8:	e3310000 	teq	r1, #0	; 0x0
        1d6adc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1d6ae0:	e5940098 	ldr	r0, [r4, #152]	; fField152
        1d6ae4:	eb610846 	bl	1a18c04 <TFIQTimer::$ReleaseFIQTimer(FIQTimer *)>
        1d6ae8:	e5a45094 	str	r5, [r4, #148]!	; fField148
        1d6aec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::PutByte(unsigned char)
 * Address: 001d6af0
 */
TSerialChipVoyager::PutByte(unsigned char) {
    /*
        1d6af0:	e20130ff 	and	r3, r1, #255	; 0xff
        1d6af4:	e5d01064 	ldrb	r1, [r0, #100]	; fField100
        1d6af8:	e3110080 	tst	r1, #128	; 0x80
        1d6afc:	0590203c 	ldreq	r2, [r0, #60]	; fField60
        1d6b00:	02022008 	andeq	r2, r2, #8	; 0x8
        1d6b04:	03320000 	teqeq	r2, #0	; 0x0
        1d6b08:	1a000007 	bne	1d6b2c <TSerialChipVoyager::PutByte(unsigned char)+0x3c>
        1d6b0c:	e20110ff 	and	r1, r1, #255	; 0xff
        1d6b10:	e3811080 	orr	r1, r1, #128	; 0x80
        1d6b14:	e5902024 	ldr	r2, [r0, #36]	; fField36
        1d6b18:	e5c01064 	strb	r1, [r0, #100]	; fField100
        1d6b1c:	e3a0c080 	mov	ip, #128	; 0x80
        1d6b20:	e2822a03 	add	r2, r2, #12288	; 0x3000
        1d6b24:	e5c2cc00 	strb	ip, [r2, #3072]	; fField3072
        1d6b28:	e5c21000 	strb	r1, [r2]
        1d6b2c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d6b30:	e2800a06 	add	r0, r0, #24576	; 0x6000
        1d6b34:	e5c03000 	strb	r3, [r0]
        1d6b38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::ResetTxBEmpty(void)
 * Address: 001d6b3c
 */
TSerialChipVoyager::ResetTxBEmpty(void) {
    /*
        1d6b3c:	e5902024 	ldr	r2, [r0, #36]	; fField36
        1d6b40:	e5d01064 	ldrb	r1, [r0, #100]	; fField100
        1d6b44:	e201107f 	and	r1, r1, #127	; 0x7f
        1d6b48:	e5c01064 	strb	r1, [r0, #100]	; fField100
        1d6b4c:	e2820a03 	add	r0, r2, #12288	; 0x3000
        1d6b50:	e5c01000 	strb	r1, [r0]
        1d6b54:	e3a01080 	mov	r1, #128	; 0x80
        1d6b58:	e5c01c00 	strb	r1, [r0, #3072]	; fField3072
        1d6b5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::GetByte(void)
 * Address: 001d6b60
 */
TSerialChipVoyager::GetByte(void) {
    /*
        1d6b60:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d6b64:	e2800a07 	add	r0, r0, #28672	; 0x7000
        1d6b68:	e5d00000 	ldrb	r0, [r0]
        1d6b6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::TxBufEmpty(void)
 * Address: 001d6b70
 */
TSerialChipVoyager::TxBufEmpty(void) {
    /*
        1d6b70:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d6b74:	e2800901 	add	r0, r0, #16384	; 0x4000
        1d6b78:	e5d00400 	ldrb	r0, [r0, #1024]	; fField1024
        1d6b7c:	e2000080 	and	r0, r0, #128	; 0x80
        1d6b80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::RxBufFull(void)
 * Address: 001d6b84
 */
TSerialChipVoyager::RxBufFull(void) {
    /*
        1d6b84:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d6b88:	e2800901 	add	r0, r0, #16384	; 0x4000
        1d6b8c:	e5d00400 	ldrb	r0, [r0, #1024]	; fField1024
        1d6b90:	e2000040 	and	r0, r0, #64	; 0x40
        1d6b94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::GetRxErrorStatus(void)
 * Address: 001d6bac
 */
TSerialChipVoyager::GetRxErrorStatus(void) {
    /*
        1d6bac:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d6bb0:	e2812901 	add	r2, r1, #16384	; 0x4000
        1d6bb4:	e5d22800 	ldrb	r2, [r2, #2048]	; fField2048
        1d6bb8:	e21220f0 	ands	r2, r2, #240	; 0xf0
        1d6bbc:	0a000003 	beq	1d6bd0 <TSerialChipVoyager::GetRxErrorStatus(void)+0x24>
        1d6bc0:	e5d00061 	ldrb	r0, [r0, #97]	; fField97
        1d6bc4:	e3800001 	orr	r0, r0, #1	; 0x1
        1d6bc8:	e2811a02 	add	r1, r1, #8192	; 0x2000
        1d6bcc:	e5c10000 	strb	r0, [r1]
        1d6bd0:	e1a00002 	mov	r0, r2
        1d6bd4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::GetSerialStatus(void)
 * Address: 001d6bd8
 */
TSerialChipVoyager::GetSerialStatus(void) {
    /*
        1d6bd8:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d6bdc:	e2812901 	add	r2, r1, #16384	; 0x4000
        1d6be0:	e5d22400 	ldrb	r2, [r2, #1024]	; fField1024
        1d6be4:	e2811a03 	add	r1, r1, #12288	; 0x3000
        1d6be8:	e5d11000 	ldrb	r1, [r1]
        1d6bec:	e0011002 	and	r1, r1, r2
        1d6bf0:	e20130ff 	and	r3, r1, #255	; 0xff
        1d6bf4:	e3a01000 	mov	r1, #0	; 0x0
        1d6bf8:	e3120080 	tst	r2, #128	; 0x80
        1d6bfc:	13a01004 	movne	r1, #4	; 0x4
        1d6c00:	e3120060 	tst	r2, #96	; 0x60
        1d6c04:	13811001 	orrne	r1, r1, #1	; 0x1
        1d6c08:	e590c028 	ldr	ip, [r0, #40]	; fField40
        1d6c0c:	e33c0003 	teq	ip, #3	; 0x3
        1d6c10:	1a000008 	bne	1d6c38 <TSerialChipVoyager::GetSerialStatus(void)+0x60>
        1d6c14:	e590c070 	ldr	ip, [r0, #112]	; fField112
        1d6c18:	e33c0000 	teq	ip, #0	; 0x0
        1d6c1c:	0a000005 	beq	1d6c38 <TSerialChipVoyager::GetSerialStatus(void)+0x60>
        1d6c20:	e59fc00c 	ldr	ip, [pc, #c]	; 1d6c34 <TSerialChipVoyager::GetSerialStatus(void)+0x5c>
        1d6c24:	e59cc000 	ldr	ip, [ip]
        1d6c28:	e31c0602 	tst	ip, #2097152	; 0x200000
        1d6c2c:	1a000004 	bne	1d6c44 <TSerialChipVoyager::GetSerialStatus(void)+0x6c>
        1d6c30:	ea000002 	b	1d6c40 <TSerialChipVoyager::GetSerialStatus(void)+0x68>
        1d6c34:	0f184c00 	swieq	0x00184c00
        1d6c38:	e3120010 	tst	r2, #16	; 0x10
        1d6c3c:	1a000000 	bne	1d6c44 <TSerialChipVoyager::GetSerialStatus(void)+0x6c>
        1d6c40:	e3811008 	orr	r1, r1, #8	; 0x8
        1d6c44:	e3120008 	tst	r2, #8	; 0x8
        1d6c48:	13811020 	orrne	r1, r1, #32	; 0x20
        1d6c4c:	e3130004 	tst	r3, #4	; 0x4
        1d6c50:	13811040 	orrne	r1, r1, #64	; 0x40
        1d6c54:	e3130001 	tst	r3, #1	; 0x1
        1d6c58:	05d00058 	ldreqb	r0, [r0, #88]	; fField88
        1d6c5c:	03300000 	teqeq	r0, #0	; 0x0
        1d6c60:	13811080 	orrne	r1, r1, #128	; 0x80
        1d6c64:	e1a00001 	mov	r0, r1
        1d6c68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::ResetSerialStatus(void)
 * Address: 001d6c6c
 */
TSerialChipVoyager::ResetSerialStatus(void) {
    /*
        1d6c6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::SetSerialOutputs(unsigned long)
 * Address: 001d6c70
 */
TSerialChipVoyager::SetSerialOutputs(unsigned long) {
    /*
        1d6c70:	e5902024 	ldr	r2, [r0, #36]	; fField36
        1d6c74:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1d6c78:	e3300000 	teq	r0, #0	; 0x0
        1d6c7c:	13300003 	teqne	r0, #3	; 0x3
        1d6c80:	11a0f00e 	movne	pc, lr
        1d6c84:	e2822a02 	add	r2, r2, #8192	; 0x2000
        1d6c88:	e5d20800 	ldrb	r0, [r2, #2048]	; fField2048
        1d6c8c:	e3110002 	tst	r1, #2	; 0x2
        1d6c90:	120000ff 	andne	r0, r0, #255	; 0xff
        1d6c94:	13800002 	orrne	r0, r0, #2	; 0x2
        1d6c98:	e5c20800 	strb	r0, [r2, #2048]	; fField2048
        1d6c9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::ClearSerialOutputs(unsigned long)
 * Address: 001d6ca0
 */
TSerialChipVoyager::ClearSerialOutputs(unsigned long) {
    /*
        1d6ca0:	e5902024 	ldr	r2, [r0, #36]	; fField36
        1d6ca4:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1d6ca8:	e3300000 	teq	r0, #0	; 0x0
        1d6cac:	13300003 	teqne	r0, #3	; 0x3
        1d6cb0:	11a0f00e 	movne	pc, lr
        1d6cb4:	e2822a02 	add	r2, r2, #8192	; 0x2000
        1d6cb8:	e5d20800 	ldrb	r0, [r2, #2048]	; fField2048
        1d6cbc:	e3110002 	tst	r1, #2	; 0x2
        1d6cc0:	120000fd 	andne	r0, r0, #253	; 0xfd
        1d6cc4:	e5c20800 	strb	r0, [r2, #2048]	; fField2048
        1d6cc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::GetSerialOutputs(void)
 * Address: 001d6ccc
 */
TSerialChipVoyager::GetSerialOutputs(void) {
    /*
        1d6ccc:	e3a01000 	mov	r1, #0	; 0x0
        1d6cd0:	e5902024 	ldr	r2, [r0, #36]	; fField36
        1d6cd4:	e2822a02 	add	r2, r2, #8192	; 0x2000
        1d6cd8:	e5d22800 	ldrb	r2, [r2, #2048]	; fField2048
        1d6cdc:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1d6ce0:	e3300000 	teq	r0, #0	; 0x0
        1d6ce4:	13300003 	teqne	r0, #3	; 0x3
        1d6ce8:	1a000001 	bne	1d6cf4 <TSerialChipVoyager::GetSerialOutputs(void)+0x28>
        1d6cec:	e3120002 	tst	r2, #2	; 0x2
        1d6cf0:	13a01002 	movne	r1, #2	; 0x2
        1d6cf4:	e1a00001 	mov	r0, r1
        1d6cf8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::PowerOff(void)
 * Address: 001d6cfc
 */
TSerialChipVoyager::PowerOff(void) {
    /*
        1d6cfc:	e1a0c00d 	mov	ip, sp
        1d6d00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d6d04:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6d08:	e1a04000 	mov	r4, r0
        1d6d0c:	eb06ef9f 	bl	392b90 <EnterFIQAtomic>
        1d6d10:	e1a00004 	mov	r0, r4
        1d6d14:	e3a01000 	mov	r1, #0	; 0x0
        1d6d18:	eb625220 	bl	1a6b5a0 <TSerialChipVoyager::$SetInterruptEnable(unsigned char)>
        1d6d1c:	e1a00004 	mov	r0, r4
        1d6d20:	e3a01000 	mov	r1, #0	; 0x0
        1d6d24:	eb625226 	bl	1a6b5c4 <TSerialChipVoyager::$SetTxDTransceiverEnable(unsigned char)>
        1d6d28:	e5d4008d 	ldrb	r0, [r4, #141]	; fField141
        1d6d2c:	e3300002 	teq	r0, #2	; 0x2
        1d6d30:	01a00004 	moveq	r0, r4
        1d6d34:	03a01002 	moveq	r1, #2	; 0x2
        1d6d38:	0b62522a 	bleq	1a6b5e8 <TSerialChipVoyager::$TxDMAControl(unsigned char)>
        1d6d3c:	e5d4008f 	ldrb	r0, [r4, #143]	; fField143
        1d6d40:	e3300002 	teq	r0, #2	; 0x2
        1d6d44:	01a00004 	moveq	r0, r4
        1d6d48:	03a01002 	moveq	r1, #2	; 0x2
        1d6d4c:	0b625226 	bleq	1a6b5ec <TSerialChipVoyager::$RxDMAControl(unsigned char)>
        1d6d50:	e1a00004 	mov	r0, r4
        1d6d54:	e3a01000 	mov	r1, #0	; 0x0
        1d6d58:	eb625210 	bl	1a6b5a0 <TSerialChipVoyager::$SetInterruptEnable(unsigned char)>
        1d6d5c:	eb06ef93 	bl	392bb0 <ExitFIQAtomic>
        1d6d60:	eb624ded 	bl	1a6a51c <$GetDMAManagerObject(void)>
        1d6d64:	e1a05000 	mov	r5, r0
        1d6d68:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d6d6c:	e3300000 	teq	r0, #0	; 0x0
        1d6d70:	0a000016 	beq	1d6dd0 <TSerialChipVoyager::PowerOff(void)+0xd4>
        1d6d74:	e3300001 	teq	r0, #1	; 0x1
        1d6d78:	0a000021 	beq	1d6e04 <TSerialChipVoyager::PowerOff(void)+0x108>
        1d6d7c:	e3300002 	teq	r0, #2	; 0x2
        1d6d80:	0a00002d 	beq	1d6e3c <TSerialChipVoyager::PowerOff(void)+0x140>
        1d6d84:	e3300003 	teq	r0, #3	; 0x3
        1d6d88:	1a00002d 	bne	1d6e44 <TSerialChipVoyager::PowerOff(void)+0x148>
        1d6d8c:	e3a00003 	mov	r0, #3	; 0x3
        1d6d90:	eb68d215 	bl	1c0b5ec <$IOPowerOff(unsigned long)>
        1d6d94:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d6d98:	e3300000 	teq	r0, #0	; 0x0
        1d6d9c:	11a00005 	movne	r0, r5
        1d6da0:	13a01007 	movne	r1, #7	; 0x7
        1d6da4:	1b6249c0 	blne	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
        1d6da8:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d6dac:	e3300000 	teq	r0, #0	; 0x0
        1d6db0:	11a00005 	movne	r0, r5
        1d6db4:	13a01006 	movne	r1, #6	; 0x6
        1d6db8:	1b6249bb 	blne	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
        1d6dbc:	e5d40059 	ldrb	r0, [r4, #89]	; fField89
        1d6dc0:	e3300000 	teq	r0, #0	; 0x0
        1d6dc4:	13a00005 	movne	r0, #5	; 0x5
        1d6dc8:	1b66a472 	blne	1b7ff98 <$DisableExtSoundSource(long)>
        1d6dcc:	ea00001c 	b	1d6e44 <TSerialChipVoyager::PowerOff(void)+0x148>
        1d6dd0:	e3a00001 	mov	r0, #1	; 0x1
        1d6dd4:	eb68d204 	bl	1c0b5ec <$IOPowerOff(unsigned long)>
        1d6dd8:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d6ddc:	e3300000 	teq	r0, #0	; 0x0
        1d6de0:	11a00005 	movne	r0, r5
        1d6de4:	13a01001 	movne	r1, #1	; 0x1
        1d6de8:	1b6249af 	blne	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
        1d6dec:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d6df0:	e3300000 	teq	r0, #0	; 0x0
        1d6df4:	11a00005 	movne	r0, r5
        1d6df8:	13a01000 	movne	r1, #0	; 0x0
        1d6dfc:	1a00000c 	bne	1d6e34 <TSerialChipVoyager::PowerOff(void)+0x138>
        1d6e00:	ea00000f 	b	1d6e44 <TSerialChipVoyager::PowerOff(void)+0x148>
        1d6e04:	e3a00002 	mov	r0, #2	; 0x2
        1d6e08:	eb68d1f7 	bl	1c0b5ec <$IOPowerOff(unsigned long)>
        1d6e0c:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d6e10:	e3300000 	teq	r0, #0	; 0x0
        1d6e14:	11a00005 	movne	r0, r5
        1d6e18:	13a01003 	movne	r1, #3	; 0x3
        1d6e1c:	1b6249a2 	blne	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
        1d6e20:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d6e24:	e3300000 	teq	r0, #0	; 0x0
        1d6e28:	0a000005 	beq	1d6e44 <TSerialChipVoyager::PowerOff(void)+0x148>
        1d6e2c:	e1a00005 	mov	r0, r5
        1d6e30:	e3a01002 	mov	r1, #2	; 0x2
        1d6e34:	eb62499c 	bl	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
        1d6e38:	ea000001 	b	1d6e44 <TSerialChipVoyager::PowerOff(void)+0x148>
        1d6e3c:	e3a00004 	mov	r0, #4	; 0x4
        1d6e40:	eb68d1e9 	bl	1c0b5ec <$IOPowerOff(unsigned long)>
        1d6e44:	e3a00000 	mov	r0, #0	; 0x0
        1d6e48:	e5c40055 	strb	r0, [r4, #85]	; fField85
        1d6e4c:	e3a00001 	mov	r0, #1	; 0x1
        1d6e50:	e5c40057 	strb	r0, [r4, #87]	; fField87
        1d6e54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::PowerOn(void)
 * Address: 001d6e58
 */
TSerialChipVoyager::PowerOn(void) {
    /*
        1d6e58:	e1a0c00d 	mov	ip, sp
        1d6e5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d6e60:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6e64:	e1a04000 	mov	r4, r0
        1d6e68:	eb624dab 	bl	1a6a51c <$GetDMAManagerObject(void)>
        1d6e6c:	e1a05000 	mov	r5, r0
        1d6e70:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d6e74:	e3300000 	teq	r0, #0	; 0x0
        1d6e78:	0a000016 	beq	1d6ed8 <TSerialChipVoyager::PowerOn(void)+0x80>
        1d6e7c:	e3300001 	teq	r0, #1	; 0x1
        1d6e80:	0a000021 	beq	1d6f0c <TSerialChipVoyager::PowerOn(void)+0xb4>
        1d6e84:	e3300002 	teq	r0, #2	; 0x2
        1d6e88:	0a00002d 	beq	1d6f44 <TSerialChipVoyager::PowerOn(void)+0xec>
        1d6e8c:	e3300003 	teq	r0, #3	; 0x3
        1d6e90:	1a00002d 	bne	1d6f4c <TSerialChipVoyager::PowerOn(void)+0xf4>
        1d6e94:	e3a00003 	mov	r0, #3	; 0x3
        1d6e98:	eb68d1d4 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
        1d6e9c:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d6ea0:	e3300000 	teq	r0, #0	; 0x0
        1d6ea4:	11a00005 	movne	r0, r5
        1d6ea8:	13a01007 	movne	r1, #7	; 0x7
        1d6eac:	1b62497d 	blne	1a694a8 <TDMAManager::$PowerOnAssignment(unsigned long)>
        1d6eb0:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d6eb4:	e3300000 	teq	r0, #0	; 0x0
        1d6eb8:	11a00005 	movne	r0, r5
        1d6ebc:	13a01006 	movne	r1, #6	; 0x6
        1d6ec0:	1b624978 	blne	1a694a8 <TDMAManager::$PowerOnAssignment(unsigned long)>
        1d6ec4:	e5d40059 	ldrb	r0, [r4, #89]	; fField89
        1d6ec8:	e3300000 	teq	r0, #0	; 0x0
        1d6ecc:	13a00005 	movne	r0, #5	; 0x5
        1d6ed0:	1b66a42f 	blne	1b7ff94 <$EnableExtSoundSource(long)>
        1d6ed4:	ea00001c 	b	1d6f4c <TSerialChipVoyager::PowerOn(void)+0xf4>
        1d6ed8:	e3a00001 	mov	r0, #1	; 0x1
        1d6edc:	eb68d1c3 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
        1d6ee0:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d6ee4:	e3300000 	teq	r0, #0	; 0x0
        1d6ee8:	11a00005 	movne	r0, r5
        1d6eec:	13a01001 	movne	r1, #1	; 0x1
        1d6ef0:	1b62496c 	blne	1a694a8 <TDMAManager::$PowerOnAssignment(unsigned long)>
        1d6ef4:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d6ef8:	e3300000 	teq	r0, #0	; 0x0
        1d6efc:	11a00005 	movne	r0, r5
        1d6f00:	13a01000 	movne	r1, #0	; 0x0
        1d6f04:	1a00000c 	bne	1d6f3c <TSerialChipVoyager::PowerOn(void)+0xe4>
        1d6f08:	ea00000f 	b	1d6f4c <TSerialChipVoyager::PowerOn(void)+0xf4>
        1d6f0c:	e3a00002 	mov	r0, #2	; 0x2
        1d6f10:	eb68d1b6 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
        1d6f14:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d6f18:	e3300000 	teq	r0, #0	; 0x0
        1d6f1c:	11a00005 	movne	r0, r5
        1d6f20:	13a01003 	movne	r1, #3	; 0x3
        1d6f24:	1b62495f 	blne	1a694a8 <TDMAManager::$PowerOnAssignment(unsigned long)>
        1d6f28:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d6f2c:	e3300000 	teq	r0, #0	; 0x0
        1d6f30:	0a000005 	beq	1d6f4c <TSerialChipVoyager::PowerOn(void)+0xf4>
        1d6f34:	e1a00005 	mov	r0, r5
        1d6f38:	e3a01002 	mov	r1, #2	; 0x2
        1d6f3c:	eb624959 	bl	1a694a8 <TDMAManager::$PowerOnAssignment(unsigned long)>
        1d6f40:	ea000001 	b	1d6f4c <TSerialChipVoyager::PowerOn(void)+0xf4>
        1d6f44:	e3a00004 	mov	r0, #4	; 0x4
        1d6f48:	eb68d1a8 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
        1d6f4c:	e3a01040 	mov	r1, #64	; 0x40
        1d6f50:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d6f54:	e5c01000 	strb	r1, [r0]
        1d6f58:	e3a00001 	mov	r0, #1	; 0x1
        1d6f5c:	e5c40055 	strb	r0, [r4, #85]	; fField85
        1d6f60:	e5c40057 	strb	r0, [r4, #87]	; fField87
        1d6f64:	e3a00000 	mov	r0, #0	; 0x0
        1d6f68:	e5c40058 	strb	r0, [r4, #88]	; fField88
        1d6f6c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::PowerIsOn(void)
 * Address: 001d6f70
 */
TSerialChipVoyager::PowerIsOn(void) {
    /*
        1d6f70:	e5d00055 	ldrb	r0, [r0, #85]	; fField85
        1d6f74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::SetInterruptEnable(unsigned char)
 * Address: 001d6f78
 */
TSerialChipVoyager::SetInterruptEnable(unsigned char) {
    /*
        1d6f78:	e21120ff 	ands	r2, r1, #255	; 0xff
        1d6f7c:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d6f80:	03a03000 	moveq	r3, #0	; 0x0
        1d6f84:	15d03064 	ldrneb	r3, [r0, #100]	; fField100
        1d6f88:	e2811a03 	add	r1, r1, #12288	; 0x3000
        1d6f8c:	e5c13000 	strb	r3, [r1]
        1d6f90:	e1a01002 	mov	r1, r2
        1d6f94:	ea00079d 	b	1d8e10 <TSerialChipVoyager::SetModemDCDIntEnable(unsigned char)>
    */
}

/**
 * Symbol: TSerialChipVoyager::Reset(void)
 * Address: 001d6fa8
 */
TSerialChipVoyager::Reset(void) {
    /*
        1d6fa8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::SetBreak(unsigned char)
 * Address: 001d6fac
 */
TSerialChipVoyager::SetBreak(unsigned char) {
    /*
        1d6fac:	e31100ff 	tst	r1, #255	; 0xff
        1d6fb0:	e5d01062 	ldrb	r1, [r0, #98]	; fField98
        1d6fb4:	e201107f 	and	r1, r1, #127	; 0x7f
        1d6fb8:	120110ff 	andne	r1, r1, #255	; 0xff
        1d6fbc:	13811080 	orrne	r1, r1, #128	; 0x80
        1d6fc0:	e5c01062 	strb	r1, [r0, #98]	; fField98
        1d6fc4:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d6fc8:	e2800a02 	add	r0, r0, #8192	; 0x2000
        1d6fcc:	e5c01400 	strb	r1, [r0, #1024]	; fField1024
        1d6fd0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::SetSpeed(unsigned long)
 * Address: 001d6fd4
 */
TSerialChipVoyager::SetSpeed(unsigned long) {
    /*
        1d6fd4:	e1a0c00d 	mov	ip, sp
        1d6fd8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1d6fdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6fe0:	e1a04000 	mov	r4, r0
        1d6fe4:	e1a05001 	mov	r5, r1
        1d6fe8:	e3a06002 	mov	r6, #2	; 0x2
        1d6fec:	e3a07000 	mov	r7, #0	; 0x0
        1d6ff0:	e5908028 	ldr	r8, [r0, #40]	; fField40
        1d6ff4:	e3380000 	teq	r8, #0	; 0x0
        1d6ff8:	03350001 	teqeq	r5, #1	; 0x1
        1d6ffc:	1a000010 	bne	1d7044 <TSerialChipVoyager::SetSpeed(unsigned long)+0x70>
        1d7000:	e3a07020 	mov	r7, #32	; 0x20
        1d7004:	e3a06000 	mov	r6, #0	; 0x0
        1d7008:	e5d40054 	ldrb	r0, [r4, #84]	; fField84
        1d700c:	e3300000 	teq	r0, #0	; 0x0
        1d7010:	12000003 	andne	r0, r0, #3	; 0x3
        1d7014:	11a00080 	movne	r0, r0, lsl #1
        1d7018:	120060ff 	andne	r6, r0, #255	; 0xff
        1d701c:	e5d40062 	ldrb	r0, [r4, #98]	; fField98
        1d7020:	e3c00008 	bic	r0, r0, #8	; 0x8
        1d7024:	e5c40062 	strb	r0, [r4, #98]	; fField98
        1d7028:	e5d40061 	ldrb	r0, [r4, #97]	; fField97
        1d702c:	e3c00002 	bic	r0, r0, #2	; 0x2
        1d7030:	e5c40061 	strb	r0, [r4, #97]	; fField97
        1d7034:	e5d40064 	ldrb	r0, [r4, #100]	; fField100
        1d7038:	e3c00008 	bic	r0, r0, #8	; 0x8
        1d703c:	e5c40064 	strb	r0, [r4, #100]	; fField100
        1d7040:	ea000032 	b	1d7110 <TSerialChipVoyager::SetSpeed(unsigned long)+0x13c>
        1d7044:	e3a099e1 	mov	r9, #3686400	; 0x384000
        1d7048:	e3a00cc2 	mov	r0, #49664	; 0xc200
        1d704c:	e2800801 	add	r0, r0, #65536	; 0x10000
        1d7050:	e1550000 	cmp	r5, r0
        1d7054:	81a05000 	movhi	r5, r0
        1d7058:	8a000001 	bhi	1d7064 <TSerialChipVoyager::SetSpeed(unsigned long)+0x90>
        1d705c:	e3550002 	cmp	r5, #2	; 0x2
        1d7060:	33a05f4b 	movcc	r5, #300	; 0x12c
        1d7064:	e1a00005 	mov	r0, r5
        1d7068:	e59f1068 	ldr	r1, [pc, #68]	; 1d70d8 <TSerialChipVoyager::SetSpeed(unsigned long)+0x104>	; fField68
        1d706c:	eb676e35 	bl	1bb2948 <$__rt_udiv>
        1d7070:	e1a00100 	mov	r0, r0, lsl #2
        1d7074:	e5840044 	str	r0, [r4, #68]	; fField68
        1d7078:	e1a00205 	mov	r0, r5, lsl #4
        1d707c:	e1a00080 	mov	r0, r0, lsl #1
        1d7080:	e1a01009 	mov	r1, r9
        1d7084:	eb676e2f 	bl	1bb2948 <$__rt_udiv>
        1d7088:	e2400001 	sub	r0, r0, #1	; 0x1
        1d708c:	e3350ce1 	teq	r5, #57600	; 0xe100
        1d7090:	03a00000 	moveq	r0, #0	; 0x0
        1d7094:	03a06004 	moveq	r6, #4	; 0x4
        1d7098:	e20010ff 	and	r1, r0, #255	; 0xff
        1d709c:	e5c41068 	strb	r1, [r4, #104]	; fField104
        1d70a0:	e1a00420 	mov	r0, r0, lsr #8
        1d70a4:	e20000ff 	and	r0, r0, #255	; 0xff
        1d70a8:	e5c40067 	strb	r0, [r4, #103]	; fField103
        1d70ac:	e5d42062 	ldrb	r2, [r4, #98]	; fField98
        1d70b0:	e3822008 	orr	r2, r2, #8	; 0x8
        1d70b4:	e5c42062 	strb	r2, [r4, #98]	; fField98
        1d70b8:	e3380000 	teq	r8, #0	; 0x0
        1d70bc:	1a000006 	bne	1d70dc <TSerialChipVoyager::SetSpeed(unsigned long)+0x108>
        1d70c0:	e5c4106a 	strb	r1, [r4, #106]	; fField106
        1d70c4:	e5c40069 	strb	r0, [r4, #105]	; fField105
        1d70c8:	e5d40061 	ldrb	r0, [r4, #97]	; fField97
        1d70cc:	e3800002 	orr	r0, r0, #2	; 0x2
        1d70d0:	e5c40061 	strb	r0, [r4, #97]	; fField97
        1d70d4:	ea00000a 	b	1d7104 <TSerialChipVoyager::SetSpeed(unsigned long)+0x130>
        1d70d8:	00989680 	addeqs	r9, r8, r0, lsl #13
        1d70dc:	e3380001 	teq	r8, #1	; 0x1
        1d70e0:	1a000007 	bne	1d7104 <TSerialChipVoyager::SetSpeed(unsigned long)+0x130>
        1d70e4:	e1a00205 	mov	r0, r5, lsl #4
        1d70e8:	e1a01009 	mov	r1, r9
        1d70ec:	eb676e15 	bl	1bb2948 <$__rt_udiv>
        1d70f0:	e2400001 	sub	r0, r0, #1	; 0x1
        1d70f4:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d70f8:	e5c10017 	strb	r0, [r1, #23]
        1d70fc:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d7100:	e5a05024 	str	r5, [r0, #36]!	; fField36
        1d7104:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d7108:	e3300000 	teq	r0, #0	; 0x0
        1d710c:	1a000007 	bne	1d7130 <TSerialChipVoyager::SetSpeed(unsigned long)+0x15c>
        1d7110:	e5d4005d 	ldrb	r0, [r4, #93]	; fField93
        1d7114:	e3c00030 	bic	r0, r0, #48	; 0x30
        1d7118:	e1800007 	orr	r0, r0, r7
        1d711c:	e5c4005d 	strb	r0, [r4, #93]	; fField93
        1d7120:	e5d4005e 	ldrb	r0, [r4, #94]	; fField94
        1d7124:	e3c00030 	bic	r0, r0, #48	; 0x30
        1d7128:	e1800007 	orr	r0, r0, r7
        1d712c:	e5c4005e 	strb	r0, [r4, #94]	; fField94
        1d7130:	e5d4005f 	ldrb	r0, [r4, #95]	; fField95
        1d7134:	e3c00006 	bic	r0, r0, #6	; 0x6
        1d7138:	e1800006 	orr	r0, r0, r6
        1d713c:	e5c4005f 	strb	r0, [r4, #95]	; fField95
        1d7140:	e1a00005 	mov	r0, r5
        1d7144:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *)
 * Address: 001d7148
 */
TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *) {
    /*
        1d7148:	e5912014 	ldr	r2, [r1, #20]
        1d714c:	e3320005 	teq	r2, #5	; 0x5
        1d7150:	03a02040 	moveq	r2, #64	; 0x40
        1d7154:	0a000005 	beq	1d7170 <TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *)+0x28>
        1d7158:	e3320006 	teq	r2, #6	; 0x6
        1d715c:	03a02080 	moveq	r2, #128	; 0x80
        1d7160:	0a000002 	beq	1d7170 <TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *)+0x28>
        1d7164:	e3320007 	teq	r2, #7	; 0x7
        1d7168:	03a020c0 	moveq	r2, #192	; 0xc0
        1d716c:	13a02000 	movne	r2, #0	; 0x0
        1d7170:	e5913010 	ldr	r3, [r1, #16]	; fField16
        1d7174:	e3330000 	teq	r3, #0	; 0x0
        1d7178:	0a000005 	beq	1d7194 <TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *)+0x4c>
        1d717c:	e3330001 	teq	r3, #1	; 0x1
        1d7180:	03a03002 	moveq	r3, #2	; 0x2
        1d7184:	0a000003 	beq	1d7198 <TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *)+0x50>
        1d7188:	e3330002 	teq	r3, #2	; 0x2
        1d718c:	03a03003 	moveq	r3, #3	; 0x3
        1d7190:	0a000000 	beq	1d7198 <TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *)+0x50>
        1d7194:	e3a03000 	mov	r3, #0	; 0x0
        1d7198:	e591100c 	ldr	r1, [r1, #12]
        1d719c:	e3310000 	teq	r1, #0	; 0x0
        1d71a0:	0a000005 	beq	1d71bc <TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *)+0x74>
        1d71a4:	e3310001 	teq	r1, #1	; 0x1
        1d71a8:	03a01040 	moveq	r1, #64	; 0x40
        1d71ac:	0a000003 	beq	1d71c0 <TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *)+0x78>
        1d71b0:	e3310002 	teq	r1, #2	; 0x2
        1d71b4:	03a01080 	moveq	r1, #128	; 0x80
        1d71b8:	0a000000 	beq	1d71c0 <TSerialChipVoyager::SetIOParms(TCMOSerialIOParms *)+0x78>
        1d71bc:	e3a01000 	mov	r1, #0	; 0x0
        1d71c0:	e5d0c05c 	ldrb	ip, [r0, #92]	; fField92
        1d71c4:	e3ccc003 	bic	ip, ip, #3	; 0x3
        1d71c8:	e18c3003 	orr	r3, ip, r3
        1d71cc:	e5c0305c 	strb	r3, [r0, #92]	; fField92
        1d71d0:	e5d0305d 	ldrb	r3, [r0, #93]	; fField93
        1d71d4:	e3c330c0 	bic	r3, r3, #192	; 0xc0
        1d71d8:	e1833002 	orr	r3, r3, r2
        1d71dc:	e5c0305d 	strb	r3, [r0, #93]	; fField93
        1d71e0:	e5d0305e 	ldrb	r3, [r0, #94]	; fField94
        1d71e4:	e3c330c0 	bic	r3, r3, #192	; 0xc0
        1d71e8:	e1832002 	orr	r2, r3, r2
        1d71ec:	e5c0205e 	strb	r2, [r0, #94]	; fField94
        1d71f0:	e5d0205f 	ldrb	r2, [r0, #95]	; fField95
        1d71f4:	e3c220c0 	bic	r2, r2, #192	; 0xc0
        1d71f8:	e1821001 	orr	r1, r2, r1
        1d71fc:	e5c0105f 	strb	r1, [r0, #95]	; fField95
        1d7200:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::Reconfigure(void)
 * Address: 001d7204
 */
TSerialChipVoyager::Reconfigure(void) {
    /*
        1d7204:	e1a0c00d 	mov	ip, sp
        1d7208:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1d720c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d7210:	e1a04000 	mov	r4, r0
        1d7214:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1d7218:	e3300001 	teq	r0, #1	; 0x1
        1d721c:	1a000043 	bne	1d7330 <TSerialChipVoyager::Reconfigure(void)+0x12c>
        1d7220:	e1a00004 	mov	r0, r4
        1d7224:	e3a01000 	mov	r1, #0	; 0x0
        1d7228:	eb6250dc 	bl	1a6b5a0 <TSerialChipVoyager::$SetInterruptEnable(unsigned char)>
        1d722c:	eb06ee5f 	bl	392bb0 <ExitFIQAtomic>
        1d7230:	e284505c 	add	r5, r4, #92	; 0x5c
        1d7234:	e595600c 	ldr	r6, [r5, #12]
        1d7238:	e5957008 	ldr	r7, [r5, #8]
        1d723c:	e5958004 	ldr	r8, [r5, #4]	; fField4
        1d7240:	e5959000 	ldr	r9, [r5]
        1d7244:	e5d4a08f 	ldrb	sl, [r4, #143]	; fField143
        1d7248:	e33a0002 	teq	sl, #2	; 0x2
        1d724c:	1a000003 	bne	1d7260 <TSerialChipVoyager::Reconfigure(void)+0x5c>
        1d7250:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d7254:	eb625504 	bl	1a6c66c <TSerialDMAEngine::$StopRxDMA(void)>
        1d7258:	e1a00004 	mov	r0, r4
        1d725c:	eb6254ee 	bl	1a6c61c <TSerialChipVoyager::$DisableRxDMA(void)>
        1d7260:	e5d40064 	ldrb	r0, [r4, #100]	; fField100
        1d7264:	e38000c0 	orr	r0, r0, #192	; 0xc0
        1d7268:	e5c40064 	strb	r0, [r4, #100]	; fField100
        1d726c:	e5d40057 	ldrb	r0, [r4, #87]	; fField87
        1d7270:	e3300000 	teq	r0, #0	; 0x0
        1d7274:	0a000017 	beq	1d72d8 <TSerialChipVoyager::Reconfigure(void)+0xd4>
        1d7278:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d727c:	eb624ca4 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
        1d7280:	e1a0300d 	mov	r3, sp
        1d7284:	e3a02000 	mov	r2, #0	; 0x0
        1d7288:	e3a01024 	mov	r1, #36	; 0x24
        1d728c:	eb625907 	bl	1a6d6b0 <TBIOInterface::$WriteDIOPins(unsigned char, unsigned char, unsigned char *)>
        1d7290:	eb624c9f 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
        1d7294:	e1a0300d 	mov	r3, sp
        1d7298:	e3a02001 	mov	r2, #1	; 0x1
        1d729c:	e3a01024 	mov	r1, #36	; 0x24
        1d72a0:	eb625902 	bl	1a6d6b0 <TBIOInterface::$WriteDIOPins(unsigned char, unsigned char, unsigned char *)>
        1d72a4:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d72a8:	ebfffd2a 	bl	1d6758 <THermesIRControl::SetResetState(void)>
        1d72ac:	e3a00a09 	mov	r0, #36864	; 0x9000
        1d72b0:	e2400004 	sub	r0, r0, #4	; 0x4
        1d72b4:	eb6816dc 	bl	1bdce2c <$Sleep(unsigned long)>
        1d72b8:	e59f1014 	ldr	r1, [pc, #14]	; 1d72d4 <TSerialChipVoyager::Reconfigure(void)+0xd0>
        1d72bc:	e891500c 	ldmia	r1, {r2, r3, ip, lr}
        1d72c0:	e885500c 	stmia	r5, {r2, r3, ip, lr}
        1d72c4:	e1a00004 	mov	r0, r4
        1d72c8:	eb6254cd 	bl	1a6c604 <TSerialChipVoyager::$ReconfigureAll(void)>
        1d72cc:	e28dd004 	add	sp, sp, #4	; 0x4
        1d72d0:	ea00000a 	b	1d7300 <TSerialChipVoyager::Reconfigure(void)+0xfc>
        1d72d4:	003776ac 	eoreqs	r7, r7, ip, lsr #13
        1d72d8:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d72dc:	e5d01000 	ldrb	r1, [r0]
        1d72e0:	e3c11002 	bic	r1, r1, #2	; 0x2
        1d72e4:	e5c01000 	strb	r1, [r0]
        1d72e8:	e5d01400 	ldrb	r1, [r0, #1024]	; fField1024
        1d72ec:	e201103f 	and	r1, r1, #63	; 0x3f
        1d72f0:	e5c01400 	strb	r1, [r0, #1024]	; fField1024
        1d72f4:	e5d01800 	ldrb	r1, [r0, #2048]	; fField2048
        1d72f8:	e201103f 	and	r1, r1, #63	; 0x3f
        1d72fc:	e5c01800 	strb	r1, [r0, #2048]	; fField2048
        1d7300:	e5d41057 	ldrb	r1, [r4, #87]	; fField87
        1d7304:	e1a00004 	mov	r0, r4
        1d7308:	eb6254c0 	bl	1a6c610 <TSerialChipVoyager::$ConfigureIRChip(unsigned char)>
        1d730c:	eb06ee1f 	bl	392b90 <EnterFIQAtomic>
        1d7310:	e33a0002 	teq	sl, #2	; 0x2
        1d7314:	e585600c 	str	r6, [r5, #12]
        1d7318:	e5857008 	str	r7, [r5, #8]
        1d731c:	e5858004 	str	r8, [r5, #4]	; fField4
        1d7320:	e5859000 	str	r9, [r5]
        1d7324:	01a00004 	moveq	r0, r4
        1d7328:	03a01001 	moveq	r1, #1	; 0x1
        1d732c:	0b6250ae 	bleq	1a6b5ec <TSerialChipVoyager::$RxDMAControl(unsigned char)>
        1d7330:	e5d40057 	ldrb	r0, [r4, #87]	; fField87
        1d7334:	e3300000 	teq	r0, #0	; 0x0
        1d7338:	e1a00004 	mov	r0, r4
        1d733c:	0a000003 	beq	1d7350 <TSerialChipVoyager::Reconfigure(void)+0x14c>
        1d7340:	eb6254af 	bl	1a6c604 <TSerialChipVoyager::$ReconfigureAll(void)>
        1d7344:	e3a00000 	mov	r0, #0	; 0x0
        1d7348:	e5c40057 	strb	r0, [r4, #87]	; fField87
        1d734c:	ea000000 	b	1d7354 <TSerialChipVoyager::Reconfigure(void)+0x150>
        1d7350:	eb6254aa 	bl	1a6c600 <TSerialChipVoyager::$ReconfigureIOParms(void)>
        1d7354:	e1a00004 	mov	r0, r4
        1d7358:	e3a01001 	mov	r1, #1	; 0x1
        1d735c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1d7360:	ea62508e 	b	1a6b5a0 <TSerialChipVoyager::$SetInterruptEnable(unsigned char)>
    */
}

/**
 * Symbol: TSerialChipVoyager::GetFeatures(void)
 * Address: 001d7364
 */
TSerialChipVoyager::GetFeatures(void) {
    /*
        1d7364:	e5b03028 	ldr	r3, [r0, #40]!	; fField40
        1d7368:	e280204c 	add	r2, r0, #76	; 0x4c
        1d736c:	e8920006 	ldmia	r2, {r1, r2}
        1d7370:	e3330000 	teq	r3, #0	; 0x0
        1d7374:	0a00000c 	beq	1d73ac <TSerialChipVoyager::GetFeatures(void)+0x48>
        1d7378:	e3330001 	teq	r3, #1	; 0x1
        1d737c:	059f001c 	ldreq	r0, [pc, #1c]	; 1d73a0 <TSerialChipVoyager::GetFeatures(void)+0x3c>
        1d7380:	0a00000e 	beq	1d73c0 <TSerialChipVoyager::GetFeatures(void)+0x5c>
        1d7384:	e3330002 	teq	r3, #2	; 0x2
        1d7388:	059f0014 	ldreq	r0, [pc, #14]	; 1d73a4 <TSerialChipVoyager::GetFeatures(void)+0x40>
        1d738c:	0a00000b 	beq	1d73c0 <TSerialChipVoyager::GetFeatures(void)+0x5c>
        1d7390:	e3330003 	teq	r3, #3	; 0x3
        1d7394:	059f000c 	ldreq	r0, [pc, #c]	; 1d73a8 <TSerialChipVoyager::GetFeatures(void)+0x44>
        1d7398:	13a00000 	movne	r0, #0	; 0x0
        1d739c:	ea000007 	b	1d73c0 <TSerialChipVoyager::GetFeatures(void)+0x5c>
        1d73a0:	001001e3 	andeqs	r0, r0, r3, ror #3
        1d73a4:	00100123 	andeqs	r0, r0, r3, lsr #2
        1d73a8:	00100127 	andeqs	r0, r0, r7, lsr #2
        1d73ac:	e59f0020 	ldr	r0, [pc, #20]	; 1d73d4 <TSerialChipVoyager::GetFeatures(void)+0x70>
        1d73b0:	e3320000 	teq	r2, #0	; 0x0
        1d73b4:	159f001c 	ldrne	r0, [pc, #1c]	; 1d73d8 <TSerialChipVoyager::GetFeatures(void)+0x74>
        1d73b8:	e3310000 	teq	r1, #0	; 0x0
        1d73bc:	13800901 	orrne	r0, r0, #16384	; 0x4000
        1d73c0:	e3320000 	teq	r2, #0	; 0x0
        1d73c4:	13800a22 	orrne	r0, r0, #139264	; 0x22000
        1d73c8:	e3310000 	teq	r1, #0	; 0x0
        1d73cc:	13800a11 	orrne	r0, r0, #69632	; 0x11000
        1d73d0:	e1a0f00e 	mov	pc, lr
        1d73d4:	00100737 	andeqs	r0, r0, r7, lsr r7
        1d73d8:	00108737 	andeqs	r8, r0, r7, lsr r7
    */
}

/**
 * Symbol: TSerialChipVoyager::ProcessOption(TOption *)
 * Address: 001d73dc
 */
TSerialChipVoyager::ProcessOption(TOption *) {
    /*
        1d73dc:	e1a0c00d 	mov	ip, sp
        1d73e0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1d73e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d73e8:	e1a04000 	mov	r4, r0
        1d73ec:	e1a05001 	mov	r5, r1
        1d73f0:	e5910008 	ldr	r0, [r1, #8]
        1d73f4:	e2007cff 	and	r7, r0, #65280	; 0xff00
        1d73f8:	e3a06000 	mov	r6, #0	; 0x0
        1d73fc:	e5910000 	ldr	r0, [r1]
        1d7400:	e59fc114 	ldr	ip, [pc, #114]	; 1d751c <TSerialChipVoyager::ProcessOption(TOption *)+0x140>
        1d7404:	e150000c 	cmp	r0, ip
        1d7408:	0a0000b3 	beq	1d76dc <TSerialChipVoyager::ProcessOption(TOption *)+0x300>
        1d740c:	ca000049 	bgt	1d7538 <TSerialChipVoyager::ProcessOption(TOption *)+0x15c>
        1d7410:	e59fc108 	ldr	ip, [pc, #108]	; 1d7520 <TSerialChipVoyager::ProcessOption(TOption *)+0x144>	; fField108
        1d7414:	e130000c 	teq	r0, ip
        1d7418:	0a0000a5 	beq	1d76b4 <TSerialChipVoyager::ProcessOption(TOption *)+0x2d8>
        1d741c:	e59fc100 	ldr	ip, [pc, #100]	; 1d7524 <TSerialChipVoyager::ProcessOption(TOption *)+0x148>	; fField100
        1d7420:	e130000c 	teq	r0, ip
        1d7424:	0a0000ce 	beq	1d7764 <TSerialChipVoyager::ProcessOption(TOption *)+0x388>
        1d7428:	e59fc0f8 	ldr	ip, [pc, #f8]	; 1d7528 <TSerialChipVoyager::ProcessOption(TOption *)+0x14c>
        1d742c:	e130000c 	teq	r0, ip
        1d7430:	0a0000b2 	beq	1d7700 <TSerialChipVoyager::ProcessOption(TOption *)+0x324>
        1d7434:	e59fc0f0 	ldr	ip, [pc, #f0]	; 1d752c <TSerialChipVoyager::ProcessOption(TOption *)+0x150>
        1d7438:	e130000c 	teq	r0, ip
        1d743c:	1a0000ee 	bne	1d77fc <TSerialChipVoyager::ProcessOption(TOption *)+0x420>
        1d7440:	e5d5800c 	ldrb	r8, [r5, #12]
        1d7444:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d7448:	e3300001 	teq	r0, #1	; 0x1
        1d744c:	1a0000df 	bne	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d7450:	e3580003 	cmp	r8, #3	; 0x3
        1d7454:	ca0000dd 	bgt	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d7458:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d745c:	eb68d46a 	bl	1c0c60c <$GetGPIOInterfaceObject(void)>
        1d7460:	e1a0200d 	mov	r2, sp
        1d7464:	e3a01008 	mov	r1, #8	; 0x8
        1d7468:	eb625ca8 	bl	1a6e710 <TGPIOInterface::$ReadGPIOData(unsigned char, unsigned long *)>
        1d746c:	e59d0000 	ldr	r0, [sp]
        1d7470:	e1b00000 	movs	r0, r0
        1d7474:	13a00001 	movne	r0, #1	; 0x1
        1d7478:	e5c5000e 	strb	r0, [r5, #14]
        1d747c:	e3370c02 	teq	r7, #512	; 0x200
        1d7480:	1a000023 	bne	1d7514 <TSerialChipVoyager::ProcessOption(TOption *)+0x138>
        1d7484:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d7488:	e5c0802e 	strb	r8, [r0, #46]
        1d748c:	e59f109c 	ldr	r1, [pc, #9c]	; 1d7530 <TSerialChipVoyager::ProcessOption(TOption *)+0x154>
        1d7490:	e3380000 	teq	r8, #0	; 0x0
        1d7494:	059f1098 	ldreq	r1, [pc, #98]	; 1d7534 <TSerialChipVoyager::ProcessOption(TOption *)+0x158>	; fField98
        1d7498:	e594209c 	ldr	r2, [r4, #156]	; fField156
        1d749c:	e5d20017 	ldrb	r0, [r2, #23]
        1d74a0:	e2822010 	add	r2, r2, #16	; 0x10
        1d74a4:	e8b11008 	ldmia	r1!, {r3, ip}
        1d74a8:	e8a21008 	stmia	r2!, {r3, ip}
        1d74ac:	e8911008 	ldmia	r1, {r3, ip}
        1d74b0:	e8821008 	stmia	r2, {r3, ip}
        1d74b4:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d74b8:	e5c10017 	strb	r0, [r1, #23]
        1d74bc:	e5d5000d 	ldrb	r0, [r5, #13]
        1d74c0:	e3100001 	tst	r0, #1	; 0x1
        1d74c4:	0a000006 	beq	1d74e4 <TSerialChipVoyager::ProcessOption(TOption *)+0x108>
        1d74c8:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d74cc:	e5f12011 	ldrb	r2, [r1, #17]!
        1d74d0:	e3822002 	orr	r2, r2, #2	; 0x2
        1d74d4:	e5c12000 	strb	r2, [r1]
        1d74d8:	e3a02003 	mov	r2, #3	; 0x3
        1d74dc:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d74e0:	e5c12015 	strb	r2, [r1, #21]
        1d74e4:	e3100002 	tst	r0, #2	; 0x2
        1d74e8:	15d5100f 	ldrneb	r1, [r5, #15]
        1d74ec:	1594209c 	ldrne	r2, [r4, #156]	; fField156
        1d74f0:	15c21016 	strneb	r1, [r2, #22]
        1d74f4:	e3100004 	tst	r0, #4	; 0x4
        1d74f8:	0a000005 	beq	1d7514 <TSerialChipVoyager::ProcessOption(TOption *)+0x138>
        1d74fc:	e3a00006 	mov	r0, #6	; 0x6
        1d7500:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d7504:	e5c10018 	strb	r0, [r1, #24]	; fField24
        1d7508:	e3a00001 	mov	r0, #1	; 0x1
        1d750c:	e5b4109c 	ldr	r1, [r4, #156]!	; fField156
        1d7510:	e5c1001c 	strb	r0, [r1, #28]	; fField28
        1d7514:	e28dd004 	add	sp, sp, #4	; 0x4
        1d7518:	ea0000b8 	b	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d751c:	69727476 	ldmvsdb	r2!, {r1, r2, r4, r5, r6, sl, ip, sp, lr}^
        1d7520:	63646976 	cmnvs	r4, #1933312	; 0x1d8000
        1d7524:	64626763 	strvsbt	r6, [r2], -#1891
        1d7528:	64626767 	strvsbt	r6, [r2], -#1895
        1d752c:	69726c6b 	ldmvsdb	r2!, {r0, r1, r3, r5, r6, sl, fp, sp, lr}^
        1d7530:	003776fc 	ldreqsh	r7, [r7], -ip
        1d7534:	003776ec 	eoreqs	r7, r7, ip, ror #13
        1d7538:	e59fc0cc 	ldr	ip, [pc, #cc]	; 1d760c <TSerialChipVoyager::ProcessOption(TOption *)+0x230>
        1d753c:	e130000c 	teq	r0, ip
        1d7540:	0a00009f 	beq	1d77c4 <TSerialChipVoyager::ProcessOption(TOption *)+0x3e8>
        1d7544:	e3a0900c 	mov	r9, #12	; 0xc
        1d7548:	e59fc0c0 	ldr	ip, [pc, #c0]	; 1d7610 <TSerialChipVoyager::ProcessOption(TOption *)+0x234>
        1d754c:	e130000c 	teq	r0, ip
        1d7550:	0a000032 	beq	1d7620 <TSerialChipVoyager::ProcessOption(TOption *)+0x244>
        1d7554:	e59fc0b8 	ldr	ip, [pc, #b8]	; 1d7614 <TSerialChipVoyager::ProcessOption(TOption *)+0x238>
        1d7558:	e130000c 	teq	r0, ip
        1d755c:	1a0000a6 	bne	1d77fc <TSerialChipVoyager::ProcessOption(TOption *)+0x420>
        1d7560:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d7564:	e3300001 	teq	r0, #1	; 0x1
        1d7568:	1a000098 	bne	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d756c:	e3580002 	cmp	r8, #2	; 0x2
        1d7570:	ca000096 	bgt	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d7574:	e3370c02 	teq	r7, #512	; 0x200
        1d7578:	1a000094 	bne	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d757c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d7580:	e5c0802e 	strb	r8, [r0, #46]
        1d7584:	e59f108c 	ldr	r1, [pc, #8c]	; 1d7618 <TSerialChipVoyager::ProcessOption(TOption *)+0x23c>
        1d7588:	e3380000 	teq	r8, #0	; 0x0
        1d758c:	059f1088 	ldreq	r1, [pc, #88]	; 1d761c <TSerialChipVoyager::ProcessOption(TOption *)+0x240>	; fField88
        1d7590:	e594209c 	ldr	r2, [r4, #156]	; fField156
        1d7594:	e5d20017 	ldrb	r0, [r2, #23]
        1d7598:	e2822010 	add	r2, r2, #16	; 0x10
        1d759c:	e8b11008 	ldmia	r1!, {r3, ip}
        1d75a0:	e8a21008 	stmia	r2!, {r3, ip}
        1d75a4:	e8911008 	ldmia	r1, {r3, ip}
        1d75a8:	e8821008 	stmia	r2, {r3, ip}
        1d75ac:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d75b0:	e5c10017 	strb	r0, [r1, #23]
        1d75b4:	e3380002 	teq	r8, #2	; 0x2
        1d75b8:	0594009c 	ldreq	r0, [r4, #156]	; fField156
        1d75bc:	05c09015 	streqb	r9, [r0, #21]
        1d75c0:	e5d5000d 	ldrb	r0, [r5, #13]
        1d75c4:	e3100001 	tst	r0, #1	; 0x1
        1d75c8:	0a00008c 	beq	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d75cc:	e5d5000e 	ldrb	r0, [r5, #14]
        1d75d0:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d75d4:	e5c1001b 	strb	r0, [r1, #27]
        1d75d8:	e5d5000f 	ldrb	r0, [r5, #15]
        1d75dc:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d75e0:	e5c10018 	strb	r0, [r1, #24]	; fField24
        1d75e4:	e5d50010 	ldrb	r0, [r5, #16]	; fField16
        1d75e8:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d75ec:	e5c1001c 	strb	r0, [r1, #28]	; fField28
        1d75f0:	e5d50011 	ldrb	r0, [r5, #17]
        1d75f4:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d75f8:	e5c1001a 	strb	r0, [r1, #26]
        1d75fc:	e5d50012 	ldrb	r0, [r5, #18]
        1d7600:	e5b4109c 	ldr	r1, [r4, #156]!	; fField156
        1d7604:	e5c10019 	strb	r0, [r1, #25]
        1d7608:	ea00007c 	b	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d760c:	6d736e64 	ldcvsl	14, cr6, [r3, -#400]!
        1d7610:	73657273 	cmnvc	r5, #805306375	; 0x30000007
        1d7614:	74766c6b 	ldrvcbt	r6, [r6], -#3179
        1d7618:	0037771c 	eoreqs	r7, r7, ip, lsl r7
        1d761c:	0037770c 	eoreqs	r7, r7, ip, lsl #14
        1d7620:	e3370b01 	teq	r7, #1024	; 0x400
        1d7624:	1a000069 	bne	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d7628:	e24dd020 	sub	sp, sp, #32	; 0x20
        1d762c:	e1a0000d 	mov	r0, sp
        1d7630:	eb68b30e 	bl	1c04270 <TCMOSerialChipSpec::$__ct(void)>
        1d7634:	e5940038 	ldr	r0, [r4, #56]	; fField56
        1d7638:	e58d000c 	str	r0, [sp, #12]
        1d763c:	e1a00004 	mov	r0, r4
        1d7640:	eb624fdb 	bl	1a6b5b4 <TSerialChipVoyager::$GetFeatures(void)>
        1d7644:	e58d0010 	str	r0, [sp, #16]	; fField16
        1d7648:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d764c:	e3300000 	teq	r0, #0	; 0x0
        1d7650:	13300003 	teqne	r0, #3	; 0x3
        1d7654:	03a00002 	moveq	r0, #2	; 0x2
        1d7658:	13a00000 	movne	r0, #0	; 0x0
        1d765c:	e5cd0014 	strb	r0, [sp, #20]
        1d7660:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d7664:	e3300000 	teq	r0, #0	; 0x0
        1d7668:	13300003 	teqne	r0, #3	; 0x3
        1d766c:	03a00028 	moveq	r0, #40	; 0x28
        1d7670:	13a00000 	movne	r0, #0	; 0x0
        1d7674:	e5cd0015 	strb	r0, [sp, #21]
        1d7678:	e5cd9016 	strb	r9, [sp, #22]
        1d767c:	e3a0007f 	mov	r0, #127	; 0x7f
        1d7680:	e5cd0017 	strb	r0, [sp, #23]
        1d7684:	e3a00023 	mov	r0, #35	; 0x23
        1d7688:	e5cd0018 	strb	r0, [sp, #24]	; fField24
        1d768c:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1d7690:	e3300000 	teq	r0, #0	; 0x0
        1d7694:	13a00000 	movne	r0, #0	; 0x0
        1d7698:	03a00001 	moveq	r0, #1	; 0x1
        1d769c:	e5cd0019 	strb	r0, [sp, #25]
        1d76a0:	e1a0100d 	mov	r1, sp
        1d76a4:	e1a00005 	mov	r0, r5
        1d76a8:	eb678148 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1d76ac:	e28dd020 	add	sp, sp, #32	; 0x20
        1d76b0:	ea000052 	b	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d76b4:	e3370b01 	teq	r7, #1024	; 0x400
        1d76b8:	05d40054 	ldreqb	r0, [r4, #84]	; fField84
        1d76bc:	05c5000c 	streqb	r0, [r5, #12]
        1d76c0:	0a00004e 	beq	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d76c4:	e3370c01 	teq	r7, #256	; 0x100
        1d76c8:	13370c02 	teqne	r7, #512	; 0x200
        1d76cc:	05d5000c 	ldreqb	r0, [r5, #12]
        1d76d0:	05c40054 	streqb	r0, [r4, #84]	; fField84
        1d76d4:	0a000049 	beq	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d76d8:	ea00003c 	b	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d76dc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d76e0:	e3300001 	teq	r0, #1	; 0x1
        1d76e4:	03370c02 	teqeq	r7, #512	; 0x200
        1d76e8:	1a000038 	bne	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d76ec:	e1a01005 	mov	r1, r5
        1d76f0:	e1a00004 	mov	r0, r4
        1d76f4:	eb6253c6 	bl	1a6c614 <TSerialChipVoyager::$EnableTVModeIR(TCMOSlowIRBitBang *)>
        1d76f8:	e1a06000 	mov	r6, r0
        1d76fc:	ea00003f 	b	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d7700:	e3370c02 	teq	r7, #512	; 0x200
        1d7704:	05940028 	ldreq	r0, [r4, #40]	; fField40
        1d7708:	03300000 	teqeq	r0, #0	; 0x0
        1d770c:	1a00002f 	bne	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d7710:	e5d50010 	ldrb	r0, [r5, #16]	; fField16
        1d7714:	e3300000 	teq	r0, #0	; 0x0
        1d7718:	0a00000c 	beq	1d7750 <TSerialChipVoyager::ProcessOption(TOption *)+0x374>
        1d771c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d7720:	e3300000 	teq	r0, #0	; 0x0
        1d7724:	0a000004 	beq	1d773c <TSerialChipVoyager::ProcessOption(TOption *)+0x360>
        1d7728:	e1a00004 	mov	r0, r4
        1d772c:	eb624f99 	bl	1a6b598 <TSerialChipVoyager::$PowerOff(void)>
        1d7730:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1d7734:	e1a00004 	mov	r0, r4
        1d7738:	eb624b8c 	bl	1a6a570 <TSerialChipVoyager::$RemoveChipHandler(void *)>
        1d773c:	e594006c 	ldr	r0, [r4, #108]	; fField108
        1d7740:	eb68c76d 	bl	1c094fc <$DeregisterInterrupt(InterruptObject *)>
        1d7744:	e5b5000c 	ldr	r0, [r5, #12]!
        1d7748:	e5a40010 	str	r0, [r4, #16]!	; fField16
        1d774c:	ea00002b 	b	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d7750:	e3a00000 	mov	r0, #0	; 0x0
        1d7754:	e5840010 	str	r0, [r4, #16]	; fField16
        1d7758:	e1a00004 	mov	r0, r4
        1d775c:	eb624fa6 	bl	1a6b5fc <TSerialChipVoyager::$RegisterPrimaryInterrupt(void)>
        1d7760:	ea000026 	b	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d7764:	e3370c02 	teq	r7, #512	; 0x200
        1d7768:	1a000018 	bne	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d776c:	e5d50020 	ldrb	r0, [r5, #32]	; fField32
        1d7770:	e3300000 	teq	r0, #0	; 0x0
        1d7774:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d7778:	1a000002 	bne	1d7788 <TSerialChipVoyager::ProcessOption(TOption *)+0x3ac>
        1d777c:	e3300000 	teq	r0, #0	; 0x0
        1d7780:	1a000012 	bne	1d77d0 <TSerialChipVoyager::ProcessOption(TOption *)+0x3f4>
        1d7784:	ea000006 	b	1d77a4 <TSerialChipVoyager::ProcessOption(TOption *)+0x3c8>
        1d7788:	e3300000 	teq	r0, #0	; 0x0
        1d778c:	0a000004 	beq	1d77a4 <TSerialChipVoyager::ProcessOption(TOption *)+0x3c8>
        1d7790:	e1a00004 	mov	r0, r4
        1d7794:	eb624f7f 	bl	1a6b598 <TSerialChipVoyager::$PowerOff(void)>
        1d7798:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1d779c:	e1a00004 	mov	r0, r4
        1d77a0:	eb624b72 	bl	1a6a570 <TSerialChipVoyager::$RemoveChipHandler(void *)>
        1d77a4:	e2852010 	add	r2, r5, #16	; 0x10
        1d77a8:	e1a00004 	mov	r0, r4
        1d77ac:	e5b5100c 	ldr	r1, [r5, #12]!
        1d77b0:	eb624b6d 	bl	1a6a56c <TSerialChipVoyager::$InstallChipHandler(void *, SCCChannelInts *)>
        1d77b4:	e1a00004 	mov	r0, r4
        1d77b8:	e3a01008 	mov	r1, #8	; 0x8
        1d77bc:	eb624f7e 	bl	1a6b5bc <TSerialChipVoyager::$SetSerialMode(unsigned long)>
        1d77c0:	ea00000e 	b	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d77c4:	e3370c01 	teq	r7, #256	; 0x100
        1d77c8:	13370c02 	teqne	r7, #512	; 0x200
        1d77cc:	0a000001 	beq	1d77d8 <TSerialChipVoyager::ProcessOption(TOption *)+0x3fc>
        1d77d0:	e3e06000 	mvn	r6, #0	; 0x0
        1d77d4:	ea000009 	b	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d77d8:	e5d5500c 	ldrb	r5, [r5, #12]
        1d77dc:	e3350000 	teq	r5, #0	; 0x0
        1d77e0:	e3a00005 	mov	r0, #5	; 0x5
        1d77e4:	0a000001 	beq	1d77f0 <TSerialChipVoyager::ProcessOption(TOption *)+0x414>
        1d77e8:	eb66a1e9 	bl	1b7ff94 <$EnableExtSoundSource(long)>
        1d77ec:	ea000000 	b	1d77f4 <TSerialChipVoyager::ProcessOption(TOption *)+0x418>
        1d77f0:	eb66a1e8 	bl	1b7ff98 <$DisableExtSoundSource(long)>
        1d77f4:	e5c45059 	strb	r5, [r4, #89]	; fField89
        1d77f8:	ea000000 	b	1d7800 <TSerialChipVoyager::ProcessOption(TOption *)+0x424>
        1d77fc:	e3e06003 	mvn	r6, #3	; 0x3
        1d7800:	e1a00006 	mov	r0, r6
        1d7804:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::SetSerialMode(unsigned long)
 * Address: 001d7808
 */
TSerialChipVoyager::SetSerialMode(unsigned long) {
    /*
        1d7808:	e1a0c00d 	mov	ip, sp
        1d780c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d7810:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d7814:	e1a04000 	mov	r4, r0
        1d7818:	e1a05001 	mov	r5, r1
        1d781c:	e3a06000 	mov	r6, #0	; 0x0
        1d7820:	e2012003 	and	r2, r1, #3	; 0x3
        1d7824:	e5903028 	ldr	r3, [r0, #40]	; fField40
        1d7828:	e280105c 	add	r1, r0, #92	; 0x5c
        1d782c:	e3330000 	teq	r3, #0	; 0x0
        1d7830:	059f0078 	ldreq	r0, [pc, #78]	; 1d78b0 <TSerialChipVoyager::SetSerialMode(unsigned long)+0xa8>
        1d7834:	0a00000a 	beq	1d7864 <TSerialChipVoyager::SetSerialMode(unsigned long)+0x5c>
        1d7838:	e3330001 	teq	r3, #1	; 0x1
        1d783c:	059f0070 	ldreq	r0, [pc, #70]	; 1d78b4 <TSerialChipVoyager::SetSerialMode(unsigned long)+0xac>
        1d7840:	0a000021 	beq	1d78cc <TSerialChipVoyager::SetSerialMode(unsigned long)+0xc4>
        1d7844:	e3330002 	teq	r3, #2	; 0x2
        1d7848:	059f0068 	ldreq	r0, [pc, #68]	; 1d78b8 <TSerialChipVoyager::SetSerialMode(unsigned long)+0xb0>	; fField68
        1d784c:	0a00001e 	beq	1d78cc <TSerialChipVoyager::SetSerialMode(unsigned long)+0xc4>
        1d7850:	e3330003 	teq	r3, #3	; 0x3
        1d7854:	059f0060 	ldreq	r0, [pc, #60]	; 1d78bc <TSerialChipVoyager::SetSerialMode(unsigned long)+0xb4>	; fField60
        1d7858:	0a00001b 	beq	1d78cc <TSerialChipVoyager::SetSerialMode(unsigned long)+0xc4>
        1d785c:	e3330000 	teq	r3, #0	; 0x0
        1d7860:	1a000019 	bne	1d78cc <TSerialChipVoyager::SetSerialMode(unsigned long)+0xc4>
        1d7864:	e3320002 	teq	r2, #2	; 0x2
        1d7868:	1a000017 	bne	1d78cc <TSerialChipVoyager::SetSerialMode(unsigned long)+0xc4>
        1d786c:	e59f004c 	ldr	r0, [pc, #4c]	; 1d78c0 <TSerialChipVoyager::SetSerialMode(unsigned long)+0xb8>	; fField4
        1d7870:	e8b01008 	ldmia	r0!, {r3, ip}
        1d7874:	e8a11008 	stmia	r1!, {r3, ip}
        1d7878:	e8901008 	ldmia	r0, {r3, ip}
        1d787c:	e8811008 	stmia	r1, {r3, ip}
        1d7880:	e59f103c 	ldr	r1, [pc, #3c]	; 1d78c4 <TSerialChipVoyager::SetSerialMode(unsigned long)+0xbc>
        1d7884:	e594006c 	ldr	r0, [r4, #108]	; fField108
        1d7888:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1d788c:	e5940094 	ldr	r0, [r4, #148]	; fField148
        1d7890:	e3300000 	teq	r0, #0	; 0x0
        1d7894:	1a00001d 	bne	1d7910 <TSerialChipVoyager::SetSerialMode(unsigned long)+0x108>
        1d7898:	e5940098 	ldr	r0, [r4, #152]	; fField152
        1d789c:	e1a02004 	mov	r2, r4
        1d78a0:	e59f1020 	ldr	r1, [pc, #20]	; 1d78c8 <TSerialChipVoyager::SetSerialMode(unsigned long)+0xc0>
        1d78a4:	eb60cb2c 	bl	1a0a55c <TFIQTimer::$AcquireFIQTimer(void (*)(void *, unsigned long), void *)>
        1d78a8:	e5840094 	str	r0, [r4, #148]	; fField148
        1d78ac:	ea000017 	b	1d7910 <TSerialChipVoyager::SetSerialMode(unsigned long)+0x108>
        1d78b0:	0037768c 	eoreqs	r7, r7, ip, lsl #13
        1d78b4:	003776ac 	eoreqs	r7, r7, ip, lsr #13
        1d78b8:	003776bc 	ldreqh	r7, [r7], -ip
        1d78bc:	003776cc 	eoreqs	r7, r7, ip, asr #13
        1d78c0:	0037769c 	mlaeqs	r7, ip, r6, r7
        1d78c4:	01a6c638 	moveq	ip, r8, lsr r6
        1d78c8:	01a6c640 	moveq	ip, r0, asr #12
        1d78cc:	e3320000 	teq	r2, #0	; 0x0
        1d78d0:	13a06069 	movne	r6, #105	; 0x69
        1d78d4:	12466c3f 	subne	r6, r6, #16128	; 0x3f00
        1d78d8:	1a00000d 	bne	1d7914 <TSerialChipVoyager::SetSerialMode(unsigned long)+0x10c>
        1d78dc:	e8b01008 	ldmia	r0!, {r3, ip}
        1d78e0:	e8a11008 	stmia	r1!, {r3, ip}
        1d78e4:	e8901008 	ldmia	r0, {r3, ip}
        1d78e8:	e8811008 	stmia	r1, {r3, ip}
        1d78ec:	e59f1028 	ldr	r1, [pc, #28]	; 1d791c <TSerialChipVoyager::SetSerialMode(unsigned long)+0x114>	; fField28
        1d78f0:	e594006c 	ldr	r0, [r4, #108]	; fField108
        1d78f4:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1d78f8:	e3150004 	tst	r5, #4	; 0x4
        1d78fc:	13a00008 	movne	r0, #8	; 0x8
        1d7900:	15c40062 	strneb	r0, [r4, #98]	; fField98
        1d7904:	e3150008 	tst	r5, #8	; 0x8
        1d7908:	13a00000 	movne	r0, #0	; 0x0
        1d790c:	15c40064 	strneb	r0, [r4, #100]	; fField100
        1d7910:	e5a4503c 	str	r5, [r4, #60]!	; fField60
        1d7914:	e1a00006 	mov	r0, r6
        1d7918:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1d791c:	01a6c62c 	moveq	ip, ip, lsr #12
    */
}

/**
 * Symbol: TSerialChipVoyager::SysEventNotify(unsigned long)
 * Address: 001d7920
 */
TSerialChipVoyager::SysEventNotify(unsigned long) {
    /*
        1d7920:	e59fc010 	ldr	ip, [pc, #10]	; 1d7938 <TSerialChipVoyager::SysEventNotify(unsigned long)+0x18>
        1d7924:	e131000c 	teq	r1, ip
        1d7928:	11a0f00e 	movne	pc, lr
        1d792c:	e3a01001 	mov	r1, #1	; 0x1
        1d7930:	e5c01057 	strb	r1, [r0, #87]	; fField87
        1d7934:	e1a0f00e 	mov	pc, lr
        1d7938:	70776f6e 	rsbvcs	r6, r7, lr, ror #30
    */
}

/**
 * Symbol: TSerialChipVoyager::SetTxDTransceiverEnable(unsigned char)
 * Address: 001d793c
 */
TSerialChipVoyager::SetTxDTransceiverEnable(unsigned char) {
    /*
        1d793c:	e20120ff 	and	r2, r1, #255	; 0xff
        1d7940:	e5901028 	ldr	r1, [r0, #40]	; fField40
        1d7944:	e3310000 	teq	r1, #0	; 0x0
        1d7948:	13310003 	teqne	r1, #3	; 0x3
        1d794c:	11a0f00e 	movne	pc, lr
        1d7950:	e5d01063 	ldrb	r1, [r0, #99]	; fField99
        1d7954:	e3320000 	teq	r2, #0	; 0x0
        1d7958:	03c11001 	biceq	r1, r1, #1	; 0x1
        1d795c:	13811001 	orrne	r1, r1, #1	; 0x1
        1d7960:	e20110ff 	and	r1, r1, #255	; 0xff
        1d7964:	e5c01063 	strb	r1, [r0, #99]	; fField99
        1d7968:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d796c:	e2800a02 	add	r0, r0, #8192	; 0x2000
        1d7970:	e5c01800 	strb	r1, [r0, #2048]	; fField2048
        1d7974:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::GetByteAndStatus(unsigned char *)
 * Address: 001d799c
 */
TSerialChipVoyager::GetByteAndStatus(unsigned char *) {
    /*
        1d799c:	e5903024 	ldr	r3, [r0, #36]	; fField36
        1d79a0:	e1a0c003 	mov	ip, r3
        1d79a4:	e2832901 	add	r2, r3, #16384	; 0x4000
        1d79a8:	e5d22800 	ldrb	r2, [r2, #2048]	; fField2048
        1d79ac:	e20220f0 	and	r2, r2, #240	; 0xf0
        1d79b0:	e28cca07 	add	ip, ip, #28672	; 0x7000
        1d79b4:	e5dcc000 	ldrb	ip, [ip]
        1d79b8:	e5c1c000 	strb	ip, [r1]
        1d79bc:	e3320000 	teq	r2, #0	; 0x0
        1d79c0:	0a000003 	beq	1d79d4 <TSerialChipVoyager::GetByteAndStatus(unsigned char *)+0x38>
        1d79c4:	e5d00061 	ldrb	r0, [r0, #97]	; fField97
        1d79c8:	e3800001 	orr	r0, r0, #1	; 0x1
        1d79cc:	e2831a02 	add	r1, r3, #8192	; 0x2000
        1d79d0:	e5c10000 	strb	r0, [r1]
        1d79d4:	e1a00002 	mov	r0, r2
        1d79d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::SetIntSourceEnable(unsigned long, unsigned char)
 * Address: 001d79dc
 */
TSerialChipVoyager::SetIntSourceEnable(unsigned long, unsigned char) {
    /*
        1d79dc:	e1a0c00d 	mov	ip, sp
        1d79e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d79e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d79e8:	e1a04000 	mov	r4, r0
        1d79ec:	e20230ff 	and	r3, r2, #255	; 0xff
        1d79f0:	e3a05000 	mov	r5, #0	; 0x0
        1d79f4:	e20100ff 	and	r0, r1, #255	; 0xff
        1d79f8:	e3d110ff 	bics	r1, r1, #255	; 0xff
        1d79fc:	e5942024 	ldr	r2, [r4, #36]	; fField36
        1d7a00:	13a05069 	movne	r5, #105	; 0x69
        1d7a04:	12455c3f 	subne	r5, r5, #16128	; 0x3f00
        1d7a08:	1a00000f 	bne	1d7a4c <TSerialChipVoyager::SetIntSourceEnable(unsigned long, unsigned char)+0x70>
        1d7a0c:	e5d41064 	ldrb	r1, [r4, #100]	; fField100
        1d7a10:	e1c11000 	bic	r1, r1, r0
        1d7a14:	e20110ff 	and	r1, r1, #255	; 0xff
        1d7a18:	e3330000 	teq	r3, #0	; 0x0
        1d7a1c:	0a000003 	beq	1d7a30 <TSerialChipVoyager::SetIntSourceEnable(unsigned long, unsigned char)+0x54>
        1d7a20:	e1811000 	orr	r1, r1, r0
        1d7a24:	e20110ff 	and	r1, r1, #255	; 0xff
        1d7a28:	e282ca03 	add	ip, r2, #12288	; 0x3000
        1d7a2c:	e5cc0c00 	strb	r0, [ip, #3072]	; fField3072
        1d7a30:	e5c41064 	strb	r1, [r4, #100]	; fField100
        1d7a34:	e2822a03 	add	r2, r2, #12288	; 0x3000
        1d7a38:	e5c21000 	strb	r1, [r2]
        1d7a3c:	e3100010 	tst	r0, #16	; 0x10
        1d7a40:	11a01003 	movne	r1, r3
        1d7a44:	11a00004 	movne	r0, r4
        1d7a48:	1b0004f0 	blne	1d8e10 <TSerialChipVoyager::SetModemDCDIntEnable(unsigned char)>
        1d7a4c:	e3a00000 	mov	r0, #0	; 0x0
        1d7a50:	e5c40058 	strb	r0, [r4, #88]	; fField88
        1d7a54:	e1a00005 	mov	r0, r5
        1d7a58:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::AllSent(void)
 * Address: 001d7a5c
 */
TSerialChipVoyager::AllSent(void) {
    /*
        1d7a5c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d7a60:	e2800901 	add	r0, r0, #16384	; 0x4000
        1d7a64:	e5d00800 	ldrb	r0, [r0, #2048]	; fField2048
        1d7a68:	e2100001 	ands	r0, r0, #1	; 0x1
        1d7a6c:	13a00001 	movne	r0, #1	; 0x1
        1d7a70:	e20000ff 	and	r0, r0, #255	; 0xff
        1d7a74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::WaitForAllSent(void)
 * Address: 001d7a78
 */
TSerialChipVoyager::WaitForAllSent(void) {
    /*
        1d7a78:	e1a0c00d 	mov	ip, sp
        1d7a7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d7a80:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d7a84:	e1a04000 	mov	r4, r0
        1d7a88:	e3a05000 	mov	r5, #0	; 0x0
        1d7a8c:	ea000004 	b	1d7aa4 <TSerialChipVoyager::WaitForAllSent(void)+0x2c>
        1d7a90:	e2855001 	add	r5, r5, #1	; 0x1
        1d7a94:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1d7a98:	eb6814e3 	bl	1bdce2c <$Sleep(unsigned long)>
        1d7a9c:	e3350004 	teq	r5, #4	; 0x4
        1d7aa0:	0a000003 	beq	1d7ab4 <TSerialChipVoyager::WaitForAllSent(void)+0x3c>
        1d7aa4:	e1a00004 	mov	r0, r4
        1d7aa8:	ebffffeb 	bl	1d7a5c <TSerialChipVoyager::AllSent(void)>
        1d7aac:	e3300000 	teq	r0, #0	; 0x0
        1d7ab0:	0afffff6 	beq	1d7a90 <TSerialChipVoyager::WaitForAllSent(void)+0x18>
        1d7ab4:	e3a00000 	mov	r0, #0	; 0x0
        1d7ab8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::ConfigureForOutput(unsigned char)
 * Address: 001d7abc
 */
TSerialChipVoyager::ConfigureForOutput(unsigned char) {
    /*
        1d7abc:	e1a0c00d 	mov	ip, sp
        1d7ac0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d7ac4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d7ac8:	e1a04000 	mov	r4, r0
        1d7acc:	e20150ff 	and	r5, r1, #255	; 0xff
        1d7ad0:	eb624ebe 	bl	1a6b5d0 <TSerialChipVoyager::$WaitForAllSent(void)>
        1d7ad4:	e1a00004 	mov	r0, r4
        1d7ad8:	e3a01000 	mov	r1, #0	; 0x0
        1d7adc:	eb624eaf 	bl	1a6b5a0 <TSerialChipVoyager::$SetInterruptEnable(unsigned char)>
        1d7ae0:	e5d40061 	ldrb	r0, [r4, #97]	; fField97
        1d7ae4:	e20010bf 	and	r1, r0, #191	; 0xbf
        1d7ae8:	e5d40062 	ldrb	r0, [r4, #98]	; fField98
        1d7aec:	e20000df 	and	r0, r0, #223	; 0xdf
        1d7af0:	e3350000 	teq	r5, #0	; 0x0
        1d7af4:	020110ff 	andeq	r1, r1, #255	; 0xff
        1d7af8:	03811040 	orreq	r1, r1, #64	; 0x40
        1d7afc:	120000ff 	andne	r0, r0, #255	; 0xff
        1d7b00:	13800020 	orrne	r0, r0, #32	; 0x20
        1d7b04:	e5942024 	ldr	r2, [r4, #36]	; fField36
        1d7b08:	e2822a02 	add	r2, r2, #8192	; 0x2000
        1d7b0c:	e5c20400 	strb	r0, [r2, #1024]	; fField1024
        1d7b10:	e5c21000 	strb	r1, [r2]
        1d7b14:	e5c40062 	strb	r0, [r4, #98]	; fField98
        1d7b18:	e5c41061 	strb	r1, [r4, #97]	; fField97
        1d7b1c:	e5d4008c 	ldrb	r0, [r4, #140]	; fField140
        1d7b20:	e3300000 	teq	r0, #0	; 0x0
        1d7b24:	0a000024 	beq	1d7bbc <TSerialChipVoyager::ConfigureForOutput(unsigned char)+0x100>
        1d7b28:	e3350000 	teq	r5, #0	; 0x0
        1d7b2c:	0a00000f 	beq	1d7b70 <TSerialChipVoyager::ConfigureForOutput(unsigned char)+0xb4>
        1d7b30:	e5d4008f 	ldrb	r0, [r4, #143]	; fField143
        1d7b34:	e3300002 	teq	r0, #2	; 0x2
        1d7b38:	01a00004 	moveq	r0, r4
        1d7b3c:	03a01002 	moveq	r1, #2	; 0x2
        1d7b40:	0b624ea9 	bleq	1a6b5ec <TSerialChipVoyager::$RxDMAControl(unsigned char)>
        1d7b44:	e2841074 	add	r1, r4, #116	; 0x74
        1d7b48:	e8910003 	ldmia	r1, {r0, r1}
        1d7b4c:	eb6252c2 	bl	1a6c65c <TSerialDMAEngine::$ShareEngine(void *)>
        1d7b50:	e5d4008d 	ldrb	r0, [r4, #141]	; fField141
        1d7b54:	e3300001 	teq	r0, #1	; 0x1
        1d7b58:	1a000017 	bne	1d7bbc <TSerialChipVoyager::ConfigureForOutput(unsigned char)+0x100>
        1d7b5c:	e5941080 	ldr	r1, [r4, #128]	; fField128
        1d7b60:	e594207c 	ldr	r2, [r4, #124]	; fField124
        1d7b64:	e1a00004 	mov	r0, r4
        1d7b68:	eb624e9c 	bl	1a6b5e0 <TSerialChipVoyager::$InitTxDMA(TCircleBuf *, void (*)(void *))>
        1d7b6c:	ea000012 	b	1d7bbc <TSerialChipVoyager::ConfigureForOutput(unsigned char)+0x100>
        1d7b70:	e5d4008d 	ldrb	r0, [r4, #141]	; fField141
        1d7b74:	e3300002 	teq	r0, #2	; 0x2
        1d7b78:	01a00004 	moveq	r0, r4
        1d7b7c:	03a01002 	moveq	r1, #2	; 0x2
        1d7b80:	0b624e98 	bleq	1a6b5e8 <TSerialChipVoyager::$TxDMAControl(unsigned char)>
        1d7b84:	e3a01000 	mov	r1, #0	; 0x0
        1d7b88:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d7b8c:	eb6252b2 	bl	1a6c65c <TSerialDMAEngine::$ShareEngine(void *)>
        1d7b90:	e5d4008f 	ldrb	r0, [r4, #143]	; fField143
        1d7b94:	e3300000 	teq	r0, #0	; 0x0
        1d7b98:	0a000007 	beq	1d7bbc <TSerialChipVoyager::ConfigureForOutput(unsigned char)+0x100>
        1d7b9c:	e5941088 	ldr	r1, [r4, #136]	; fField136
        1d7ba0:	e5942090 	ldr	r2, [r4, #144]	; fField144
        1d7ba4:	e5943084 	ldr	r3, [r4, #132]	; fField132
        1d7ba8:	e1a00004 	mov	r0, r4
        1d7bac:	eb624e8c 	bl	1a6b5e4 <TSerialChipVoyager::$InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))>
        1d7bb0:	e1a00004 	mov	r0, r4
        1d7bb4:	e3a01011 	mov	r1, #17	; 0x11
        1d7bb8:	eb624e8b 	bl	1a6b5ec <TSerialChipVoyager::$RxDMAControl(unsigned char)>
        1d7bbc:	e1a00004 	mov	r0, r4
        1d7bc0:	e3a01001 	mov	r1, #1	; 0x1
        1d7bc4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1d7bc8:	ea624e74 	b	1a6b5a0 <TSerialChipVoyager::$SetInterruptEnable(unsigned char)>
    */
}

/**
 * Symbol: TSerialChipVoyager::SetSDLCAddress(unsigned char)
 * Address: 001d7bcc
 */
TSerialChipVoyager::SetSDLCAddress(unsigned char) {
    /*
        1d7bcc:	e20110ff 	and	r1, r1, #255	; 0xff
        1d7bd0:	e5902024 	ldr	r2, [r0, #36]	; fField36
        1d7bd4:	e2823902 	add	r3, r2, #32768	; 0x8000
        1d7bd8:	e5c31000 	strb	r1, [r3]
        1d7bdc:	e5c0106b 	strb	r1, [r0, #107]	; fField107
        1d7be0:	e3310000 	teq	r1, #0	; 0x0
        1d7be4:	11a0f00e 	movne	pc, lr
        1d7be8:	e5d01060 	ldrb	r1, [r0, #96]	; fField96
        1d7bec:	e20110f7 	and	r1, r1, #247	; 0xf7
        1d7bf0:	e5c01060 	strb	r1, [r0, #96]	; fField96
        1d7bf4:	e2820a01 	add	r0, r2, #4096	; 0x1000
        1d7bf8:	e5c01000 	strb	r1, [r0]
        1d7bfc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::ReEnableReceiver(unsigned char)
 * Address: 001d7c00
 */
TSerialChipVoyager::ReEnableReceiver(unsigned char) {
    /*
        1d7c00:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        1d7c04:	e31100ff 	tst	r1, #255	; 0xff
        1d7c08:	e590c024 	ldr	ip, [r0, #36]	; fField36
        1d7c0c:	e5d01061 	ldrb	r1, [r0, #97]	; fField97
        1d7c10:	e3a04061 	mov	r4, #97	; 0x61
        1d7c14:	0a000020 	beq	1d7c9c <TSerialChipVoyager::ReEnableReceiver(unsigned char)+0x9c>
        1d7c18:	e20130bf 	and	r3, r1, #191	; 0xbf
        1d7c1c:	e28c1a02 	add	r1, ip, #8192	; 0x2000
        1d7c20:	e5c13000 	strb	r3, [r1]
        1d7c24:	e3a02000 	mov	r2, #0	; 0x0
        1d7c28:	e28c5901 	add	r5, ip, #16384	; 0x4000
        1d7c2c:	e3836001 	orr	r6, r3, #1	; 0x1
        1d7c30:	e28cca03 	add	ip, ip, #12288	; 0x3000
        1d7c34:	e5d5e400 	ldrb	lr, [r5, #1024]	; fField1024
        1d7c38:	e5cc4c00 	strb	r4, [ip, #3072]	; fField3072
        1d7c3c:	e5c16000 	strb	r6, [r1]
        1d7c40:	e31e0040 	tst	lr, #64	; 0x40
        1d7c44:	15907024 	ldrne	r7, [r0, #36]	; fField36
        1d7c48:	12877a07 	addne	r7, r7, #28672	; 0x7000
        1d7c4c:	15d77000 	ldrneb	r7, [r7]
        1d7c50:	e3520004 	cmp	r2, #4	; 0x4
        1d7c54:	ba000001 	blt	1d7c60 <TSerialChipVoyager::ReEnableReceiver(unsigned char)+0x60>
        1d7c58:	e31e0060 	tst	lr, #96	; 0x60
        1d7c5c:	0a000002 	beq	1d7c6c <TSerialChipVoyager::ReEnableReceiver(unsigned char)+0x6c>
        1d7c60:	e2822001 	add	r2, r2, #1	; 0x1
        1d7c64:	e352000a 	cmp	r2, #10	; 0xa
        1d7c68:	bafffff1 	blt	1d7c34 <TSerialChipVoyager::ReEnableReceiver(unsigned char)+0x34>
        1d7c6c:	e20320ff 	and	r2, r3, #255	; 0xff
        1d7c70:	e3822040 	orr	r2, r2, #64	; 0x40
        1d7c74:	e5c12000 	strb	r2, [r1]
        1d7c78:	e382300c 	orr	r3, r2, #12	; 0xc
        1d7c7c:	e5c13000 	strb	r3, [r1]
        1d7c80:	e3822080 	orr	r2, r2, #128	; 0x80
        1d7c84:	e5c12000 	strb	r2, [r1]
        1d7c88:	e5d01064 	ldrb	r1, [r0, #100]	; fField100
        1d7c8c:	e3811060 	orr	r1, r1, #96	; 0x60
        1d7c90:	e5c01064 	strb	r1, [r0, #100]	; fField100
        1d7c94:	e5cc1000 	strb	r1, [ip]
        1d7c98:	ea000008 	b	1d7cc0 <TSerialChipVoyager::ReEnableReceiver(unsigned char)+0xc0>
        1d7c9c:	e3811001 	orr	r1, r1, #1	; 0x1
        1d7ca0:	e28c2a02 	add	r2, ip, #8192	; 0x2000
        1d7ca4:	e5c21000 	strb	r1, [r2]
        1d7ca8:	e28c1a03 	add	r1, ip, #12288	; 0x3000
        1d7cac:	e5c14c00 	strb	r4, [r1, #3072]	; fField3072
        1d7cb0:	e5d02064 	ldrb	r2, [r0, #100]	; fField100
        1d7cb4:	e3822060 	orr	r2, r2, #96	; 0x60
        1d7cb8:	e5c02064 	strb	r2, [r0, #100]	; fField100
        1d7cbc:	e5c12000 	strb	r2, [r1]
        1d7cc0:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::InitTxDMA(TCircleBuf *, void (*)(void *))
 * Address: 001d7cc4
 */
TSerialChipVoyager::InitTxDMA(TCircleBuf *, void (*)(void *)) {
    /*
        1d7cc4:	e1a0c00d 	mov	ip, sp
        1d7cc8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d7ccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d7cd0:	e1a04000 	mov	r4, r0
        1d7cd4:	e1a05001 	mov	r5, r1
        1d7cd8:	e3a06000 	mov	r6, #0	; 0x0
        1d7cdc:	e5801080 	str	r1, [r0, #128]	; fField128
        1d7ce0:	e580207c 	str	r2, [r0, #124]	; fField124
        1d7ce4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d7ce8:	e3a03000 	mov	r3, #0	; 0x0
        1d7cec:	e92d0008 	stmdb	sp!, {r3}
        1d7cf0:	e28d3004 	add	r3, sp, #4	; 0x4
        1d7cf4:	e1a00001 	mov	r0, r1
        1d7cf8:	e3a02000 	mov	r2, #0	; 0x0
        1d7cfc:	e3a01000 	mov	r1, #0	; 0x0
        1d7d00:	eb68b990 	bl	1c06348 <TCircleBuf::$DMABufInfo(unsigned long *, unsigned long *, unsigned char *, unsigned char *)>
        1d7d04:	e5fd0004 	ldrb	r0, [sp, #4]!	; fField4
        1d7d08:	e3100002 	tst	r0, #2	; 0x2
        1d7d0c:	03a0607e 	moveq	r6, #126	; 0x7e
        1d7d10:	02466c3f 	subeq	r6, r6, #16128	; 0x3f00
        1d7d14:	0a000011 	beq	1d7d60 <TSerialChipVoyager::InitTxDMA(TCircleBuf *, void (*)(void *))+0x9c>
        1d7d18:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d7d1c:	e3300000 	teq	r0, #0	; 0x0
        1d7d20:	0a00000e 	beq	1d7d60 <TSerialChipVoyager::InitTxDMA(TCircleBuf *, void (*)(void *))+0x9c>
        1d7d24:	e1a01005 	mov	r1, r5
        1d7d28:	e3a02000 	mov	r2, #0	; 0x0
        1d7d2c:	eb625247 	bl	1a6c650 <TSerialDMAEngine::$BindToBuffer(TCircleBuf *, unsigned char)>
        1d7d30:	e1b06000 	movs	r6, r0
        1d7d34:	1a000009 	bne	1d7d60 <TSerialChipVoyager::InitTxDMA(TCircleBuf *, void (*)(void *))+0x9c>
        1d7d38:	e3a00001 	mov	r0, #1	; 0x1
        1d7d3c:	e5c4008d 	strb	r0, [r4, #141]	; fField141
        1d7d40:	e594003c 	ldr	r0, [r4, #60]	; fField60
        1d7d44:	e2000003 	and	r0, r0, #3	; 0x3
        1d7d48:	e3300002 	teq	r0, #2	; 0x2
        1d7d4c:	159f2014 	ldrne	r2, [pc, #14]	; 1d7d68 <TSerialChipVoyager::InitTxDMA(TCircleBuf *, void (*)(void *))+0xa4>
        1d7d50:	059f2014 	ldreq	r2, [pc, #14]	; 1d7d6c <TSerialChipVoyager::InitTxDMA(TCircleBuf *, void (*)(void *))+0xa8>
        1d7d54:	e3a01002 	mov	r1, #2	; 0x2
        1d7d58:	e5b40078 	ldr	r0, [r4, #120]!	; fField120
        1d7d5c:	eb62523c 	bl	1a6c654 <TSerialDMAEngine::$ConfigureInterrupts(unsigned long, long (*)(void *))>
        1d7d60:	e1a00006 	mov	r0, r6
        1d7d64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1d7d68:	01a6c630 	moveq	ip, r0, lsr r6
        1d7d6c:	01a6c63c 	moveq	ip, ip, lsr r6
    */
}

/**
 * Symbol: TSerialChipVoyager::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))
 * Address: 001d7d70
 */
TSerialChipVoyager::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long)) {
    /*
        1d7d70:	e1a0c00d 	mov	ip, sp
        1d7d74:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d7d78:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d7d7c:	e1a04000 	mov	r4, r0
        1d7d80:	e3a05000 	mov	r5, #0	; 0x0
        1d7d84:	e3520004 	cmp	r2, #4	; 0x4
        1d7d88:	e5801088 	str	r1, [r0, #136]	; fField136
        1d7d8c:	e5803084 	str	r3, [r0, #132]	; fField132
        1d7d90:	82422004 	subhi	r2, r2, #4	; 0x4
        1d7d94:	e5842090 	str	r2, [r4, #144]	; fField144
        1d7d98:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d7d9c:	e3300000 	teq	r0, #0	; 0x0
        1d7da0:	0a00000e 	beq	1d7de0 <TSerialChipVoyager::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))+0x70>
        1d7da4:	e3a02001 	mov	r2, #1	; 0x1
        1d7da8:	eb625228 	bl	1a6c650 <TSerialDMAEngine::$BindToBuffer(TCircleBuf *, unsigned char)>
        1d7dac:	e1b05000 	movs	r5, r0
        1d7db0:	1a00000a 	bne	1d7de0 <TSerialChipVoyager::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))+0x70>
        1d7db4:	e3a00001 	mov	r0, #1	; 0x1
        1d7db8:	e5c4008f 	strb	r0, [r4, #143]	; fField143
        1d7dbc:	e594003c 	ldr	r0, [r4, #60]	; fField60
        1d7dc0:	e2000003 	and	r0, r0, #3	; 0x3
        1d7dc4:	e3300002 	teq	r0, #2	; 0x2
        1d7dc8:	159f2018 	ldrne	r2, [pc, #18]	; 1d7de8 <TSerialChipVoyager::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))+0x78>
        1d7dcc:	13a01006 	movne	r1, #6	; 0x6
        1d7dd0:	059f2014 	ldreq	r2, [pc, #14]	; 1d7dec <TSerialChipVoyager::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))+0x7c>
        1d7dd4:	03a01012 	moveq	r1, #18	; 0x12
        1d7dd8:	e5b40074 	ldr	r0, [r4, #116]!	; fField116
        1d7ddc:	eb62521c 	bl	1a6c654 <TSerialDMAEngine::$ConfigureInterrupts(unsigned long, long (*)(void *))>
        1d7de0:	e1a00005 	mov	r0, r5
        1d7de4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d7de8:	01a6c634 	moveq	ip, r4, lsr r6
        1d7dec:	01a6c644 	moveq	ip, r4, asr #12
    */
}

/**
 * Symbol: TSerialChipVoyager::TxDMAControl(unsigned char)
 * Address: 001d7df0
 */
TSerialChipVoyager::TxDMAControl(unsigned char) {
    /*
        1d7df0:	e1a0c00d 	mov	ip, sp
        1d7df4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d7df8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d7dfc:	e1a04000 	mov	r4, r0
        1d7e00:	e3a05000 	mov	r5, #0	; 0x0
        1d7e04:	e201100f 	and	r1, r1, #15	; 0xf
        1d7e08:	e590003c 	ldr	r0, [r0, #60]	; fField60
        1d7e0c:	e2002003 	and	r2, r0, #3	; 0x3
        1d7e10:	e3a0007a 	mov	r0, #122	; 0x7a
        1d7e14:	e2400c3f 	sub	r0, r0, #16128	; 0x3f00
        1d7e18:	e3320002 	teq	r2, #2	; 0x2
        1d7e1c:	1a00000b 	bne	1d7e50 <TSerialChipVoyager::TxDMAControl(unsigned char)+0x60>
        1d7e20:	e3310001 	teq	r1, #1	; 0x1
        1d7e24:	0a000006 	beq	1d7e44 <TSerialChipVoyager::TxDMAControl(unsigned char)+0x54>
        1d7e28:	e3310002 	teq	r1, #2	; 0x2
        1d7e2c:	1a00002e 	bne	1d7eec <TSerialChipVoyager::TxDMAControl(unsigned char)+0xfc>
        1d7e30:	e5d4008d 	ldrb	r0, [r4, #141]	; fField141
        1d7e34:	e3300002 	teq	r0, #2	; 0x2
        1d7e38:	01a00004 	moveq	r0, r4
        1d7e3c:	0b6251fe 	bleq	1a6c63c <TSerialChipVoyager::$LocalTalkDMAOutInt(void)>
        1d7e40:	ea00002a 	b	1d7ef0 <TSerialChipVoyager::TxDMAControl(unsigned char)+0x100>
        1d7e44:	e1a00004 	mov	r0, r4
        1d7e48:	eb6251f5 	bl	1a6c624 <TSerialChipVoyager::$StartSendDMAPacket(void)>
        1d7e4c:	ea000026 	b	1d7eec <TSerialChipVoyager::TxDMAControl(unsigned char)+0xfc>
        1d7e50:	e3310001 	teq	r1, #1	; 0x1
        1d7e54:	0a00000a 	beq	1d7e84 <TSerialChipVoyager::TxDMAControl(unsigned char)+0x94>
        1d7e58:	e3310002 	teq	r1, #2	; 0x2
        1d7e5c:	0a000018 	beq	1d7ec4 <TSerialChipVoyager::TxDMAControl(unsigned char)+0xd4>
        1d7e60:	e3310003 	teq	r1, #3	; 0x3
        1d7e64:	05d4108d 	ldreqb	r1, [r4, #141]	; fField141
        1d7e68:	03310002 	teqeq	r1, #2	; 0x2
        1d7e6c:	1a00001e 	bne	1d7eec <TSerialChipVoyager::TxDMAControl(unsigned char)+0xfc>
        1d7e70:	e3a01001 	mov	r1, #1	; 0x1
        1d7e74:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d7e78:	eb6251f6 	bl	1a6c658 <TSerialDMAEngine::$PauseDMA(unsigned char)>
        1d7e7c:	e3a00001 	mov	r0, #1	; 0x1
        1d7e80:	ea00000d 	b	1d7ebc <TSerialChipVoyager::TxDMAControl(unsigned char)+0xcc>
        1d7e84:	e5d4108d 	ldrb	r1, [r4, #141]	; fField141
        1d7e88:	e3310001 	teq	r1, #1	; 0x1
        1d7e8c:	1a000004 	bne	1d7ea4 <TSerialChipVoyager::TxDMAControl(unsigned char)+0xb4>
        1d7e90:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d7e94:	eb6251f5 	bl	1a6c670 <TSerialDMAEngine::$StartTxDMA(void)>
        1d7e98:	e1a00004 	mov	r0, r4
        1d7e9c:	e3a01001 	mov	r1, #1	; 0x1
        1d7ea0:	ea00000f 	b	1d7ee4 <TSerialChipVoyager::TxDMAControl(unsigned char)+0xf4>
        1d7ea4:	e3310002 	teq	r1, #2	; 0x2
        1d7ea8:	1a00000f 	bne	1d7eec <TSerialChipVoyager::TxDMAControl(unsigned char)+0xfc>
        1d7eac:	e3a01000 	mov	r1, #0	; 0x0
        1d7eb0:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d7eb4:	eb6251e7 	bl	1a6c658 <TSerialDMAEngine::$PauseDMA(unsigned char)>
        1d7eb8:	e3a00000 	mov	r0, #0	; 0x0
        1d7ebc:	e5c4008e 	strb	r0, [r4, #142]	; fField142
        1d7ec0:	ea00000a 	b	1d7ef0 <TSerialChipVoyager::TxDMAControl(unsigned char)+0x100>
        1d7ec4:	e5d4108d 	ldrb	r1, [r4, #141]	; fField141
        1d7ec8:	e3310002 	teq	r1, #2	; 0x2
        1d7ecc:	1a000006 	bne	1d7eec <TSerialChipVoyager::TxDMAControl(unsigned char)+0xfc>
        1d7ed0:	e3a01000 	mov	r1, #0	; 0x0
        1d7ed4:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d7ed8:	eb6251e5 	bl	1a6c674 <TSerialDMAEngine::$StopTxDMA(unsigned char)>
        1d7edc:	e1a00004 	mov	r0, r4
        1d7ee0:	e3a01000 	mov	r1, #0	; 0x0
        1d7ee4:	eb6251cd 	bl	1a6c620 <TSerialChipVoyager::$TxDMAEnable(int)>
        1d7ee8:	ea000000 	b	1d7ef0 <TSerialChipVoyager::TxDMAControl(unsigned char)+0x100>
        1d7eec:	e1a05000 	mov	r5, r0
        1d7ef0:	e1a00005 	mov	r0, r5
        1d7ef4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::RxDMAControl(unsigned char)
 * Address: 001d7f28
 */
TSerialChipVoyager::RxDMAControl(unsigned char) {
    /*
        1d7f28:	e1a0c00d 	mov	ip, sp
        1d7f2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d7f30:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d7f34:	e1a04000 	mov	r4, r0
        1d7f38:	e1a05001 	mov	r5, r1
        1d7f3c:	e20170ff 	and	r7, r1, #255	; 0xff
        1d7f40:	e3a06000 	mov	r6, #0	; 0x0
        1d7f44:	eb06eb11 	bl	392b90 <EnterFIQAtomic>
        1d7f48:	e207100f 	and	r1, r7, #15	; 0xf
        1d7f4c:	e594003c 	ldr	r0, [r4, #60]	; fField60
        1d7f50:	e2002003 	and	r2, r0, #3	; 0x3
        1d7f54:	e3a0007a 	mov	r0, #122	; 0x7a
        1d7f58:	e2400c3f 	sub	r0, r0, #16128	; 0x3f00
        1d7f5c:	e3320002 	teq	r2, #2	; 0x2
        1d7f60:	1a00000c 	bne	1d7f98 <TSerialChipVoyager::RxDMAControl(unsigned char)+0x70>
        1d7f64:	e3310001 	teq	r1, #1	; 0x1
        1d7f68:	0a000043 	beq	1d807c <TSerialChipVoyager::RxDMAControl(unsigned char)+0x154>
        1d7f6c:	e3310002 	teq	r1, #2	; 0x2
        1d7f70:	1a00003d 	bne	1d806c <TSerialChipVoyager::RxDMAControl(unsigned char)+0x144>
        1d7f74:	e1a00004 	mov	r0, r4
        1d7f78:	eb6251a7 	bl	1a6c61c <TSerialChipVoyager::$DisableRxDMA(void)>
        1d7f7c:	e3a01000 	mov	r1, #0	; 0x0
        1d7f80:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d7f84:	eb6251b6 	bl	1a6c664 <TSerialDMAEngine::$StopIn(int)>
        1d7f88:	e5b41094 	ldr	r1, [r4, #148]!	; fField148
        1d7f8c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1d7f90:	eb610321 	bl	1a18c1c <TFIQTimer::$ResetFIQTimer(FIQTimer *)>
        1d7f94:	ea000038 	b	1d807c <TSerialChipVoyager::RxDMAControl(unsigned char)+0x154>
        1d7f98:	e2052010 	and	r2, r5, #16	; 0x10
        1d7f9c:	e3310001 	teq	r1, #1	; 0x1
        1d7fa0:	0a000012 	beq	1d7ff0 <TSerialChipVoyager::RxDMAControl(unsigned char)+0xc8>
        1d7fa4:	e3310002 	teq	r1, #2	; 0x2
        1d7fa8:	0a000021 	beq	1d8034 <TSerialChipVoyager::RxDMAControl(unsigned char)+0x10c>
        1d7fac:	e3310004 	teq	r1, #4	; 0x4
        1d7fb0:	1a00002f 	bne	1d8074 <TSerialChipVoyager::RxDMAControl(unsigned char)+0x14c>
        1d7fb4:	e5d4108f 	ldrb	r1, [r4, #143]	; fField143
        1d7fb8:	e3310002 	teq	r1, #2	; 0x2
        1d7fbc:	1a00002a 	bne	1d806c <TSerialChipVoyager::RxDMAControl(unsigned char)+0x144>
        1d7fc0:	e3320000 	teq	r2, #0	; 0x0
        1d7fc4:	0a000003 	beq	1d7fd8 <TSerialChipVoyager::RxDMAControl(unsigned char)+0xb0>
        1d7fc8:	e1a00004 	mov	r0, r4
        1d7fcc:	e3a02001 	mov	r2, #1	; 0x1
        1d7fd0:	e3a01040 	mov	r1, #64	; 0x40
        1d7fd4:	eb624d7c 	bl	1a6b5cc <TSerialChipVoyager::$SetIntSourceEnable(unsigned long, unsigned char)>
        1d7fd8:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d7fdc:	eb6251a2 	bl	1a6c66c <TSerialDMAEngine::$StopRxDMA(void)>
        1d7fe0:	e5b40074 	ldr	r0, [r4, #116]!	; fField116
        1d7fe4:	e5b4101c 	ldr	r1, [r4, #28]!	; fField28
        1d7fe8:	eb62519e 	bl	1a6c668 <TSerialDMAEngine::$StartRxDMA(unsigned long)>
        1d7fec:	ea000022 	b	1d807c <TSerialChipVoyager::RxDMAControl(unsigned char)+0x154>
        1d7ff0:	e5d4008f 	ldrb	r0, [r4, #143]	; fField143
        1d7ff4:	e3300001 	teq	r0, #1	; 0x1
        1d7ff8:	13e06f97 	mvnne	r6, #604	; 0x25c
        1d7ffc:	12466b11 	subne	r6, r6, #17408	; 0x4400
        1d8000:	1a00001d 	bne	1d807c <TSerialChipVoyager::RxDMAControl(unsigned char)+0x154>
        1d8004:	e3320000 	teq	r2, #0	; 0x0
        1d8008:	0a000003 	beq	1d801c <TSerialChipVoyager::RxDMAControl(unsigned char)+0xf4>
        1d800c:	e1a00004 	mov	r0, r4
        1d8010:	e3a02001 	mov	r2, #1	; 0x1
        1d8014:	e3a01040 	mov	r1, #64	; 0x40
        1d8018:	eb624d6b 	bl	1a6b5cc <TSerialChipVoyager::$SetIntSourceEnable(unsigned long, unsigned char)>
        1d801c:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d8020:	e5941090 	ldr	r1, [r4, #144]	; fField144
        1d8024:	eb62518f 	bl	1a6c668 <TSerialDMAEngine::$StartRxDMA(unsigned long)>
        1d8028:	e1a00004 	mov	r0, r4
        1d802c:	eb625179 	bl	1a6c618 <TSerialChipVoyager::$EnableRxDMA(void)>
        1d8030:	ea000011 	b	1d807c <TSerialChipVoyager::RxDMAControl(unsigned char)+0x154>
        1d8034:	e5d4108f 	ldrb	r1, [r4, #143]	; fField143
        1d8038:	e3310002 	teq	r1, #2	; 0x2
        1d803c:	1a000004 	bne	1d8054 <TSerialChipVoyager::RxDMAControl(unsigned char)+0x12c>
        1d8040:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d8044:	eb625188 	bl	1a6c66c <TSerialDMAEngine::$StopRxDMA(void)>
        1d8048:	e1a00004 	mov	r0, r4
        1d804c:	eb625172 	bl	1a6c61c <TSerialChipVoyager::$DisableRxDMA(void)>
        1d8050:	ea000000 	b	1d8058 <TSerialChipVoyager::RxDMAControl(unsigned char)+0x130>
        1d8054:	e1a06000 	mov	r6, r0
        1d8058:	e1a00004 	mov	r0, r4
        1d805c:	e3a02001 	mov	r2, #1	; 0x1
        1d8060:	e3a01040 	mov	r1, #64	; 0x40
        1d8064:	eb624d58 	bl	1a6b5cc <TSerialChipVoyager::$SetIntSourceEnable(unsigned long, unsigned char)>
        1d8068:	ea000003 	b	1d807c <TSerialChipVoyager::RxDMAControl(unsigned char)+0x154>
        1d806c:	e1a06000 	mov	r6, r0
        1d8070:	ea000001 	b	1d807c <TSerialChipVoyager::RxDMAControl(unsigned char)+0x154>
        1d8074:	e3a06f5a 	mov	r6, #360	; 0x168
        1d8078:	e2466901 	sub	r6, r6, #16384	; 0x4000
        1d807c:	eb06eacb 	bl	392bb0 <ExitFIQAtomic>
        1d8080:	e1a00006 	mov	r0, r6
        1d8084:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::LinkIsFree(unsigned char)
 * Address: 001d8088
 */
TSerialChipVoyager::LinkIsFree(unsigned char) {
    /*
        1d8088:	e31100ff 	tst	r1, #255	; 0xff
        1d808c:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d8090:	0a000003 	beq	1d80a4 <TSerialChipVoyager::LinkIsFree(unsigned char)+0x1c>
        1d8094:	e5d00061 	ldrb	r0, [r0, #97]	; fField97
        1d8098:	e380000c 	orr	r0, r0, #12	; 0xc
        1d809c:	e2812a02 	add	r2, r1, #8192	; 0x2000
        1d80a0:	e5c20000 	strb	r0, [r2]
        1d80a4:	e2810901 	add	r0, r1, #16384	; 0x4000
        1d80a8:	e5d00400 	ldrb	r0, [r0, #1024]	; fField1024
        1d80ac:	e2000002 	and	r0, r0, #2	; 0x2
        1d80b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::SendControlPacket(unsigned char, unsigned char, unsigned char)
 * Address: 001d80b4
 */
TSerialChipVoyager::SendControlPacket(unsigned char, unsigned char, unsigned char) {
    /*
        1d80b4:	e1a0c00d 	mov	ip, sp
        1d80b8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d80bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d80c0:	e201c0ff 	and	ip, r1, #255	; 0xff
        1d80c4:	e202e0ff 	and	lr, r2, #255	; 0xff
        1d80c8:	e31300ff 	tst	r3, #255	; 0xff
        1d80cc:	e5d05062 	ldrb	r5, [r0, #98]	; fField98
        1d80d0:	e3a01000 	mov	r1, #0	; 0x0
        1d80d4:	e5904024 	ldr	r4, [r0, #36]	; fField36
        1d80d8:	0a000005 	beq	1d80f4 <TSerialChipVoyager::SendControlPacket(unsigned char, unsigned char, unsigned char)+0x40>
        1d80dc:	e3a01006 	mov	r1, #6	; 0x6
        1d80e0:	e2842901 	add	r2, r4, #16384	; 0x4000
        1d80e4:	e5d22c00 	ldrb	r2, [r2, #3072]	; fField3072
        1d80e8:	e3120080 	tst	r2, #128	; 0x80
        1d80ec:	13a00000 	movne	r0, #0	; 0x0
        1d80f0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1d80f4:	e3853008 	orr	r3, r5, #8	; 0x8
        1d80f8:	e2842a02 	add	r2, r4, #8192	; 0x2000
        1d80fc:	e1a07002 	mov	r7, r2
        1d8100:	e5c23400 	strb	r3, [r2, #1024]	; fField1024
        1d8104:	e5903024 	ldr	r3, [r0, #36]	; fField36
        1d8108:	e2833a06 	add	r3, r3, #24576	; 0x6000
        1d810c:	e5c3e000 	strb	lr, [r3]
        1d8110:	e1851001 	orr	r1, r5, r1
        1d8114:	e3811028 	orr	r1, r1, #40	; 0x28
        1d8118:	e5c21400 	strb	r1, [r2, #1024]	; fField1024
        1d811c:	e5d0106b 	ldrb	r1, [r0, #107]	; fField107
        1d8120:	e5902024 	ldr	r2, [r0, #36]	; fField36
        1d8124:	e2822a06 	add	r2, r2, #24576	; 0x6000
        1d8128:	e5c21000 	strb	r1, [r2]
        1d812c:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d8130:	e2811a06 	add	r1, r1, #24576	; 0x6000
        1d8134:	e5c1c000 	strb	ip, [r1]
        1d8138:	e2800048 	add	r0, r0, #72	; 0x48
        1d813c:	e1a06000 	mov	r6, r0
        1d8140:	e3a01e75 	mov	r1, #1872	; 0x750
        1d8144:	eb689765 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
        1d8148:	e2844901 	add	r4, r4, #16384	; 0x4000
        1d814c:	e5d40c00 	ldrb	r0, [r4, #3072]	; fField3072
        1d8150:	e3100040 	tst	r0, #64	; 0x40
        1d8154:	0a000006 	beq	1d8174 <TSerialChipVoyager::SendControlPacket(unsigned char, unsigned char, unsigned char)+0xc0>
        1d8158:	e1a00006 	mov	r0, r6
        1d815c:	eb689761 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
        1d8160:	e3300000 	teq	r0, #0	; 0x0
        1d8164:	1a000002 	bne	1d8174 <TSerialChipVoyager::SendControlPacket(unsigned char, unsigned char, unsigned char)+0xc0>
        1d8168:	e5d40c00 	ldrb	r0, [r4, #3072]	; fField3072
        1d816c:	e3100040 	tst	r0, #64	; 0x40
        1d8170:	1afffff8 	bne	1d8158 <TSerialChipVoyager::SendControlPacket(unsigned char, unsigned char, unsigned char)+0xa4>
        1d8174:	e5c75400 	strb	r5, [r7, #1024]	; fField1024
        1d8178:	e3a00001 	mov	r0, #1	; 0x1
        1d817c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::WaitForPacket(unsigned long)
 * Address: 001d8180
 */
TSerialChipVoyager::WaitForPacket(unsigned long) {
    /*
        1d8180:	e1a0c00d 	mov	ip, sp
        1d8184:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d8188:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d818c:	e1a04000 	mov	r4, r0
        1d8190:	e2800048 	add	r0, r0, #72	; 0x48
        1d8194:	e1a05000 	mov	r5, r0
        1d8198:	eb689750 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
        1d819c:	e1a00004 	mov	r0, r4
        1d81a0:	ebfffa77 	bl	1d6b84 <TSerialChipVoyager::RxBufFull(void)>
        1d81a4:	e3300000 	teq	r0, #0	; 0x0
        1d81a8:	11a00004 	movne	r0, r4
        1d81ac:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1d81b0:	1a62511c 	bne	1a6c628 <TSerialChipVoyager::$ReceivePacket(void)>
        1d81b4:	e1a00005 	mov	r0, r5
        1d81b8:	eb68974a 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
        1d81bc:	e3300000 	teq	r0, #0	; 0x0
        1d81c0:	0afffff5 	beq	1d819c <TSerialChipVoyager::WaitForPacket(unsigned long)+0x1c>
        1d81c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::RegisterPrimaryInterrupt(void)
 * Address: 001d81c8
 */
TSerialChipVoyager::RegisterPrimaryInterrupt(void) {
    /*
        1d81c8:	e1a0c00d 	mov	ip, sp
        1d81cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d81d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d81d4:	e1a04000 	mov	r4, r0
        1d81d8:	e3a00000 	mov	r0, #0	; 0x0
        1d81dc:	e5941024 	ldr	r1, [r4, #36]	; fField36
        1d81e0:	e2811a03 	add	r1, r1, #12288	; 0x3000
        1d81e4:	e5c10000 	strb	r0, [r1]
        1d81e8:	e3a03001 	mov	r3, #1	; 0x1
        1d81ec:	e92d0008 	stmdb	sp!, {r3}
        1d81f0:	e594102c 	ldr	r1, [r4, #44]	; fField44
        1d81f4:	e284006c 	add	r0, r4, #108	; 0x6c
        1d81f8:	e59f3034 	ldr	r3, [pc, #34]	; 1d8234 <TSerialChipVoyager::RegisterPrimaryInterrupt(void)+0x6c>
        1d81fc:	e1a02004 	mov	r2, r4
        1d8200:	eb68c8c5 	bl	1c0a51c <$RegisterInterrupt(InterruptObject **, unsigned long, void *, long (*)(void *), void *)>
        1d8204:	e28dd004 	add	sp, sp, #4	; 0x4
        1d8208:	e1b05000 	movs	r5, r0
        1d820c:	1a000006 	bne	1d822c <TSerialChipVoyager::RegisterPrimaryInterrupt(void)+0x64>
        1d8210:	e3a02001 	mov	r2, #1	; 0x1
        1d8214:	e1a01002 	mov	r1, r2
        1d8218:	e594006c 	ldr	r0, [r4, #108]	; fField108
        1d821c:	eb68c4b5 	bl	1c094f8 <$ChangeInterruptPriority(InterruptObject *, InterruptPriority)>
        1d8220:	e1b05000 	movs	r5, r0
        1d8224:	05b4006c 	ldreq	r0, [r4, #108]!	; fField108
        1d8228:	0b68c8b9 	bleq	1c0a514 <$QuickEnableInterrupt>
        1d822c:	e1a00005 	mov	r0, r5
        1d8230:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d8234:	01a6c62c 	moveq	ip, ip, lsr #12
    */
}

/**
 * Symbol: TSerialChipVoyager::ReconfigureIOParms(void)
 * Address: 001d8238
 */
TSerialChipVoyager::ReconfigureIOParms(void) {
    /*
        1d8238:	e92d4010 	stmdb	sp!, {r4, lr}
        1d823c:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d8240:	e5d0205c 	ldrb	r2, [r0, #92]	; fField92
        1d8244:	e5c12000 	strb	r2, [r1]
        1d8248:	e5d0205d 	ldrb	r2, [r0, #93]	; fField93
        1d824c:	e5c12400 	strb	r2, [r1, #1024]	; fField1024
        1d8250:	e5d0205e 	ldrb	r2, [r0, #94]	; fField94
        1d8254:	e5c12800 	strb	r2, [r1, #2048]	; fField2048
        1d8258:	e5d0205f 	ldrb	r2, [r0, #95]	; fField95
        1d825c:	e5c12c00 	strb	r2, [r1, #3072]	; fField3072
        1d8260:	e2812a02 	add	r2, r1, #8192	; 0x2000
        1d8264:	e5d23400 	ldrb	r3, [r2, #1024]	; fField1024
        1d8268:	e3c3e020 	bic	lr, r3, #32	; 0x20
        1d826c:	e5c2e400 	strb	lr, [r2, #1024]	; fField1024
        1d8270:	e3c3c028 	bic	ip, r3, #40	; 0x28
        1d8274:	e5c2c400 	strb	ip, [r2, #1024]	; fField1024
        1d8278:	e5d04067 	ldrb	r4, [r0, #103]	; fField103
        1d827c:	e2811a05 	add	r1, r1, #20480	; 0x5000
        1d8280:	e1a0c001 	mov	ip, r1
        1d8284:	e5c14000 	strb	r4, [r1]
        1d8288:	e5d04068 	ldrb	r4, [r0, #104]	; fField104
        1d828c:	e5cc4400 	strb	r4, [ip, #1024]	; fField1024
        1d8290:	e5c2e400 	strb	lr, [r2, #1024]	; fField1024
        1d8294:	e5c23400 	strb	r3, [r2, #1024]	; fField1024
        1d8298:	e5902028 	ldr	r2, [r0, #40]	; fField40
        1d829c:	e3320000 	teq	r2, #0	; 0x0
        1d82a0:	1a000008 	bne	1d82c8 <TSerialChipVoyager::ReconfigureIOParms(void)+0x90>
        1d82a4:	e5d13800 	ldrb	r3, [r1, #2048]	; fField2048
        1d82a8:	e5d02069 	ldrb	r2, [r0, #105]	; fField105
        1d82ac:	e1330002 	teq	r3, r2
        1d82b0:	05d1cc00 	ldreqb	ip, [r1, #3072]	; fField3072
        1d82b4:	05d0306a 	ldreqb	r3, [r0, #106]	; fField106
        1d82b8:	013c0003 	teqeq	ip, r3
        1d82bc:	15c12800 	strneb	r2, [r1, #2048]	; fField2048
        1d82c0:	15d0206a 	ldrneb	r2, [r0, #106]	; fField106
        1d82c4:	15c12c00 	strneb	r2, [r1, #3072]	; fField3072
        1d82c8:	e5901044 	ldr	r1, [r0, #68]	; fField68
        1d82cc:	e5a01040 	str	r1, [r0, #64]!	; fField64
        1d82d0:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::ReconfigureAll(void)
 * Address: 001d82d4
 */
TSerialChipVoyager::ReconfigureAll(void) {
    /*
        1d82d4:	e1a0c00d 	mov	ip, sp
        1d82d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d82dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d82e0:	e1a04000 	mov	r4, r0
        1d82e4:	e5905024 	ldr	r5, [r0, #36]	; fField36
        1d82e8:	eb6250c4 	bl	1a6c600 <TSerialChipVoyager::$ReconfigureIOParms(void)>
        1d82ec:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d82f0:	e3300000 	teq	r0, #0	; 0x0
        1d82f4:	1a000005 	bne	1d8310 <TSerialChipVoyager::ReconfigureAll(void)+0x3c>
        1d82f8:	e5d41060 	ldrb	r1, [r4, #96]	; fField96
        1d82fc:	e2850a01 	add	r0, r5, #4096	; 0x1000
        1d8300:	e5c01000 	strb	r1, [r0]
        1d8304:	e5d4106b 	ldrb	r1, [r4, #107]	; fField107
        1d8308:	e2850902 	add	r0, r5, #32768	; 0x8000
        1d830c:	e5c01000 	strb	r1, [r0]
        1d8310:	e5d42061 	ldrb	r2, [r4, #97]	; fField97
        1d8314:	e2850a02 	add	r0, r5, #8192	; 0x2000
        1d8318:	e1a01000 	mov	r1, r0
        1d831c:	e5c02000 	strb	r2, [r0]
        1d8320:	e5d42062 	ldrb	r2, [r4, #98]	; fField98
        1d8324:	e5c12400 	strb	r2, [r1, #1024]	; fField1024
        1d8328:	e5d42063 	ldrb	r2, [r4, #99]	; fField99
        1d832c:	e5c12800 	strb	r2, [r1, #2048]	; fField2048
        1d8330:	e5d41065 	ldrb	r1, [r4, #101]	; fField101
        1d8334:	e2852a03 	add	r2, r5, #12288	; 0x3000
        1d8338:	e5c21400 	strb	r1, [r2, #1024]	; fField1024
        1d833c:	e5d41066 	ldrb	r1, [r4, #102]	; fField102
        1d8340:	e5c21800 	strb	r1, [r2, #2048]	; fField2048
        1d8344:	e5941028 	ldr	r1, [r4, #40]	; fField40
        1d8348:	e3310000 	teq	r1, #0	; 0x0
        1d834c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1d8350:	e5d4105c 	ldrb	r1, [r4, #92]	; fField92
        1d8354:	e3110080 	tst	r1, #128	; 0x80
        1d8358:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1d835c:	e5d41061 	ldrb	r1, [r4, #97]	; fField97
        1d8360:	e3811040 	orr	r1, r1, #64	; 0x40
        1d8364:	e5c41061 	strb	r1, [r4, #97]	; fField97
        1d8368:	e5c01000 	strb	r1, [r0]
        1d836c:	e381200c 	orr	r2, r1, #12	; 0xc
        1d8370:	e5c02000 	strb	r2, [r0]
        1d8374:	e3811080 	orr	r1, r1, #128	; 0x80
        1d8378:	e5c01000 	strb	r1, [r0]
        1d837c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::IRCmdTxInterrupt(void)
 * Address: 001d8380
 */
TSerialChipVoyager::IRCmdTxInterrupt(void) {
    /*
        1d8380:	e1a0c00d 	mov	ip, sp
        1d8384:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d8388:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d838c:	e1a04000 	mov	r4, r0
        1d8390:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d8394:	e590009c 	ldr	r0, [r0, #156]	; fField156
        1d8398:	e1a0100d 	mov	r1, sp
        1d839c:	eb624870 	bl	1a6a564 <THermesIRControl::$GetIRCmdByte(unsigned char *)>
        1d83a0:	e3300000 	teq	r0, #0	; 0x0
        1d83a4:	0a000007 	beq	1d83c8 <TSerialChipVoyager::IRCmdTxInterrupt(void)+0x48>
        1d83a8:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d83ac:	e5b01038 	ldr	r1, [r0, #56]!	; fField56
        1d83b0:	e2811001 	add	r1, r1, #1	; 0x1
        1d83b4:	e5801000 	str	r1, [r0]
        1d83b8:	e5dd1000 	ldrb	r1, [sp]
        1d83bc:	e1a00004 	mov	r0, r4
        1d83c0:	eb62486b 	bl	1a6a574 <TSerialChipVoyager::$PutByte(unsigned char)>
        1d83c4:	ea000004 	b	1d83dc <TSerialChipVoyager::IRCmdTxInterrupt(void)+0x5c>
        1d83c8:	e1a00004 	mov	r0, r4
        1d83cc:	eb624869 	bl	1a6a578 <TSerialChipVoyager::$ResetTxBEmpty(void)>
        1d83d0:	e3a00000 	mov	r0, #0	; 0x0
        1d83d4:	e5b4109c 	ldr	r1, [r4, #156]!	; fField156
        1d83d8:	e5c1002d 	strb	r0, [r1, #45]
        1d83dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::IRCmdOtherInterrupt(void)
 * Address: 001d83e0
 */
TSerialChipVoyager::IRCmdOtherInterrupt(void) {
    /*
        1d83e0:	e1a0c00d 	mov	ip, sp
        1d83e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d83e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d83ec:	e1a04000 	mov	r4, r0
        1d83f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d83f4:	ebfff9e2 	bl	1d6b84 <TSerialChipVoyager::RxBufFull(void)>
        1d83f8:	e3300000 	teq	r0, #0	; 0x0
        1d83fc:	0a000006 	beq	1d841c <TSerialChipVoyager::IRCmdOtherInterrupt(void)+0x3c>
        1d8400:	e1a0100d 	mov	r1, sp
        1d8404:	e1a00004 	mov	r0, r4
        1d8408:	eb624c6e 	bl	1a6b5c8 <TSerialChipVoyager::$GetByteAndStatus(unsigned char *)>
        1d840c:	e5b4009c 	ldr	r0, [r4, #156]!	; fField156
        1d8410:	e5b01038 	ldr	r1, [r0, #56]!	; fField56
        1d8414:	e2411001 	sub	r1, r1, #1	; 0x1
        1d8418:	e5801000 	str	r1, [r0]
        1d841c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::ConfigureIRChip(unsigned char)
 * Address: 001d8420
 */
TSerialChipVoyager::ConfigureIRChip(unsigned char) {
    /*
        1d8420:	e1a0c00d 	mov	ip, sp
        1d8424:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1d8428:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d842c:	e1a04000 	mov	r4, r0
        1d8430:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d8434:	e20160ff 	and	r6, r1, #255	; 0xff
        1d8438:	e3a07000 	mov	r7, #0	; 0x0
        1d843c:	e590509c 	ldr	r5, [r0, #156]	; fField156
        1d8440:	e1a00005 	mov	r0, r5
        1d8444:	ebfff9d3 	bl	1d6b98 <THermesIRControl::ResetIRCmdBuf(void)>
        1d8448:	e1a00005 	mov	r0, r5
        1d844c:	e3a0200f 	mov	r2, #15	; 0xf
        1d8450:	e3a01000 	mov	r1, #0	; 0x0
        1d8454:	eb624841 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8458:	e3360000 	teq	r6, #0	; 0x0
        1d845c:	05d50010 	ldreqb	r0, [r5, #16]	; fField16
        1d8460:	05d51000 	ldreqb	r1, [r5]
        1d8464:	01300001 	teqeq	r0, r1
        1d8468:	0a000005 	beq	1d8484 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x64>
        1d846c:	e5d51010 	ldrb	r1, [r5, #16]	; fField16
        1d8470:	e1a00005 	mov	r0, r5
        1d8474:	e3a02000 	mov	r2, #0	; 0x0
        1d8478:	eb624838 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d847c:	e3360000 	teq	r6, #0	; 0x0
        1d8480:	1a000003 	bne	1d8494 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x74>
        1d8484:	e5d51002 	ldrb	r1, [r5, #2]
        1d8488:	e5d50012 	ldrb	r0, [r5, #18]
        1d848c:	e1310000 	teq	r1, r0
        1d8490:	0a000005 	beq	1d84ac <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x8c>
        1d8494:	e5d51012 	ldrb	r1, [r5, #18]
        1d8498:	e1a00005 	mov	r0, r5
        1d849c:	e3a02002 	mov	r2, #2	; 0x2
        1d84a0:	eb62482e 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d84a4:	e3360000 	teq	r6, #0	; 0x0
        1d84a8:	1a000003 	bne	1d84bc <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x9c>
        1d84ac:	e5d50003 	ldrb	r0, [r5, #3]
        1d84b0:	e5d51013 	ldrb	r1, [r5, #19]
        1d84b4:	e1300001 	teq	r0, r1
        1d84b8:	0a000005 	beq	1d84d4 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0xb4>
        1d84bc:	e5d51013 	ldrb	r1, [r5, #19]
        1d84c0:	e1a00005 	mov	r0, r5
        1d84c4:	e3a02003 	mov	r2, #3	; 0x3
        1d84c8:	eb624824 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d84cc:	e3360000 	teq	r6, #0	; 0x0
        1d84d0:	1a000003 	bne	1d84e4 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0xc4>
        1d84d4:	e5d50004 	ldrb	r0, [r5, #4]	; fField4
        1d84d8:	e5d51014 	ldrb	r1, [r5, #20]
        1d84dc:	e1300001 	teq	r0, r1
        1d84e0:	0a000005 	beq	1d84fc <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0xdc>
        1d84e4:	e5d51014 	ldrb	r1, [r5, #20]
        1d84e8:	e1a00005 	mov	r0, r5
        1d84ec:	e3a02004 	mov	r2, #4	; 0x4
        1d84f0:	eb62481a 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d84f4:	e3360000 	teq	r6, #0	; 0x0
        1d84f8:	1a000003 	bne	1d850c <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0xec>
        1d84fc:	e5d51006 	ldrb	r1, [r5, #6]
        1d8500:	e5d50016 	ldrb	r0, [r5, #22]
        1d8504:	e1310000 	teq	r1, r0
        1d8508:	0a00000a 	beq	1d8538 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x118>
        1d850c:	e5d51016 	ldrb	r1, [r5, #22]
        1d8510:	e1a00005 	mov	r0, r5
        1d8514:	e3a02006 	mov	r2, #6	; 0x6
        1d8518:	eb624810 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d851c:	e5d50016 	ldrb	r0, [r5, #22]
        1d8520:	e1a01220 	mov	r1, r0, lsr #4
        1d8524:	e1a00005 	mov	r0, r5
        1d8528:	e3a02007 	mov	r2, #7	; 0x7
        1d852c:	eb62480b 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8530:	e3360000 	teq	r6, #0	; 0x0
        1d8534:	1a000003 	bne	1d8548 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x128>
        1d8538:	e5d51005 	ldrb	r1, [r5, #5]
        1d853c:	e5d50015 	ldrb	r0, [r5, #21]
        1d8540:	e1310000 	teq	r1, r0
        1d8544:	0a000005 	beq	1d8560 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x140>
        1d8548:	e5d51015 	ldrb	r1, [r5, #21]
        1d854c:	e1a00005 	mov	r0, r5
        1d8550:	e3a02005 	mov	r2, #5	; 0x5
        1d8554:	eb624801 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8558:	e3360000 	teq	r6, #0	; 0x0
        1d855c:	1a000003 	bne	1d8570 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x150>
        1d8560:	e5d50007 	ldrb	r0, [r5, #7]
        1d8564:	e5d51017 	ldrb	r1, [r5, #23]
        1d8568:	e1300001 	teq	r0, r1
        1d856c:	0a00000b 	beq	1d85a0 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x180>
        1d8570:	e5d51017 	ldrb	r1, [r5, #23]
        1d8574:	e1a00005 	mov	r0, r5
        1d8578:	e3a02008 	mov	r2, #8	; 0x8
        1d857c:	eb6247f7 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8580:	e5d50017 	ldrb	r0, [r5, #23]
        1d8584:	e1a01220 	mov	r1, r0, lsr #4
        1d8588:	e1a00005 	mov	r0, r5
        1d858c:	e3a02009 	mov	r2, #9	; 0x9
        1d8590:	eb6247f2 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8594:	e3a07001 	mov	r7, #1	; 0x1
        1d8598:	e3360000 	teq	r6, #0	; 0x0
        1d859c:	1a000003 	bne	1d85b0 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x190>
        1d85a0:	e5d50008 	ldrb	r0, [r5, #8]
        1d85a4:	e5d51018 	ldrb	r1, [r5, #24]	; fField24
        1d85a8:	e1300001 	teq	r0, r1
        1d85ac:	0a00000a 	beq	1d85dc <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x1bc>
        1d85b0:	e5d51018 	ldrb	r1, [r5, #24]	; fField24
        1d85b4:	e1a00005 	mov	r0, r5
        1d85b8:	e3a0200a 	mov	r2, #10	; 0xa
        1d85bc:	eb6247e7 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d85c0:	e5d50018 	ldrb	r0, [r5, #24]	; fField24
        1d85c4:	e1a01220 	mov	r1, r0, lsr #4
        1d85c8:	e1a00005 	mov	r0, r5
        1d85cc:	e3a0200b 	mov	r2, #11	; 0xb
        1d85d0:	eb6247e2 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d85d4:	e3360000 	teq	r6, #0	; 0x0
        1d85d8:	1a00000c 	bne	1d8610 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x1f0>
        1d85dc:	e5d50009 	ldrb	r0, [r5, #9]
        1d85e0:	e5d51019 	ldrb	r1, [r5, #25]
        1d85e4:	e1300001 	teq	r0, r1
        1d85e8:	05d5000a 	ldreqb	r0, [r5, #10]
        1d85ec:	05d5101a 	ldreqb	r1, [r5, #26]
        1d85f0:	01300001 	teqeq	r0, r1
        1d85f4:	05d5000b 	ldreqb	r0, [r5, #11]
        1d85f8:	05d5101b 	ldreqb	r1, [r5, #27]
        1d85fc:	01300001 	teqeq	r0, r1
        1d8600:	05d5000c 	ldreqb	r0, [r5, #12]
        1d8604:	05d5101c 	ldreqb	r1, [r5, #28]	; fField28
        1d8608:	01300001 	teqeq	r0, r1
        1d860c:	0a000025 	beq	1d86a8 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x288>
        1d8610:	e1a00005 	mov	r0, r5
        1d8614:	e3a0200d 	mov	r2, #13	; 0xd
        1d8618:	e3a01001 	mov	r1, #1	; 0x1
        1d861c:	eb6247cf 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8620:	e5d51019 	ldrb	r1, [r5, #25]
        1d8624:	e1a00005 	mov	r0, r5
        1d8628:	e3a02000 	mov	r2, #0	; 0x0
        1d862c:	eb6247cb 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8630:	e5d50019 	ldrb	r0, [r5, #25]
        1d8634:	e1a01220 	mov	r1, r0, lsr #4
        1d8638:	e1a00005 	mov	r0, r5
        1d863c:	e3a02001 	mov	r2, #1	; 0x1
        1d8640:	eb6247c6 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8644:	e5d5101a 	ldrb	r1, [r5, #26]
        1d8648:	e1a00005 	mov	r0, r5
        1d864c:	e3a02002 	mov	r2, #2	; 0x2
        1d8650:	eb6247c2 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8654:	e5d5101b 	ldrb	r1, [r5, #27]
        1d8658:	e1a00005 	mov	r0, r5
        1d865c:	e3a02003 	mov	r2, #3	; 0x3
        1d8660:	eb6247be 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8664:	e5d5001b 	ldrb	r0, [r5, #27]
        1d8668:	e1a01220 	mov	r1, r0, lsr #4
        1d866c:	e1a00005 	mov	r0, r5
        1d8670:	e3a02004 	mov	r2, #4	; 0x4
        1d8674:	eb6247b9 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8678:	e5d5101c 	ldrb	r1, [r5, #28]	; fField28
        1d867c:	e1a00005 	mov	r0, r5
        1d8680:	e3a02008 	mov	r2, #8	; 0x8
        1d8684:	eb6247b5 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8688:	e1a00005 	mov	r0, r5
        1d868c:	e3a0200c 	mov	r2, #12	; 0xc
        1d8690:	e3a01000 	mov	r1, #0	; 0x0
        1d8694:	eb6247b1 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d8698:	e1a00005 	mov	r0, r5
        1d869c:	e3a0200d 	mov	r2, #13	; 0xd
        1d86a0:	e3a01000 	mov	r1, #0	; 0x0
        1d86a4:	eb6247ad 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d86a8:	e3370000 	teq	r7, #0	; 0x0
        1d86ac:	05d50001 	ldreqb	r0, [r5, #1]
        1d86b0:	05d51011 	ldreqb	r1, [r5, #17]
        1d86b4:	01300001 	teqeq	r0, r1
        1d86b8:	0a000004 	beq	1d86d0 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x2b0>
        1d86bc:	e5d50011 	ldrb	r0, [r5, #17]
        1d86c0:	e3801001 	orr	r1, r0, #1	; 0x1
        1d86c4:	e1a00005 	mov	r0, r5
        1d86c8:	e3a02001 	mov	r2, #1	; 0x1
        1d86cc:	eb6247a3 	bl	1a6a560 <THermesIRControl::$PutIRCmdByte(unsigned char, unsigned char)>
        1d86d0:	e1a00005 	mov	r0, r5
        1d86d4:	ebfffa2f 	bl	1d6f98 <THermesIRControl::GetCmdByteCount(void)>
        1d86d8:	e3300001 	teq	r0, #1	; 0x1
        1d86dc:	1a000000 	bne	1d86e4 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x2c4>
        1d86e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1d86e4:	e1a00004 	mov	r0, r4
        1d86e8:	ebfffcdb 	bl	1d7a5c <TSerialChipVoyager::AllSent(void)>
        1d86ec:	e3a05066 	mov	r5, #102	; 0x66
        1d86f0:	e2855c0e 	add	r5, r5, #3584	; 0xe00
        1d86f4:	e3300000 	teq	r0, #0	; 0x0
        1d86f8:	1a000005 	bne	1d8714 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x2f4>
        1d86fc:	e1a00005 	mov	r0, r5
        1d8700:	eb6811c9 	bl	1bdce2c <$Sleep(unsigned long)>
        1d8704:	e1a00004 	mov	r0, r4
        1d8708:	ebfffcd3 	bl	1d7a5c <TSerialChipVoyager::AllSent(void)>
        1d870c:	e3300000 	teq	r0, #0	; 0x0
        1d8710:	0afffff9 	beq	1d86fc <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x2dc>
        1d8714:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d8718:	eb68cfbb 	bl	1c0c60c <$GetGPIOInterfaceObject(void)>
        1d871c:	e1a05000 	mov	r5, r0
        1d8720:	e1a0300d 	mov	r3, sp
        1d8724:	e3a02000 	mov	r2, #0	; 0x0
        1d8728:	e3a0100b 	mov	r1, #11	; 0xb
        1d872c:	eb68cfb7 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        1d8730:	e594a010 	ldr	sl, [r4, #16]	; fField16
        1d8734:	e2840014 	add	r0, r4, #20	; 0x14
        1d8738:	e58d0004 	str	r0, [sp, #4]	; fField4
        1d873c:	e590600c 	ldr	r6, [r0, #12]
        1d8740:	e5907008 	ldr	r7, [r0, #8]
        1d8744:	e5908004 	ldr	r8, [r0, #4]	; fField4
        1d8748:	e5909000 	ldr	r9, [r0]
        1d874c:	e59f0100 	ldr	r0, [pc, #100]	; 1d8854 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x434>	; fField100
        1d8750:	e5840014 	str	r0, [r4, #20]
        1d8754:	e59f00fc 	ldr	r0, [pc, #fc]	; 1d8858 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x438>
        1d8758:	e584001c 	str	r0, [r4, #28]	; fField28
        1d875c:	e5840020 	str	r0, [r4, #32]	; fField32
        1d8760:	e5840018 	str	r0, [r4, #24]	; fField24
        1d8764:	e5844010 	str	r4, [r4, #16]	; fField16
        1d8768:	e3a00000 	mov	r0, #0	; 0x0
        1d876c:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d8770:	e5a10038 	str	r0, [r1, #56]!	; fField56
        1d8774:	e3a01001 	mov	r1, #1	; 0x1
        1d8778:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d877c:	e5c0102d 	strb	r1, [r0, #45]
        1d8780:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d8784:	e2800a02 	add	r0, r0, #8192	; 0x2000
        1d8788:	e5d01400 	ldrb	r1, [r0, #1024]	; fField1024
        1d878c:	e3811020 	orr	r1, r1, #32	; 0x20
        1d8790:	e5c01400 	strb	r1, [r0, #1024]	; fField1024
        1d8794:	e5d01000 	ldrb	r1, [r0]
        1d8798:	e3811040 	orr	r1, r1, #64	; 0x40
        1d879c:	e5c01000 	strb	r1, [r0]
        1d87a0:	e1a00004 	mov	r0, r4
        1d87a4:	eb624b75 	bl	1a6b580 <TSerialChipVoyager::$TxBufEmpty(void)>
        1d87a8:	e3300000 	teq	r0, #0	; 0x0
        1d87ac:	11a00004 	movne	r0, r4
        1d87b0:	1b624f94 	blne	1a6c608 <TSerialChipVoyager::$IRCmdTxInterrupt(void)>
        1d87b4:	e1a00004 	mov	r0, r4
        1d87b8:	e3a01001 	mov	r1, #1	; 0x1
        1d87bc:	eb624b77 	bl	1a6b5a0 <TSerialChipVoyager::$SetInterruptEnable(unsigned char)>
        1d87c0:	e3a000fe 	mov	r0, #254	; 0xfe
        1d87c4:	e2800c47 	add	r0, r0, #18176	; 0x4700
        1d87c8:	eb681197 	bl	1bdce2c <$Sleep(unsigned long)>
        1d87cc:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d87d0:	e5d0002d 	ldrb	r0, [r0, #45]
        1d87d4:	e3300000 	teq	r0, #0	; 0x0
        1d87d8:	1afffff8 	bne	1d87c0 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x3a0>
        1d87dc:	e3a00066 	mov	r0, #102	; 0x66
        1d87e0:	e2800c0e 	add	r0, r0, #3584	; 0xe00
        1d87e4:	eb681190 	bl	1bdce2c <$Sleep(unsigned long)>
        1d87e8:	e1a00004 	mov	r0, r4
        1d87ec:	ebfffc9a 	bl	1d7a5c <TSerialChipVoyager::AllSent(void)>
        1d87f0:	e3300000 	teq	r0, #0	; 0x0
        1d87f4:	0afffff8 	beq	1d87dc <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x3bc>
        1d87f8:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d87fc:	e2801010 	add	r1, r0, #16	; 0x10
        1d8800:	e891500c 	ldmia	r1, {r2, r3, ip, lr}
        1d8804:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        1d8808:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d880c:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d8810:	e1a0300d 	mov	r3, sp
        1d8814:	e5a01020 	str	r1, [r0, #32]!	; fField32
        1d8818:	e1a00005 	mov	r0, r5
        1d881c:	e3a02001 	mov	r2, #1	; 0x1
        1d8820:	e3a0100b 	mov	r1, #11	; 0xb
        1d8824:	eb68cf79 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        1d8828:	e1a00004 	mov	r0, r4
        1d882c:	e3a01000 	mov	r1, #0	; 0x0
        1d8830:	eb624b5a 	bl	1a6b5a0 <TSerialChipVoyager::$SetInterruptEnable(unsigned char)>
        1d8834:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1d8838:	e580600c 	str	r6, [r0, #12]
        1d883c:	e5807008 	str	r7, [r0, #8]
        1d8840:	e5808004 	str	r8, [r0, #4]	; fField4
        1d8844:	e5809000 	str	r9, [r0]
        1d8848:	e5a4a010 	str	sl, [r4, #16]!	; fField16
        1d884c:	e28dd004 	add	sp, sp, #4	; 0x4
        1d8850:	eaffffa2 	b	1d86e0 <TSerialChipVoyager::ConfigureIRChip(unsigned char)+0x2c0>
        1d8854:	01a6c608 	moveq	ip, r8, lsl #12
        1d8858:	01a6c60c 	moveq	ip, ip, lsl #12
    */
}

/**
 * Symbol: Sizeof__18TSerialChipVoyagerSFv
 * Address: 001d885c
 */
void TSerialChipVoyager::Sizeof() {
    /*
        1d885c:	e3a000a0 	mov	r0, #160	; 0xa0
        1d8860:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::EnableTVModeIR(TCMOSlowIRBitBang *)
 * Address: 001d8864
 */
TSerialChipVoyager::EnableTVModeIR(TCMOSlowIRBitBang *) {
    /*
        1d8864:	e1a0c00d 	mov	ip, sp
        1d8868:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d886c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d8870:	e1a04000 	mov	r4, r0
        1d8874:	e3a06000 	mov	r6, #0	; 0x0
        1d8878:	e590009c 	ldr	r0, [r0, #156]	; fField156
        1d887c:	e2800010 	add	r0, r0, #16	; 0x10
        1d8880:	e59f2088 	ldr	r2, [pc, #88]	; 1d8910 <TSerialChipVoyager::EnableTVModeIR(TCMOSlowIRBitBang *)+0xac>	; fField88
        1d8884:	e8b21008 	ldmia	r2!, {r3, ip}
        1d8888:	e8a01008 	stmia	r0!, {r3, ip}
        1d888c:	e8921008 	ldmia	r2, {r3, ip}
        1d8890:	e8801008 	stmia	r0, {r3, ip}
        1d8894:	e591200c 	ldr	r2, [r1, #12]
        1d8898:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d889c:	e5a02028 	str	r2, [r0, #40]!	; fField40
        1d88a0:	e5d10014 	ldrb	r0, [r1, #20]
        1d88a4:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d88a8:	e5c1002c 	strb	r0, [r1, #44]	; fField44
        1d88ac:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1d88b0:	e5d0102c 	ldrb	r1, [r0, #44]	; fField44
        1d88b4:	e3310000 	teq	r1, #0	; 0x0
        1d88b8:	0a000012 	beq	1d8908 <TSerialChipVoyager::EnableTVModeIR(TCMOSlowIRBitBang *)+0xa4>
        1d88bc:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1d88c0:	e3a01d09 	mov	r1, #576	; 0x240
        1d88c4:	e281193d 	add	r1, r1, #999424	; 0xf4000
        1d88c8:	eb67681e 	bl	1bb2948 <$__rt_udiv>
        1d88cc:	e1a05000 	mov	r5, r0
        1d88d0:	e0801120 	add	r1, r0, r0, lsr #2
        1d88d4:	e1a00004 	mov	r0, r4
        1d88d8:	eb624b32 	bl	1a6b5a8 <TSerialChipVoyager::$SetSpeed(unsigned long)>
        1d88dc:	e3a00be1 	mov	r0, #230400	; 0x38400
        1d88e0:	e08010a5 	add	r1, r0, r5, lsr #1
        1d88e4:	e1a00005 	mov	r0, r5
        1d88e8:	eb676816 	bl	1bb2948 <$__rt_udiv>
        1d88ec:	e2400001 	sub	r0, r0, #1	; 0x1
        1d88f0:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1d88f4:	e5c1001b 	strb	r0, [r1, #27]
        1d88f8:	eb06e8a4 	bl	392b90 <EnterFIQAtomic>
        1d88fc:	e1a00004 	mov	r0, r4
        1d8900:	eb624b2a 	bl	1a6b5b0 <TSerialChipVoyager::$Reconfigure(void)>
        1d8904:	eb06e8a9 	bl	392bb0 <ExitFIQAtomic>
        1d8908:	e1a00006 	mov	r0, r6
        1d890c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1d8910:	0037770c 	eoreqs	r7, r7, ip, lsl #14
    */
}

/**
 * Symbol: TSerialChipVoyager::WriteNextByteWithTimeOut(unsigned char)
 * Address: 001d8914
 */
TSerialChipVoyager::WriteNextByteWithTimeOut(unsigned char) {
    /*
        1d8914:	e1a0c00d 	mov	ip, sp
        1d8918:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d891c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d8920:	e20160ff 	and	r6, r1, #255	; 0xff
        1d8924:	e5904024 	ldr	r4, [r0, #36]	; fField36
        1d8928:	e2845901 	add	r5, r4, #16384	; 0x4000
        1d892c:	e2807048 	add	r7, r0, #72	; 0x48
        1d8930:	e5d50400 	ldrb	r0, [r5, #1024]	; fField1024
        1d8934:	e3100080 	tst	r0, #128	; 0x80
        1d8938:	12840a06 	addne	r0, r4, #24576	; 0x6000
        1d893c:	15c06000 	strneb	r6, [r0]
        1d8940:	13a00000 	movne	r0, #0	; 0x0
        1d8944:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1d8948:	e1a00007 	mov	r0, r7
        1d894c:	eb689565 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
        1d8950:	e3300000 	teq	r0, #0	; 0x0
        1d8954:	0afffff5 	beq	1d8930 <TSerialChipVoyager::WriteNextByteWithTimeOut(unsigned char)+0x1c>
        1d8958:	e3e0005b 	mvn	r0, #91	; 0x5b
        1d895c:	e2400c46 	sub	r0, r0, #17920	; 0x4600
        1d8960:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::ReadNextByteWithTimeOut(unsigned char *)
 * Address: 001d8964
 */
TSerialChipVoyager::ReadNextByteWithTimeOut(unsigned char *) {
    /*
        1d8964:	e1a0c00d 	mov	ip, sp
        1d8968:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d896c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d8970:	e1a04001 	mov	r4, r1
        1d8974:	e5906024 	ldr	r6, [r0, #36]	; fField36
        1d8978:	e2865901 	add	r5, r6, #16384	; 0x4000
        1d897c:	e2807048 	add	r7, r0, #72	; 0x48
        1d8980:	e5d50400 	ldrb	r0, [r5, #1024]	; fField1024
        1d8984:	e3100040 	tst	r0, #64	; 0x40
        1d8988:	0a000005 	beq	1d89a4 <TSerialChipVoyager::ReadNextByteWithTimeOut(unsigned char *)+0x40>
        1d898c:	e5d50800 	ldrb	r0, [r5, #2048]	; fField2048
        1d8990:	e20000f0 	and	r0, r0, #240	; 0xf0
        1d8994:	e2861a07 	add	r1, r6, #28672	; 0x7000
        1d8998:	e5d11000 	ldrb	r1, [r1]
        1d899c:	e5c41000 	strb	r1, [r4]
        1d89a0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1d89a4:	e1a00007 	mov	r0, r7
        1d89a8:	eb68954e 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
        1d89ac:	e3300000 	teq	r0, #0	; 0x0
        1d89b0:	0afffff2 	beq	1d8980 <TSerialChipVoyager::ReadNextByteWithTimeOut(unsigned char *)+0x1c>
        1d89b4:	e3a00c02 	mov	r0, #512	; 0x200
        1d89b8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::WaitNextByteWithTimeOut(void)
 * Address: 001d89bc
 */
TSerialChipVoyager::WaitNextByteWithTimeOut(void) {
    /*
        1d89bc:	e1a0c00d 	mov	ip, sp
        1d89c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d89c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d89c8:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d89cc:	e2814901 	add	r4, r1, #16384	; 0x4000
        1d89d0:	e2805048 	add	r5, r0, #72	; 0x48
        1d89d4:	e5d40400 	ldrb	r0, [r4, #1024]	; fField1024
        1d89d8:	e3100040 	tst	r0, #64	; 0x40
        1d89dc:	15d40800 	ldrneb	r0, [r4, #2048]	; fField2048
        1d89e0:	120000f0 	andne	r0, r0, #240	; 0xf0
        1d89e4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1d89e8:	e1a00005 	mov	r0, r5
        1d89ec:	eb68953d 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
        1d89f0:	e3300000 	teq	r0, #0	; 0x0
        1d89f4:	0afffff6 	beq	1d89d4 <TSerialChipVoyager::WaitNextByteWithTimeOut(void)+0x18>
        1d89f8:	e3a00c02 	mov	r0, #512	; 0x200
        1d89fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::EnableRxDMA(void)
 * Address: 001d8a00
 */
TSerialChipVoyager::EnableRxDMA(void) {
    /*
        1d8a00:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d8a04:	e5d02061 	ldrb	r2, [r0, #97]	; fField97
        1d8a08:	e3822020 	orr	r2, r2, #32	; 0x20
        1d8a0c:	e2811a02 	add	r1, r1, #8192	; 0x2000
        1d8a10:	e5c12000 	strb	r2, [r1]
        1d8a14:	e5c02061 	strb	r2, [r0, #97]	; fField97
        1d8a18:	e3a01002 	mov	r1, #2	; 0x2
        1d8a1c:	e5c0108f 	strb	r1, [r0, #143]	; fField143
        1d8a20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::DisableRxDMA(void)
 * Address: 001d8a24
 */
TSerialChipVoyager::DisableRxDMA(void) {
    /*
        1d8a24:	e5901024 	ldr	r1, [r0, #36]	; fField36
        1d8a28:	e5d02061 	ldrb	r2, [r0, #97]	; fField97
        1d8a2c:	e20220df 	and	r2, r2, #223	; 0xdf
        1d8a30:	e2811a02 	add	r1, r1, #8192	; 0x2000
        1d8a34:	e5c12000 	strb	r2, [r1]
        1d8a38:	e5c02061 	strb	r2, [r0, #97]	; fField97
        1d8a3c:	e3a01001 	mov	r1, #1	; 0x1
        1d8a40:	e5c0108f 	strb	r1, [r0, #143]	; fField143
        1d8a44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::TxDMAEnable(int)
 * Address: 001d8a48
 */
TSerialChipVoyager::TxDMAEnable(int) {
    /*
        1d8a48:	e5902024 	ldr	r2, [r0, #36]	; fField36
        1d8a4c:	e2823a02 	add	r3, r2, #8192	; 0x2000
        1d8a50:	e5d32400 	ldrb	r2, [r3, #1024]	; fField1024
        1d8a54:	e3310000 	teq	r1, #0	; 0x0
        1d8a58:	03c21001 	biceq	r1, r2, #1	; 0x1
        1d8a5c:	13821001 	orrne	r1, r2, #1	; 0x1
        1d8a60:	e20110ff 	and	r1, r1, #255	; 0xff
        1d8a64:	03a02001 	moveq	r2, #1	; 0x1
        1d8a68:	13a02002 	movne	r2, #2	; 0x2
        1d8a6c:	e5c31400 	strb	r1, [r3, #1024]	; fField1024
        1d8a70:	e5c01062 	strb	r1, [r0, #98]	; fField98
        1d8a74:	e5c0208d 	strb	r2, [r0, #141]	; fField141
        1d8a78:	e3a01000 	mov	r1, #0	; 0x0
        1d8a7c:	e5c0108e 	strb	r1, [r0, #142]	; fField142
        1d8a80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::StartSendDMAPacket(void)
 * Address: 001d8a84
 */
TSerialChipVoyager::StartSendDMAPacket(void) {
    /*
        1d8a84:	e1a0c00d 	mov	ip, sp
        1d8a88:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1d8a8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d8a90:	e1a04000 	mov	r4, r0
        1d8a94:	e5908024 	ldr	r8, [r0, #36]	; fField36
        1d8a98:	e5d0008d 	ldrb	r0, [r0, #141]	; fField141
        1d8a9c:	e3300001 	teq	r0, #1	; 0x1
        1d8aa0:	1a00000b 	bne	1d8ad4 <TSerialChipVoyager::StartSendDMAPacket(void)+0x50>
        1d8aa4:	e5d45062 	ldrb	r5, [r4, #98]	; fField98
        1d8aa8:	e3850008 	orr	r0, r5, #8	; 0x8
        1d8aac:	e2886a02 	add	r6, r8, #8192	; 0x2000
        1d8ab0:	e5c60400 	strb	r0, [r6, #1024]	; fField1024
        1d8ab4:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d8ab8:	eb624eec 	bl	1a6c670 <TSerialDMAEngine::$StartTxDMA(void)>
        1d8abc:	e3850029 	orr	r0, r5, #41	; 0x29
        1d8ac0:	e5c60400 	strb	r0, [r6, #1024]	; fField1024
        1d8ac4:	e3a00002 	mov	r0, #2	; 0x2
        1d8ac8:	e5c4008d 	strb	r0, [r4, #141]	; fField141
        1d8acc:	e3a00000 	mov	r0, #0	; 0x0
        1d8ad0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1d8ad4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d8ad8:	e3a05000 	mov	r5, #0	; 0x0
        1d8adc:	e5946080 	ldr	r6, [r4, #128]	; fField128
        1d8ae0:	e5d49062 	ldrb	r9, [r4, #98]	; fField98
        1d8ae4:	e3890008 	orr	r0, r9, #8	; 0x8
        1d8ae8:	e2887a02 	add	r7, r8, #8192	; 0x2000
        1d8aec:	e1a0a007 	mov	sl, r7
        1d8af0:	e5c70400 	strb	r0, [r7, #1024]	; fField1024
        1d8af4:	e1a0100d 	mov	r1, sp
        1d8af8:	e1a00006 	mov	r0, r6
        1d8afc:	eb68b619 	bl	1c06368 <TCircleBuf::$GetNextByte(unsigned char *)>
        1d8b00:	e5dd0000 	ldrb	r0, [sp]
        1d8b04:	e5941024 	ldr	r1, [r4, #36]	; fField36
        1d8b08:	e2811a06 	add	r1, r1, #24576	; 0x6000
        1d8b0c:	e5c10000 	strb	r0, [r1]
        1d8b10:	e3890028 	orr	r0, r9, #40	; 0x28
        1d8b14:	e5c70400 	strb	r0, [r7, #1024]	; fField1024
        1d8b18:	e1a0100d 	mov	r1, sp
        1d8b1c:	e1a00006 	mov	r0, r6
        1d8b20:	eb68b610 	bl	1c06368 <TCircleBuf::$GetNextByte(unsigned char *)>
        1d8b24:	e2847048 	add	r7, r4, #72	; 0x48
        1d8b28:	e3300000 	teq	r0, #0	; 0x0
        1d8b2c:	1a00000c 	bne	1d8b64 <TSerialChipVoyager::StartSendDMAPacket(void)+0xe0>
        1d8b30:	e1a00007 	mov	r0, r7
        1d8b34:	e3a01fea 	mov	r1, #936	; 0x3a8
        1d8b38:	eb6894e8 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
        1d8b3c:	e5dd1000 	ldrb	r1, [sp]
        1d8b40:	e1a00004 	mov	r0, r4
        1d8b44:	ebffff72 	bl	1d8914 <TSerialChipVoyager::WriteNextByteWithTimeOut(unsigned char)>
        1d8b48:	e1b05000 	movs	r5, r0
        1d8b4c:	1a000012 	bne	1d8b9c <TSerialChipVoyager::StartSendDMAPacket(void)+0x118>
        1d8b50:	e1a0100d 	mov	r1, sp
        1d8b54:	e1a00006 	mov	r0, r6
        1d8b58:	eb68b602 	bl	1c06368 <TCircleBuf::$GetNextByte(unsigned char *)>
        1d8b5c:	e3300000 	teq	r0, #0	; 0x0
        1d8b60:	0afffff2 	beq	1d8b30 <TSerialChipVoyager::StartSendDMAPacket(void)+0xac>
        1d8b64:	e1a00007 	mov	r0, r7
        1d8b68:	e3a01e75 	mov	r1, #1872	; 0x750
        1d8b6c:	eb6894db 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
        1d8b70:	e2886901 	add	r6, r8, #16384	; 0x4000
        1d8b74:	e5d60c00 	ldrb	r0, [r6, #3072]	; fField3072
        1d8b78:	e3100040 	tst	r0, #64	; 0x40
        1d8b7c:	0a000006 	beq	1d8b9c <TSerialChipVoyager::StartSendDMAPacket(void)+0x118>
        1d8b80:	e1a00007 	mov	r0, r7
        1d8b84:	eb6894d7 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
        1d8b88:	e3300000 	teq	r0, #0	; 0x0
        1d8b8c:	1a000002 	bne	1d8b9c <TSerialChipVoyager::StartSendDMAPacket(void)+0x118>
        1d8b90:	e5d60c00 	ldrb	r0, [r6, #3072]	; fField3072
        1d8b94:	e3100040 	tst	r0, #64	; 0x40
        1d8b98:	1afffff8 	bne	1d8b80 <TSerialChipVoyager::StartSendDMAPacket(void)+0xfc>
        1d8b9c:	e5ca9400 	strb	r9, [sl, #1024]	; fField1024
        1d8ba0:	e3350000 	teq	r5, #0	; 0x0
        1d8ba4:	05940010 	ldreq	r0, [r4, #16]	; fField16
        1d8ba8:	01a0e00f 	moveq	lr, pc
        1d8bac:	0594f07c 	ldreq	pc, [r4, #124]	; fField124
        1d8bb0:	e1a00005 	mov	r0, r5
        1d8bb4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::ReceivePacket(void)
 * Address: 001d8bb8
 */
TSerialChipVoyager::ReceivePacket(void) {
    /*
        1d8bb8:	e1a0c00d 	mov	ip, sp
        1d8bbc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d8bc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d8bc4:	e1a04000 	mov	r4, r0
        1d8bc8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d8bcc:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d8bd0:	e2800a07 	add	r0, r0, #28672	; 0x7000
        1d8bd4:	e5d00000 	ldrb	r0, [r0]
        1d8bd8:	e5cd0000 	strb	r0, [sp]
        1d8bdc:	e20010ff 	and	r1, r0, #255	; 0xff
        1d8be0:	e5946088 	ldr	r6, [r4, #136]	; fField136
        1d8be4:	e1a00006 	mov	r0, r6
        1d8be8:	eb68b9e4 	bl	1c07380 <TCircleBuf::$PutFirstPossible(unsigned char)>
        1d8bec:	e2840048 	add	r0, r4, #72	; 0x48
        1d8bf0:	e1a07000 	mov	r7, r0
        1d8bf4:	e3a01fea 	mov	r1, #936	; 0x3a8
        1d8bf8:	eb6894b8 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
        1d8bfc:	e1a0100d 	mov	r1, sp
        1d8c00:	e1a00004 	mov	r0, r4
        1d8c04:	ebffff56 	bl	1d8964 <TSerialChipVoyager::ReadNextByteWithTimeOut(unsigned char *)>
        1d8c08:	e1b05000 	movs	r5, r0
        1d8c0c:	1a000057 	bne	1d8d70 <TSerialChipVoyager::ReceivePacket(void)+0x1b8>
        1d8c10:	e5dd1000 	ldrb	r1, [sp]
        1d8c14:	e1a00006 	mov	r0, r6
        1d8c18:	eb68b9db 	bl	1c0738c <TCircleBuf::$PutNextPossible(unsigned char)>
        1d8c1c:	e1a0100d 	mov	r1, sp
        1d8c20:	e1a00004 	mov	r0, r4
        1d8c24:	ebffff4e 	bl	1d8964 <TSerialChipVoyager::ReadNextByteWithTimeOut(unsigned char *)>
        1d8c28:	e1b05000 	movs	r5, r0
        1d8c2c:	1a00004f 	bne	1d8d70 <TSerialChipVoyager::ReceivePacket(void)+0x1b8>
        1d8c30:	e5dd1000 	ldrb	r1, [sp]
        1d8c34:	e1a00006 	mov	r0, r6
        1d8c38:	eb68b9d3 	bl	1c0738c <TCircleBuf::$PutNextPossible(unsigned char)>
        1d8c3c:	e3300000 	teq	r0, #0	; 0x0
        1d8c40:	1a00001d 	bne	1d8cbc <TSerialChipVoyager::ReceivePacket(void)+0x104>
        1d8c44:	e1a0100d 	mov	r1, sp
        1d8c48:	e1a00004 	mov	r0, r4
        1d8c4c:	ebffff44 	bl	1d8964 <TSerialChipVoyager::ReadNextByteWithTimeOut(unsigned char *)>
        1d8c50:	e1b05000 	movs	r5, r0
        1d8c54:	1a000045 	bne	1d8d70 <TSerialChipVoyager::ReceivePacket(void)+0x1b8>
        1d8c58:	e1a00004 	mov	r0, r4
        1d8c5c:	ebffff56 	bl	1d89bc <TSerialChipVoyager::WaitNextByteWithTimeOut(void)>
        1d8c60:	e1a05000 	mov	r5, r0
        1d8c64:	e3100080 	tst	r0, #128	; 0x80
        1d8c68:	0a000004 	beq	1d8c80 <TSerialChipVoyager::ReceivePacket(void)+0xc8>
        1d8c6c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d8c70:	e2800a07 	add	r0, r0, #28672	; 0x7000
        1d8c74:	e5d00000 	ldrb	r0, [r0]
        1d8c78:	e5cd0000 	strb	r0, [sp]
        1d8c7c:	ea00003b 	b	1d8d70 <TSerialChipVoyager::ReceivePacket(void)+0x1b8>
        1d8c80:	e3350000 	teq	r5, #0	; 0x0
        1d8c84:	1a000039 	bne	1d8d70 <TSerialChipVoyager::ReceivePacket(void)+0x1b8>
        1d8c88:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d8c8c:	e3300000 	teq	r0, #0	; 0x0
        1d8c90:	0a00001e 	beq	1d8d10 <TSerialChipVoyager::ReceivePacket(void)+0x158>
        1d8c94:	e5dd1000 	ldrb	r1, [sp]
        1d8c98:	e1a00006 	mov	r0, r6
        1d8c9c:	eb68b9ba 	bl	1c0738c <TCircleBuf::$PutNextPossible(unsigned char)>
        1d8ca0:	e3300000 	teq	r0, #0	; 0x0
        1d8ca4:	1a000004 	bne	1d8cbc <TSerialChipVoyager::ReceivePacket(void)+0x104>
        1d8ca8:	e1a00006 	mov	r0, r6
        1d8cac:	e3a01f97 	mov	r1, #604	; 0x25c
        1d8cb0:	eb68b59e 	bl	1c06330 <TCircleBuf::$BufferSpace(unsigned long)>
        1d8cb4:	e3300000 	teq	r0, #0	; 0x0
        1d8cb8:	0a000001 	beq	1d8cc4 <TSerialChipVoyager::ReceivePacket(void)+0x10c>
        1d8cbc:	e3a05c01 	mov	r5, #256	; 0x100
        1d8cc0:	ea00002a 	b	1d8d70 <TSerialChipVoyager::ReceivePacket(void)+0x1b8>
        1d8cc4:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d8cc8:	eb624e64 	bl	1a6c660 <TSerialDMAEngine::$StartIn(void)>
        1d8ccc:	e1a00004 	mov	r0, r4
        1d8cd0:	eb624e50 	bl	1a6c618 <TSerialChipVoyager::$EnableRxDMA(void)>
        1d8cd4:	e5941024 	ldr	r1, [r4, #36]	; fField36
        1d8cd8:	e5d40064 	ldrb	r0, [r4, #100]	; fField100
        1d8cdc:	e200009f 	and	r0, r0, #159	; 0x9f
        1d8ce0:	e5c40064 	strb	r0, [r4, #100]	; fField100
        1d8ce4:	e2811a03 	add	r1, r1, #12288	; 0x3000
        1d8ce8:	e5c10000 	strb	r0, [r1]
        1d8cec:	e3a00041 	mov	r0, #65	; 0x41
        1d8cf0:	e5c10c00 	strb	r0, [r1, #3072]	; fField3072
        1d8cf4:	e3a03000 	mov	r3, #0	; 0x0
        1d8cf8:	e5b41094 	ldr	r1, [r4, #148]!	; fField148
        1d8cfc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1d8d00:	e59f2004 	ldr	r2, [pc, #4]	; 1d8d0c <TSerialChipVoyager::ReceivePacket(void)+0x154>	; fField4
        1d8d04:	eb6103e4 	bl	1a19c9c <TFIQTimer::$SetFIQTimer(FIQTimer *, unsigned long, unsigned long)>
        1d8d08:	ea00001c 	b	1d8d80 <TSerialChipVoyager::ReceivePacket(void)+0x1c8>
        1d8d0c:	0001c58d 	andeq	ip, r1, sp, lsl #11
        1d8d10:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d8d14:	e3a06001 	mov	r6, #1	; 0x1
        1d8d18:	e1a00007 	mov	r0, r7
        1d8d1c:	e3a01e27 	mov	r1, #624	; 0x270
        1d8d20:	eb68946e 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
        1d8d24:	e1a0100d 	mov	r1, sp
        1d8d28:	e1a00004 	mov	r0, r4
        1d8d2c:	ebffff0c 	bl	1d8964 <TSerialChipVoyager::ReadNextByteWithTimeOut(unsigned char *)>
        1d8d30:	e1a05000 	mov	r5, r0
        1d8d34:	e3100080 	tst	r0, #128	; 0x80
        1d8d38:	03350000 	teqeq	r5, #0	; 0x0
        1d8d3c:	1a00000a 	bne	1d8d6c <TSerialChipVoyager::ReceivePacket(void)+0x1b4>
        1d8d40:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1d8d44:	e5dd1004 	ldrb	r1, [sp, #4]	; fField4
        1d8d48:	eb68b98f 	bl	1c0738c <TCircleBuf::$PutNextPossible(unsigned char)>
        1d8d4c:	e3300000 	teq	r0, #0	; 0x0
        1d8d50:	05dd0000 	ldreqb	r0, [sp]
        1d8d54:	05cd0004 	streqb	r0, [sp, #4]	; fField4
        1d8d58:	0a000001 	beq	1d8d64 <TSerialChipVoyager::ReceivePacket(void)+0x1ac>
        1d8d5c:	e3a05c01 	mov	r5, #256	; 0x100
        1d8d60:	ea000001 	b	1d8d6c <TSerialChipVoyager::ReceivePacket(void)+0x1b4>
        1d8d64:	e3360000 	teq	r6, #0	; 0x0
        1d8d68:	1affffea 	bne	1d8d18 <TSerialChipVoyager::ReceivePacket(void)+0x160>
        1d8d6c:	e28dd004 	add	sp, sp, #4	; 0x4
        1d8d70:	e1a01005 	mov	r1, r5
        1d8d74:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d8d78:	e1a0e00f 	mov	lr, pc
        1d8d7c:	e594f084 	ldr	pc, [r4, #132]	; fField132
        1d8d80:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::DCDInterrupt(void)
 * Address: 001d8d84
 */
TSerialChipVoyager::DCDInterrupt(void) {
    /*
        1d8d84:	e1a01000 	mov	r1, r0
        1d8d88:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1d8d8c:	e591f018 	ldr	pc, [r1, #24]	; fField24
    */
}

/**
 * Symbol: TSerialChipVoyager::New(void)
 * Address: 001d8d90
 */
TSerialChipVoyager::New(void) {
    /*
        1d8d90:	e1a0c00d 	mov	ip, sp
        1d8d94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d8d98:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d8d9c:	e1a04000 	mov	r4, r0
        1d8da0:	e3e00000 	mvn	r0, #0	; 0x0
        1d8da4:	e5840028 	str	r0, [r4, #40]	; fField40
        1d8da8:	e284005c 	add	r0, r4, #92	; 0x5c
        1d8dac:	e59f1058 	ldr	r1, [pc, #58]	; 1d8e0c <TSerialChipVoyager::New(void)+0x7c>
        1d8db0:	e8b11008 	ldmia	r1!, {r3, ip}
        1d8db4:	e8a01008 	stmia	r0!, {r3, ip}
        1d8db8:	e8911008 	ldmia	r1, {r3, ip}
        1d8dbc:	e8801008 	stmia	r0, {r3, ip}
        1d8dc0:	e3a05000 	mov	r5, #0	; 0x0
        1d8dc4:	e584506c 	str	r5, [r4, #108]	; fField108
        1d8dc8:	e5c45056 	strb	r5, [r4, #86]	; fField86
        1d8dcc:	e2940048 	adds	r0, r4, #72	; 0x48
        1d8dd0:	1b68943d 	blne	1bfdecc <TDelayTimer::$__ct(void)>
        1d8dd4:	e5845024 	str	r5, [r4, #36]	; fField36
        1d8dd8:	e5c45055 	strb	r5, [r4, #85]	; fField85
        1d8ddc:	e3a00001 	mov	r0, #1	; 0x1
        1d8de0:	e5c40057 	strb	r0, [r4, #87]	; fField87
        1d8de4:	e584509c 	str	r5, [r4, #156]	; fField156
        1d8de8:	e5845074 	str	r5, [r4, #116]	; fField116
        1d8dec:	e5845078 	str	r5, [r4, #120]	; fField120
        1d8df0:	e5845094 	str	r5, [r4, #148]	; fField148
        1d8df4:	eb60e2a6 	bl	1a11894 <$GetFIQTimerObject(void)>
        1d8df8:	e5840098 	str	r0, [r4, #152]	; fField152
        1d8dfc:	e1a00004 	mov	r0, r4
        1d8e00:	ebfff720 	bl	1d6a88 <TSerialChipVoyager::InitializeForNextHandler(void)>
        1d8e04:	e1a00004 	mov	r0, r4
        1d8e08:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d8e0c:	0037767c 	eoreqs	r7, r7, ip, ror r6
    */
}

/**
 * Symbol: TSerialChipVoyager::SetModemDCDIntEnable(unsigned char)
 * Address: 001d8e10
 */
TSerialChipVoyager::SetModemDCDIntEnable(unsigned char) {
    /*
        1d8e10:	e20120ff 	and	r2, r1, #255	; 0xff
        1d8e14:	e5901028 	ldr	r1, [r0, #40]	; fField40
        1d8e18:	e3310003 	teq	r1, #3	; 0x3
        1d8e1c:	11a0f00e 	movne	pc, lr
        1d8e20:	e5901070 	ldr	r1, [r0, #112]	; fField112
        1d8e24:	e3310000 	teq	r1, #0	; 0x0
        1d8e28:	01a0f00e 	moveq	pc, lr
        1d8e2c:	e3320000 	teq	r2, #0	; 0x0
        1d8e30:	15d00064 	ldrneb	r0, [r0, #100]	; fField100
        1d8e34:	12000010 	andne	r0, r0, #16	; 0x10
        1d8e38:	13300000 	teqne	r0, #0	; 0x0
        1d8e3c:	e1a00001 	mov	r0, r1
        1d8e40:	0a689006 	beq	1bfce60 <$DisableInterrupt>
        1d8e44:	1a68c5b2 	bne	1c0a514 <$QuickEnableInterrupt>
    */
}

/**
 * Symbol: TSerialChipVoyager::SerialInterrupt(void)
 * Address: 001d8e48
 */
TSerialChipVoyager::SerialInterrupt(void) {
    /*
        1d8e48:	e1a0c00d 	mov	ip, sp
        1d8e4c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1d8e50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d8e54:	e1a04000 	mov	r4, r0
        1d8e58:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d8e5c:	e3a0a020 	mov	sl, #32	; 0x20
        1d8e60:	e3a09040 	mov	r9, #64	; 0x40
        1d8e64:	e3a08080 	mov	r8, #128	; 0x80
        1d8e68:	e2805a03 	add	r5, r0, #12288	; 0x3000
        1d8e6c:	e3a07001 	mov	r7, #1	; 0x1
        1d8e70:	e2806901 	add	r6, r0, #16384	; 0x4000
        1d8e74:	e5d42064 	ldrb	r2, [r4, #100]	; fField100
        1d8e78:	e5d61000 	ldrb	r1, [r6]
        1d8e7c:	e5d60400 	ldrb	r0, [r6, #1024]	; fField1024
        1d8e80:	e20000e0 	and	r0, r0, #224	; 0xe0
        1d8e84:	e1813000 	orr	r3, r1, r0
        1d8e88:	e0032002 	and	r2, r3, r2
        1d8e8c:	e21220ff 	ands	r2, r2, #255	; 0xff
        1d8e90:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1d8e94:	e3120020 	tst	r2, #32	; 0x20
        1d8e98:	0a00000b 	beq	1d8ecc <TSerialChipVoyager::SerialInterrupt(void)+0x84>
        1d8e9c:	e5c5ac00 	strb	sl, [r5, #3072]	; fField3072
        1d8ea0:	e5d4108f 	ldrb	r1, [r4, #143]	; fField143
        1d8ea4:	e3310002 	teq	r1, #2	; 0x2
        1d8ea8:	1a000002 	bne	1d8eb8 <TSerialChipVoyager::SerialInterrupt(void)+0x70>
        1d8eac:	e1a00004 	mov	r0, r4
        1d8eb0:	eb624ddf 	bl	1a6c634 <TSerialChipVoyager::$AsyncDMAInInt(void)>
        1d8eb4:	eaffffee 	b	1d8e74 <TSerialChipVoyager::SerialInterrupt(void)+0x2c>
        1d8eb8:	e3100020 	tst	r0, #32	; 0x20
        1d8ebc:	0affffec 	beq	1d8e74 <TSerialChipVoyager::SerialInterrupt(void)+0x2c>
        1d8ec0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d8ec4:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1d8ec8:	ea00002c 	b	1d8f80 <TSerialChipVoyager::SerialInterrupt(void)+0x138>
        1d8ecc:	e3120040 	tst	r2, #64	; 0x40
        1d8ed0:	0a000011 	beq	1d8f1c <TSerialChipVoyager::SerialInterrupt(void)+0xd4>
        1d8ed4:	e5c59c00 	strb	r9, [r5, #3072]	; fField3072
        1d8ed8:	e5d4108f 	ldrb	r1, [r4, #143]	; fField143
        1d8edc:	e3310002 	teq	r1, #2	; 0x2
        1d8ee0:	1a000008 	bne	1d8f08 <TSerialChipVoyager::SerialInterrupt(void)+0xc0>
        1d8ee4:	e1a00004 	mov	r0, r4
        1d8ee8:	e3a02000 	mov	r2, #0	; 0x0
        1d8eec:	e3a01040 	mov	r1, #64	; 0x40
        1d8ef0:	eb6249b5 	bl	1a6b5cc <TSerialChipVoyager::$SetIntSourceEnable(unsigned long, unsigned char)>
        1d8ef4:	e3a01000 	mov	r1, #0	; 0x0
        1d8ef8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d8efc:	e1a0e00f 	mov	lr, pc
        1d8f00:	e594f084 	ldr	pc, [r4, #132]	; fField132
        1d8f04:	eaffffda 	b	1d8e74 <TSerialChipVoyager::SerialInterrupt(void)+0x2c>
        1d8f08:	e3100040 	tst	r0, #64	; 0x40
        1d8f0c:	0affffd8 	beq	1d8e74 <TSerialChipVoyager::SerialInterrupt(void)+0x2c>
        1d8f10:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d8f14:	e594101c 	ldr	r1, [r4, #28]	; fField28
        1d8f18:	ea000018 	b	1d8f80 <TSerialChipVoyager::SerialInterrupt(void)+0x138>
        1d8f1c:	e3120080 	tst	r2, #128	; 0x80
        1d8f20:	0a000005 	beq	1d8f3c <TSerialChipVoyager::SerialInterrupt(void)+0xf4>
        1d8f24:	e5c58c00 	strb	r8, [r5, #3072]	; fField3072
        1d8f28:	e3100080 	tst	r0, #128	; 0x80
        1d8f2c:	0affffd0 	beq	1d8e74 <TSerialChipVoyager::SerialInterrupt(void)+0x2c>
        1d8f30:	e2841010 	add	r1, r4, #16	; 0x10
        1d8f34:	e8910003 	ldmia	r1, {r0, r1}
        1d8f38:	ea000010 	b	1d8f80 <TSerialChipVoyager::SerialInterrupt(void)+0x138>
        1d8f3c:	e5c52c00 	strb	r2, [r5, #3072]	; fField3072
        1d8f40:	e3110001 	tst	r1, #1	; 0x1
        1d8f44:	0a00000b 	beq	1d8f78 <TSerialChipVoyager::SerialInterrupt(void)+0x130>
        1d8f48:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
        1d8f4c:	e3300000 	teq	r0, #0	; 0x0
        1d8f50:	1a000006 	bne	1d8f70 <TSerialChipVoyager::SerialInterrupt(void)+0x128>
        1d8f54:	e5c47058 	strb	r7, [r4, #88]	; fField88
        1d8f58:	e5d60400 	ldrb	r0, [r6, #1024]	; fField1024
        1d8f5c:	e3100001 	tst	r0, #1	; 0x1
        1d8f60:	1a000004 	bne	1d8f78 <TSerialChipVoyager::SerialInterrupt(void)+0x130>
        1d8f64:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d8f68:	e1a0e00f 	mov	lr, pc
        1d8f6c:	e594f018 	ldr	pc, [r4, #24]	; fField24
        1d8f70:	e3a00000 	mov	r0, #0	; 0x0
        1d8f74:	e5c40058 	strb	r0, [r4, #88]	; fField88
        1d8f78:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d8f7c:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1d8f80:	e1a0e00f 	mov	lr, pc
        1d8f84:	e1a0f001 	mov	pc, r1
        1d8f88:	eaffffb9 	b	1d8e74 <TSerialChipVoyager::SerialInterrupt(void)+0x2c>
    */
}

/**
 * Symbol: TSerialChipVoyager::AsyncDMAOutInt(void)
 * Address: 001d8f8c
 */
TSerialChipVoyager::AsyncDMAOutInt(void) {
    /*
        1d8f8c:	e1a0c00d 	mov	ip, sp
        1d8f90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d8f94:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d8f98:	e1a04000 	mov	r4, r0
        1d8f9c:	e5900078 	ldr	r0, [r0, #120]	; fField120
        1d8fa0:	e3a01001 	mov	r1, #1	; 0x1
        1d8fa4:	eb624db2 	bl	1a6c674 <TSerialDMAEngine::$StopTxDMA(unsigned char)>
        1d8fa8:	e1a00004 	mov	r0, r4
        1d8fac:	e3a01000 	mov	r1, #0	; 0x0
        1d8fb0:	eb624d9a 	bl	1a6c620 <TSerialChipVoyager::$TxDMAEnable(int)>
        1d8fb4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d8fb8:	e594c07c 	ldr	ip, [r4, #124]	; fField124
        1d8fbc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1d8fc0:	e1a0f00c 	mov	pc, ip
    */
}

/**
 * Symbol: TSerialChipVoyager::AsyncDMAInInt(void)
 * Address: 001d8fc4
 */
TSerialChipVoyager::AsyncDMAInInt(void) {
    /*
        1d8fc4:	e1a0c00d 	mov	ip, sp
        1d8fc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d8fcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d8fd0:	e1a04000 	mov	r4, r0
        1d8fd4:	e5d0008f 	ldrb	r0, [r0, #143]	; fField143
        1d8fd8:	e3300002 	teq	r0, #2	; 0x2
        1d8fdc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1d8fe0:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d8fe4:	eb624da0 	bl	1a6c66c <TSerialDMAEngine::$StopRxDMA(void)>
        1d8fe8:	e1a00004 	mov	r0, r4
        1d8fec:	eb624964 	bl	1a6b584 <TSerialChipVoyager::$GetRxErrorStatus(void)>
        1d8ff0:	e1b05000 	movs	r5, r0
        1d8ff4:	11a01005 	movne	r1, r5
        1d8ff8:	15940088 	ldrne	r0, [r4, #136]	; fField136
        1d8ffc:	1b68bd19 	blne	1c08468 <TCircleBuf::$PutEOM(unsigned long)>
        1d9000:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d9004:	e5941090 	ldr	r1, [r4, #144]	; fField144
        1d9008:	eb624d96 	bl	1a6c668 <TSerialDMAEngine::$StartRxDMA(unsigned long)>
        1d900c:	e1a01005 	mov	r1, r5
        1d9010:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d9014:	e594c084 	ldr	ip, [r4, #132]	; fField132
        1d9018:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1d901c:	e1a0f00c 	mov	pc, ip
    */
}

/**
 * Symbol: TSerialChipVoyager::LocalTalkInterrupt(void)
 * Address: 001d9020
 */
TSerialChipVoyager::LocalTalkInterrupt(void) {
    /*
        1d9020:	e1a0c00d 	mov	ip, sp
        1d9024:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1d9028:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d902c:	e1a04000 	mov	r4, r0
        1d9030:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d9034:	e3a09020 	mov	r9, #32	; 0x20
        1d9038:	e3a08040 	mov	r8, #64	; 0x40
        1d903c:	e3a07080 	mov	r7, #128	; 0x80
        1d9040:	e2805a03 	add	r5, r0, #12288	; 0x3000
        1d9044:	e2806901 	add	r6, r0, #16384	; 0x4000
        1d9048:	e5d51000 	ldrb	r1, [r5]
        1d904c:	e5d62000 	ldrb	r2, [r6]
        1d9050:	e5d60400 	ldrb	r0, [r6, #1024]	; fField1024
        1d9054:	e20000e0 	and	r0, r0, #224	; 0xe0
        1d9058:	e1820000 	orr	r0, r2, r0
        1d905c:	e0000001 	and	r0, r0, r1
        1d9060:	e21000ff 	ands	r0, r0, #255	; 0xff
        1d9064:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1d9068:	e3100020 	tst	r0, #32	; 0x20
        1d906c:	0a000004 	beq	1d9084 <TSerialChipVoyager::LocalTalkInterrupt(void)+0x64>
        1d9070:	e5c59c00 	strb	r9, [r5, #3072]	; fField3072
        1d9074:	e5d4008f 	ldrb	r0, [r4, #143]	; fField143
        1d9078:	e3300002 	teq	r0, #2	; 0x2
        1d907c:	1a000009 	bne	1d90a8 <TSerialChipVoyager::LocalTalkInterrupt(void)+0x88>
        1d9080:	ea000005 	b	1d909c <TSerialChipVoyager::LocalTalkInterrupt(void)+0x7c>
        1d9084:	e3100040 	tst	r0, #64	; 0x40
        1d9088:	0a000009 	beq	1d90b4 <TSerialChipVoyager::LocalTalkInterrupt(void)+0x94>
        1d908c:	e5c58c00 	strb	r8, [r5, #3072]	; fField3072
        1d9090:	e5d4008f 	ldrb	r0, [r4, #143]	; fField143
        1d9094:	e3300002 	teq	r0, #2	; 0x2
        1d9098:	1a000002 	bne	1d90a8 <TSerialChipVoyager::LocalTalkInterrupt(void)+0x88>
        1d909c:	e1a00004 	mov	r0, r4
        1d90a0:	eb624d68 	bl	1a6c648 <TSerialChipVoyager::$StopRcvDataPacket(void)>
        1d90a4:	eaffffe7 	b	1d9048 <TSerialChipVoyager::LocalTalkInterrupt(void)+0x28>
        1d90a8:	e1a00004 	mov	r0, r4
        1d90ac:	eb624d5d 	bl	1a6c628 <TSerialChipVoyager::$ReceivePacket(void)>
        1d90b0:	eaffffe4 	b	1d9048 <TSerialChipVoyager::LocalTalkInterrupt(void)+0x28>
        1d90b4:	e3100080 	tst	r0, #128	; 0x80
        1d90b8:	15c57c00 	strneb	r7, [r5, #3072]	; fField3072
        1d90bc:	1affffe1 	bne	1d9048 <TSerialChipVoyager::LocalTalkInterrupt(void)+0x28>
        1d90c0:	e5c50c00 	strb	r0, [r5, #3072]	; fField3072
        1d90c4:	e3100001 	tst	r0, #1	; 0x1
        1d90c8:	0affffde 	beq	1d9048 <TSerialChipVoyager::LocalTalkInterrupt(void)+0x28>
        1d90cc:	e5d4008f 	ldrb	r0, [r4, #143]	; fField143
        1d90d0:	e3300002 	teq	r0, #2	; 0x2
        1d90d4:	01a00004 	moveq	r0, r4
        1d90d8:	0b624d5a 	bleq	1a6c648 <TSerialChipVoyager::$StopRcvDataPacket(void)>
        1d90dc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d90e0:	e1a0e00f 	mov	lr, pc
        1d90e4:	e594f018 	ldr	pc, [r4, #24]	; fField24
        1d90e8:	eaffffd6 	b	1d9048 <TSerialChipVoyager::LocalTalkInterrupt(void)+0x28>
    */
}

/**
 * Symbol: TSerialChipVoyager::LocalTalkDMAOutInt(void)
 * Address: 001d90ec
 */
TSerialChipVoyager::LocalTalkDMAOutInt(void) {
    /*
        1d90ec:	e1a0c00d 	mov	ip, sp
        1d90f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d90f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d90f8:	e1a04000 	mov	r4, r0
        1d90fc:	e5b05024 	ldr	r5, [r0, #36]!	; fField36
        1d9100:	e2800024 	add	r0, r0, #36	; 0x24
        1d9104:	e1a07000 	mov	r7, r0
        1d9108:	e3a01e75 	mov	r1, #1872	; 0x750
        1d910c:	eb689373 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
        1d9110:	e2856901 	add	r6, r5, #16384	; 0x4000
        1d9114:	e5d60c00 	ldrb	r0, [r6, #3072]	; fField3072
        1d9118:	e3100040 	tst	r0, #64	; 0x40
        1d911c:	0a000006 	beq	1d913c <TSerialChipVoyager::LocalTalkDMAOutInt(void)+0x50>
        1d9120:	e1a00007 	mov	r0, r7
        1d9124:	eb68936f 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
        1d9128:	e3300000 	teq	r0, #0	; 0x0
        1d912c:	1a000002 	bne	1d913c <TSerialChipVoyager::LocalTalkDMAOutInt(void)+0x50>
        1d9130:	e5d60c00 	ldrb	r0, [r6, #3072]	; fField3072
        1d9134:	e3100040 	tst	r0, #64	; 0x40
        1d9138:	1afffff8 	bne	1d9120 <TSerialChipVoyager::LocalTalkDMAOutInt(void)+0x34>
        1d913c:	e3a01000 	mov	r1, #0	; 0x0
        1d9140:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1d9144:	eb624d4a 	bl	1a6c674 <TSerialDMAEngine::$StopTxDMA(unsigned char)>
        1d9148:	e3a00001 	mov	r0, #1	; 0x1
        1d914c:	e5c4008d 	strb	r0, [r4, #141]	; fField141
        1d9150:	e5d40062 	ldrb	r0, [r4, #98]	; fField98
        1d9154:	e2851a02 	add	r1, r5, #8192	; 0x2000
        1d9158:	e5c10400 	strb	r0, [r1, #1024]	; fField1024
        1d915c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d9160:	e594c07c 	ldr	ip, [r4, #124]	; fField124
        1d9164:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1d9168:	e1a0f00c 	mov	pc, ip
    */
}

/**
 * Symbol: TSerialChipVoyager::LTReceiveTimer(unsigned long)
 * Address: 001d916c
 */
TSerialChipVoyager::LTReceiveTimer(unsigned long) {
    /*
        1d916c:	e5d0108f 	ldrb	r1, [r0, #143]	; fField143
        1d9170:	e3310002 	teq	r1, #2	; 0x2
        1d9174:	0a624d33 	beq	1a6c648 <TSerialChipVoyager::$StopRcvDataPacket(void)>
        1d9178:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChipVoyager::LocalTalkDMAInInt(void)
 * Address: 001d917c
 */
TSerialChipVoyager::LocalTalkDMAInInt(void) {
    /*
        1d917c:	e1a0c00d 	mov	ip, sp
        1d9180:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d9184:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9188:	e1a04000 	mov	r4, r0
        1d918c:	eb624d2d 	bl	1a6c648 <TSerialChipVoyager::$StopRcvDataPacket(void)>
        1d9190:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d9194:	e2800901 	add	r0, r0, #16384	; 0x4000
        1d9198:	e5d00800 	ldrb	r0, [r0, #2048]	; fField2048
        1d919c:	e3100002 	tst	r0, #2	; 0x2
        1d91a0:	01a00004 	moveq	r0, r4
        1d91a4:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1d91a8:	0a624d22 	beq	1a6c638 <TSerialChipVoyager::$LocalTalkInterrupt(void)>
        1d91ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::StopRcvDataPacket(void)
 * Address: 001d91b0
 */
TSerialChipVoyager::StopRcvDataPacket(void) {
    /*
        1d91b0:	e1a0c00d 	mov	ip, sp
        1d91b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d91b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d91bc:	e1a04000 	mov	r4, r0
        1d91c0:	e5d0008f 	ldrb	r0, [r0, #143]	; fField143
        1d91c4:	e3300002 	teq	r0, #2	; 0x2
        1d91c8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1d91cc:	e5940098 	ldr	r0, [r4, #152]	; fField152
        1d91d0:	e5941094 	ldr	r1, [r4, #148]	; fField148
        1d91d4:	eb60fe90 	bl	1a18c1c <TFIQTimer::$ResetFIQTimer(FIQTimer *)>
        1d91d8:	e1a00004 	mov	r0, r4
        1d91dc:	eb624d0e 	bl	1a6c61c <TSerialChipVoyager::$DisableRxDMA(void)>
        1d91e0:	e3a01002 	mov	r1, #2	; 0x2
        1d91e4:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1d91e8:	eb624d1d 	bl	1a6c664 <TSerialDMAEngine::$StopIn(int)>
        1d91ec:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d91f0:	e2800901 	add	r0, r0, #16384	; 0x4000
        1d91f4:	e5d00800 	ldrb	r0, [r0, #2048]	; fField2048
        1d91f8:	e20010f0 	and	r1, r0, #240	; 0xf0
        1d91fc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d9200:	e594c084 	ldr	ip, [r4, #132]	; fField132
        1d9204:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1d9208:	e1a0f00c 	mov	pc, ip
    */
}

/**
 * Symbol: TSerialChipVoyager::Delete(void)
 * Address: 001d920c
 */
TSerialChipVoyager::Delete(void) {
    /*
        1d920c:	e1a0c00d 	mov	ip, sp
        1d9210:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d9214:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9218:	e1a04000 	mov	r4, r0
        1d921c:	e5d00056 	ldrb	r0, [r0, #86]	; fField86
        1d9220:	e3300000 	teq	r0, #0	; 0x0
        1d9224:	0a00000e 	beq	1d9264 <TSerialChipVoyager::Delete(void)+0x58>
        1d9228:	e1a00004 	mov	r0, r4
        1d922c:	eb6248d9 	bl	1a6b598 <TSerialChipVoyager::$PowerOff(void)>
        1d9230:	e594006c 	ldr	r0, [r4, #108]	; fField108
        1d9234:	eb68c0b0 	bl	1c094fc <$DeregisterInterrupt(InterruptObject *)>
        1d9238:	e5940070 	ldr	r0, [r4, #112]	; fField112
        1d923c:	e3300000 	teq	r0, #0	; 0x0
        1d9240:	1b68c0ad 	blne	1c094fc <$DeregisterInterrupt(InterruptObject *)>
        1d9244:	eb68a3b1 	bl	1c02110 <$GetSerialChipRegistry(void)>
        1d9248:	e1a01004 	mov	r1, r4
        1d924c:	eb06af10 	bl	384e94 <PSerialChipRegistry::UnRegister(TSerialChip *)>
        1d9250:	e28410a0 	add	r1, r4, #160	; 0xa0
        1d9254:	e1a00004 	mov	r0, r4
        1d9258:	eb681310 	bl	1bddea0 <$UnlockHeapRange>
        1d925c:	e3a00000 	mov	r0, #0	; 0x0
        1d9260:	e5c40056 	strb	r0, [r4, #86]	; fField86
        1d9264:	e5b4009c 	ldr	r0, [r4, #156]!	; fField156
        1d9268:	e3300000 	teq	r0, #0	; 0x0
        1d926c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        1d9270:	1a67d11a 	bne	1bcd6e0 <$__dl(void *)>
        1d9274:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChipVoyager::CardRemoved(void)
 * Address: 001d9278
 */
TSerialChipVoyager::CardRemoved(void) {
    /*
        1d9278:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__18TSerialChipVoyagerSFv
 * Address: 00384a00
 */
void TSerialChipVoyager::ClassInfo() {
    /*
        384a00:	e24f0044 	sub	r0, pc, #68	; 0x44
        384a04:	e1a0f00e 	mov	pc, lr
        384a08:	e3a00000 	mov	r0, #0	; 0x0
        384a0c:	e1a0f00e 	mov	pc, lr
        384a10:	54536572 	ldrplb	r6, [r3], -#1394
        384a14:	69616c43 	stmvsdb	r1!, {r0, r1, r6, sl, fp, sp, lr}^
        384a18:	68697056 	stmvsda	r9!, {r1, r2, r4, r6, ip, sp, lr}^
        384a1c:	6f796167 	swivs	0x00796167
        384a20:	65720054 	ldrvsb	r0, [r2, -#84]!	; fField84
        384a24:	53657269 	cmnpl	r5, #-1879048186	; 0x90000006
        384a28:	616c4368 	cmnvs	ip, r8, ror #6
        384a2c:	69700076 	ldmvsdb	r0!, {r1, r2, r4, r5, r6}^
        384a30:	322e3000 	eorcc	r3, lr, #0	; 0x0
        384a3c:	eaffffef 	b	384a00 <ClassInfo__18TSerialChipVoyagerSFv>
        384a40:	eaf950d2 	b	1d8d90 <TSerialChipVoyager::New(void)>
        384a44:	eaf951f0 	b	1d920c <TSerialChipVoyager::Delete(void)>
        384a48:	ea5b96c7 	b	1a6a56c <TSerialChipVoyager::$InstallChipHandler(void *, SCCChannelInts *)>
        384a4c:	ea5b96c7 	b	1a6a570 <TSerialChipVoyager::$RemoveChipHandler(void *)>
        384a50:	ea5b96c7 	b	1a6a574 <TSerialChipVoyager::$PutByte(unsigned char)>
        384a54:	ea5b96c7 	b	1a6a578 <TSerialChipVoyager::$ResetTxBEmpty(void)>
        384a58:	ea5b96c7 	b	1a6a57c <TSerialChipVoyager::$GetByte(void)>
        384a5c:	ea5b9ac7 	b	1a6b580 <TSerialChipVoyager::$TxBufEmpty(void)>
        384a60:	eaf94847 	b	1d6b84 <TSerialChipVoyager::RxBufFull(void)>
        384a64:	ea5b9ac6 	b	1a6b584 <TSerialChipVoyager::$GetRxErrorStatus(void)>
        384a68:	ea5b9ac6 	b	1a6b588 <TSerialChipVoyager::$GetSerialStatus(void)>
        384a6c:	eaf9487e 	b	1d6c6c <TSerialChipVoyager::ResetSerialStatus(void)>
        384a70:	ea5b9ac5 	b	1a6b58c <TSerialChipVoyager::$SetSerialOutputs(unsigned long)>
        384a74:	ea5b9ac5 	b	1a6b590 <TSerialChipVoyager::$ClearSerialOutputs(unsigned long)>
        384a78:	ea5b9ac5 	b	1a6b594 <TSerialChipVoyager::$GetSerialOutputs(void)>
        384a7c:	ea5b9ac5 	b	1a6b598 <TSerialChipVoyager::$PowerOff(void)>
        384a80:	ea5b9ac5 	b	1a6b59c <TSerialChipVoyager::$PowerOn(void)>
        384a84:	eaf94939 	b	1d6f70 <TSerialChipVoyager::PowerIsOn(void)>
        384a88:	ea5b9ac4 	b	1a6b5a0 <TSerialChipVoyager::$SetInterruptEnable(unsigned char)>
        384a8c:	eaf94945 	b	1d6fa8 <TSerialChipVoyager::Reset(void)>
        384a90:	ea5b9ac3 	b	1a6b5a4 <TSerialChipVoyager::$SetBreak(unsigned char)>
        384a94:	ea5b9ac3 	b	1a6b5a8 <TSerialChipVoyager::$SetSpeed(unsigned long)>
        384a98:	ea5b9ac3 	b	1a6b5ac <TSerialChipVoyager::$SetIOParms(TCMOSerialIOParms *)>
        384a9c:	ea5b9ac3 	b	1a6b5b0 <TSerialChipVoyager::$Reconfigure(void)>
        384aa0:	eaf94736 	b	1d6780 <TSerialChipVoyager::Init(TCardSocket *, TCardHandler *, unsigned char *)>
        384aa4:	eaf951f3 	b	1d9278 <TSerialChipVoyager::CardRemoved(void)>
        384aa8:	ea5b9ac1 	b	1a6b5b4 <TSerialChipVoyager::$GetFeatures(void)>
        384aac:	ea5b96ad 	b	1a6a568 <TSerialChipVoyager::$InitByOption(TOption *)>
        384ab0:	ea5b9ac0 	b	1a6b5b8 <TSerialChipVoyager::$ProcessOption(TOption *)>
        384ab4:	ea5b9ac0 	b	1a6b5bc <TSerialChipVoyager::$SetSerialMode(unsigned long)>
        384ab8:	ea5b9ac0 	b	1a6b5c0 <TSerialChipVoyager::$SysEventNotify(unsigned long)>
        384abc:	ea5b9ac0 	b	1a6b5c4 <TSerialChipVoyager::$SetTxDTransceiverEnable(unsigned char)>
        384ac0:	ea5b9ac0 	b	1a6b5c8 <TSerialChipVoyager::$GetByteAndStatus(unsigned char *)>
        384ac4:	ea5b9ac0 	b	1a6b5cc <TSerialChipVoyager::$SetIntSourceEnable(unsigned long, unsigned char)>
        384ac8:	eaf94be3 	b	1d7a5c <TSerialChipVoyager::AllSent(void)>
        384acc:	ea5b9ac0 	b	1a6b5d4 <TSerialChipVoyager::$ConfigureForOutput(unsigned char)>
        384ad0:	ea5b9ac2 	b	1a6b5e0 <TSerialChipVoyager::$InitTxDMA(TCircleBuf *, void (*)(void *))>
        384ad4:	ea5b9ac2 	b	1a6b5e4 <TSerialChipVoyager::$InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))>
        384ad8:	ea5b9ac2 	b	1a6b5e8 <TSerialChipVoyager::$TxDMAControl(unsigned char)>
        384adc:	ea5b9ac2 	b	1a6b5ec <TSerialChipVoyager::$RxDMAControl(unsigned char)>
        384ae0:	ea5b9abc 	b	1a6b5d8 <TSerialChipVoyager::$SetSDLCAddress(unsigned char)>
        384ae4:	ea5b9abc 	b	1a6b5dc <TSerialChipVoyager::$ReEnableReceiver(unsigned char)>
        384ae8:	ea5b9ac0 	b	1a6b5f0 <TSerialChipVoyager::$LinkIsFree(unsigned char)>
        384aec:	ea5b9ac0 	b	1a6b5f4 <TSerialChipVoyager::$SendControlPacket(unsigned char, unsigned char, unsigned char)>
        384af0:	ea5b9ac0 	b	1a6b5f8 <TSerialChipVoyager::$WaitForPacket(unsigned long)>
        384af4:	ea5b9ab5 	b	1a6b5d0 <TSerialChipVoyager::$WaitForAllSent(void)>
        384af8:	e1a0000f 	mov	r0, pc
        384afc:	e1a0f00e 	mov	pc, lr
        384b00:	54536572 	ldrplb	r6, [r3], -#1394
        384b04:	69616c43 	stmvsdb	r1!, {r0, r1, r6, sl, fp, sp, lr}^
        384b08:	68697000 	stmvsda	r9!, {ip, sp, lr}^
    */
}

