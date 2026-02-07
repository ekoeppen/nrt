#include "include/TAsyncDebugLink.h"

/**
 * Symbol: Sizeof__15TAsyncDebugLinkSFv
 * Address: 000388a8
 */
void TAsyncDebugLink::Sizeof() {
    /*
         388a8:	e3a00020 	mov	r0, #32	; 0x20
         388ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncDebugLink::New(void)
 * Address: 000388b0
 */
TAsyncDebugLink::New(void) {
    /*
         388b0:	e1a0c00d 	mov	ip, sp
         388b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         388b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         388bc:	e1a04000 	mov	r4, r0
         388c0:	e3a00000 	mov	r0, #0	; 0x0
         388c4:	e5840010 	str	r0, [r4, #16]	; fField16
         388c8:	e59f101c 	ldr	r1, [pc, #1c]	; 388ec <TAsyncDebugLink::New(void)+0x3c>
         388cc:	e5840018 	str	r0, [r4, #24]	; fField24
         388d0:	e5841014 	str	r1, [r4, #20]	; fField20
         388d4:	e2841020 	add	r1, r4, #32	; 0x20
         388d8:	e1a00004 	mov	r0, r4
         388dc:	e3a02001 	mov	r2, #1	; 0x1
         388e0:	eb6e789b 	bl	1bd6b54 <$LockHeapRange>
         388e4:	e1a00004 	mov	r0, r4
         388e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         388ec:	65787472 	ldrvsb	r7, [r8, -#1138]!
    */
}

/**
 * Symbol: TAsyncDebugLink::GetSerialChipPtr(void)
 * Address: 000388f0
 */
TAsyncDebugLink::GetSerialChipPtr(void) {
    /*
         388f0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         388f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncDebugLink::PowerCycle(unsigned char)
 * Address: 000388f8
 */
TAsyncDebugLink::PowerCycle(unsigned char) {
    /*
         388f8:	e1a0c00d 	mov	ip, sp
         388fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         38900:	e24cb004 	sub	fp, ip, #4	; 0x4
         38904:	e20110ff 	and	r1, r1, #255	; 0xff
         38908:	e5b04010 	ldr	r4, [r0, #16]!	; fField16
         3890c:	e3340000 	teq	r4, #0	; 0x0
         38910:	0a000009 	beq	3893c <TAsyncDebugLink::PowerCycle(unsigned char)+0x44>
         38914:	e3310000 	teq	r1, #0	; 0x0
         38918:	e1a00004 	mov	r0, r4
         3891c:	0a000001 	beq	38928 <TAsyncDebugLink::PowerCycle(unsigned char)+0x30>
         38920:	eb0d30b2 	bl	384bf0 <TSerialChip::PowerOff(void)>
         38924:	ea000004 	b	3893c <TAsyncDebugLink::PowerCycle(unsigned char)+0x44>
         38928:	eb0d30b3 	bl	384bfc <TSerialChip::PowerOn(void)>
         3892c:	eb0d6897 	bl	392b90 <EnterFIQAtomic>
         38930:	e1a00004 	mov	r0, r4
         38934:	eb0d30c5 	bl	384c50 <TSerialChip::Reconfigure(void)>
         38938:	eb0d689c 	bl	392bb0 <ExitFIQAtomic>
         3893c:	e3a00000 	mov	r0, #0	; 0x0
         38940:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncDebugLink::WriteByte(unsigned char)
 * Address: 00038944
 */
TAsyncDebugLink::WriteByte(unsigned char) {
    /*
         38944:	e1a0c00d 	mov	ip, sp
         38948:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3894c:	e24cb004 	sub	fp, ip, #4	; 0x4
         38950:	e20150ff 	and	r5, r1, #255	; 0xff
         38954:	e5900010 	ldr	r0, [r0, #16]	; fField16
         38958:	e1a04000 	mov	r4, r0
         3895c:	eb0d308b 	bl	384b90 <TSerialChip::TxBufEmpty(void)>
         38960:	e3300000 	teq	r0, #0	; 0x0
         38964:	1a000003 	bne	38978 <TAsyncDebugLink::WriteByte(unsigned char)+0x34>
         38968:	e1a00004 	mov	r0, r4
         3896c:	eb0d3087 	bl	384b90 <TSerialChip::TxBufEmpty(void)>
         38970:	e3300000 	teq	r0, #0	; 0x0
         38974:	0afffffb 	beq	38968 <TAsyncDebugLink::WriteByte(unsigned char)+0x24>
         38978:	e1a01005 	mov	r1, r5
         3897c:	e1a00004 	mov	r0, r4
         38980:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         38984:	ea0d3078 	b	384b6c <TSerialChip::PutByte(unsigned char)>
    */
}

/**
 * Symbol: TAsyncDebugLink::RxBFInterrupt(void)
 * Address: 00038988
 */
TAsyncDebugLink::RxBFInterrupt(void) {
    /*
         38988:	e1a0c00d 	mov	ip, sp
         3898c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         38990:	e24cb004 	sub	fp, ip, #4	; 0x4
         38994:	e1a04000 	mov	r4, r0
         38998:	e5900010 	ldr	r0, [r0, #16]	; fField16
         3899c:	e3a02000 	mov	r2, #0	; 0x0
         389a0:	e3a01040 	mov	r1, #64	; 0x40
         389a4:	eb0d30c7 	bl	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
         389a8:	e594001c 	ldr	r0, [r4, #28]	; fField28
         389ac:	e594c018 	ldr	ip, [r4, #24]	; fField24
         389b0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         389b4:	e1a0f00c 	mov	pc, ip
    */
}

/**
 * Symbol: TAsyncDebugLink::TxBEInterrupt(void)
 * Address: 000389b8
 */
TAsyncDebugLink::TxBEInterrupt(void) {
    /*
         389b8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         389bc:	ea0d306d 	b	384b78 <TSerialChip::ResetTxBEmpty(void)>
    */
}

/**
 * Symbol: TAsyncDebugLink::ExtStsInterrupt(void)
 * Address: 000389c0
 */
TAsyncDebugLink::ExtStsInterrupt(void) {
    /*
         389c0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         389c4:	ea0d307d 	b	384bc0 <TSerialChip::ResetSerialStatus(void)>
    */
}

/**
 * Symbol: TAsyncDebugLink::Delete(void)
 * Address: 000389c8
 */
TAsyncDebugLink::Delete(void) {
    /*
         389c8:	e1a0c00d 	mov	ip, sp
         389cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         389d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         389d4:	e1a04000 	mov	r4, r0
         389d8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         389dc:	e3300000 	teq	r0, #0	; 0x0
         389e0:	11a00004 	movne	r0, r4
         389e4:	1b68a9ef 	blne	1a631a8 <TAsyncDebugLink::$Remove(void)>
         389e8:	e2841020 	add	r1, r4, #32	; 0x20
         389ec:	e1a00004 	mov	r0, r4
         389f0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         389f4:	ea6e9529 	b	1bddea0 <$UnlockHeapRange>
    */
}

/**
 * Symbol: TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))
 * Address: 000389f8
 */
TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *)) {
    /*
         389f8:	e1a0c00d 	mov	ip, sp
         389fc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         38a00:	e24cb004 	sub	fp, ip, #4	; 0x4
         38a04:	e1a04000 	mov	r4, r0
         38a08:	e1a05001 	mov	r5, r1
         38a0c:	e1a07002 	mov	r7, r2
         38a10:	e1a06003 	mov	r6, r3
         38a14:	e59b9004 	ldr	r9, [fp, #4]
         38a18:	eb6f25bc 	bl	1c02110 <$GetSerialChipRegistry(void)>
         38a1c:	e1a08000 	mov	r8, r0
         38a20:	e3350000 	teq	r5, #0	; 0x0
         38a24:	15845014 	strne	r5, [r4, #20]	; fField20
         38a28:	e1a00008 	mov	r0, r8
         38a2c:	e5941014 	ldr	r1, [r4, #20]	; fField20
         38a30:	eb0d3129 	bl	384edc <PSerialChipRegistry::FindByLocation(unsigned long)>
         38a34:	e3300000 	teq	r0, #0	; 0x0
         38a38:	03a0406a 	moveq	r4, #106	; 0x6a
         38a3c:	02444c3f 	subeq	r4, r4, #16128	; 0x3f00
         38a40:	0a000056 	beq	38ba0 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x1a8>
         38a44:	e1a01000 	mov	r1, r0
         38a48:	e1a00008 	mov	r0, r8
         38a4c:	eb0d3116 	bl	384eac <PSerialChipRegistry::GetChipPtr(unsigned long)>
         38a50:	e1a05000 	mov	r5, r0
         38a54:	e5840010 	str	r0, [r4, #16]	; fField16
         38a58:	e24dd024 	sub	sp, sp, #36	; 0x24
         38a5c:	e1a0000d 	mov	r0, sp
         38a60:	eb68a9dd 	bl	1a631dc <THMOSerDebugConfig::$__ct(void)>
         38a64:	e59d0008 	ldr	r0, [sp, #8]
         38a68:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         38a6c:	e3800c02 	orr	r0, r0, #512	; 0x200
         38a70:	e58d0008 	str	r0, [sp, #8]
         38a74:	e58d400c 	str	r4, [sp, #12]
         38a78:	e5a49018 	str	r9, [r4, #24]!	; fField24
         38a7c:	e5846004 	str	r6, [r4, #4]
         38a80:	e59f008c 	ldr	r0, [pc, #8c]	; 38b14 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x11c>
         38a84:	e58d0018 	str	r0, [sp, #24]	; fField24
         38a88:	e58d001c 	str	r0, [sp, #28]	; fField28
         38a8c:	e59f0084 	ldr	r0, [pc, #84]	; 38b18 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x120>
         38a90:	e58d0010 	str	r0, [sp, #16]	; fField16
         38a94:	e59f0080 	ldr	r0, [pc, #80]	; 38b1c <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x124>
         38a98:	e58d0014 	str	r0, [sp, #20]	; fField20
         38a9c:	e3a00001 	mov	r0, #1	; 0x1
         38aa0:	e5cd0020 	strb	r0, [sp, #32]
         38aa4:	e1a0100d 	mov	r1, sp
         38aa8:	e1a00005 	mov	r0, r5
         38aac:	eb0d3076 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
         38ab0:	e1b04000 	movs	r4, r0
         38ab4:	e28dd024 	add	sp, sp, #36	; 0x24
         38ab8:	1a000038 	bne	38ba0 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x1a8>
         38abc:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         38ac0:	e1a0000d 	mov	r0, sp
         38ac4:	eb6e0cc9 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
         38ac8:	e3a06000 	mov	r6, #0	; 0x0
         38acc:	e58d600c 	str	r6, [sp, #12]
         38ad0:	e3a00008 	mov	r0, #8	; 0x8
         38ad4:	e58d0014 	str	r0, [sp, #20]	; fField20
         38ad8:	e58d7018 	str	r7, [sp, #24]	; fField24
         38adc:	e58d6010 	str	r6, [sp, #16]	; fField16
         38ae0:	e1a0100d 	mov	r1, sp
         38ae4:	e1a00005 	mov	r0, r5
         38ae8:	eb0d3055 	bl	384c44 <TSerialChip::SetIOParms(TCMOSerialIOParms *)>
         38aec:	e1a00005 	mov	r0, r5
         38af0:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         38af4:	eb0d304f 	bl	384c38 <TSerialChip::SetSpeed(unsigned long)>
         38af8:	e28dd01c 	add	sp, sp, #28	; 0x1c
         38afc:	eb0d6e43 	bl	394410 <IsSuperMode>
         38b00:	e3300000 	teq	r0, #0	; 0x0
         38b04:	0a000005 	beq	38b20 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x128>
         38b08:	e1a00005 	mov	r0, r5
         38b0c:	eb0d303a 	bl	384bfc <TSerialChip::PowerOn(void)>
         38b10:	ea00001b 	b	38b84 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x18c>
         38b14:	01a631ac 	moveq	r3, ip, lsr #3
         38b18:	01a631c8 	moveq	r3, r8, asr #3
         38b1c:	01a62148 	moveq	r2, r8, asr #2
         38b20:	e52d606c 	str	r6, [sp, -#108]!
         38b24:	e28d0008 	add	r0, sp, #8	; 0x8
         38b28:	eb6de791 	bl	1bb2974 <$setjmp>
         38b2c:	e3300000 	teq	r0, #0	; 0x0
         38b30:	1a000004 	bne	38b48 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x150>
         38b34:	e1a0000d 	mov	r0, sp
         38b38:	eb6e9d4f 	bl	1be007c <$AddExceptionHandler>
         38b3c:	e1a00005 	mov	r0, r5
         38b40:	eb0d302d 	bl	384bfc <TSerialChip::PowerOn(void)>
         38b44:	ea000009 	b	38b70 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x178>
         38b48:	e59d0060 	ldr	r0, [sp, #96]
         38b4c:	e59f1054 	ldr	r1, [pc, #54]	; 38ba8 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x1b0>
         38b50:	e5911000 	ldr	r1, [r1]
         38b54:	eb6ea98e 	bl	1be3194 <$Subexception>
         38b58:	e3300000 	teq	r0, #0	; 0x0
         38b5c:	13a040b5 	movne	r4, #181	; 0xb5
         38b60:	12444b0a 	subne	r4, r4, #10240	; 0x2800
         38b64:	1a000001 	bne	38b70 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x178>
         38b68:	e1a0000d 	mov	r0, sp
         38b6c:	eb6ea578 	bl	1be2154 <$NextHandler>
         38b70:	e1a0000d 	mov	r0, sp
         38b74:	eb6ea14f 	bl	1be10b8 <$ExitHandler>
         38b78:	e28dd06c 	add	sp, sp, #108	; 0x6c
         38b7c:	e3340000 	teq	r4, #0	; 0x0
         38b80:	1a000006 	bne	38ba0 <TAsyncDebugLink::Install(unsigned long, unsigned long, void *, long (*)(void *))+0x1a8>
         38b84:	eb0d6801 	bl	392b90 <EnterFIQAtomic>
         38b88:	e1a00005 	mov	r0, r5
         38b8c:	eb0d302f 	bl	384c50 <TSerialChip::Reconfigure(void)>
         38b90:	e1a00005 	mov	r0, r5
         38b94:	e3a01001 	mov	r1, #1	; 0x1
         38b98:	eb0d3044 	bl	384cb0 <TSerialChip::SetTxDTransceiverEnable(unsigned char)>
         38b9c:	eb0d6803 	bl	392bb0 <ExitFIQAtomic>
         38ba0:	e1a00004 	mov	r0, r4
         38ba4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         38ba8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TAsyncDebugLink::Remove(void)
 * Address: 00038bac
 */
TAsyncDebugLink::Remove(void) {
    /*
         38bac:	e1a0c00d 	mov	ip, sp
         38bb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         38bb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         38bb8:	e1a04000 	mov	r4, r0
         38bbc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         38bc0:	e1a05000 	mov	r5, r0
         38bc4:	eb0d3042 	bl	384cd4 <TSerialChip::AllSent(void)>
         38bc8:	e3300000 	teq	r0, #0	; 0x0
         38bcc:	1a000003 	bne	38be0 <TAsyncDebugLink::Remove(void)+0x34>
         38bd0:	e1a00005 	mov	r0, r5
         38bd4:	eb0d303e 	bl	384cd4 <TSerialChip::AllSent(void)>
         38bd8:	e3300000 	teq	r0, #0	; 0x0
         38bdc:	0afffffb 	beq	38bd0 <TAsyncDebugLink::Remove(void)+0x24>
         38be0:	e1a00005 	mov	r0, r5
         38be4:	eb0d3001 	bl	384bf0 <TSerialChip::PowerOff(void)>
         38be8:	e1a01004 	mov	r1, r4
         38bec:	e1a00005 	mov	r0, r5
         38bf0:	eb0d2fda 	bl	384b60 <TSerialChip::RemoveChipHandler(void *)>
         38bf4:	e3a00000 	mov	r0, #0	; 0x0
         38bf8:	e5a40010 	str	r0, [r4, #16]!	; fField16
         38bfc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long)
 * Address: 00038c00
 */
TAsyncDebugLink::WriteDebugFrame(unsigned char *, long, unsigned long) {
    /*
         38c00:	ea68a974 	b	1a631d8 <TAsyncDebugLink::$WriteDebugFrame(unsigned char *, long)>
    */
}

/**
 * Symbol: TAsyncDebugLink::WriteDebugFrame(unsigned char *, long)
 * Address: 00038c04
 */
TAsyncDebugLink::WriteDebugFrame(unsigned char *, long) {
    /*
         38c04:	e1a0c00d 	mov	ip, sp
         38c08:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         38c0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         38c10:	e1a04000 	mov	r4, r0
         38c14:	e1a06001 	mov	r6, r1
         38c18:	e1a05002 	mov	r5, r2
         38c1c:	e24dd008 	sub	sp, sp, #8	; 0x8
         38c20:	e1a0000d 	mov	r0, sp
         38c24:	eb004429 	bl	49cd0 <TCRC16::Reset(void)>
         38c28:	e1a00004 	mov	r0, r4
         38c2c:	e3a01016 	mov	r1, #22	; 0x16
         38c30:	eb68a967 	bl	1a631d4 <TAsyncDebugLink::$WriteByte(unsigned char)>
         38c34:	e1a00004 	mov	r0, r4
         38c38:	e3a01010 	mov	r1, #16	; 0x10
         38c3c:	eb68a964 	bl	1a631d4 <TAsyncDebugLink::$WriteByte(unsigned char)>
         38c40:	e1a00004 	mov	r0, r4
         38c44:	e3a01002 	mov	r1, #2	; 0x2
         38c48:	eb68a961 	bl	1a631d4 <TAsyncDebugLink::$WriteByte(unsigned char)>
         38c4c:	e3350000 	teq	r5, #0	; 0x0
         38c50:	0a00000d 	beq	38c8c <TAsyncDebugLink::WriteDebugFrame(unsigned char *, long)+0x88>
         38c54:	e4d67001 	ldrb	r7, [r6], #1
         38c58:	e2455001 	sub	r5, r5, #1	; 0x1
         38c5c:	e1a01007 	mov	r1, r7
         38c60:	e1a00004 	mov	r0, r4
         38c64:	eb68a95a 	bl	1a631d4 <TAsyncDebugLink::$WriteByte(unsigned char)>
         38c68:	e1a01007 	mov	r1, r7
         38c6c:	e1a0000d 	mov	r0, sp
         38c70:	eb004419 	bl	49cdc <TCRC16::ComputeCRC(unsigned char)>
         38c74:	e3370010 	teq	r7, #16	; 0x10
         38c78:	01a00004 	moveq	r0, r4
         38c7c:	03a01010 	moveq	r1, #16	; 0x10
         38c80:	0b68a953 	bleq	1a631d4 <TAsyncDebugLink::$WriteByte(unsigned char)>
         38c84:	e3350000 	teq	r5, #0	; 0x0
         38c88:	1afffff1 	bne	38c54 <TAsyncDebugLink::WriteDebugFrame(unsigned char *, long)+0x50>
         38c8c:	e1a00004 	mov	r0, r4
         38c90:	e3a01010 	mov	r1, #16	; 0x10
         38c94:	eb68a94e 	bl	1a631d4 <TAsyncDebugLink::$WriteByte(unsigned char)>
         38c98:	e3a01003 	mov	r1, #3	; 0x3
         38c9c:	e1a05001 	mov	r5, r1
         38ca0:	e1a00004 	mov	r0, r4
         38ca4:	eb68a94a 	bl	1a631d4 <TAsyncDebugLink::$WriteByte(unsigned char)>
         38ca8:	e1a01005 	mov	r1, r5
         38cac:	e1a0000d 	mov	r0, sp
         38cb0:	eb004409 	bl	49cdc <TCRC16::ComputeCRC(unsigned char)>
         38cb4:	e1a0000d 	mov	r0, sp
         38cb8:	eb00445c 	bl	49e30 <TCRC16::Get(void)>
         38cbc:	e5d01001 	ldrb	r1, [r0, #1]
         38cc0:	e1a00004 	mov	r0, r4
         38cc4:	eb68a942 	bl	1a631d4 <TAsyncDebugLink::$WriteByte(unsigned char)>
         38cc8:	e1a0000d 	mov	r0, sp
         38ccc:	eb004457 	bl	49e30 <TCRC16::Get(void)>
         38cd0:	e5d01000 	ldrb	r1, [r0]
         38cd4:	e1a00004 	mov	r0, r4
         38cd8:	eb68a93d 	bl	1a631d4 <TAsyncDebugLink::$WriteByte(unsigned char)>
         38cdc:	e3a00000 	mov	r0, #0	; 0x0
         38ce0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)
 * Address: 00038ce4
 */
TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long) {
    /*
         38ce4:	e1a0c00d 	mov	ip, sp
         38ce8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         38cec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         38cf0:	e24cb014 	sub	fp, ip, #20	; 0x14
         38cf4:	e1a04000 	mov	r4, r0
         38cf8:	e1a06001 	mov	r6, r1
         38cfc:	e1a05002 	mov	r5, r2
         38d00:	e59b7014 	ldr	r7, [fp, #20]	; fField20
         38d04:	e24dd014 	sub	sp, sp, #20	; 0x14
         38d08:	e28d000c 	add	r0, sp, #12	; 0xc
         38d0c:	eb0043ef 	bl	49cd0 <TCRC16::Reset(void)>
         38d10:	e1a0000d 	mov	r0, sp
         38d14:	eb6f146c 	bl	1bfdecc <TDelayTimer::$__ct(void)>
         38d18:	e1a01007 	mov	r1, r7
         38d1c:	e1a0000d 	mov	r0, sp
         38d20:	eb6f146e 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
         38d24:	e24dd004 	sub	sp, sp, #4	; 0x4
         38d28:	e3a07000 	mov	r7, #0	; 0x0
         38d2c:	e3a0a000 	mov	sl, #0	; 0x0
         38d30:	e3a09000 	mov	r9, #0	; 0x0
         38d34:	e3a08000 	mov	r8, #0	; 0x0
         38d38:	e3390000 	teq	r9, #0	; 0x0
         38d3c:	1a000014 	bne	38d94 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0xb0>
         38d40:	e3e0805b 	mvn	r8, #91	; 0x5b
         38d44:	e2488c46 	sub	r8, r8, #17920	; 0x4600
         38d48:	e5940010 	ldr	r0, [r4, #16]	; fField16
         38d4c:	eb0d2f92 	bl	384b9c <TSerialChip::RxBufFull(void)>
         38d50:	e3300000 	teq	r0, #0	; 0x0
         38d54:	0a000008 	beq	38d7c <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x98>
         38d58:	e1a0100d 	mov	r1, sp
         38d5c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         38d60:	eb0d2fd5 	bl	384cbc <TSerialChip::GetByteAndStatus(unsigned char *)>
         38d64:	e3300000 	teq	r0, #0	; 0x0
         38d68:	03a08000 	moveq	r8, #0	; 0x0
         38d6c:	0a000008 	beq	38d94 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0xb0>
         38d70:	e3e08052 	mvn	r8, #82	; 0x52
         38d74:	e2488c46 	sub	r8, r8, #17920	; 0x4600
         38d78:	ea000037 	b	38e5c <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x178>
         38d7c:	e28d0004 	add	r0, sp, #4	; 0x4
         38d80:	eb6f1458 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
         38d84:	e3300000 	teq	r0, #0	; 0x0
         38d88:	0affffee 	beq	38d48 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x64>
         38d8c:	e3380000 	teq	r8, #0	; 0x0
         38d90:	1a000031 	bne	38e5c <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x178>
         38d94:	e3570006 	cmp	r7, #6	; 0x6
         38d98:	908ff107 	addls	pc, pc, r7, lsl #2
         38d9c:	ea00002c 	b	38e54 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x170>
         38da0:	ea00000b 	b	38dd4 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0xf0>
         38da4:	ea00000f 	b	38de8 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x104>
         38da8:	ea000013 	b	38dfc <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x118>
         38dac:	ea000017 	b	38e10 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x12c>
         38db0:	ea00002d 	b	38e6c <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x188>
         38db4:	ea00003b 	b	38ea8 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x1c4>
         38db8:	e28d0010 	add	r0, sp, #16	; 0x10
         38dbc:	eb00441b 	bl	49e30 <TCRC16::Get(void)>
         38dc0:	e5d01000 	ldrb	r1, [r0]
         38dc4:	e5dd0000 	ldrb	r0, [sp]
         38dc8:	e1310000 	teq	r1, r0
         38dcc:	0a000022 	beq	38e5c <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x178>
         38dd0:	ea00003b 	b	38ec4 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x1e0>
         38dd4:	e5dd0000 	ldrb	r0, [sp]
         38dd8:	e3300016 	teq	r0, #22	; 0x16
         38ddc:	1affffd4 	bne	38d34 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x50>
         38de0:	e3a07001 	mov	r7, #1	; 0x1
         38de4:	eaffffd2 	b	38d34 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x50>
         38de8:	e5dd0000 	ldrb	r0, [sp]
         38dec:	e3300010 	teq	r0, #16	; 0x10
         38df0:	03a07002 	moveq	r7, #2	; 0x2
         38df4:	0affffce 	beq	38d34 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x50>
         38df8:	ea000002 	b	38e08 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x124>
         38dfc:	e5dd0000 	ldrb	r0, [sp]
         38e00:	e3300002 	teq	r0, #2	; 0x2
         38e04:	0a000025 	beq	38ea0 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x1bc>
         38e08:	e3a07000 	mov	r7, #0	; 0x0
         38e0c:	eaffffc8 	b	38d34 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x50>
         38e10:	e3390000 	teq	r9, #0	; 0x0
         38e14:	05dd0000 	ldreqb	r0, [sp]
         38e18:	03300010 	teqeq	r0, #16	; 0x10
         38e1c:	03a07004 	moveq	r7, #4	; 0x4
         38e20:	0a00000a 	beq	38e50 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x16c>
         38e24:	e28aa001 	add	sl, sl, #1	; 0x1
         38e28:	e15a0005 	cmp	sl, r5
         38e2c:	c3e08055 	mvngt	r8, #85	; 0x55
         38e30:	c2488c46 	subgt	r8, r8, #17920	; 0x4600
         38e34:	c3a07007 	movgt	r7, #7	; 0x7
         38e38:	ca000004 	bgt	38e50 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x16c>
         38e3c:	e5dd0000 	ldrb	r0, [sp]
         38e40:	e4c60001 	strb	r0, [r6], #1
         38e44:	e5dd1000 	ldrb	r1, [sp]
         38e48:	e28d0010 	add	r0, sp, #16	; 0x10
         38e4c:	eb0043a2 	bl	49cdc <TCRC16::ComputeCRC(unsigned char)>
         38e50:	e3a09000 	mov	r9, #0	; 0x0
         38e54:	e3370007 	teq	r7, #7	; 0x7
         38e58:	1affffb5 	bne	38d34 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x50>
         38e5c:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         38e60:	e1a00008 	mov	r0, r8
         38e64:	e583a000 	str	sl, [r3]
         38e68:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         38e6c:	e5dd0000 	ldrb	r0, [sp]
         38e70:	e3300010 	teq	r0, #16	; 0x10
         38e74:	03a07003 	moveq	r7, #3	; 0x3
         38e78:	03a09001 	moveq	r9, #1	; 0x1
         38e7c:	0affffac 	beq	38d34 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x50>
         38e80:	e5dd0000 	ldrb	r0, [sp]
         38e84:	e3300003 	teq	r0, #3	; 0x3
         38e88:	1a000004 	bne	38ea0 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x1bc>
         38e8c:	e5dd1000 	ldrb	r1, [sp]
         38e90:	e28d0010 	add	r0, sp, #16	; 0x10
         38e94:	eb004390 	bl	49cdc <TCRC16::ComputeCRC(unsigned char)>
         38e98:	e3a07005 	mov	r7, #5	; 0x5
         38e9c:	eaffffa4 	b	38d34 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x50>
         38ea0:	e3a07003 	mov	r7, #3	; 0x3
         38ea4:	eaffffa2 	b	38d34 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x50>
         38ea8:	e28d0010 	add	r0, sp, #16	; 0x10
         38eac:	eb0043df 	bl	49e30 <TCRC16::Get(void)>
         38eb0:	e5d01001 	ldrb	r1, [r0, #1]
         38eb4:	e5dd0000 	ldrb	r0, [sp]
         38eb8:	e1310000 	teq	r1, r0
         38ebc:	03a07006 	moveq	r7, #6	; 0x6
         38ec0:	0affff9b 	beq	38d34 <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x50>
         38ec4:	e3e08053 	mvn	r8, #83	; 0x53
         38ec8:	e2488c46 	sub	r8, r8, #17920	; 0x4600
         38ecc:	eaffffe2 	b	38e5c <TAsyncDebugLink::ReadDebugFrame(unsigned char *, long, long *, unsigned long)+0x178>
    */
}

/**
 * Symbol: TAsyncDebugLink::EnbIntOnNextRxC(void)
 * Address: 00038ed0
 */
TAsyncDebugLink::EnbIntOnNextRxC(void) {
    /*
         38ed0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         38ed4:	e3a02001 	mov	r2, #1	; 0x1
         38ed8:	e3a01040 	mov	r1, #64	; 0x40
         38edc:	ea0d2f79 	b	384cc8 <TSerialChip::SetIntSourceEnable(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TAsyncDebugLink::PollByte(void)
 * Address: 00038ee0
 */
TAsyncDebugLink::PollByte(void) {
    /*
         38ee0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         38ee4:	ea0d2f2c 	b	384b9c <TSerialChip::RxBufFull(void)>
    */
}

/**
 * Symbol: ClassInfo__15TAsyncDebugLinkSFv
 * Address: 00384f3c
 */
void TAsyncDebugLink::ClassInfo() {
    /*
        384f3c:	e24f0044 	sub	r0, pc, #68	; 0x44
        384f40:	e1a0f00e 	mov	pc, lr
        384f44:	e3a00000 	mov	r0, #0	; 0x0
        384f48:	e1a0f00e 	mov	pc, lr
        384f4c:	54417379 	strplb	r7, [r1], -#889
        384f50:	6e634465 	cdpvs	4, 6, cr4, cr3, cr5, {3}
        384f54:	6275674c 	rsbvss	r6, r5, #19922944	; 0x1300000
        384f58:	696e6b00 	stmvsdb	lr!, {r8, r9, fp, sp, lr}^
        384f5c:	54536572 	ldrplb	r6, [r3], -#1394
        384f60:	69616c44 	stmvsdb	r1!, {r2, r6, sl, fp, sp, lr}^
        384f64:	65627567 	strvsb	r7, [r2, -#1383]!
        384f68:	4c696e6b 	stcmil	14, cr6, [r9], -#428
        384f74:	eafffff0 	b	384f3c <ClassInfo__15TAsyncDebugLinkSFv>
        384f78:	ea5b7882 	b	1a63188 <TAsyncDebugLink::$New(void)>
        384f7c:	ea5b746e 	b	1a6213c <TAsyncDebugLink::$Delete(void)>
        384f80:	ea5b7ca8 	b	1a64228 <TAsyncDebugLink::$Install(unsigned long, unsigned long, void *, long (*)(void *))>
        384f84:	ea5b7887 	b	1a631a8 <TAsyncDebugLink::$Remove(void)>
        384f88:	ea5b7ca9 	b	1a64234 <TAsyncDebugLink::$WriteDebugFrame(unsigned char *, long, unsigned long)>
        384f8c:	ea5b7891 	b	1a631d8 <TAsyncDebugLink::$WriteDebugFrame(unsigned char *, long)>
        384f90:	ea5b7881 	b	1a6319c <TAsyncDebugLink::$ReadDebugFrame(unsigned char *, long, long *, unsigned long)>
        384f94:	ea5b787d 	b	1a63190 <TAsyncDebugLink::$PollByte(void)>
        384f98:	ea5b7469 	b	1a62144 <TAsyncDebugLink::$EnbIntOnNextRxC(void)>
        384f9c:	eaf2ce53 	b	388f0 <TAsyncDebugLink::GetSerialChipPtr(void)>
        384fa0:	ea5b7ca4 	b	1a64238 <TAsyncDebugLink::$PowerCycle(unsigned char)>
        384fa4:	00000000 	andeq	r0, r0, r0
        384fa8:	00000048 	andeq	r0, r0, r8, asr #32
        384fac:	00000056 	andeq	r0, r0, r6, asr r0
        384fb0:	00000063 	andeq	r0, r0, r3, rrx
        384fb4:	00000060 	andeq	r0, r0, r0, rrx
        384fb8:	00000090 	muleq	r0, r0, r0
        384fbc:	eaf557ca 	b	daeec <Sizeof__17TGeoPortDebugLinkSFv>
        384fc8:	ea5b9138 	b	1a694b0 <TGeoPortDebugLink::$New(void)>
        384fcc:	ea5b9139 	b	1a694b8 <TGeoPortDebugLink::$Delete(void)>
        384fdc:	ea000001 	b	384fe8 <ClassInfo__17TGeoPortDebugLinkSFv+0x8>
    */
}

