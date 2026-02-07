#include "include/TADSP.h"

/**
 * Symbol: TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)
 * Address: 002a8860
 */
TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *) {
    /*
        2a8860:	e1a0c00d 	mov	ip, sp
        2a8864:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2a8868:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a886c:	e1a05000 	mov	r5, r0
        2a8870:	e1a04001 	mov	r4, r1
        2a8874:	e1a06002 	mov	r6, r2
        2a8878:	e5927014 	ldr	r7, [r2, #20]	; fField20
        2a887c:	e2820028 	add	r0, r2, #40	; 0x28
        2a8880:	e1a09000 	mov	r9, r0
        2a8884:	e5d00001 	ldrb	r0, [r0, #1]
        2a8888:	e3a0a000 	mov	sl, #0	; 0x0
        2a888c:	e3300000 	teq	r0, #0	; 0x0
        2a8890:	1a000009 	bne	2a88bc <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0x5c>
        2a8894:	e56da004 	strb	sl, [sp, -#4]!
        2a8898:	e1a0000d 	mov	r0, sp
        2a889c:	e59f105c 	ldr	r1, [pc, #5c]	; 2a8900 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0xa0>
        2a88a0:	eb5f5580 	bl	1a7dea8 <$OpenSocket(unsigned char &, unsigned long)>
        2a88a4:	e1b08000 	movs	r8, r0
        2a88a8:	128dd004 	addne	sp, sp, #4	; 0x4
        2a88ac:	1a000040 	bne	2a89b4 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0x154>
        2a88b0:	e5dd1000 	ldrb	r1, [sp]
        2a88b4:	e5c91001 	strb	r1, [r9, #1]
        2a88b8:	e28dd004 	add	sp, sp, #4	; 0x4
        2a88bc:	e1a00005 	mov	r0, r5
        2a88c0:	e5961020 	ldr	r1, [r6, #32]	; fField32
        2a88c4:	eb5f5168 	bl	1a7ce6c <TADSP::$NewConnection(unsigned long)>
        2a88c8:	e1b05000 	movs	r5, r0
        2a88cc:	03a08f67 	moveq	r8, #412	; 0x19c
        2a88d0:	02488b0d 	subeq	r8, r8, #13312	; 0x3400
        2a88d4:	0a000034 	beq	2a89ac <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0x14c>
        2a88d8:	e3a00002 	mov	r0, #2	; 0x2
        2a88dc:	e3570004 	cmp	r7, #4	; 0x4
        2a88e0:	908ff107 	addls	pc, pc, r7, lsl #2
        2a88e4:	ea00002f 	b	2a89a8 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0x148>
        2a88e8:	ea00002e 	b	2a89a8 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0x148>
        2a88ec:	ea000004 	b	2a8904 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0xa4>
        2a88f0:	ea000005 	b	2a890c <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0xac>
        2a88f4:	ea000006 	b	2a8914 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0xb4>
        2a88f8:	e3a01004 	mov	r1, #4	; 0x4
        2a88fc:	ea000005 	b	2a8918 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0xb8>
        2a8900:	61647370 	cmnvs	r4, r0, ror r3
        2a8904:	e5c5001d 	strb	r0, [r5, #29]	; fField29
        2a8908:	ea000003 	b	2a891c <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0xbc>
        2a890c:	e3a00001 	mov	r0, #1	; 0x1
        2a8910:	eafffffb 	b	2a8904 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0xa4>
        2a8914:	e3a01003 	mov	r1, #3	; 0x3
        2a8918:	e5c5101d 	strb	r1, [r5, #29]	; fField29
        2a891c:	e5c5001c 	strb	r0, [r5, #28]	; fField28
        2a8920:	e285000c 	add	r0, r5, #12	; 0xc
        2a8924:	e8945018 	ldmia	r4, {r3, r4, ip, lr}
        2a8928:	e8805018 	stmia	r0, {r3, r4, ip, lr}
        2a892c:	e596000c 	ldr	r0, [r6, #12]	; fField12
        2a8930:	e5850000 	str	r0, [r5]
        2a8934:	e2850004 	add	r0, r5, #4	; 0x4
        2a8938:	e5961018 	ldr	r1, [r6, #24]	; fField24
        2a893c:	eb649fc1 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        2a8940:	e1a01009 	mov	r1, r9
        2a8944:	e2850e16 	add	r0, r5, #352	; 0x160
        2a8948:	eb652c18 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        2a894c:	e2861034 	add	r1, r6, #52	; 0x34
        2a8950:	e2850f55 	add	r0, r5, #340	; 0x154
        2a8954:	eb652c15 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        2a8958:	e5960048 	ldr	r0, [r6, #72]
        2a895c:	e585017c 	str	r0, [r5, #380]	; fField380
        2a8960:	e596004c 	ldr	r0, [r6, #76]
        2a8964:	e5850174 	str	r0, [r5, #372]	; fField372
        2a8968:	e5b6000c 	ldr	r0, [r6, #12]!	; fField12
        2a896c:	e3370003 	teq	r7, #3	; 0x3
        2a8970:	e585018c 	str	r0, [r5, #396]	; fField396
        2a8974:	13370001 	teqne	r7, #1	; 0x1
        2a8978:	1a000010 	bne	2a89c0 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0x160>
        2a897c:	eb64ac14 	bl	1bd39d4 <$GetGlobals>
        2a8980:	eb64f256 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
        2a8984:	e3370001 	teq	r7, #1	; 0x1
        2a8988:	e5950020 	ldr	r0, [r5, #32]	; fField32
        2a898c:	13a01008 	movne	r1, #8	; 0x8
        2a8990:	03a01002 	moveq	r1, #2	; 0x2
        2a8994:	e1800001 	orr	r0, r0, r1
        2a8998:	e5850020 	str	r0, [r5, #32]	; fField32
        2a899c:	e1a00005 	mov	r0, r5
        2a89a0:	eb5f3c7b 	bl	1a77b94 <TADSPConnection::$CheckSend(void)>
        2a89a4:	ea000009 	b	2a89d0 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0x170>
        2a89a8:	e59f800c 	ldr	r8, [pc, #c]	; 2a89bc <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0x15c>
        2a89ac:	e5d90001 	ldrb	r0, [r9, #1]
        2a89b0:	eb5f3c83 	bl	1a77bc4 <$CloseSocket(unsigned char)>
        2a89b4:	e1a00008 	mov	r0, r8
        2a89b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2a89bc:	ffffcd9b 	swinv	0x00ffcd9b
        2a89c0:	e3370002 	teq	r7, #2	; 0x2
        2a89c4:	1a000001 	bne	2a89d0 <TADSP::DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)+0x170>
        2a89c8:	eb64ac01 	bl	1bd39d4 <$GetGlobals>
        2a89cc:	eb64f243 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
        2a89d0:	e1a0000a 	mov	r0, sl
        2a89d4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **)
 * Address: 002a89d8
 */
TADSP::OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **) {
    /*
        2a89d8:	e1a0c00d 	mov	ip, sp
        2a89dc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2a89e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a89e4:	e1a06000 	mov	r6, r0
        2a89e8:	e1a05001 	mov	r5, r1
        2a89ec:	e1a04002 	mov	r4, r2
        2a89f0:	e1a07003 	mov	r7, r3
        2a89f4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2a89f8:	e3a08000 	mov	r8, #0	; 0x0
        2a89fc:	e5910028 	ldr	r0, [r1, #40]	; fField40
        2a8a00:	e1a09000 	mov	r9, r0
        2a8a04:	e590002c 	ldr	r0, [r0, #44]	; fField44
        2a8a08:	e3300008 	teq	r0, #8	; 0x8
        2a8a0c:	13a0809a 	movne	r8, #154	; 0x9a
        2a8a10:	12488c33 	subne	r8, r8, #13056	; 0x3300
        2a8a14:	1a00003b 	bne	2a8b08 <TADSP::OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x130>
        2a8a18:	e1a00009 	mov	r0, r9
        2a8a1c:	eb652bec 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        2a8a20:	e5b91028 	ldr	r1, [r9, #40]!	; fField40
        2a8a24:	e0800001 	add	r0, r0, r1
        2a8a28:	e28d1004 	add	r1, sp, #4	; 0x4
        2a8a2c:	e3a02008 	mov	r2, #8	; 0x8
        2a8a30:	eb64d947 	bl	1bdef54 <$BlockMove>
        2a8a34:	e5950028 	ldr	r0, [r5, #40]	; fField40
        2a8a38:	e590102c 	ldr	r1, [r0, #44]	; fField44
        2a8a3c:	e2411008 	sub	r1, r1, #8	; 0x8
        2a8a40:	e580102c 	str	r1, [r0, #44]	; fField44
        2a8a44:	e5901028 	ldr	r1, [r0, #40]	; fField40
        2a8a48:	e2811008 	add	r1, r1, #8	; 0x8
        2a8a4c:	e5a01028 	str	r1, [r0, #40]!	; fField40
        2a8a50:	e3a00c01 	mov	r0, #256	; 0x100
        2a8a54:	e59d1004 	ldr	r1, [sp, #4]
        2a8a58:	e1300821 	teq	r0, r1, lsr #16
        2a8a5c:	1a000023 	bne	2a8af0 <TADSP::OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x118>
        2a8a60:	e1a0300d 	mov	r3, sp
        2a8a64:	e92d0008 	stmdb	sp!, {r3}
        2a8a68:	e2852014 	add	r2, r5, #20	; 0x14
        2a8a6c:	e1a09002 	mov	r9, r2
        2a8a70:	e28d3008 	add	r3, sp, #8	; 0x8
        2a8a74:	e1a01004 	mov	r1, r4
        2a8a78:	e1a00006 	mov	r0, r6
        2a8a7c:	eb5f50f0 	bl	1a7ce44 <TADSP::$Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)>
        2a8a80:	e28dd004 	add	sp, sp, #4	; 0x4
        2a8a84:	e5870000 	str	r0, [r7]
        2a8a88:	e3300000 	teq	r0, #0	; 0x0
        2a8a8c:	1a00000f 	bne	2a8ad0 <TADSP::OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0xf8>
        2a8a90:	e3a0100f 	mov	r1, #15	; 0xf
        2a8a94:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2a8a98:	e0010c40 	and	r0, r1, r0, asr #24
        2a8a9c:	e3300001 	teq	r0, #1	; 0x1
        2a8aa0:	1a000018 	bne	2a8b08 <TADSP::OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x130>
        2a8aa4:	e5d51022 	ldrb	r1, [r5, #34]
        2a8aa8:	e1a00006 	mov	r0, r6
        2a8aac:	eb5f4482 	bl	1a79cbc <TADSP::$FindListener(unsigned char)>
        2a8ab0:	e5870000 	str	r0, [r7]
        2a8ab4:	e3300000 	teq	r0, #0	; 0x0
        2a8ab8:	0a000012 	beq	2a8b08 <TADSP::OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x130>
        2a8abc:	e1a02009 	mov	r2, r9
        2a8ac0:	e28d3004 	add	r3, sp, #4	; 0x4
        2a8ac4:	e1a01004 	mov	r1, r4
        2a8ac8:	eb5f54ec 	bl	1a7de80 <TADSPConnection::$NotifyListener(ADSPHeader *, TAddress *, ADSPOpenConnInfo *)>
        2a8acc:	ea00000c 	b	2a8b04 <TADSP::OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x12c>
        2a8ad0:	e28d3004 	add	r3, sp, #4	; 0x4
        2a8ad4:	e92d0008 	stmdb	sp!, {r3}
        2a8ad8:	e1a02009 	mov	r2, r9
        2a8adc:	e1a03004 	mov	r3, r4
        2a8ae0:	e59d1004 	ldr	r1, [sp, #4]
        2a8ae4:	eb5f446f 	bl	1a79ca8 <TADSPConnection::$ExecuteState(State *, TAddress *, ADSPHeader *, ADSPOpenConnInfo *)>
        2a8ae8:	e28dd004 	add	sp, sp, #4	; 0x4
        2a8aec:	ea000004 	b	2a8b04 <TADSP::OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x12c>
        2a8af0:	e28d3004 	add	r3, sp, #4	; 0x4
        2a8af4:	e1a02004 	mov	r2, r4
        2a8af8:	e1a01005 	mov	r1, r5
        2a8afc:	e1a00006 	mov	r0, r6
        2a8b00:	eb5f591c 	bl	1a7ef78 <TADSP::$SendDeny(TPacketMessage *, ADSPHeader *, ADSPOpenConnInfo *)>
        2a8b04:	e1a08000 	mov	r8, r0
        2a8b08:	e1a00008 	mov	r0, r8
        2a8b0c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::SendDeny(TPacketMessage *, ADSPHeader *, ADSPOpenConnInfo *)
 * Address: 002a8b10
 */
TADSP::SendDeny(TPacketMessage *, ADSPHeader *, ADSPOpenConnInfo *) {
    /*
        2a8b10:	e1a0c00d 	mov	ip, sp
        2a8b14:	e92dd81f 	stmdb	sp!, {r0, r1, r2, r3, r4, fp, ip, lr, pc}
        2a8b18:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a8b1c:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        2a8b20:	e28d0024 	add	r0, sp, #36	; 0x24
        2a8b24:	eb5f236e 	bl	1a718e4 <TWriteElement::$__ct(void)>
        2a8b28:	e28d000c 	add	r0, sp, #12	; 0xc
        2a8b2c:	eb5f236c 	bl	1a718e4 <TWriteElement::$__ct(void)>
        2a8b30:	e1a0000d 	mov	r0, sp
        2a8b34:	eb5f235c 	bl	1a718ac <TWriteChain::$__ct(void)>
        2a8b38:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2a8b3c:	e590100c 	ldr	r1, [r0, #12]	; fField12
        2a8b40:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        2a8b44:	e3811321 	orr	r1, r1, #-2080374784	; 0x84000000
        2a8b48:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        2a8b4c:	e24b1014 	sub	r1, fp, #20	; 0x14
        2a8b50:	e28d000c 	add	r0, sp, #12	; 0xc
        2a8b54:	e3a03002 	mov	r3, #2	; 0x2
        2a8b58:	e3a02008 	mov	r2, #8	; 0x8
        2a8b5c:	eb5f4c96 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        2a8b60:	e28d100c 	add	r1, sp, #12	; 0xc
        2a8b64:	e1a0000d 	mov	r0, sp
        2a8b68:	eb5f2fac 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        2a8b6c:	e24b1018 	sub	r1, fp, #24	; 0x18
        2a8b70:	e28d0024 	add	r0, sp, #36	; 0x24
        2a8b74:	e3a03002 	mov	r3, #2	; 0x2
        2a8b78:	e3a0200d 	mov	r2, #13	; 0xd
        2a8b7c:	eb5f4c8e 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        2a8b80:	e28d1024 	add	r1, sp, #36	; 0x24
        2a8b84:	e1a0000d 	mov	r0, sp
        2a8b88:	eb5f2fa4 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        2a8b8c:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        2a8b90:	e2800014 	add	r0, r0, #20	; 0x14
        2a8b94:	e1a0100d 	mov	r1, sp
        2a8b98:	e3a02007 	mov	r2, #7	; 0x7
        2a8b9c:	eb5f613e 	bl	1a8109c <$WriteSocket(TAddress *, TWriteChain *, unsigned char)>
        2a8ba0:	e1a04000 	mov	r4, r0
        2a8ba4:	e1a0000d 	mov	r0, sp
        2a8ba8:	eb5f401f 	bl	1a78c2c <TWriteChain::$Destroy(void)>
        2a8bac:	e28d000c 	add	r0, sp, #12	; 0xc
        2a8bb0:	e3a01000 	mov	r1, #0	; 0x0
        2a8bb4:	e1a0e00f 	mov	lr, pc
        2a8bb8:	e59df00c 	ldr	pc, [sp, #12]	; fField12
        2a8bbc:	e28d0024 	add	r0, sp, #36	; 0x24
        2a8bc0:	e3a01000 	mov	r1, #0	; 0x0
        2a8bc4:	e1a0e00f 	mov	lr, pc
        2a8bc8:	e59df024 	ldr	pc, [sp, #36]
        2a8bcc:	e1a00004 	mov	r0, r4
        2a8bd0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)
 * Address: 002a8bd4
 */
TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **) {
    /*
        2a8bd4:	e1a0c00d 	mov	ip, sp
        2a8bd8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2a8bdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a8be0:	e3a04000 	mov	r4, #0	; 0x0
        2a8be4:	e3a0c00f 	mov	ip, #15	; 0xf
        2a8be8:	e592e00c 	ldr	lr, [r2, #12]	; fField12
        2a8bec:	e00ccc4e 	and	ip, ip, lr, asr #24
        2a8bf0:	e35c0008 	cmp	ip, #8	; 0x8
        2a8bf4:	908ff10c 	addls	pc, pc, ip, lsl #2
        2a8bf8:	ea000023 	b	2a8c8c <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0xb8>
        2a8bfc:	ea00000b 	b	2a8c30 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x5c>
        2a8c00:	ea00000f 	b	2a8c44 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x70>
        2a8c04:	ea00000e 	b	2a8c44 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x70>
        2a8c08:	ea00000d 	b	2a8c44 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x70>
        2a8c0c:	ea00000c 	b	2a8c44 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x70>
        2a8c10:	ea00000e 	b	2a8c50 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x7c>
        2a8c14:	ea000012 	b	2a8c64 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0x90>
        2a8c18:	ea000016 	b	2a8c78 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0xa4>
        2a8c1c:	e5930000 	ldr	r0, [r3]
        2a8c20:	e3300000 	teq	r0, #0	; 0x0
        2a8c24:	11a01002 	movne	r1, r2
        2a8c28:	1b5f71ab 	blne	1a852dc <TADSPConnection::$ResetTrans(ADSPHeader *)>
        2a8c2c:	ea000018 	b	2a8c94 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0xc0>
        2a8c30:	e5930000 	ldr	r0, [r3]
        2a8c34:	e3300000 	teq	r0, #0	; 0x0
        2a8c38:	11a01002 	movne	r1, r2
        2a8c3c:	1b5f7191 	blne	1a85288 <TADSPConnection::$ProcessAck(ADSPHeader *)>
        2a8c40:	ea000013 	b	2a8c94 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0xc0>
        2a8c44:	eb5f5494 	bl	1a7de9c <TADSP::$OpenConnection(TPacketMessage *, ADSPHeader *, TADSPConnection **)>
        2a8c48:	e1a04000 	mov	r4, r0
        2a8c4c:	ea000010 	b	2a8c94 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0xc0>
        2a8c50:	e5930000 	ldr	r0, [r3]
        2a8c54:	e3300000 	teq	r0, #0	; 0x0
        2a8c58:	11a01002 	movne	r1, r2
        2a8c5c:	1b5f6544 	blne	1a82174 <TADSPConnection::$DoCloseAdvice(ADSPHeader *)>
        2a8c60:	ea00000b 	b	2a8c94 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0xc0>
        2a8c64:	e5930000 	ldr	r0, [r3]
        2a8c68:	e3300000 	teq	r0, #0	; 0x0
        2a8c6c:	11a01002 	movne	r1, r2
        2a8c70:	1b5f4416 	blne	1a79cd0 <TADSPConnection::$ForwdReset(ADSPHeader *)>
        2a8c74:	ea000006 	b	2a8c94 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0xc0>
        2a8c78:	e5930000 	ldr	r0, [r3]
        2a8c7c:	e3300000 	teq	r0, #0	; 0x0
        2a8c80:	11a01002 	movne	r1, r2
        2a8c84:	1b5f4412 	blne	1a79cd4 <TADSPConnection::$ForwdResetAck(ADSPHeader *)>
        2a8c88:	ea000001 	b	2a8c94 <TADSP::ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)+0xc0>
        2a8c8c:	e3a04099 	mov	r4, #153	; 0x99
        2a8c90:	e2444c33 	sub	r4, r4, #13056	; 0x3300
        2a8c94:	e1a00004 	mov	r0, r4
        2a8c98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::TimerNotify(TAppleTalkMessage *)
 * Address: 002a8c9c
 */
TADSP::TimerNotify(TAppleTalkMessage *) {
    /*
        2a8c9c:	e1a0c00d 	mov	ip, sp
        2a8ca0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2a8ca4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a8ca8:	e1a04001 	mov	r4, r1
        2a8cac:	e591101c 	ldr	r1, [r1, #28]	; fField28
        2a8cb0:	eb5f5065 	bl	1a7ce4c <TADSP::$MatchConnection(unsigned long)>
        2a8cb4:	e3300000 	teq	r0, #0	; 0x0
        2a8cb8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2a8cbc:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2a8cc0:	e2411008 	sub	r1, r1, #8	; 0x8
        2a8cc4:	e3510004 	cmp	r1, #4	; 0x4
        2a8cc8:	908ff101 	addls	pc, pc, r1, lsl #2
        2a8ccc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2a8cd0:	ea000005 	b	2a8cec <TADSP::TimerNotify(TAppleTalkMessage *)+0x50>
        2a8cd4:	ea000007 	b	2a8cf8 <TADSP::TimerNotify(TAppleTalkMessage *)+0x5c>
        2a8cd8:	ea000009 	b	2a8d04 <TADSP::TimerNotify(TAppleTalkMessage *)+0x68>
        2a8cdc:	ea00000b 	b	2a8d10 <TADSP::TimerNotify(TAppleTalkMessage *)+0x74>
        2a8ce0:	e1a01004 	mov	r1, r4
        2a8ce4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2a8ce8:	ea5f589a 	b	1a7ef58 <TADSPConnection::$ResetExpired(TTimerMessage *)>
        2a8cec:	e1a01004 	mov	r1, r4
        2a8cf0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2a8cf4:	ea5f43f4 	b	1a79ccc <TADSPConnection::$FlushExpired(TTimerMessage *)>
        2a8cf8:	e1a01004 	mov	r1, r4
        2a8cfc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2a8d00:	ea5f5899 	b	1a7ef6c <TADSPConnection::$RetryExpired(TTimerMessage *)>
        2a8d04:	e1a01004 	mov	r1, r4
        2a8d08:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2a8d0c:	ea5f546d 	b	1a7dec8 <TADSPConnection::$ProbeExpired(TTimerMessage *)>
        2a8d10:	e1a01004 	mov	r1, r4
        2a8d14:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2a8d18:	ea5f378d 	b	1a76b54 <TADSPConnection::$AttnExpired(TTimerMessage *)>
    */
}

/**
 * Symbol: TADSP::Read(TAppleTalkMessage *)
 * Address: 002a8d1c
 */
TADSP::Read(TAppleTalkMessage *) {
    /*
        2a8d1c:	e1a0c00d 	mov	ip, sp
        2a8d20:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2a8d24:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a8d28:	e1a04000 	mov	r4, r0
        2a8d2c:	e24dd014 	sub	sp, sp, #20	; 0x14
        2a8d30:	e3a06000 	mov	r6, #0	; 0x0
        2a8d34:	e1a05001 	mov	r5, r1
        2a8d38:	e58d6010 	str	r6, [sp, #16]
        2a8d3c:	e5d10020 	ldrb	r0, [r1, #32]	; fField32
        2a8d40:	e3300007 	teq	r0, #7	; 0x7
        2a8d44:	1a000042 	bne	2a8e54 <TADSP::Read(TAppleTalkMessage *)+0x138>
        2a8d48:	e5950028 	ldr	r0, [r5, #40]	; fField40
        2a8d4c:	e1a07000 	mov	r7, r0
        2a8d50:	e590002c 	ldr	r0, [r0, #44]	; fField44
        2a8d54:	e350000d 	cmp	r0, #13	; 0xd
        2a8d58:	3a00003d 	bcc	2a8e54 <TADSP::Read(TAppleTalkMessage *)+0x138>
        2a8d5c:	e250cf92 	subs	ip, r0, #584	; 0x248
        2a8d60:	235c0001 	cmpcs	ip, #1	; 0x1
        2a8d64:	8a00003a 	bhi	2a8e54 <TADSP::Read(TAppleTalkMessage *)+0x138>
        2a8d68:	e1a00007 	mov	r0, r7
        2a8d6c:	eb652b18 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        2a8d70:	e5b71028 	ldr	r1, [r7, #40]!	; fField40
        2a8d74:	e0800001 	add	r0, r0, r1
        2a8d78:	e1a0100d 	mov	r1, sp
        2a8d7c:	e3a0200d 	mov	r2, #13	; 0xd
        2a8d80:	eb64d873 	bl	1bdef54 <$BlockMove>
        2a8d84:	e5950028 	ldr	r0, [r5, #40]	; fField40
        2a8d88:	e590102c 	ldr	r1, [r0, #44]	; fField44
        2a8d8c:	e241100d 	sub	r1, r1, #13	; 0xd
        2a8d90:	e580102c 	str	r1, [r0, #44]	; fField44
        2a8d94:	e5901028 	ldr	r1, [r0, #40]	; fField40
        2a8d98:	e281100d 	add	r1, r1, #13	; 0xd
        2a8d9c:	e2852014 	add	r2, r5, #20	; 0x14
        2a8da0:	e5a01028 	str	r1, [r0, #40]!	; fField40
        2a8da4:	e1a0100d 	mov	r1, sp
        2a8da8:	e1a00004 	mov	r0, r4
        2a8dac:	eb5f43c3 	bl	1a79cc0 <TADSP::$FindSender(ADSPHeader *, TAddress *)>
        2a8db0:	e58d0010 	str	r0, [sp, #16]
        2a8db4:	e3300000 	teq	r0, #0	; 0x0
        2a8db8:	1b5f5868 	blne	1a7ef60 <TADSPConnection::$ResetProbeTimer(void)>
        2a8dbc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2a8dc0:	e3100201 	tst	r0, #268435456	; 0x10000000
        2a8dc4:	0a000006 	beq	2a8de4 <TADSP::Read(TAppleTalkMessage *)+0xc8>
        2a8dc8:	e59d0010 	ldr	r0, [sp, #16]
        2a8dcc:	e3300000 	teq	r0, #0	; 0x0
        2a8dd0:	0a000021 	beq	2a8e5c <TADSP::Read(TAppleTalkMessage *)+0x140>
        2a8dd4:	e1a0200d 	mov	r2, sp
        2a8dd8:	e1a01005 	mov	r1, r5
        2a8ddc:	eb5f5848 	bl	1a7ef04 <TADSPConnection::$ReadAttention(TPacketMessage *, ADSPHeader *)>
        2a8de0:	ea00000e 	b	2a8e20 <TADSP::Read(TAppleTalkMessage *)+0x104>
        2a8de4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2a8de8:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        2a8dec:	0a000005 	beq	2a8e08 <TADSP::Read(TAppleTalkMessage *)+0xec>
        2a8df0:	e28d3010 	add	r3, sp, #16	; 0x10
        2a8df4:	e1a0200d 	mov	r2, sp
        2a8df8:	e1a01005 	mov	r1, r5
        2a8dfc:	e1a00004 	mov	r0, r4
        2a8e00:	eb5f5840 	bl	1a7ef08 <TADSP::$ReadControl(TPacketMessage *, ADSPHeader *, TADSPConnection **)>
        2a8e04:	ea000005 	b	2a8e20 <TADSP::Read(TAppleTalkMessage *)+0x104>
        2a8e08:	e59d0010 	ldr	r0, [sp, #16]
        2a8e0c:	e3300000 	teq	r0, #0	; 0x0
        2a8e10:	0a000011 	beq	2a8e5c <TADSP::Read(TAppleTalkMessage *)+0x140>
        2a8e14:	e1a0200d 	mov	r2, sp
        2a8e18:	e1a01005 	mov	r1, r5
        2a8e1c:	eb5f542e 	bl	1a7dedc <TADSPConnection::$Read(TPacketMessage *, ADSPHeader *)>
        2a8e20:	e1b06000 	movs	r6, r0
        2a8e24:	1a00000c 	bne	2a8e5c <TADSP::Read(TAppleTalkMessage *)+0x140>
        2a8e28:	e59d0010 	ldr	r0, [sp, #16]
        2a8e2c:	e3300000 	teq	r0, #0	; 0x0
        2a8e30:	0a000009 	beq	2a8e5c <TADSP::Read(TAppleTalkMessage *)+0x140>
        2a8e34:	e5901048 	ldr	r1, [r0, #72]
        2a8e38:	e3110102 	tst	r1, #-2147483648	; 0x80000000
        2a8e3c:	1b5f3b54 	blne	1a77b94 <TADSPConnection::$CheckSend(void)>
        2a8e40:	e59d0010 	ldr	r0, [sp, #16]
        2a8e44:	e5901048 	ldr	r1, [r0, #72]
        2a8e48:	e3110502 	tst	r1, #8388608	; 0x800000
        2a8e4c:	1b5f7535 	blne	1a86328 <TADSPConnection::$UpDateClient(void)>
        2a8e50:	ea000001 	b	2a8e5c <TADSP::Read(TAppleTalkMessage *)+0x140>
        2a8e54:	e3a0609a 	mov	r6, #154	; 0x9a
        2a8e58:	e2466c33 	sub	r6, r6, #13056	; 0x3300
        2a8e5c:	e1a00006 	mov	r0, r6
        2a8e60:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::DoCloseConnection(TAppleTalkMessage *)
 * Address: 002a8e64
 */
TADSP::DoCloseConnection(TAppleTalkMessage *) {
    /*
        2a8e64:	e1a0c00d 	mov	ip, sp
        2a8e68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a8e6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a8e70:	e1a04000 	mov	r4, r0
        2a8e74:	e24dd004 	sub	sp, sp, #4	; 0x4
        2a8e78:	e5b10014 	ldr	r0, [r1, #20]!	; fField20
        2a8e7c:	e5840028 	str	r0, [r4, #40]	; fField40
        2a8e80:	e284101c 	add	r1, r4, #28	; 0x1c
        2a8e84:	e1a0200d 	mov	r2, sp
        2a8e88:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2a8e8c:	eb651201 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        2a8e90:	e1b05000 	movs	r5, r0
        2a8e94:	0a00000d 	beq	2a8ed0 <TADSP::DoCloseConnection(TAppleTalkMessage *)+0x6c>
        2a8e98:	e5950020 	ldr	r0, [r5, #32]	; fField32
        2a8e9c:	e3800020 	orr	r0, r0, #32	; 0x20
        2a8ea0:	e5850020 	str	r0, [r5, #32]	; fField32
        2a8ea4:	e1a00005 	mov	r0, r5
        2a8ea8:	eb5f3b39 	bl	1a77b94 <TADSPConnection::$CheckSend(void)>
        2a8eac:	e5d50161 	ldrb	r0, [r5, #353]	; fField353
        2a8eb0:	eb5f3b43 	bl	1a77bc4 <$CloseSocket(unsigned char)>
        2a8eb4:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
        2a8eb8:	e3a02001 	mov	r2, #1	; 0x1
        2a8ebc:	e59d1000 	ldr	r1, [sp]
        2a8ec0:	eb650ddb 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        2a8ec4:	e1a00005 	mov	r0, r5
        2a8ec8:	e3a01001 	mov	r1, #1	; 0x1
        2a8ecc:	eb5f2ab6 	bl	1a739ac <TADSPConnection::$__dt(void)>
        2a8ed0:	e3a00000 	mov	r0, #0	; 0x0
        2a8ed4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)
 * Address: 002a8ed8
 */
TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *) {
    /*
        2a8ed8:	e1a0c00d 	mov	ip, sp
        2a8edc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2a8ee0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a8ee4:	e1a05001 	mov	r5, r1
        2a8ee8:	e1a04003 	mov	r4, r3
        2a8eec:	e5931010 	ldr	r1, [r3, #16]
        2a8ef0:	e3510b02 	cmp	r1, #2048	; 0x800
        2a8ef4:	0a00002f 	beq	2a8fb8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xe0>
        2a8ef8:	ca000008 	bgt	2a8f20 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x48>
        2a8efc:	e3310002 	teq	r1, #2	; 0x2
        2a8f00:	0a000032 	beq	2a8fd0 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xf8>
        2a8f04:	e3310006 	teq	r1, #6	; 0x6
        2a8f08:	0a000020 	beq	2a8f90 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xb8>
        2a8f0c:	e3310064 	teq	r1, #100	; 0x64
        2a8f10:	1a000032 	bne	2a8fe0 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x108>
        2a8f14:	e1a01004 	mov	r1, r4
        2a8f18:	eb5f5c49 	bl	1a80044 <TADSP::$TimerNotify(TAppleTalkMessage *)>
        2a8f1c:	ea000031 	b	2a8fe8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x110>
        2a8f20:	e241cb02 	sub	ip, r1, #2048	; 0x800
        2a8f24:	e33c0001 	teq	ip, #1	; 0x1
        2a8f28:	0a00001b 	beq	2a8f9c <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xc4>
        2a8f2c:	e241cb02 	sub	ip, r1, #2048	; 0x800
        2a8f30:	e33c0002 	teq	ip, #2	; 0x2
        2a8f34:	0a00001b 	beq	2a8fa8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xd0>
        2a8f38:	e241cb02 	sub	ip, r1, #2048	; 0x800
        2a8f3c:	e33c0004 	teq	ip, #4	; 0x4
        2a8f40:	1a000026 	bne	2a8fe0 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x108>
        2a8f44:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2a8f48:	eb5f4fbf 	bl	1a7ce4c <TADSP::$MatchConnection(unsigned long)>
        2a8f4c:	e1b07000 	movs	r7, r0
        2a8f50:	0a000024 	beq	2a8fe8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x110>
        2a8f54:	eb64aa9e 	bl	1bd39d4 <$GetGlobals>
        2a8f58:	eb64f0e7 	bl	1be52fc <TAppWorld::$AEGetMsgType(void)>
        2a8f5c:	e3300402 	teq	r0, #33554432	; 0x2000000
        2a8f60:	0a000020 	beq	2a8fe8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x110>
        2a8f64:	e1a02004 	mov	r2, r4
        2a8f68:	e1a01005 	mov	r1, r5
        2a8f6c:	e1a00007 	mov	r0, r7
        2a8f70:	eb5f5c3b 	bl	1a80064 <TADSPConnection::$UpdateConnection(TUMsgToken *, TAppleTalkMessage *)>
        2a8f74:	e1b06000 	movs	r6, r0
        2a8f78:	1a00001a 	bne	2a8fe8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x110>
        2a8f7c:	e5970048 	ldr	r0, [r7, #72]
        2a8f80:	e3100502 	tst	r0, #8388608	; 0x800000
        2a8f84:	11a00007 	movne	r0, r7
        2a8f88:	1b5f74e6 	blne	1a86328 <TADSPConnection::$UpDateClient(void)>
        2a8f8c:	ea000015 	b	2a8fe8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x110>
        2a8f90:	e1a01004 	mov	r1, r4
        2a8f94:	eb5f53d6 	bl	1a7def4 <TADSP::$Read(TAppleTalkMessage *)>
        2a8f98:	ea00000e 	b	2a8fd8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x100>
        2a8f9c:	e1a01004 	mov	r1, r4
        2a8fa0:	eb5f3f2c 	bl	1a78c58 <TADSP::$DoCloseConnection(TAppleTalkMessage *)>
        2a8fa4:	ea00000b 	b	2a8fd8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x100>
        2a8fa8:	e1a02004 	mov	r2, r4
        2a8fac:	e1a01005 	mov	r1, r5
        2a8fb0:	eb5f4336 	bl	1a79c90 <TADSP::$DoOpenConnection(TUMsgToken *, TAppleTalkMessage *)>
        2a8fb4:	ea000007 	b	2a8fd8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x100>
        2a8fb8:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2a8fbc:	eb5f4fa2 	bl	1a7ce4c <TADSP::$MatchConnection(unsigned long)>
        2a8fc0:	e3300000 	teq	r0, #0	; 0x0
        2a8fc4:	11a01004 	movne	r1, r4
        2a8fc8:	1b5f57d1 	blne	1a7ef14 <TADSPConnection::$RecvAttnComplete(TATAsyncMsg *)>
        2a8fcc:	ea000005 	b	2a8fe8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x110>
        2a8fd0:	e1a01004 	mov	r1, r4
        2a8fd4:	eb5f644b 	bl	1a82108 <TADSP::$Cancel(TAppleTalkMessage *)>
        2a8fd8:	e1a06000 	mov	r6, r0
        2a8fdc:	ea000001 	b	2a8fe8 <TADSP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x110>
        2a8fe0:	e3a0601a 	mov	r6, #26	; 0x1a
        2a8fe4:	e2466c2f 	sub	r6, r6, #12032	; 0x2f00
        2a8fe8:	e1a00006 	mov	r0, r6
        2a8fec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 002a8ff0
 */
TADSP::ATLKAttachLink(TAppleTalkMessage *) {
    /*
        2a8ff0:	e3a00000 	mov	r0, #0	; 0x0
        2a8ff4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSP::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 002a8ff8
 */
TADSP::ATLKDetachLink(TAppleTalkMessage *) {
    /*
        2a8ff8:	e3a00000 	mov	r0, #0	; 0x0
        2a8ffc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSP::__ct(void)
 * Address: 002a9000
 */
TADSP::TADSP(void) {
    /*
        2a9000:	e1a0c00d 	mov	ip, sp
        2a9004:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a9008:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a900c:	e1b04000 	movs	r4, r0
        2a9010:	1a000005 	bne	2a902c <TADSP::__ct(void)+0x2c>
        2a9014:	e3a000b0 	mov	r0, #176	; 0xb0
        2a9018:	eb6495c6 	bl	1bce738 <$__nw(unsigned int)>
        2a901c:	e1b04000 	movs	r4, r0
        2a9020:	1a000001 	bne	2a902c <TADSP::__ct(void)+0x2c>
        2a9024:	e1a00004 	mov	r0, r4
        2a9028:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2a902c:	e1a00004 	mov	r0, r4
        2a9030:	eb5f221e 	bl	1a718b0 <TStackObject::$__ct(void)>
        2a9034:	e284001c 	add	r0, r4, #28	; 0x1c
        2a9038:	eb5f2220 	bl	1a718c0 <TConnComparer::$__ct(void)>
        2a903c:	e59f019c 	ldr	r0, [pc, #19c]	; 2a91e0 <TADSP::__ct(void)+0x1e0>
        2a9040:	e5840000 	str	r0, [r4]
        2a9044:	e3a00051 	mov	r0, #81	; 0x51
        2a9048:	e5c40030 	strb	r0, [r4, #48]
        2a904c:	e3a0e00b 	mov	lr, #11	; 0xb
        2a9050:	e5c4e031 	strb	lr, [r4, #49]
        2a9054:	e3a05000 	mov	r5, #0	; 0x0
        2a9058:	e5c45032 	strb	r5, [r4, #50]
        2a905c:	e3a01002 	mov	r1, #2	; 0x2
        2a9060:	e5c41033 	strb	r1, [r4, #51]
        2a9064:	e5c41034 	strb	r1, [r4, #52]
        2a9068:	e3a00080 	mov	r0, #128	; 0x80
        2a906c:	e5c40038 	strb	r0, [r4, #56]
        2a9070:	e5c45039 	strb	r5, [r4, #57]
        2a9074:	e5c4503a 	strb	r5, [r4, #58]
        2a9078:	e5c4503b 	strb	r5, [r4, #59]
        2a907c:	e5c4503c 	strb	r5, [r4, #60]
        2a9080:	e3a0201a 	mov	r2, #26	; 0x1a
        2a9084:	e5c42040 	strb	r2, [r4, #64]
        2a9088:	e3a02008 	mov	r2, #8	; 0x8
        2a908c:	e5c42041 	strb	r2, [r4, #65]
        2a9090:	e5c42042 	strb	r2, [r4, #66]
        2a9094:	e3a02003 	mov	r2, #3	; 0x3
        2a9098:	e5c42043 	strb	r2, [r4, #67]
        2a909c:	e5c41044 	strb	r1, [r4, #68]
        2a90a0:	e5c40048 	strb	r0, [r4, #72]
        2a90a4:	e5c45049 	strb	r5, [r4, #73]
        2a90a8:	e5c4504a 	strb	r5, [r4, #74]
        2a90ac:	e5c4504b 	strb	r5, [r4, #75]
        2a90b0:	e5c4504c 	strb	r5, [r4, #76]
        2a90b4:	e5c40050 	strb	r0, [r4, #80]
        2a90b8:	e5c45051 	strb	r5, [r4, #81]
        2a90bc:	e5c45052 	strb	r5, [r4, #82]
        2a90c0:	e5c45053 	strb	r5, [r4, #83]
        2a90c4:	e5c45054 	strb	r5, [r4, #84]
        2a90c8:	e5c40058 	strb	r0, [r4, #88]
        2a90cc:	e5c45059 	strb	r5, [r4, #89]
        2a90d0:	e5c4505a 	strb	r5, [r4, #90]
        2a90d4:	e5c4505b 	strb	r5, [r4, #91]
        2a90d8:	e5c4505c 	strb	r5, [r4, #92]
        2a90dc:	e3a0c00f 	mov	ip, #15	; 0xf
        2a90e0:	e5c4c060 	strb	ip, [r4, #96]
        2a90e4:	e3a01009 	mov	r1, #9	; 0x9
        2a90e8:	e5c41061 	strb	r1, [r4, #97]
        2a90ec:	e5c45062 	strb	r5, [r4, #98]
        2a90f0:	e3a01004 	mov	r1, #4	; 0x4
        2a90f4:	e5c41063 	strb	r1, [r4, #99]
        2a90f8:	e5c42064 	strb	r2, [r4, #100]
        2a90fc:	e5c40068 	strb	r0, [r4, #104]
        2a9100:	e5c45069 	strb	r5, [r4, #105]
        2a9104:	e5c4506a 	strb	r5, [r4, #106]
        2a9108:	e5c4506b 	strb	r5, [r4, #107]
        2a910c:	e5c4506c 	strb	r5, [r4, #108]
        2a9110:	e5c40070 	strb	r0, [r4, #112]
        2a9114:	e5c45071 	strb	r5, [r4, #113]
        2a9118:	e5c45072 	strb	r5, [r4, #114]
        2a911c:	e5c45073 	strb	r5, [r4, #115]
        2a9120:	e5c45074 	strb	r5, [r4, #116]
        2a9124:	e3a03005 	mov	r3, #5	; 0x5
        2a9128:	e5c43078 	strb	r3, [r4, #120]
        2a912c:	e5c4e079 	strb	lr, [r4, #121]
        2a9130:	e5c4107a 	strb	r1, [r4, #122]
        2a9134:	e5c4107b 	strb	r1, [r4, #123]
        2a9138:	e5c4207c 	strb	r2, [r4, #124]
        2a913c:	e5c40080 	strb	r0, [r4, #128]
        2a9140:	e5c45081 	strb	r5, [r4, #129]
        2a9144:	e5c45082 	strb	r5, [r4, #130]
        2a9148:	e5c45083 	strb	r5, [r4, #131]
        2a914c:	e5c45084 	strb	r5, [r4, #132]
        2a9150:	e5c4c088 	strb	ip, [r4, #136]
        2a9154:	e3a0c00c 	mov	ip, #12	; 0xc
        2a9158:	e5c4c089 	strb	ip, [r4, #137]
        2a915c:	e5c4108a 	strb	r1, [r4, #138]
        2a9160:	e5c4108b 	strb	r1, [r4, #139]
        2a9164:	e5c4208c 	strb	r2, [r4, #140]
        2a9168:	e5c40090 	strb	r0, [r4, #144]
        2a916c:	e5c45091 	strb	r5, [r4, #145]
        2a9170:	e5c45092 	strb	r5, [r4, #146]
        2a9174:	e5c45093 	strb	r5, [r4, #147]
        2a9178:	e5c45094 	strb	r5, [r4, #148]
        2a917c:	e3a01026 	mov	r1, #38	; 0x26
        2a9180:	e5c41098 	strb	r1, [r4, #152]
        2a9184:	e3a01010 	mov	r1, #16	; 0x10
        2a9188:	e5c41099 	strb	r1, [r4, #153]
        2a918c:	e5c4509a 	strb	r5, [r4, #154]
        2a9190:	e5c4509b 	strb	r5, [r4, #155]
        2a9194:	e5c4309c 	strb	r3, [r4, #156]
        2a9198:	e5c400a0 	strb	r0, [r4, #160]
        2a919c:	e5c450a1 	strb	r5, [r4, #161]
        2a91a0:	e5c450a2 	strb	r5, [r4, #162]
        2a91a4:	e5c450a3 	strb	r5, [r4, #163]
        2a91a8:	e5c450a4 	strb	r5, [r4, #164]
        2a91ac:	e5c400a8 	strb	r0, [r4, #168]
        2a91b0:	e5c450a9 	strb	r5, [r4, #169]
        2a91b4:	e5c450aa 	strb	r5, [r4, #170]
        2a91b8:	e5c450ab 	strb	r5, [r4, #171]
        2a91bc:	e5c450ac 	strb	r5, [r4, #172]
        2a91c0:	eb642e28 	bl	1bb4a68 <$rand>
        2a91c4:	e1a00800 	mov	r0, r0, lsl #16
        2a91c8:	e1b00820 	movs	r0, r0, lsr #16
        2a91cc:	e5840018 	str	r0, [r4, #24]	; fField24
        2a91d0:	03a00001 	moveq	r0, #1	; 0x1
        2a91d4:	05840018 	streq	r0, [r4, #24]	; fField24
        2a91d8:	e584502c 	str	r5, [r4, #44]	; fField44
        2a91dc:	eaffff90 	b	2a9024 <TADSP::__ct(void)+0x24>
        2a91e0:	0001f678 	andeq	pc, r1, r8, ror r6
    */
}

/**
 * Symbol: TADSP::ATLKOpen(TAppleTalkMessage *)
 * Address: 002a91e4
 */
TADSP::ATLKOpen(TAppleTalkMessage *) {
    /*
        2a91e4:	e3a01000 	mov	r1, #0	; 0x0
        2a91e8:	e5902014 	ldr	r2, [r0, #20]	; fField20
        2a91ec:	e2822001 	add	r2, r2, #1	; 0x1
        2a91f0:	e5a02014 	str	r2, [r0, #20]!	; fField20
        2a91f4:	e1a00001 	mov	r0, r1
        2a91f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSP::ATLKClose(TAppleTalkMessage *)
 * Address: 002a91fc
 */
TADSP::ATLKClose(TAppleTalkMessage *) {
    /*
        2a91fc:	e3a01000 	mov	r1, #0	; 0x0
        2a9200:	e5902014 	ldr	r2, [r0, #20]	; fField20
        2a9204:	e2422001 	sub	r2, r2, #1	; 0x1
        2a9208:	e5a02014 	str	r2, [r0, #20]!	; fField20
        2a920c:	e1a00001 	mov	r0, r1
        2a9210:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSP::ATLKShutDown(TAppleTalkMessage *)
 * Address: 002a9214
 */
TADSP::ATLKShutDown(TAppleTalkMessage *) {
    /*
        2a9214:	e1a0c00d 	mov	ip, sp
        2a9218:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a921c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9220:	e1a04000 	mov	r4, r0
        2a9224:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2a9228:	e590102c 	ldr	r1, [r0, #44]	; fField44
        2a922c:	e1a0000d 	mov	r0, sp
        2a9230:	eb64e7eb 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        2a9234:	e1a0000d 	mov	r0, sp
        2a9238:	eb64f86e 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        2a923c:	e1a05000 	mov	r5, r0
        2a9240:	e1a0000d 	mov	r0, sp
        2a9244:	eb6504cb 	bl	1bea578 <CArrayIterator::$More(void)>
        2a9248:	e3300000 	teq	r0, #0	; 0x0
        2a924c:	0a000009 	beq	2a9278 <TADSP::ATLKShutDown(TAppleTalkMessage *)+0x64>
        2a9250:	e1b00005 	movs	r0, r5
        2a9254:	13a01001 	movne	r1, #1	; 0x1
        2a9258:	1b5f29d3 	blne	1a739ac <TADSPConnection::$__dt(void)>
        2a925c:	e1a0000d 	mov	r0, sp
        2a9260:	eb6508ce 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        2a9264:	e1a05000 	mov	r5, r0
        2a9268:	e1a0000d 	mov	r0, sp
        2a926c:	eb6504c1 	bl	1bea578 <CArrayIterator::$More(void)>
        2a9270:	e3300000 	teq	r0, #0	; 0x0
        2a9274:	1afffff5 	bne	2a9250 <TADSP::ATLKShutDown(TAppleTalkMessage *)+0x3c>
        2a9278:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2a927c:	e3300000 	teq	r0, #0	; 0x0
        2a9280:	13a01001 	movne	r1, #1	; 0x1
        2a9284:	1b64ebf4 	blne	1be425c <CSortedList::$__dt(void)>
        2a9288:	e3a00000 	mov	r0, #0	; 0x0
        2a928c:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        2a9290:	e3a04000 	mov	r4, #0	; 0x0
        2a9294:	e1a0000d 	mov	r0, sp
        2a9298:	e3a01000 	mov	r1, #0	; 0x0
        2a929c:	eb64ebf1 	bl	1be4268 <CArrayIterator::$__dt(void)>
        2a92a0:	e1a00004 	mov	r0, r4
        2a92a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::Cancel(TAppleTalkMessage *)
 * Address: 002a92a8
 */
TADSP::Cancel(TAppleTalkMessage *) {
    /*
        2a92a8:	e1a0c00d 	mov	ip, sp
        2a92ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2a92b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a92b4:	e1a04000 	mov	r4, r0
        2a92b8:	e1a05001 	mov	r5, r1
        2a92bc:	e3a06000 	mov	r6, #0	; 0x0
        2a92c0:	e590002c 	ldr	r0, [r0, #44]	; fField44
        2a92c4:	e5900000 	ldr	r0, [r0]
        2a92c8:	e3500000 	cmp	r0, #0	; 0x0
        2a92cc:	da00000f 	ble	2a9310 <TADSP::Cancel(TAppleTalkMessage *)+0x68>
        2a92d0:	e1a01006 	mov	r1, r6
        2a92d4:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2a92d8:	eb64f419 	bl	1be6344 <CList::$At(long)>
        2a92dc:	e590100c 	ldr	r1, [r0, #12]	; fField12
        2a92e0:	e5952018 	ldr	r2, [r5, #24]	; fField24
        2a92e4:	e1310002 	teq	r1, r2
        2a92e8:	1a000003 	bne	2a92fc <TADSP::Cancel(TAppleTalkMessage *)+0x54>
        2a92ec:	e5b51014 	ldr	r1, [r5, #20]!	; fField20
        2a92f0:	eb5f3e56 	bl	1a78c50 <TADSPConnection::$DoClose(long)>
        2a92f4:	e3a00000 	mov	r0, #0	; 0x0
        2a92f8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2a92fc:	e2866001 	add	r6, r6, #1	; 0x1
        2a9300:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2a9304:	e5900000 	ldr	r0, [r0]
        2a9308:	e1500006 	cmp	r0, r6
        2a930c:	caffffef 	bgt	2a92d0 <TADSP::Cancel(TAppleTalkMessage *)+0x28>
        2a9310:	e3a00f47 	mov	r0, #284	; 0x11c
        2a9314:	e2400a03 	sub	r0, r0, #12288	; 0x3000
        2a9318:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::__dt(void)
 * Address: 002a931c
 */
TADSP::~TADSP(void) {
    /*
        2a931c:	e1a0c00d 	mov	ip, sp
        2a9320:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a9324:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9328:	e1a04000 	mov	r4, r0
        2a932c:	e1a05001 	mov	r5, r1
        2a9330:	e59f0020 	ldr	r0, [pc, #20]	; 2a9358 <TADSP::__dt(void)+0x3c>	; fField20
        2a9334:	e5840000 	str	r0, [r4]
        2a9338:	e1a00004 	mov	r0, r4
        2a933c:	e3a01000 	mov	r1, #0	; 0x0
        2a9340:	eb5f2992 	bl	1a73990 <TStackObject::$__dt(void)>
        2a9344:	e3150001 	tst	r5, #1	; 0x1
        2a9348:	11a00004 	movne	r0, r4
        2a934c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2a9350:	1a6490e2 	bne	1bcd6e0 <$__dl(void *)>
        2a9354:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2a9358:	0001f678 	andeq	pc, r1, r8, ror r6
    */
}

/**
 * Symbol: TADSP::Init(void)
 * Address: 002a935c
 */
TADSP::Init(void) {
    /*
        2a935c:	e1a0c00d 	mov	ip, sp
        2a9360:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2a9364:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9368:	e1a04000 	mov	r4, r0
        2a936c:	e59f2030 	ldr	r2, [pc, #30]	; 2a93a4 <TADSP::Init(void)+0x48>
        2a9370:	e59f1030 	ldr	r1, [pc, #30]	; 2a93a8 <TADSP::Init(void)+0x4c>
        2a9374:	eb5f4a8b 	bl	1a7bda8 <TStackObject::$Init(unsigned long, unsigned long)>
        2a9378:	e1b05000 	movs	r5, r0
        2a937c:	1a000006 	bne	2a939c <TADSP::Init(void)+0x40>
        2a9380:	e284101c 	add	r1, r4, #28	; 0x1c
        2a9384:	e3a00000 	mov	r0, #0	; 0x0
        2a9388:	eb64e78f 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
        2a938c:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        2a9390:	e3300000 	teq	r0, #0	; 0x0
        2a9394:	03a050a8 	moveq	r5, #168	; 0xa8
        2a9398:	02455b07 	subeq	r5, r5, #7168	; 0x1c00
        2a939c:	e1a00005 	mov	r0, r5
        2a93a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2a93a4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        2a93a8:	61647370 	cmnvs	r4, r0, ror r3
    */
}

/**
 * Symbol: TADSP::NewConnection(unsigned long)
 * Address: 002a93ac
 */
TADSP::NewConnection(unsigned long) {
    /*
        2a93ac:	e1a0c00d 	mov	ip, sp
        2a93b0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2a93b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a93b8:	e1a04000 	mov	r4, r0
        2a93bc:	e1b05001 	movs	r5, r1
        2a93c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2a93c4:	e280601c 	add	r6, r0, #28	; 0x1c
        2a93c8:	03a08801 	moveq	r8, #65536	; 0x10000
        2a93cc:	02488001 	subeq	r8, r8, #1	; 0x1
        2a93d0:	03a07001 	moveq	r7, #1	; 0x1
        2a93d4:	0a000014 	beq	2a942c <TADSP::NewConnection(unsigned long)+0x80>
        2a93d8:	e1a01006 	mov	r1, r6
        2a93dc:	e5845028 	str	r5, [r4, #40]	; fField40
        2a93e0:	e1a0200d 	mov	r2, sp
        2a93e4:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2a93e8:	eb6510aa 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        2a93ec:	e1b06000 	movs	r6, r0
        2a93f0:	1a00000b 	bne	2a9424 <TADSP::NewConnection(unsigned long)+0x78>
        2a93f4:	e3a00000 	mov	r0, #0	; 0x0
        2a93f8:	eb5f213d 	bl	1a718f4 <TADSPConnection::$__ct(void)>
        2a93fc:	e1b06000 	movs	r6, r0
        2a9400:	0a000007 	beq	2a9424 <TADSP::NewConnection(unsigned long)+0x78>
        2a9404:	e2842030 	add	r2, r4, #48	; 0x30
        2a9408:	e1a01005 	mov	r1, r5
        2a940c:	e1a00006 	mov	r0, r6
        2a9410:	eb5f4a6a 	bl	1a7bdc0 <TADSPConnection::$Init(unsigned long, State *)>
        2a9414:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
        2a9418:	e1a02006 	mov	r2, r6
        2a941c:	e59d1000 	ldr	r1, [sp]
        2a9420:	eb650031 	bl	1be94ec <CList::$InsertAt(long, void *)>
        2a9424:	e1a00006 	mov	r0, r6
        2a9428:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2a942c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2a9430:	e2800001 	add	r0, r0, #1	; 0x1
        2a9434:	e5840018 	str	r0, [r4, #24]	; fField24
        2a9438:	e1500008 	cmp	r0, r8
        2a943c:	85847018 	strhi	r7, [r4, #24]	; fField24
        2a9440:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2a9444:	e1a05000 	mov	r5, r0
        2a9448:	e1a01006 	mov	r1, r6
        2a944c:	e5840028 	str	r0, [r4, #40]	; fField40
        2a9450:	e1a0200d 	mov	r2, sp
        2a9454:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2a9458:	eb65108e 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        2a945c:	e3300000 	teq	r0, #0	; 0x0
        2a9460:	1afffff1 	bne	2a942c <TADSP::NewConnection(unsigned long)+0x80>
        2a9464:	eaffffe2 	b	2a93f4 <TADSP::NewConnection(unsigned long)+0x48>
    */
}

/**
 * Symbol: TADSP::FindSender(ADSPHeader *, TAddress *)
 * Address: 002a9468
 */
TADSP::FindSender(ADSPHeader *, TAddress *) {
    /*
        2a9468:	e1a0c00d 	mov	ip, sp
        2a946c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2a9470:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9474:	e1a05001 	mov	r5, r1
        2a9478:	e1a04002 	mov	r4, r2
        2a947c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2a9480:	e3a07000 	mov	r7, #0	; 0x0
        2a9484:	e5b0102c 	ldr	r1, [r0, #44]!	; fField44
        2a9488:	e1a0000d 	mov	r0, sp
        2a948c:	eb64e754 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        2a9490:	e1a0000d 	mov	r0, sp
        2a9494:	eb64f7d7 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        2a9498:	e1a06000 	mov	r6, r0
        2a949c:	e1a0000d 	mov	r0, sp
        2a94a0:	eb650434 	bl	1bea578 <CArrayIterator::$More(void)>
        2a94a4:	e3300000 	teq	r0, #0	; 0x0
        2a94a8:	0a000014 	beq	2a9500 <TADSP::FindSender(ADSPHeader *, TAddress *)+0x98>
        2a94ac:	e1a01004 	mov	r1, r4
        2a94b0:	e1a00006 	mov	r0, r6
        2a94b4:	eb5f4e63 	bl	1a7ce48 <TADSPConnection::$MatchAddress(TAddress *)>
        2a94b8:	e3300000 	teq	r0, #0	; 0x0
        2a94bc:	0a000008 	beq	2a94e4 <TADSP::FindSender(ADSPHeader *, TAddress *)+0x7c>
        2a94c0:	e5961170 	ldr	r1, [r6, #368]
        2a94c4:	e5950000 	ldr	r0, [r5]
        2a94c8:	e1310820 	teq	r1, r0, lsr #16
        2a94cc:	1a000004 	bne	2a94e4 <TADSP::FindSender(ADSPHeader *, TAddress *)+0x7c>
        2a94d0:	e5d6001c 	ldrb	r0, [r6, #28]	; fField28
        2a94d4:	e3300003 	teq	r0, #3	; 0x3
        2a94d8:	13300004 	teqne	r0, #4	; 0x4
        2a94dc:	01a07006 	moveq	r7, r6
        2a94e0:	0a000006 	beq	2a9500 <TADSP::FindSender(ADSPHeader *, TAddress *)+0x98>
        2a94e4:	e1a0000d 	mov	r0, sp
        2a94e8:	eb65082c 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        2a94ec:	e1a06000 	mov	r6, r0
        2a94f0:	e1a0000d 	mov	r0, sp
        2a94f4:	eb65041f 	bl	1bea578 <CArrayIterator::$More(void)>
        2a94f8:	e3300000 	teq	r0, #0	; 0x0
        2a94fc:	1affffea 	bne	2a94ac <TADSP::FindSender(ADSPHeader *, TAddress *)+0x44>
        2a9500:	e1a0000d 	mov	r0, sp
        2a9504:	e3a01000 	mov	r1, #0	; 0x0
        2a9508:	eb64eb56 	bl	1be4268 <CArrayIterator::$__dt(void)>
        2a950c:	e1a00007 	mov	r0, r7
        2a9510:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::FindListener(unsigned char)
 * Address: 002a9514
 */
TADSP::FindListener(unsigned char) {
    /*
        2a9514:	e1a0c00d 	mov	ip, sp
        2a9518:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2a951c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9520:	e20160ff 	and	r6, r1, #255	; 0xff
        2a9524:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2a9528:	e3a05000 	mov	r5, #0	; 0x0
        2a952c:	e5b0102c 	ldr	r1, [r0, #44]!	; fField44
        2a9530:	e1a0000d 	mov	r0, sp
        2a9534:	eb64e72a 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        2a9538:	e1a0000d 	mov	r0, sp
        2a953c:	eb64f7ad 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        2a9540:	e1a04000 	mov	r4, r0
        2a9544:	e1a0000d 	mov	r0, sp
        2a9548:	eb65040a 	bl	1bea578 <CArrayIterator::$More(void)>
        2a954c:	e3300000 	teq	r0, #0	; 0x0
        2a9550:	0a00000c 	beq	2a9588 <TADSP::FindListener(unsigned char)+0x74>
        2a9554:	e5d40161 	ldrb	r0, [r4, #353]	; fField353
        2a9558:	e1300006 	teq	r0, r6
        2a955c:	05d4001d 	ldreqb	r0, [r4, #29]	; fField29
        2a9560:	03300001 	teqeq	r0, #1	; 0x1
        2a9564:	01a05004 	moveq	r5, r4
        2a9568:	0a000006 	beq	2a9588 <TADSP::FindListener(unsigned char)+0x74>
        2a956c:	e1a0000d 	mov	r0, sp
        2a9570:	eb65080a 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        2a9574:	e1a04000 	mov	r4, r0
        2a9578:	e1a0000d 	mov	r0, sp
        2a957c:	eb6503fd 	bl	1bea578 <CArrayIterator::$More(void)>
        2a9580:	e3300000 	teq	r0, #0	; 0x0
        2a9584:	1afffff2 	bne	2a9554 <TADSP::FindListener(unsigned char)+0x40>
        2a9588:	e1a0000d 	mov	r0, sp
        2a958c:	e3a01000 	mov	r1, #0	; 0x0
        2a9590:	eb64eb34 	bl	1be4268 <CArrayIterator::$__dt(void)>
        2a9594:	e1a00005 	mov	r0, r5
        2a9598:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)
 * Address: 002a959c
 */
TADSP::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **) {
    /*
        2a959c:	e1a0c00d 	mov	ip, sp
        2a95a0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2a95a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a95a8:	e1a06001 	mov	r6, r1
        2a95ac:	e1a05002 	mov	r5, r2
        2a95b0:	e1a04003 	mov	r4, r3
        2a95b4:	e59b9004 	ldr	r9, [fp, #4]
        2a95b8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2a95bc:	e3a08000 	mov	r8, #0	; 0x0
        2a95c0:	e5b0102c 	ldr	r1, [r0, #44]!	; fField44
        2a95c4:	e1a0000d 	mov	r0, sp
        2a95c8:	eb64e705 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        2a95cc:	e1a0000d 	mov	r0, sp
        2a95d0:	eb64f788 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        2a95d4:	e1a07000 	mov	r7, r0
        2a95d8:	e1a0000d 	mov	r0, sp
        2a95dc:	eb6503e5 	bl	1bea578 <CArrayIterator::$More(void)>
        2a95e0:	e3300000 	teq	r0, #0	; 0x0
        2a95e4:	0a000011 	beq	2a9630 <TADSP::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x94>
        2a95e8:	e1a03009 	mov	r3, r9
        2a95ec:	e92d0008 	stmdb	sp!, {r3}
        2a95f0:	e1a03004 	mov	r3, r4
        2a95f4:	e1a02005 	mov	r2, r5
        2a95f8:	e1a01006 	mov	r1, r6
        2a95fc:	e1a00007 	mov	r0, r7
        2a9600:	eb5f4e0e 	bl	1a7ce40 <TADSPConnection::$Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)>
        2a9604:	e28dd004 	add	sp, sp, #4	; 0x4
        2a9608:	e3300000 	teq	r0, #0	; 0x0
        2a960c:	11a08007 	movne	r8, r7
        2a9610:	1a000006 	bne	2a9630 <TADSP::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x94>
        2a9614:	e1a0000d 	mov	r0, sp
        2a9618:	eb6507e0 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        2a961c:	e1a07000 	mov	r7, r0
        2a9620:	e1a0000d 	mov	r0, sp
        2a9624:	eb6503d3 	bl	1bea578 <CArrayIterator::$More(void)>
        2a9628:	e3300000 	teq	r0, #0	; 0x0
        2a962c:	1affffed 	bne	2a95e8 <TADSP::Match(ADSPHeader *, TAddress *, ADSPOpenConnInfo *, State **)+0x4c>
        2a9630:	e1a0000d 	mov	r0, sp
        2a9634:	e3a01000 	mov	r1, #0	; 0x0
        2a9638:	eb64eb0a 	bl	1be4268 <CArrayIterator::$__dt(void)>
        2a963c:	e1a00008 	mov	r0, r8
        2a9640:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TADSP::MatchConnection(unsigned long)
 * Address: 002a9644
 */
TADSP::MatchConnection(unsigned long) {
    /*
        2a9644:	e1a0c00d 	mov	ip, sp
        2a9648:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2a964c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a9650:	e24dd004 	sub	sp, sp, #4	; 0x4
        2a9654:	e5801028 	str	r1, [r0, #40]	; fField40
        2a9658:	e280101c 	add	r1, r0, #28	; 0x1c
        2a965c:	e590002c 	ldr	r0, [r0, #44]	; fField44
        2a9660:	e1a0200d 	mov	r2, sp
        2a9664:	eb65100b 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
        2a9668:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

