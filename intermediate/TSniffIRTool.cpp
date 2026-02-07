#include "include/TSniffIRTool.h"

/**
 * Symbol: TSniffIRTool::__ct(unsigned long)
 * Address: 001e2c5c
 */
TSniffIRTool::TSniffIRTool(unsigned long) {
    /*
        1e2c5c:	e1a0c00d 	mov	ip, sp
        1e2c60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e2c64:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2c68:	e1b04000 	movs	r4, r0
        1e2c6c:	e1a05001 	mov	r5, r1
        1e2c70:	1a000004 	bne	1e2c88 <TSniffIRTool::__ct(unsigned long)+0x2c>
        1e2c74:	e3a000c8 	mov	r0, #200	; 0xc8
        1e2c78:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e2c7c:	eb67aead 	bl	1bce738 <$__nw(unsigned int)>
        1e2c80:	e1b04000 	movs	r4, r0
        1e2c84:	0a000007 	beq	1e2ca8 <TSniffIRTool::__ct(unsigned long)+0x4c>
        1e2c88:	e1a01005 	mov	r1, r5
        1e2c8c:	e1a00004 	mov	r0, r4
        1e2c90:	eb609a0f 	bl	1a094d4 <TAsyncSerTool::$__ct(unsigned long)>
        1e2c94:	e28400b8 	add	r0, r4, #184	; 0xb8
        1e2c98:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e2c9c:	eb676443 	bl	1bbbdb0 <TCMOSlowIRSniff::$__ct(void)>
        1e2ca0:	e59f0008 	ldr	r0, [pc, #8]	; 1e2cb0 <TSniffIRTool::__ct(unsigned long)+0x54>
        1e2ca4:	e5840000 	str	r0, [r4]
        1e2ca8:	e1a00004 	mov	r0, r4
        1e2cac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1e2cb0:	0001c434 	andeq	ip, r1, r4, lsr r4
    */
}

/**
 * Symbol: TSniffIRTool::__dt(void)
 * Address: 001e2cb4
 */
TSniffIRTool::~TSniffIRTool(void) {
    /*
        1e2cb4:	e1a0c00d 	mov	ip, sp
        1e2cb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e2cbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2cc0:	e1a04000 	mov	r4, r0
        1e2cc4:	e1a05001 	mov	r5, r1
        1e2cc8:	e59f0020 	ldr	r0, [pc, #20]	; 1e2cf0 <TSniffIRTool::__dt(void)+0x3c>
        1e2ccc:	e5840000 	str	r0, [r4]
        1e2cd0:	e1a00004 	mov	r0, r4
        1e2cd4:	e3a01000 	mov	r1, #0	; 0x0
        1e2cd8:	eb609e0c 	bl	1a0a510 <TAsyncSerTool::$__dt(void)>
        1e2cdc:	e3150001 	tst	r5, #1	; 0x1
        1e2ce0:	11a00004 	movne	r0, r4
        1e2ce4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1e2ce8:	1a67aa7c 	bne	1bcd6e0 <$__dl(void *)>
        1e2cec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1e2cf0:	0001c434 	andeq	ip, r1, r4, lsr r4
    */
}

/**
 * Symbol: TSniffIRTool::ResArbReleaseStart(unsigned char *, unsigned char *)
 * Address: 001e2cf4
 */
TSniffIRTool::ResArbReleaseStart(unsigned char *, unsigned char *) {
    /*
        1e2cf4:	e1a0c00d 	mov	ip, sp
        1e2cf8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e2cfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2d00:	e1a04000 	mov	r4, r0
        1e2d04:	e1a05001 	mov	r5, r1
        1e2d08:	e1a06002 	mov	r6, r2
        1e2d0c:	e3a00001 	mov	r0, #1	; 0x1
        1e2d10:	e5c401d2 	strb	r0, [r4, #466]	; fField466
        1e2d14:	e1a00004 	mov	r0, r4
        1e2d18:	e3a01002 	mov	r1, #2	; 0x2
        1e2d1c:	eb60f4bc 	bl	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
        1e2d20:	e1a02006 	mov	r2, r6
        1e2d24:	e1a01005 	mov	r1, r5
        1e2d28:	e1a00004 	mov	r0, r4
        1e2d2c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e2d30:	ea60f4d1 	b	1a2007c <TSerTool::$ResArbReleaseStart(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TSniffIRTool::ResArbClaimNotification(unsigned char *, unsigned char *)
 * Address: 001e2d34
 */
TSniffIRTool::ResArbClaimNotification(unsigned char *, unsigned char *) {
    /*
        1e2d34:	e1a0c00d 	mov	ip, sp
        1e2d38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e2d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2d40:	e1a04000 	mov	r4, r0
        1e2d44:	eb60f4ca 	bl	1a20074 <TSerTool::$ResArbClaimNotification(unsigned char *, unsigned char *)>
        1e2d48:	e1a00004 	mov	r0, r4
        1e2d4c:	e3a01001 	mov	r1, #1	; 0x1
        1e2d50:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e2d54:	ea60f4ae 	b	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
    */
}

/**
 * Symbol: TSniffIRTool::WakeUpHandler(void)
 * Address: 001e2d58
 */
TSniffIRTool::WakeUpHandler(void) {
    /*
        1e2d58:	e3a01005 	mov	r1, #5	; 0x5
        1e2d5c:	ea60f4ac 	b	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
    */
}

/**
 * Symbol: TSniffIRTool::TxDataSent(void)
 * Address: 001e2d60
 */
TSniffIRTool::TxDataSent(void) {
    /*
        1e2d60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSniffIRTool::DoOutput(void)
 * Address: 001e2d64
 */
TSniffIRTool::DoOutput(void) {
    /*
        1e2d64:	e1a0c000 	mov	ip, r0
        1e2d68:	e5900270 	ldr	r0, [r0, #624]	; fField624
        1e2d6c:	e3300000 	teq	r0, #0	; 0x0
        1e2d70:	01a0f00e 	moveq	pc, lr
        1e2d74:	e1a0000c 	mov	r0, ip
        1e2d78:	e3a03000 	mov	r3, #0	; 0x0
        1e2d7c:	e3a02000 	mov	r2, #0	; 0x0
        1e2d80:	e3a01072 	mov	r1, #114	; 0x72
        1e2d84:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
        1e2d88:	e59cc000 	ldr	ip, [ip]
        1e2d8c:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TSniffIRTool::StartReceive(void)
 * Address: 001e2d90
 */
TSniffIRTool::StartReceive(void) {
    /*
        1e2d90:	e1a0c00d 	mov	ip, sp
        1e2d94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e2d98:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2d9c:	e1a04000 	mov	r4, r0
        1e2da0:	eb60b6a6 	bl	1a10840 <TAsyncSerTool::$FlushInputBytes(void)>
        1e2da4:	e1a00004 	mov	r0, r4
        1e2da8:	e5941000 	ldr	r1, [r4]
        1e2dac:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e2db0:	e281ff5e 	add	pc, r1, #376	; 0x178
    */
}

/**
 * Symbol: TSniffIRTool::StopReceive(void)
 * Address: 001e2db4
 */
TSniffIRTool::StopReceive(void) {
    /*
        1e2db4:	e5901498 	ldr	r1, [r0, #1176]	; fField1176
        1e2db8:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
        1e2dbc:	e5a01498 	str	r1, [r0, #1176]!	; fField1176
        1e2dc0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSniffIRTool::GetToolName(void)
 * Address: 001e2dc4
 */
TSniffIRTool::GetToolName(void) {
    /*
        1e2dc4:	e28f0f00 	add	r0, pc, #0	; 0x0
        1e2dc8:	e1a0f00e 	mov	pc, lr
        1e2dcc:	536e6966 	cmnpl	lr, #1671168	; 0x198000
        1e2dd0:	66495200 	strvsb	r5, [r9], -r0, lsl #4
    */
}

/**
 * Symbol: TSniffIRTool::RxDataAvailable(void)
 * Address: 001e2dd4
 */
TSniffIRTool::RxDataAvailable(void) {
    /*
        1e2dd4:	e5901000 	ldr	r1, [r0]
        1e2dd8:	e281ff5e 	add	pc, r1, #376	; 0x178
    */
}

/**
 * Symbol: TSniffIRTool::DoInput(void)
 * Address: 001e2ddc
 */
TSniffIRTool::DoInput(void) {
    /*
        1e2ddc:	e1a0c00d 	mov	ip, sp
        1e2de0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e2de4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2de8:	e1a04000 	mov	r4, r0
        1e2dec:	e5900498 	ldr	r0, [r0, #1176]	; fField1176
        1e2df0:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
        1e2df4:	e5840498 	str	r0, [r4, #1176]	; fField1176
        1e2df8:	e1a00004 	mov	r0, r4
        1e2dfc:	eb60fcc2 	bl	1a2210c <TAsyncSerTool::$SyncInputBuffer(void)>
        1e2e00:	e2840feb 	add	r0, r4, #940	; 0x3ac
        1e2e04:	eb688d48 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
        1e2e08:	e3500000 	cmp	r0, #0	; 0x0
        1e2e0c:	991ba810 	ldmlsdb	fp, {r4, fp, sp, pc}
        1e2e10:	e24dd010 	sub	sp, sp, #16	; 0x10
        1e2e14:	e1a0000d 	mov	r0, sp
        1e2e18:	ebfc0cdc 	bl	e6190 <THMOSerIRLinkConfig::__ct(void)>
        1e2e1c:	e3a00003 	mov	r0, #3	; 0x3
        1e2e20:	e5cd000c 	strb	r0, [sp, #12]
        1e2e24:	e3a00001 	mov	r0, #1	; 0x1
        1e2e28:	e5cd000d 	strb	r0, [sp, #13]
        1e2e2c:	e59d0008 	ldr	r0, [sp, #8]
        1e2e30:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        1e2e34:	e3800b01 	orr	r0, r0, #1024	; 0x400
        1e2e38:	e58d0008 	str	r0, [sp, #8]
        1e2e3c:	e1a0100d 	mov	r1, sp
        1e2e40:	e5940304 	ldr	r0, [r4, #772]	; fField772
        1e2e44:	eb068790 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
        1e2e48:	e5dd000e 	ldrb	r0, [sp, #14]
        1e2e4c:	e2100001 	ands	r0, r0, #1	; 0x1
        1e2e50:	13a00001 	movne	r0, #1	; 0x1
        1e2e54:	e5c404b2 	strb	r0, [r4, #1202]	; fField1202
        1e2e58:	e1a00004 	mov	r0, r4
        1e2e5c:	e3a01006 	mov	r1, #6	; 0x6
        1e2e60:	eb60f46b 	bl	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
        1e2e64:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::CheckBufferForValidInput(void)
 * Address: 001e2e68
 */
TSniffIRTool::CheckBufferForValidInput(void) {
    /*
        1e2e68:	e1a0c00d 	mov	ip, sp
        1e2e6c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1e2e70:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2e74:	e5d014b2 	ldrb	r1, [r0, #1202]	; fField1202
        1e2e78:	e3310000 	teq	r1, #0	; 0x0
        1e2e7c:	0a000001 	beq	1e2e88 <TSniffIRTool::CheckBufferForValidInput(void)+0x20>
        1e2e80:	eb61575f 	bl	1a38c04 <TSniffIRTool::$CheckBufferForIrDAData(void)>
        1e2e84:	ea000000 	b	1e2e8c <TSniffIRTool::CheckBufferForValidInput(void)+0x24>
        1e2e88:	eb61575e 	bl	1a38c08 <TSniffIRTool::$CheckBufferForSharpData(void)>
        1e2e8c:	e20000ff 	and	r0, r0, #255	; 0xff
        1e2e90:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::CheckBufferForIrDAData(void)
 * Address: 001e2e94
 */
TSniffIRTool::CheckBufferForIrDAData(void) {
    /*
        1e2e94:	e1a0c00d 	mov	ip, sp
        1e2e98:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e2e9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2ea0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e2ea4:	e3a05000 	mov	r5, #0	; 0x0
        1e2ea8:	e3a04000 	mov	r4, #0	; 0x0
        1e2eac:	e2806feb 	add	r6, r0, #940	; 0x3ac
        1e2eb0:	e1a00006 	mov	r0, r6
        1e2eb4:	e1a0200d 	mov	r2, sp
        1e2eb8:	e28d1004 	add	r1, sp, #4	; 0x4
        1e2ebc:	eb688d2a 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e2ec0:	e3300000 	teq	r0, #0	; 0x0
        1e2ec4:	1a000016 	bne	1e2f24 <TSniffIRTool::CheckBufferForIrDAData(void)+0x90>
        1e2ec8:	e3340000 	teq	r4, #0	; 0x0
        1e2ecc:	0a00000a 	beq	1e2efc <TSniffIRTool::CheckBufferForIrDAData(void)+0x68>
        1e2ed0:	e3340001 	teq	r4, #1	; 0x1
        1e2ed4:	0a00000c 	beq	1e2f0c <TSniffIRTool::CheckBufferForIrDAData(void)+0x78>
        1e2ed8:	e3340002 	teq	r4, #2	; 0x2
        1e2edc:	1a000012 	bne	1e2f2c <TSniffIRTool::CheckBufferForIrDAData(void)+0x98>
        1e2ee0:	e5dd0004 	ldrb	r0, [sp, #4]
        1e2ee4:	e330003f 	teq	r0, #63	; 0x3f
        1e2ee8:	15dd0004 	ldrneb	r0, [sp, #4]
        1e2eec:	133000f3 	teqne	r0, #243	; 0xf3
        1e2ef0:	03a05001 	moveq	r5, #1	; 0x1
        1e2ef4:	0a00000e 	beq	1e2f34 <TSniffIRTool::CheckBufferForIrDAData(void)+0xa0>
        1e2ef8:	ea000007 	b	1e2f1c <TSniffIRTool::CheckBufferForIrDAData(void)+0x88>
        1e2efc:	e5dd0004 	ldrb	r0, [sp, #4]
        1e2f00:	e33000c0 	teq	r0, #192	; 0xc0
        1e2f04:	03a04001 	moveq	r4, #1	; 0x1
        1e2f08:	ea000007 	b	1e2f2c <TSniffIRTool::CheckBufferForIrDAData(void)+0x98>
        1e2f0c:	e5dd0004 	ldrb	r0, [sp, #4]
        1e2f10:	e33000ff 	teq	r0, #255	; 0xff
        1e2f14:	03a04002 	moveq	r4, #2	; 0x2
        1e2f18:	0a000003 	beq	1e2f2c <TSniffIRTool::CheckBufferForIrDAData(void)+0x98>
        1e2f1c:	e3a04000 	mov	r4, #0	; 0x0
        1e2f20:	ea000001 	b	1e2f2c <TSniffIRTool::CheckBufferForIrDAData(void)+0x98>
        1e2f24:	e3300002 	teq	r0, #2	; 0x2
        1e2f28:	0a000001 	beq	1e2f34 <TSniffIRTool::CheckBufferForIrDAData(void)+0xa0>
        1e2f2c:	e3350000 	teq	r5, #0	; 0x0
        1e2f30:	0affffde 	beq	1e2eb0 <TSniffIRTool::CheckBufferForIrDAData(void)+0x1c>
        1e2f34:	e1a00005 	mov	r0, r5
        1e2f38:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::CheckBufferForSharpData(void)
 * Address: 001e2f3c
 */
TSniffIRTool::CheckBufferForSharpData(void) {
    /*
        1e2f3c:	e1a0c00d 	mov	ip, sp
        1e2f40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e2f44:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e2f48:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e2f4c:	e3a05000 	mov	r5, #0	; 0x0
        1e2f50:	e3a04000 	mov	r4, #0	; 0x0
        1e2f54:	e2806feb 	add	r6, r0, #940	; 0x3ac
        1e2f58:	e1a00006 	mov	r0, r6
        1e2f5c:	e1a0200d 	mov	r2, sp
        1e2f60:	e28d1004 	add	r1, sp, #4	; 0x4
        1e2f64:	eb688d00 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
        1e2f68:	e3300000 	teq	r0, #0	; 0x0
        1e2f6c:	0a000004 	beq	1e2f84 <TSniffIRTool::CheckBufferForSharpData(void)+0x48>
        1e2f70:	e3300001 	teq	r0, #1	; 0x1
        1e2f74:	1a00001d 	bne	1e2ff0 <TSniffIRTool::CheckBufferForSharpData(void)+0xb4>
        1e2f78:	e59d1000 	ldr	r1, [sp]
        1e2f7c:	e3310040 	teq	r1, #64	; 0x40
        1e2f80:	1a00001c 	bne	1e2ff8 <TSniffIRTool::CheckBufferForSharpData(void)+0xbc>
        1e2f84:	e3340000 	teq	r4, #0	; 0x0
        1e2f88:	0a000008 	beq	1e2fb0 <TSniffIRTool::CheckBufferForSharpData(void)+0x74>
        1e2f8c:	e3340001 	teq	r4, #1	; 0x1
        1e2f90:	0a00000e 	beq	1e2fd0 <TSniffIRTool::CheckBufferForSharpData(void)+0x94>
        1e2f94:	e3340002 	teq	r4, #2	; 0x2
        1e2f98:	1a000014 	bne	1e2ff0 <TSniffIRTool::CheckBufferForSharpData(void)+0xb4>
        1e2f9c:	e5dd1004 	ldrb	r1, [sp, #4]
        1e2fa0:	e3310005 	teq	r1, #5	; 0x5
        1e2fa4:	1a000010 	bne	1e2fec <TSniffIRTool::CheckBufferForSharpData(void)+0xb0>
        1e2fa8:	e3a05001 	mov	r5, #1	; 0x1
        1e2fac:	ea00000f 	b	1e2ff0 <TSniffIRTool::CheckBufferForSharpData(void)+0xb4>
        1e2fb0:	e5dd1004 	ldrb	r1, [sp, #4]
        1e2fb4:	e3310096 	teq	r1, #150	; 0x96
        1e2fb8:	15dd1004 	ldrneb	r1, [sp, #4]
        1e2fbc:	1331009b 	teqne	r1, #155	; 0x9b
        1e2fc0:	15dd1004 	ldrneb	r1, [sp, #4]
        1e2fc4:	13310090 	teqne	r1, #144	; 0x90
        1e2fc8:	03a04001 	moveq	r4, #1	; 0x1
        1e2fcc:	ea000007 	b	1e2ff0 <TSniffIRTool::CheckBufferForSharpData(void)+0xb4>
        1e2fd0:	e5dd1004 	ldrb	r1, [sp, #4]
        1e2fd4:	e3310085 	teq	r1, #133	; 0x85
        1e2fd8:	0afffff2 	beq	1e2fa8 <TSniffIRTool::CheckBufferForSharpData(void)+0x6c>
        1e2fdc:	e5dd1004 	ldrb	r1, [sp, #4]
        1e2fe0:	e3310082 	teq	r1, #130	; 0x82
        1e2fe4:	03a04002 	moveq	r4, #2	; 0x2
        1e2fe8:	0a000000 	beq	1e2ff0 <TSniffIRTool::CheckBufferForSharpData(void)+0xb4>
        1e2fec:	e3a04000 	mov	r4, #0	; 0x0
        1e2ff0:	e3300002 	teq	r0, #2	; 0x2
        1e2ff4:	0a000001 	beq	1e3000 <TSniffIRTool::CheckBufferForSharpData(void)+0xc4>
        1e2ff8:	e3350000 	teq	r5, #0	; 0x0
        1e2ffc:	0affffd5 	beq	1e2f58 <TSniffIRTool::CheckBufferForSharpData(void)+0x1c>
        1e3000:	e1a00005 	mov	r0, r5
        1e3004:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)
 * Address: 001e3008
 */
TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent) {
    /*
        1e3008:	e1a0c00d 	mov	ip, sp
        1e300c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e3010:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3014:	e1a04000 	mov	r4, r0
        1e3018:	e3a06003 	mov	r6, #3	; 0x3
        1e301c:	e59f5044 	ldr	r5, [pc, #44]	; 1e3068 <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0x60>
        1e3020:	e3510006 	cmp	r1, #6	; 0x6
        1e3024:	908ff101 	addls	pc, pc, r1, lsl #2
        1e3028:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e302c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e3030:	ea00000d 	b	1e306c <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0x64>
        1e3034:	ea00001b 	b	1e30a8 <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0xa0>
        1e3038:	ea000028 	b	1e30e0 <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0xd8>
        1e303c:	ea000027 	b	1e30e0 <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0xd8>
        1e3040:	ea000034 	b	1e3118 <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0x110>
        1e3044:	e1a00004 	mov	r0, r4
        1e3048:	eb6156ec 	bl	1a38c00 <TSniffIRTool::$CheckBufferForValidInput(void)>
        1e304c:	e3300000 	teq	r0, #0	; 0x0
        1e3050:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1e3054:	e1a00004 	mov	r0, r4
        1e3058:	eb60f820 	bl	1a210e0 <TSniffIRTool::$SniffStop(void)>
        1e305c:	e1a00004 	mov	r0, r4
        1e3060:	eb60f3ec 	bl	1a20018 <TSniffIRTool::$NotifyUser(void)>
        1e3064:	ea000026 	b	1e3104 <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0xfc>
        1e3068:	00707ce0 	rsbeqs	r7, r0, r0, ror #25
        1e306c:	e5d404b0 	ldrb	r0, [r4, #1200]	; fField1200
        1e3070:	e3300000 	teq	r0, #0	; 0x0
        1e3074:	15d404b1 	ldrneb	r0, [r4, #1201]	; fField1201
        1e3078:	13300000 	teqne	r0, #0	; 0x0
        1e307c:	15d404c4 	ldrneb	r0, [r4, #1220]	; fField1220
        1e3080:	13300000 	teqne	r0, #0	; 0x0
        1e3084:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1e3088:	e5d401d2 	ldrb	r0, [r4, #466]	; fField466
        1e308c:	e3300000 	teq	r0, #0	; 0x0
        1e3090:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1e3094:	e3a00001 	mov	r0, #1	; 0x1
        1e3098:	e58404b4 	str	r0, [r4, #1204]	; fField1204
        1e309c:	e1a00004 	mov	r0, r4
        1e30a0:	e3a01003 	mov	r1, #3	; 0x3
        1e30a4:	ea00001d 	b	1e3120 <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0x118>
        1e30a8:	e59404b4 	ldr	r0, [r4, #1204]	; fField1204
        1e30ac:	e3300002 	teq	r0, #2	; 0x2
        1e30b0:	13300003 	teqne	r0, #3	; 0x3
        1e30b4:	1a000003 	bne	1e30c8 <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0xc0>
        1e30b8:	e1a00004 	mov	r0, r4
        1e30bc:	eb6152cd 	bl	1a37bf8 <TSniffIRTool::$StopReceive(void)>
        1e30c0:	e1a00004 	mov	r0, r4
        1e30c4:	ebff590b 	bl	1b94f8 <TSerTool::KillWakeUp(void)>
        1e30c8:	e5d4028e 	ldrb	r0, [r4, #654]	; fField654
        1e30cc:	e3300000 	teq	r0, #0	; 0x0
        1e30d0:	11a00004 	movne	r0, r4
        1e30d4:	1b60f801 	blne	1a210e0 <TSniffIRTool::$SniffStop(void)>
        1e30d8:	e3a00000 	mov	r0, #0	; 0x0
        1e30dc:	ea000006 	b	1e30fc <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0xf4>
        1e30e0:	e1a00004 	mov	r0, r4
        1e30e4:	eb60f7fc 	bl	1a210dc <TSniffIRTool::$SniffStart(void)>
        1e30e8:	e3300000 	teq	r0, #0	; 0x0
        1e30ec:	1a000004 	bne	1e3104 <TSniffIRTool::NextState(TSniffIRTool::IRSniffEvent)+0xfc>
        1e30f0:	e1a00004 	mov	r0, r4
        1e30f4:	eb6152be 	bl	1a37bf4 <TSniffIRTool::$StartReceive(void)>
        1e30f8:	e3a00002 	mov	r0, #2	; 0x2
        1e30fc:	e5a404b4 	str	r0, [r4, #1204]!	; fField1204
        1e3100:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e3104:	e58464b4 	str	r6, [r4, #1204]	; fField1204
        1e3108:	e1a00004 	mov	r0, r4
        1e310c:	e1a01005 	mov	r1, r5
        1e3110:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e3114:	ea60d6d7 	b	1a18c78 <TSerTool::$SendWakeUp(unsigned long)>
        1e3118:	e1a00004 	mov	r0, r4
        1e311c:	e3a01004 	mov	r1, #4	; 0x4
        1e3120:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1e3124:	ea60f3ba 	b	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
    */
}

/**
 * Symbol: TSniffIRTool::ListenStart(void)
 * Address: 001e3128
 */
TSniffIRTool::ListenStart(void) {
    /*
        1e3128:	e1a0c00d 	mov	ip, sp
        1e312c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e3130:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3134:	e1a04000 	mov	r4, r0
        1e3138:	e3a00001 	mov	r0, #1	; 0x1
        1e313c:	e5c404b1 	strb	r0, [r4, #1201]	; fField1201
        1e3140:	e1a00004 	mov	r0, r4
        1e3144:	e3a01001 	mov	r1, #1	; 0x1
        1e3148:	eb60f3b1 	bl	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
        1e314c:	e1a00004 	mov	r0, r4
        1e3150:	e3a01000 	mov	r1, #0	; 0x0
        1e3154:	e5942000 	ldr	r2, [r4]
        1e3158:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e315c:	e282f05c 	add	pc, r2, #92	; 0x5c
    */
}

/**
 * Symbol: TSniffIRTool::ConnectStart(void)
 * Address: 001e3160
 */
TSniffIRTool::ConnectStart(void) {
    /*
        1e3160:	e1a0c00d 	mov	ip, sp
        1e3164:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e3168:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e316c:	e1a04000 	mov	r4, r0
        1e3170:	e3a00001 	mov	r0, #1	; 0x1
        1e3174:	e5c404b1 	strb	r0, [r4, #1201]	; fField1201
        1e3178:	e1a00004 	mov	r0, r4
        1e317c:	e3a01001 	mov	r1, #1	; 0x1
        1e3180:	eb60f3a3 	bl	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
        1e3184:	e1a00004 	mov	r0, r4
        1e3188:	e3a01000 	mov	r1, #0	; 0x0
        1e318c:	e5942000 	ldr	r2, [r4]
        1e3190:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e3194:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TSniffIRTool::TerminateComplete(void)
 * Address: 001e3198
 */
TSniffIRTool::TerminateComplete(void) {
    /*
        1e3198:	e1a0c00d 	mov	ip, sp
        1e319c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e31a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e31a4:	e1a04000 	mov	r4, r0
        1e31a8:	e3a00000 	mov	r0, #0	; 0x0
        1e31ac:	e5c404b1 	strb	r0, [r4, #1201]	; fField1201
        1e31b0:	e1a00004 	mov	r0, r4
        1e31b4:	e3a01002 	mov	r1, #2	; 0x2
        1e31b8:	eb60f395 	bl	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
        1e31bc:	e1a00004 	mov	r0, r4
        1e31c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1e31c4:	ea60e2fb 	b	1a1bdb8 <TSerTool::$TerminateComplete(void)>
    */
}

/**
 * Symbol: TSniffIRTool::TaskConstructor(void)
 * Address: 001e31c8
 */
TSniffIRTool::TaskConstructor(void) {
    /*
        1e31c8:	e1a0c00d 	mov	ip, sp
        1e31cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e31d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e31d4:	e1a04000 	mov	r4, r0
        1e31d8:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1e31dc:	e3800001 	orr	r0, r0, #1	; 0x1
        1e31e0:	e584026c 	str	r0, [r4, #620]	; fField620
        1e31e4:	e1a00004 	mov	r0, r4
        1e31e8:	eb60dedf 	bl	1a1ad6c <TAsyncSerTool::$TaskConstructor(void)>
        1e31ec:	e3300000 	teq	r0, #0	; 0x0
        1e31f0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1e31f4:	e3a01002 	mov	r1, #2	; 0x2
        1e31f8:	e5841300 	str	r1, [r4, #768]	; fField768
        1e31fc:	e3a01001 	mov	r1, #1	; 0x1
        1e3200:	e5c411d0 	strb	r1, [r4, #464]	; fField464
        1e3204:	e5c411d1 	strb	r1, [r4, #465]	; fField465
        1e3208:	e3a020fe 	mov	r2, #254	; 0xfe
        1e320c:	e2822c47 	add	r2, r2, #18176	; 0x4700
        1e3210:	e584247c 	str	r2, [r4, #1148]	; fField1148
        1e3214:	e5c414b0 	strb	r1, [r4, #1200]	; fField1200
        1e3218:	e3a01000 	mov	r1, #0	; 0x0
        1e321c:	e5c414b1 	strb	r1, [r4, #1201]	; fField1201
        1e3220:	e5a414b4 	str	r1, [r4, #1204]!	; fField1204
        1e3224:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::SniffStart(void)
 * Address: 001e3228
 */
TSniffIRTool::SniffStart(void) {
    /*
        1e3228:	e5901000 	ldr	r1, [r0]
        1e322c:	e281fe15 	add	pc, r1, #336	; 0x150
    */
}

/**
 * Symbol: TSniffIRTool::SniffStop(void)
 * Address: 001e3230
 */
TSniffIRTool::SniffStop(void) {
    /*
        1e3230:	e1a0c00d 	mov	ip, sp
        1e3234:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e3238:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e323c:	e1a04000 	mov	r4, r0
        1e3240:	e5d0528c 	ldrb	r5, [r0, #652]	; fField652
        1e3244:	e3a00000 	mov	r0, #0	; 0x0
        1e3248:	e5c4028c 	strb	r0, [r4, #652]	; fField652
        1e324c:	e1a00004 	mov	r0, r4
        1e3250:	e5941000 	ldr	r1, [r4]
        1e3254:	e1a0e00f 	mov	lr, pc
        1e3258:	e281fd05 	add	pc, r1, #320	; 0x140
        1e325c:	e1a00004 	mov	r0, r4
        1e3260:	e5941000 	ldr	r1, [r4]
        1e3264:	e1a0e00f 	mov	lr, pc
        1e3268:	e281ff51 	add	pc, r1, #324	; 0x144
        1e326c:	e5c4528c 	strb	r5, [r4, #652]	; fField652
        1e3270:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::AddDefaultOptions(TOptionArray *)
 * Address: 001e3274
 */
TSniffIRTool::AddDefaultOptions(TOptionArray *) {
    /*
        1e3274:	e1a0c00d 	mov	ip, sp
        1e3278:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e327c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3280:	e1a05000 	mov	r5, r0
        1e3284:	e1a04001 	mov	r4, r1
        1e3288:	e24dd010 	sub	sp, sp, #16	; 0x10
        1e328c:	e1a0000d 	mov	r0, sp
        1e3290:	eb6762c6 	bl	1bbbdb0 <TCMOSlowIRSniff::$__ct(void)>
        1e3294:	e1a0200d 	mov	r2, sp
        1e3298:	e5941000 	ldr	r1, [r4]
        1e329c:	e1a00004 	mov	r0, r4
        1e32a0:	eb675a7f 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1e32a4:	e3300000 	teq	r0, #0	; 0x0
        1e32a8:	01a01004 	moveq	r1, r4
        1e32ac:	01a00005 	moveq	r0, r5
        1e32b0:	0b60a0b7 	bleq	1a0b594 <TAsyncSerTool::$AddDefaultOptions(TOptionArray *)>
        1e32b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::AddCurrentOptions(TOptionArray *)
 * Address: 001e32b8
 */
TSniffIRTool::AddCurrentOptions(TOptionArray *) {
    /*
        1e32b8:	e1a0c00d 	mov	ip, sp
        1e32bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e32c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e32c4:	e1a05000 	mov	r5, r0
        1e32c8:	e1a04001 	mov	r4, r1
        1e32cc:	e28020b8 	add	r2, r0, #184	; 0xb8
        1e32d0:	e2822b01 	add	r2, r2, #1024	; 0x400
        1e32d4:	e5911000 	ldr	r1, [r1]
        1e32d8:	e1a00004 	mov	r0, r4
        1e32dc:	eb675a70 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1e32e0:	e3300000 	teq	r0, #0	; 0x0
        1e32e4:	01a01004 	moveq	r1, r4
        1e32e8:	01a00005 	moveq	r0, r5
        1e32ec:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1e32f0:	0a60a0a3 	beq	1a0b584 <TAsyncSerTool::$AddCurrentOptions(TOptionArray *)>
        1e32f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 001e32f8
 */
TSniffIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        1e32f8:	e1a0c00d 	mov	ip, sp
        1e32fc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e3300:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3304:	e1a05000 	mov	r5, r0
        1e3308:	e1a04001 	mov	r4, r1
        1e330c:	e3a06000 	mov	r6, #0	; 0x0
        1e3310:	e59fc054 	ldr	ip, [pc, #54]	; 1e336c <TSniffIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x74>
        1e3314:	e132000c 	teq	r2, ip
        1e3318:	11a01004 	movne	r1, r4
        1e331c:	11a00005 	movne	r0, r5
        1e3320:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        1e3324:	1a60f349 	bne	1a20050 <TAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
        1e3328:	e28510b8 	add	r1, r5, #184	; 0xb8
        1e332c:	e2811b01 	add	r1, r1, #1024	; 0x400
        1e3330:	e3330c01 	teq	r3, #256	; 0x100
        1e3334:	13330c02 	teqne	r3, #512	; 0x200
        1e3338:	1a00000c 	bne	1e3370 <TSniffIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x78>
        1e333c:	e1a00004 	mov	r0, r4
        1e3340:	eb675222 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e3344:	e5940008 	ldr	r0, [r4, #8]
        1e3348:	e3c000ff 	bic	r0, r0, #255	; 0xff
        1e334c:	e5a40008 	str	r0, [r4, #8]!
        1e3350:	e5d504c4 	ldrb	r0, [r5, #1220]	; fField1220
        1e3354:	e3300000 	teq	r0, #0	; 0x0
        1e3358:	e1a00005 	mov	r0, r5
        1e335c:	03a01002 	moveq	r1, #2	; 0x2
        1e3360:	13a01001 	movne	r1, #1	; 0x1
        1e3364:	eb60f32a 	bl	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
        1e3368:	ea00000c 	b	1e33a0 <TSniffIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa8>
        1e336c:	6972736e 	ldmvsdb	r2!, {r1, r2, r3, r5, r6, r8, r9, ip, sp, lr}^
        1e3370:	e3330c03 	teq	r3, #768	; 0x300
        1e3374:	1a000007 	bne	1e3398 <TSniffIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa0>
        1e3378:	e24dd010 	sub	sp, sp, #16	; 0x10
        1e337c:	e1a0000d 	mov	r0, sp
        1e3380:	eb67628a 	bl	1bbbdb0 <TCMOSlowIRSniff::$__ct(void)>
        1e3384:	e1a0100d 	mov	r1, sp
        1e3388:	e1a00004 	mov	r0, r4
        1e338c:	eb67520f 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e3390:	e28dd010 	add	sp, sp, #16	; 0x10
        1e3394:	ea000001 	b	1e33a0 <TSniffIRTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa8>
        1e3398:	e1a00004 	mov	r0, r4
        1e339c:	eb67520b 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1e33a0:	e1a00006 	mov	r0, r6
        1e33a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::NotifyUser(void)
 * Address: 001e33a8
 */
TSniffIRTool::NotifyUser(void) {
    /*
        1e33a8:	e1a0c00d 	mov	ip, sp
        1e33ac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1e33b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e33b4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1e33b8:	e1a0000d 	mov	r0, sp
        1e33bc:	eb68039d 	bl	1be4238 <TAEvent::$__ct(void)>
        1e33c0:	e59f0054 	ldr	r0, [pc, #54]	; 1e341c <TSniffIRTool::NotifyUser(void)+0x74>
        1e33c4:	e58d0000 	str	r0, [sp]
        1e33c8:	e59f0050 	ldr	r0, [pc, #50]	; 1e3420 <TSniffIRTool::NotifyUser(void)+0x78>
        1e33cc:	e58d0004 	str	r0, [sp, #4]
        1e33d0:	e59f004c 	ldr	r0, [pc, #4c]	; 1e3424 <TSniffIRTool::NotifyUser(void)+0x7c>
        1e33d4:	e58d0008 	str	r0, [sp, #8]
        1e33d8:	e59f0048 	ldr	r0, [pc, #48]	; 1e3428 <TSniffIRTool::NotifyUser(void)+0x80>
        1e33dc:	e3a0e000 	mov	lr, #0	; 0x0
        1e33e0:	e3a01000 	mov	r1, #0	; 0x0
        1e33e4:	e3a03000 	mov	r3, #0	; 0x0
        1e33e8:	e1a02001 	mov	r2, r1
        1e33ec:	e590c000 	ldr	ip, [r0]
        1e33f0:	e3a00000 	mov	r0, #0	; 0x0
        1e33f4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e33f8:	e1a0300e 	mov	r3, lr
        1e33fc:	e3a0200c 	mov	r2, #12	; 0xc
        1e3400:	e92d000c 	stmdb	sp!, {r2, r3}
        1e3404:	e28d3018 	add	r3, sp, #24	; 0x18
        1e3408:	e1a0000c 	mov	r0, ip
        1e340c:	e3a02000 	mov	r2, #0	; 0x0
        1e3410:	e3a01001 	mov	r1, #1	; 0x1
        1e3414:	eb67de4b 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        1e3418:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1e341c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1e3420:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        1e3424:	69724d43 	ldmvsdb	r2!, {r0, r1, r6, r8, sl, fp, lr}^
        1e3428:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

/**
 * Symbol: TSniffIRTool::TaskDestructor(void)
 * Address: 001e342c
 */
TSniffIRTool::TaskDestructor(void) {
    /*
        1e342c:	ea60e256 	b	1a1bd8c <TAsyncSerTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TSniffIRTool::GetSizeOf(void)
 * Address: 001e3430
 */
TSniffIRTool::GetSizeOf(void) {
    /*
        1e3430:	e3a000c8 	mov	r0, #200	; 0xc8
        1e3434:	e2800b01 	add	r0, r0, #1024	; 0x400
        1e3438:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSniffIRTool::AllocateBuffers(void)
 * Address: 001e343c
 */
TSniffIRTool::AllocateBuffers(void) {
    /*
        1e343c:	e3a01001 	mov	r1, #1	; 0x1
        1e3440:	e5c01480 	strb	r1, [r0, #1152]	; fField1152
        1e3444:	e5c01481 	strb	r1, [r0, #1153]	; fField1153
        1e3448:	e3a01040 	mov	r1, #64	; 0x40
        1e344c:	e58013e4 	str	r1, [r0, #996]	; fField996
        1e3450:	e58013e0 	str	r1, [r0, #992]	; fField992
        1e3454:	ea60a058 	b	1a0b5bc <TAsyncSerTool::$AllocateBuffers(void)>
    */
}

/**
 * Symbol: TSniffIRTool::SetIOParms(TCMOSerialIOParms *)
 * Address: 001e3458
 */
TSniffIRTool::SetIOParms(TCMOSerialIOParms *) {
    /*
        1e3458:	e1a0c00d 	mov	ip, sp
        1e345c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e3460:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3464:	e1a04000 	mov	r4, r0
        1e3468:	e24dd010 	sub	sp, sp, #16	; 0x10
        1e346c:	e1a0000d 	mov	r0, sp
        1e3470:	ebfc0b46 	bl	e6190 <THMOSerIRLinkConfig::__ct(void)>
        1e3474:	e59d0008 	ldr	r0, [sp, #8]
        1e3478:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        1e347c:	e3800c02 	orr	r0, r0, #512	; 0x200
        1e3480:	e58d0008 	str	r0, [sp, #8]
        1e3484:	e3a00002 	mov	r0, #2	; 0x2
        1e3488:	e5cd000c 	strb	r0, [sp, #12]
        1e348c:	e3a00001 	mov	r0, #1	; 0x1
        1e3490:	e5cd000d 	strb	r0, [sp, #13]
        1e3494:	e1a0100d 	mov	r1, sp
        1e3498:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
        1e349c:	eb0685fa 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
        1e34a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSniffIRTool::PowerOnEvent(unsigned long)
 * Address: 001e34a4
 */
TSniffIRTool::PowerOnEvent(unsigned long) {
    /*
        1e34a4:	e3a01001 	mov	r1, #1	; 0x1
        1e34a8:	e5c014b0 	strb	r1, [r0, #1200]	; fField1200
        1e34ac:	ea60f2d8 	b	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
    */
}

/**
 * Symbol: TSniffIRTool::PowerOffEvent(unsigned long)
 * Address: 001e34b0
 */
TSniffIRTool::PowerOffEvent(unsigned long) {
    /*
        1e34b0:	e3a01000 	mov	r1, #0	; 0x0
        1e34b4:	e5c014b0 	strb	r1, [r0, #1200]	; fField1200
        1e34b8:	e3a01002 	mov	r1, #2	; 0x2
        1e34bc:	ea60f2d4 	b	1a20014 <TSniffIRTool::$NextState(TSniffIRTool::IRSniffEvent)>
    */
}

