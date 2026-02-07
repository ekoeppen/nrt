#include "include/TATSocket.h"

/**
 * Symbol: TATSocket::__ct(void)
 * Address: 0007b4a0
 */
TATSocket::TATSocket(void) {
    /*
         7b4a0:	e1a0c00d 	mov	ip, sp
         7b4a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         7b4a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b4ac:	e1b04000 	movs	r4, r0
         7b4b0:	1a000003 	bne	7b4c4 <TATSocket::__ct(void)+0x24>
         7b4b4:	e3a0002c 	mov	r0, #44	; 0x2c
         7b4b8:	eb6d4c9e 	bl	1bce738 <$__nw(unsigned int)>
         7b4bc:	e1b04000 	movs	r4, r0
         7b4c0:	0a000005 	beq	7b4dc <TATSocket::__ct(void)+0x3c>
         7b4c4:	e2840008 	add	r0, r4, #8	; 0x8
         7b4c8:	eb67d8f6 	bl	1a718a8 <TCompletion::$__ct(void)>
         7b4cc:	e3a00000 	mov	r0, #0	; 0x0
         7b4d0:	e5840004 	str	r0, [r4, #4]	; fField4
         7b4d4:	e5840024 	str	r0, [r4, #36]	; fField36
         7b4d8:	e5840028 	str	r0, [r4, #40]	; fField40
         7b4dc:	e1a00004 	mov	r0, r4
         7b4e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TATSocket::__dt(void)
 * Address: 0007b960
 */
TATSocket::~TATSocket(void) {
    /*
         7b960:	e1a0c00d 	mov	ip, sp
         7b964:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7b968:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b96c:	e1a04000 	mov	r4, r0
         7b970:	e1a05001 	mov	r5, r1
         7b974:	e5900028 	ldr	r0, [r0, #40]	; fField40
         7b978:	e3300000 	teq	r0, #0	; 0x0
         7b97c:	13a01001 	movne	r1, #1	; 0x1
         7b980:	1b6e36be 	blne	1c09480 <TCircleBuf::$__dt(void)>
         7b984:	e3150001 	tst	r5, #1	; 0x1
         7b988:	11a00004 	movne	r0, r4
         7b98c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         7b990:	1a6d4752 	bne	1bcd6e0 <$__dl(void *)>
         7b994:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TATSocket::Init(unsigned char, TOpenSocketMessage *)
 * Address: 0007b998
 */
TATSocket::Init(unsigned char, TOpenSocketMessage *) {
    /*
         7b998:	e1a0c00d 	mov	ip, sp
         7b99c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7b9a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         7b9a4:	e1a05000 	mov	r5, r0
         7b9a8:	e1a04002 	mov	r4, r2
         7b9ac:	e3a00000 	mov	r0, #0	; 0x0
         7b9b0:	e5c51000 	strb	r1, [r5]
         7b9b4:	e5d21015 	ldrb	r1, [r2, #21]
         7b9b8:	e5c51001 	strb	r1, [r5, #1]	; fField1
         7b9bc:	e5921018 	ldr	r1, [r2, #24]
         7b9c0:	e5851004 	str	r1, [r5, #4]	; fField4
         7b9c4:	e5d51001 	ldrb	r1, [r5, #1]	; fField1
         7b9c8:	e3310000 	teq	r1, #0	; 0x0
         7b9cc:	1594101c 	ldrne	r1, [r4, #28]
         7b9d0:	13310000 	teqne	r1, #0	; 0x0
         7b9d4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         7b9d8:	e3a00000 	mov	r0, #0	; 0x0
         7b9dc:	eb6e32a6 	bl	1c0847c <TCircleBuf::$__ct(void)>
         7b9e0:	e5a50028 	str	r0, [r5, #40]!	; fField40
         7b9e4:	e3300000 	teq	r0, #0	; 0x0
         7b9e8:	03a000a8 	moveq	r0, #168	; 0xa8
         7b9ec:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         7b9f0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         7b9f4:	e3a03000 	mov	r3, #0	; 0x0
         7b9f8:	e92d0008 	stmdb	sp!, {r3}
         7b9fc:	e2844018 	add	r4, r4, #24	; 0x18
         7ba00:	e9b40006 	ldmib	r4!, {r1, r2}
         7ba04:	eb6e2a46 	bl	1c06324 <TCircleBuf::$Allocate(unsigned long, int, unsigned char, unsigned char)>
         7ba08:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TATSocket::WriteLong(TAddress *, TAddress *, TPacketMessage &, unsigned char)
 * Address: 0007ba0c
 */
TATSocket::WriteLong(TAddress *, TAddress *, TPacketMessage &, unsigned char) {
    /*
         7ba0c:	e1a0c00d 	mov	ip, sp
         7ba10:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         7ba14:	e24cb004 	sub	fp, ip, #4	; 0x4
         7ba18:	e1a06000 	mov	r6, r0
         7ba1c:	e1a07001 	mov	r7, r1
         7ba20:	e1a05002 	mov	r5, r2
         7ba24:	e1a04003 	mov	r4, r3
         7ba28:	e24dd028 	sub	sp, sp, #40	; 0x28
         7ba2c:	e1a0000d 	mov	r0, sp
         7ba30:	eb67d7ab 	bl	1a718e4 <TWriteElement::$__ct(void)>
         7ba34:	e5960004 	ldr	r0, [r6, #4]	; fField4
         7ba38:	e3300000 	teq	r0, #0	; 0x0
         7ba3c:	0a00005f 	beq	7bbc0 <TATSocket::WriteLong(TAddress *, TAddress *, TPacketMessage &, unsigned char)+0x1b4>
         7ba40:	e594002c 	ldr	r0, [r4, #44]
         7ba44:	eb6804f2 	bl	1a7ce14 <TWriteChain::$Length(void)>
         7ba48:	e250cf92 	subs	ip, r0, #584	; 0x248
         7ba4c:	235c0002 	cmpcs	ip, #2	; 0x2
         7ba50:	83a0404e 	movhi	r4, #78	; 0x4e
         7ba54:	82444a03 	subhi	r4, r4, #12288	; 0x3000
         7ba58:	8a000059 	bhi	7bbc4 <TATSocket::WriteLong(TAddress *, TAddress *, TPacketMessage &, unsigned char)+0x1b8>
         7ba5c:	e3a00002 	mov	r0, #2	; 0x2
         7ba60:	e5c40021 	strb	r0, [r4, #33]
         7ba64:	e59d0018 	ldr	r0, [sp, #24]
         7ba68:	e3c00103 	bic	r0, r0, #-1073741824	; 0xc0000000
         7ba6c:	e58d0018 	str	r0, [sp, #24]
         7ba70:	e3c0030f 	bic	r0, r0, #1006632960	; 0x3c000000
         7ba74:	e58d0018 	str	r0, [sp, #24]
         7ba78:	e1a00820 	mov	r0, r0, lsr #16
         7ba7c:	e1a00800 	mov	r0, r0, lsl #16
         7ba80:	e58d0018 	str	r0, [sp, #24]
         7ba84:	e2840014 	add	r0, r4, #20	; 0x14
         7ba88:	e1a08000 	mov	r8, r0
         7ba8c:	e5900008 	ldr	r0, [r0, #8]	; fField8
         7ba90:	e1a00820 	mov	r0, r0, lsr #16
         7ba94:	e59d101c 	ldr	r1, [sp, #28]
         7ba98:	e1a01801 	mov	r1, r1, lsl #16
         7ba9c:	e1a01821 	mov	r1, r1, lsr #16
         7baa0:	e1810800 	orr	r0, r1, r0, lsl #16
         7baa4:	e58d001c 	str	r0, [sp, #28]
         7baa8:	e5950008 	ldr	r0, [r5, #8]	; fField8
         7baac:	e1a00820 	mov	r0, r0, lsr #16
         7bab0:	e59d101c 	ldr	r1, [sp, #28]
         7bab4:	e1a01821 	mov	r1, r1, lsr #16
         7bab8:	e1a01801 	mov	r1, r1, lsl #16
         7babc:	e1a00800 	mov	r0, r0, lsl #16
         7bac0:	e1810820 	orr	r0, r1, r0, lsr #16
         7bac4:	e58d001c 	str	r0, [sp, #28]
         7bac8:	e5d8000a 	ldrb	r0, [r8, #10]
         7bacc:	e59d1020 	ldr	r1, [sp, #32]
         7bad0:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
         7bad4:	e1810c00 	orr	r0, r1, r0, lsl #24
         7bad8:	e58d0020 	str	r0, [sp, #32]
         7badc:	e5d5000a 	ldrb	r0, [r5, #10]
         7bae0:	e59d1020 	ldr	r1, [sp, #32]
         7bae4:	e3c118ff 	bic	r1, r1, #16711680	; 0xff0000
         7bae8:	e1810800 	orr	r0, r1, r0, lsl #16
         7baec:	e58d0020 	str	r0, [sp, #32]
         7baf0:	e5d8000b 	ldrb	r0, [r8, #11]
         7baf4:	e59d1020 	ldr	r1, [sp, #32]
         7baf8:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
         7bafc:	e1810400 	orr	r0, r1, r0, lsl #8
         7bb00:	e58d0020 	str	r0, [sp, #32]
         7bb04:	e5d60000 	ldrb	r0, [r6]
         7bb08:	e59d1020 	ldr	r1, [sp, #32]
         7bb0c:	e3c110ff 	bic	r1, r1, #255	; 0xff
         7bb10:	e1810000 	orr	r0, r1, r0
         7bb14:	e58d0020 	str	r0, [sp, #32]
         7bb18:	e5d40020 	ldrb	r0, [r4, #32]
         7bb1c:	e59d1024 	ldr	r1, [sp, #36]	; fField36
         7bb20:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
         7bb24:	e1810c00 	orr	r0, r1, r0, lsl #24
         7bb28:	e58d0024 	str	r0, [sp, #36]	; fField36
         7bb2c:	e28d1018 	add	r1, sp, #24	; 0x18
         7bb30:	e1a0000d 	mov	r0, sp
         7bb34:	e3a03002 	mov	r3, #2	; 0x2
         7bb38:	e3a0200d 	mov	r2, #13	; 0xd
         7bb3c:	eb68009e 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         7bb40:	e1a0100d 	mov	r1, sp
         7bb44:	e594002c 	ldr	r0, [r4, #44]
         7bb48:	eb67e3b4 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
         7bb4c:	e594002c 	ldr	r0, [r4, #44]
         7bb50:	eb6804af 	bl	1a7ce14 <TWriteChain::$Length(void)>
         7bb54:	e59d1018 	ldr	r1, [sp, #24]
         7bb58:	e3c11403 	bic	r1, r1, #50331648	; 0x3000000
         7bb5c:	e3c118ff 	bic	r1, r1, #16711680	; 0xff0000
         7bb60:	e1a00b00 	mov	r0, r0, lsl #22
         7bb64:	e1a00b20 	mov	r0, r0, lsr #22
         7bb68:	e1810800 	orr	r0, r1, r0, lsl #16
         7bb6c:	e58d0018 	str	r0, [sp, #24]
         7bb70:	e1a00008 	mov	r0, r8
         7bb74:	e1a01007 	mov	r1, r7
         7bb78:	eb6ddf8c 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         7bb7c:	e59f0038 	ldr	r0, [pc, #38]	; 7bbbc <TATSocket::WriteLong(TAddress *, TAddress *, TPacketMessage &, unsigned char)+0x1b0>
         7bb80:	e5840004 	str	r0, [r4, #4]	; fField4
         7bb84:	e3a00030 	mov	r0, #48	; 0x30
         7bb88:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         7bb8c:	eb6d5f90 	bl	1bd39d4 <$GetGlobals>
         7bb90:	e1a03004 	mov	r3, r4
         7bb94:	e92d0008 	stmdb	sp!, {r3}
         7bb98:	e28d3004 	add	r3, sp, #4	; 0x4
         7bb9c:	e3a02000 	mov	r2, #0	; 0x0
         7bba0:	e3a01000 	mov	r1, #0	; 0x0
         7bba4:	e590c000 	ldr	ip, [r0]
         7bba8:	e1a0e00f 	mov	lr, pc
         7bbac:	e28cf050 	add	pc, ip, #80	; 0x50
         7bbb0:	e5944008 	ldr	r4, [r4, #8]	; fField8
         7bbb4:	e28dd008 	add	sp, sp, #8	; 0x8
         7bbb8:	ea000001 	b	7bbc4 <TATSocket::WriteLong(TAddress *, TAddress *, TPacketMessage &, unsigned char)+0x1b8>
         7bbbc:	6c617020 	stcvsl	0, cr7, [r1], -#128
         7bbc0:	e59f4014 	ldr	r4, [pc, #14]	; 7bbdc <TATSocket::WriteLong(TAddress *, TAddress *, TPacketMessage &, unsigned char)+0x1d0>
         7bbc4:	e1a0000d 	mov	r0, sp
         7bbc8:	e3a01000 	mov	r1, #0	; 0x0
         7bbcc:	e1a0e00f 	mov	lr, pc
         7bbd0:	e59df000 	ldr	pc, [sp]
         7bbd4:	e1a00004 	mov	r0, r4
         7bbd8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         7bbdc:	ffffd053 	swinv	0x00ffd053
    */
}

/**
 * Symbol: TATSocket::WriteShort(TPacketMessage &)
 * Address: 0007bbe0
 */
TATSocket::WriteShort(TPacketMessage &) {
    /*
         7bbe0:	e1a0c00d 	mov	ip, sp
         7bbe4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7bbe8:	e24cb004 	sub	fp, ip, #4	; 0x4
         7bbec:	e1a05000 	mov	r5, r0
         7bbf0:	e1a04001 	mov	r4, r1
         7bbf4:	e24dd020 	sub	sp, sp, #32	; 0x20
         7bbf8:	e1a0000d 	mov	r0, sp
         7bbfc:	eb67d738 	bl	1a718e4 <TWriteElement::$__ct(void)>
         7bc00:	e5950004 	ldr	r0, [r5, #4]	; fField4
         7bc04:	e3300000 	teq	r0, #0	; 0x0
         7bc08:	0a000040 	beq	7bd10 <TATSocket::WriteShort(TPacketMessage &)+0x130>
         7bc0c:	e594002c 	ldr	r0, [r4, #44]
         7bc10:	eb68047f 	bl	1a7ce14 <TWriteChain::$Length(void)>
         7bc14:	e250cf92 	subs	ip, r0, #584	; 0x248
         7bc18:	235c0002 	cmpcs	ip, #2	; 0x2
         7bc1c:	83a0404e 	movhi	r4, #78	; 0x4e
         7bc20:	82444a03 	subhi	r4, r4, #12288	; 0x3000
         7bc24:	8a00003a 	bhi	7bd14 <TATSocket::WriteShort(TPacketMessage &)+0x134>
         7bc28:	e3a00001 	mov	r0, #1	; 0x1
         7bc2c:	e5c40021 	strb	r0, [r4, #33]
         7bc30:	e59d0018 	ldr	r0, [sp, #24]
         7bc34:	e3c0033f 	bic	r0, r0, #-67108864	; 0xfc000000
         7bc38:	e58d0018 	str	r0, [sp, #24]
         7bc3c:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         7bc40:	e58d0018 	str	r0, [sp, #24]
         7bc44:	e3c000ff 	bic	r0, r0, #255	; 0xff
         7bc48:	e58d0018 	str	r0, [sp, #24]
         7bc4c:	e5d4001f 	ldrb	r0, [r4, #31]
         7bc50:	e59d1018 	ldr	r1, [sp, #24]
         7bc54:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
         7bc58:	e1810400 	orr	r0, r1, r0, lsl #8
         7bc5c:	e58d0018 	str	r0, [sp, #24]
         7bc60:	e5d50000 	ldrb	r0, [r5]
         7bc64:	e59d1018 	ldr	r1, [sp, #24]
         7bc68:	e3c110ff 	bic	r1, r1, #255	; 0xff
         7bc6c:	e1810000 	orr	r0, r1, r0
         7bc70:	e58d0018 	str	r0, [sp, #24]
         7bc74:	e5d40020 	ldrb	r0, [r4, #32]
         7bc78:	e59d101c 	ldr	r1, [sp, #28]
         7bc7c:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
         7bc80:	e1810c00 	orr	r0, r1, r0, lsl #24
         7bc84:	e58d001c 	str	r0, [sp, #28]
         7bc88:	e28d1018 	add	r1, sp, #24	; 0x18
         7bc8c:	e1a0000d 	mov	r0, sp
         7bc90:	e3a03002 	mov	r3, #2	; 0x2
         7bc94:	e3a02005 	mov	r2, #5	; 0x5
         7bc98:	eb680047 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         7bc9c:	e1a0100d 	mov	r1, sp
         7bca0:	e594002c 	ldr	r0, [r4, #44]
         7bca4:	eb67e35d 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
         7bca8:	e594002c 	ldr	r0, [r4, #44]
         7bcac:	eb680458 	bl	1a7ce14 <TWriteChain::$Length(void)>
         7bcb0:	e59d1018 	ldr	r1, [sp, #24]
         7bcb4:	e3c11403 	bic	r1, r1, #50331648	; 0x3000000
         7bcb8:	e3c118ff 	bic	r1, r1, #16711680	; 0xff0000
         7bcbc:	e1a00b00 	mov	r0, r0, lsl #22
         7bcc0:	e1a00b20 	mov	r0, r0, lsr #22
         7bcc4:	e1810800 	orr	r0, r1, r0, lsl #16
         7bcc8:	e58d0018 	str	r0, [sp, #24]
         7bccc:	e59f0038 	ldr	r0, [pc, #38]	; 7bd0c <TATSocket::WriteShort(TPacketMessage &)+0x12c>
         7bcd0:	e5840004 	str	r0, [r4, #4]	; fField4
         7bcd4:	e3a00030 	mov	r0, #48	; 0x30
         7bcd8:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         7bcdc:	eb6d5f3c 	bl	1bd39d4 <$GetGlobals>
         7bce0:	e1a03004 	mov	r3, r4
         7bce4:	e92d0008 	stmdb	sp!, {r3}
         7bce8:	e28d3004 	add	r3, sp, #4	; 0x4
         7bcec:	e3a02000 	mov	r2, #0	; 0x0
         7bcf0:	e3a01000 	mov	r1, #0	; 0x0
         7bcf4:	e590c000 	ldr	ip, [r0]
         7bcf8:	e1a0e00f 	mov	lr, pc
         7bcfc:	e28cf050 	add	pc, ip, #80	; 0x50
         7bd00:	e5944008 	ldr	r4, [r4, #8]	; fField8
         7bd04:	e28dd008 	add	sp, sp, #8	; 0x8
         7bd08:	ea000001 	b	7bd14 <TATSocket::WriteShort(TPacketMessage &)+0x134>
         7bd0c:	6c617020 	stcvsl	0, cr7, [r1], -#128
         7bd10:	e59f4014 	ldr	r4, [pc, #14]	; 7bd2c <TATSocket::WriteShort(TPacketMessage &)+0x14c>
         7bd14:	e1a0000d 	mov	r0, sp
         7bd18:	e3a01000 	mov	r1, #0	; 0x0
         7bd1c:	e1a0e00f 	mov	lr, pc
         7bd20:	e59df000 	ldr	pc, [sp]
         7bd24:	e1a00004 	mov	r0, r4
         7bd28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         7bd2c:	ffffd053 	swinv	0x00ffd053
    */
}

/**
 * Symbol: TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)
 * Address: 0007bd30
 */
TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *) {
    /*
         7bd30:	e1a0c00d 	mov	ip, sp
         7bd34:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         7bd38:	e24cb004 	sub	fp, ip, #4	; 0x4
         7bd3c:	e1a04000 	mov	r4, r0
         7bd40:	e1a05002 	mov	r5, r2
         7bd44:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         7bd48:	e1a0000d 	mov	r0, sp
         7bd4c:	eb67d6d4 	bl	1a718a4 <TCompletion::$__ct(TUMsgToken *)>
         7bd50:	e2840008 	add	r0, r4, #8	; 0x8
         7bd54:	e1a08000 	mov	r8, r0
         7bd58:	e1a0e00d 	mov	lr, sp
         7bd5c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
         7bd60:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
         7bd64:	e89e100c 	ldmia	lr, {r2, r3, ip}
         7bd68:	e880100c 	stmia	r0, {r2, r3, ip}
         7bd6c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         7bd70:	e3300000 	teq	r0, #0	; 0x0
         7bd74:	13a0001e 	movne	r0, #30	; 0x1e
         7bd78:	12400c2f 	subne	r0, r0, #12032	; 0x2f00
         7bd7c:	1a000050 	bne	7bec4 <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x194>
         7bd80:	e5950018 	ldr	r0, [r5, #24]
         7bd84:	e3300000 	teq	r0, #0	; 0x0
         7bd88:	03a0007a 	moveq	r0, #122	; 0x7a
         7bd8c:	02400c3f 	subeq	r0, r0, #16128	; 0x3f00
         7bd90:	0a00004b 	beq	7bec4 <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x194>
         7bd94:	e5d40001 	ldrb	r0, [r4, #1]	; fField1
         7bd98:	e3300000 	teq	r0, #0	; 0x0
         7bd9c:	03a0007e 	moveq	r0, #126	; 0x7e
         7bda0:	02400c3f 	subeq	r0, r0, #16128	; 0x3f00
         7bda4:	0a000046 	beq	7bec4 <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x194>
         7bda8:	e3a06000 	mov	r6, #0	; 0x0
         7bdac:	e5940028 	ldr	r0, [r4, #40]	; fField40
         7bdb0:	e3300000 	teq	r0, #0	; 0x0
         7bdb4:	0a00003d 	beq	7beb0 <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x180>
         7bdb8:	eb6e295b 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         7bdbc:	e3300000 	teq	r0, #0	; 0x0
         7bdc0:	0a00003a 	beq	7beb0 <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x180>
         7bdc4:	e24dd034 	sub	sp, sp, #52	; 0x34
         7bdc8:	e1a0000d 	mov	r0, sp
         7bdcc:	eb6da119 	bl	1be4238 <TAEvent::$__ct(void)>
         7bdd0:	e59f00a0 	ldr	r0, [pc, #a0]	; 7be78 <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x148>
         7bdd4:	e58d0000 	str	r0, [sp]
         7bdd8:	e58d600c 	str	r6, [sp, #12]
         7bddc:	e58d6008 	str	r6, [sp, #8]	; fField8
         7bde0:	e28d001c 	add	r0, sp, #28	; 0x1c
         7bde4:	e3a01001 	mov	r1, #1	; 0x1
         7bde8:	eb6ddeef 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         7bdec:	e3a00004 	mov	r0, #4	; 0x4
         7bdf0:	e58d0030 	str	r0, [sp, #48]
         7bdf4:	e28d2030 	add	r2, sp, #48	; 0x30
         7bdf8:	e28d1028 	add	r1, sp, #40	; 0x28
         7bdfc:	e3a03000 	mov	r3, #0	; 0x0
         7be00:	e5940028 	ldr	r0, [r4, #40]	; fField40
         7be04:	eb6e294e 	bl	1c06344 <TCircleBuf::$CopyOut(unsigned char *, unsigned long *, unsigned long *)>
         7be08:	e59d002a 	ldr	r0, [sp, #42]
         7be0c:	e1a00800 	mov	r0, r0, lsl #16
         7be10:	e1a00820 	mov	r0, r0, lsr #16
         7be14:	e5cd0025 	strb	r0, [sp, #37]
         7be18:	e1a00420 	mov	r0, r0, lsr #8
         7be1c:	e5cd0024 	strb	r0, [sp, #36]	; fField36
         7be20:	e5dd002a 	ldrb	r0, [sp, #42]
         7be24:	e5cd0026 	strb	r0, [sp, #38]
         7be28:	e5dd002b 	ldrb	r0, [sp, #43]
         7be2c:	e5cd0027 	strb	r0, [sp, #39]
         7be30:	e5d40000 	ldrb	r0, [r4]
         7be34:	e5cd001d 	strb	r0, [sp, #29]
         7be38:	e3a0704a 	mov	r7, #74	; 0x4a
         7be3c:	e2877c02 	add	r7, r7, #512	; 0x200
         7be40:	e58d7030 	str	r7, [sp, #48]
         7be44:	e5b51018 	ldr	r1, [r5, #24]!
         7be48:	e28d302c 	add	r3, sp, #44	; 0x2c
         7be4c:	e28d2030 	add	r2, sp, #48	; 0x30
         7be50:	e5940028 	ldr	r0, [r4, #40]	; fField40
         7be54:	eb6e2939 	bl	1c06340 <TCircleBuf::$CopyOut(CBufferList *, unsigned long *, unsigned long *)>
         7be58:	e3300001 	teq	r0, #1	; 0x1
         7be5c:	0a000007 	beq	7be80 <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x150>
         7be60:	e59f0014 	ldr	r0, [pc, #14]	; 7be7c <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x14c>
         7be64:	e58d0008 	str	r0, [sp, #8]	; fField8
         7be68:	e28d102c 	add	r1, sp, #44	; 0x2c
         7be6c:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
         7be70:	eb6e293a 	bl	1c06360 <TCircleBuf::$FlushToNextMarker(unsigned long *)>
         7be74:	ea000002 	b	7be84 <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x154>
         7be78:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7be7c:	ffffd11f 	swinv	0x00ffd11f
         7be80:	e58d6008 	str	r6, [sp, #8]	; fField8
         7be84:	e59d002c 	ldr	r0, [sp, #44]
         7be88:	e5cd0014 	strb	r0, [sp, #20]
         7be8c:	e59d0030 	ldr	r0, [sp, #48]
         7be90:	e0470000 	sub	r0, r7, r0
         7be94:	e58d0018 	str	r0, [sp, #24]
         7be98:	e1a00008 	mov	r0, r8
         7be9c:	e1a0100d 	mov	r1, sp
         7bea0:	e3a02028 	mov	r2, #40	; 0x28
         7bea4:	eb67ef4b 	bl	1a77bd8 <TCompletion::$Complete(TAppleTalkMessage *, unsigned long)>
         7bea8:	e28dd034 	add	sp, sp, #52	; 0x34
         7beac:	ea000003 	b	7bec0 <TATSocket::ReceiveDatagram(TUMsgToken *, TReceiveDatagramMessage *)+0x190>
         7beb0:	e5b50018 	ldr	r0, [r5, #24]!
         7beb4:	e5a40024 	str	r0, [r4, #36]!	; fField36
         7beb8:	eb6d5ec5 	bl	1bd39d4 <$GetGlobals>
         7bebc:	eb6da507 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         7bec0:	e1a00006 	mov	r0, r6
         7bec4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TATSocket::CancelReceiveDatagram(void)
 * Address: 0007bec8
 */
TATSocket::CancelReceiveDatagram(void) {
    /*
         7bec8:	e1a0c00d 	mov	ip, sp
         7becc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         7bed0:	e24cb004 	sub	fp, ip, #4	; 0x4
         7bed4:	e1a04000 	mov	r4, r0
         7bed8:	e5d00001 	ldrb	r0, [r0, #1]	; fField1
         7bedc:	e3300000 	teq	r0, #0	; 0x0
         7bee0:	15940024 	ldrne	r0, [r4, #36]	; fField36
         7bee4:	13300000 	teqne	r0, #0	; 0x0
         7bee8:	03a0001a 	moveq	r0, #26	; 0x1a
         7beec:	02400c2f 	subeq	r0, r0, #12032	; 0x2f00
         7bef0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         7bef4:	e24dd028 	sub	sp, sp, #40	; 0x28
         7bef8:	e1a0000d 	mov	r0, sp
         7befc:	eb6da0cd 	bl	1be4238 <TAEvent::$__ct(void)>
         7bf00:	e59f0038 	ldr	r0, [pc, #38]	; 7bf40 <TATSocket::CancelReceiveDatagram(void)+0x78>
         7bf04:	e58d0000 	str	r0, [sp]
         7bf08:	e3a00000 	mov	r0, #0	; 0x0
         7bf0c:	e58d000c 	str	r0, [sp, #12]
         7bf10:	e58d0008 	str	r0, [sp, #8]	; fField8
         7bf14:	e28d001c 	add	r0, sp, #28	; 0x1c
         7bf18:	e3a01001 	mov	r1, #1	; 0x1
         7bf1c:	eb6ddea2 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         7bf20:	e3a0001d 	mov	r0, #29	; 0x1d
         7bf24:	e2400c2f 	sub	r0, r0, #12032	; 0x2f00
         7bf28:	e58d0008 	str	r0, [sp, #8]	; fField8
         7bf2c:	e2840008 	add	r0, r4, #8	; 0x8
         7bf30:	e1a0100d 	mov	r1, sp
         7bf34:	e3a02028 	mov	r2, #40	; 0x28
         7bf38:	eb67ef26 	bl	1a77bd8 <TCompletion::$Complete(TAppleTalkMessage *, unsigned long)>
         7bf3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         7bf40:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

/**
 * Symbol: TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)
 * Address: 0007bf44
 */
TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *) {
    /*
         7bf44:	e1a0c00d 	mov	ip, sp
         7bf48:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7bf4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         7bf50:	e1a04000 	mov	r4, r0
         7bf54:	e1a07001 	mov	r7, r1
         7bf58:	e1a05002 	mov	r5, r2
         7bf5c:	e3a09000 	mov	r9, #0	; 0x0
         7bf60:	e3a00030 	mov	r0, #48	; 0x30
         7bf64:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         7bf68:	e5940004 	ldr	r0, [r4, #4]	; fField4
         7bf6c:	e3300000 	teq	r0, #0	; 0x0
         7bf70:	0a00006a 	beq	7c120 <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x1dc>
         7bf74:	e2850014 	add	r0, r5, #20	; 0x14
         7bf78:	e1a06000 	mov	r6, r0
         7bf7c:	e5d41000 	ldrb	r1, [r4]
         7bf80:	e5c01001 	strb	r1, [r0, #1]	; fField1
         7bf84:	e5940004 	ldr	r0, [r4, #4]	; fField4
         7bf88:	e5850004 	str	r0, [r5, #4]	; fField4
         7bf8c:	e5b3000c 	ldr	r0, [r3, #12]!
         7bf90:	e1a00c20 	mov	r0, r0, lsr #24
         7bf94:	e5c50020 	strb	r0, [r5, #32]
         7bf98:	e5d40001 	ldrb	r0, [r4, #1]	; fField1
         7bf9c:	e3300000 	teq	r0, #0	; 0x0
         7bfa0:	0a000052 	beq	7c0f0 <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x1ac>
         7bfa4:	e5950028 	ldr	r0, [r5, #40]	; fField40
         7bfa8:	e5b0702c 	ldr	r7, [r0, #44]!
         7bfac:	e5940024 	ldr	r0, [r4, #36]	; fField36
         7bfb0:	e3300000 	teq	r0, #0	; 0x0
         7bfb4:	0a000025 	beq	7c050 <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x10c>
         7bfb8:	e24dd028 	sub	sp, sp, #40	; 0x28
         7bfbc:	e1a0000d 	mov	r0, sp
         7bfc0:	eb6da09c 	bl	1be4238 <TAEvent::$__ct(void)>
         7bfc4:	e59f0080 	ldr	r0, [pc, #80]	; 7c04c <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x108>
         7bfc8:	e3a08000 	mov	r8, #0	; 0x0
         7bfcc:	e58d0000 	str	r0, [sp]
         7bfd0:	e58d800c 	str	r8, [sp, #12]
         7bfd4:	e58d8008 	str	r8, [sp, #8]	; fField8
         7bfd8:	e28d001c 	add	r0, sp, #28	; 0x1c
         7bfdc:	e1a0a000 	mov	sl, r0
         7bfe0:	e3a01001 	mov	r1, #1	; 0x1
         7bfe4:	eb6dde70 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         7bfe8:	e58d8008 	str	r8, [sp, #8]	; fField8
         7bfec:	e5d50020 	ldrb	r0, [r5, #32]
         7bff0:	e5cd0014 	strb	r0, [sp, #20]
         7bff4:	e1a01006 	mov	r1, r6
         7bff8:	e1a0000a 	mov	r0, sl
         7bffc:	eb6dde6b 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         7c000:	e5946024 	ldr	r6, [r4, #36]	; fField36
         7c004:	e5955028 	ldr	r5, [r5, #40]	; fField40
         7c008:	e1a00005 	mov	r0, r5
         7c00c:	eb6dde70 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         7c010:	e5b51028 	ldr	r1, [r5, #40]!	; fField40
         7c014:	e0801001 	add	r1, r0, r1
         7c018:	e1a02007 	mov	r2, r7
         7c01c:	e1a00006 	mov	r0, r6
         7c020:	e5963000 	ldr	r3, [r6]
         7c024:	e1a0e00f 	mov	lr, pc
         7c028:	e283f020 	add	pc, r3, #32	; 0x20
         7c02c:	e58d0018 	str	r0, [sp, #24]
         7c030:	e2840008 	add	r0, r4, #8	; 0x8
         7c034:	e1a0100d 	mov	r1, sp
         7c038:	e3a02028 	mov	r2, #40	; 0x28
         7c03c:	eb67eee5 	bl	1a77bd8 <TCompletion::$Complete(TAppleTalkMessage *, unsigned long)>
         7c040:	e5a48024 	str	r8, [r4, #36]!	; fField36
         7c044:	e28dd028 	add	sp, sp, #40	; 0x28
         7c048:	ea000035 	b	7c124 <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x1e0>
         7c04c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         7c050:	e5940028 	ldr	r0, [r4, #40]	; fField40
         7c054:	e3300000 	teq	r0, #0	; 0x0
         7c058:	0a000031 	beq	7c124 <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x1e0>
         7c05c:	e2871004 	add	r1, r7, #4	; 0x4
         7c060:	eb6e28b2 	bl	1c06330 <TCircleBuf::$BufferSpace(unsigned long)>
         7c064:	e3300000 	teq	r0, #0	; 0x0
         7c068:	1a00002d 	bne	7c124 <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x1e0>
         7c06c:	e24dd008 	sub	sp, sp, #8	; 0x8
         7c070:	e5960008 	ldr	r0, [r6, #8]	; fField8
         7c074:	e1a00820 	mov	r0, r0, lsr #16
         7c078:	e5cd0001 	strb	r0, [sp, #1]	; fField1
         7c07c:	e1a00440 	mov	r0, r0, asr #8
         7c080:	e5cd0000 	strb	r0, [sp]
         7c084:	e5d6000a 	ldrb	r0, [r6, #10]
         7c088:	e5cd0002 	strb	r0, [sp, #2]
         7c08c:	e5d6000b 	ldrb	r0, [r6, #11]
         7c090:	e5cd0003 	strb	r0, [sp, #3]
         7c094:	e3a00004 	mov	r0, #4	; 0x4
         7c098:	e3a03000 	mov	r3, #0	; 0x0
         7c09c:	e58d0004 	str	r0, [sp, #4]	; fField4
         7c0a0:	e92d0008 	stmdb	sp!, {r3}
         7c0a4:	e28d2008 	add	r2, sp, #8	; 0x8
         7c0a8:	e28d1004 	add	r1, sp, #4	; 0x4
         7c0ac:	e5940028 	ldr	r0, [r4, #40]	; fField40
         7c0b0:	eb6e28a1 	bl	1c0633c <TCircleBuf::$CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long)>
         7c0b4:	e28dd004 	add	sp, sp, #4	; 0x4
         7c0b8:	e58d7004 	str	r7, [sp, #4]	; fField4
         7c0bc:	e5d53020 	ldrb	r3, [r5, #32]
         7c0c0:	e92d0008 	stmdb	sp!, {r3}
         7c0c4:	e5955028 	ldr	r5, [r5, #40]	; fField40
         7c0c8:	e1a00005 	mov	r0, r5
         7c0cc:	eb6dde40 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         7c0d0:	e5b51028 	ldr	r1, [r5, #40]!	; fField40
         7c0d4:	e0801001 	add	r1, r0, r1
         7c0d8:	e28d2008 	add	r2, sp, #8	; 0x8
         7c0dc:	e3a03001 	mov	r3, #1	; 0x1
         7c0e0:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
         7c0e4:	eb6e2894 	bl	1c0633c <TCircleBuf::$CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long)>
         7c0e8:	e28dd00c 	add	sp, sp, #12	; 0xc
         7c0ec:	ea00000c 	b	7c124 <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x1e0>
         7c0f0:	eb6d5e37 	bl	1bd39d4 <$GetGlobals>
         7c0f4:	e1a03005 	mov	r3, r5
         7c0f8:	e92d0008 	stmdb	sp!, {r3}
         7c0fc:	e28d3004 	add	r3, sp, #4	; 0x4
         7c100:	e1a02007 	mov	r2, r7
         7c104:	e3a01000 	mov	r1, #0	; 0x0
         7c108:	e590c000 	ldr	ip, [r0]
         7c10c:	e1a0e00f 	mov	lr, pc
         7c110:	e28cf050 	add	pc, ip, #80	; 0x50
         7c114:	e28dd004 	add	sp, sp, #4	; 0x4
         7c118:	e5b59008 	ldr	r9, [r5, #8]!	; fField8
         7c11c:	ea000000 	b	7c124 <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x1e0>
         7c120:	e59f9004 	ldr	r9, [pc, #4]	; 7c12c <TATSocket::Read(TUMsgToken *, TPacketMessage *, TDDPPacketLong *)+0x1e8>	; fField4
         7c124:	e1a00009 	mov	r0, r9
         7c128:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7c12c:	ffffd053 	swinv	0x00ffd053
    */
}

