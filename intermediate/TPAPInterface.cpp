#include "include/TPAPInterface.h"

/**
 * Symbol: TPAPInterface::__ct(void)
 * Address: 00150d24
 */
TPAPInterface::TPAPInterface(void) {
    /*
        150d24:	e1a0c00d 	mov	ip, sp
        150d28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        150d2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        150d30:	e1b04000 	movs	r4, r0
        150d34:	1a000003 	bne	150d48 <TPAPInterface::__ct(void)+0x24>
        150d38:	e3a00fc5 	mov	r0, #788	; 0x314
        150d3c:	eb69f67d 	bl	1bce738 <$__nw(unsigned int)>
        150d40:	e1b04000 	movs	r4, r0
        150d44:	0a000031 	beq	150e10 <TPAPInterface::__ct(void)+0xec>
        150d48:	e1a00004 	mov	r0, r4
        150d4c:	eb6a4d2d 	bl	1be4208 <TAEventHandler::$__ct(void)>
        150d50:	e284001c 	add	r0, r4, #28	; 0x1c
        150d54:	e3a01001 	mov	r1, #1	; 0x1
        150d58:	eb6a8b13 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        150d5c:	e2840028 	add	r0, r4, #40	; 0x28
        150d60:	e3a01001 	mov	r1, #1	; 0x1
        150d64:	eb6a8b10 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        150d68:	e284003c 	add	r0, r4, #60	; 0x3c
        150d6c:	eb6a8b10 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        150d70:	e2840060 	add	r0, r4, #96	; 0x60
        150d74:	eb6a8b0e 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        150d78:	e2840084 	add	r0, r4, #132	; 0x84
        150d7c:	eb6a4d20 	bl	1be4204 <CBufferSegment::$__ct(void)>
        150d80:	e28400ac 	add	r0, r4, #172	; 0xac
        150d84:	eb64d57c 	bl	1a8637c <TPAPTimer::$__ct(void)>
        150d88:	e28400c8 	add	r0, r4, #200	; 0xc8
        150d8c:	eb6a8b08 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        150d90:	e28400ec 	add	r0, r4, #236	; 0xec
        150d94:	eb6482c0 	bl	1a7189c <TAsyncEvent::$__ct(void)>
        150d98:	e2840f42 	add	r0, r4, #264	; 0x108
        150d9c:	eb6482bc 	bl	1a71894 <TString255::$__ct(void)>
        150da0:	e2840f83 	add	r0, r4, #524	; 0x20c
        150da4:	eb6a8b02 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        150da8:	e2840e23 	add	r0, r4, #560	; 0x230
        150dac:	eb6a8b00 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        150db0:	e2840f95 	add	r0, r4, #596	; 0x254
        150db4:	eb6482b8 	bl	1a7189c <TAsyncEvent::$__ct(void)>
        150db8:	e2840f9d 	add	r0, r4, #628	; 0x274
        150dbc:	eb6a8afc 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        150dc0:	e2840fa6 	add	r0, r4, #664	; 0x298
        150dc4:	eb6a8afa 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        150dc8:	e2840faf 	add	r0, r4, #700	; 0x2bc
        150dcc:	eb6482b2 	bl	1a7189c <TAsyncEvent::$__ct(void)>
        150dd0:	e2840fbb 	add	r0, r4, #748	; 0x2ec
        150dd4:	eb64d568 	bl	1a8637c <TPAPTimer::$__ct(void)>
        150dd8:	e2840fc2 	add	r0, r4, #776	; 0x308
        150ddc:	eb697e94 	bl	1bb0834 <TPseudoSyncState::$__ct(void)>
        150de0:	e59f0030 	ldr	r0, [pc, #30]	; 150e18 <TPAPInterface::__ct(void)+0xf4>
        150de4:	e5840000 	str	r0, [r4]
        150de8:	e3a00000 	mov	r0, #0	; 0x0
        150dec:	e5c40014 	strb	r0, [r4, #20]	; fField20
        150df0:	e5c40015 	strb	r0, [r4, #21]	; fField21
        150df4:	e5c40016 	strb	r0, [r4, #22]	; fField22
        150df8:	e5c40019 	strb	r0, [r4, #25]	; fField25
        150dfc:	e5c40018 	strb	r0, [r4, #24]	; fField24
        150e00:	e5c40035 	strb	r0, [r4, #53]	; fField53
        150e04:	e5c40034 	strb	r0, [r4, #52]	; fField52
        150e08:	e58402e0 	str	r0, [r4, #736]	; fField736
        150e0c:	e5c40310 	strb	r0, [r4, #784]	; fField784
        150e10:	e1a00004 	mov	r0, r4
        150e14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        150e18:	0001d030 	andeq	sp, r1, r0, lsr r0
    */
}

/**
 * Symbol: TPAPInterface::CloseConnection(void)
 * Address: 00150e1c
 */
TPAPInterface::CloseConnection(void) {
    /*
        150e1c:	e1a0c00d 	mov	ip, sp
        150e20:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        150e24:	e24cb004 	sub	fp, ip, #4	; 0x4
        150e28:	e1a04000 	mov	r4, r0
        150e2c:	e2800fbb 	add	r0, r0, #748	; 0x2ec
        150e30:	eb696df8 	bl	1bac618 <TTimerElement::$Cancel(void)>
        150e34:	e1a00004 	mov	r0, r4
        150e38:	eb649b52 	bl	1a77b88 <TPAPInterface::$CancelAsyncEvents(void)>
        150e3c:	e24dd024 	sub	sp, sp, #36	; 0x24
        150e40:	e1a0000d 	mov	r0, sp
        150e44:	eb6a8ada 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        150e48:	e1a0000d 	mov	r0, sp
        150e4c:	e3a03001 	mov	r3, #1	; 0x1
        150e50:	e3a02001 	mov	r2, #1	; 0x1
        150e54:	e3a01004 	mov	r1, #4	; 0x4
        150e58:	eb6a8ad6 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        150e5c:	e1b05000 	movs	r5, r0
        150e60:	0a000004 	beq	150e78 <TPAPInterface::CloseConnection(void)+0x5c>
        150e64:	e1a0000d 	mov	r0, sp
        150e68:	e3a01000 	mov	r1, #0	; 0x0
        150e6c:	eb6a8ad2 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        150e70:	e28dd024 	add	sp, sp, #36	; 0x24
        150e74:	ea000035 	b	150f50 <TPAPInterface::CloseConnection(void)+0x134>
        150e78:	e1a0000d 	mov	r0, sp
        150e7c:	eb6a8ad1 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        150e80:	e1a07000 	mov	r7, r0
        150e84:	e1a0000d 	mov	r0, sp
        150e88:	eb6a8ad1 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        150e8c:	e5d41016 	ldrb	r1, [r4, #22]	; fField22
        150e90:	e5c01000 	strb	r1, [r0]
        150e94:	e3a01006 	mov	r1, #6	; 0x6
        150e98:	e5c01001 	strb	r1, [r0, #1]	; fField1
        150e9c:	e3a01000 	mov	r1, #0	; 0x0
        150ea0:	e5c01002 	strb	r1, [r0, #2]	; fField2
        150ea4:	e5c01003 	strb	r1, [r0, #3]	; fField3
        150ea8:	e24dd024 	sub	sp, sp, #36	; 0x24
        150eac:	e1a0000d 	mov	r0, sp
        150eb0:	eb6a8abf 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        150eb4:	e1a0000d 	mov	r0, sp
        150eb8:	e3a03000 	mov	r3, #0	; 0x0
        150ebc:	e3a02001 	mov	r2, #1	; 0x1
        150ec0:	e3a01048 	mov	r1, #72	; 0x48
        150ec4:	eb6a8abb 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        150ec8:	e1b05000 	movs	r5, r0
        150ecc:	1a000018 	bne	150f34 <TPAPInterface::CloseConnection(void)+0x118>
        150ed0:	e1a0000d 	mov	r0, sp
        150ed4:	eb6a8abb 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        150ed8:	e1a0c000 	mov	ip, r0
        150edc:	e3a03000 	mov	r3, #0	; 0x0
        150ee0:	e59f2070 	ldr	r2, [pc, #70]	; 150f58 <TPAPInterface::CloseConnection(void)+0x13c>
        150ee4:	e3a01002 	mov	r1, #2	; 0x2
        150ee8:	e3a00001 	mov	r0, #1	; 0x1
        150eec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        150ef0:	e3a03001 	mov	r3, #1	; 0x1
        150ef4:	e1a0200c 	mov	r2, ip
        150ef8:	e92d000c 	stmdb	sp!, {r2, r3}
        150efc:	e2842028 	add	r2, r4, #40	; 0x28
        150f00:	e2840038 	add	r0, r4, #56	; 0x38
        150f04:	e1a06000 	mov	r6, r0
        150f08:	e1a03007 	mov	r3, r7
        150f0c:	e3a01000 	mov	r1, #0	; 0x0
        150f10:	eb6a8aad 	bl	1bf39cc <TATPInterface::$SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)>
        150f14:	e28dd018 	add	sp, sp, #24	; 0x18
        150f18:	e1b05000 	movs	r5, r0
        150f1c:	1a000004 	bne	150f34 <TPAPInterface::CloseConnection(void)+0x118>
        150f20:	e5d41035 	ldrb	r1, [r4, #53]	; fField53
        150f24:	e1a00006 	mov	r0, r6
        150f28:	eb6a8aa8 	bl	1bf39d0 <TATPInterface::$CloseResponder(unsigned char)>
        150f2c:	e1b05000 	movs	r5, r0
        150f30:	0a000009 	beq	150f5c <TPAPInterface::CloseConnection(void)+0x140>
        150f34:	e1a0000d 	mov	r0, sp
        150f38:	e3a01000 	mov	r1, #0	; 0x0
        150f3c:	eb6a8a9e 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        150f40:	e28d0024 	add	r0, sp, #36	; 0x24
        150f44:	e3a01000 	mov	r1, #0	; 0x0
        150f48:	eb6a8a9b 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        150f4c:	e28dd048 	add	sp, sp, #72	; 0x48
        150f50:	e1a00005 	mov	r0, r5
        150f54:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        150f58:	001c1f38 	andeqs	r1, ip, r8, lsr pc
        150f5c:	e1a0000d 	mov	r0, sp
        150f60:	e3a01000 	mov	r1, #0	; 0x0
        150f64:	eb6a8a94 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        150f68:	e28dd024 	add	sp, sp, #36	; 0x24
        150f6c:	eaffffbc 	b	150e64 <TPAPInterface::CloseConnection(void)+0x48>
    */
}

/**
 * Symbol: TPAPInterface::Close(unsigned char)
 * Address: 00150f70
 */
TPAPInterface::Close(unsigned char) {
    /*
        150f70:	e1a0c00d 	mov	ip, sp
        150f74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        150f78:	e24cb004 	sub	fp, ip, #4	; 0x4
        150f7c:	e1a04000 	mov	r4, r0
        150f80:	e20100ff 	and	r0, r1, #255	; 0xff
        150f84:	e5d41014 	ldrb	r1, [r4, #20]	; fField20
        150f88:	e3310000 	teq	r1, #0	; 0x0
        150f8c:	03a00f45 	moveq	r0, #276	; 0x114
        150f90:	02400a03 	subeq	r0, r0, #12288	; 0x3000
        150f94:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        150f98:	e5d41016 	ldrb	r1, [r4, #22]	; fField22
        150f9c:	e3310000 	teq	r1, #0	; 0x0
        150fa0:	03a00000 	moveq	r0, #0	; 0x0
        150fa4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        150fa8:	e5d41015 	ldrb	r1, [r4, #21]	; fField21
        150fac:	e3310000 	teq	r1, #0	; 0x0
        150fb0:	03300000 	teqeq	r0, #0	; 0x0
        150fb4:	059402e0 	ldreq	r0, [r4, #736]	; fField736
        150fb8:	03300000 	teqeq	r0, #0	; 0x0
        150fbc:	1a000003 	bne	150fd0 <TPAPInterface::Close(unsigned char)+0x60>
        150fc0:	e1a00004 	mov	r0, r4
        150fc4:	eb64a33e 	bl	1a79cc4 <TPAPInterface::$Flush(void)>
        150fc8:	e3300000 	teq	r0, #0	; 0x0
        150fcc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        150fd0:	e3a00004 	mov	r0, #4	; 0x4
        150fd4:	e58402dc 	str	r0, [r4, #732]	; fField732
        150fd8:	e1a00004 	mov	r0, r4
        150fdc:	eb649af5 	bl	1a77bb8 <TPAPInterface::$CloseConnection(void)>
        150fe0:	e5b412e0 	ldr	r1, [r4, #736]!	; fField736
        150fe4:	e3310000 	teq	r1, #0	; 0x0
        150fe8:	11a00001 	movne	r0, r1
        150fec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::SetupToSendData(void)
 * Address: 00150ff0
 */
TPAPInterface::SetupToSendData(void) {
    /*
        150ff0:	e1a0c00d 	mov	ip, sp
        150ff4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        150ff8:	e24cb004 	sub	fp, ip, #4	; 0x4
        150ffc:	e1a04000 	mov	r4, r0
        151000:	e5d00016 	ldrb	r0, [r0, #22]	; fField22
        151004:	e3300000 	teq	r0, #0	; 0x0
        151008:	03a00062 	moveq	r0, #98	; 0x62
        15100c:	02400c32 	subeq	r0, r0, #12800	; 0x3200
        151010:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        151014:	e5d40035 	ldrb	r0, [r4, #53]	; fField53
        151018:	e3300000 	teq	r0, #0	; 0x0
        15101c:	03a00061 	moveq	r0, #97	; 0x61
        151020:	02400c32 	subeq	r0, r0, #12800	; 0x3200
        151024:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        151028:	e284003c 	add	r0, r4, #60	; 0x3c
        15102c:	e3a03000 	mov	r3, #0	; 0x0
        151030:	e3a02001 	mov	r2, #1	; 0x1
        151034:	e3a01018 	mov	r1, #24	; 0x18
        151038:	eb6a8a5e 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        15103c:	e3300000 	teq	r0, #0	; 0x0
        151040:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        151044:	e5d40034 	ldrb	r0, [r4, #52]	; fField52
        151048:	e3a06054 	mov	r6, #84	; 0x54
        15104c:	e0861480 	add	r1, r6, r0, lsl #9
        151050:	e2840060 	add	r0, r4, #96	; 0x60
        151054:	e1a05000 	mov	r5, r0
        151058:	e3a03001 	mov	r3, #1	; 0x1
        15105c:	e3a02001 	mov	r2, #1	; 0x1
        151060:	eb6a8a54 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        151064:	e3300000 	teq	r0, #0	; 0x0
        151068:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        15106c:	e1a00005 	mov	r0, r5
        151070:	eb6a8a57 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        151074:	e1a01000 	mov	r1, r0
        151078:	e3a02000 	mov	r2, #0	; 0x0
        15107c:	e5c02000 	strb	r2, [r0]
        151080:	e3a00c02 	mov	r0, #512	; 0x200
        151084:	e581004c 	str	r0, [r1, #76]
        151088:	e2810050 	add	r0, r1, #80	; 0x50
        15108c:	e5d43016 	ldrb	r3, [r4, #22]	; fField22
        151090:	e5c03000 	strb	r3, [r0]
        151094:	e3a03004 	mov	r3, #4	; 0x4
        151098:	e5c03001 	strb	r3, [r0, #1]	; fField1
        15109c:	e5c02002 	strb	r2, [r0, #2]	; fField2
        1510a0:	e5c02003 	strb	r2, [r0, #3]	; fField3
        1510a4:	e3a00000 	mov	r0, #0	; 0x0
        1510a8:	e5d42034 	ldrb	r2, [r4, #52]	; fField52
        1510ac:	e3520000 	cmp	r2, #0	; 0x0
        1510b0:	da000009 	ble	1510dc <TPAPInterface::SetupToSendData(void)+0xec>
        1510b4:	e2802001 	add	r2, r0, #1	; 0x1
        1510b8:	e0813000 	add	r3, r1, r0
        1510bc:	e5c32003 	strb	r2, [r3, #3]	; fField3
        1510c0:	e0863480 	add	r3, r6, r0, lsl #9
        1510c4:	e0810100 	add	r0, r1, r0, lsl #2
        1510c8:	e5a0300c 	str	r3, [r0, #12]!	; fField12
        1510cc:	e20200ff 	and	r0, r2, #255	; 0xff
        1510d0:	e5d42034 	ldrb	r2, [r4, #52]	; fField52
        1510d4:	e1520000 	cmp	r2, r0
        1510d8:	cafffff5 	bgt	1510b4 <TPAPInterface::SetupToSendData(void)+0xc4>
        1510dc:	e1a00005 	mov	r0, r5
        1510e0:	eb6a8a3b 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        1510e4:	e2801054 	add	r1, r0, #84	; 0x54
        1510e8:	e3e03000 	mvn	r3, #0	; 0x0
        1510ec:	e3a02000 	mov	r2, #0	; 0x0
        1510f0:	e92d000c 	stmdb	sp!, {r2, r3}
        1510f4:	e5d40034 	ldrb	r0, [r4, #52]	; fField52
        1510f8:	e1a02480 	mov	r2, r0, lsl #9
        1510fc:	e2840084 	add	r0, r4, #132	; 0x84
        151100:	e3a03000 	mov	r3, #0	; 0x0
        151104:	eb6a60e8 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        151108:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::SendZeroLengthResponse(void)
 * Address: 0015110c
 */
TPAPInterface::SendZeroLengthResponse(void) {
    /*
        15110c:	e3a00001 	mov	r0, #1	; 0x1
        151110:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)
 * Address: 00151114
 */
TPAPInterface::SendData(unsigned short, unsigned short, TAddress &) {
    /*
        151114:	e1a0c00d 	mov	ip, sp
        151118:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15111c:	e24cb004 	sub	fp, ip, #4	; 0x4
        151120:	e1a04000 	mov	r4, r0
        151124:	e1a0a802 	mov	sl, r2, lsl #16
        151128:	e1a0a82a 	mov	sl, sl, lsr #16
        15112c:	e3a08000 	mov	r8, #0	; 0x0
        151130:	e2800060 	add	r0, r0, #96	; 0x60
        151134:	e1a09000 	mov	r9, r0
        151138:	eb6a8a25 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        15113c:	e1a05000 	mov	r5, r0
        151140:	e3a00001 	mov	r0, #1	; 0x1
        151144:	e5c50002 	strb	r0, [r5, #2]	; fField2
        151148:	e59412dc 	ldr	r1, [r4, #732]	; fField732
        15114c:	e2846084 	add	r6, r4, #132	; 0x84
        151150:	e3310003 	teq	r1, #3	; 0x3
        151154:	1a00000e 	bne	151194 <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x80>
        151158:	e5c50000 	strb	r0, [r5]
        15115c:	e5c50001 	strb	r0, [r5, #1]	; fField1
        151160:	e5c50003 	strb	r0, [r5, #3]	; fField3
        151164:	e3a01054 	mov	r1, #84	; 0x54
        151168:	e585100c 	str	r1, [r5, #12]	; fField12
        15116c:	e3a01004 	mov	r1, #4	; 0x4
        151170:	e585102c 	str	r1, [r5, #44]	; fField44
        151174:	e2852054 	add	r2, r5, #84	; 0x54
        151178:	e5d43016 	ldrb	r3, [r4, #22]	; fField22
        15117c:	e5c23000 	strb	r3, [r2]
        151180:	e5c21001 	strb	r1, [r2, #1]	; fField1
        151184:	e5c20002 	strb	r0, [r2, #2]	; fField2
        151188:	e3a00000 	mov	r0, #0	; 0x0
        15118c:	e5c20003 	strb	r0, [r2, #3]	; fField3
        151190:	ea000010 	b	1511d8 <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0xc4>
        151194:	e1a00006 	mov	r0, r6
        151198:	e5961000 	ldr	r1, [r6]
        15119c:	e1a0e00f 	mov	lr, pc
        1511a0:	e281f03c 	add	pc, r1, #60	; 0x3c
        1511a4:	e1b07000 	movs	r7, r0
        1511a8:	1a000004 	bne	1511c0 <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0xac>
        1511ac:	e3a08001 	mov	r8, #1	; 0x1
        1511b0:	e1a00004 	mov	r0, r4
        1511b4:	eb64d884 	bl	1a873cc <TPAPInterface::$SendZeroLengthResponse(void)>
        1511b8:	e3300000 	teq	r0, #0	; 0x0
        1511bc:	0a000028 	beq	151264 <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x150>
        1511c0:	e5d40034 	ldrb	r0, [r4, #52]	; fField52
        1511c4:	e1570480 	cmp	r7, r0, lsl #9
        1511c8:	83a05016 	movhi	r5, #22	; 0x16
        1511cc:	82455c2f 	subhi	r5, r5, #12032	; 0x2f00
        1511d0:	8a000025 	bhi	15126c <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x158>
        1511d4:	e5a5702c 	str	r7, [r5, #44]!	; fField44
        1511d8:	e3a03000 	mov	r3, #0	; 0x0
        1511dc:	e92d0008 	stmdb	sp!, {r3}
        1511e0:	e1a00009 	mov	r0, r9
        1511e4:	eb6a89f7 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        1511e8:	e1a03000 	mov	r3, r0
        1511ec:	e92d0008 	stmdb	sp!, {r3}
        1511f0:	e5d42035 	ldrb	r2, [r4, #53]	; fField53
        1511f4:	e2840038 	add	r0, r4, #56	; 0x38
        1511f8:	e1a0300a 	mov	r3, sl
        1511fc:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
        151200:	eb64d03b 	bl	1a852f4 <TATPInterface::$SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)>
        151204:	e28dd008 	add	sp, sp, #8	; 0x8
        151208:	e1a05000 	mov	r5, r0
        15120c:	e3500000 	cmp	r0, #0	; 0x0
        151210:	1a000010 	bne	151258 <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x144>
        151214:	e59402dc 	ldr	r0, [r4, #732]	; fField732
        151218:	e3300002 	teq	r0, #2	; 0x2
        15121c:	03a0005a 	moveq	r0, #90	; 0x5a
        151220:	02400c32 	subeq	r0, r0, #12800	; 0x3200
        151224:	0a000002 	beq	151234 <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x120>
        151228:	e3300003 	teq	r0, #3	; 0x3
        15122c:	1a000001 	bne	151238 <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x124>
        151230:	e59f001c 	ldr	r0, [pc, #1c]	; 151254 <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x140>	; fField1
        151234:	e58402e0 	str	r0, [r4, #736]	; fField736
        151238:	e1a00006 	mov	r0, r6
        15123c:	e5961000 	ldr	r1, [r6]
        151240:	e1a0e00f 	mov	lr, pc
        151244:	e281f028 	add	pc, r1, #40	; 0x28
        151248:	e2840fb9 	add	r0, r4, #740	; 0x2e4
        15124c:	eb6a09e1 	bl	1bd39d8 <$GetGlobalTime>
        151250:	ea000001 	b	15125c <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x148>
        151254:	ffffce5b 	swinv	0x00ffce5b
        151258:	1a000003 	bne	15126c <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x158>
        15125c:	e3380000 	teq	r8, #0	; 0x0
        151260:	0a000001 	beq	15126c <TPAPInterface::SendData(unsigned short, unsigned short, TAddress &)+0x158>
        151264:	e3a05056 	mov	r5, #86	; 0x56
        151268:	e2455c32 	sub	r5, r5, #12800	; 0x3200
        15126c:	e1a00005 	mov	r0, r5
        151270:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::HandleSendDataRequest(TPAPSendDataPacket *, unsigned short, TAddress &)
 * Address: 00151274
 */
TPAPInterface::HandleSendDataRequest(TPAPSendDataPacket *, unsigned short, TAddress &) {
    /*
        151274:	e1a0c00d 	mov	ip, sp
        151278:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        15127c:	e24cb004 	sub	fp, ip, #4	; 0x4
        151280:	e1a05000 	mov	r5, r0
        151284:	e1a04001 	mov	r4, r1
        151288:	e1a06003 	mov	r6, r3
        15128c:	e1a08802 	mov	r8, r2, lsl #16
        151290:	e1a08828 	mov	r8, r8, lsr #16
        151294:	e3a07000 	mov	r7, #0	; 0x0
        151298:	e5911002 	ldr	r1, [r1, #2]	; fField2
        15129c:	e1a01821 	mov	r1, r1, lsr #16
        1512a0:	eb64b2f8 	bl	1a7de88 <TPAPInterface::$OKSequenceNumber(unsigned short)>
        1512a4:	e3300000 	teq	r0, #0	; 0x0
        1512a8:	0a000006 	beq	1512c8 <TPAPInterface::HandleSendDataRequest(TPAPSendDataPacket *, unsigned short, TAddress &)+0x54>
        1512ac:	e5941002 	ldr	r1, [r4, #2]	; fField2
        1512b0:	e1a01821 	mov	r1, r1, lsr #16
        1512b4:	e1a03006 	mov	r3, r6
        1512b8:	e1a02008 	mov	r2, r8
        1512bc:	e1a00005 	mov	r0, r5
        1512c0:	eb64b72b 	bl	1a7ef74 <TPAPInterface::$SendData(unsigned short, unsigned short, TAddress &)>
        1512c4:	e1a07000 	mov	r7, r0
        1512c8:	e1a00007 	mov	r0, r7
        1512cc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::HandleStatus(TAppleTalkMessage *)
 * Address: 001512d0
 */
TPAPInterface::HandleStatus(TAppleTalkMessage *) {
    /*
        1512d0:	e1a0c00d 	mov	ip, sp
        1512d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1512d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1512dc:	e1a04000 	mov	r4, r0
        1512e0:	e2800f42 	add	r0, r0, #264	; 0x108
        1512e4:	e1a06000 	mov	r6, r0
        1512e8:	e3a02000 	mov	r2, #0	; 0x0
        1512ec:	e5c02000 	strb	r2, [r0]
        1512f0:	e5b15008 	ldr	r5, [r1, #8]!
        1512f4:	e3350000 	teq	r5, #0	; 0x0
        1512f8:	1a000008 	bne	151320 <TPAPInterface::HandleStatus(TAppleTalkMessage *)+0x50>
        1512fc:	e2840e23 	add	r0, r4, #560	; 0x230
        151300:	eb6a89b3 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        151304:	e3a01000 	mov	r1, #0	; 0x0
        151308:	eb6a89b2 	bl	1bf39d8 <TTransactionResponseBuffer::$GetDataPtr(unsigned char)>
        15130c:	e5f01008 	ldrb	r1, [r0, #8]!
        151310:	e3510000 	cmp	r1, #0	; 0x0
        151314:	c2812001 	addgt	r2, r1, #1	; 0x1
        151318:	c1a01006 	movgt	r1, r6
        15131c:	cb6a370c 	blgt	1bdef54 <$BlockMove>
        151320:	e5845208 	str	r5, [r4, #520]	; fField520
        151324:	e2840fc2 	add	r0, r4, #776	; 0x308
        151328:	eb69792c 	bl	1baf7e0 <TPseudoSyncState::$Unblock(void)>
        15132c:	e1a00005 	mov	r0, r5
        151330:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::HandleCloseConnectionRequest(TPAPCloseConnPacket *, unsigned short)
 * Address: 00151334
 */
TPAPInterface::HandleCloseConnectionRequest(TPAPCloseConnPacket *, unsigned short) {
    /*
        151334:	e1a0c00d 	mov	ip, sp
        151338:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15133c:	e24cb004 	sub	fp, ip, #4	; 0x4
        151340:	e1a04000 	mov	r4, r0
        151344:	e1a05802 	mov	r5, r2, lsl #16
        151348:	e1a05825 	mov	r5, r5, lsr #16
        15134c:	eb649a0d 	bl	1a77b88 <TPAPInterface::$CancelAsyncEvents(void)>
        151350:	e24dd024 	sub	sp, sp, #36	; 0x24
        151354:	e1a0000d 	mov	r0, sp
        151358:	eb6a8995 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        15135c:	e1a0000d 	mov	r0, sp
        151360:	e3a03001 	mov	r3, #1	; 0x1
        151364:	e3a02001 	mov	r2, #1	; 0x1
        151368:	e3a01058 	mov	r1, #88	; 0x58
        15136c:	eb6a8991 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        151370:	e3300000 	teq	r0, #0	; 0x0
        151374:	1a00001f 	bne	1513f8 <TPAPInterface::HandleCloseConnectionRequest(TPAPCloseConnPacket *, unsigned short)+0xc4>
        151378:	e1a0000d 	mov	r0, sp
        15137c:	eb6a8994 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        151380:	e3a01001 	mov	r1, #1	; 0x1
        151384:	e5c01000 	strb	r1, [r0]
        151388:	e5c01001 	strb	r1, [r0, #1]	; fField1
        15138c:	e5c01002 	strb	r1, [r0, #2]	; fField2
        151390:	e5c01003 	strb	r1, [r0, #3]	; fField3
        151394:	e3a01054 	mov	r1, #84	; 0x54
        151398:	e580100c 	str	r1, [r0, #12]	; fField12
        15139c:	e3a01004 	mov	r1, #4	; 0x4
        1513a0:	e5a0102c 	str	r1, [r0, #44]!	; fField44
        1513a4:	e1a0000d 	mov	r0, sp
        1513a8:	eb6a8989 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        1513ac:	e5d41016 	ldrb	r1, [r4, #22]	; fField22
        1513b0:	e5e01054 	strb	r1, [r0, #84]!
        1513b4:	e3a01007 	mov	r1, #7	; 0x7
        1513b8:	e5c01001 	strb	r1, [r0, #1]	; fField1
        1513bc:	e3a01000 	mov	r1, #0	; 0x0
        1513c0:	e5c01002 	strb	r1, [r0, #2]	; fField2
        1513c4:	e5c01003 	strb	r1, [r0, #3]	; fField3
        1513c8:	e3a03000 	mov	r3, #0	; 0x0
        1513cc:	e92d0008 	stmdb	sp!, {r3}
        1513d0:	e28d0004 	add	r0, sp, #4	; 0x4
        1513d4:	eb6a897b 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        1513d8:	e1a03000 	mov	r3, r0
        1513dc:	e92d0008 	stmdb	sp!, {r3}
        1513e0:	e5d42035 	ldrb	r2, [r4, #53]	; fField53
        1513e4:	e2841028 	add	r1, r4, #40	; 0x28
        1513e8:	e2840038 	add	r0, r4, #56	; 0x38
        1513ec:	e1a03005 	mov	r3, r5
        1513f0:	eb64cfbf 	bl	1a852f4 <TATPInterface::$SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)>
        1513f4:	e28dd008 	add	sp, sp, #8	; 0x8
        1513f8:	e1a0000d 	mov	r0, sp
        1513fc:	e3a01000 	mov	r1, #0	; 0x0
        151400:	eb6a896d 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        151404:	e3a00059 	mov	r0, #89	; 0x59
        151408:	e2400c32 	sub	r0, r0, #12800	; 0x3200
        15140c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::HandleTimer(unsigned long)
 * Address: 00151410
 */
TPAPInterface::HandleTimer(unsigned long) {
    /*
        151410:	e1a0c00d 	mov	ip, sp
        151414:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        151418:	e24cb004 	sub	fp, ip, #4	; 0x4
        15141c:	e3a04000 	mov	r4, #0	; 0x0
        151420:	e2802fc2 	add	r2, r0, #776	; 0x308
        151424:	e3310005 	teq	r1, #5	; 0x5
        151428:	1a000006 	bne	151448 <TPAPInterface::HandleTimer(unsigned long)+0x38>
        15142c:	e3a04f95 	mov	r4, #596	; 0x254
        151430:	e2444b0d 	sub	r4, r4, #13312	; 0x3400
        151434:	e58042e0 	str	r4, [r0, #736]	; fField736
        151438:	e5d00310 	ldrb	r0, [r0, #784]	; fField784
        15143c:	e3300000 	teq	r0, #0	; 0x0
        151440:	0a00000c 	beq	151478 <TPAPInterface::HandleTimer(unsigned long)+0x68>
        151444:	ea000009 	b	151470 <TPAPInterface::HandleTimer(unsigned long)+0x60>
        151448:	e3310006 	teq	r1, #6	; 0x6
        15144c:	1a000009 	bne	151478 <TPAPInterface::HandleTimer(unsigned long)+0x68>
        151450:	e3a01001 	mov	r1, #1	; 0x1
        151454:	e5c01015 	strb	r1, [r0, #21]	; fField21
        151458:	e3a04f97 	mov	r4, #604	; 0x25c
        15145c:	e2444b0d 	sub	r4, r4, #13312	; 0x3400
        151460:	e58042e0 	str	r4, [r0, #736]	; fField736
        151464:	e5d00310 	ldrb	r0, [r0, #784]	; fField784
        151468:	e3300000 	teq	r0, #0	; 0x0
        15146c:	0a000001 	beq	151478 <TPAPInterface::HandleTimer(unsigned long)+0x68>
        151470:	e1a00002 	mov	r0, r2
        151474:	eb6978d9 	bl	1baf7e0 <TPseudoSyncState::$Unblock(void)>
        151478:	e1a00004 	mov	r0, r4
        15147c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00151480
 */
TPAPInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        151480:	e5912000 	ldr	r2, [r1]
        151484:	e59012bc 	ldr	r1, [r0, #700]	; fField700
        151488:	e1320001 	teq	r2, r1
        15148c:	1a000004 	bne	1514a4 <TPAPInterface::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x24>
        151490:	e5b31008 	ldr	r1, [r3, #8]!
        151494:	e3310000 	teq	r1, #0	; 0x0
        151498:	03a01001 	moveq	r1, #1	; 0x1
        15149c:	05c01270 	streqb	r1, [r0, #624]	; fField624
        1514a0:	e1a0f00e 	mov	pc, lr
        1514a4:	e5901254 	ldr	r1, [r0, #596]	; fField596
        1514a8:	e1320001 	teq	r2, r1
        1514ac:	01a01003 	moveq	r1, r3
        1514b0:	0a64aa36 	beq	1a7bd90 <TPAPInterface::$HandleStatus(TAppleTalkMessage *)>
        1514b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAPInterface::__dt(void)
 * Address: 001514b8
 */
TPAPInterface::~TPAPInterface(void) {
    /*
        1514b8:	e1a0c00d 	mov	ip, sp
        1514bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1514c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1514c4:	e1a04000 	mov	r4, r0
        1514c8:	e1a05001 	mov	r5, r1
        1514cc:	e59f00c8 	ldr	r0, [pc, #c8]	; 15159c <TPAPInterface::__dt(void)+0xe4>
        1514d0:	e5840000 	str	r0, [r4]
        1514d4:	e2840fc2 	add	r0, r4, #776	; 0x308
        1514d8:	e3a01000 	mov	r1, #0	; 0x0
        1514dc:	eb697ce0 	bl	1bb0864 <TPseudoSyncState::$__dt(void)>
        1514e0:	e2840fbb 	add	r0, r4, #748	; 0x2ec
        1514e4:	e3a01000 	mov	r1, #0	; 0x0
        1514e8:	eb697cda 	bl	1bb0858 <TTimerElement::$__dt(void)>
        1514ec:	e2840faf 	add	r0, r4, #700	; 0x2bc
        1514f0:	e3a01000 	mov	r1, #0	; 0x0
        1514f4:	eb648923 	bl	1a73988 <TAsyncEvent::$__dt(void)>
        1514f8:	e2840fa6 	add	r0, r4, #664	; 0x298
        1514fc:	e3a01000 	mov	r1, #0	; 0x0
        151500:	eb6a892d 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        151504:	e2840f9d 	add	r0, r4, #628	; 0x274
        151508:	e3a01000 	mov	r1, #0	; 0x0
        15150c:	eb6a892a 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        151510:	e2840f95 	add	r0, r4, #596	; 0x254
        151514:	e3a01000 	mov	r1, #0	; 0x0
        151518:	eb64891a 	bl	1a73988 <TAsyncEvent::$__dt(void)>
        15151c:	e2840e23 	add	r0, r4, #560	; 0x230
        151520:	e3a01000 	mov	r1, #0	; 0x0
        151524:	eb6a8924 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        151528:	e2840f83 	add	r0, r4, #524	; 0x20c
        15152c:	e3a01000 	mov	r1, #0	; 0x0
        151530:	eb6a8921 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        151534:	e28400ec 	add	r0, r4, #236	; 0xec
        151538:	e3a01000 	mov	r1, #0	; 0x0
        15153c:	eb648911 	bl	1a73988 <TAsyncEvent::$__dt(void)>
        151540:	e28400c8 	add	r0, r4, #200	; 0xc8
        151544:	e3a01000 	mov	r1, #0	; 0x0
        151548:	eb6a891b 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        15154c:	e28400ac 	add	r0, r4, #172	; 0xac
        151550:	e3a01000 	mov	r1, #0	; 0x0
        151554:	eb697cbf 	bl	1bb0858 <TTimerElement::$__dt(void)>
        151558:	e2840084 	add	r0, r4, #132	; 0x84
        15155c:	e3a01000 	mov	r1, #0	; 0x0
        151560:	eb6a4b41 	bl	1be426c <CBufferSegment::$__dt(void)>
        151564:	e2840060 	add	r0, r4, #96	; 0x60
        151568:	e3a01000 	mov	r1, #0	; 0x0
        15156c:	eb6a8912 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        151570:	e284003c 	add	r0, r4, #60	; 0x3c
        151574:	e3a01000 	mov	r1, #0	; 0x0
        151578:	eb6a890f 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        15157c:	e1a00004 	mov	r0, r4
        151580:	e3a01000 	mov	r1, #0	; 0x0
        151584:	eb6a4b39 	bl	1be4270 <TAEventHandler::$__dt(void)>
        151588:	e3150001 	tst	r5, #1	; 0x1
        15158c:	11a00004 	movne	r0, r4
        151590:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        151594:	1a69f051 	bne	1bcd6e0 <$__dl(void *)>
        151598:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15159c:	0001d030 	andeq	sp, r1, r0, lsr r0
    */
}

/**
 * Symbol: TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 001515a0
 */
TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        1515a0:	e1a0c00d 	mov	ip, sp
        1515a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1515a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1515ac:	e1a04000 	mov	r4, r0
        1515b0:	e1a05003 	mov	r5, r3
        1515b4:	e3a06000 	mov	r6, #0	; 0x0
        1515b8:	e1a0a003 	mov	sl, r3
        1515bc:	e59002dc 	ldr	r0, [r0, #732]	; fField732
        1515c0:	e3300004 	teq	r0, #4	; 0x4
        1515c4:	13300000 	teqne	r0, #0	; 0x0
        1515c8:	1a000009 	bne	1515f4 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x54>
        1515cc:	e5ba0014 	ldr	r0, [sl, #20]!	; fField20
        1515d0:	e59f109c 	ldr	r1, [pc, #9c]	; 151674 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xd4>
        1515d4:	e5850004 	str	r0, [r5, #4]
        1515d8:	e5851000 	str	r1, [r5]
        1515dc:	eb6a08fc 	bl	1bd39d4 <$GetGlobals>
        1515e0:	e3a01008 	mov	r1, #8	; 0x8
        1515e4:	eb6a534d 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
        1515e8:	eb6a08f9 	bl	1bd39d4 <$GetGlobals>
        1515ec:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1515f0:	ea6a5347 	b	1be6314 <TAppWorld::$AEReplyImmed(void)>
        1515f4:	e3a00000 	mov	r0, #0	; 0x0
        1515f8:	e58402e0 	str	r0, [r4, #736]	; fField736
        1515fc:	e284003c 	add	r0, r4, #60	; 0x3c
        151600:	eb6a88f3 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        151604:	e1a08000 	mov	r8, r0
        151608:	e5909010 	ldr	r9, [r0, #16]
        15160c:	e1a09829 	mov	r9, r9, lsr #16
        151610:	e2807014 	add	r7, r0, #20	; 0x14
        151614:	e24dd004 	sub	sp, sp, #4	; 0x4
        151618:	e5d70000 	ldrb	r0, [r7]
        15161c:	e5d71001 	ldrb	r1, [r7, #1]	; fField1
        151620:	e58d1000 	str	r1, [sp]
        151624:	e3310008 	teq	r1, #8	; 0x8
        151628:	15d41016 	ldrneb	r1, [r4, #22]	; fField22
        15162c:	11310000 	teqne	r1, r0
        151630:	1a000052 	bne	151780 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1e0>
        151634:	e2840fbb 	add	r0, r4, #748	; 0x2ec
        151638:	e3a0185e 	mov	r1, #6160384	; 0x5e0000
        15163c:	e281141a 	add	r1, r1, #436207616	; 0x1a000000
        151640:	eb69743a 	bl	1bae730 <TTimerElement::$Prime(unsigned long)>
        151644:	e59d1000 	ldr	r1, [sp]
        151648:	e2410003 	sub	r0, r1, #3	; 0x3
        15164c:	e3500006 	cmp	r0, #6	; 0x6
        151650:	908ff100 	addls	pc, pc, r0, lsl #2
        151654:	ea00001d 	b	1516d0 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x130>
        151658:	ea000006 	b	151678 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xd8>
        15165c:	ea00001d 	b	1516d8 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
        151660:	ea00000a 	b	151690 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xf0>
        151664:	ea000013 	b	1516b8 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x118>
        151668:	ea000018 	b	1516d0 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x130>
        15166c:	ea000019 	b	1516d8 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
        151670:	ea000018 	b	1516d8 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
        151674:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        151678:	e1a03008 	mov	r3, r8
        15167c:	e1a02009 	mov	r2, r9
        151680:	e1a01007 	mov	r1, r7
        151684:	e1a00004 	mov	r0, r4
        151688:	eb64a9bf 	bl	1a7bd8c <TPAPInterface::$HandleSendDataRequest(TPAPSendDataPacket *, unsigned short, TAddress &)>
        15168c:	ea00000d 	b	1516c8 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x128>
        151690:	e3a03001 	mov	r3, #1	; 0x1
        151694:	e3a02000 	mov	r2, #0	; 0x0
        151698:	e92d000c 	stmdb	sp!, {r2, r3}
        15169c:	e5d42035 	ldrb	r2, [r4, #53]	; fField53
        1516a0:	e2841028 	add	r1, r4, #40	; 0x28
        1516a4:	e2840038 	add	r0, r4, #56	; 0x38
        1516a8:	e1a03009 	mov	r3, r9
        1516ac:	eb64cf10 	bl	1a852f4 <TATPInterface::$SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)>
        1516b0:	e28dd008 	add	sp, sp, #8	; 0x8
        1516b4:	ea000007 	b	1516d8 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
        1516b8:	e1a02009 	mov	r2, r9
        1516bc:	e1a01007 	mov	r1, r7
        1516c0:	e1a00004 	mov	r0, r4
        1516c4:	eb64a5a5 	bl	1a7ad60 <TPAPInterface::$HandleCloseConnectionRequest(TPAPCloseConnPacket *, unsigned short)>
        1516c8:	e1a06000 	mov	r6, r0
        1516cc:	ea000001 	b	1516d8 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
        1516d0:	e3a06ee6 	mov	r6, #3680	; 0xe60
        1516d4:	e2466901 	sub	r6, r6, #16384	; 0x4000
        1516d8:	e5ba0014 	ldr	r0, [sl, #20]!	; fField20
        1516dc:	e51f1070 	ldr	r1, [pc, #ffffff90]	; 151674 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xd4>
        1516e0:	e5850004 	str	r0, [r5, #4]
        1516e4:	e5851000 	str	r1, [r5]
        1516e8:	eb6a08b9 	bl	1bd39d4 <$GetGlobals>
        1516ec:	e3a01008 	mov	r1, #8	; 0x8
        1516f0:	eb6a530a 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
        1516f4:	e59d1000 	ldr	r1, [sp]
        1516f8:	e3310003 	teq	r1, #3	; 0x3
        1516fc:	1a00001f 	bne	151780 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1e0>
        151700:	e59402e0 	ldr	r0, [r4, #736]	; fField736
        151704:	e2845fc2 	add	r5, r4, #776	; 0x308
        151708:	e3a07056 	mov	r7, #86	; 0x56
        15170c:	e2477c32 	sub	r7, r7, #12800	; 0x3200
        151710:	e280cdc6 	add	ip, r0, #12672	; 0x3180
        151714:	e37c0025 	cmn	ip, #37	; 0x25
        151718:	1280cdc6 	addne	ip, r0, #12672	; 0x3180
        15171c:	137c0026 	cmnne	ip, #38	; 0x26
        151720:	1a000004 	bne	151738 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x198>
        151724:	e5d40310 	ldrb	r0, [r4, #784]	; fField784
        151728:	e3300000 	teq	r0, #0	; 0x0
        15172c:	11a00005 	movne	r0, r5
        151730:	1b69782a 	blne	1baf7e0 <TPseudoSyncState::$Unblock(void)>
        151734:	ea000003 	b	151748 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1a8>
        151738:	e1360007 	teq	r6, r7
        15173c:	158462e0 	strne	r6, [r4, #736]	; fField736
        151740:	03a00000 	moveq	r0, #0	; 0x0
        151744:	058402e0 	streq	r0, [r4, #736]	; fField736
        151748:	e59402dc 	ldr	r0, [r4, #732]	; fField732
        15174c:	e3300001 	teq	r0, #1	; 0x1
        151750:	1a00000a 	bne	151780 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1e0>
        151754:	e2840084 	add	r0, r4, #132	; 0x84
        151758:	e5901000 	ldr	r1, [r0]
        15175c:	e1a0e00f 	mov	lr, pc
        151760:	e281f03c 	add	pc, r1, #60	; 0x3c
        151764:	e3300000 	teq	r0, #0	; 0x0
        151768:	1a000004 	bne	151780 <TPAPInterface::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1e0>
        15176c:	e5d40310 	ldrb	r0, [r4, #784]	; fField784
        151770:	e3300000 	teq	r0, #0	; 0x0
        151774:	11360007 	teqne	r6, r7
        151778:	11a00005 	movne	r0, r5
        15177c:	1b697817 	blne	1baf7e0 <TPseudoSyncState::$Unblock(void)>
        151780:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::FlushData(unsigned long)
 * Address: 00151784
 */
TPAPInterface::FlushData(unsigned long) {
    /*
        151784:	e1a0c00d 	mov	ip, sp
        151788:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15178c:	e24cb004 	sub	fp, ip, #4	; 0x4
        151790:	e1a04000 	mov	r4, r0
        151794:	e28000ac 	add	r0, r0, #172	; 0xac
        151798:	e1a06000 	mov	r6, r0
        15179c:	eb6973e3 	bl	1bae730 <TTimerElement::$Prime(unsigned long)>
        1517a0:	eb6a088b 	bl	1bd39d4 <$GetGlobals>
        1517a4:	e3a01000 	mov	r1, #0	; 0x0
        1517a8:	eb696fc0 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
        1517ac:	e3a05000 	mov	r5, #0	; 0x0
        1517b0:	e3300000 	teq	r0, #0	; 0x0
        1517b4:	1a000005 	bne	1517d0 <TPAPInterface::FlushData(unsigned long)+0x4c>
        1517b8:	e3a00001 	mov	r0, #1	; 0x1
        1517bc:	e5c40310 	strb	r0, [r4, #784]	; fField784
        1517c0:	e2840fc2 	add	r0, r4, #776	; 0x308
        1517c4:	e3a01000 	mov	r1, #0	; 0x0
        1517c8:	eb696b8d 	bl	1bac604 <TPseudoSyncState::$Block(unsigned long)>
        1517cc:	e5c45310 	strb	r5, [r4, #784]	; fField784
        1517d0:	e1a00006 	mov	r0, r6
        1517d4:	eb696b8f 	bl	1bac618 <TTimerElement::$Cancel(void)>
        1517d8:	e59402e0 	ldr	r0, [r4, #736]	; fField736
        1517dc:	e280cdc6 	add	ip, r0, #12672	; 0x3180
        1517e0:	e37c002c 	cmn	ip, #44	; 0x2c
        1517e4:	05a452e0 	streq	r5, [r4, #736]!	; fField736
        1517e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)
 * Address: 001517ec
 */
TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long) {
    /*
        1517ec:	e1a0c00d 	mov	ip, sp
        1517f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1517f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1517f8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1517fc:	e1a04000 	mov	r4, r0
        151800:	e1a0a001 	mov	sl, r1
        151804:	e20300ff 	and	r0, r3, #255	; 0xff
        151808:	e3a07000 	mov	r7, #0	; 0x0
        15180c:	e52d0004 	str	r0, [sp, -#4]!
        151810:	e59402e0 	ldr	r0, [r4, #736]	; fField736
        151814:	e3300000 	teq	r0, #0	; 0x0
        151818:	1a00001b 	bne	15188c <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0xa0>
        15181c:	e3a00001 	mov	r0, #1	; 0x1
        151820:	e58402dc 	str	r0, [r4, #732]	; fField732
        151824:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        151828:	e3a06000 	mov	r6, #0	; 0x0
        15182c:	e5920000 	ldr	r0, [r2]
        151830:	e3300000 	teq	r0, #0	; 0x0
        151834:	01a00006 	moveq	r0, r6
        151838:	0a000013 	beq	15188c <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0xa0>
        15183c:	e2840084 	add	r0, r4, #132	; 0x84
        151840:	e1a05000 	mov	r5, r0
        151844:	e5901000 	ldr	r1, [r0]
        151848:	e1a0e00f 	mov	lr, pc
        15184c:	e281f02c 	add	pc, r1, #44	; 0x2c
        151850:	e1a08000 	mov	r8, r0
        151854:	e1a00005 	mov	r0, r5
        151858:	e5951000 	ldr	r1, [r5]
        15185c:	e1a0e00f 	mov	lr, pc
        151860:	e281f03c 	add	pc, r1, #60	; 0x3c
        151864:	e1380000 	teq	r8, r0
        151868:	1a000008 	bne	151890 <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0xa4>
        15186c:	e1a00004 	mov	r0, r4
        151870:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        151874:	eb64a113 	bl	1a79cc8 <TPAPInterface::$FlushData(unsigned long)>
        151878:	e1b07000 	movs	r7, r0
        15187c:	0a000003 	beq	151890 <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0xa4>
        151880:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        151884:	e1a00007 	mov	r0, r7
        151888:	e5826000 	str	r6, [r2]
        15188c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        151890:	e24dd004 	sub	sp, sp, #4	; 0x4
        151894:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        151898:	e3a00001 	mov	r0, #1	; 0x1
        15189c:	e5928000 	ldr	r8, [r2]
        1518a0:	e3a09000 	mov	r9, #0	; 0x0
        1518a4:	e58d0000 	str	r0, [sp]
        1518a8:	e1a00005 	mov	r0, r5
        1518ac:	e5951000 	ldr	r1, [r5]
        1518b0:	e1a0e00f 	mov	lr, pc
        1518b4:	e281f02c 	add	pc, r1, #44	; 0x2c
        1518b8:	e1a06000 	mov	r6, r0
        1518bc:	e1a00005 	mov	r0, r5
        1518c0:	e5951000 	ldr	r1, [r5]
        1518c4:	e1a0e00f 	mov	lr, pc
        1518c8:	e281f03c 	add	pc, r1, #60	; 0x3c
        1518cc:	e0460000 	sub	r0, r6, r0
        1518d0:	e1500008 	cmp	r0, r8
        1518d4:	21a06008 	movcs	r6, r8
        1518d8:	31a06000 	movcc	r6, r0
        1518dc:	e3560000 	cmp	r6, #0	; 0x0
        1518e0:	9a000023 	bls	151974 <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0x188>
        1518e4:	e1a02006 	mov	r2, r6
        1518e8:	e1a0100a 	mov	r1, sl
        1518ec:	e1a00005 	mov	r0, r5
        1518f0:	e5953000 	ldr	r3, [r5]
        1518f4:	e1a0e00f 	mov	lr, pc
        1518f8:	e283f020 	add	pc, r3, #32	; 0x20
        1518fc:	e1300006 	teq	r0, r6
        151900:	13a070a8 	movne	r7, #168	; 0xa8
        151904:	12477b07 	subne	r7, r7, #7168	; 0x1c00
        151908:	1a00001e 	bne	151988 <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0x19c>
        15190c:	e0899006 	add	r9, r9, r6
        151910:	e08aa006 	add	sl, sl, r6
        151914:	e0488006 	sub	r8, r8, r6
        151918:	e1a00005 	mov	r0, r5
        15191c:	e5951000 	ldr	r1, [r5]
        151920:	e1a0e00f 	mov	lr, pc
        151924:	e281f02c 	add	pc, r1, #44	; 0x2c
        151928:	e1a06000 	mov	r6, r0
        15192c:	e1a00005 	mov	r0, r5
        151930:	e5951000 	ldr	r1, [r5]
        151934:	e1a0e00f 	mov	lr, pc
        151938:	e281f03c 	add	pc, r1, #60	; 0x3c
        15193c:	e1360000 	teq	r6, r0
        151940:	0a000005 	beq	15195c <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0x170>
        151944:	e1a00004 	mov	r0, r4
        151948:	eb64ad43 	bl	1a7ce5c <TPAPInterface::$MustFlush(void)>
        15194c:	e3300000 	teq	r0, #0	; 0x0
        151950:	059d0004 	ldreq	r0, [sp, #4]
        151954:	03300000 	teqeq	r0, #0	; 0x0
        151958:	0a000007 	beq	15197c <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0x190>
        15195c:	e1a00004 	mov	r0, r4
        151960:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        151964:	eb64a0d7 	bl	1a79cc8 <TPAPInterface::$FlushData(unsigned long)>
        151968:	e1b07000 	movs	r7, r0
        15196c:	1a000005 	bne	151988 <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0x19c>
        151970:	ea000001 	b	15197c <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0x190>
        151974:	e3a00000 	mov	r0, #0	; 0x0
        151978:	e58d0000 	str	r0, [sp]
        15197c:	e59d0000 	ldr	r0, [sp]
        151980:	e3300000 	teq	r0, #0	; 0x0
        151984:	1affffc7 	bne	1518a8 <TPAPInterface::PutData(char *, unsigned long *, unsigned char, unsigned long)+0xbc>
        151988:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        15198c:	e1a00007 	mov	r0, r7
        151990:	e5829000 	str	r9, [r2]
        151994:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::GetData(char *, unsigned long *)
 * Address: 00151998
 */
TPAPInterface::GetData(char *, unsigned long *) {
    /*
        151998:	e1a0c00d 	mov	ip, sp
        15199c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1519a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1519a4:	e1a04000 	mov	r4, r0
        1519a8:	e1a06001 	mov	r6, r1
        1519ac:	e1a05002 	mov	r5, r2
        1519b0:	e59002e0 	ldr	r0, [r0, #736]	; fField736
        1519b4:	e3300000 	teq	r0, #0	; 0x0
        1519b8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1519bc:	e5d40270 	ldrb	r0, [r4, #624]	; fField624
        1519c0:	e3300000 	teq	r0, #0	; 0x0
        1519c4:	03a00056 	moveq	r0, #86	; 0x56
        1519c8:	02400c32 	subeq	r0, r0, #12800	; 0x3200
        1519cc:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1519d0:	e2840fa6 	add	r0, r4, #664	; 0x298
        1519d4:	eb6a87fe 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        1519d8:	e1a07000 	mov	r7, r0
        1519dc:	eb64b980 	bl	1a7ffe4 <TTransactionResponseBuffer::$Size(void)>
        1519e0:	e5951000 	ldr	r1, [r5]
        1519e4:	e1500001 	cmp	r0, r1
        1519e8:	83a00055 	movhi	r0, #85	; 0x55
        1519ec:	82400c32 	subhi	r0, r0, #12800	; 0x3200
        1519f0:	891ba8f0 	ldmhidb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1519f4:	e1a00007 	mov	r0, r7
        1519f8:	eb64b979 	bl	1a7ffe4 <TTransactionResponseBuffer::$Size(void)>
        1519fc:	e5850000 	str	r0, [r5]
        151a00:	e1a00007 	mov	r0, r7
        151a04:	eb64b976 	bl	1a7ffe4 <TTransactionResponseBuffer::$Size(void)>
        151a08:	e1a05000 	mov	r5, r0
        151a0c:	e1a00007 	mov	r0, r7
        151a10:	e3a01000 	mov	r1, #0	; 0x0
        151a14:	eb6a87ef 	bl	1bf39d8 <TTransactionResponseBuffer::$GetDataPtr(unsigned char)>
        151a18:	e1a01006 	mov	r1, r6
        151a1c:	e1a02005 	mov	r2, r5
        151a20:	eb6a354b 	bl	1bdef54 <$BlockMove>
        151a24:	e3a00000 	mov	r0, #0	; 0x0
        151a28:	e5c40270 	strb	r0, [r4, #624]	; fField624
        151a2c:	e1a00004 	mov	r0, r4
        151a30:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        151a34:	ea64b11e 	b	1a7deb4 <TPAPInterface::$PostRead(void)>
    */
}

/**
 * Symbol: TPAPInterface::GetStatus(TString255 *)
 * Address: 00151a38
 */
TPAPInterface::GetStatus(TString255 *) {
    /*
        151a38:	e1a0c00d 	mov	ip, sp
        151a3c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        151a40:	e24cb004 	sub	fp, ip, #4	; 0x4
        151a44:	e1a04000 	mov	r4, r0
        151a48:	e1a05001 	mov	r5, r1
        151a4c:	e3a03000 	mov	r3, #0	; 0x0
        151a50:	e59f2078 	ldr	r2, [pc, #78]	; 151ad0 <TPAPInterface::GetStatus(TString255 *)+0x98>
        151a54:	e3a01001 	mov	r1, #1	; 0x1
        151a58:	e3a00001 	mov	r0, #1	; 0x1
        151a5c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        151a60:	e3a03001 	mov	r3, #1	; 0x1
        151a64:	e92d0008 	stmdb	sp!, {r3}
        151a68:	e2840e23 	add	r0, r4, #560	; 0x230
        151a6c:	e1a06000 	mov	r6, r0
        151a70:	eb6a87d4 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        151a74:	e1a03000 	mov	r3, r0
        151a78:	e92d0008 	stmdb	sp!, {r3}
        151a7c:	e2840f83 	add	r0, r4, #524	; 0x20c
        151a80:	eb6a87d0 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        151a84:	e1a03000 	mov	r3, r0
        151a88:	e284201c 	add	r2, r4, #28	; 0x1c
        151a8c:	e2840038 	add	r0, r4, #56	; 0x38
        151a90:	e3a01000 	mov	r1, #0	; 0x0
        151a94:	eb6a87cc 	bl	1bf39cc <TATPInterface::$SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)>
        151a98:	e28dd018 	add	sp, sp, #24	; 0x18
        151a9c:	e1b04000 	movs	r4, r0
        151aa0:	1a000008 	bne	151ac8 <TPAPInterface::GetStatus(TString255 *)+0x90>
        151aa4:	e1a00006 	mov	r0, r6
        151aa8:	eb6a87c9 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        151aac:	e3a01000 	mov	r1, #0	; 0x0
        151ab0:	eb6a87c8 	bl	1bf39d8 <TTransactionResponseBuffer::$GetDataPtr(unsigned char)>
        151ab4:	e5f01008 	ldrb	r1, [r0, #8]!
        151ab8:	e3510000 	cmp	r1, #0	; 0x0
        151abc:	c2812001 	addgt	r2, r1, #1	; 0x1
        151ac0:	c1a01005 	movgt	r1, r5
        151ac4:	cb6a3522 	blgt	1bdef54 <$BlockMove>
        151ac8:	e1a00004 	mov	r0, r4
        151acc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        151ad0:	001c1f38 	andeqs	r1, ip, r8, lsr pc
    */
}

/**
 * Symbol: TPAPInterface::MustFlush(void)
 * Address: 00151ad4
 */
TPAPInterface::MustFlush(void) {
    /*
        151ad4:	e1a0c00d 	mov	ip, sp
        151ad8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        151adc:	e24cb004 	sub	fp, ip, #4	; 0x4
        151ae0:	e1a04000 	mov	r4, r0
        151ae4:	e24dd030 	sub	sp, sp, #48	; 0x30
        151ae8:	e1a0000d 	mov	r0, sp
        151aec:	e3a0282f 	mov	r2, #3080192	; 0x2f0000
        151af0:	e282240d 	add	r2, r2, #218103808	; 0xd000000
        151af4:	e3a01001 	mov	r1, #1	; 0x1
        151af8:	eb69eef2 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
        151afc:	e28d0028 	add	r0, sp, #40	; 0x28
        151b00:	e89d5000 	ldmia	sp, {ip, lr}
        151b04:	e8805000 	stmia	r0, {ip, lr}
        151b08:	e28d0008 	add	r0, sp, #8	; 0x8
        151b0c:	eb6a07b1 	bl	1bd39d8 <$GetGlobalTime>
        151b10:	e28d0020 	add	r0, sp, #32	; 0x20
        151b14:	e28d1008 	add	r1, sp, #8	; 0x8
        151b18:	e8915000 	ldmia	r1, {ip, lr}
        151b1c:	e8805000 	stmia	r0, {ip, lr}
        151b20:	e2840fb9 	add	r0, r4, #740	; 0x2e4
        151b24:	e1a04000 	mov	r4, r0
        151b28:	e24dd008 	sub	sp, sp, #8	; 0x8
        151b2c:	e28d1028 	add	r1, sp, #40	; 0x28
        151b30:	e8915000 	ldmia	r1, {ip, lr}
        151b34:	e88d5000 	stmia	sp, {ip, lr}
        151b38:	e1a0100d 	mov	r1, sp
        151b3c:	eb6a3d56 	bl	1be109c <$CompSub>
        151b40:	e28d0018 	add	r0, sp, #24	; 0x18
        151b44:	e8bd5000 	ldmia	sp!, {ip, lr}
        151b48:	e8805000 	stmia	r0, {ip, lr}
        151b4c:	e28d0018 	add	r0, sp, #24	; 0x18
        151b50:	e28d1010 	add	r1, sp, #16	; 0x10
        151b54:	e8915000 	ldmia	r1, {ip, lr}
        151b58:	e8805000 	stmia	r0, {ip, lr}
        151b5c:	e28d1028 	add	r1, sp, #40	; 0x28
        151b60:	e28d0018 	add	r0, sp, #24	; 0x18
        151b64:	eb6a3d47 	bl	1be1088 <$CompCompare>
        151b68:	e3500000 	cmp	r0, #0	; 0x0
        151b6c:	d3a00000 	movle	r0, #0	; 0x0
        151b70:	c28d0020 	addgt	r0, sp, #32	; 0x20
        151b74:	c8905000 	ldmgtia	r0, {ip, lr}
        151b78:	c8845000 	stmgtia	r4, {ip, lr}
        151b7c:	c3a00001 	movgt	r0, #1	; 0x1
        151b80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::CancelAsyncEvents(void)
 * Address: 00151b84
 */
TPAPInterface::CancelAsyncEvents(void) {
    /*
        151b84:	e1a0c00d 	mov	ip, sp
        151b88:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        151b8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        151b90:	e1a04000 	mov	r4, r0
        151b94:	e28010ec 	add	r1, r0, #236	; 0xec
        151b98:	e2800038 	add	r0, r0, #56	; 0x38
        151b9c:	e1a05000 	mov	r5, r0
        151ba0:	eb6497f7 	bl	1a77b84 <TATPInterface::$CancelAsync(TAsyncEvent *)>
        151ba4:	e2841faf 	add	r1, r4, #700	; 0x2bc
        151ba8:	e1a00005 	mov	r0, r5
        151bac:	eb6497f4 	bl	1a77b84 <TATPInterface::$CancelAsync(TAsyncEvent *)>
        151bb0:	e2841f95 	add	r1, r4, #596	; 0x254
        151bb4:	e1a00005 	mov	r0, r5
        151bb8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        151bbc:	ea6497f0 	b	1a77b84 <TATPInterface::$CancelAsync(TAsyncEvent *)>
    */
}

/**
 * Symbol: TPAPInterface::SendTicklePacket(void)
 * Address: 00151bc0
 */
TPAPInterface::SendTicklePacket(void) {
    /*
        151bc0:	e1a0c00d 	mov	ip, sp
        151bc4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        151bc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        151bcc:	e1a04000 	mov	r4, r0
        151bd0:	e3a03000 	mov	r3, #0	; 0x0
        151bd4:	e3a028ca 	mov	r2, #13238272	; 0xca0000
        151bd8:	e2822302 	add	r2, r2, #134217728	; 0x8000000
        151bdc:	e3e01000 	mvn	r1, #0	; 0x0
        151be0:	e3a00001 	mov	r0, #1	; 0x1
        151be4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        151be8:	e3a02000 	mov	r2, #0	; 0x0
        151bec:	e92d000c 	stmdb	sp!, {r2, r3}
        151bf0:	e28400c8 	add	r0, r4, #200	; 0xc8
        151bf4:	eb6a8773 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        151bf8:	e1a03000 	mov	r3, r0
        151bfc:	e92d0008 	stmdb	sp!, {r3}
        151c00:	e2843028 	add	r3, r4, #40	; 0x28
        151c04:	e28410ec 	add	r1, r4, #236	; 0xec
        151c08:	e2840038 	add	r0, r4, #56	; 0x38
        151c0c:	e3a02000 	mov	r2, #0	; 0x0
        151c10:	eb64b8db 	bl	1a7ff84 <TATPInterface::$SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)>
        151c14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::PrepareRead(void)
 * Address: 00151c18
 */
TPAPInterface::PrepareRead(void) {
    /*
        151c18:	e1a0c00d 	mov	ip, sp
        151c1c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        151c20:	e24cb004 	sub	fp, ip, #4	; 0x4
        151c24:	e1a04000 	mov	r4, r0
        151c28:	e3a00000 	mov	r0, #0	; 0x0
        151c2c:	e5c40270 	strb	r0, [r4, #624]	; fField624
        151c30:	e3a01001 	mov	r1, #1	; 0x1
        151c34:	e5c412d9 	strb	r1, [r4, #729]	; fField729
        151c38:	e5c402d8 	strb	r0, [r4, #728]	; fField728
        151c3c:	e2840fa6 	add	r0, r4, #664	; 0x298
        151c40:	e3a03000 	mov	r3, #0	; 0x0
        151c44:	e3a02001 	mov	r2, #1	; 0x1
        151c48:	e3a01f91 	mov	r1, #580	; 0x244
        151c4c:	eb6a8759 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        151c50:	e3300000 	teq	r0, #0	; 0x0
        151c54:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        151c58:	e2840f9d 	add	r0, r4, #628	; 0x274
        151c5c:	e1a05000 	mov	r5, r0
        151c60:	e3a03001 	mov	r3, #1	; 0x1
        151c64:	e3a02001 	mov	r2, #1	; 0x1
        151c68:	e3a01004 	mov	r1, #4	; 0x4
        151c6c:	eb6a8751 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        151c70:	e3300000 	teq	r0, #0	; 0x0
        151c74:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        151c78:	e1a00005 	mov	r0, r5
        151c7c:	eb6a8754 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        151c80:	e5d41016 	ldrb	r1, [r4, #22]	; fField22
        151c84:	e5c01000 	strb	r1, [r0]
        151c88:	e3a01003 	mov	r1, #3	; 0x3
        151c8c:	e5c01001 	strb	r1, [r0, #1]	; fField1
        151c90:	eb6a074f 	bl	1bd39d4 <$GetGlobals>
        151c94:	eb6a59e8 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        151c98:	e5901000 	ldr	r1, [r0]
        151c9c:	e2840faf 	add	r0, r4, #700	; 0x2bc
        151ca0:	e1a02004 	mov	r2, r4
        151ca4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        151ca8:	ea64a83c 	b	1a7bda0 <TAsyncEvent::$Init(unsigned long, TAEventHandler *)>
    */
}

/**
 * Symbol: TPAPInterface::Init(TAddress &, unsigned char)
 * Address: 00151cac
 */
TPAPInterface::Init(TAddress &, unsigned char) {
    /*
        151cac:	e1a0c00d 	mov	ip, sp
        151cb0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        151cb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        151cb8:	e1a04000 	mov	r4, r0
        151cbc:	e1a05001 	mov	r5, r1
        151cc0:	e20270ff 	and	r7, r2, #255	; 0xff
        151cc4:	e59f2088 	ldr	r2, [pc, #88]	; 151d54 <TPAPInterface::Init(TAddress &, unsigned char)+0xa8>
        151cc8:	e59f1088 	ldr	r1, [pc, #88]	; 151d58 <TPAPInterface::Init(TAddress &, unsigned char)+0xac>
        151ccc:	eb6a5df7 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        151cd0:	e1b06000 	movs	r6, r0
        151cd4:	1a00001c 	bne	151d4c <TPAPInterface::Init(TAddress &, unsigned char)+0xa0>
        151cd8:	e2840fc2 	add	r0, r4, #776	; 0x308
        151cdc:	eb696e7f 	bl	1bad6e0 <TPseudoSyncState::$Init(void)>
        151ce0:	e1b06000 	movs	r6, r0
        151ce4:	1a000018 	bne	151d4c <TPAPInterface::Init(TAddress &, unsigned char)+0xa0>
        151ce8:	e2840028 	add	r0, r4, #40	; 0x28
        151cec:	e1a01005 	mov	r1, r5
        151cf0:	eb6a872e 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        151cf4:	e284001c 	add	r0, r4, #28	; 0x1c
        151cf8:	e1a01005 	mov	r1, r5
        151cfc:	eb6a872b 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        151d00:	e3570001 	cmp	r7, #1	; 0x1
        151d04:	ba000001 	blt	151d10 <TPAPInterface::Init(TAddress &, unsigned char)+0x64>
        151d08:	e3570008 	cmp	r7, #8	; 0x8
        151d0c:	da000001 	ble	151d18 <TPAPInterface::Init(TAddress &, unsigned char)+0x6c>
        151d10:	e3a0605d 	mov	r6, #93	; 0x5d
        151d14:	e2466c32 	sub	r6, r6, #12800	; 0x3200
        151d18:	e5c47034 	strb	r7, [r4, #52]	; fField52
        151d1c:	e3a00000 	mov	r0, #0	; 0x0
        151d20:	e58402dc 	str	r0, [r4, #732]	; fField732
        151d24:	e2840fb9 	add	r0, r4, #740	; 0x2e4
        151d28:	eb6a072a 	bl	1bd39d8 <$GetGlobalTime>
        151d2c:	e28400ac 	add	r0, r4, #172	; 0xac
        151d30:	e1a01004 	mov	r1, r4
        151d34:	e3a02005 	mov	r2, #5	; 0x5
        151d38:	eb64c529 	bl	1a831e4 <TPAPTimer::$Init(TPAPInterface *, unsigned long)>
        151d3c:	e2840fbb 	add	r0, r4, #748	; 0x2ec
        151d40:	e1a01004 	mov	r1, r4
        151d44:	e3a02006 	mov	r2, #6	; 0x6
        151d48:	eb64c525 	bl	1a831e4 <TPAPTimer::$Init(TPAPInterface *, unsigned long)>
        151d4c:	e1a00006 	mov	r0, r6
        151d50:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        151d54:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        151d58:	70617020 	rsbvc	r7, r1, r0, lsr #32
    */
}

/**
 * Symbol: TPAPInterface::PostRead(void)
 * Address: 00151d5c
 */
TPAPInterface::PostRead(void) {
    /*
        151d5c:	e1a0c00d 	mov	ip, sp
        151d60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        151d64:	e24cb004 	sub	fp, ip, #4	; 0x4
        151d68:	e1a04000 	mov	r4, r0
        151d6c:	e2800f9d 	add	r0, r0, #628	; 0x274
        151d70:	e1a05000 	mov	r5, r0
        151d74:	eb6a8716 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        151d78:	e59412d8 	ldr	r1, [r4, #728]	; fField728
        151d7c:	e1a01821 	mov	r1, r1, lsr #16
        151d80:	e5c01003 	strb	r1, [r0, #3]	; fField3
        151d84:	e1a01441 	mov	r1, r1, asr #8
        151d88:	e5c01002 	strb	r1, [r0, #2]	; fField2
        151d8c:	e3a03000 	mov	r3, #0	; 0x0
        151d90:	e3a029ca 	mov	r2, #3309568	; 0x328000
        151d94:	e2822402 	add	r2, r2, #33554432	; 0x2000000
        151d98:	e3e01000 	mvn	r1, #0	; 0x0
        151d9c:	e3a00001 	mov	r0, #1	; 0x1
        151da0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        151da4:	e3a03001 	mov	r3, #1	; 0x1
        151da8:	e92d0008 	stmdb	sp!, {r3}
        151dac:	e2840fa6 	add	r0, r4, #664	; 0x298
        151db0:	eb6a8704 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        151db4:	e1a03000 	mov	r3, r0
        151db8:	e92d0008 	stmdb	sp!, {r3}
        151dbc:	e1a00005 	mov	r0, r5
        151dc0:	eb6a8700 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        151dc4:	e1a03000 	mov	r3, r0
        151dc8:	e92d0008 	stmdb	sp!, {r3}
        151dcc:	e2843028 	add	r3, r4, #40	; 0x28
        151dd0:	e2841faf 	add	r1, r4, #700	; 0x2bc
        151dd4:	e2840038 	add	r0, r4, #56	; 0x38
        151dd8:	e3a02001 	mov	r2, #1	; 0x1
        151ddc:	eb64b868 	bl	1a7ff84 <TATPInterface::$SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)>
        151de0:	e28dd01c 	add	sp, sp, #28	; 0x1c
        151de4:	e3300000 	teq	r0, #0	; 0x0
        151de8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        151dec:	e59412d8 	ldr	r1, [r4, #728]	; fField728
        151df0:	e1a01821 	mov	r1, r1, lsr #16
        151df4:	e2811001 	add	r1, r1, #1	; 0x1
        151df8:	e5c412d9 	strb	r1, [r4, #729]	; fField729
        151dfc:	e1a01441 	mov	r1, r1, asr #8
        151e00:	e5c412d8 	strb	r1, [r4, #728]	; fField728
        151e04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::OKSequenceNumber(unsigned short)
 * Address: 00151e08
 */
TPAPInterface::OKSequenceNumber(unsigned short) {
    /*
        151e08:	e1a01801 	mov	r1, r1, lsl #16
        151e0c:	e1b01821 	movs	r1, r1, lsr #16
        151e10:	e3a02001 	mov	r2, #1	; 0x1
        151e14:	1a000001 	bne	151e20 <TPAPInterface::OKSequenceNumber(unsigned short)+0x18>
        151e18:	e1a00002 	mov	r0, r2
        151e1c:	e1a0f00e 	mov	pc, lr
        151e20:	e5903018 	ldr	r3, [r0, #24]	; fField24
        151e24:	e1510823 	cmp	r1, r3, lsr #16
        151e28:	a5c01019 	strgeb	r1, [r0, #25]	; fField25
        151e2c:	a1a01421 	movge	r1, r1, lsr #8
        151e30:	a5c01018 	strgeb	r1, [r0, #24]	; fField24
        151e34:	aafffff7 	bge	151e18 <TPAPInterface::OKSequenceNumber(unsigned short)+0x10>
        151e38:	e3a00000 	mov	r0, #0	; 0x0
        151e3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAPInterface::GetConnectionId(unsigned char *)
 * Address: 00151e40
 */
TPAPInterface::GetConnectionId(unsigned char *) {
    /*
        151e40:	e1a0c00d 	mov	ip, sp
        151e44:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        151e48:	e24cb004 	sub	fp, ip, #4	; 0x4
        151e4c:	e1a04001 	mov	r4, r1
        151e50:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        151e54:	e28d0018 	add	r0, sp, #24	; 0x18
        151e58:	eb6a48f6 	bl	1be4238 <TAEvent::$__ct(void)>
        151e5c:	e59f606c 	ldr	r6, [pc, #6c]	; 151ed0 <TPAPInterface::GetConnectionId(unsigned char *)+0x90>
        151e60:	e3a05000 	mov	r5, #0	; 0x0
        151e64:	e58d5024 	str	r5, [sp, #36]
        151e68:	e58d6018 	str	r6, [sp, #24]	; fField24
        151e6c:	e58d5020 	str	r5, [sp, #32]
        151e70:	e59f005c 	ldr	r0, [pc, #5c]	; 151ed4 <TPAPInterface::GetConnectionId(unsigned char *)+0x94>
        151e74:	e58d001c 	str	r0, [sp, #28]
        151e78:	e3a00c06 	mov	r0, #1536	; 0x600
        151e7c:	e58d0028 	str	r0, [sp, #40]
        151e80:	e1a0000d 	mov	r0, sp
        151e84:	eb6a48eb 	bl	1be4238 <TAEvent::$__ct(void)>
        151e88:	e58d500c 	str	r5, [sp, #12]	; fField12
        151e8c:	e58d6000 	str	r6, [sp]
        151e90:	e3a03001 	mov	r3, #1	; 0x1
        151e94:	e3a02000 	mov	r2, #0	; 0x0
        151e98:	e58d5008 	str	r5, [sp, #8]
        151e9c:	e92d000c 	stmdb	sp!, {r2, r3}
        151ea0:	e28d2008 	add	r2, sp, #8	; 0x8
        151ea4:	e28d0020 	add	r0, sp, #32	; 0x20
        151ea8:	e3a03018 	mov	r3, #24	; 0x18
        151eac:	e3a01014 	mov	r1, #20	; 0x14
        151eb0:	eb64bc83 	bl	1a810c4 <$ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5>
        151eb4:	e28dd008 	add	sp, sp, #8	; 0x8
        151eb8:	e3300000 	teq	r0, #0	; 0x0
        151ebc:	059d1008 	ldreq	r1, [sp, #8]
        151ec0:	03310000 	teqeq	r1, #0	; 0x0
        151ec4:	05dd1014 	ldreqb	r1, [sp, #20]	; fField20
        151ec8:	05c41000 	streqb	r1, [r4]
        151ecc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        151ed0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        151ed4:	70617020 	rsbvc	r7, r1, r0, lsr #32
    */
}

/**
 * Symbol: TPAPInterface::Open(unsigned short *, unsigned char, TString255 *)
 * Address: 00151f44
 */
TPAPInterface::Open(unsigned short *, unsigned char, TString255 *) {
    /*
        151f44:	e1a0c00d 	mov	ip, sp
        151f48:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        151f4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        151f50:	e1a06000 	mov	r6, r0
        151f54:	e1a05001 	mov	r5, r1
        151f58:	e1a04003 	mov	r4, r3
        151f5c:	e20270ff 	and	r7, r2, #255	; 0xff
        151f60:	e24dd078 	sub	sp, sp, #120	; 0x78
        151f64:	e1a0000d 	mov	r0, sp
        151f68:	eb6a868b 	bl	1bf399c <TNBPName::$__ct(void)>
        151f6c:	e24dd0e0 	sub	sp, sp, #224	; 0xe0
        151f70:	e1a0000d 	mov	r0, sp
        151f74:	eb6a8687 	bl	1bf3998 <TLookupNames::$__ct(void)>
        151f78:	e3a039a3 	mov	r3, #2670592	; 0x28c000
        151f7c:	e2833502 	add	r3, r3, #8388608	; 0x800000
        151f80:	e3a02003 	mov	r2, #3	; 0x3
        151f84:	e59f105c 	ldr	r1, [pc, #5c]	; 151fe8 <TPAPInterface::Open(unsigned short *, unsigned char, TString255 *)+0xa4>
        151f88:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        151f8c:	e1a01005 	mov	r1, r5
        151f90:	e28d000c 	add	r0, sp, #12	; 0xc
        151f94:	e3a03001 	mov	r3, #1	; 0x1
        151f98:	e3a02001 	mov	r2, #1	; 0x1
        151f9c:	eb6aabb1 	bl	1bfce68 <TLookupNames::$LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, unsigned long, unsigned long)>
        151fa0:	e28dd00c 	add	sp, sp, #12	; 0xc
        151fa4:	e1b05000 	movs	r5, r0
        151fa8:	1a000005 	bne	151fc4 <TPAPInterface::Open(unsigned short *, unsigned char, TString255 *)+0x80>
        151fac:	e28d10e0 	add	r1, sp, #224	; 0xe0
        151fb0:	e1a0000d 	mov	r0, sp
        151fb4:	e3a02001 	mov	r2, #1	; 0x1
        151fb8:	eb6a8679 	bl	1bf39a4 <TLookupNames::$GetName(TNBPName &, unsigned long)>
        151fbc:	e1b05000 	movs	r5, r0
        151fc0:	0a000009 	beq	151fec <TPAPInterface::Open(unsigned short *, unsigned char, TString255 *)+0xa8>
        151fc4:	e1a0000d 	mov	r0, sp
        151fc8:	e3a01000 	mov	r1, #0	; 0x0
        151fcc:	eb6a8675 	bl	1bf39a8 <TLookupNames::$__dt(void)>
        151fd0:	e28dd0e0 	add	sp, sp, #224	; 0xe0
        151fd4:	e3350000 	teq	r5, #0	; 0x0
        151fd8:	13a00f96 	movne	r0, #600	; 0x258
        151fdc:	12400b0d 	subne	r0, r0, #13312	; 0x3400
        151fe0:	1a00000a 	bne	152010 <TPAPInterface::Open(unsigned short *, unsigned char, TString255 *)+0xcc>
        151fe4:	ea000004 	b	151ffc <TPAPInterface::Open(unsigned short *, unsigned char, TString255 *)+0xb8>
        151fe8:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
        151fec:	e1a0000d 	mov	r0, sp
        151ff0:	e3a01000 	mov	r1, #0	; 0x0
        151ff4:	eb6a866b 	bl	1bf39a8 <TLookupNames::$__dt(void)>
        151ff8:	e28dd0e0 	add	sp, sp, #224	; 0xe0
        151ffc:	e1a0100d 	mov	r1, sp
        152000:	e1a03004 	mov	r3, r4
        152004:	e1a02007 	mov	r2, r7
        152008:	e1a00006 	mov	r0, r6
        15200c:	eb64af9f 	bl	1a7de90 <TPAPInterface::$Open(TAddress &, unsigned char, TString255 *)>
        152010:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::Open(TAddress &, unsigned char, TString255 *)
 * Address: 00152014
 */
TPAPInterface::Open(TAddress &, unsigned char, TString255 *) {
    /*
        152014:	e1a0c00d 	mov	ip, sp
        152018:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15201c:	e24cb004 	sub	fp, ip, #4	; 0x4
        152020:	e1a04000 	mov	r4, r0
        152024:	e1a06001 	mov	r6, r1
        152028:	e1a05003 	mov	r5, r3
        15202c:	e20290ff 	and	r9, r2, #255	; 0xff
        152030:	e24dd008 	sub	sp, sp, #8	; 0x8
        152034:	e3a0a000 	mov	sl, #0	; 0x0
        152038:	e5cda004 	strb	sl, [sp, #4]
        15203c:	e58da000 	str	sl, [sp]
        152040:	e1a0100d 	mov	r1, sp
        152044:	e59f0068 	ldr	r0, [pc, #68]	; 1520b4 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0xa0>
        152048:	eb6a865c 	bl	1bf39c0 <$OpenAppleTalkPart(unsigned long, TUPort *)>
        15204c:	e1b07000 	movs	r7, r0
        152050:	e2848038 	add	r8, r4, #56	; 0x38
        152054:	1a000011 	bne	1520a0 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x8c>
        152058:	e1a0100d 	mov	r1, sp
        15205c:	e59f0054 	ldr	r0, [pc, #54]	; 1520b8 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0xa4>
        152060:	eb6a8656 	bl	1bf39c0 <$OpenAppleTalkPart(unsigned long, TUPort *)>
        152064:	e1b07000 	movs	r7, r0
        152068:	1a00000c 	bne	1520a0 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x8c>
        15206c:	e1a0100d 	mov	r1, sp
        152070:	e59f0044 	ldr	r0, [pc, #44]	; 1520bc <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0xa8>	; fField44
        152074:	eb6a8651 	bl	1bf39c0 <$OpenAppleTalkPart(unsigned long, TUPort *)>
        152078:	e1b07000 	movs	r7, r0
        15207c:	1a000007 	bne	1520a0 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x8c>
        152080:	e3a00001 	mov	r0, #1	; 0x1
        152084:	e5c40014 	strb	r0, [r4, #20]	; fField20
        152088:	e1a02009 	mov	r2, r9
        15208c:	e1a01006 	mov	r1, r6
        152090:	e1a00004 	mov	r0, r4
        152094:	eb64a747 	bl	1a7bdb8 <TPAPInterface::$Init(TAddress &, unsigned char)>
        152098:	e1b07000 	movs	r7, r0
        15209c:	0a000007 	beq	1520c0 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0xac>
        1520a0:	e1a0000d 	mov	r0, sp
        1520a4:	e3a01000 	mov	r1, #0	; 0x0
        1520a8:	eb69f19d 	bl	1bce724 <TUObject::$__dt(void)>
        1520ac:	e28dd008 	add	sp, sp, #8	; 0x8
        1520b0:	ea000067 	b	152254 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x240>
        1520b4:	70617020 	rsbvc	r7, r1, r0, lsr #32
        1520b8:	61747020 	cmnvs	r4, r0, lsr #32
        1520bc:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
        1520c0:	e56da004 	strb	sl, [sp, -#4]!
        1520c4:	e3a03001 	mov	r3, #1	; 0x1
        1520c8:	e92d0008 	stmdb	sp!, {r3}
        1520cc:	e2840028 	add	r0, r4, #40	; 0x28
        1520d0:	e1a06000 	mov	r6, r0
        1520d4:	e3a02000 	mov	r2, #0	; 0x0
        1520d8:	e5b03004 	ldr	r3, [r0, #4]!
        1520dc:	e92d000c 	stmdb	sp!, {r2, r3}
        1520e0:	e1a00008 	mov	r0, r8
        1520e4:	e28d100c 	add	r1, sp, #12	; 0xc
        1520e8:	e3a03000 	mov	r3, #0	; 0x0
        1520ec:	eb6a8634 	bl	1bf39c4 <TATPInterface::$OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char)>
        1520f0:	e28dd00c 	add	sp, sp, #12	; 0xc
        1520f4:	e1b07000 	movs	r7, r0
        1520f8:	1a00000f 	bne	15213c <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x128>
        1520fc:	e5dd0000 	ldrb	r0, [sp]
        152100:	e5c40035 	strb	r0, [r4, #53]	; fField53
        152104:	e5dd1000 	ldrb	r1, [sp]
        152108:	e5c61001 	strb	r1, [r6, #1]	; fField1
        15210c:	e284001c 	add	r0, r4, #28	; 0x1c
        152110:	e5dd1000 	ldrb	r1, [sp]
        152114:	e5c01001 	strb	r1, [r0, #1]	; fField1
        152118:	e2841016 	add	r1, r4, #22	; 0x16
        15211c:	e1a00004 	mov	r0, r4
        152120:	eb649ef1 	bl	1a79cec <TPAPInterface::$GetConnectionId(unsigned char *)>
        152124:	e1b07000 	movs	r7, r0
        152128:	1a000003 	bne	15213c <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x128>
        15212c:	e1a00004 	mov	r0, r4
        152130:	eb64b7a7 	bl	1a7ffd4 <TPAPInterface::$SetupToSendData(void)>
        152134:	e1b07000 	movs	r7, r0
        152138:	0a000004 	beq	152150 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x13c>
        15213c:	e28d0004 	add	r0, sp, #4	; 0x4
        152140:	e3a01000 	mov	r1, #0	; 0x0
        152144:	eb69f176 	bl	1bce724 <TUObject::$__dt(void)>
        152148:	e28dd00c 	add	sp, sp, #12	; 0xc
        15214c:	ea000040 	b	152254 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x240>
        152150:	e3350000 	teq	r5, #0	; 0x0
        152154:	15c5a000 	strneb	sl, [r5]
        152158:	e24dd008 	sub	sp, sp, #8	; 0x8
        15215c:	e1a03005 	mov	r3, r5
        152160:	e92d0008 	stmdb	sp!, {r3}
        152164:	e28d3004 	add	r3, sp, #4	; 0x4
        152168:	e28d2008 	add	r2, sp, #8	; 0x8
        15216c:	e1a00004 	mov	r0, r4
        152170:	e3a01005 	mov	r1, #5	; 0x5
        152174:	eb64af47 	bl	1a7de98 <TPAPInterface::$OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)>
        152178:	e28dd004 	add	sp, sp, #4	; 0x4
        15217c:	e1b07000 	movs	r7, r0
        152180:	1a00002f 	bne	152244 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x230>
        152184:	e5d41034 	ldrb	r1, [r4, #52]	; fField52
        152188:	e5dd0004 	ldrb	r0, [sp, #4]
        15218c:	e1510000 	cmp	r1, r0
        152190:	c5dd0004 	ldrgtb	r0, [sp, #4]
        152194:	c5c40034 	strgtb	r0, [r4, #52]	; fField52
        152198:	e5dd0000 	ldrb	r0, [sp]
        15219c:	e5c6000b 	strb	r0, [r6, #11]
        1521a0:	e1a00004 	mov	r0, r4
        1521a4:	eb64af46 	bl	1a7dec4 <TPAPInterface::$PrepareTicklePacket(void)>
        1521a8:	e1b07000 	movs	r7, r0
        1521ac:	1a000024 	bne	152244 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x230>
        1521b0:	e1a00004 	mov	r0, r4
        1521b4:	eb64b774 	bl	1a7ff8c <TPAPInterface::$SendTicklePacket(void)>
        1521b8:	e1b07000 	movs	r7, r0
        1521bc:	1a000020 	bne	152244 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x230>
        1521c0:	e2840fbb 	add	r0, r4, #748	; 0x2ec
        1521c4:	e3a0185e 	mov	r1, #6160384	; 0x5e0000
        1521c8:	e281141a 	add	r1, r1, #436207616	; 0x1a000000
        1521cc:	eb697157 	bl	1bae730 <TTimerElement::$Prime(unsigned long)>
        1521d0:	e51f3124 	ldr	r3, [pc, #fffffedc]	; 1520b4 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0xa0>
        1521d4:	e92d0008 	stmdb	sp!, {r3}
        1521d8:	eb6a05fd 	bl	1bd39d4 <$GetGlobals>
        1521dc:	eb6a5896 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1521e0:	e5905000 	ldr	r5, [r0]
        1521e4:	e284003c 	add	r0, r4, #60	; 0x3c
        1521e8:	eb6a85f6 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        1521ec:	e1a02000 	mov	r2, r0
        1521f0:	e5d41035 	ldrb	r1, [r4, #53]	; fField53
        1521f4:	e1a00008 	mov	r0, r8
        1521f8:	e1a03005 	mov	r3, r5
        1521fc:	eb64b79c 	bl	1a80074 <TATPInterface::$WantRequest(unsigned char, unsigned long, unsigned long, unsigned long)>
        152200:	e28dd004 	add	sp, sp, #4	; 0x4
        152204:	e1b07000 	movs	r7, r0
        152208:	1a00000d 	bne	152244 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x230>
        15220c:	e1a00004 	mov	r0, r4
        152210:	eb64af28 	bl	1a7deb8 <TPAPInterface::$PrepareRead(void)>
        152214:	e1b07000 	movs	r7, r0
        152218:	1a000009 	bne	152244 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x230>
        15221c:	e1a00004 	mov	r0, r4
        152220:	eb64af23 	bl	1a7deb4 <TPAPInterface::$PostRead(void)>
        152224:	e1b07000 	movs	r7, r0
        152228:	1a000005 	bne	152244 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x230>
        15222c:	e2840f42 	add	r0, r4, #264	; 0x108
        152230:	e5c0a000 	strb	sl, [r0]
        152234:	e1a00004 	mov	r0, r4
        152238:	eb64af20 	bl	1a7dec0 <TPAPInterface::$PrepareStatusRequestPacket(void)>
        15223c:	e1b07000 	movs	r7, r0
        152240:	0a00000e 	beq	152280 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x26c>
        152244:	e28d000c 	add	r0, sp, #12	; 0xc
        152248:	e3a01000 	mov	r1, #0	; 0x0
        15224c:	eb69f134 	bl	1bce724 <TUObject::$__dt(void)>
        152250:	e28dd014 	add	sp, sp, #20	; 0x14
        152254:	e3370000 	teq	r7, #0	; 0x0
        152258:	0a00000d 	beq	152294 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x280>
        15225c:	e5d41035 	ldrb	r1, [r4, #53]	; fField53
        152260:	e3310000 	teq	r1, #0	; 0x0
        152264:	11a00008 	movne	r0, r8
        152268:	1b6a85d8 	blne	1bf39d0 <TATPInterface::$CloseResponder(unsigned char)>
        15226c:	e287cc31 	add	ip, r7, #12544	; 0x3100
        152270:	e37c003f 	cmn	ip, #63	; 0x3f
        152274:	03a07f96 	moveq	r7, #600	; 0x258
        152278:	02477b0d 	subeq	r7, r7, #13312	; 0x3400
        15227c:	ea000004 	b	152294 <TPAPInterface::Open(TAddress &, unsigned char, TString255 *)+0x280>
        152280:	e28dd00c 	add	sp, sp, #12	; 0xc
        152284:	e1a0000d 	mov	r0, sp
        152288:	e3a01000 	mov	r1, #0	; 0x0
        15228c:	eb69f124 	bl	1bce724 <TUObject::$__dt(void)>
        152290:	e28dd008 	add	sp, sp, #8	; 0x8
        152294:	e1a00007 	mov	r0, r7
        152298:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)
 * Address: 0015229c
 */
TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *) {
    /*
        15229c:	e1a0c00d 	mov	ip, sp
        1522a0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1522a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1522a8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1522ac:	e1a04000 	mov	r4, r0
        1522b0:	e201a0ff 	and	sl, r1, #255	; 0xff
        1522b4:	e24dd058 	sub	sp, sp, #88	; 0x58
        1522b8:	e28d002c 	add	r0, sp, #44	; 0x2c
        1522bc:	eb6a85bc 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        1522c0:	e28d0008 	add	r0, sp, #8	; 0x8
        1522c4:	eb6a85ba 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        1522c8:	e28d002c 	add	r0, sp, #44	; 0x2c
        1522cc:	e3a03001 	mov	r3, #1	; 0x1
        1522d0:	e3a02001 	mov	r2, #1	; 0x1
        1522d4:	e3a01008 	mov	r1, #8	; 0x8
        1522d8:	eb6a85b6 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        1522dc:	e1b05000 	movs	r5, r0
        1522e0:	1a00000d 	bne	15231c <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x80>
        1522e4:	e28d002c 	add	r0, sp, #44	; 0x2c
        1522e8:	eb6a85b6 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        1522ec:	e58d0004 	str	r0, [sp, #4]
        1522f0:	e28d0008 	add	r0, sp, #8	; 0x8
        1522f4:	e3a03000 	mov	r3, #0	; 0x0
        1522f8:	e3a02001 	mov	r2, #1	; 0x1
        1522fc:	e3a01f91 	mov	r1, #580	; 0x244
        152300:	eb6a85ac 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        152304:	e1b05000 	movs	r5, r0
        152308:	1a000003 	bne	15231c <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x80>
        15230c:	e28d0008 	add	r0, sp, #8	; 0x8
        152310:	eb6a85ac 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        152314:	e58d0000 	str	r0, [sp]
        152318:	ea000009 	b	152344 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0xa8>
        15231c:	e3350000 	teq	r5, #0	; 0x0
        152320:	0a000007 	beq	152344 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0xa8>
        152324:	e28d0008 	add	r0, sp, #8	; 0x8
        152328:	e3a01000 	mov	r1, #0	; 0x0
        15232c:	eb6a85a2 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        152330:	e28d002c 	add	r0, sp, #44	; 0x2c
        152334:	e3a01000 	mov	r1, #0	; 0x0
        152338:	eb6a859f 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        15233c:	e1a00005 	mov	r0, r5
        152340:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        152344:	e24dd004 	sub	sp, sp, #4	; 0x4
        152348:	e28d0030 	add	r0, sp, #48	; 0x30
        15234c:	eb6a85a0 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        152350:	e40d0004 	str	r0, [sp], -#4
        152354:	e28d0010 	add	r0, sp, #16	; 0x10
        152358:	eb6a859d 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        15235c:	e3a01000 	mov	r1, #0	; 0x0
        152360:	e58d0000 	str	r0, [sp]
        152364:	eb6a859b 	bl	1bf39d8 <TTransactionResponseBuffer::$GetDataPtr(unsigned char)>
        152368:	e1a06000 	mov	r6, r0
        15236c:	e24dd018 	sub	sp, sp, #24	; 0x18
        152370:	e3a09000 	mov	r9, #0	; 0x0
        152374:	e3a00000 	mov	r0, #0	; 0x0
        152378:	e3a07001 	mov	r7, #1	; 0x1
        15237c:	e3a08001 	mov	r8, #1	; 0x1
        152380:	e58d0010 	str	r0, [sp, #16]
        152384:	e58d9014 	str	r9, [sp, #20]	; fField20
        152388:	e1a0000d 	mov	r0, sp
        15238c:	eb6a0591 	bl	1bd39d8 <$GetGlobalTime>
        152390:	e28d0008 	add	r0, sp, #8	; 0x8
        152394:	e89d5000 	ldmia	sp, {ip, lr}
        152398:	e8805000 	stmia	r0, {ip, lr}
        15239c:	e2842028 	add	r2, r4, #40	; 0x28
        1523a0:	e2840038 	add	r0, r4, #56	; 0x38
        1523a4:	e58d0070 	str	r0, [sp, #112]
        1523a8:	e58d2074 	str	r2, [sp, #116]
        1523ac:	e3a009c2 	mov	r0, #3178496	; 0x308000
        1523b0:	e2800501 	add	r0, r0, #4194304	; 0x400000
        1523b4:	ea00008a 	b	1525e4 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x348>
        1523b8:	e1a03808 	mov	r3, r8, lsl #16
        1523bc:	e1a03823 	mov	r3, r3, lsr #16
        1523c0:	e92d0008 	stmdb	sp!, {r3}
        1523c4:	e5d43034 	ldrb	r3, [r4, #52]	; fField52
        1523c8:	e5d42035 	ldrb	r2, [r4, #53]	; fField53
        1523cc:	e5d41016 	ldrb	r1, [r4, #22]	; fField22
        1523d0:	e59d0020 	ldr	r0, [sp, #32]
        1523d4:	eb64b6ed 	bl	1a7ff90 <TPAPOpenConnPacket::$Set(unsigned char, unsigned char, unsigned char, unsigned short)>
        1523d8:	e28dd004 	add	sp, sp, #4	; 0x4
        1523dc:	e3a03000 	mov	r3, #0	; 0x0
        1523e0:	e3a029c2 	mov	r2, #3178496	; 0x308000
        1523e4:	e2822501 	add	r2, r2, #4194304	; 0x400000
        1523e8:	e3a01004 	mov	r1, #4	; 0x4
        1523ec:	e3a00001 	mov	r0, #1	; 0x1
        1523f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1523f4:	e3a03001 	mov	r3, #1	; 0x1
        1523f8:	e59d2030 	ldr	r2, [sp, #48]
        1523fc:	e92d000c 	stmdb	sp!, {r2, r3}
        152400:	e3a01001 	mov	r1, #1	; 0x1
        152404:	e28d2088 	add	r2, sp, #136	; 0x88
        152408:	e8920005 	ldmia	r2, {r0, r2}
        15240c:	e59d303c 	ldr	r3, [sp, #60]
        152410:	eb6a856d 	bl	1bf39cc <TATPInterface::$SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)>
        152414:	e28dd018 	add	sp, sp, #24	; 0x18
        152418:	e1b05000 	movs	r5, r0
        15241c:	1a000035 	bne	1524f8 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x25c>
        152420:	e3a00001 	mov	r0, #1	; 0x1
        152424:	e58d0014 	str	r0, [sp, #20]	; fField20
        152428:	e5d40016 	ldrb	r0, [r4, #22]	; fField22
        15242c:	e5d61000 	ldrb	r1, [r6]
        152430:	e1300001 	teq	r0, r1
        152434:	159f5114 	ldrne	r5, [pc, #114]	; 152550 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x2b4>
        152438:	1a00002e 	bne	1524f8 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x25c>
        15243c:	e5d60001 	ldrb	r0, [r6, #1]	; fField1
        152440:	e3300002 	teq	r0, #2	; 0x2
        152444:	13a05ee6 	movne	r5, #3680	; 0xe60
        152448:	12455901 	subne	r5, r5, #16384	; 0x4000
        15244c:	1a000029 	bne	1524f8 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x25c>
        152450:	e5960006 	ldr	r0, [r6, #6]
        152454:	e1b00820 	movs	r0, r0, lsr #16
        152458:	03a09001 	moveq	r9, #1	; 0x1
        15245c:	0a000025 	beq	1524f8 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x25c>
        152460:	e3a01801 	mov	r1, #65536	; 0x10000
        152464:	e2411001 	sub	r1, r1, #1	; 0x1
        152468:	e1300001 	teq	r0, r1
        15246c:	13a0505e 	movne	r5, #94	; 0x5e
        152470:	12455c32 	subne	r5, r5, #12800	; 0x3200
        152474:	1a00001f 	bne	1524f8 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x25c>
        152478:	e3a00001 	mov	r0, #1	; 0x1
        15247c:	e58d0010 	str	r0, [sp, #16]
        152480:	e3a009c2 	mov	r0, #3178496	; 0x308000
        152484:	e2800501 	add	r0, r0, #4194304	; 0x400000
        152488:	eb6a2a67 	bl	1bdce2c <$Sleep(unsigned long)>
        15248c:	e24dd018 	sub	sp, sp, #24	; 0x18
        152490:	e28d0008 	add	r0, sp, #8	; 0x8
        152494:	eb6a054f 	bl	1bd39d8 <$GetGlobalTime>
        152498:	e24dd008 	sub	sp, sp, #8	; 0x8
        15249c:	e28d0010 	add	r0, sp, #16	; 0x10
        1524a0:	e8905000 	ldmia	r0, {ip, lr}
        1524a4:	e88d5000 	stmia	sp, {ip, lr}
        1524a8:	e1a0100d 	mov	r1, sp
        1524ac:	e28d0028 	add	r0, sp, #40	; 0x28
        1524b0:	eb6a3af9 	bl	1be109c <$CompSub>
        1524b4:	e28d0008 	add	r0, sp, #8	; 0x8
        1524b8:	e8bd5000 	ldmia	sp!, {ip, lr}
        1524bc:	e8805000 	stmia	r0, {ip, lr}
        1524c0:	e28d0010 	add	r0, sp, #16	; 0x10
        1524c4:	e89d5000 	ldmia	sp, {ip, lr}
        1524c8:	e8805000 	stmia	r0, {ip, lr}
        1524cc:	e28d0010 	add	r0, sp, #16	; 0x10
        1524d0:	e3a019e1 	mov	r1, #3686400	; 0x384000
        1524d4:	eb69f8d6 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
        1524d8:	e3500001 	cmp	r0, #1	; 0x1
        1524dc:	93a00001 	movls	r0, #1	; 0x1
        1524e0:	e0880000 	add	r0, r8, r0
        1524e4:	e3a08801 	mov	r8, #65536	; 0x10000
        1524e8:	e2488001 	sub	r8, r8, #1	; 0x1
        1524ec:	e1500008 	cmp	r0, r8
        1524f0:	31a08000 	movcc	r8, r0
        1524f4:	e28dd018 	add	sp, sp, #24	; 0x18
        1524f8:	e2870001 	add	r0, r7, #1	; 0x1
        1524fc:	e20070ff 	and	r7, r0, #255	; 0xff
        152500:	e3350000 	teq	r5, #0	; 0x0
        152504:	0a00001b 	beq	152578 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x2dc>
        152508:	e137000a 	teq	r7, sl
        15250c:	1a000019 	bne	152578 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x2dc>
        152510:	e285cc31 	add	ip, r5, #12544	; 0x3100
        152514:	e37c003f 	cmn	ip, #63	; 0x3f
        152518:	1a00000e 	bne	152558 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x2bc>
        15251c:	e59d0010 	ldr	r0, [sp, #16]
        152520:	e3300000 	teq	r0, #0	; 0x0
        152524:	03a04f96 	moveq	r4, #600	; 0x258
        152528:	02444b0d 	subeq	r4, r4, #13312	; 0x3400
        15252c:	159f4020 	ldrne	r4, [pc, #20]	; 152554 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x2b8>	; fField20
        152530:	e28d0028 	add	r0, sp, #40	; 0x28
        152534:	e3a01000 	mov	r1, #0	; 0x0
        152538:	eb6a851f 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        15253c:	e28d004c 	add	r0, sp, #76	; 0x4c
        152540:	e3a01000 	mov	r1, #0	; 0x0
        152544:	eb6a851c 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        152548:	e1a00004 	mov	r0, r4
        15254c:	ea000008 	b	152574 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x2d8>
        152550:	ffffce63 	swinv	0x00ffce63
        152554:	ffffce5f 	swinv	0x00ffce5f
        152558:	e28d0028 	add	r0, sp, #40	; 0x28
        15255c:	e3a01000 	mov	r1, #0	; 0x0
        152560:	eb6a8515 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        152564:	e28d004c 	add	r0, sp, #76	; 0x4c
        152568:	e3a01000 	mov	r1, #0	; 0x0
        15256c:	eb6a8512 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        152570:	e1a00005 	mov	r0, r5
        152574:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        152578:	e3390000 	teq	r9, #0	; 0x0
        15257c:	1a000013 	bne	1525d0 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x334>
        152580:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        152584:	e3300000 	teq	r0, #0	; 0x0
        152588:	0a000010 	beq	1525d0 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x334>
        15258c:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        152590:	e3310000 	teq	r1, #0	; 0x0
        152594:	0a000012 	beq	1525e4 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x348>
        152598:	e51f504c 	ldr	r5, [pc, #ffffffb4]	; 152554 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x2b8>
        15259c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        1525a0:	eb64b68f 	bl	1a7ffe4 <TTransactionResponseBuffer::$Size(void)>
        1525a4:	e3500008 	cmp	r0, #8	; 0x8
        1525a8:	9a00000d 	bls	1525e4 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x348>
        1525ac:	e3a01000 	mov	r1, #0	; 0x0
        1525b0:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        1525b4:	eb6a8507 	bl	1bf39d8 <TTransactionResponseBuffer::$GetDataPtr(unsigned char)>
        1525b8:	e5f01008 	ldrb	r1, [r0, #8]!
        1525bc:	e3510000 	cmp	r1, #0	; 0x0
        1525c0:	c2812001 	addgt	r2, r1, #1	; 0x1
        1525c4:	c59b1014 	ldrgt	r1, [fp, #20]	; fField20
        1525c8:	cb6a3261 	blgt	1bdef54 <$BlockMove>
        1525cc:	ea000004 	b	1525e4 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x348>
        1525d0:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        1525d4:	e3310000 	teq	r1, #0	; 0x0
        1525d8:	13a00000 	movne	r0, #0	; 0x0
        1525dc:	159b1014 	ldrne	r1, [fp, #20]	; fField20
        1525e0:	15c10000 	strneb	r0, [r1]
        1525e4:	e157000a 	cmp	r7, sl
        1525e8:	ca000001 	bgt	1525f4 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x358>
        1525ec:	e3390000 	teq	r9, #0	; 0x0
        1525f0:	0affff70 	beq	1523b8 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x11c>
        1525f4:	e5d60005 	ldrb	r0, [r6, #5]
        1525f8:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        1525fc:	e5c20000 	strb	r0, [r2]
        152600:	e5d60004 	ldrb	r0, [r6, #4]
        152604:	e59b3010 	ldr	r3, [fp, #16]
        152608:	e5c30000 	strb	r0, [r3]
        15260c:	eaffffd1 	b	152558 <TPAPInterface::OpenConnection(unsigned char, unsigned char *, unsigned char *, TString255 *)+0x2bc>
    */
}

/**
 * Symbol: TPAPInterface::PrepareTicklePacket(void)
 * Address: 00152610
 */
TPAPInterface::PrepareTicklePacket(void) {
    /*
        152610:	e1a0c00d 	mov	ip, sp
        152614:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        152618:	e24cb004 	sub	fp, ip, #4	; 0x4
        15261c:	e1a04000 	mov	r4, r0
        152620:	e28000c8 	add	r0, r0, #200	; 0xc8
        152624:	e1a05000 	mov	r5, r0
        152628:	e3a03001 	mov	r3, #1	; 0x1
        15262c:	e3a02001 	mov	r2, #1	; 0x1
        152630:	e3a01004 	mov	r1, #4	; 0x4
        152634:	eb6a84df 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        152638:	e3300000 	teq	r0, #0	; 0x0
        15263c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        152640:	e1a00005 	mov	r0, r5
        152644:	eb6a84e2 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        152648:	e5d41016 	ldrb	r1, [r4, #22]	; fField22
        15264c:	e5c01000 	strb	r1, [r0]
        152650:	e3a01005 	mov	r1, #5	; 0x5
        152654:	e5c01001 	strb	r1, [r0, #1]	; fField1
        152658:	e3a01000 	mov	r1, #0	; 0x0
        15265c:	e5c01002 	strb	r1, [r0, #2]	; fField2
        152660:	e5c01003 	strb	r1, [r0, #3]	; fField3
        152664:	eb6a04da 	bl	1bd39d4 <$GetGlobals>
        152668:	eb6a5773 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        15266c:	e5901000 	ldr	r1, [r0]
        152670:	e28400ec 	add	r0, r4, #236	; 0xec
        152674:	e1a02004 	mov	r2, r4
        152678:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        15267c:	ea64a5c7 	b	1a7bda0 <TAsyncEvent::$Init(unsigned long, TAEventHandler *)>
    */
}

/**
 * Symbol: TPAPInterface::PrepareStatusRequestPacket(void)
 * Address: 00152680
 */
TPAPInterface::PrepareStatusRequestPacket(void) {
    /*
        152680:	e1a0c00d 	mov	ip, sp
        152684:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        152688:	e24cb004 	sub	fp, ip, #4	; 0x4
        15268c:	e1a04000 	mov	r4, r0
        152690:	e2800e23 	add	r0, r0, #560	; 0x230
        152694:	e3a03000 	mov	r3, #0	; 0x0
        152698:	e3a02001 	mov	r2, #1	; 0x1
        15269c:	e3a01f52 	mov	r1, #328	; 0x148
        1526a0:	eb6a84c4 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        1526a4:	e3300000 	teq	r0, #0	; 0x0
        1526a8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1526ac:	e2840f83 	add	r0, r4, #524	; 0x20c
        1526b0:	e1a05000 	mov	r5, r0
        1526b4:	e3a03001 	mov	r3, #1	; 0x1
        1526b8:	e3a02001 	mov	r2, #1	; 0x1
        1526bc:	e3a01004 	mov	r1, #4	; 0x4
        1526c0:	eb6a84bc 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        1526c4:	e3300000 	teq	r0, #0	; 0x0
        1526c8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1526cc:	e1a00005 	mov	r0, r5
        1526d0:	eb6a84bf 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        1526d4:	e3a01000 	mov	r1, #0	; 0x0
        1526d8:	e5c01000 	strb	r1, [r0]
        1526dc:	e3a02008 	mov	r2, #8	; 0x8
        1526e0:	e5c02001 	strb	r2, [r0, #1]	; fField1
        1526e4:	e5c01002 	strb	r1, [r0, #2]	; fField2
        1526e8:	e5c01003 	strb	r1, [r0, #3]	; fField3
        1526ec:	eb6a04b8 	bl	1bd39d4 <$GetGlobals>
        1526f0:	eb6a5751 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1526f4:	e5901000 	ldr	r1, [r0]
        1526f8:	e2840f95 	add	r0, r4, #596	; 0x254
        1526fc:	e1a02004 	mov	r2, r4
        152700:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        152704:	ea64a5a5 	b	1a7bda0 <TAsyncEvent::$Init(unsigned long, TAEventHandler *)>
    */
}

/**
 * Symbol: TPAPInterface::Flush(void)
 * Address: 00152708
 */
TPAPInterface::Flush(void) {
    /*
        152708:	e1a0c00d 	mov	ip, sp
        15270c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        152710:	e24cb004 	sub	fp, ip, #4	; 0x4
        152714:	e1a04000 	mov	r4, r0
        152718:	e3a00002 	mov	r0, #2	; 0x2
        15271c:	e58402dc 	str	r0, [r4, #732]	; fField732
        152720:	e2840084 	add	r0, r4, #132	; 0x84
        152724:	e5901000 	ldr	r1, [r0]
        152728:	e1a0e00f 	mov	lr, pc
        15272c:	e281f03c 	add	pc, r1, #60	; 0x3c
        152730:	e3300000 	teq	r0, #0	; 0x0
        152734:	0a00000c 	beq	15276c <TPAPInterface::Flush(void)+0x64>
        152738:	e1a00004 	mov	r0, r4
        15273c:	e3a019ca 	mov	r1, #3309568	; 0x328000
        152740:	e2811402 	add	r1, r1, #33554432	; 0x2000000
        152744:	eb649d5f 	bl	1a79cc8 <TPAPInterface::$FlushData(unsigned long)>
        152748:	e1a05000 	mov	r5, r0
        15274c:	e280cdc6 	add	ip, r0, #12672	; 0x3180
        152750:	e37c002c 	cmn	ip, #44	; 0x2c
        152754:	0a000013 	beq	1527a8 <TPAPInterface::Flush(void)+0xa0>
        152758:	e59452e0 	ldr	r5, [r4, #736]	; fField736
        15275c:	e285cdc6 	add	ip, r5, #12672	; 0x3180
        152760:	e37c0026 	cmn	ip, #38	; 0x26
        152764:	13350000 	teqne	r5, #0	; 0x0
        152768:	1a00000e 	bne	1527a8 <TPAPInterface::Flush(void)+0xa0>
        15276c:	e3a06000 	mov	r6, #0	; 0x0
        152770:	e3a05000 	mov	r5, #0	; 0x0
        152774:	e3a00003 	mov	r0, #3	; 0x3
        152778:	e2844fb7 	add	r4, r4, #732	; 0x2dc
        15277c:	e8840041 	stmia	r4, {r0, r6}
        152780:	e2444fb7 	sub	r4, r4, #732	; 0x2dc
        152784:	e1a00004 	mov	r0, r4
        152788:	e3a0182f 	mov	r1, #3080192	; 0x2f0000
        15278c:	e281140d 	add	r1, r1, #218103808	; 0xd000000
        152790:	eb649d4c 	bl	1a79cc8 <TPAPInterface::$FlushData(unsigned long)>
        152794:	e59402e0 	ldr	r0, [r4, #736]	; fField736
        152798:	e280cdc6 	add	ip, r0, #12672	; 0x3180
        15279c:	e37c0025 	cmn	ip, #37	; 0x25
        1527a0:	11b05000 	movnes	r5, r0
        1527a4:	05a462e0 	streq	r6, [r4, #736]!	; fField736
        1527a8:	e1a00005 	mov	r0, r5
        1527ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

