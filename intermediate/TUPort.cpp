#include "DDKIncludes/OS600/UserGlobals.h"

/**
 * Symbol: TUPort::__ct(unsigned long)
 * Address: 00259ab0
 */
TUPort::TUPort(TObjectId id) {
    /*
        259ab0:	e1a0c00d 	mov	ip, sp
        259ab4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259ab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        259abc:	e1a04001 	mov	r4, r1
        259ac0:	e3300000 	teq	r0, #0	; 0x0
        259ac4:	1a000003 	bne	259ad8 <TUPort::__ct(unsigned long)+0x28>
        259ac8:	e3a00008 	mov	r0, #8	; 0x8
        259acc:	eb65d319 	bl	1bce738 <$__nw(unsigned int)>
        259ad0:	e3300000 	teq	r0, #0	; 0x0
        259ad4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        259ad8:	e3a01000 	mov	r1, #0	; 0x0
        259adc:	e5c01004 	strb	r1, [r0, #4]	; TUPort
        259ae0:	e5804000 	str	r4, [r0]
        259ae4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUPort::Init(void)
 * Address: 00259ae8
 */
long		TUPort::Init() {
    /*
        259ae8:	e1a0c00d 	mov	ip, sp
        259aec:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        259af0:	e24cb004 	sub	fp, ip, #4	; 0x4
        259af4:	e24dd028 	sub	sp, sp, #40	; 0x28
        259af8:	e1a0200d 	mov	r2, sp
        259afc:	e3a0300c 	mov	r3, #12	; 0xc
        259b00:	e3a01000 	mov	r1, #0	; 0x0
        259b04:	eb65f416 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        259b08:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUPort::SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)
 * Address: 00259b0c
 */
{ return TUPort::SendGoo(kBuiltInSMemMsgId, 0, nil, 0, 0, 0, false, kTimeOutImmediate, futureTimeToSend); } {
    /*
        259b0c:	e1a0c00d 	mov	ip, sp
        259b10:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        259b14:	e24cb004 	sub	fp, ip, #4	; 0x4
        259b18:	e1a06000 	mov	r6, r0
        259b1c:	e1a04001 	mov	r4, r1
        259b20:	e1a05002 	mov	r5, r2
        259b24:	e1a01003 	mov	r1, r3
        259b28:	e28b9010 	add	r9, fp, #16	; 0x10
        259b2c:	e8990201 	ldmia	r9, {r0, r9}
        259b30:	e31000ff 	tst	r0, #255	; 0xff
        259b34:	e99b0404 	ldmib	fp, {r2, sl}
        259b38:	e59b700c 	ldr	r7, [fp, #12]
        259b3c:	e59b8018 	ldr	r8, [fp, #24]
        259b40:	13877002 	orrne	r7, r7, #2	; 0x2
        259b44:	e3710001 	cmn	r1, #1	; 0x1
        259b48:	0a000004 	beq	259b60 <TUPort::SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)+0x54>
        259b4c:	e1a00004 	mov	r0, r4
        259b50:	e3a03001 	mov	r3, #1	; 0x1
        259b54:	eb055212 	bl	3ae3a4 <SMemSetBufferSWI>
        259b58:	e3300000 	teq	r0, #0	; 0x0
        259b5c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        259b60:	e3390000 	teq	r9, #0	; 0x0
        259b64:	13877010 	orrne	r7, r7, #16	; 0x10
        259b68:	e3380000 	teq	r8, #0	; 0x0
        259b6c:	0a000008 	beq	259b94 <TUPort::SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)+0x88>
        259b70:	e3877008 	orr	r7, r7, #8	; 0x8
        259b74:	e1a01009 	mov	r1, r9
        259b78:	e1a00004 	mov	r0, r4
        259b7c:	e5982004 	ldr	r2, [r8, #4]	; TUPort
        259b80:	e5983000 	ldr	r3, [r8]
        259b84:	eb055223 	bl	3ae418 <SMemMsgSetTimerParmsSWI>
        259b88:	e3300000 	teq	r0, #0	; 0x0
        259b8c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        259b90:	ea000008 	b	259bb8 <TUPort::SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)+0xac>
        259b94:	e3170010 	tst	r7, #16	; 0x10
        259b98:	0a000006 	beq	259bb8 <TUPort::SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)+0xac>
        259b9c:	e1a01009 	mov	r1, r9
        259ba0:	e1a00004 	mov	r0, r4
        259ba4:	e3a03000 	mov	r3, #0	; 0x0
        259ba8:	e3a02000 	mov	r2, #0	; 0x0
        259bac:	eb055219 	bl	3ae418 <SMemMsgSetTimerParmsSWI>
        259bb0:	e3300000 	teq	r0, #0	; 0x0
        259bb4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        259bb8:	e1a03007 	mov	r3, r7
        259bbc:	e92d0008 	stmdb	sp!, {r3}
        259bc0:	e1a0300a 	mov	r3, sl
        259bc4:	e1a02005 	mov	r2, r5
        259bc8:	e1a01004 	mov	r1, r4
        259bcc:	e5960000 	ldr	r0, [r6]
        259bd0:	eb05518f 	bl	3ae214 <PortSendSWI>
        259bd4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUPort::SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)
 * Address: 00259bd8
 */
{ return TUPort::SendRPCGoo(async->GetMsgId(), async->GetReplyMemId(), nil, content, size, msgType, kPortFlags_Async, urgent, replyBuf, replySize, timeout, futureTimeToSend); } {
    /*
        259bd8:	e1a0c00d 	mov	ip, sp
        259bdc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        259be0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        259be4:	e24cb014 	sub	fp, ip, #20	; 0x14
        259be8:	e1a04002 	mov	r4, r2
        259bec:	e28b7024 	add	r7, fp, #36	; 0x24
        259bf0:	e8970087 	ldmia	r7, {r0, r1, r2, r7}
        259bf4:	e20000ff 	and	r0, r0, #255	; 0xff
        259bf8:	e59b5020 	ldr	r5, [fp, #32]
        259bfc:	e59b6034 	ldr	r6, [fp, #52]
        259c00:	e59b801c 	ldr	r8, [fp, #28]
        259c04:	e59b9018 	ldr	r9, [fp, #24]
        259c08:	e59ba014 	ldr	sl, [fp, #20]
        259c0c:	e3710001 	cmn	r1, #1	; 0x1
        259c10:	e52d0004 	str	r0, [sp, -#4]!	; TUPort
        259c14:	0a000004 	beq	259c2c <TUPort::SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)+0x54>
        259c18:	e1a00004 	mov	r0, r4
        259c1c:	e3a03000 	mov	r3, #0	; 0x0
        259c20:	eb0551df 	bl	3ae3a4 <SMemSetBufferSWI>
        259c24:	e3300000 	teq	r0, #0	; 0x0
        259c28:	1a000015 	bne	259c84 <TUPort::SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)+0xac>
        259c2c:	e1a03006 	mov	r3, r6
        259c30:	e1a02007 	mov	r2, r7
        259c34:	e1a00005 	mov	r0, r5
        259c38:	e59d1000 	ldr	r1, [sp]
        259c3c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        259c40:	e1a03008 	mov	r3, r8
        259c44:	e1a02009 	mov	r2, r9
        259c48:	e92d000c 	stmdb	sp!, {r2, r3}
        259c4c:	e1a0300a 	mov	r3, sl
        259c50:	e1a02004 	mov	r2, r4
        259c54:	e99b0003 	ldmib	fp, {r0, r1}
        259c58:	eb66043a 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        259c5c:	e28dd018 	add	sp, sp, #24	; 0x18
        259c60:	e3300000 	teq	r0, #0	; 0x0
        259c64:	02051001 	andeq	r1, r5, #1	; 0x1
        259c68:	03310000 	teqeq	r1, #0	; 0x0
        259c6c:	1a000004 	bne	259c84 <TUPort::SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)+0xac>
        259c70:	e1a00004 	mov	r0, r4
        259c74:	e3a03000 	mov	r3, #0	; 0x0
        259c78:	e3a02000 	mov	r2, #0	; 0x0
        259c7c:	e59b1010 	ldr	r1, [fp, #16]
        259c80:	eb0551c9 	bl	3ae3ac <SMemGetSizeSWI>
        259c84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 00259c88
 */
{ return TUPort::Receive(nil, (TTimeout) kNoTimeout, msgFilter); } {
    /*
        259c88:	e1a0c00d 	mov	ip, sp
        259c8c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        259c90:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        259c94:	e24cb014 	sub	fp, ip, #20	; 0x14
        259c98:	e1a04001 	mov	r4, r1
        259c9c:	e59b2024 	ldr	r2, [fp, #36]
        259ca0:	e20220ff 	and	r2, r2, #255	; 0xff
        259ca4:	e59b0028 	ldr	r0, [fp, #40]
        259ca8:	e20080ff 	and	r8, r0, #255	; 0xff
        259cac:	e59b101c 	ldr	r1, [fp, #28]
        259cb0:	e28ba014 	add	sl, fp, #20	; 0x14
        259cb4:	e89a0420 	ldmia	sl, {r5, sl}
        259cb8:	e24dd014 	sub	sp, sp, #20	; 0x14
        259cbc:	e3a06000 	mov	r6, #0	; 0x0
        259cc0:	e3a00000 	mov	r0, #0	; 0x0
        259cc4:	e98d0041 	stmib	sp, {r0, r6}
        259cc8:	e3a09001 	mov	r9, #1	; 0x1
        259ccc:	e3350000 	teq	r5, #0	; 0x0
        259cd0:	e58d0000 	str	r0, [sp]
        259cd4:	0a000004 	beq	259cec <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x64>
        259cd8:	e3a00000 	mov	r0, #0	; 0x0
        259cdc:	e5850000 	str	r0, [r5]
        259ce0:	e5850004 	str	r0, [r5, #4]	; TUPort
        259ce4:	e5850008 	str	r0, [r5, #8]	; TUPort
        259ce8:	e585000c 	str	r0, [r5, #12]
        259cec:	e1b07002 	movs	r7, r2
        259cf0:	13a07004 	movne	r7, #4	; 0x4
        259cf4:	e3310000 	teq	r1, #0	; 0x0
        259cf8:	0a000007 	beq	259d1c <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x94>
        259cfc:	e3877010 	orr	r7, r7, #16	; 0x10
        259d00:	e1a00009 	mov	r0, r9
        259d04:	e3a03000 	mov	r3, #0	; 0x0
        259d08:	e3a02000 	mov	r2, #0	; 0x0
        259d0c:	eb0551c1 	bl	3ae418 <SMemMsgSetTimerParmsSWI>
        259d10:	e3300000 	teq	r0, #0	; 0x0
        259d14:	0a000000 	beq	259d1c <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x94>
        259d18:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        259d1c:	e28d3008 	add	r3, sp, #8	; 0x8
        259d20:	e28d2004 	add	r2, sp, #4	; 0x4
        259d24:	e28d100c 	add	r1, sp, #12	; 0xc
        259d28:	e28d0010 	add	r0, sp, #16	; 0x10
        259d2c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        259d30:	e1a03007 	mov	r3, r7
        259d34:	e1a01009 	mov	r1, r9
        259d38:	e59b0004 	ldr	r0, [fp, #4]	; TUPort
        259d3c:	e59b2020 	ldr	r2, [fp, #32]
        259d40:	e5900000 	ldr	r0, [r0]
        259d44:	eb055137 	bl	3ae228 <PortReceiveSWI>
        259d48:	e28dd010 	add	sp, sp, #16	; 0x10
        259d4c:	e1b07000 	movs	r7, r0
        259d50:	1a00004b 	bne	259e84 <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1fc>
        259d54:	e59d0004 	ldr	r0, [sp, #4]	; TUPort
        259d58:	e3100401 	tst	r0, #16777216	; 0x1000000
        259d5c:	0a00000e 	beq	259d9c <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x114>
        259d60:	e59d6010 	ldr	r6, [sp, #16]
        259d64:	e28d3008 	add	r3, sp, #8	; 0x8
        259d68:	e28d2004 	add	r2, sp, #4	; 0x4
        259d6c:	e92d000c 	stmdb	sp!, {r2, r3}
        259d70:	e28d3014 	add	r3, sp, #20	; 0x14
        259d74:	e28d2018 	add	r2, sp, #24	; 0x18
        259d78:	e1a00006 	mov	r0, r6
        259d7c:	e3a01000 	mov	r1, #0	; 0x0
        259d80:	eb0551b4 	bl	3ae458 <SMemMsgCheckForDoneSWI>
        259d84:	e28dd008 	add	sp, sp, #8	; 0x8
        259d88:	e1b07000 	movs	r7, r0
        259d8c:	1a000018 	bne	259df4 <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x16c>
        259d90:	e59d0004 	ldr	r0, [sp, #4]	; TUPort
        259d94:	e3800401 	orr	r0, r0, #16777216	; 0x1000000
        259d98:	e58d0004 	str	r0, [sp, #4]	; TUPort
        259d9c:	e59d0004 	ldr	r0, [sp, #4]	; TUPort
        259da0:	e3100402 	tst	r0, #33554432	; 0x2000000
        259da4:	1a000012 	bne	259df4 <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x16c>
        259da8:	e3380000 	teq	r8, #0	; 0x0
        259dac:	0a000005 	beq	259dc8 <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x140>
        259db0:	e1a0100d 	mov	r1, sp
        259db4:	e3a03000 	mov	r3, #0	; 0x0
        259db8:	e3a02000 	mov	r2, #0	; 0x0
        259dbc:	e59d0010 	ldr	r0, [sp, #16]
        259dc0:	eb055179 	bl	3ae3ac <SMemGetSizeSWI>
        259dc4:	ea000009 	b	259df0 <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x168>
        259dc8:	e1a0300d 	mov	r3, sp
        259dcc:	e59d0010 	ldr	r0, [sp, #16]
        259dd0:	e1a01000 	mov	r1, r0
        259dd4:	e59d2008 	ldr	r2, [sp, #8]	; TUPort
        259dd8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        259ddc:	e3a03000 	mov	r3, #0	; 0x0
        259de0:	e28b200c 	add	r2, fp, #12	; 0xc
        259de4:	e8920006 	ldmia	r2, {r1, r2}
        259de8:	eb055181 	bl	3ae3f4 <SMemCopyFromSharedSWI>
        259dec:	e28dd00c 	add	sp, sp, #12	; 0xc
        259df0:	e1a07000 	mov	r7, r0
        259df4:	e33a0000 	teq	sl, #0	; 0x0
        259df8:	159d0004 	ldrne	r0, [sp, #4]	; TUPort
        259dfc:	158a0000 	strne	r0, [sl]
        259e00:	e3340000 	teq	r4, #0	; 0x0
        259e04:	159d0000 	ldrne	r0, [sp]
        259e08:	15840000 	strne	r0, [r4]
        259e0c:	e3350000 	teq	r5, #0	; 0x0
        259e10:	0a000007 	beq	259e34 <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1ac>
        259e14:	e59d0010 	ldr	r0, [sp, #16]
        259e18:	e5850000 	str	r0, [r5]
        259e1c:	e59d000c 	ldr	r0, [sp, #12]
        259e20:	e5850004 	str	r0, [r5, #4]	; TUPort
        259e24:	e59d0008 	ldr	r0, [sp, #8]	; TUPort
        259e28:	e2855008 	add	r5, r5, #8	; 0x8
        259e2c:	e8850041 	stmia	r5, {r0, r6}
        259e30:	e2455008 	sub	r5, r5, #8	; 0x8
        259e34:	e3370000 	teq	r7, #0	; 0x0
        259e38:	1287cc27 	addne	ip, r7, #9984	; 0x2700
        259e3c:	137c0031 	cmnne	ip, #49	; 0x31
        259e40:	1a000005 	bne	259e5c <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1d4>
        259e44:	e3350000 	teq	r5, #0	; 0x0
        259e48:	0a000003 	beq	259e5c <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1d4>
        259e4c:	e3380000 	teq	r8, #0	; 0x0
        259e50:	059d000c 	ldreq	r0, [sp, #12]
        259e54:	03300000 	teqeq	r0, #0	; 0x0
        259e58:	1a000009 	bne	259e84 <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1fc>
        259e5c:	e3a01000 	mov	r1, #0	; 0x0
        259e60:	e59d000c 	ldr	r0, [sp, #12]
        259e64:	e3300000 	teq	r0, #0	; 0x0
        259e68:	13a010c5 	movne	r1, #197	; 0xc5
        259e6c:	12411b0a 	subne	r1, r1, #10240	; 0x2800
        259e70:	e3370000 	teq	r7, #0	; 0x0
        259e74:	11a01007 	movne	r1, r7
        259e78:	e59d0010 	ldr	r0, [sp, #16]
        259e7c:	e59d2008 	ldr	r2, [sp, #8]	; TUPort
        259e80:	eb055186 	bl	3ae4a0 <SMemMsgMsgDoneSWI>
        259e84:	e1a00007 	mov	r0, r7
        259e88:	eaffffa2 	b	259d18 <TUPort::Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)+0x90>
    */
}

/**
 * Symbol: TUPort::Receive(TUAsyncMessage *, unsigned long, unsigned long, unsigned char)
 * Address: 00259e8c
 */
{ return TUPort::Receive(nil, (TTimeout) kNoTimeout, msgFilter); } {
    /*
        259e8c:	e1a0c00d 	mov	ip, sp
        259e90:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        259e94:	e24cb004 	sub	fp, ip, #4	; 0x4
        259e98:	e1a06000 	mov	r6, r0
        259e9c:	e1a04001 	mov	r4, r1
        259ea0:	e1a01002 	mov	r1, r2
        259ea4:	e1a05003 	mov	r5, r3
        259ea8:	e59b0004 	ldr	r0, [fp, #4]	; TUPort
        259eac:	e31000ff 	tst	r0, #255	; 0xff
        259eb0:	e3a00001 	mov	r0, #1	; 0x1
        259eb4:	03a02000 	moveq	r2, #0	; 0x0
        259eb8:	13a02004 	movne	r2, #4	; 0x4
        259ebc:	e1827000 	orr	r7, r2, r0
        259ec0:	e3340000 	teq	r4, #0	; 0x0
        259ec4:	1a00000a 	bne	259ef4 <TUPort::Receive(TUAsyncMessage *, unsigned long, unsigned long, unsigned char)+0x68>
        259ec8:	e387c020 	orr	ip, r7, #32	; 0x20
        259ecc:	e3a03000 	mov	r3, #0	; 0x0
        259ed0:	e3a02000 	mov	r2, #0	; 0x0
        259ed4:	e3a01000 	mov	r1, #0	; 0x0
        259ed8:	e3a00000 	mov	r0, #0	; 0x0
        259edc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        259ee0:	e1a0300c 	mov	r3, ip
        259ee4:	e1a02005 	mov	r2, r5
        259ee8:	e3a01001 	mov	r1, #1	; 0x1
        259eec:	e5960000 	ldr	r0, [r6]
        259ef0:	ea000011 	b	259f3c <TUPort::Receive(TUAsyncMessage *, unsigned long, unsigned long, unsigned char)+0xb0>
        259ef4:	e3310000 	teq	r1, #0	; 0x0
        259ef8:	0a000006 	beq	259f18 <TUPort::Receive(TUAsyncMessage *, unsigned long, unsigned long, unsigned char)+0x8c>
        259efc:	e3877010 	orr	r7, r7, #16	; 0x10
        259f00:	e3a03000 	mov	r3, #0	; 0x0
        259f04:	e3a02000 	mov	r2, #0	; 0x0
        259f08:	e5940000 	ldr	r0, [r4]
        259f0c:	eb055141 	bl	3ae418 <SMemMsgSetTimerParmsSWI>
        259f10:	e3300000 	teq	r0, #0	; 0x0
        259f14:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        259f18:	e3a03000 	mov	r3, #0	; 0x0
        259f1c:	e3a02000 	mov	r2, #0	; 0x0
        259f20:	e3a01000 	mov	r1, #0	; 0x0
        259f24:	e3a00000 	mov	r0, #0	; 0x0
        259f28:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        259f2c:	e1a03007 	mov	r3, r7
        259f30:	e1a02005 	mov	r2, r5
        259f34:	e5941000 	ldr	r1, [r4]
        259f38:	e5960000 	ldr	r0, [r6]
        259f3c:	eb0550b9 	bl	3ae228 <PortReceiveSWI>
        259f40:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUPort::ResetMsgFilter(TUAsyncMessage *, unsigned long)
 * Address: 00259fc4
 */
long		TUPort::ResetMsgFilter(TUAsyncMessage* async, ULong msgFilter) {
    /*
        259fc4:	e5911000 	ldr	r1, [r1]
        259fc8:	e5900000 	ldr	r0, [r0]
        259fcc:	ea0550a5 	b	3ae268 <PortResetFilterSWI>
    */
}

/**
 * Symbol: TUPort::Reset(unsigned long, unsigned long)
 * Address: 00259fd0
 */
long		TUPort::Reset(ULong sendersResetFlags, ULong receiversResetFlags) {
    /*
        259fd0:	e1a03002 	mov	r3, r2
        259fd4:	e1a02001 	mov	r2, r1
        259fd8:	e5901000 	ldr	r1, [r0]
        259fdc:	e3a00043 	mov	r0, #67	; 0x43
        259fe0:	ea055063 	b	3ae174 <GenericSWI>
    */
}

