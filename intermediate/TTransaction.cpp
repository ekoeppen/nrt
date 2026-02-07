#include "include/TTransaction.h"

/**
 * Symbol: TTransaction::__ct(void)
 * Address: 00027a68
 */
TTransaction::TTransaction(void) {
    /*
         27a68:	e1a0c00d 	mov	ip, sp
         27a6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         27a70:	e24cb004 	sub	fp, ip, #4	; 0x4
         27a74:	e1b04000 	movs	r4, r0
         27a78:	1a000003 	bne	27a8c <TTransaction::__ct(void)+0x24>
         27a7c:	e3a00f4d 	mov	r0, #308	; 0x134
         27a80:	eb6e9b2c 	bl	1bce738 <$__nw(unsigned int)>
         27a84:	e1b04000 	movs	r4, r0
         27a88:	0a00001d 	beq	27b04 <TTransaction::__ct(void)+0x9c>
         27a8c:	e284000c 	add	r0, r4, #12	; 0xc
         27a90:	eb6f2fc7 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
         27a94:	e2840030 	add	r0, r4, #48	; 0x30
         27a98:	eb692ba7 	bl	1a7293c <TTransactionResponses::$__ct(void)>
         27a9c:	e28400a0 	add	r0, r4, #160	; 0xa0
         27aa0:	eb692788 	bl	1a718c8 <TMessageTimer::$__ct(void)>
         27aa4:	e28400dc 	add	r0, r4, #220	; 0xdc
         27aa8:	eb692777 	bl	1a7188c <TATPHeader::$__ct(void)>
         27aac:	e28400e0 	add	r0, r4, #224	; 0xe0
         27ab0:	e3a01001 	mov	r1, #1	; 0x1
         27ab4:	eb6f2fbc 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         27ab8:	e28400ec 	add	r0, r4, #236	; 0xec
         27abc:	eb692779 	bl	1a718a8 <TCompletion::$__ct(void)>
         27ac0:	e2840f42 	add	r0, r4, #264	; 0x108
         27ac4:	eb6e96f8 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         27ac8:	e2840f46 	add	r0, r4, #280	; 0x118
         27acc:	eb6ef1d9 	bl	1be4238 <TAEvent::$__ct(void)>
         27ad0:	e59f0034 	ldr	r0, [pc, #34]	; 27b0c <TTransaction::__ct(void)+0xa4>
         27ad4:	e5840118 	str	r0, [r4, #280]
         27ad8:	e3a00000 	mov	r0, #0	; 0x0
         27adc:	e5840124 	str	r0, [r4, #292]
         27ae0:	e5840120 	str	r0, [r4, #288]
         27ae4:	e59f1024 	ldr	r1, [pc, #24]	; 27b10 <TTransaction::__ct(void)+0xa8>
         27ae8:	e584111c 	str	r1, [r4, #284]
         27aec:	e3a01003 	mov	r1, #3	; 0x3
         27af0:	e2811c03 	add	r1, r1, #768	; 0x300
         27af4:	e5841128 	str	r1, [r4, #296]
         27af8:	e59f1014 	ldr	r1, [pc, #14]	; 27b14 <TTransaction::__ct(void)+0xac>
         27afc:	e5840130 	str	r0, [r4, #304]
         27b00:	e5841000 	str	r1, [r4]
         27b04:	e1a00004 	mov	r0, r4
         27b08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         27b0c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         27b10:	61747020 	cmnvs	r4, r0, lsr #32
         27b14:	0001c6b4 	streqh	ip, [r1], -r4
    */
}

/**
 * Symbol: TTransaction::Init(TCompletion &, unsigned short, TSendRequestMessage *)
 * Address: 00027b18
 */
TTransaction::Init(TCompletion &, unsigned short, TSendRequestMessage *) {
    /*
         27b18:	e1a0c00d 	mov	ip, sp
         27b1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         27b20:	e24cb004 	sub	fp, ip, #4	; 0x4
         27b24:	e1a04000 	mov	r4, r0
         27b28:	e1a05003 	mov	r5, r3
         27b2c:	e1a00802 	mov	r0, r2, lsl #16
         27b30:	e1a00820 	mov	r0, r0, lsr #16
         27b34:	e28460ec 	add	r6, r4, #236	; 0xec
         27b38:	e1a0e001 	mov	lr, r1
         27b3c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
         27b40:	e8a6100e 	stmia	r6!, {r1, r2, r3, ip}
         27b44:	e89e100c 	ldmia	lr, {r2, r3, ip}
         27b48:	e886100c 	stmia	r6, {r2, r3, ip}
         27b4c:	e1a01000 	mov	r1, r0
         27b50:	e1a00004 	mov	r0, r4
         27b54:	eb69611a 	bl	1a7ffc4 <TTransaction::$SetTID(unsigned short)>
         27b58:	e5d50015 	ldrb	r0, [r5, #21]
         27b5c:	e5c4009c 	strb	r0, [r4, #156]	; fField156
         27b60:	e5d50014 	ldrb	r0, [r5, #20]
         27b64:	e20010ff 	and	r1, r0, #255	; 0xff
         27b68:	e28400dc 	add	r0, r4, #220	; 0xdc
         27b6c:	e1a06000 	mov	r6, r0
         27b70:	e5902000 	ldr	r2, [r0]
         27b74:	e3c22202 	bic	r2, r2, #536870912	; 0x20000000
         27b78:	e2011001 	and	r1, r1, #1	; 0x1
         27b7c:	e1821e81 	orr	r1, r2, r1, lsl #29
         27b80:	e5801000 	str	r1, [r0]
         27b84:	e5d5102c 	ldrb	r1, [r5, #44]
         27b88:	e1a00004 	mov	r0, r4
         27b8c:	eb69610e 	bl	1a7ffcc <TTransaction::$SetupBitmap(unsigned char)>
         27b90:	e5d50014 	ldrb	r0, [r5, #20]
         27b94:	e3300000 	teq	r0, #0	; 0x0
         27b98:	05960000 	ldreq	r0, [r6]
         27b9c:	03c00407 	biceq	r0, r0, #117440512	; 0x7000000
         27ba0:	0a000004 	beq	27bb8 <TTransaction::Init(TCompletion &, unsigned short, TSendRequestMessage *)+0xa0>
         27ba4:	e5d50038 	ldrb	r0, [r5, #56]
         27ba8:	e5961000 	ldr	r1, [r6]
         27bac:	e3c11407 	bic	r1, r1, #117440512	; 0x7000000
         27bb0:	e2000007 	and	r0, r0, #7	; 0x7
         27bb4:	e1810c00 	orr	r0, r1, r0, lsl #24
         27bb8:	e5860000 	str	r0, [r6]
         27bbc:	e5950030 	ldr	r0, [r5, #48]
         27bc0:	e5840004 	str	r0, [r4, #4]	; fField4
         27bc4:	e5950034 	ldr	r0, [r5, #52]
         27bc8:	e2851018 	add	r1, r5, #24	; 0x18
         27bcc:	e5840008 	str	r0, [r4, #8]	; fField8
         27bd0:	e28400e0 	add	r0, r4, #224	; 0xe0
         27bd4:	eb6f2f75 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         27bd8:	e284000c 	add	r0, r4, #12	; 0xc
         27bdc:	e3a02000 	mov	r2, #0	; 0x0
         27be0:	e5951024 	ldr	r1, [r5, #36]
         27be4:	eb695491 	bl	1a7ce30 <TMemoryObject::$Make(unsigned long, TUMsgToken *)>
         27be8:	e5b51028 	ldr	r1, [r5, #40]!
         27bec:	e3310000 	teq	r1, #0	; 0x0
         27bf0:	0a000005 	beq	27c0c <TTransaction::Init(TCompletion &, unsigned short, TSendRequestMessage *)+0xf4>
         27bf4:	e2840030 	add	r0, r4, #48	; 0x30
         27bf8:	e1a05000 	mov	r5, r0
         27bfc:	e3a02000 	mov	r2, #0	; 0x0
         27c00:	eb69548a 	bl	1a7ce30 <TMemoryObject::$Make(unsigned long, TUMsgToken *)>
         27c04:	e1a00005 	mov	r0, r5
         27c08:	eb695072 	bl	1a7bdd8 <TTransactionResponses::$Init(void)>
         27c0c:	e2840f42 	add	r0, r4, #264	; 0x108
         27c10:	e3a01001 	mov	r1, #1	; 0x1
         27c14:	eb6eb79e 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         27c18:	e3300000 	teq	r0, #0	; 0x0
         27c1c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         27c20:	e59f1018 	ldr	r1, [pc, #18]	; 27c40 <TTransaction::Init(TCompletion &, unsigned short, TSendRequestMessage *)+0x128>
         27c24:	e5841118 	str	r1, [r4, #280]
         27c28:	e59f1014 	ldr	r1, [pc, #14]	; 27c44 <TTransaction::Init(TCompletion &, unsigned short, TSendRequestMessage *)+0x12c>
         27c2c:	e584111c 	str	r1, [r4, #284]
         27c30:	e3a01003 	mov	r1, #3	; 0x3
         27c34:	e2811c03 	add	r1, r1, #768	; 0x300
         27c38:	e5a41128 	str	r1, [r4, #296]!
         27c3c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         27c40:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         27c44:	61747020 	cmnvs	r4, r0, lsr #32
    */
}

/**
 * Symbol: TTransaction::StartTimer(unsigned char)
 * Address: 00027c48
 */
TTransaction::StartTimer(unsigned char) {
    /*
         27c48:	e1a0c00d 	mov	ip, sp
         27c4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         27c50:	e24cb004 	sub	fp, ip, #4	; 0x4
         27c54:	e1a04000 	mov	r4, r0
         27c58:	e31100ff 	tst	r1, #255	; 0xff
         27c5c:	11a00004 	movne	r0, r4
         27c60:	1b6960eb 	blne	1a80014 <TTransaction::$StopTimer(void)>
         27c64:	e59400dc 	ldr	r0, [r4, #220]	; fField220
         27c68:	e1a03800 	mov	r3, r0, lsl #16
         27c6c:	e1a03823 	mov	r3, r3, lsr #16
         27c70:	e3a02003 	mov	r2, #3	; 0x3
         27c74:	e3a01001 	mov	r1, #1	; 0x1
         27c78:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         27c7c:	eb6eaf54 	bl	1bd39d4 <$GetGlobals>
         27c80:	eb6f01ed 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         27c84:	e1a01000 	mov	r1, r0
         27c88:	e5943008 	ldr	r3, [r4, #8]	; fField8
         27c8c:	e28400a0 	add	r0, r4, #160	; 0xa0
         27c90:	e1a04000 	mov	r4, r0
         27c94:	e59f200c 	ldr	r2, [pc, #c]	; 27ca8 <TTransaction::StartTimer(unsigned char)+0x60>
         27c98:	eb695045 	bl	1a7bdb4 <TMessageTimer::$Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long)>
         27c9c:	e1a00004 	mov	r0, r4
         27ca0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         27ca4:	ea6960d3 	b	1a7fff8 <TMessageTimer::$Start(void)>
         27ca8:	61747020 	cmnvs	r4, r0, lsr #32
    */
}

/**
 * Symbol: TTransaction::StopTimer(void)
 * Address: 00027cac
 */
TTransaction::StopTimer(void) {
    /*
         27cac:	e28000a0 	add	r0, r0, #160	; 0xa0
         27cb0:	ea6960d5 	b	1a8000c <TMessageTimer::$Stop(void)>
    */
}

/**
 * Symbol: TTransaction::Complete(long)
 * Address: 00027cb4
 */
TTransaction::Complete(long) {
    /*
         27cb4:	e1a0c00d 	mov	ip, sp
         27cb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         27cbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         27cc0:	e1a04000 	mov	r4, r0
         27cc4:	e1b05001 	movs	r5, r1
         27cc8:	02840030 	addeq	r0, r4, #48	; 0x30
         27ccc:	0b693fca 	bleq	1a77bfc <TTransactionResponses::$CopyOutResponseHeader(void)>
         27cd0:	e28400ec 	add	r0, r4, #236	; 0xec
         27cd4:	e1a01005 	mov	r1, r5
         27cd8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         27cdc:	ea693fbc 	b	1a77bd4 <TCompletion::$Complete(long)>
    */
}

/**
 * Symbol: TTransaction::PrepareRequestPacket(TWriteChain *, TWriteElement *, TSharedWriteElement *)
 * Address: 00027ce0
 */
TTransaction::PrepareRequestPacket(TWriteChain *, TWriteElement *, TSharedWriteElement *) {
    /*
         27ce0:	e1a0c00d 	mov	ip, sp
         27ce4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         27ce8:	e24cb004 	sub	fp, ip, #4	; 0x4
         27cec:	e1a07000 	mov	r7, r0
         27cf0:	e1a06001 	mov	r6, r1
         27cf4:	e1a05002 	mov	r5, r2
         27cf8:	e1a04003 	mov	r4, r3
         27cfc:	e3a08000 	mov	r8, #0	; 0x0
         27d00:	e28000dc 	add	r0, r0, #220	; 0xdc
         27d04:	e1a01000 	mov	r1, r0
         27d08:	e5902000 	ldr	r2, [r0]
         27d0c:	e3c22103 	bic	r2, r2, #-1073741824	; 0xc0000000
         27d10:	e3822101 	orr	r2, r2, #1073741824	; 0x40000000
         27d14:	e5802000 	str	r2, [r0]
         27d18:	e1a00005 	mov	r0, r5
         27d1c:	e3a03000 	mov	r3, #0	; 0x0
         27d20:	e3a02004 	mov	r2, #4	; 0x4
         27d24:	eb695024 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         27d28:	e1a01005 	mov	r1, r5
         27d2c:	e1a00006 	mov	r0, r6
         27d30:	eb69333a 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
         27d34:	e287000c 	add	r0, r7, #12	; 0xc
         27d38:	e590501c 	ldr	r5, [r0, #28]	; fField28
         27d3c:	eb6f2f21 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
         27d40:	e1a01000 	mov	r1, r0
         27d44:	e1a00004 	mov	r0, r4
         27d48:	e3a03000 	mov	r3, #0	; 0x0
         27d4c:	e1a02005 	mov	r2, r5
         27d50:	eb69501f 	bl	1a7bdd4 <TSharedWriteElement::$Init(unsigned long, unsigned long, unsigned long)>
         27d54:	e1a01004 	mov	r1, r4
         27d58:	e1a00006 	mov	r0, r6
         27d5c:	eb693331 	bl	1a74a28 <TWriteChain::$AddToEnd(TWriteElement *)>
         27d60:	e1a00008 	mov	r0, r8
         27d64:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TTransaction::CopyResponse(unsigned char, unsigned long, unsigned char *)
 * Address: 00027d68
 */
TTransaction::CopyResponse(unsigned char, unsigned long, unsigned char *) {
    /*
         27d68:	e1a0c00d 	mov	ip, sp
         27d6c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         27d70:	e24cb004 	sub	fp, ip, #4	; 0x4
         27d74:	e1a0c003 	mov	ip, r3
         27d78:	e20110ff 	and	r1, r1, #255	; 0xff
         27d7c:	e5d0309c 	ldrb	r3, [r0, #156]	; fField156
         27d80:	e92d0008 	stmdb	sp!, {r3}
         27d84:	e2800030 	add	r0, r0, #48	; 0x30
         27d88:	e1a0300c 	mov	r3, ip
         27d8c:	eb693f98 	bl	1a77bf4 <TTransactionResponses::$Copy(unsigned char, unsigned long, unsigned char *, unsigned char)>
         27d90:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TTransaction::ExpectingThisResponse(unsigned char)
 * Address: 00027d94
 */
TTransaction::ExpectingThisResponse(unsigned char) {
    /*
         27d94:	e20110ff 	and	r1, r1, #255	; 0xff
         27d98:	e5b020dc 	ldr	r2, [r0, #220]!	; fField220
         27d9c:	e1a0c402 	mov	ip, r2, lsl #8
         27da0:	e1a0cc2c 	mov	ip, ip, lsr #24
         27da4:	e1a0315c 	mov	r3, ip, asr r1
         27da8:	e3130001 	tst	r3, #1	; 0x1
         27dac:	03a00000 	moveq	r0, #0	; 0x0
         27db0:	01a0f00e 	moveq	pc, lr
         27db4:	e1a03000 	mov	r3, r0
         27db8:	e3a00001 	mov	r0, #1	; 0x1
         27dbc:	e1a0c110 	mov	ip, r0, lsl r1
         27dc0:	e3a018ff 	mov	r1, #16711680	; 0xff0000
         27dc4:	e001180c 	and	r1, r1, ip, lsl #16
         27dc8:	e1c21001 	bic	r1, r2, r1
         27dcc:	e5831000 	str	r1, [r3]
         27dd0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransaction::ClearHigherBits(unsigned char)
 * Address: 00027dd4
 */
TTransaction::ClearHigherBits(unsigned char) {
    /*
         27dd4:	e92d4010 	stmdb	sp!, {r4, lr}
         27dd8:	e20110ff 	and	r1, r1, #255	; 0xff
         27ddc:	e2811001 	add	r1, r1, #1	; 0x1
         27de0:	e20110ff 	and	r1, r1, #255	; 0xff
         27de4:	e28020dc 	add	r2, r0, #220	; 0xdc
         27de8:	e3a0c001 	mov	ip, #1	; 0x1
         27dec:	e3a038ff 	mov	r3, #16711680	; 0xff0000
         27df0:	e3510007 	cmp	r1, #7	; 0x7
         27df4:	c8bd8010 	ldmgtia	sp!, {r4, pc}
         27df8:	e201e0ff 	and	lr, r1, #255	; 0xff
         27dfc:	e1a0ee1c 	mov	lr, ip, lsl lr
         27e00:	e003e80e 	and	lr, r3, lr, lsl #16
         27e04:	e1e0400e 	mvn	r4, lr
         27e08:	e592e000 	ldr	lr, [r2]
         27e0c:	e004e00e 	and	lr, r4, lr
         27e10:	e2810001 	add	r0, r1, #1	; 0x1
         27e14:	e20010ff 	and	r1, r0, #255	; 0xff
         27e18:	e3510007 	cmp	r1, #7	; 0x7
         27e1c:	e582e000 	str	lr, [r2]
         27e20:	dafffff4 	ble	27df8 <TTransaction::ClearHigherBits(unsigned char)+0x24>
         27e24:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TTransaction::DecrementRetries(void)
 * Address: 00027e28
 */
TTransaction::DecrementRetries(void) {
    /*
         27e28:	e5901004 	ldr	r1, [r0, #4]	; fField4
         27e2c:	e3710001 	cmn	r1, #1	; 0x1
         27e30:	12411001 	subne	r1, r1, #1	; 0x1
         27e34:	15a01004 	strne	r1, [r0, #4]!	; fField4
         27e38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransaction::Again(void)
 * Address: 00027e78
 */
TTransaction::Again(void) {
    /*
         27e78:	e1a0c00d 	mov	ip, sp
         27e7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         27e80:	e24cb004 	sub	fp, ip, #4	; 0x4
         27e84:	e1a04000 	mov	r4, r0
         27e88:	e59000dc 	ldr	r0, [r0, #220]	; fField220
         27e8c:	e1a00800 	mov	r0, r0, lsl #16
         27e90:	e1a00820 	mov	r0, r0, lsr #16
         27e94:	e584012c 	str	r0, [r4, #300]	; fField300
         27e98:	eb6eaecd 	bl	1bd39d4 <$GetGlobals>
         27e9c:	eb6f0166 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         27ea0:	e1a0c000 	mov	ip, r0
         27ea4:	e284ef42 	add	lr, r4, #264	; 0x108
         27ea8:	e2844f46 	add	r4, r4, #280	; 0x118
         27eac:	e3a02000 	mov	r2, #0	; 0x0
         27eb0:	e3a03000 	mov	r3, #0	; 0x0
         27eb4:	e3a05000 	mov	r5, #0	; 0x0
         27eb8:	e3a01000 	mov	r1, #0	; 0x0
         27ebc:	e3a00001 	mov	r0, #1	; 0x1
         27ec0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         27ec4:	e1a03005 	mov	r3, r5
         27ec8:	e3a02018 	mov	r2, #24	; 0x18
         27ecc:	e92d000c 	stmdb	sp!, {r2, r3}
         27ed0:	e1a03004 	mov	r3, r4
         27ed4:	e1a0000c 	mov	r0, ip
         27ed8:	e3a02000 	mov	r2, #0	; 0x0
         27edc:	e59e1000 	ldr	r1, [lr]
         27ee0:	eb6ecb98 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         27ee4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTransaction::SetupBitmap(unsigned char)
 * Address: 00027ee8
 */
TTransaction::SetupBitmap(unsigned char) {
    /*
         27ee8:	e20110ff 	and	r1, r1, #255	; 0xff
         27eec:	e2612008 	rsb	r2, r1, #8	; 0x8
         27ef0:	e3a010ff 	mov	r1, #255	; 0xff
         27ef4:	e1a01231 	mov	r1, r1, lsr r2
         27ef8:	e20110ff 	and	r1, r1, #255	; 0xff
         27efc:	e5b020dc 	ldr	r2, [r0, #220]!	; fField220
         27f00:	e3c228ff 	bic	r2, r2, #16711680	; 0xff0000
         27f04:	e1821801 	orr	r1, r2, r1, lsl #16
         27f08:	e5801000 	str	r1, [r0]
         27f0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransaction::SetTID(unsigned short)
 * Address: 00027f10
 */
TTransaction::SetTID(unsigned short) {
    /*
         27f10:	e1a01801 	mov	r1, r1, lsl #16
         27f14:	e5b020dc 	ldr	r2, [r0, #220]!	; fField220
         27f18:	e1a02822 	mov	r2, r2, lsr #16
         27f1c:	e1a02802 	mov	r2, r2, lsl #16
         27f20:	e1821821 	orr	r1, r2, r1, lsr #16
         27f24:	e5801000 	str	r1, [r0]
         27f28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransaction::__dt(void)
 * Address: 00028c4c
 */
TTransaction::~TTransaction(void) {
    /*
         28c4c:	e1a0c00d 	mov	ip, sp
         28c50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         28c54:	e24cb004 	sub	fp, ip, #4	; 0x4
         28c58:	e1a04000 	mov	r4, r0
         28c5c:	e1a05001 	mov	r5, r1
         28c60:	e59f0044 	ldr	r0, [pc, #44]	; 28cac <TTransaction::__dt(void)+0x60>
         28c64:	e5840000 	str	r0, [r4]
         28c68:	e2840f42 	add	r0, r4, #264	; 0x108
         28c6c:	e3a01000 	mov	r1, #0	; 0x0
         28c70:	eb6e96a6 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         28c74:	e28400a0 	add	r0, r4, #160	; 0xa0
         28c78:	e3a01000 	mov	r1, #0	; 0x0
         28c7c:	eb6e96a3 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         28c80:	e2840030 	add	r0, r4, #48	; 0x30
         28c84:	e3a01000 	mov	r1, #0	; 0x0
         28c88:	eb6f2b4b 	bl	1bf39bc <TMemoryObject::$__dt(void)>
         28c8c:	e284000c 	add	r0, r4, #12	; 0xc
         28c90:	e3a01000 	mov	r1, #0	; 0x0
         28c94:	eb6f2b48 	bl	1bf39bc <TMemoryObject::$__dt(void)>
         28c98:	e3150001 	tst	r5, #1	; 0x1
         28c9c:	11a00004 	movne	r0, r4
         28ca0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         28ca4:	1a6e928d 	bne	1bcd6e0 <$__dl(void *)>
         28ca8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         28cac:	0001c6b4 	streqh	ip, [r1], -r4
    */
}

