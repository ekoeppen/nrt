#include "include/TOnlineService.h"

/**
 * Symbol: TOnlineService::__ct(void)
 * Address: 00149b34
 */
TOnlineService::TOnlineService(void) {
    /*
        149b34:	e1a0c00d 	mov	ip, sp
        149b38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        149b3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        149b40:	e1b04000 	movs	r4, r0
        149b44:	1a000003 	bne	149b58 <TOnlineService::__ct(void)+0x24>
        149b48:	e3a00068 	mov	r0, #104	; 0x68
        149b4c:	eb6a12f9 	bl	1bce738 <$__nw(unsigned int)>
        149b50:	e1b04000 	movs	r4, r0
        149b54:	0a000017 	beq	149bb8 <TOnlineService::__ct(void)+0x84>
        149b58:	e1a00004 	mov	r0, r4
        149b5c:	eb69afe2 	bl	1bb5aec <TEndpointClient::$__ct(void)>
        149b60:	e284002c 	add	r0, r4, #44	; 0x2c
        149b64:	eb62edcb 	bl	1a05298 <TCPReadMessage::$__ct(void)>
        149b68:	e2840038 	add	r0, r4, #56	; 0x38
        149b6c:	eb62edd0 	bl	1a052b4 <TCPDeviceIdTuple::$__ct(void)>
        149b70:	e284004c 	add	r0, r4, #76	; 0x4c
        149b74:	eb62eddc 	bl	1a052ec <TCPServiceInfoResponseTuple::$__ct(void)>
        149b78:	e3a00002 	mov	r0, #2	; 0x2
        149b7c:	eb69e172 	bl	1bc214c <$AllocateRefHandle(long)>
        149b80:	e5840064 	str	r0, [r4, #100]	; fField100
        149b84:	e1a01000 	mov	r1, r0
        149b88:	e3a00000 	mov	r0, #0	; 0x0
        149b8c:	e5a10004 	str	r0, [r1, #4]!
        149b90:	e59f1028 	ldr	r1, [pc, #28]	; 149bc0 <TOnlineService::__ct(void)+0x8c>	; fField28
        149b94:	e5840014 	str	r0, [r4, #20]	; fField20
        149b98:	e5841000 	str	r1, [r4]
        149b9c:	e3a01e96 	mov	r1, #2400	; 0x960
        149ba0:	e5841060 	str	r1, [r4, #96]
        149ba4:	e3a01001 	mov	r1, #1	; 0x1
        149ba8:	e5840028 	str	r0, [r4, #40]	; fField40
        149bac:	e5c41018 	strb	r1, [r4, #24]	; fField24
        149bb0:	e584001c 	str	r0, [r4, #28]	; fField28
        149bb4:	e5c40020 	strb	r0, [r4, #32]	; fField32
        149bb8:	e1a00004 	mov	r0, r4
        149bbc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        149bc0:	0001d9f4 	streqd	sp, [r1], -r4
    */
}

/**
 * Symbol: TOnlineService::__dt(void)
 * Address: 00149bc4
 */
TOnlineService::~TOnlineService(void) {
    /*
        149bc4:	e1a0c00d 	mov	ip, sp
        149bc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        149bcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        149bd0:	e1a04000 	mov	r4, r0
        149bd4:	e1a05001 	mov	r5, r1
        149bd8:	e59f0058 	ldr	r0, [pc, #58]	; 149c38 <TOnlineService::__dt(void)+0x74>
        149bdc:	e5840000 	str	r0, [r4]
        149be0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        149be4:	e3300000 	teq	r0, #0	; 0x0
        149be8:	0a000002 	beq	149bf8 <TOnlineService::__dt(void)+0x34>
        149bec:	e3a01001 	mov	r1, #1	; 0x1
        149bf0:	e1a0e00f 	mov	lr, pc
        149bf4:	e590f000 	ldr	pc, [r0]
        149bf8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        149bfc:	e3300000 	teq	r0, #0	; 0x0
        149c00:	1b69b7fa 	blne	1bb7bf0 <TEndpoint::$Delete(void)>
        149c04:	e5940064 	ldr	r0, [r4, #100]	; fField100
        149c08:	eb69e56b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        149c0c:	e284002c 	add	r0, r4, #44	; 0x2c
        149c10:	e3a01000 	mov	r1, #0	; 0x0
        149c14:	eb62edb6 	bl	1a052f4 <TCPReadMessage::$__dt(void)>
        149c18:	e1a00004 	mov	r0, r4
        149c1c:	e3a01000 	mov	r1, #0	; 0x0
        149c20:	eb69b3c3 	bl	1bb6b34 <TEndpointClient::$__dt(void)>
        149c24:	e3150001 	tst	r5, #1	; 0x1
        149c28:	11a00004 	movne	r0, r4
        149c2c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        149c30:	1a6a0eaa 	bne	1bcd6e0 <$__dl(void *)>
        149c34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        149c38:	0001d9f4 	streqd	sp, [r1], -r4
    */
}

/**
 * Symbol: TOnlineService::DialogPart2(void)
 * Address: 00149c3c
 */
TOnlineService::DialogPart2(void) {
    /*
        149c3c:	e1a0c00d 	mov	ip, sp
        149c40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        149c44:	e24cb004 	sub	fp, ip, #4	; 0x4
        149c48:	e1a04000 	mov	r4, r0
        149c4c:	e280002c 	add	r0, r0, #44	; 0x2c
        149c50:	e1a06000 	mov	r6, r0
        149c54:	eb62f1c8 	bl	1a0637c <TCPReadMessage::$ReceiveMessage(void)>
        149c58:	e1a05000 	mov	r5, r0
        149c5c:	e3500000 	cmp	r0, #0	; 0x0
        149c60:	1a000020 	bne	149ce8 <TOnlineService::DialogPart2(void)+0xac>
        149c64:	e1a00006 	mov	r0, r6
        149c68:	e3a02001 	mov	r2, #1	; 0x1
        149c6c:	e59f1068 	ldr	r1, [pc, #68]	; 149cdc <TOnlineService::DialogPart2(void)+0xa0>
        149c70:	eb62f1ad 	bl	1a0632c <TCPReadMessage::$Find(unsigned long, unsigned char)>
        149c74:	e3300000 	teq	r0, #0	; 0x0
        149c78:	03e05041 	mvneq	r5, #65	; 0x41
        149c7c:	02455b27 	subeq	r5, r5, #39936	; 0x9c00
        149c80:	0a00001c 	beq	149cf8 <TOnlineService::DialogPart2(void)+0xbc>
        149c84:	e2841038 	add	r1, r4, #56	; 0x38
        149c88:	e3a02014 	mov	r2, #20	; 0x14
        149c8c:	eb6a54b0 	bl	1bdef54 <$BlockMove>
        149c90:	e1a00006 	mov	r0, r6
        149c94:	e3a02000 	mov	r2, #0	; 0x0
        149c98:	e59f1040 	ldr	r1, [pc, #40]	; 149ce0 <TOnlineService::DialogPart2(void)+0xa4>	; fField40
        149c9c:	eb62f1a2 	bl	1a0632c <TCPReadMessage::$Find(unsigned long, unsigned char)>
        149ca0:	e1b06000 	movs	r6, r0
        149ca4:	03e05042 	mvneq	r5, #66	; 0x42
        149ca8:	02455b27 	subeq	r5, r5, #39936	; 0x9c00
        149cac:	0a000011 	beq	149cf8 <TOnlineService::DialogPart2(void)+0xbc>
        149cb0:	e284104c 	add	r1, r4, #76	; 0x4c
        149cb4:	e1a00006 	mov	r0, r6
        149cb8:	e3a02014 	mov	r2, #20	; 0x14
        149cbc:	eb6a54a4 	bl	1bdef54 <$BlockMove>
        149cc0:	e5b60008 	ldr	r0, [r6, #8]!
        149cc4:	e59fc018 	ldr	ip, [pc, #18]	; 149ce4 <TOnlineService::DialogPart2(void)+0xa8>
        149cc8:	e130000c 	teq	r0, ip
        149ccc:	13e05043 	mvnne	r5, #67	; 0x43
        149cd0:	12455b27 	subne	r5, r5, #39936	; 0x9c00
        149cd4:	1a000007 	bne	149cf8 <TOnlineService::DialogPart2(void)+0xbc>
        149cd8:	ea000003 	b	149cec <TOnlineService::DialogPart2(void)+0xb0>
        149cdc:	645f6964 	ldrvsb	r6, [pc], #964	; 149ce4 <TOnlineService::DialogPart2(void)+0xa8>
        149ce0:	73697270 	cmnvc	r9, #7	; 0x7
        149ce4:	7061636b 	rsbvc	r6, r1, fp, ror #6
        149ce8:	1a000002 	bne	149cf8 <TOnlineService::DialogPart2(void)+0xbc>
        149cec:	e1a00004 	mov	r0, r4
        149cf0:	e3a01005 	mov	r1, #5	; 0x5
        149cf4:	ea000001 	b	149d00 <TOnlineService::DialogPart2(void)+0xc4>
        149cf8:	e1a00004 	mov	r0, r4
        149cfc:	e3a01001 	mov	r1, #1	; 0x1
        149d00:	eb656111 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        149d04:	e1a00005 	mov	r0, r5
        149d08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TOnlineService::DialogPart3(void)
 * Address: 00149d0c
 */
TOnlineService::DialogPart3(void) {
    /*
        149d0c:	e1a0c00d 	mov	ip, sp
        149d10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        149d14:	e24cb004 	sub	fp, ip, #4	; 0x4
        149d18:	e1a04000 	mov	r4, r0
        149d1c:	e24dd014 	sub	sp, sp, #20	; 0x14
        149d20:	e5901028 	ldr	r1, [r0, #40]	; fField40
        149d24:	e28d0010 	add	r0, sp, #16	; 0x10
        149d28:	eb62ed5f 	bl	1a052ac <TCPWriteMessage::$__ct(TEndpointPipe *)>
        149d2c:	e1a0000d 	mov	r0, sp
        149d30:	e2842054 	add	r2, r4, #84	; 0x54
        149d34:	e8920006 	ldmia	r2, {r1, r2}
        149d38:	eb62ed68 	bl	1a052e0 <TCPRequestServiceTuple::$__ct(unsigned long, unsigned long)>
        149d3c:	e1a0100d 	mov	r1, sp
        149d40:	e28d0010 	add	r0, sp, #16	; 0x10
        149d44:	eb62ed6c 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
        149d48:	e28d0010 	add	r0, sp, #16	; 0x10
        149d4c:	eb62f590 	bl	1a07394 <TCPWriteMessage::$SendMessage(void)>
        149d50:	e1a05000 	mov	r5, r0
        149d54:	e3500000 	cmp	r0, #0	; 0x0
        149d58:	e28dd014 	add	sp, sp, #20	; 0x14
        149d5c:	0a000002 	beq	149d6c <TOnlineService::DialogPart3(void)+0x60>
        149d60:	11a00004 	movne	r0, r4
        149d64:	13a01001 	movne	r1, #1	; 0x1
        149d68:	1a000001 	bne	149d74 <TOnlineService::DialogPart3(void)+0x68>
        149d6c:	e1a00004 	mov	r0, r4
        149d70:	e3a01006 	mov	r1, #6	; 0x6
        149d74:	eb6560f4 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        149d78:	e1a00005 	mov	r0, r5
        149d7c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOnlineService::DoLoadPackage(void)
 * Address: 00149d80
 */
TOnlineService::DoLoadPackage(void) {
    /*
        149d80:	e1a0c00d 	mov	ip, sp
        149d84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        149d88:	e24cb004 	sub	fp, ip, #4	; 0x4
        149d8c:	e1a04000 	mov	r4, r0
        149d90:	e280002c 	add	r0, r0, #44	; 0x2c
        149d94:	e1a05000 	mov	r5, r0
        149d98:	eb62f57b 	bl	1a0738c <TCPReadMessage::$Reset(void)>
        149d9c:	e3a00000 	mov	r0, #0	; 0x0
        149da0:	e52d0008 	str	r0, [sp, -#8]!
        149da4:	e1a00005 	mov	r0, r5
        149da8:	e1a0100d 	mov	r1, sp
        149dac:	e3a02001 	mov	r2, #1	; 0x1
        149db0:	eb62f170 	bl	1a06378 <TCPReadMessage::$ReadTuple(TCPTuple *, unsigned char)>
        149db4:	e1b05000 	movs	r5, r0
        149db8:	0a000005 	beq	149dd4 <TOnlineService::DoLoadPackage(void)+0x54>
        149dbc:	e28dd008 	add	sp, sp, #8	; 0x8
        149dc0:	e1a00004 	mov	r0, r4
        149dc4:	e3a01007 	mov	r1, #7	; 0x7
        149dc8:	eb6560df 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        149dcc:	e1a00005 	mov	r0, r5
        149dd0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        149dd4:	e59d0000 	ldr	r0, [sp]
        149dd8:	e59fc0b4 	ldr	ip, [pc, #b4]	; 149e94 <TOnlineService::DoLoadPackage(void)+0x114>
        149ddc:	e130000c 	teq	r0, ip
        149de0:	159f00b0 	ldrne	r0, [pc, #b0]	; 149e98 <TOnlineService::DoLoadPackage(void)+0x118>
        149de4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        149de8:	e24dd008 	sub	sp, sp, #8	; 0x8
        149dec:	e59d000c 	ldr	r0, [sp, #12]
        149df0:	e0801080 	add	r1, r0, r0, lsl #1
        149df4:	e0611380 	rsb	r1, r1, r0, lsl #7
        149df8:	e0811101 	add	r1, r1, r1, lsl #2
        149dfc:	e1a01201 	mov	r1, r1, lsl #4
        149e00:	e5940060 	ldr	r0, [r4, #96]
        149e04:	eb69a2cf 	bl	1bb2948 <$__rt_udiv>
        149e08:	e1b00080 	movs	r0, r0, lsl #1
        149e0c:	13a01066 	movne	r1, #102	; 0x66
        149e10:	12811c0e 	addne	r1, r1, #3584	; 0xe00
        149e14:	10010190 	mulne	r1, r0, r1
        149e18:	03a019ca 	moveq	r1, #3309568	; 0x328000
        149e1c:	02811402 	addeq	r1, r1, #33554432	; 0x2000000
        149e20:	e5940028 	ldr	r0, [r4, #40]	; fField40
        149e24:	eb69c3c7 	bl	1bbad48 <TEndpointPipe::$SetTimeout(unsigned long)>
        149e28:	e3a00002 	mov	r0, #2	; 0x2
        149e2c:	eb69e0c6 	bl	1bc214c <$AllocateRefHandle(long)>
        149e30:	e58d0000 	str	r0, [sp]
        149e34:	e1a0500d 	mov	r5, sp
        149e38:	e59f005c 	ldr	r0, [pc, #5c]	; 149e9c <TOnlineService::DoLoadPackage(void)+0x11c>
        149e3c:	eb6ad876 	bl	1c0001c <$NSCallGlobalFn(RefVar const &)>
        149e40:	eb69e0c1 	bl	1bc214c <$AllocateRefHandle(long)>
        149e44:	e58d0004 	str	r0, [sp, #4]
        149e48:	e28d1004 	add	r1, sp, #4	; 0x4
        149e4c:	e3a03000 	mov	r3, #0	; 0x0
        149e50:	e1a02005 	mov	r2, r5
        149e54:	e5940028 	ldr	r0, [r4, #40]	; fField40
        149e58:	eb6adc91 	bl	1c010a4 <$NewPackage__FP5CPipeRC6RefVarT2Ul>
        149e5c:	e1a05000 	mov	r5, r0
        149e60:	e59d0000 	ldr	r0, [sp]
        149e64:	eb69e4d4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        149e68:	e59d0004 	ldr	r0, [sp, #4]
        149e6c:	eb69e4d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        149e70:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
        149e74:	e3300000 	teq	r0, #0	; 0x0
        149e78:	128dd008 	addne	sp, sp, #8	; 0x8
        149e7c:	1affffce 	bne	149dbc <TOnlineService::DoLoadPackage(void)+0x3c>
        149e80:	e1a00004 	mov	r0, r4
        149e84:	e3a01007 	mov	r1, #7	; 0x7
        149e88:	eb6560af 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        149e8c:	e1a00005 	mov	r0, r5
        149e90:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        149e94:	7061636b 	rsbvc	r6, r1, fp, ror #6
        149e98:	ffff63bb 	swinv	0x00ff63bb
        149e9c:	00682f90 	streqb	r2, [r8], -#240
    */
}

/**
 * Symbol: TOnlineService::ProcessState(void)
 * Address: 00149ea0
 */
TOnlineService::ProcessState(void) {
    /*
        149ea0:	e5901024 	ldr	r1, [r0, #36]	; fField36
        149ea4:	e3310003 	teq	r1, #3	; 0x3
        149ea8:	0a651a5a 	beq	1a90818 <TOnlineService::$DialogPart1(void)>
        149eac:	e3310004 	teq	r1, #4	; 0x4
        149eb0:	0a651a59 	beq	1a9081c <TOnlineService::$DialogPart2(void)>
        149eb4:	e3310005 	teq	r1, #5	; 0x5
        149eb8:	0a651a58 	beq	1a90820 <TOnlineService::$DialogPart3(void)>
        149ebc:	e3310006 	teq	r1, #6	; 0x6
        149ec0:	0a651e76 	beq	1a918a0 <TOnlineService::$DoLoadPackage(void)>
        149ec4:	13a00d8f 	movne	r0, #9152	; 0x23c0
        149ec8:	12400903 	subne	r0, r0, #49152	; 0xc000
        149ecc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOnlineService::GetEndpoint(void)
 * Address: 00149ed0
 */
TOnlineService::GetEndpoint(void) {
    /*
        149ed0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        149ed4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOnlineService::SetState(unsigned long)
 * Address: 00149ed8
 */
TOnlineService::SetState(unsigned long) {
    /*
        149ed8:	e1a0c00d 	mov	ip, sp
        149edc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        149ee0:	e24cb004 	sub	fp, ip, #4	; 0x4
        149ee4:	e1a04000 	mov	r4, r0
        149ee8:	e24dd008 	sub	sp, sp, #8	; 0x8
        149eec:	e5801024 	str	r1, [r0, #36]	; fField36
        149ef0:	e59f0044 	ldr	r0, [pc, #44]	; 149f3c <TOnlineService::SetState(unsigned long)+0x64>
        149ef4:	e5900000 	ldr	r0, [r0]
        149ef8:	e5900000 	ldr	r0, [r0]
        149efc:	eb69e8d4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        149f00:	eb69e091 	bl	1bc214c <$AllocateRefHandle(long)>
        149f04:	e58d0000 	str	r0, [sp]
        149f08:	e1a0500d 	mov	r5, sp
        149f0c:	e3a00002 	mov	r0, #2	; 0x2
        149f10:	eb69e08d 	bl	1bc214c <$AllocateRefHandle(long)>
        149f14:	e58d0004 	str	r0, [sp, #4]
        149f18:	e28d1004 	add	r1, sp, #4	; 0x4
        149f1c:	e2840064 	add	r0, r4, #100	; 0x64
        149f20:	e1a02005 	mov	r2, r5
        149f24:	eb6668bc 	bl	1ae421c <$SetStatus__FRC6RefVarN21>
        149f28:	e59d0000 	ldr	r0, [sp]
        149f2c:	eb69e4a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        149f30:	e59d0004 	ldr	r0, [sp, #4]
        149f34:	eb69e4a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        149f38:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        149f3c:	006814d8 	ldreqd	r1, [r8], -#72
    */
}

/**
 * Symbol: TOnlineService::Init(void)
 * Address: 0014a350
 */
TOnlineService::Init(void) {
    /*
        14a350:	e3a00000 	mov	r0, #0	; 0x0
        14a354:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOnlineService::Init(RefVar const &)
 * Address: 0014a4b8
 */
TOnlineService::Init(RefVar const &) {
    /*
        14a4b8:	e1a0c00d 	mov	ip, sp
        14a4bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14a4c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        14a4c4:	e1a04000 	mov	r4, r0
        14a4c8:	e2805064 	add	r5, r0, #100	; 0x64
        14a4cc:	e59f10d0 	ldr	r1, [pc, #d0]	; 14a5a4 <TOnlineService::Init(RefVar const &)+0xec>
        14a4d0:	e59f00d0 	ldr	r0, [pc, #d0]	; 14a5a8 <TOnlineService::Init(RefVar const &)+0xf0>
        14a4d4:	e5900000 	ldr	r0, [r0]
        14a4d8:	eb6a001e 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14a4dc:	e5951000 	ldr	r1, [r5]
        14a4e0:	e5810000 	str	r0, [r1]
        14a4e4:	e1a00004 	mov	r0, r4
        14a4e8:	e3a01001 	mov	r1, #1	; 0x1
        14a4ec:	eb655f16 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        14a4f0:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        14a4f4:	e28d0014 	add	r0, sp, #20	; 0x14
        14a4f8:	eb69ad79 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        14a4fc:	e1a0000d 	mov	r0, sp
        14a500:	eb6af7d1 	bl	1c0844c <TCMOServiceIdentifier::$__ct(void)>
        14a504:	e28d0014 	add	r0, sp, #20	; 0x14
        14a508:	eb69b9db 	bl	1bb8c7c <TOptionArray::$Init(void)>
        14a50c:	e1a0000d 	mov	r0, sp
        14a510:	eb6af7cb 	bl	1c08444 <TOption::$SetAsService(void)>
        14a514:	e59f0090 	ldr	r0, [pc, #90]	; 14a5ac <TOnlineService::Init(RefVar const &)+0xf4>
        14a518:	e58d000c 	str	r0, [sp, #12]
        14a51c:	e3a00000 	mov	r0, #0	; 0x0
        14a520:	e58d0010 	str	r0, [sp, #16]
        14a524:	e1a0000d 	mov	r0, sp
        14a528:	eb6af7c5 	bl	1c08444 <TOption::$SetAsService(void)>
        14a52c:	e1a0200d 	mov	r2, sp
        14a530:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        14a534:	e28d0014 	add	r0, sp, #20	; 0x14
        14a538:	eb69bdd9 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        14a53c:	e24dd010 	sub	sp, sp, #16	; 0x10
        14a540:	e1a0000d 	mov	r0, sp
        14a544:	eb69c617 	bl	1bbbda8 <TCMOModemECType::$__ct(void)>
        14a548:	e3a00010 	mov	r0, #16	; 0x10
        14a54c:	e58d000c 	str	r0, [sp, #12]
        14a550:	e59d0008 	ldr	r0, [sp, #8]
        14a554:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        14a558:	e3800c02 	orr	r0, r0, #512	; 0x200
        14a55c:	e58d0008 	str	r0, [sp, #8]
        14a560:	e1a0200d 	mov	r2, sp
        14a564:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        14a568:	e28d0024 	add	r0, sp, #36	; 0x24
        14a56c:	eb69bdcc 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        14a570:	eb65c610 	bl	1abbdb8 <$UseModemNavigator(void)>
        14a574:	e3300000 	teq	r0, #0	; 0x0
        14a578:	0a00000c 	beq	14a5b0 <TOnlineService::Init(RefVar const &)+0xf8>
        14a57c:	e28d0024 	add	r0, sp, #36	; 0x24
        14a580:	eb6a9cc6 	bl	1bf18a0 <$RunModemNavigator(TOptionArray *)>
        14a584:	e3300000 	teq	r0, #0	; 0x0
        14a588:	0a000008 	beq	14a5b0 <TOnlineService::Init(RefVar const &)+0xf8>
        14a58c:	e1a04000 	mov	r4, r0
        14a590:	e28d0024 	add	r0, sp, #36	; 0x24
        14a594:	e3a01000 	mov	r1, #0	; 0x0
        14a598:	eb69b163 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        14a59c:	e1a00004 	mov	r0, r4
        14a5a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14a5a4:	00683b48 	rsbeq	r3, r8, r8, asr #22
        14a5a8:	0c101934 	ldceq	9, cr1, [r0], -#208
        14a5ac:	6d6f6473 	stcvsl	4, cr6, [pc, -#460]!
        14a5b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        14a5b4:	e1a0100d 	mov	r1, sp
        14a5b8:	e28d0028 	add	r0, sp, #40	; 0x28
        14a5bc:	e3a02001 	mov	r2, #1	; 0x1
        14a5c0:	eb69b576 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        14a5c4:	e3300000 	teq	r0, #0	; 0x0
        14a5c8:	11a04000 	movne	r4, r0
        14a5cc:	1a00000b 	bne	14a600 <TOnlineService::Init(RefVar const &)+0x148>
        14a5d0:	e1a00004 	mov	r0, r4
        14a5d4:	e59d1000 	ldr	r1, [sp]
        14a5d8:	e59f3034 	ldr	r3, [pc, #34]	; 14a614 <TOnlineService::Init(RefVar const &)+0x15c>
        14a5dc:	e59f2034 	ldr	r2, [pc, #34]	; 14a618 <TOnlineService::Init(RefVar const &)+0x160>
        14a5e0:	eb69bda7 	bl	1bb9c84 <TEndpointClient::$Init(TEndpoint *, unsigned long, unsigned long)>
        14a5e4:	e3a00000 	mov	r0, #0	; 0x0
        14a5e8:	eb69ad3e 	bl	1bb5ae8 <TEndpointPipe::$__ct(void)>
        14a5ec:	e5840028 	str	r0, [r4, #40]	; fField40
        14a5f0:	e1b01000 	movs	r1, r0
        14a5f4:	1a000008 	bne	14a61c <TOnlineService::Init(RefVar const &)+0x164>
        14a5f8:	e3a040e9 	mov	r4, #233	; 0xe9
        14a5fc:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        14a600:	e28d0028 	add	r0, sp, #40	; 0x28
        14a604:	e3a01000 	mov	r1, #0	; 0x0
        14a608:	eb69b147 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        14a60c:	e1a00004 	mov	r0, r4
        14a610:	ea000015 	b	14a66c <TOnlineService::Init(RefVar const &)+0x1b4>
        14a614:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        14a618:	656e6470 	strvsb	r6, [lr, -#1136]!
        14a61c:	e284002c 	add	r0, r4, #44	; 0x2c
        14a620:	e3a02c01 	mov	r2, #256	; 0x100
        14a624:	eb62ef46 	bl	1a06344 <TCPReadMessage::$Init(TEndpointPipe *, unsigned long)>
        14a628:	e1b05000 	movs	r5, r0
        14a62c:	1a00000a 	bne	14a65c <TOnlineService::Init(RefVar const &)+0x1a4>
        14a630:	e3a03000 	mov	r3, #0	; 0x0
        14a634:	e3a02000 	mov	r2, #0	; 0x0
        14a638:	e3a019ca 	mov	r1, #3309568	; 0x328000
        14a63c:	e2811402 	add	r1, r1, #33554432	; 0x2000000
        14a640:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        14a644:	e3a03c01 	mov	r3, #256	; 0x100
        14a648:	e3a02c01 	mov	r2, #256	; 0x100
        14a64c:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
        14a650:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a654:	eb6ad230 	bl	1bfef1c <TEndpointPipe::$Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *)>
        14a658:	e28dd00c 	add	sp, sp, #12	; 0xc
        14a65c:	e28d0028 	add	r0, sp, #40	; 0x28
        14a660:	e3a01000 	mov	r1, #0	; 0x0
        14a664:	eb69b130 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        14a668:	e1a00005 	mov	r0, r5
        14a66c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOnlineService::DoConnect(char *, TCMOModemDialing *)
 * Address: 0014a670
 */
TOnlineService::DoConnect(char *, TCMOModemDialing *) {
    /*
        14a670:	e1a0c00d 	mov	ip, sp
        14a674:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        14a678:	e24cb004 	sub	fp, ip, #4	; 0x4
        14a67c:	e1a04000 	mov	r4, r0
        14a680:	e1a06001 	mov	r6, r1
        14a684:	e1a05002 	mov	r5, r2
        14a688:	e1a00001 	mov	r0, r1
        14a68c:	eb69ad07 	bl	1bb5ab0 <$strlen>
        14a690:	e1a09000 	mov	r9, r0
        14a694:	e3350000 	teq	r5, #0	; 0x0
        14a698:	03a000ba 	moveq	r0, #186	; 0xba
        14a69c:	02400c9d 	subeq	r0, r0, #40192	; 0x9d00
        14a6a0:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        14a6a4:	e1a00004 	mov	r0, r4
        14a6a8:	e3a01002 	mov	r1, #2	; 0x2
        14a6ac:	eb655ea6 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        14a6b0:	e3a00000 	mov	r0, #0	; 0x0
        14a6b4:	eb69ad0a 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        14a6b8:	e1a08000 	mov	r8, r0
        14a6bc:	e24dd014 	sub	sp, sp, #20	; 0x14
        14a6c0:	e1a01009 	mov	r1, r9
        14a6c4:	e1a0000d 	mov	r0, sp
        14a6c8:	eb62eaf5 	bl	1a052a4 <TCMAPhoneNumber::$__ct(unsigned long)>
        14a6cc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a6d0:	e1a01004 	mov	r1, r4
        14a6d4:	eb69bd7d 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
        14a6d8:	e1b07000 	movs	r7, r0
        14a6dc:	1a000022 	bne	14a76c <TOnlineService::DoConnect(char *, TCMOModemDialing *)+0xfc>
        14a6e0:	e3a03000 	mov	r3, #0	; 0x0
        14a6e4:	e3a02000 	mov	r2, #0	; 0x0
        14a6e8:	e3a01000 	mov	r1, #0	; 0x0
        14a6ec:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a6f0:	eb69b525 	bl	1bb7b8c <TEndpoint::$Bind(TOptionArray *, long *, unsigned long)>
        14a6f4:	e1b07000 	movs	r7, r0
        14a6f8:	1a00001b 	bne	14a76c <TOnlineService::DoConnect(char *, TCMOModemDialing *)+0xfc>
        14a6fc:	e3a01000 	mov	r1, #0	; 0x0
        14a700:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a704:	eb69c18e 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
        14a708:	e1a00008 	mov	r0, r8
        14a70c:	eb69b95a 	bl	1bb8c7c <TOptionArray::$Init(void)>
        14a710:	e1a03009 	mov	r3, r9
        14a714:	e92d0008 	stmdb	sp!, {r3}
        14a718:	e1a03006 	mov	r3, r6
        14a71c:	e28d2004 	add	r2, sp, #4	; 0x4
        14a720:	e5981000 	ldr	r1, [r8]
        14a724:	e1a00008 	mov	r0, r8
        14a728:	eb69bd5f 	bl	1bb9cac <TOptionArray::$InsertVarOptionAt(long, TOption *, void *, unsigned long)>
        14a72c:	e28dd004 	add	sp, sp, #4	; 0x4
        14a730:	e1a02005 	mov	r2, r5
        14a734:	e5981000 	ldr	r1, [r8]
        14a738:	e1a00008 	mov	r0, r8
        14a73c:	eb69bd58 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        14a740:	e3a03000 	mov	r3, #0	; 0x0
        14a744:	e3a02000 	mov	r2, #0	; 0x0
        14a748:	e92d000c 	stmdb	sp!, {r2, r3}
        14a74c:	e1a02008 	mov	r2, r8
        14a750:	e3a01000 	mov	r1, #0	; 0x0
        14a754:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a758:	eb69b51a 	bl	1bb7bc8 <TEndpoint::$Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)>
        14a75c:	e28dd008 	add	sp, sp, #8	; 0x8
        14a760:	e1b07000 	movs	r7, r0
        14a764:	028dd014 	addeq	sp, sp, #20	; 0x14
        14a768:	0a000003 	beq	14a77c <TOnlineService::DoConnect(char *, TCMOModemDialing *)+0x10c>
        14a76c:	e28dd014 	add	sp, sp, #20	; 0x14
        14a770:	e584701c 	str	r7, [r4, #28]	; fField28
        14a774:	e1a00004 	mov	r0, r4
        14a778:	eb65183a 	bl	1a90868 <TOnlineService::$DoDisconnect(void)>
        14a77c:	e1a00007 	mov	r0, r7
        14a780:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TOnlineService::DoDisconnect(void)
 * Address: 0014a784
 */
TOnlineService::DoDisconnect(void) {
    /*
        14a784:	e1a0c00d 	mov	ip, sp
        14a788:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14a78c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14a790:	e1a04000 	mov	r4, r0
        14a794:	e3a00000 	mov	r0, #0	; 0x0
        14a798:	e5d41020 	ldrb	r1, [r4, #32]	; fField32
        14a79c:	e3310000 	teq	r1, #0	; 0x0
        14a7a0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        14a7a4:	e3a05001 	mov	r5, #1	; 0x1
        14a7a8:	e5c45020 	strb	r5, [r4, #32]	; fField32
        14a7ac:	e1a00004 	mov	r0, r4
        14a7b0:	e3a01007 	mov	r1, #7	; 0x7
        14a7b4:	eb655e64 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        14a7b8:	e1a01005 	mov	r1, r5
        14a7bc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a7c0:	eb69c15f 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
        14a7c4:	e3a06000 	mov	r6, #0	; 0x0
        14a7c8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a7cc:	e3300000 	teq	r0, #0	; 0x0
        14a7d0:	0a000012 	beq	14a820 <TOnlineService::DoDisconnect(void)+0x9c>
        14a7d4:	e3a03000 	mov	r3, #0	; 0x0
        14a7d8:	e3a02000 	mov	r2, #0	; 0x0
        14a7dc:	e3a01000 	mov	r1, #0	; 0x0
        14a7e0:	eb69b906 	bl	1bb8c00 <TEndpoint::$Disconnect(CBufferSegment *, long, long)>
        14a7e4:	e3a01000 	mov	r1, #0	; 0x0
        14a7e8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a7ec:	eb69c15b 	bl	1bbad60 <TEndpoint::$UnBind(unsigned long)>
        14a7f0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a7f4:	eb69b4e8 	bl	1bb7b9c <TEndpoint::$Close(void)>
        14a7f8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        14a7fc:	e3300000 	teq	r0, #0	; 0x0
        14a800:	0a000002 	beq	14a810 <TOnlineService::DoDisconnect(void)+0x8c>
        14a804:	e3a01001 	mov	r1, #1	; 0x1
        14a808:	e1a0e00f 	mov	lr, pc
        14a80c:	e590f000 	ldr	pc, [r0]
        14a810:	e5940014 	ldr	r0, [r4, #20]	; fField20
        14a814:	eb69b4f5 	bl	1bb7bf0 <TEndpoint::$Delete(void)>
        14a818:	e5846014 	str	r6, [r4, #20]	; fField20
        14a81c:	e5846028 	str	r6, [r4, #40]	; fField40
        14a820:	e24dd004 	sub	sp, sp, #4	; 0x4
        14a824:	e3a00001 	mov	r0, #1	; 0x1
        14a828:	eb65455b 	bl	1a9bd9c <$MakeArray(long)>
        14a82c:	eb69de46 	bl	1bc214c <$AllocateRefHandle(long)>
        14a830:	e58d0000 	str	r0, [sp]
        14a834:	e594001c 	ldr	r0, [r4, #28]	; fField28
        14a838:	e1a00100 	mov	r0, r0, lsl #2
        14a83c:	eb69de42 	bl	1bc214c <$AllocateRefHandle(long)>
        14a840:	e1a05000 	mov	r5, r0
        14a844:	e1a01006 	mov	r1, r6
        14a848:	e5902000 	ldr	r2, [r0]
        14a84c:	e59d0000 	ldr	r0, [sp]
        14a850:	e5900000 	ldr	r0, [r0]
        14a854:	eb69eebf 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        14a858:	e1a00005 	mov	r0, r5
        14a85c:	eb69e256 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14a860:	e2840064 	add	r0, r4, #100	; 0x64
        14a864:	e1a0200d 	mov	r2, sp
        14a868:	e59f1038 	ldr	r1, [pc, #38]	; 14a8a8 <TOnlineService::DoDisconnect(void)+0x124>
        14a86c:	eb69e258 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        14a870:	e1a00004 	mov	r0, r4
        14a874:	e3a01001 	mov	r1, #1	; 0x1
        14a878:	eb655e33 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        14a87c:	e1b00004 	movs	r0, r4
        14a880:	0a000002 	beq	14a890 <TOnlineService::DoDisconnect(void)+0x10c>
        14a884:	e3a01001 	mov	r1, #1	; 0x1
        14a888:	e1a0e00f 	mov	lr, pc
        14a88c:	e590f000 	ldr	pc, [r0]
        14a890:	e59f0014 	ldr	r0, [pc, #14]	; 14a8ac <TOnlineService::DoDisconnect(void)+0x128>
        14a894:	e5806000 	str	r6, [r0]
        14a898:	e59d0000 	ldr	r0, [sp]
        14a89c:	eb69e246 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14a8a0:	e1a00006 	mov	r0, r6
        14a8a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        14a8a8:	00682540 	rsbeq	r2, r8, r0, asr #10
        14a8ac:	0c1016a8 	ldceq	6, cr1, [r0], -#672
    */
}

/**
 * Symbol: TOnlineService::GetState(void)
 * Address: 0014a8b0
 */
TOnlineService::GetState(void) {
    /*
        14a8b0:	e5900024 	ldr	r0, [r0, #36]	; fField36
        14a8b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOnlineService::ConnectComplete(TEndpointEvent *)
 * Address: 0014a8b8
 */
TOnlineService::ConnectComplete(TEndpointEvent *) {
    /*
        14a8b8:	e1a0c00d 	mov	ip, sp
        14a8bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14a8c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        14a8c4:	e1a04000 	mov	r4, r0
        14a8c8:	e1a05001 	mov	r5, r1
        14a8cc:	e5910020 	ldr	r0, [r1, #32]	; fField32
        14a8d0:	e3300000 	teq	r0, #0	; 0x0
        14a8d4:	13a01001 	movne	r1, #1	; 0x1
        14a8d8:	1b69b093 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        14a8dc:	e5950024 	ldr	r0, [r5, #36]	; fField36
        14a8e0:	e3300000 	teq	r0, #0	; 0x0
        14a8e4:	13a01001 	movne	r1, #1	; 0x1
        14a8e8:	1b69b08f 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        14a8ec:	e5b50008 	ldr	r0, [r5, #8]!
        14a8f0:	e3300000 	teq	r0, #0	; 0x0
        14a8f4:	1a000009 	bne	14a920 <TOnlineService::ConnectComplete(TEndpointEvent *)+0x68>
        14a8f8:	e1a00004 	mov	r0, r4
        14a8fc:	eb655181 	bl	1a9ef08 <TOnlineService::$PrepDialog(void)>
        14a900:	ea000001 	b	14a90c <TOnlineService::ConnectComplete(TEndpointEvent *)+0x54>
        14a904:	e1a00004 	mov	r0, r4
        14a908:	eb655183 	bl	1a9ef1c <TOnlineService::$ProcessState(void)>
        14a90c:	e5941024 	ldr	r1, [r4, #36]	; fField36
        14a910:	e3310007 	teq	r1, #7	; 0x7
        14a914:	0a000001 	beq	14a920 <TOnlineService::ConnectComplete(TEndpointEvent *)+0x68>
        14a918:	e3300000 	teq	r0, #0	; 0x0
        14a91c:	0afffff8 	beq	14a904 <TOnlineService::ConnectComplete(TEndpointEvent *)+0x4c>
        14a920:	e3300000 	teq	r0, #0	; 0x0
        14a924:	05d41018 	ldreqb	r1, [r4, #24]	; fField24
        14a928:	03310000 	teqeq	r1, #0	; 0x0
        14a92c:	1584001c 	strne	r0, [r4, #28]	; fField28
        14a930:	11a00004 	movne	r0, r4
        14a934:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        14a938:	1a6517ca 	bne	1a90868 <TOnlineService::$DoDisconnect(void)>
        14a93c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOnlineService::PrepDialog(void)
 * Address: 0014a940
 */
TOnlineService::PrepDialog(void) {
    /*
        14a940:	e1a0c00d 	mov	ip, sp
        14a944:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14a948:	e24cb004 	sub	fp, ip, #4	; 0x4
        14a94c:	e1a04000 	mov	r4, r0
        14a950:	e3a05000 	mov	r5, #0	; 0x0
        14a954:	e3a01001 	mov	r1, #1	; 0x1
        14a958:	e5900014 	ldr	r0, [r0, #20]	; fField20
        14a95c:	eb69c0f8 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
        14a960:	e1a00004 	mov	r0, r4
        14a964:	e3a01003 	mov	r1, #3	; 0x3
        14a968:	eb655df7 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        14a96c:	e1a00005 	mov	r0, r5
        14a970:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOnlineService::DialogPart1(void)
 * Address: 0014a974
 */
TOnlineService::DialogPart1(void) {
    /*
        14a974:	e1a0c00d 	mov	ip, sp
        14a978:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14a97c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14a980:	e1a04000 	mov	r4, r0
        14a984:	e24dd018 	sub	sp, sp, #24	; 0x18
        14a988:	e5901028 	ldr	r1, [r0, #40]	; fField40
        14a98c:	e28d0014 	add	r0, sp, #20	; 0x14
        14a990:	eb62ea45 	bl	1a052ac <TCPWriteMessage::$__ct(TEndpointPipe *)>
        14a994:	e1a0000d 	mov	r0, sp
        14a998:	eb69b05a 	bl	1bb6b08 <TCPNewtonIdTuple::$__ct(void)>
        14a99c:	e1a0000d 	mov	r0, sp
        14a9a0:	eb69bcba 	bl	1bb9c90 <TCPNewtonIdTuple::$Init(void)>
        14a9a4:	e1b05000 	movs	r5, r0
        14a9a8:	128dd018 	addne	sp, sp, #24	; 0x18
        14a9ac:	1a000016 	bne	14aa0c <TOnlineService::DialogPart1(void)+0x98>
        14a9b0:	e1a0100d 	mov	r1, sp
        14a9b4:	e28d0014 	add	r0, sp, #20	; 0x14
        14a9b8:	eb62ea4f 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
        14a9bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        14a9c0:	e1a0000d 	mov	r0, sp
        14a9c4:	eb62ea3d 	bl	1a052c0 <TCPRequestIdTuple::$__ct(void)>
        14a9c8:	e1a0100d 	mov	r1, sp
        14a9cc:	e28d001c 	add	r0, sp, #28	; 0x1c
        14a9d0:	eb62ea49 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
        14a9d4:	e24dd014 	sub	sp, sp, #20	; 0x14
        14a9d8:	e1a0000d 	mov	r0, sp
        14a9dc:	e59f204c 	ldr	r2, [pc, #4c]	; 14aa30 <TOnlineService::DialogPart1(void)+0xbc>
        14a9e0:	e59f104c 	ldr	r1, [pc, #4c]	; 14aa34 <TOnlineService::DialogPart1(void)+0xc0>
        14a9e4:	eb62ea3f 	bl	1a052e8 <TCPServiceInfoRequestTuple::$__ct(unsigned long, unsigned long)>
        14a9e8:	e1a0100d 	mov	r1, sp
        14a9ec:	e28d0030 	add	r0, sp, #48	; 0x30
        14a9f0:	eb62ea41 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
        14a9f4:	e28d0030 	add	r0, sp, #48	; 0x30
        14a9f8:	eb62f265 	bl	1a07394 <TCPWriteMessage::$SendMessage(void)>
        14a9fc:	e1b05000 	movs	r5, r0
        14aa00:	028dd034 	addeq	sp, sp, #52	; 0x34
        14aa04:	0a000004 	beq	14aa1c <TOnlineService::DialogPart1(void)+0xa8>
        14aa08:	e28dd034 	add	sp, sp, #52	; 0x34
        14aa0c:	e3350000 	teq	r5, #0	; 0x0
        14aa10:	11a00004 	movne	r0, r4
        14aa14:	13a01001 	movne	r1, #1	; 0x1
        14aa18:	1a000001 	bne	14aa24 <TOnlineService::DialogPart1(void)+0xb0>
        14aa1c:	e1a00004 	mov	r0, r4
        14aa20:	e3a01004 	mov	r1, #4	; 0x4
        14aa24:	eb655dc8 	bl	1aa214c <TOnlineService::$SetState(unsigned long)>
        14aa28:	e1a00005 	mov	r0, r5
        14aa2c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14aa30:	6f736274 	swivs	0x00736274
        14aa34:	7061636b 	rsbvc	r6, r1, fp, ror #6
    */
}

