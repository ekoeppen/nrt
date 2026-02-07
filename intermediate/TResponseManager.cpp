#include "include/TResponseManager.h"

/**
 * Symbol: TResponseManager::__ct(void)
 * Address: 001a98c8
 */
TResponseManager::TResponseManager(void) {
    /*
        1a98c8:	e1a0c00d 	mov	ip, sp
        1a98cc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1a98d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a98d4:	e3300000 	teq	r0, #0	; 0x0
        1a98d8:	1a000003 	bne	1a98ec <TResponseManager::__ct(void)+0x24>
        1a98dc:	e3a00008 	mov	r0, #8	; 0x8
        1a98e0:	eb689394 	bl	1bce738 <$__nw(unsigned int)>
        1a98e4:	e3300000 	teq	r0, #0	; 0x0
        1a98e8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1a98ec:	e59f100c 	ldr	r1, [pc, #c]	; 1a9900 <TResponseManager::__ct(void)+0x38>
        1a98f0:	e5801000 	str	r1, [r0]
        1a98f4:	e3a01000 	mov	r1, #0	; 0x0
        1a98f8:	e5801004 	str	r1, [r0, #4]	; fField4
        1a98fc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1a9900:	0001e568 	andeq	lr, r1, r8, ror #10
    */
}

/**
 * Symbol: TResponseManager::__dt(void)
 * Address: 001a992c
 */
TResponseManager::~TResponseManager(void) {
    /*
        1a992c:	e59f200c 	ldr	r2, [pc, #c]	; 1a9940 <TResponseManager::__dt(void)+0x14>
        1a9930:	e3110001 	tst	r1, #1	; 0x1
        1a9934:	e5802000 	str	r2, [r0]
        1a9938:	1a688f68 	bne	1bcd6e0 <$__dl(void *)>
        1a993c:	e1a0f00e 	mov	pc, lr
        1a9940:	0001e568 	andeq	lr, r1, r8, ror #10
    */
}

/**
 * Symbol: TResponseManager::OpenResponder(TOpenResponderMessage *)
 * Address: 001a9944
 */
TResponseManager::OpenResponder(TOpenResponderMessage *) {
    /*
        1a9944:	e1a0c00d 	mov	ip, sp
        1a9948:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a994c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9950:	e1a05000 	mov	r5, r0
        1a9954:	e1a04001 	mov	r4, r1
        1a9958:	e5d11014 	ldrb	r1, [r1, #20]
        1a995c:	e3310000 	teq	r1, #0	; 0x0
        1a9960:	0a000005 	beq	1a997c <TResponseManager::OpenResponder(TOpenResponderMessage *)+0x38>
        1a9964:	e1a00005 	mov	r0, r5
        1a9968:	eb6344ed 	bl	1a7ad24 <TResponseManager::$GetResponderSocket(unsigned char)>
        1a996c:	e3300000 	teq	r0, #0	; 0x0
        1a9970:	13a06d3b 	movne	r6, #3776	; 0xec0
        1a9974:	12466901 	subne	r6, r6, #16384	; 0x4000
        1a9978:	1a00001c 	bne	1a99f0 <TResponseManager::OpenResponder(TOpenResponderMessage *)+0xac>
        1a997c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a9980:	e5d40014 	ldrb	r0, [r4, #20]
        1a9984:	e5cd0000 	strb	r0, [sp]
        1a9988:	e1a0000d 	mov	r0, sp
        1a998c:	e59f1064 	ldr	r1, [pc, #64]	; 1a99f8 <TResponseManager::OpenResponder(TOpenResponderMessage *)+0xb4>
        1a9990:	eb635144 	bl	1a7dea8 <$OpenSocket(unsigned char &, unsigned long)>
        1a9994:	e1b06000 	movs	r6, r0
        1a9998:	1a000013 	bne	1a99ec <TResponseManager::OpenResponder(TOpenResponderMessage *)+0xa8>
        1a999c:	e5d43020 	ldrb	r3, [r4, #32]
        1a99a0:	e594201c 	ldr	r2, [r4, #28]
        1a99a4:	e5941016 	ldr	r1, [r4, #22]
        1a99a8:	e1a01821 	mov	r1, r1, lsr #16
        1a99ac:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1a99b0:	e5d43018 	ldrb	r3, [r4, #24]	; fField24
        1a99b4:	e5d42019 	ldrb	r2, [r4, #25]
        1a99b8:	e5dd100c 	ldrb	r1, [sp, #12]
        1a99bc:	e1a00005 	mov	r0, r5
        1a99c0:	eb633c92 	bl	1a78c10 <TResponseManager::$CreateNewResponderSocket(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long, unsigned char)>
        1a99c4:	e28dd00c 	add	sp, sp, #12	; 0xc
        1a99c8:	e3300000 	teq	r0, #0	; 0x0
        1a99cc:	03a060a8 	moveq	r6, #168	; 0xa8
        1a99d0:	02466b07 	subeq	r6, r6, #7168	; 0x1c00
        1a99d4:	0a000004 	beq	1a99ec <TResponseManager::OpenResponder(TOpenResponderMessage *)+0xa8>
        1a99d8:	e5dd0000 	ldrb	r0, [sp]
        1a99dc:	e5c40014 	strb	r0, [r4, #20]
        1a99e0:	eb68a7fb 	bl	1bd39d4 <$GetGlobals>
        1a99e4:	e3a01018 	mov	r1, #24	; 0x18
        1a99e8:	eb68f24c 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
        1a99ec:	e28dd004 	add	sp, sp, #4	; 0x4
        1a99f0:	e1a00006 	mov	r0, r6
        1a99f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1a99f8:	61747020 	cmnvs	r4, r0, lsr #32
    */
}

/**
 * Symbol: TResponseManager::CloseResponder(TCloseResponderMessage *)
 * Address: 001a99fc
 */
TResponseManager::CloseResponder(TCloseResponderMessage *) {
    /*
        1a99fc:	e1a0c00d 	mov	ip, sp
        1a9a00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a9a04:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9a08:	e1a04001 	mov	r4, r1
        1a9a0c:	e3a05000 	mov	r5, #0	; 0x0
        1a9a10:	e5d11014 	ldrb	r1, [r1, #20]
        1a9a14:	eb635542 	bl	1a7ef24 <TResponseManager::$Remove(unsigned char)>
        1a9a18:	e3300000 	teq	r0, #0	; 0x0
        1a9a1c:	03e05dc5 	mvneq	r5, #12608	; 0x3140
        1a9a20:	0a000001 	beq	1a9a2c <TResponseManager::CloseResponder(TCloseResponderMessage *)+0x30>
        1a9a24:	e5d40014 	ldrb	r0, [r4, #20]
        1a9a28:	eb633865 	bl	1a77bc4 <$CloseSocket(unsigned char)>
        1a9a2c:	e1a00005 	mov	r0, r5
        1a9a30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TResponseManager::WantRequest(TWantRequestMessage *)
 * Address: 001a9a34
 */
TResponseManager::WantRequest(TWantRequestMessage *) {
    /*
        1a9a34:	e1a0c00d 	mov	ip, sp
        1a9a38:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a9a3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9a40:	e1a04001 	mov	r4, r1
        1a9a44:	e3a06000 	mov	r6, #0	; 0x0
        1a9a48:	e5d11014 	ldrb	r1, [r1, #20]
        1a9a4c:	eb6344b4 	bl	1a7ad24 <TResponseManager::$GetResponderSocket(unsigned char)>
        1a9a50:	e1b07000 	movs	r7, r0
        1a9a54:	03e06dc5 	mvneq	r6, #12608	; 0x3140
        1a9a58:	0a000023 	beq	1a9aec <TResponseManager::WantRequest(TWantRequestMessage *)+0xb8>
        1a9a5c:	e5970010 	ldr	r0, [r7, #16]
        1a9a60:	e3300000 	teq	r0, #0	; 0x0
        1a9a64:	0a000004 	beq	1a9a7c <TResponseManager::WantRequest(TWantRequestMessage *)+0x48>
        1a9a68:	e597000c 	ldr	r0, [r7, #12]
        1a9a6c:	e3300001 	teq	r0, #1	; 0x1
        1a9a70:	03e06043 	mvneq	r6, #67	; 0x43
        1a9a74:	02466c31 	subeq	r6, r6, #12544	; 0x3100
        1a9a78:	0a00001b 	beq	1a9aec <TResponseManager::WantRequest(TWantRequestMessage *)+0xb8>
        1a9a7c:	e3a00000 	mov	r0, #0	; 0x0
        1a9a80:	eb631f8c 	bl	1a718b8 <TATPRequestor::$__ct(void)>
        1a9a84:	e1b05000 	movs	r5, r0
        1a9a88:	03a060a8 	moveq	r6, #168	; 0xa8
        1a9a8c:	02466b07 	subeq	r6, r6, #7168	; 0x1c00
        1a9a90:	0a000015 	beq	1a9aec <TResponseManager::WantRequest(TWantRequestMessage *)+0xb8>
        1a9a94:	e5d40014 	ldrb	r0, [r4, #20]
        1a9a98:	e5c50004 	strb	r0, [r5, #4]	; fField4
        1a9a9c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a9aa0:	e1a0000d 	mov	r0, sp
        1a9aa4:	e5941020 	ldr	r1, [r4, #32]
        1a9aa8:	eb688f07 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        1a9aac:	e285002c 	add	r0, r5, #44	; 0x2c
        1a9ab0:	e59d1000 	ldr	r1, [sp]
        1a9ab4:	eb689b63 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1a9ab8:	e2850008 	add	r0, r5, #8	; 0x8
        1a9abc:	e3a02000 	mov	r2, #0	; 0x0
        1a9ac0:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1a9ac4:	eb634cd9 	bl	1a7ce30 <TMemoryObject::$Make(unsigned long, TUMsgToken *)>
        1a9ac8:	e5b4001c 	ldr	r0, [r4, #28]!
        1a9acc:	e5850034 	str	r0, [r5, #52]
        1a9ad0:	e1a01005 	mov	r1, r5
        1a9ad4:	e1a00007 	mov	r0, r7
        1a9ad8:	eb632bd1 	bl	1a74a24 <TResponderSocket::$AddRequestor(TATPRequestor *)>
        1a9adc:	e1a0000d 	mov	r0, sp
        1a9ae0:	e3a01000 	mov	r1, #0	; 0x0
        1a9ae4:	eb68930e 	bl	1bce724 <TUObject::$__dt(void)>
        1a9ae8:	e28dd008 	add	sp, sp, #8	; 0x8
        1a9aec:	e1a00006 	mov	r0, r6
        1a9af0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TResponseManager::ValidateSendResponse(TSendResponsesFormat const &, unsigned long)
 * Address: 001a9af4
 */
TResponseManager::ValidateSendResponse(TSendResponsesFormat const &, unsigned long) {
    /*
        1a9af4:	e3a00000 	mov	r0, #0	; 0x0
        1a9af8:	e2422054 	sub	r2, r2, #84	; 0x54
        1a9afc:	e5d13000 	ldrb	r3, [r1]
        1a9b00:	e3330000 	teq	r3, #0	; 0x0
        1a9b04:	0a000007 	beq	1a9b28 <TResponseManager::ValidateSendResponse(TSendResponsesFormat const &, unsigned long)+0x34>
        1a9b08:	e5d11001 	ldrb	r1, [r1, #1]
        1a9b0c:	e3310000 	teq	r1, #0	; 0x0
        1a9b10:	0a000001 	beq	1a9b1c <TResponseManager::ValidateSendResponse(TSendResponsesFormat const &, unsigned long)+0x28>
        1a9b14:	e3510008 	cmp	r1, #8	; 0x8
        1a9b18:	d1a0f00e 	movle	pc, lr
        1a9b1c:	e3e00042 	mvn	r0, #66	; 0x42
        1a9b20:	e2400c31 	sub	r0, r0, #12544	; 0x3100
        1a9b24:	e1a0f00e 	mov	pc, lr
        1a9b28:	e3320000 	teq	r2, #0	; 0x0
        1a9b2c:	0a000002 	beq	1a9b3c <TResponseManager::ValidateSendResponse(TSendResponsesFormat const &, unsigned long)+0x48>
        1a9b30:	e252cc12 	subs	ip, r2, #4608	; 0x1200
        1a9b34:	235c0030 	cmpcs	ip, #48	; 0x30
        1a9b38:	91a0f00e 	movls	pc, lr
        1a9b3c:	e3e00041 	mvn	r0, #65	; 0x41
        1a9b40:	e2400c31 	sub	r0, r0, #12544	; 0x3100
        1a9b44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)
 * Address: 001a9b48
 */
TResponseManager::SendResponses(TSendResponsesMessage *, TATP *) {
    /*
        1a9b48:	e1a0c00d 	mov	ip, sp
        1a9b4c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1a9b50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9b54:	e1a05000 	mov	r5, r0
        1a9b58:	e1a04001 	mov	r4, r1
        1a9b5c:	e1a06002 	mov	r6, r2
        1a9b60:	e3a07000 	mov	r7, #0	; 0x0
        1a9b64:	e3a09000 	mov	r9, #0	; 0x0
        1a9b68:	e5d11014 	ldrb	r1, [r1, #20]
        1a9b6c:	eb63446c 	bl	1a7ad24 <TResponseManager::$GetResponderSocket(unsigned char)>
        1a9b70:	e1b08000 	movs	r8, r0
        1a9b74:	03e07dc5 	mvneq	r7, #12608	; 0x3140
        1a9b78:	0a000053 	beq	1a9ccc <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x184>
        1a9b7c:	e5d40029 	ldrb	r0, [r4, #41]
        1a9b80:	e3300000 	teq	r0, #0	; 0x0
        1a9b84:	1a00004b 	bne	1a9cb8 <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x170>
        1a9b88:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1a9b8c:	e1a0000d 	mov	r0, sp
        1a9b90:	e3a01001 	mov	r1, #1	; 0x1
        1a9b94:	eb692784 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        1a9b98:	e284101c 	add	r1, r4, #28	; 0x1c
        1a9b9c:	e1a0000d 	mov	r0, sp
        1a9ba0:	eb692782 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        1a9ba4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1a9ba8:	e1a01800 	mov	r1, r0, lsl #16
        1a9bac:	e1a01821 	mov	r1, r1, lsr #16
        1a9bb0:	e1a0200d 	mov	r2, sp
        1a9bb4:	e1a00008 	mov	r0, r8
        1a9bb8:	e3a03004 	mov	r3, #4	; 0x4
        1a9bbc:	eb634ca4 	bl	1a7ce54 <TResponderSocket::$MatchResponder(unsigned short, TAddress const &, AddressEquiv)>
        1a9bc0:	e1b07000 	movs	r7, r0
        1a9bc4:	0a000005 	beq	1a9be0 <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x98>
        1a9bc8:	e3a09001 	mov	r9, #1	; 0x1
        1a9bcc:	e1a00007 	mov	r0, r7
        1a9bd0:	e594102c 	ldr	r1, [r4, #44]
        1a9bd4:	eb6358f8 	bl	1a7ffbc <TATPResponder::$SetResponseBuffer(unsigned long)>
        1a9bd8:	e287008c 	add	r0, r7, #140	; 0x8c
        1a9bdc:	eb6354d9 	bl	1a7ef48 <TMessageTimer::$Reset(void)>
        1a9be0:	e24dd024 	sub	sp, sp, #36	; 0x24
        1a9be4:	e1a0000d 	mov	r0, sp
        1a9be8:	eb692771 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        1a9bec:	e1a0000d 	mov	r0, sp
        1a9bf0:	e3a02000 	mov	r2, #0	; 0x0
        1a9bf4:	e594102c 	ldr	r1, [r4, #44]
        1a9bf8:	eb634c8c 	bl	1a7ce30 <TMemoryObject::$Make(unsigned long, TUMsgToken *)>
        1a9bfc:	e24dd058 	sub	sp, sp, #88	; 0x58
        1a9c00:	e3a03000 	mov	r3, #0	; 0x0
        1a9c04:	e92d0008 	stmdb	sp!, {r3}
        1a9c08:	e28d2008 	add	r2, sp, #8	; 0x8
        1a9c0c:	e28d1004 	add	r1, sp, #4	; 0x4
        1a9c10:	e28d005c 	add	r0, sp, #92	; 0x5c
        1a9c14:	e3a03054 	mov	r3, #84	; 0x54
        1a9c18:	eb6337f6 	bl	1a77bf8 <TMemoryObject::$CopyFrom(unsigned long *, void *, unsigned long, unsigned long)>
        1a9c1c:	e28dd004 	add	sp, sp, #4	; 0x4
        1a9c20:	e1b07000 	movs	r7, r0
        1a9c24:	1a000016 	bne	1a9c84 <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x13c>
        1a9c28:	e59d0000 	ldr	r0, [sp]
        1a9c2c:	e3300054 	teq	r0, #84	; 0x54
        1a9c30:	159f7060 	ldrne	r7, [pc, #60]	; 1a9c98 <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x150>
        1a9c34:	1a000012 	bne	1a9c84 <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x13c>
        1a9c38:	e59d2074 	ldr	r2, [sp, #116]
        1a9c3c:	e28d1004 	add	r1, sp, #4	; 0x4
        1a9c40:	e1a00005 	mov	r0, r5
        1a9c44:	eb635908 	bl	1a8006c <TResponseManager::$ValidateSendResponse(TSendResponsesFormat const &, unsigned long)>
        1a9c48:	e1b07000 	movs	r7, r0
        1a9c4c:	1a00000c 	bne	1a9c84 <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x13c>
        1a9c50:	e1a03006 	mov	r3, r6
        1a9c54:	e28d207c 	add	r2, sp, #124	; 0x7c
        1a9c58:	e92d000c 	stmdb	sp!, {r2, r3}
        1a9c5c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1a9c60:	e1a03800 	mov	r3, r0, lsl #16
        1a9c64:	e1a03823 	mov	r3, r3, lsr #16
        1a9c68:	e28d200c 	add	r2, sp, #12	; 0xc
        1a9c6c:	e28d1060 	add	r1, sp, #96	; 0x60
        1a9c70:	e1a00005 	mov	r0, r5
        1a9c74:	eb6358f5 	bl	1a80050 <TResponseManager::$TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *)>
        1a9c78:	e28dd008 	add	sp, sp, #8	; 0x8
        1a9c7c:	e1b07000 	movs	r7, r0
        1a9c80:	0a000005 	beq	1a9c9c <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x154>
        1a9c84:	e28d0058 	add	r0, sp, #88	; 0x58
        1a9c88:	e3a01000 	mov	r1, #0	; 0x0
        1a9c8c:	eb69274a 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        1a9c90:	e28dd088 	add	sp, sp, #136	; 0x88
        1a9c94:	ea00000c 	b	1a9ccc <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x184>
        1a9c98:	ffffd11f 	swinv	0x00ffd11f
        1a9c9c:	e28dd058 	add	sp, sp, #88	; 0x58
        1a9ca0:	e1a0000d 	mov	r0, sp
        1a9ca4:	e3a01000 	mov	r1, #0	; 0x0
        1a9ca8:	eb692743 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        1a9cac:	e28dd030 	add	sp, sp, #48	; 0x30
        1a9cb0:	e3390000 	teq	r9, #0	; 0x0
        1a9cb4:	1a000004 	bne	1a9ccc <TResponseManager::SendResponses(TSendResponsesMessage *, TATP *)+0x184>
        1a9cb8:	e598000c 	ldr	r0, [r8, #12]
        1a9cbc:	e3300001 	teq	r0, #1	; 0x1
        1a9cc0:	03a01000 	moveq	r1, #0	; 0x0
        1a9cc4:	05b80010 	ldreq	r0, [r8, #16]!
        1a9cc8:	05c01038 	streqb	r1, [r0, #56]	; fField56
        1a9ccc:	e1a00007 	mov	r0, r7
        1a9cd0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TResponseManager::ResponseCount(TSendResponsesFormat const &)
 * Address: 001a9cd4
 */
TResponseManager::ResponseCount(TSendResponsesFormat const &) {
    /*
        1a9cd4:	e1a0c00d 	mov	ip, sp
        1a9cd8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a9cdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9ce0:	e5d10000 	ldrb	r0, [r1]
        1a9ce4:	e3300000 	teq	r0, #0	; 0x0
        1a9ce8:	15d10001 	ldrneb	r0, [r1, #1]
        1a9cec:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1a9cf0:	e3a03042 	mov	r3, #66	; 0x42
        1a9cf4:	e2833c02 	add	r3, r3, #512	; 0x200
        1a9cf8:	e1a00003 	mov	r0, r3
        1a9cfc:	e591204c 	ldr	r2, [r1, #76]
        1a9d00:	e3320000 	teq	r2, #0	; 0x0
        1a9d04:	0a000001 	beq	1a9d10 <TResponseManager::ResponseCount(TSendResponsesFormat const &)+0x3c>
        1a9d08:	e1520003 	cmp	r2, r3
        1a9d0c:	31a00002 	movcc	r0, r2
        1a9d10:	e591102c 	ldr	r1, [r1, #44]
        1a9d14:	e1a04001 	mov	r4, r1
        1a9d18:	eb68230a 	bl	1bb2948 <$__rt_udiv>
        1a9d1c:	e20000ff 	and	r0, r0, #255	; 0xff
        1a9d20:	e3310000 	teq	r1, #0	; 0x0
        1a9d24:	12800001 	addne	r0, r0, #1	; 0x1
        1a9d28:	120000ff 	andne	r0, r0, #255	; 0xff
        1a9d2c:	e3340000 	teq	r4, #0	; 0x0
        1a9d30:	02800001 	addeq	r0, r0, #1	; 0x1
        1a9d34:	020000ff 	andeq	r0, r0, #255	; 0xff
        1a9d38:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TResponseManager::SetupResponsePackets(TSendResponsesFormat &, unsigned char, ResponsePacket (&)[8])
 * Address: 001a9d3c
 */
TResponseManager::SetupResponsePackets(TSendResponsesFormat &, unsigned char, ResponsePacket (&)[8]) {
    /*
        1a9d3c:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        1a9d40:	e20270ff 	and	r7, r2, #255	; 0xff
        1a9d44:	e3a00000 	mov	r0, #0	; 0x0
        1a9d48:	e5d12000 	ldrb	r2, [r1]
        1a9d4c:	e3320000 	teq	r2, #0	; 0x0
        1a9d50:	03a05054 	moveq	r5, #84	; 0x54
        1a9d54:	0591e02c 	ldreq	lr, [r1, #44]
        1a9d58:	e3a02000 	mov	r2, #0	; 0x0
        1a9d5c:	e3570000 	cmp	r7, #0	; 0x0
        1a9d60:	d8bd81f0 	ldmleia	sp!, {r4, r5, r6, r7, r8, pc}
        1a9d64:	e3a08042 	mov	r8, #66	; 0x42
        1a9d68:	e2888c02 	add	r8, r8, #512	; 0x200
        1a9d6c:	e5d1c000 	ldrb	ip, [r1]
        1a9d70:	e33c0000 	teq	ip, #0	; 0x0
        1a9d74:	0a00000a 	beq	1a9da4 <TResponseManager::SetupResponsePackets(TSendResponsesFormat &, unsigned char, ResponsePacket (&)[8])+0x68>
        1a9d78:	e0814102 	add	r4, r1, r2, lsl #2
        1a9d7c:	e082c082 	add	ip, r2, r2, lsl #1
        1a9d80:	e594600c 	ldr	r6, [r4, #12]
        1a9d84:	e783610c 	str	r6, [r3, ip, lsl #2]
        1a9d88:	e594402c 	ldr	r4, [r4, #44]
        1a9d8c:	e083c10c 	add	ip, r3, ip, lsl #2
        1a9d90:	e58c4004 	str	r4, [ip, #4]	; fField4
        1a9d94:	e0814002 	add	r4, r1, r2
        1a9d98:	e5d44003 	ldrb	r4, [r4, #3]
        1a9d9c:	e5cc4008 	strb	r4, [ip, #8]
        1a9da0:	ea000010 	b	1a9de8 <TResponseManager::SetupResponsePackets(TSendResponsesFormat &, unsigned char, ResponsePacket (&)[8])+0xac>
        1a9da4:	e1a04008 	mov	r4, r8
        1a9da8:	e591604c 	ldr	r6, [r1, #76]
        1a9dac:	e3360000 	teq	r6, #0	; 0x0
        1a9db0:	0a000001 	beq	1a9dbc <TResponseManager::SetupResponsePackets(TSendResponsesFormat &, unsigned char, ResponsePacket (&)[8])+0x80>
        1a9db4:	e1560008 	cmp	r6, r8
        1a9db8:	31a04006 	movcc	r4, r6
        1a9dbc:	e154000e 	cmp	r4, lr
        1a9dc0:	21a0c00e 	movcs	ip, lr
        1a9dc4:	31a0c004 	movcc	ip, r4
        1a9dc8:	e0824082 	add	r4, r2, r2, lsl #1
        1a9dcc:	e7835104 	str	r5, [r3, r4, lsl #2]
        1a9dd0:	e0834104 	add	r4, r3, r4, lsl #2
        1a9dd4:	e2826001 	add	r6, r2, #1	; 0x1
        1a9dd8:	e584c004 	str	ip, [r4, #4]	; fField4
        1a9ddc:	e5c46008 	strb	r6, [r4, #8]
        1a9de0:	e085500c 	add	r5, r5, ip
        1a9de4:	e04ee00c 	sub	lr, lr, ip
        1a9de8:	e2822001 	add	r2, r2, #1	; 0x1
        1a9dec:	e20220ff 	and	r2, r2, #255	; 0xff
        1a9df0:	e1520007 	cmp	r2, r7
        1a9df4:	baffffdc 	blt	1a9d6c <TResponseManager::SetupResponsePackets(TSendResponsesFormat &, unsigned char, ResponsePacket (&)[8])+0x30>
        1a9df8:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: TResponseManager::TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *)
 * Address: 001a9dfc
 */
TResponseManager::TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *) {
    /*
        1a9dfc:	e1a0c00d 	mov	ip, sp
        1a9e00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1a9e04:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a9e08:	e24cb014 	sub	fp, ip, #20	; 0x14
        1a9e0c:	e1a06000 	mov	r6, r0
        1a9e10:	e1a04002 	mov	r4, r2
        1a9e14:	e1a05803 	mov	r5, r3, lsl #16
        1a9e18:	e1a05825 	mov	r5, r5, lsr #16
        1a9e1c:	e59b9018 	ldr	r9, [fp, #24]	; fField24
        1a9e20:	e59ba014 	ldr	sl, [fp, #20]
        1a9e24:	e24dd010 	sub	sp, sp, #16	; 0x10
        1a9e28:	e1a0000d 	mov	r0, sp
        1a9e2c:	eb631e96 	bl	1a7188c <TATPHeader::$__ct(void)>
        1a9e30:	e59d1000 	ldr	r1, [sp]
        1a9e34:	e3c11103 	bic	r1, r1, #-1073741824	; 0xc0000000
        1a9e38:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
        1a9e3c:	e58d1000 	str	r1, [sp]
        1a9e40:	e1a01821 	mov	r1, r1, lsr #16
        1a9e44:	e1850801 	orr	r0, r5, r1, lsl #16
        1a9e48:	e1a01004 	mov	r1, r4
        1a9e4c:	e58d0000 	str	r0, [sp]
        1a9e50:	e1a00006 	mov	r0, r6
        1a9e54:	eb635443 	bl	1a7ef68 <TResponseManager::$ResponseCount(TSendResponsesFormat const &)>
        1a9e58:	e1a05000 	mov	r5, r0
        1a9e5c:	e24dd064 	sub	sp, sp, #100	; 0x64
        1a9e60:	e5940050 	ldr	r0, [r4, #80]
        1a9e64:	e58d0060 	str	r0, [sp, #96]
        1a9e68:	e1a0300d 	mov	r3, sp
        1a9e6c:	e1a02005 	mov	r2, r5
        1a9e70:	e1a01004 	mov	r1, r4
        1a9e74:	e1a00006 	mov	r0, r6
        1a9e78:	eb635854 	bl	1a7ffd0 <TResponseManager::$SetupResponsePackets(TSendResponsesFormat &, unsigned char, ResponsePacket (&)[8])>
        1a9e7c:	e58d0068 	str	r0, [sp, #104]
        1a9e80:	e3300000 	teq	r0, #0	; 0x0
        1a9e84:	128dd068 	addne	sp, sp, #104	; 0x68
        1a9e88:	1a000065 	bne	1aa024 <TResponseManager::TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *)+0x228>
        1a9e8c:	e24dd09c 	sub	sp, sp, #156	; 0x9c
        1a9e90:	e28d0090 	add	r0, sp, #144	; 0x90
        1a9e94:	eb631e84 	bl	1a718ac <TWriteChain::$__ct(void)>
        1a9e98:	e28d0078 	add	r0, sp, #120	; 0x78
        1a9e9c:	eb631e90 	bl	1a718e4 <TWriteElement::$__ct(void)>
        1a9ea0:	e28d0048 	add	r0, sp, #72	; 0x48
        1a9ea4:	eb6322a2 	bl	1a72934 <TSharedWriteElement::$__ct(void)>
        1a9ea8:	e28d0030 	add	r0, sp, #48	; 0x30
        1a9eac:	eb631e8c 	bl	1a718e4 <TWriteElement::$__ct(void)>
        1a9eb0:	e1a0000d 	mov	r0, sp
        1a9eb4:	eb68e8df 	bl	1be4238 <TAEvent::$__ct(void)>
        1a9eb8:	e59f016c 	ldr	r0, [pc, #16c]	; 1aa02c <TResponseManager::TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *)+0x230>
        1a9ebc:	e58d0000 	str	r0, [sp]
        1a9ec0:	e3a00000 	mov	r0, #0	; 0x0
        1a9ec4:	e58d000c 	str	r0, [sp, #12]
        1a9ec8:	e58d0008 	str	r0, [sp, #8]
        1a9ecc:	e28d0014 	add	r0, sp, #20	; 0x14
        1a9ed0:	e3a01001 	mov	r1, #1	; 0x1
        1a9ed4:	e58d010c 	str	r0, [sp, #268]
        1a9ed8:	eb6926b3 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        1a9edc:	e3a00003 	mov	r0, #3	; 0x3
        1a9ee0:	e5cd0020 	strb	r0, [sp, #32]
        1a9ee4:	e28d0090 	add	r0, sp, #144	; 0x90
        1a9ee8:	e3a06000 	mov	r6, #0	; 0x0
        1a9eec:	e3550000 	cmp	r5, #0	; 0x0
        1a9ef0:	e58d002c 	str	r0, [sp, #44]
        1a9ef4:	da00003b 	ble	1a9fe8 <TResponseManager::TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *)+0x1ec>
        1a9ef8:	e2450001 	sub	r0, r5, #1	; 0x1
        1a9efc:	e58d0108 	str	r0, [sp, #264]
        1a9f00:	e1a0100a 	mov	r1, sl
        1a9f04:	e59d010c 	ldr	r0, [sp, #268]
        1a9f08:	eb6926a8 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        1a9f0c:	e28d0090 	add	r0, sp, #144	; 0x90
        1a9f10:	eb635409 	bl	1a7ef3c <TWriteChain::$Reset(void)>
        1a9f14:	e0868086 	add	r8, r6, r6, lsl #1
        1a9f18:	e28d009c 	add	r0, sp, #156	; 0x9c
        1a9f1c:	e0807108 	add	r7, r0, r8, lsl #2
        1a9f20:	e5d70008 	ldrb	r0, [r7, #8]
        1a9f24:	e2400001 	sub	r0, r0, #1	; 0x1
        1a9f28:	e20000ff 	and	r0, r0, #255	; 0xff
        1a9f2c:	e59d1100 	ldr	r1, [sp, #256]
        1a9f30:	e3c118ff 	bic	r1, r1, #16711680	; 0xff0000
        1a9f34:	e1810800 	orr	r0, r1, r0, lsl #16
        1a9f38:	e58d0100 	str	r0, [sp, #256]
        1a9f3c:	e59d0108 	ldr	r0, [sp, #264]
        1a9f40:	e1300006 	teq	r0, r6
        1a9f44:	1a000002 	bne	1a9f54 <TResponseManager::TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *)+0x158>
        1a9f48:	e59d0100 	ldr	r0, [sp, #256]
        1a9f4c:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
        1a9f50:	e58d0100 	str	r0, [sp, #256]
        1a9f54:	e28d1c01 	add	r1, sp, #256	; 0x100
        1a9f58:	e28d0078 	add	r0, sp, #120	; 0x78
        1a9f5c:	e3a03002 	mov	r3, #2	; 0x2
        1a9f60:	e3a02004 	mov	r2, #4	; 0x4
        1a9f64:	eb634794 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        1a9f68:	e28d1078 	add	r1, sp, #120	; 0x78
        1a9f6c:	e28d0090 	add	r0, sp, #144	; 0x90
        1a9f70:	eb632aaa 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        1a9f74:	e5d40000 	ldrb	r0, [r4]
        1a9f78:	e3300000 	teq	r0, #0	; 0x0
        1a9f7c:	1a000007 	bne	1a9fa0 <TResponseManager::TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *)+0x1a4>
        1a9f80:	e28d10fc 	add	r1, sp, #252	; 0xfc
        1a9f84:	e28d0030 	add	r0, sp, #48	; 0x30
        1a9f88:	e3a03002 	mov	r3, #2	; 0x2
        1a9f8c:	e3a02004 	mov	r2, #4	; 0x4
        1a9f90:	eb634789 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        1a9f94:	e28d1030 	add	r1, sp, #48	; 0x30
        1a9f98:	e28d0090 	add	r0, sp, #144	; 0x90
        1a9f9c:	eb632aa1 	bl	1a74a28 <TWriteChain::$AddToEnd(TWriteElement *)>
        1a9fa0:	e59b0008 	ldr	r0, [fp, #8]
        1a9fa4:	eb692687 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        1a9fa8:	e1a01000 	mov	r1, r0
        1a9fac:	e28d009c 	add	r0, sp, #156	; 0x9c
        1a9fb0:	e7903108 	ldr	r3, [r0, r8, lsl #2]
        1a9fb4:	e28d0048 	add	r0, sp, #72	; 0x48
        1a9fb8:	e5b72004 	ldr	r2, [r7, #4]!	; fField4
        1a9fbc:	eb634784 	bl	1a7bdd4 <TSharedWriteElement::$Init(unsigned long, unsigned long, unsigned long)>
        1a9fc0:	e28d1048 	add	r1, sp, #72	; 0x48
        1a9fc4:	e28d0090 	add	r0, sp, #144	; 0x90
        1a9fc8:	eb632a96 	bl	1a74a28 <TWriteChain::$AddToEnd(TWriteElement *)>
        1a9fcc:	e1a0100d 	mov	r1, sp
        1a9fd0:	e1a00009 	mov	r0, r9
        1a9fd4:	eb635c29 	bl	1a81080 <TATP::$Write(TAppleTalkMessage *)>
        1a9fd8:	e2860001 	add	r0, r6, #1	; 0x1
        1a9fdc:	e20060ff 	and	r6, r0, #255	; 0xff
        1a9fe0:	e1560005 	cmp	r6, r5
        1a9fe4:	baffffc5 	blt	1a9f00 <TResponseManager::TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *)+0x104>
        1a9fe8:	e28d0030 	add	r0, sp, #48	; 0x30
        1a9fec:	e3a01000 	mov	r1, #0	; 0x0
        1a9ff0:	e1a0e00f 	mov	lr, pc
        1a9ff4:	e59df030 	ldr	pc, [sp, #48]
        1a9ff8:	e28d0048 	add	r0, sp, #72	; 0x48
        1a9ffc:	e3a01000 	mov	r1, #0	; 0x0
        1aa000:	e1a0e00f 	mov	lr, pc
        1aa004:	e59df048 	ldr	pc, [sp, #72]
        1aa008:	e28d0078 	add	r0, sp, #120	; 0x78
        1aa00c:	e3a01000 	mov	r1, #0	; 0x0
        1aa010:	e1a0e00f 	mov	lr, pc
        1aa014:	e59df078 	ldr	pc, [sp, #120]
        1aa018:	e28d0090 	add	r0, sp, #144	; 0x90
        1aa01c:	eb633b02 	bl	1a78c2c <TWriteChain::$Destroy(void)>
        1aa020:	e28ddf41 	add	sp, sp, #260	; 0x104
        1aa024:	e49d000c 	ldr	r0, [sp], #12
        1aa028:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1aa02c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

/**
 * Symbol: TResponseManager::HandleReleaseTimer(TTimerMessage *)
 * Address: 001aa030
 */
TResponseManager::HandleReleaseTimer(TTimerMessage *) {
    /*
        1aa030:	e1a0c00d 	mov	ip, sp
        1aa034:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1aa038:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aa03c:	e5b1201c 	ldr	r2, [r1, #28]!
        1aa040:	e1a01822 	mov	r1, r2, lsr #16
        1aa044:	e20110ff 	and	r1, r1, #255	; 0xff
        1aa048:	e1a05802 	mov	r5, r2, lsl #16
        1aa04c:	e1a05825 	mov	r5, r5, lsr #16
        1aa050:	eb634333 	bl	1a7ad24 <TResponseManager::$GetResponderSocket(unsigned char)>
        1aa054:	e1b04000 	movs	r4, r0
        1aa058:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1aa05c:	e1a01005 	mov	r1, r5
        1aa060:	e1a00004 	mov	r0, r4
        1aa064:	eb6353b3 	bl	1a7ef38 <TResponderSocket::$RemoveResponder(unsigned short)>
        1aa068:	e594000c 	ldr	r0, [r4, #12]
        1aa06c:	e3300001 	teq	r0, #1	; 0x1
        1aa070:	03a01000 	moveq	r1, #0	; 0x0
        1aa074:	05b40010 	ldreq	r0, [r4, #16]!
        1aa078:	05c01038 	streqb	r1, [r0, #56]	; fField56
        1aa07c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TResponseManager::CreateNewResponderSocket(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long, unsigned char)
 * Address: 001aa0e0
 */
TResponseManager::CreateNewResponderSocket(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long, unsigned char) {
    /*
        1aa0e0:	e1a0c00d 	mov	ip, sp
        1aa0e4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1aa0e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aa0ec:	e1a04000 	mov	r4, r0
        1aa0f0:	e20100ff 	and	r0, r1, #255	; 0xff
        1aa0f4:	e202c0ff 	and	ip, r2, #255	; 0xff
        1aa0f8:	e203e0ff 	and	lr, r3, #255	; 0xff
        1aa0fc:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        1aa100:	e1a01807 	mov	r1, r7, lsl #16
        1aa104:	e1a01821 	mov	r1, r1, lsr #16
        1aa108:	e28b6008 	add	r6, fp, #8	; 0x8
        1aa10c:	e8960060 	ldmia	r6, {r5, r6}
        1aa110:	e20630ff 	and	r3, r6, #255	; 0xff
        1aa114:	e1a02005 	mov	r2, r5
        1aa118:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1aa11c:	e1a0300e 	mov	r3, lr
        1aa120:	e1a0200c 	mov	r2, ip
        1aa124:	e1a01000 	mov	r1, r0
        1aa128:	e3a00000 	mov	r0, #0	; 0x0
        1aa12c:	eb6321fa 	bl	1a7291c <TResponderSocket::$__ct(unsigned char, unsigned char, unsigned char, unsigned short, unsigned long, unsigned char)>
        1aa130:	e28dd00c 	add	sp, sp, #12	; 0xc
        1aa134:	e3300000 	teq	r0, #0	; 0x0
        1aa138:	03a00000 	moveq	r0, #0	; 0x0
        1aa13c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1aa140:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1aa144:	e3310000 	teq	r1, #0	; 0x0
        1aa148:	15801018 	strne	r1, [r0, #24]	; fField24
        1aa14c:	e5a40004 	str	r0, [r4, #4]!	; fField4
        1aa150:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TResponseManager::Remove(unsigned char)
 * Address: 001aa154
 */
TResponseManager::Remove(unsigned char) {
    /*
        1aa154:	e1a0c00d 	mov	ip, sp
        1aa158:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1aa15c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aa160:	e201c0ff 	and	ip, r1, #255	; 0xff
        1aa164:	e3a03000 	mov	r3, #0	; 0x0
        1aa168:	e3a02000 	mov	r2, #0	; 0x0
        1aa16c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1aa170:	e3310000 	teq	r1, #0	; 0x0
        1aa174:	0a000010 	beq	1aa1bc <TResponseManager::Remove(unsigned char)+0x68>
        1aa178:	e5d1e000 	ldrb	lr, [r1]
        1aa17c:	e13e000c 	teq	lr, ip
        1aa180:	1a000009 	bne	1aa1ac <TResponseManager::Remove(unsigned char)+0x58>
        1aa184:	e3320000 	teq	r2, #0	; 0x0
        1aa188:	15910018 	ldrne	r0, [r1, #24]	; fField24
        1aa18c:	15a20018 	strne	r0, [r2, #24]!	; fField24
        1aa190:	05912018 	ldreq	r2, [r1, #24]	; fField24
        1aa194:	05a02004 	streq	r2, [r0, #4]!	; fField4
        1aa198:	e1b00001 	movs	r0, r1
        1aa19c:	13a01001 	movne	r1, #1	; 0x1
        1aa1a0:	1b632605 	blne	1a739bc <TResponderSocket::$__dt(void)>
        1aa1a4:	e3a03001 	mov	r3, #1	; 0x1
        1aa1a8:	ea000003 	b	1aa1bc <TResponseManager::Remove(unsigned char)+0x68>
        1aa1ac:	e1a02001 	mov	r2, r1
        1aa1b0:	e5911018 	ldr	r1, [r1, #24]	; fField24
        1aa1b4:	e3310000 	teq	r1, #0	; 0x0
        1aa1b8:	1affffee 	bne	1aa178 <TResponseManager::Remove(unsigned char)+0x24>
        1aa1bc:	e1a00003 	mov	r0, r3
        1aa1c0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TResponseManager::GetResponderSocket(unsigned char)
 * Address: 001aa1c4
 */
TResponseManager::GetResponderSocket(unsigned char) {
    /*
        1aa1c4:	e20110ff 	and	r1, r1, #255	; 0xff
        1aa1c8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1aa1cc:	e3300000 	teq	r0, #0	; 0x0
        1aa1d0:	0a000005 	beq	1aa1ec <TResponseManager::GetResponderSocket(unsigned char)+0x28>
        1aa1d4:	e5d02000 	ldrb	r2, [r0]
        1aa1d8:	e1320001 	teq	r2, r1
        1aa1dc:	01a0f00e 	moveq	pc, lr
        1aa1e0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1aa1e4:	e3300000 	teq	r0, #0	; 0x0
        1aa1e8:	1afffff9 	bne	1aa1d4 <TResponseManager::GetResponderSocket(unsigned char)+0x10>
        1aa1ec:	e3a00000 	mov	r0, #0	; 0x0
        1aa1f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)
 * Address: 001aa1f4
 */
TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *) {
    /*
        1aa1f4:	e1a0c00d 	mov	ip, sp
        1aa1f8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1aa1fc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1aa200:	e24cb014 	sub	fp, ip, #20	; 0x14
        1aa204:	e1a05000 	mov	r5, r0
        1aa208:	e1a04001 	mov	r4, r1
        1aa20c:	e1a09802 	mov	r9, r2, lsl #16
        1aa210:	e1a09829 	mov	r9, r9, lsr #16
        1aa214:	e203a0ff 	and	sl, r3, #255	; 0xff
        1aa218:	e59b1014 	ldr	r1, [fp, #20]
        1aa21c:	e20110ff 	and	r1, r1, #255	; 0xff
        1aa220:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        1aa224:	e20030ff 	and	r3, r0, #255	; 0xff
        1aa228:	e3a08000 	mov	r8, #0	; 0x0
        1aa22c:	e92d000a 	stmdb	sp!, {r1, r3}
        1aa230:	e5d41001 	ldrb	r1, [r4, #1]
        1aa234:	e1a00005 	mov	r0, r5
        1aa238:	eb6342b9 	bl	1a7ad24 <TResponseManager::$GetResponderSocket(unsigned char)>
        1aa23c:	e1b07000 	movs	r7, r0
        1aa240:	0a000045 	beq	1aa35c <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x168>
        1aa244:	e2870004 	add	r0, r7, #4	; 0x4
        1aa248:	e1a01004 	mov	r1, r4
        1aa24c:	eb634f17 	bl	1a7deb0 <TFilter::$Pass(TAddress const &)>
        1aa250:	e3300000 	teq	r0, #0	; 0x0
        1aa254:	0a000040 	beq	1aa35c <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x168>
        1aa258:	e33a0000 	teq	sl, #0	; 0x0
        1aa25c:	0a000018 	beq	1aa2c4 <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0xd0>
        1aa260:	e1a02004 	mov	r2, r4
        1aa264:	e1a01009 	mov	r1, r9
        1aa268:	e1a00007 	mov	r0, r7
        1aa26c:	e3a03001 	mov	r3, #1	; 0x1
        1aa270:	eb634af7 	bl	1a7ce54 <TResponderSocket::$MatchResponder(unsigned short, TAddress const &, AddressEquiv)>
        1aa274:	e1b06000 	movs	r6, r0
        1aa278:	0a000011 	beq	1aa2c4 <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0xd0>
        1aa27c:	e5d60000 	ldrb	r0, [r6]
        1aa280:	e3300000 	teq	r0, #0	; 0x0
        1aa284:	0a000034 	beq	1aa35c <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x168>
        1aa288:	e59b3024 	ldr	r3, [fp, #36]
        1aa28c:	e92d0008 	stmdb	sp!, {r3}
        1aa290:	e2863080 	add	r3, r6, #128	; 0x80
        1aa294:	e92d0008 	stmdb	sp!, {r3}
        1aa298:	e596307c 	ldr	r3, [r6, #124]
        1aa29c:	e1a03823 	mov	r3, r3, lsr #16
        1aa2a0:	e2862004 	add	r2, r6, #4	; 0x4
        1aa2a4:	e2861058 	add	r1, r6, #88	; 0x58
        1aa2a8:	e1a00005 	mov	r0, r5
        1aa2ac:	eb635767 	bl	1a80050 <TResponseManager::$TransmitResponses(TMemoryObject &, TSendResponsesFormat &, unsigned short, TAddress const &, TATP *)>
        1aa2b0:	e28dd008 	add	sp, sp, #8	; 0x8
        1aa2b4:	e1b08000 	movs	r8, r0
        1aa2b8:	0286008c 	addeq	r0, r6, #140	; 0x8c
        1aa2bc:	0b635321 	bleq	1a7ef48 <TMessageTimer::$Reset(void)>
        1aa2c0:	ea000025 	b	1aa35c <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x168>
        1aa2c4:	e1a00007 	mov	r0, r7
        1aa2c8:	eb634eff 	bl	1a7decc <TResponderSocket::$PullARequestor(void)>
        1aa2cc:	e1b05000 	movs	r5, r0
        1aa2d0:	0a000021 	beq	1aa35c <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x168>
        1aa2d4:	e33a0000 	teq	sl, #0	; 0x0
        1aa2d8:	0a000006 	beq	1aa2f8 <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x104>
        1aa2dc:	e1a02004 	mov	r2, r4
        1aa2e0:	e1a01009 	mov	r1, r9
        1aa2e4:	e1a00007 	mov	r0, r7
        1aa2e8:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        1aa2ec:	eb634ae1 	bl	1a7ce78 <TResponderSocket::$NewResponder(unsigned short, TAddress const &, unsigned char)>
        1aa2f0:	e1b08000 	movs	r8, r0
        1aa2f4:	1a000018 	bne	1aa35c <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x168>
        1aa2f8:	e1a02009 	mov	r2, r9
        1aa2fc:	e59d3000 	ldr	r3, [sp]
        1aa300:	e92d000c 	stmdb	sp!, {r2, r3}
        1aa304:	e1a01004 	mov	r1, r4
        1aa308:	e1a00005 	mov	r0, r5
        1aa30c:	e28b301c 	add	r3, fp, #28	; 0x1c
        1aa310:	e893000c 	ldmia	r3, {r2, r3}
        1aa314:	eb633a39 	bl	1a78c00 <TATPRequestor::$CopyRequest(TAddress &, unsigned char *, unsigned long, unsigned short, unsigned char)>
        1aa318:	e28dd008 	add	sp, sp, #8	; 0x8
        1aa31c:	e1a00005 	mov	r0, r5
        1aa320:	e3a01000 	mov	r1, #0	; 0x0
        1aa324:	e59b2028 	ldr	r2, [fp, #40]
        1aa328:	eb63362c 	bl	1a77be0 <TATPRequestor::$Complete(long, TPacketBuffer *)>
        1aa32c:	e1b08000 	movs	r8, r0
        1aa330:	1a000009 	bne	1aa35c <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x168>
        1aa334:	e5b7000c 	ldr	r0, [r7, #12]!
        1aa338:	e3300000 	teq	r0, #0	; 0x0
        1aa33c:	1a000004 	bne	1aa354 <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x160>
        1aa340:	e1a00005 	mov	r0, r5
        1aa344:	e3a01001 	mov	r1, #1	; 0x1
        1aa348:	e1a0e00f 	mov	lr, pc
        1aa34c:	e595f000 	ldr	pc, [r5]
        1aa350:	ea000001 	b	1aa35c <TResponseManager::HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)+0x168>
        1aa354:	e3a00001 	mov	r0, #1	; 0x1
        1aa358:	e5c50038 	strb	r0, [r5, #56]	; fField56
        1aa35c:	e1a00008 	mov	r0, r8
        1aa360:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TResponseManager::HandleRelease(TAddress &, unsigned short)
 * Address: 001aa364
 */
TResponseManager::HandleRelease(TAddress &, unsigned short) {
    /*
        1aa364:	e1a0c00d 	mov	ip, sp
        1aa368:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1aa36c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aa370:	e1a05802 	mov	r5, r2, lsl #16
        1aa374:	e1a05825 	mov	r5, r5, lsr #16
        1aa378:	e5d11001 	ldrb	r1, [r1, #1]
        1aa37c:	eb634268 	bl	1a7ad24 <TResponseManager::$GetResponderSocket(unsigned char)>
        1aa380:	e1b04000 	movs	r4, r0
        1aa384:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1aa388:	e1a01005 	mov	r1, r5
        1aa38c:	e1a00004 	mov	r0, r4
        1aa390:	eb6352e8 	bl	1a7ef38 <TResponderSocket::$RemoveResponder(unsigned short)>
        1aa394:	e594000c 	ldr	r0, [r4, #12]
        1aa398:	e3300001 	teq	r0, #1	; 0x1
        1aa39c:	03a01000 	moveq	r1, #0	; 0x0
        1aa3a0:	05b40010 	ldreq	r0, [r4, #16]!
        1aa3a4:	05c01038 	streqb	r1, [r0, #56]	; fField56
        1aa3a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

