#include "include/TTestAgent.h"

/**
 * Symbol: TTestAgent::ForkConstructor(TForkWorld *)
 * Address: 00226a40
 */
TTestAgent::ForkConstructor(TForkWorld *) {
    /*
        226a40:	e1a0c00d 	mov	ip, sp
        226a44:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        226a48:	e24cb004 	sub	fp, ip, #4	; 0x4
        226a4c:	e1a04000 	mov	r4, r0
        226a50:	e1a05001 	mov	r5, r1
        226a54:	eb661b0f 	bl	1bad698 <TAppWorld::$ForkConstructor(TForkWorld *)>
        226a58:	e3300000 	teq	r0, #0	; 0x0
        226a5c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        226a60:	e5951094 	ldr	r1, [r5, #148]	; fField148
        226a64:	e5a14014 	str	r4, [r1, #20]!
        226a68:	e3a01000 	mov	r1, #0	; 0x0
        226a6c:	e5841170 	str	r1, [r4, #368]	; fField368
        226a70:	e5a54170 	str	r4, [r5, #368]!	; fField368
        226a74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTestAgent::Setup(char *, char *)
 * Address: 00226a78
 */
TTestAgent::Setup(char *, char *) {
    /*
        226a78:	e1a0c00d 	mov	ip, sp
        226a7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        226a80:	e24cb004 	sub	fp, ip, #4	; 0x4
        226a84:	e1a04000 	mov	r4, r0
        226a88:	e1a06001 	mov	r6, r1
        226a8c:	e1a05002 	mov	r5, r2
        226a90:	e24dd054 	sub	sp, sp, #84	; 0x54
        226a94:	e28d0044 	add	r0, sp, #68	; 0x44
        226a98:	eb669afa 	bl	1bcd688 <TUNameServer::$__ct(void)>
        226a9c:	e1a0100d 	mov	r1, sp
        226aa0:	e28f0f34 	add	r0, pc, #208	; 0xd0
        226aa4:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        226aa8:	e3a02001 	mov	r2, #1	; 0x1
        226aac:	eb670234 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        226ab0:	e1a0300d 	mov	r3, sp
        226ab4:	e3a02000 	mov	r2, #0	; 0x0
        226ab8:	e3a01001 	mov	r1, #1	; 0x1
        226abc:	e3a00000 	mov	r0, #0	; 0x0
        226ac0:	ebff8ae3 	bl	209654 <TCommServer::__ct(unsigned char, unsigned char, unsigned char *)>
        226ac4:	e1a02005 	mov	r2, r5
        226ac8:	e1a01006 	mov	r1, r6
        226acc:	e58400a4 	str	r0, [r4, #164]	; fField164
        226ad0:	eb6575cd 	bl	1b8420c <TCommServer::$SetTestServerName(char *, char *)>
        226ad4:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        226ad8:	e3300000 	teq	r0, #0	; 0x0
        226adc:	03e05000 	mvneq	r5, #0	; 0x0
        226ae0:	0a00001d 	beq	226b5c <TTestAgent::Setup(char *, char *)+0xe4>
        226ae4:	e3a01001 	mov	r1, #1	; 0x1
        226ae8:	ebff8be4 	bl	209a80 <TCommServer::SetBusy(unsigned char)>
        226aec:	e28410a8 	add	r1, r4, #168	; 0xa8
        226af0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        226af4:	eb656d97 	bl	1b82158 <TCommServer::$ConnectToTestServer(TEzEndpointPipe **)>
        226af8:	e3300000 	teq	r0, #0	; 0x0
        226afc:	13e05002 	mvnne	r5, #2	; 0x2
        226b00:	1a00000f 	bne	226b44 <TTestAgent::Setup(char *, char *)+0xcc>
        226b04:	e24dd004 	sub	sp, sp, #4	; 0x4
        226b08:	e3a00001 	mov	r0, #1	; 0x1
        226b0c:	e5840080 	str	r0, [r4, #128]	; fField128
        226b10:	e3a02001 	mov	r2, #1	; 0x1
        226b14:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        226b18:	e59f1068 	ldr	r1, [pc, #68]	; 226b88 <TTestAgent::Setup(char *, char *)+0x110>
        226b1c:	eb6575b8 	bl	1b84204 <TCommServer::$SendCommandHeader(unsigned long, unsigned char)>
        226b20:	e1a0100d 	mov	r1, sp
        226b24:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        226b28:	eb6571a3 	bl	1b831bc <TCommServer::$GetResponse(long *)>
        226b2c:	e1a01000 	mov	r1, r0
        226b30:	e1a00004 	mov	r0, r4
        226b34:	e59d2000 	ldr	r2, [sp]
        226b38:	eb6571ac 	bl	1b831f0 <TTestAgent::$ProcessTestServerCommand(unsigned long, long)>
        226b3c:	e1a05000 	mov	r5, r0
        226b40:	e28dd004 	add	sp, sp, #4	; 0x4
        226b44:	e5b400a4 	ldr	r0, [r4, #164]!	; fField164
        226b48:	e3300000 	teq	r0, #0	; 0x0
        226b4c:	13a01000 	movne	r1, #0	; 0x0
        226b50:	1bff8bca 	blne	209a80 <TCommServer::SetBusy(unsigned char)>
        226b54:	e3350000 	teq	r5, #0	; 0x0
        226b58:	0a000001 	beq	226b64 <TTestAgent::Setup(char *, char *)+0xec>
        226b5c:	e59f0028 	ldr	r0, [pc, #28]	; 226b8c <TTestAgent::Setup(char *, char *)+0x114>
        226b60:	eb67339d 	bl	1bf39dc <$CloseAppleTalk(unsigned long)>
        226b64:	e28d0044 	add	r0, sp, #68	; 0x44
        226b68:	e3a01000 	mov	r1, #0	; 0x0
        226b6c:	eb669ee4 	bl	1bce704 <TUNameServer::$__dt(void)>
        226b70:	e1a00005 	mov	r0, r5
        226b74:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        226b78:	4e657774 	mcrmi	7, 3, r7, cr5, cr4, {3}
        226b7c:	54657374 	strplbt	r7, [r5], -#884	; fField884
        226b80:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        226b84:	65720000 	ldrvsb	r0, [r2]!
        226b88:	72657164 	rsbvc	r7, r5, #25	; 0x19
        226b8c:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
    */
}

/**
 * Symbol: TTestAgent::StartCTestCase(void)
 * Address: 00226b90
 */
TTestAgent::StartCTestCase(void) {
    /*
        226b90:	e1a0c00d 	mov	ip, sp
        226b94:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        226b98:	e24cb004 	sub	fp, ip, #4	; 0x4
        226b9c:	e1a04000 	mov	r4, r0
        226ba0:	e24dd020 	sub	sp, sp, #32	; 0x20
        226ba4:	e28d0010 	add	r0, sp, #16	; 0x10
        226ba8:	eb669ab6 	bl	1bcd688 <TUNameServer::$__ct(void)>
        226bac:	e3a06000 	mov	r6, #0	; 0x0
        226bb0:	e5cd6004 	strb	r6, [sp, #4]
        226bb4:	e58d6000 	str	r6, [sp]
        226bb8:	e5940090 	ldr	r0, [r4, #144]	; fField144
        226bbc:	e5900038 	ldr	r0, [r0, #56]
        226bc0:	e584008c 	str	r0, [r4, #140]	; fField140
        226bc4:	e5d4016f 	ldrb	r0, [r4, #367]	; fField367
        226bc8:	e59f7094 	ldr	r7, [pc, #94]	; 226c64 <TTestAgent::StartCTestCase(void)+0xd4>
        226bcc:	e3300000 	teq	r0, #0	; 0x0
        226bd0:	0a000025 	beq	226c6c <TTestAgent::StartCTestCase(void)+0xdc>
        226bd4:	e24dd0f4 	sub	sp, sp, #244	; 0xf4
        226bd8:	e1a0000d 	mov	r0, sp
        226bdc:	eb66f595 	bl	1be4238 <TAEvent::$__ct(void)>
        226be0:	e58d7000 	str	r7, [sp]
        226be4:	e59f007c 	ldr	r0, [pc, #7c]	; 226c68 <TTestAgent::StartCTestCase(void)+0xd8>
        226be8:	e58d0004 	str	r0, [sp, #4]
        226bec:	e3a00003 	mov	r0, #3	; 0x3
        226bf0:	e58d0008 	str	r0, [sp, #8]
        226bf4:	e594008c 	ldr	r0, [r4, #140]	; fField140
        226bf8:	e58d0010 	str	r0, [sp, #16]
        226bfc:	e594009c 	ldr	r0, [r4, #156]	; fField156
        226c00:	e2801020 	add	r1, r0, #32	; 0x20
        226c04:	e28d0014 	add	r0, sp, #20	; 0x14
        226c08:	eb663ba7 	bl	1bb5aac <$strcpy>
        226c0c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        226c10:	e2801080 	add	r1, r0, #128	; 0x80
        226c14:	e28d0074 	add	r0, sp, #116	; 0x74
        226c18:	eb663ba3 	bl	1bb5aac <$strcpy>
        226c1c:	e284e074 	add	lr, r4, #116	; 0x74
        226c20:	e3a0c000 	mov	ip, #0	; 0x0
        226c24:	e1a01006 	mov	r1, r6
        226c28:	e3a03000 	mov	r3, #0	; 0x0
        226c2c:	e1a02006 	mov	r2, r6
        226c30:	e3a00000 	mov	r0, #0	; 0x0
        226c34:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        226c38:	e1a0300c 	mov	r3, ip
        226c3c:	e3a020f4 	mov	r2, #244	; 0xf4
        226c40:	e92d000c 	stmdb	sp!, {r2, r3}
        226c44:	e28d3018 	add	r3, sp, #24	; 0x18
        226c48:	e1a0000e 	mov	r0, lr
        226c4c:	e3a02000 	mov	r2, #0	; 0x0
        226c50:	e3a01001 	mov	r1, #1	; 0x1
        226c54:	eb66d03b 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        226c58:	e1a05000 	mov	r5, r0
        226c5c:	e28ddf43 	add	sp, sp, #268	; 0x10c
        226c60:	ea00005c 	b	226dd8 <TTestAgent::StartCTestCase(void)+0x248>
        226c64:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        226c68:	74737365 	ldrvcbt	r7, [r3], -#869
        226c6c:	e24ddfab 	sub	sp, sp, #684	; 0x2ac
        226c70:	e28d0004 	add	r0, sp, #4	; 0x4
        226c74:	eb66f572 	bl	1be4244 <TAppWorld::$__ct(void)>
        226c78:	e59f0084 	ldr	r0, [pc, #84]	; 226d04 <TTestAgent::StartCTestCase(void)+0x174>
        226c7c:	e58d0004 	str	r0, [sp, #4]
        226c80:	e3a00000 	mov	r0, #0	; 0x0
        226c84:	e58d0000 	str	r0, [sp]
        226c88:	e1a0100d 	mov	r1, sp
        226c8c:	e1a00004 	mov	r0, r4
        226c90:	eb656d2e 	bl	1b82150 <TTestAgent::$AllocateATestReporter(TAgentReporter **)>
        226c94:	e3300000 	teq	r0, #0	; 0x0
        226c98:	1a00000c 	bne	226cd0 <TTestAgent::StartCTestCase(void)+0x140>
        226c9c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        226ca0:	e2803080 	add	r3, r0, #128	; 0x80
        226ca4:	e92d0008 	stmdb	sp!, {r3}
        226ca8:	e2803020 	add	r3, r0, #32	; 0x20
        226cac:	e92d0008 	stmdb	sp!, {r3}
        226cb0:	e594208c 	ldr	r2, [r4, #140]	; fField140
        226cb4:	e59d3008 	ldr	r3, [sp, #8]
        226cb8:	e28d000c 	add	r0, sp, #12	; 0xc
        226cbc:	e59f1044 	ldr	r1, [pc, #44]	; 226d08 <TTestAgent::StartCTestCase(void)+0x178>
        226cc0:	eb001105 	bl	22b0dc <TTestCaseTask::Init2(unsigned long, TClassInfo *, TAgentReporter *, char *, char *)>
        226cc4:	e28dd008 	add	sp, sp, #8	; 0x8
        226cc8:	e3300000 	teq	r0, #0	; 0x0
        226ccc:	0a00000e 	beq	226d0c <TTestAgent::StartCTestCase(void)+0x17c>
        226cd0:	e1a04000 	mov	r4, r0
        226cd4:	e28d0004 	add	r0, sp, #4	; 0x4
        226cd8:	e3a01000 	mov	r1, #0	; 0x0
        226cdc:	e1a0e00f 	mov	lr, pc
        226ce0:	e59df004 	ldr	pc, [sp, #4]
        226ce4:	e28d0fab 	add	r0, sp, #684	; 0x2ac
        226ce8:	e3a01000 	mov	r1, #0	; 0x0
        226cec:	eb669e8c 	bl	1bce724 <TUObject::$__dt(void)>
        226cf0:	e28d0faf 	add	r0, sp, #700	; 0x2bc
        226cf4:	e3a01000 	mov	r1, #0	; 0x0
        226cf8:	eb669e81 	bl	1bce704 <TUNameServer::$__dt(void)>
        226cfc:	e1a00004 	mov	r0, r4
        226d00:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        226d04:	0001d134 	andeq	sp, r1, r4, lsr r1
        226d08:	7474736b 	ldrvcbt	r7, [r4], -#875	; fField875
        226d0c:	e59d0014 	ldr	r0, [sp, #20]
        226d10:	e594109c 	ldr	r1, [r4, #156]	; fField156
        226d14:	e5a10004 	str	r0, [r1, #4]!
        226d18:	e28d0004 	add	r0, sp, #4	; 0x4
        226d1c:	e28d3fae 	add	r3, sp, #696	; 0x2b8
        226d20:	e5840088 	str	r0, [r4, #136]	; fField136
        226d24:	e92d0008 	stmdb	sp!, {r3}
        226d28:	e28d3fae 	add	r3, sp, #696	; 0x2b8
        226d2c:	e28d0d0b 	add	r0, sp, #704	; 0x2c0
        226d30:	e28f2f30 	add	r2, pc, #192	; 0xc0
        226d34:	e28f1f31 	add	r1, pc, #196	; 0xc4
        226d38:	eb66bf87 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        226d3c:	e28dd004 	add	sp, sp, #4	; 0x4
        226d40:	e1b05000 	movs	r5, r0
        226d44:	1a00001e 	bne	226dc4 <TTestAgent::StartCTestCase(void)+0x234>
        226d48:	e59d12b4 	ldr	r1, [sp, #692]
        226d4c:	e28d0fab 	add	r0, sp, #684	; 0x2ac
        226d50:	eb66a6bc 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        226d54:	e24dd070 	sub	sp, sp, #112	; 0x70
        226d58:	e1a0000d 	mov	r0, sp
        226d5c:	eb66f535 	bl	1be4238 <TAEvent::$__ct(void)>
        226d60:	e58d7000 	str	r7, [sp]
        226d64:	e59f009c 	ldr	r0, [pc, #9c]	; 226e08 <TTestAgent::StartCTestCase(void)+0x278>
        226d68:	e58d0004 	str	r0, [sp, #4]
        226d6c:	e3a00001 	mov	r0, #1	; 0x1
        226d70:	e58d0008 	str	r0, [sp, #8]
        226d74:	e5b4009c 	ldr	r0, [r4, #156]!	; fField156
        226d78:	e2801020 	add	r1, r0, #32	; 0x20
        226d7c:	e28d0010 	add	r0, sp, #16	; 0x10
        226d80:	eb663b49 	bl	1bb5aac <$strcpy>
        226d84:	e3a0c000 	mov	ip, #0	; 0x0
        226d88:	e1a01006 	mov	r1, r6
        226d8c:	e3a03000 	mov	r3, #0	; 0x0
        226d90:	e1a02006 	mov	r2, r6
        226d94:	e3a00000 	mov	r0, #0	; 0x0
        226d98:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        226d9c:	e1a0300c 	mov	r3, ip
        226da0:	e3a02070 	mov	r2, #112	; 0x70
        226da4:	e92d000c 	stmdb	sp!, {r2, r3}
        226da8:	e28d3018 	add	r3, sp, #24	; 0x18
        226dac:	e28d0fcd 	add	r0, sp, #820	; 0x334
        226db0:	e3a02000 	mov	r2, #0	; 0x0
        226db4:	e3a01001 	mov	r1, #1	; 0x1
        226db8:	eb66cfe2 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        226dbc:	e1a05000 	mov	r5, r0
        226dc0:	e28dd088 	add	sp, sp, #136	; 0x88
        226dc4:	e28d0004 	add	r0, sp, #4	; 0x4
        226dc8:	e3a01000 	mov	r1, #0	; 0x0
        226dcc:	e1a0e00f 	mov	lr, pc
        226dd0:	e59df004 	ldr	pc, [sp, #4]
        226dd4:	e28ddfab 	add	sp, sp, #684	; 0x2ac
        226dd8:	e1a0000d 	mov	r0, sp
        226ddc:	e3a01000 	mov	r1, #0	; 0x0
        226de0:	eb669e4f 	bl	1bce724 <TUObject::$__dt(void)>
        226de4:	e28d0010 	add	r0, sp, #16	; 0x10
        226de8:	e3a01000 	mov	r1, #0	; 0x0
        226dec:	eb669e44 	bl	1bce704 <TUNameServer::$__dt(void)>
        226df0:	e1a00005 	mov	r0, r5
        226df4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        226df8:	5455506f 	ldrplb	r5, [r5], -#111	; fField111
        226dfc:	72740000 	rsbvcs	r0, r4, #0	; 0x0
        226e00:	7474736b 	ldrvcbt	r7, [r4], -#875	; fField875
        226e04:	00000000 	andeq	r0, r0, r0
        226e08:	7674736b 	ldrvcbt	r7, [r4], -fp, ror #6	; fField6
    */
}

/**
 * Symbol: TTestAgent::ProcessTestServerCommand(unsigned long, long)
 * Address: 00226e0c
 */
TTestAgent::ProcessTestServerCommand(unsigned long, long) {
    /*
        226e0c:	e1a0c00d 	mov	ip, sp
        226e10:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        226e14:	e24cb004 	sub	fp, ip, #4	; 0x4
        226e18:	e1a04000 	mov	r4, r0
        226e1c:	e1a06001 	mov	r6, r1
        226e20:	e1a05002 	mov	r5, r2
        226e24:	e24dd004 	sub	sp, sp, #4	; 0x4
        226e28:	e3a07000 	mov	r7, #0	; 0x0
        226e2c:	e59fa054 	ldr	sl, [pc, #54]	; 226e88 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x7c>
        226e30:	e151000a 	cmp	r1, sl
        226e34:	0a0000cf 	beq	227178 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x36c>
        226e38:	ca000029 	bgt	226ee4 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0xd8>
        226e3c:	e59fc048 	ldr	ip, [pc, #48]	; 226e8c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x80>
        226e40:	e156000c 	cmp	r6, ip
        226e44:	0a0000cb 	beq	227178 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x36c>
        226e48:	ca000014 	bgt	226ea0 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x94>
        226e4c:	e59fc03c 	ldr	ip, [pc, #3c]	; 226e90 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x84>
        226e50:	e136000c 	teq	r6, ip
        226e54:	0a000183 	beq	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        226e58:	e59fc034 	ldr	ip, [pc, #34]	; 226e94 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x88>
        226e5c:	e136000c 	teq	r6, ip
        226e60:	0a000055 	beq	226fbc <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x1b0>
        226e64:	e59fc02c 	ldr	ip, [pc, #2c]	; 226e98 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x8c>
        226e68:	e136000c 	teq	r6, ip
        226e6c:	03a01000 	moveq	r1, #0	; 0x0
        226e70:	0a00005f 	beq	226ff4 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x1e8>
        226e74:	e59fc020 	ldr	ip, [pc, #20]	; 226e9c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x90>
        226e78:	e136000c 	teq	r6, ip
        226e7c:	01a00004 	moveq	r0, r4
        226e80:	0b656cba 	bleq	1b82170 <TTestAgent::$DoDropConnection(void)>
        226e84:	ea000177 	b	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        226e88:	73637270 	cmnvc	r3, #7	; 0x7
        226e8c:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2
        226e90:	61627274 	cmnvs	r2, r4, ror r2
        226e94:	61637064 	cmnvs	r3, r4, rrx
        226e98:	63617365 	cmnvs	r1, #-1811939327	; 0x94000001
        226e9c:	64726f70 	ldrvsbt	r6, [r2], -#3952
        226ea0:	e59fc02c 	ldr	ip, [pc, #2c]	; 226ed4 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0xc8>
        226ea4:	e136000c 	teq	r6, ip
        226ea8:	0a000050 	beq	226ff0 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x1e4>
        226eac:	e59fc024 	ldr	ip, [pc, #24]	; 226ed8 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0xcc>
        226eb0:	e136000c 	teq	r6, ip
        226eb4:	0a00016b 	beq	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        226eb8:	e59fc01c 	ldr	ip, [pc, #1c]	; 226edc <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0xd0>
        226ebc:	e136000c 	teq	r6, ip
        226ec0:	0a000161 	beq	22744c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x640>
        226ec4:	e59fc014 	ldr	ip, [pc, #14]	; 226ee0 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0xd4>
        226ec8:	e136000c 	teq	r6, ip
        226ecc:	1a000165 	bne	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        226ed0:	ea000159 	b	22743c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x630>
        226ed4:	6e636173 	mcrvs	1, 3, r6, cr3, cr3, {3}
        226ed8:	6e756c6c 	cdpvs	12, 7, cr6, cr5, cr12, {3}
        226edc:	72746673 	rsbvcs	r6, r4, #120586240	; 0x7300000
        226ee0:	73636173 	cmnvc	r3, #-1073741796	; 0xc000001c
        226ee4:	e59fc050 	ldr	ip, [pc, #50]	; 226f3c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x130>
        226ee8:	e156000c 	cmp	r6, ip
        226eec:	01a00004 	moveq	r0, r4
        226ef0:	03a01000 	moveq	r1, #0	; 0x0
        226ef4:	0a00015a 	beq	227464 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x658>
        226ef8:	ca000014 	bgt	226f50 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x144>
        226efc:	e59fc03c 	ldr	ip, [pc, #3c]	; 226f40 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x134>
        226f00:	e136000c 	teq	r6, ip
        226f04:	0a000007 	beq	226f28 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x11c>
        226f08:	e59fc034 	ldr	ip, [pc, #34]	; 226f44 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x138>
        226f0c:	e136000c 	teq	r6, ip
        226f10:	159fc030 	ldrne	ip, [pc, #30]	; 226f48 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x13c>
        226f14:	1136000c 	teqne	r6, ip
        226f18:	0a000147 	beq	22743c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x630>
        226f1c:	e59fc028 	ldr	ip, [pc, #28]	; 226f4c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x140>
        226f20:	e136000c 	teq	r6, ip
        226f24:	1a00014f 	bne	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        226f28:	e1a02005 	mov	r2, r5
        226f2c:	e1a01006 	mov	r1, r6
        226f30:	e1a00004 	mov	r0, r4
        226f34:	eb6574b9 	bl	1b84220 <TTestAgent::$StoreTestOrDataFile(unsigned long, unsigned long)>
        226f38:	ea00014a 	b	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        226f3c:	73747230 	cmnvc	r4, #3	; 0x3
        226f40:	7364666c 	cmnvc	r4, #113246208	; 0x6c00000
        226f44:	73667261 	cmnvc	r6, #268435462	; 0x10000006
        226f48:	73736372 	cmnvc	r3, #-939524095	; 0xc8000001
        226f4c:	7374666c 	cmnvc	r4, #113246208	; 0x6c00000
        226f50:	e59fc05c 	ldr	ip, [pc, #5c]	; 226fb4 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x1a8>
        226f54:	e136000c 	teq	r6, ip
        226f58:	0a00013f 	beq	22745c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x650>
        226f5c:	e59fc054 	ldr	ip, [pc, #54]	; 226fb8 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x1ac>
        226f60:	e136000c 	teq	r6, ip
        226f64:	1a00013f 	bne	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        226f68:	e24dd00c 	sub	sp, sp, #12	; 0xc
        226f6c:	e2450004 	sub	r0, r5, #4	; 0x4
        226f70:	e58d0004 	str	r0, [sp, #4]
        226f74:	e2800014 	add	r0, r0, #20	; 0x14
        226f78:	eb66ec70 	bl	1be2140 <$NewPtr>
        226f7c:	e1b05000 	movs	r5, r0
        226f80:	0a00011e 	beq	227400 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x5f4>
        226f84:	e1a0100d 	mov	r1, sp
        226f88:	e3a03000 	mov	r3, #0	; 0x0
        226f8c:	e3a02004 	mov	r2, #4	; 0x4
        226f90:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        226f94:	ebff8a2f 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        226f98:	e59d2004 	ldr	r2, [sp, #4]
        226f9c:	e1a01005 	mov	r1, r5
        226fa0:	e3a03001 	mov	r3, #1	; 0x1
        226fa4:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        226fa8:	ebff8a2a 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        226fac:	e58d5008 	str	r5, [sp, #8]
        226fb0:	ea000114 	b	227408 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x5fc>
        226fb4:	73747231 	cmnvc	r4, #268435459	; 0x10000003
        226fb8:	7466696c 	strvcbt	r6, [r6], -#2412
        226fbc:	e5940080 	ldr	r0, [r4, #128]	; fField128
        226fc0:	e3300001 	teq	r0, #1	; 0x1
        226fc4:	1a000127 	bne	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        226fc8:	e3a01002 	mov	r1, #2	; 0x2
        226fcc:	e5841080 	str	r1, [r4, #128]	; fField128
        226fd0:	e5940170 	ldr	r0, [r4, #368]	; fField368
        226fd4:	e3300000 	teq	r0, #0	; 0x0
        226fd8:	15a01080 	strne	r1, [r0, #128]!	; fField128
        226fdc:	e3350000 	teq	r5, #0	; 0x0
        226fe0:	11a01005 	movne	r1, r5
        226fe4:	11a00004 	movne	r0, r4
        226fe8:	1b65707f 	blne	1b831ec <TTestAgent::$ProcessTestMgrParameters(long)>
        226fec:	ea00011d 	b	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        226ff0:	e3a01001 	mov	r1, #1	; 0x1
        226ff4:	e5c4116f 	strb	r1, [r4, #367]	; fField367
        226ff8:	e5940080 	ldr	r0, [r4, #128]	; fField128
        226ffc:	e3300002 	teq	r0, #2	; 0x2
        227000:	13300003 	teqne	r0, #3	; 0x3
        227004:	1a00005f 	bne	227188 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x37c>
        227008:	e24dd008 	sub	sp, sp, #8	; 0x8
        22700c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227010:	e2801020 	add	r1, r0, #32	; 0x20
        227014:	e3a03001 	mov	r3, #1	; 0x1
        227018:	e3a02060 	mov	r2, #96	; 0x60
        22701c:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        227020:	ebff8a3b 	bl	209914 <TCommServer::ReadString(char *, unsigned long, unsigned char)>
        227024:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227028:	e2801080 	add	r1, r0, #128	; 0x80
        22702c:	e3a03001 	mov	r3, #1	; 0x1
        227030:	e3a02080 	mov	r2, #128	; 0x80
        227034:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        227038:	ebff8a35 	bl	209914 <TCommServer::ReadString(char *, unsigned long, unsigned char)>
        22703c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227040:	e2800020 	add	r0, r0, #32	; 0x20
        227044:	eb663a99 	bl	1bb5ab0 <$strlen>
        227048:	e2800004 	add	r0, r0, #4	; 0x4
        22704c:	e3c06003 	bic	r6, r0, #3	; 0x3
        227050:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227054:	e2800080 	add	r0, r0, #128	; 0x80
        227058:	eb663a94 	bl	1bb5ab0 <$strlen>
        22705c:	e2800004 	add	r0, r0, #4	; 0x4
        227060:	e3c00003 	bic	r0, r0, #3	; 0x3
        227064:	e0451006 	sub	r1, r5, r6
        227068:	e0410000 	sub	r0, r1, r0
        22706c:	e1a08000 	mov	r8, r0
        227070:	eb66ec32 	bl	1be2140 <$NewPtr>
        227074:	e1b06000 	movs	r6, r0
        227078:	0a000029 	beq	227124 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x318>
        22707c:	e1a02008 	mov	r2, r8
        227080:	e1a01006 	mov	r1, r6
        227084:	e3a03000 	mov	r3, #0	; 0x0
        227088:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        22708c:	ebff89f1 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        227090:	e1a01005 	mov	r1, r5
        227094:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        227098:	ebff8a49 	bl	2099c4 <TCommServer::FlushPadding(unsigned long)>
        22709c:	e3a00003 	mov	r0, #3	; 0x3
        2270a0:	e5cd0000 	strb	r0, [sp]
        2270a4:	e3a01000 	mov	r1, #0	; 0x0
        2270a8:	e5cd1001 	strb	r1, [sp, #1]
        2270ac:	e28d3008 	add	r3, sp, #8	; 0x8
        2270b0:	e1a00006 	mov	r0, r6
        2270b4:	e89d0006 	ldmia	sp, {r1, r2}
        2270b8:	eb66bea3 	bl	1bd6b4c <$LoadPackage(char *, SourceType, unsigned long *)>
        2270bc:	e1b07000 	movs	r7, r0
        2270c0:	0a000008 	beq	2270e8 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x2dc>
        2270c4:	e28f0f01 	add	r0, pc, #4	; 0x4
        2270c8:	eb6729ec 	bl	1bf1880 <$printf>
        2270cc:	ea000010 	b	227114 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x308>
        2270d0:	6572726f 	ldrvsb	r7, [r2, -#623]!
        2270d4:	72206672 	eorvc	r6, r0, #119537664	; 0x7200000
        2270d8:	6f6d204c 	swivs	0x006d204c
        2270dc:	6f616450 	swivs	0x00616450
        2270e0:	61636b61 	cmnvs	r3, r1, ror #22
        2270e4:	67650000 	strvsb	r0, [r5, -r0]!
        2270e8:	e24dd050 	sub	sp, sp, #80	; 0x50
        2270ec:	e59d2058 	ldr	r2, [sp, #88]
        2270f0:	e1a0000d 	mov	r0, sp
        2270f4:	e28f1f17 	add	r1, pc, #92	; 0x5c
        2270f8:	eb663a65 	bl	1bb5a94 <$sprintf>
        2270fc:	e1a0000d 	mov	r0, sp
        227100:	eb6729de 	bl	1bf1880 <$printf>
        227104:	e59d0058 	ldr	r0, [sp, #88]
        227108:	e594109c 	ldr	r1, [r4, #156]	; fField156
        22710c:	e5810000 	str	r0, [r1]
        227110:	e28dd050 	add	sp, sp, #80	; 0x50
        227114:	e1a00006 	mov	r0, r6
        227118:	eb66e7e5 	bl	1be10b4 <$DisposPtr>
        22711c:	e3370000 	teq	r7, #0	; 0x0
        227120:	1a00000a 	bne	227150 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x344>
        227124:	e5940080 	ldr	r0, [r4, #128]	; fField128
        227128:	e3300002 	teq	r0, #2	; 0x2
        22712c:	13a00005 	movne	r0, #5	; 0x5
        227130:	03a00004 	moveq	r0, #4	; 0x4
        227134:	e5840080 	str	r0, [r4, #128]	; fField128
        227138:	e5940170 	ldr	r0, [r4, #368]	; fField368
        22713c:	e3300000 	teq	r0, #0	; 0x0
        227140:	15941080 	ldrne	r1, [r4, #128]	; fField128
        227144:	15a01080 	strne	r1, [r0, #128]!	; fField128
        227148:	e1a00004 	mov	r0, r4
        22714c:	eb627013 	bl	1ac31a0 <TTestAgent::$StartCTestCase(void)>
        227150:	e28dd008 	add	sp, sp, #8	; 0x8
        227154:	ea0000c3 	b	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        227158:	6c6f6164 	stfvse	f6, [pc], -#400
        22715c:	65642074 	strvsb	r2, [r4, -#116]!	; fField116
        227160:	65737420 	ldrvsb	r7, [r3, -#1056]!
        227164:	63617365 	cmnvs	r1, #-1811939327	; 0x94000001
        227168:	20506163 	subcss	r6, r0, r3, ror #2
        22716c:	6b616765 	blvs	1a80f08 <TAEP::$Write(TAppleTalkMessage *)+0xe8c>
        227170:	49643d20 	stmmidb	r4!, {r5, r8, sl, fp, ip, sp}^
        227174:	25640d00 	strcsb	r0, [r4, -#3328]!	; fField3328
        227178:	e5940080 	ldr	r0, [r4, #128]	; fField128
        22717c:	e3300002 	teq	r0, #2	; 0x2
        227180:	13300004 	teqne	r0, #4	; 0x4
        227184:	0a000001 	beq	227190 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x384>
        227188:	e3e07000 	mvn	r7, #0	; 0x0
        22718c:	ea0000b5 	b	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        227190:	e24dd0f4 	sub	sp, sp, #244	; 0xf4
        227194:	e1a0000d 	mov	r0, sp
        227198:	eb66f426 	bl	1be4238 <TAEvent::$__ct(void)>
        22719c:	e5940098 	ldr	r0, [r4, #152]	; fField152
        2271a0:	e2801020 	add	r1, r0, #32	; 0x20
        2271a4:	e3a03001 	mov	r3, #1	; 0x1
        2271a8:	e3a02060 	mov	r2, #96	; 0x60
        2271ac:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2271b0:	ebff89d7 	bl	209914 <TCommServer::ReadString(char *, unsigned long, unsigned char)>
        2271b4:	e5940098 	ldr	r0, [r4, #152]	; fField152
        2271b8:	e2801080 	add	r1, r0, #128	; 0x80
        2271bc:	e3a03001 	mov	r3, #1	; 0x1
        2271c0:	e3a02080 	mov	r2, #128	; 0x80
        2271c4:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2271c8:	ebff89d1 	bl	209914 <TCommServer::ReadString(char *, unsigned long, unsigned char)>
        2271cc:	e59f00e0 	ldr	r0, [pc, #e0]	; 2272b4 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x4a8>
        2271d0:	e58d0000 	str	r0, [sp]
        2271d4:	e59f00dc 	ldr	r0, [pc, #dc]	; 2272b8 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x4ac>
        2271d8:	e58d0004 	str	r0, [sp, #4]
        2271dc:	e5940098 	ldr	r0, [r4, #152]	; fField152
        2271e0:	e2801020 	add	r1, r0, #32	; 0x20
        2271e4:	e28d0014 	add	r0, sp, #20	; 0x14
        2271e8:	eb663a2f 	bl	1bb5aac <$strcpy>
        2271ec:	e5940098 	ldr	r0, [r4, #152]	; fField152
        2271f0:	e2801080 	add	r1, r0, #128	; 0x80
        2271f4:	e28d0074 	add	r0, sp, #116	; 0x74
        2271f8:	eb663a2b 	bl	1bb5aac <$strcpy>
        2271fc:	e5940098 	ldr	r0, [r4, #152]	; fField152
        227200:	e2800020 	add	r0, r0, #32	; 0x20
        227204:	eb663a29 	bl	1bb5ab0 <$strlen>
        227208:	e2800004 	add	r0, r0, #4	; 0x4
        22720c:	e3c09003 	bic	r9, r0, #3	; 0x3
        227210:	e5940098 	ldr	r0, [r4, #152]	; fField152
        227214:	e2800080 	add	r0, r0, #128	; 0x80
        227218:	eb663a24 	bl	1bb5ab0 <$strlen>
        22721c:	e2800004 	add	r0, r0, #4	; 0x4
        227220:	e3c00003 	bic	r0, r0, #3	; 0x3
        227224:	e2848074 	add	r8, r4, #116	; 0x74
        227228:	e136000a 	teq	r6, sl
        22722c:	1a000022 	bne	2272bc <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x4b0>
        227230:	e3a01001 	mov	r1, #1	; 0x1
        227234:	e58d1008 	str	r1, [sp, #8]
        227238:	e0451009 	sub	r1, r5, r9
        22723c:	e0410000 	sub	r0, r1, r0
        227240:	e58d000c 	str	r0, [sp, #12]
        227244:	e2800001 	add	r0, r0, #1	; 0x1
        227248:	eb66ebbc 	bl	1be2140 <$NewPtr>
        22724c:	e1a05000 	mov	r5, r0
        227250:	e59d200c 	ldr	r2, [sp, #12]
        227254:	e1a01005 	mov	r1, r5
        227258:	e3a03001 	mov	r3, #1	; 0x1
        22725c:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        227260:	ebff897c 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        227264:	e3a01000 	mov	r1, #0	; 0x0
        227268:	e59d000c 	ldr	r0, [sp, #12]
        22726c:	e7c51000 	strb	r1, [r5, r0]
        227270:	e3a0c000 	mov	ip, #0	; 0x0
        227274:	e3a03000 	mov	r3, #0	; 0x0
        227278:	e1a02001 	mov	r2, r1
        22727c:	e3a00000 	mov	r0, #0	; 0x0
        227280:	e58d5010 	str	r5, [sp, #16]
        227284:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        227288:	e1a0300c 	mov	r3, ip
        22728c:	e3a020f4 	mov	r2, #244	; 0xf4
        227290:	e92d000c 	stmdb	sp!, {r2, r3}
        227294:	e28d3018 	add	r3, sp, #24	; 0x18
        227298:	e1a00008 	mov	r0, r8
        22729c:	e3a02000 	mov	r2, #0	; 0x0
        2272a0:	e3a01001 	mov	r1, #1	; 0x1
        2272a4:	eb66cea7 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        2272a8:	e28dd018 	add	sp, sp, #24	; 0x18
        2272ac:	e1a07000 	mov	r7, r0
        2272b0:	ea000038 	b	227398 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x58c>
        2272b4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        2272b8:	74737365 	ldrvcbt	r7, [r3], -#869
        2272bc:	e51fc438 	ldr	ip, [pc, #fffffbc8]	; 226e8c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x80>
        2272c0:	e136000c 	teq	r6, ip
        2272c4:	1a000035 	bne	2273a0 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x594>
        2272c8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2272cc:	e0451009 	sub	r1, r5, r9
        2272d0:	e0410000 	sub	r0, r1, r0
        2272d4:	e1a06000 	mov	r6, r0
        2272d8:	eb66eb98 	bl	1be2140 <$NewPtr>
        2272dc:	e1b05000 	movs	r5, r0
        2272e0:	0a000011 	beq	22732c <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x520>
        2272e4:	e1a02006 	mov	r2, r6
        2272e8:	e1a01005 	mov	r1, r5
        2272ec:	e3a03001 	mov	r3, #1	; 0x1
        2272f0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2272f4:	ebff8957 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        2272f8:	e3a00003 	mov	r0, #3	; 0x3
        2272fc:	e5cd0000 	strb	r0, [sp]
        227300:	e3a01000 	mov	r1, #0	; 0x0
        227304:	e5cd1001 	strb	r1, [sp, #1]
        227308:	e28d30fc 	add	r3, sp, #252	; 0xfc
        22730c:	e1a00005 	mov	r0, r5
        227310:	e89d0006 	ldmia	sp, {r1, r2}
        227314:	eb66be0c 	bl	1bd6b4c <$LoadPackage(char *, SourceType, unsigned long *)>
        227318:	e1b07000 	movs	r7, r0
        22731c:	128f0f2a 	addne	r0, pc, #168	; 0xa8
        227320:	1b672956 	blne	1bf1880 <$printf>
        227324:	e1a00005 	mov	r0, r5
        227328:	eb66e761 	bl	1be10b4 <$DisposPtr>
        22732c:	e28dd008 	add	sp, sp, #8	; 0x8
        227330:	e3370000 	teq	r7, #0	; 0x0
        227334:	1a000017 	bne	227398 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x58c>
        227338:	e59d00f4 	ldr	r0, [sp, #244]
        22733c:	e5941098 	ldr	r1, [r4, #152]	; fField152
        227340:	e5810000 	str	r0, [r1]
        227344:	e3a00002 	mov	r0, #2	; 0x2
        227348:	e3a0c000 	mov	ip, #0	; 0x0
        22734c:	e3a01000 	mov	r1, #0	; 0x0
        227350:	e3a03000 	mov	r3, #0	; 0x0
        227354:	e1a02001 	mov	r2, r1
        227358:	e58d0008 	str	r0, [sp, #8]
        22735c:	e3a00000 	mov	r0, #0	; 0x0
        227360:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        227364:	e1a0300c 	mov	r3, ip
        227368:	e3a020f4 	mov	r2, #244	; 0xf4
        22736c:	e92d000c 	stmdb	sp!, {r2, r3}
        227370:	e28d3018 	add	r3, sp, #24	; 0x18
        227374:	e1a00008 	mov	r0, r8
        227378:	e3a02000 	mov	r2, #0	; 0x0
        22737c:	e3a01001 	mov	r1, #1	; 0x1
        227380:	eb66ce70 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        227384:	e28dd018 	add	sp, sp, #24	; 0x18
        227388:	e1b07000 	movs	r7, r0
        22738c:	0a000003 	beq	2273a0 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x594>
        227390:	e28f0f13 	add	r0, pc, #76	; 0x4c
        227394:	eb672939 	bl	1bf1880 <$printf>
        227398:	e3370000 	teq	r7, #0	; 0x0
        22739c:	1a000008 	bne	2273c4 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x5b8>
        2273a0:	e5940080 	ldr	r0, [r4, #128]	; fField128
        2273a4:	e3300002 	teq	r0, #2	; 0x2
        2273a8:	13a00005 	movne	r0, #5	; 0x5
        2273ac:	03a00003 	moveq	r0, #3	; 0x3
        2273b0:	e5840080 	str	r0, [r4, #128]	; fField128
        2273b4:	e5940170 	ldr	r0, [r4, #368]	; fField368
        2273b8:	e3300000 	teq	r0, #0	; 0x0
        2273bc:	15b41080 	ldrne	r1, [r4, #128]!	; fField128
        2273c0:	15a01080 	strne	r1, [r0, #128]!	; fField128
        2273c4:	e28dd0f4 	add	sp, sp, #244	; 0xf4
        2273c8:	ea000026 	b	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        2273cc:	6572726f 	ldrvsb	r7, [r2, -#623]!
        2273d0:	72206672 	eorvc	r6, r0, #119537664	; 0x7200000
        2273d4:	6f6d204c 	swivs	0x006d204c
        2273d8:	6f616450 	swivs	0x00616450
        2273dc:	61636b61 	cmnvs	r3, r1, ror #22
        2273e0:	67650d00 	strvsb	r0, [r5, -r0, lsl #26]!	; fField26
        2273e4:	6572726f 	ldrvsb	r7, [r2, -#623]!
        2273e8:	72207365 	eorvc	r7, r0, #-1811939327	; 0x94000001
        2273ec:	6e64696e 	cdpvs	9, 6, cr6, cr4, cr14, {3}
        2273f0:	67206576 	undefined
        2273f4:	656e7420 	strvsb	r7, [lr, -#1056]!
        2273f8:	746f204e 	strvcbt	r2, [pc], #4e	; 227400 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x5f4>
        2273fc:	65777400 	ldrvsb	r7, [r7, -#1024]!
        227400:	e3e00001 	mvn	r0, #1	; 0x1
        227404:	e58d0000 	str	r0, [sp]
        227408:	e5d400c4 	ldrb	r0, [r4, #196]	; fField196
        22740c:	e3300000 	teq	r0, #0	; 0x0
        227410:	0a000007 	beq	227434 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x628>
        227414:	e28400b4 	add	r0, r4, #180	; 0xb4
        227418:	e1a0100d 	mov	r1, sp
        22741c:	e3a03000 	mov	r3, #0	; 0x0
        227420:	e3a0200c 	mov	r2, #12	; 0xc
        227424:	eb66ca30 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        227428:	e1a07000 	mov	r7, r0
        22742c:	e3a01000 	mov	r1, #0	; 0x0
        227430:	e5c410c4 	strb	r1, [r4, #196]	; fField196
        227434:	e28dd00c 	add	sp, sp, #12	; 0xc
        227438:	ea00000a 	b	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        22743c:	e1a01006 	mov	r1, r6
        227440:	e1a00004 	mov	r0, r4
        227444:	eb657374 	bl	1b8421c <TTestAgent::$StoreTestCommand(unsigned long)>
        227448:	ea000006 	b	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        22744c:	e1a00004 	mov	r0, r4
        227450:	e3a01001 	mov	r1, #1	; 0x1
        227454:	eb656b46 	bl	1b82174 <TTestAgent::$DoRunTestsFromStore(unsigned char)>
        227458:	ea000002 	b	227468 <TTestAgent::ProcessTestServerCommand(unsigned long, long)+0x65c>
        22745c:	e1a00004 	mov	r0, r4
        227460:	e3a01001 	mov	r1, #1	; 0x1
        227464:	eb656f5c 	bl	1b831dc <TTestAgent::$MakeTestStore(unsigned char)>
        227468:	e1a00007 	mov	r0, r7
        22746c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTestAgent::MakeTestStore(unsigned char)
 * Address: 00227470
 */
TTestAgent::MakeTestStore(unsigned char) {
    /*
        227470:	e1a0c00d 	mov	ip, sp
        227474:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        227478:	e24cb004 	sub	fp, ip, #4	; 0x4
        22747c:	e1a04000 	mov	r4, r0
        227480:	e20160ff 	and	r6, r1, #255	; 0xff
        227484:	e24dd018 	sub	sp, sp, #24	; 0x18
        227488:	e3a05000 	mov	r5, #0	; 0x0
        22748c:	e28d0004 	add	r0, sp, #4	; 0x4
        227490:	eb66987c 	bl	1bcd688 <TUNameServer::$__ct(void)>
        227494:	e59400d8 	ldr	r0, [r4, #216]	; fField216
        227498:	e3300000 	teq	r0, #0	; 0x0
        22749c:	0a000005 	beq	2274b8 <TTestAgent::MakeTestStore(unsigned char)+0x48>
        2274a0:	e3e04000 	mvn	r4, #0	; 0x0
        2274a4:	e28d0004 	add	r0, sp, #4	; 0x4
        2274a8:	e3a01000 	mov	r1, #0	; 0x0
        2274ac:	eb669c94 	bl	1bce704 <TUNameServer::$__dt(void)>
        2274b0:	e1a00004 	mov	r0, r4
        2274b4:	ea000025 	b	227550 <TTestAgent::MakeTestStore(unsigned char)+0xe0>
        2274b8:	e3360000 	teq	r6, #0	; 0x0
        2274bc:	1a000010 	bne	227504 <TTestAgent::MakeTestStore(unsigned char)+0x94>
        2274c0:	e1a0300d 	mov	r3, sp
        2274c4:	e92d0008 	stmdb	sp!, {r3}
        2274c8:	e28d3018 	add	r3, sp, #24	; 0x18
        2274cc:	e28d0008 	add	r0, sp, #8	; 0x8
        2274d0:	e28f2f06 	add	r2, pc, #24	; 0x18
        2274d4:	e28f1f07 	add	r1, pc, #28	; 0x1c
        2274d8:	eb66bd9f 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        2274dc:	e28dd004 	add	sp, sp, #4	; 0x4
        2274e0:	e1b05000 	movs	r5, r0
        2274e4:	13a00000 	movne	r0, #0	; 0x0
        2274e8:	1a00000a 	bne	227518 <TTestAgent::MakeTestStore(unsigned char)+0xa8>
        2274ec:	ea00000a 	b	22751c <TTestAgent::MakeTestStore(unsigned char)+0xac>
        2274f0:	5453746f 	ldrplb	r7, [r3], -#1135
        2274f4:	72650000 	rsbvc	r0, r5, #0	; 0x0
        2274f8:	496e5241 	stmmidb	lr!, {r0, r6, r9, ip, lr}^
        2274fc:	4d53746f 	ldcmil	4, cr7, [r3, -#444]
        227500:	72650000 	rsbvc	r0, r5, #0	; 0x0
        227504:	e59f0048 	ldr	r0, [pc, #48]	; 227554 <TTestAgent::MakeTestStore(unsigned char)+0xe4>
        227508:	e5900000 	ldr	r0, [r0]
        22750c:	e3300000 	teq	r0, #0	; 0x0
        227510:	03e05001 	mvneq	r5, #1	; 0x1
        227514:	0a000000 	beq	22751c <TTestAgent::MakeTestStore(unsigned char)+0xac>
        227518:	e58d0014 	str	r0, [sp, #20]
        22751c:	e59d0014 	ldr	r0, [sp, #20]
        227520:	e3350000 	teq	r5, #0	; 0x0
        227524:	e58400d8 	str	r0, [r4, #216]	; fField216
        227528:	05c4616c 	streqb	r6, [r4, #364]	; fField364
        22752c:	0a000003 	beq	227540 <TTestAgent::MakeTestStore(unsigned char)+0xd0>
        227530:	e1a00004 	mov	r0, r4
        227534:	e28f2f07 	add	r2, pc, #28	; 0x1c
        227538:	e59f1034 	ldr	r1, [pc, #34]	; 227574 <TTestAgent::MakeTestStore(unsigned char)+0x104>
        22753c:	eb656b00 	bl	1b82144 <TTestAgent::$AgentReportDirect(unsigned long, char *)>
        227540:	e28d0004 	add	r0, sp, #4	; 0x4
        227544:	e3a01000 	mov	r1, #0	; 0x0
        227548:	eb669c6d 	bl	1bce704 <TUNameServer::$__dt(void)>
        22754c:	e1a00005 	mov	r0, r5
        227550:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        227554:	0c1016cc 	ldceq	6, cr1, [r0], -#816
        227558:	6661696c 	strvsbt	r6, [r1], -ip, ror #18
        22755c:	65642069 	strvsb	r2, [r4, -#105]!	; fField105
        227560:	6e206d61 	cdpvs	13, 2, cr6, cr0, cr1, {3}
        227564:	6b696e67 	blvs	1c82f08 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x726b0>
        227568:	20612073 	rsbcs	r2, r1, r3, ror r0
        22756c:	746f7265 	strvcbt	r7, [pc], #265	; 227574 <TTestAgent::MakeTestStore(unsigned char)+0x104>
        227570:	00000000 	andeq	r0, r0, r0
        227574:	61657272 	cmnvs	r5, r2, ror r2
    */
}

/**
 * Symbol: TTestAgent::StoreTestCommand(unsigned long)
 * Address: 00227578
 */
TTestAgent::StoreTestCommand(unsigned long) {
    /*
        227578:	e1a0c00d 	mov	ip, sp
        22757c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        227580:	e24cb004 	sub	fp, ip, #4	; 0x4
        227584:	e1a04000 	mov	r4, r0
        227588:	e1a05001 	mov	r5, r1
        22758c:	e59010d8 	ldr	r1, [r0, #216]	; fField216
        227590:	e3310000 	teq	r1, #0	; 0x0
        227594:	03e00000 	mvneq	r0, #0	; 0x0
        227598:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        22759c:	e59400dc 	ldr	r0, [r4, #220]	; fField220
        2275a0:	e3300000 	teq	r0, #0	; 0x0
        2275a4:	1a000002 	bne	2275b4 <TTestAgent::StoreTestCommand(unsigned long)+0x3c>
        2275a8:	e3a00000 	mov	r0, #0	; 0x0
        2275ac:	eb656add 	bl	1b82128 <TTestCommandQueue::$__ct(TStore *)>
        2275b0:	e58400dc 	str	r0, [r4, #220]	; fField220
        2275b4:	e59400dc 	ldr	r0, [r4, #220]	; fField220
        2275b8:	e3300000 	teq	r0, #0	; 0x0
        2275bc:	0a00001b 	beq	227630 <TTestAgent::StoreTestCommand(unsigned long)+0xb8>
        2275c0:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2275c4:	e2801020 	add	r1, r0, #32	; 0x20
        2275c8:	e3a03001 	mov	r3, #1	; 0x1
        2275cc:	e3a02060 	mov	r2, #96	; 0x60
        2275d0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2275d4:	ebff88ce 	bl	209914 <TCommServer::ReadString(char *, unsigned long, unsigned char)>
        2275d8:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2275dc:	e2801080 	add	r1, r0, #128	; 0x80
        2275e0:	e3a03001 	mov	r3, #1	; 0x1
        2275e4:	e3a02080 	mov	r2, #128	; 0x80
        2275e8:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2275ec:	ebff88c8 	bl	209914 <TCommServer::ReadString(char *, unsigned long, unsigned char)>
        2275f0:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2275f4:	e2803080 	add	r3, r0, #128	; 0x80
        2275f8:	e2802020 	add	r2, r0, #32	; 0x20
        2275fc:	e1a01005 	mov	r1, r5
        227600:	e5b400dc 	ldr	r0, [r4, #220]!	; fField220
        227604:	eb656adc 	bl	1b8217c <TTestCommandQueue::$EnqueueTestCommand(unsigned long, char *, char *)>
        227608:	e1b04000 	movs	r4, r0
        22760c:	128f0f01 	addne	r0, pc, #4	; 0x4
        227610:	1b67289a 	blne	1bf1880 <$printf>
        227614:	ea000006 	b	227634 <TTestAgent::StoreTestCommand(unsigned long)+0xbc>
        227618:	6572726f 	ldrvsb	r7, [r2, -#623]!
        22761c:	7220456e 	eorvc	r4, r0, #461373440	; 0x1b800000
        227620:	71756575 	cmnvc	r5, r5, ror r5
        227624:	65546573 	ldrvsb	r6, [r4, -#1395]	; fField1395
        227628:	74436173 	strvcb	r6, [r3], -#371
        22762c:	65000000 	strvs	r0, [r0]
        227630:	e3e04001 	mvn	r4, #1	; 0x1
        227634:	e1a00004 	mov	r0, r4
        227638:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)
 * Address: 0022763c
 */
TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long) {
    /*
        22763c:	e1a0c00d 	mov	ip, sp
        227640:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        227644:	e24cb004 	sub	fp, ip, #4	; 0x4
        227648:	e1a04000 	mov	r4, r0
        22764c:	e1a06002 	mov	r6, r2
        227650:	e59000d8 	ldr	r0, [r0, #216]	; fField216
        227654:	e3300000 	teq	r0, #0	; 0x0
        227658:	03e00000 	mvneq	r0, #0	; 0x0
        22765c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        227660:	e59fc028 	ldr	ip, [pc, #28]	; 227690 <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x54>
        227664:	e131000c 	teq	r1, ip
        227668:	1a000009 	bne	227694 <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x58>
        22766c:	e59410e0 	ldr	r1, [r4, #224]	; fField224
        227670:	e3310000 	teq	r1, #0	; 0x0
        227674:	1a000003 	bne	227688 <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x4c>
        227678:	e1a01000 	mov	r1, r0
        22767c:	e3a00000 	mov	r0, #0	; 0x0
        227680:	eb656aa9 	bl	1b8212c <TTestStoreFileList::$__ct(TStore *)>
        227684:	e58400e0 	str	r0, [r4, #224]	; fField224
        227688:	e59450e0 	ldr	r5, [r4, #224]	; fField224
        22768c:	ea00000b 	b	2276c0 <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x84>
        227690:	7364666c 	cmnvc	r4, #113246208	; 0x6c00000
        227694:	e59fc0e4 	ldr	ip, [pc, #e4]	; 227780 <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x144>
        227698:	e131000c 	teq	r1, ip
        22769c:	1a00003f 	bne	2277a0 <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x164>
        2276a0:	e59410e4 	ldr	r1, [r4, #228]	; fField228
        2276a4:	e3310000 	teq	r1, #0	; 0x0
        2276a8:	1a000003 	bne	2276bc <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x80>
        2276ac:	e1a01000 	mov	r1, r0
        2276b0:	e3a00000 	mov	r0, #0	; 0x0
        2276b4:	eb656a9c 	bl	1b8212c <TTestStoreFileList::$__ct(TStore *)>
        2276b8:	e58400e4 	str	r0, [r4, #228]	; fField228
        2276bc:	e59450e4 	ldr	r5, [r4, #228]	; fField228
        2276c0:	e3350000 	teq	r5, #0	; 0x0
        2276c4:	0a000035 	beq	2277a0 <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x164>
        2276c8:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2276cc:	e2801020 	add	r1, r0, #32	; 0x20
        2276d0:	e3a03001 	mov	r3, #1	; 0x1
        2276d4:	e3a02060 	mov	r2, #96	; 0x60
        2276d8:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2276dc:	ebff888c 	bl	209914 <TCommServer::ReadString(char *, unsigned long, unsigned char)>
        2276e0:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2276e4:	e2801080 	add	r1, r0, #128	; 0x80
        2276e8:	e3a03001 	mov	r3, #1	; 0x1
        2276ec:	e3a02080 	mov	r2, #128	; 0x80
        2276f0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2276f4:	ebff8886 	bl	209914 <TCommServer::ReadString(char *, unsigned long, unsigned char)>
        2276f8:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2276fc:	e2800020 	add	r0, r0, #32	; 0x20
        227700:	eb6638ea 	bl	1bb5ab0 <$strlen>
        227704:	e2800004 	add	r0, r0, #4	; 0x4
        227708:	e3c07003 	bic	r7, r0, #3	; 0x3
        22770c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227710:	e2800080 	add	r0, r0, #128	; 0x80
        227714:	eb6638e5 	bl	1bb5ab0 <$strlen>
        227718:	e2800004 	add	r0, r0, #4	; 0x4
        22771c:	e3c00003 	bic	r0, r0, #3	; 0x3
        227720:	e0461007 	sub	r1, r6, r7
        227724:	e0410000 	sub	r0, r1, r0
        227728:	e1a07000 	mov	r7, r0
        22772c:	eb66ea83 	bl	1be2140 <$NewPtr>
        227730:	e1b06000 	movs	r6, r0
        227734:	03e04001 	mvneq	r4, #1	; 0x1
        227738:	0a000019 	beq	2277a4 <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x168>
        22773c:	e1a02007 	mov	r2, r7
        227740:	e1a01006 	mov	r1, r6
        227744:	e3a03001 	mov	r3, #1	; 0x1
        227748:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        22774c:	ebff8841 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        227750:	e5b4009c 	ldr	r0, [r4, #156]!	; fField156
        227754:	e2801020 	add	r1, r0, #32	; 0x20
        227758:	e1a03007 	mov	r3, r7
        22775c:	e1a02006 	mov	r2, r6
        227760:	e1a00005 	mov	r0, r5
        227764:	eb656a74 	bl	1b8213c <TTestStoreFileList::$Add(char *, char *, unsigned long)>
        227768:	e1b04000 	movs	r4, r0
        22776c:	128f0f04 	addne	r0, pc, #16	; 0x10
        227770:	1b672842 	blne	1bf1880 <$printf>
        227774:	e1a00006 	mov	r0, r6
        227778:	eb66e64d 	bl	1be10b4 <$DisposPtr>
        22777c:	ea000008 	b	2277a4 <TTestAgent::StoreTestOrDataFile(unsigned long, unsigned long)+0x168>
        227780:	7374666c 	cmnvc	r4, #113246208	; 0x6c00000
        227784:	6572726f 	ldrvsb	r7, [r2, -#623]!
        227788:	72206164 	eorvc	r6, r0, #25	; 0x19
        22778c:	64207465 	strvst	r7, [r0], -#1125
        227790:	73742063 	cmnvc	r4, #99	; 0x63
        227794:	61736520 	cmnvs	r3, r0, lsr #10
        227798:	66696c65 	strvsbt	r6, [r9], -r5, ror #24
        22779c:	00000000 	andeq	r0, r0, r0
        2277a0:	e3e04002 	mvn	r4, #2	; 0x2
        2277a4:	e1a00004 	mov	r0, r4
        2277a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTestAgent::DoDropConnection(void)
 * Address: 002277ac
 */
TTestAgent::DoDropConnection(void) {
    /*
        2277ac:	e1a0c00d 	mov	ip, sp
        2277b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2277b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2277b8:	e1a04000 	mov	r4, r0
        2277bc:	e3a00001 	mov	r0, #1	; 0x1
        2277c0:	e5c400b0 	strb	r0, [r4, #176]	; fField176
        2277c4:	e3a05000 	mov	r5, #0	; 0x0
        2277c8:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2277cc:	e3300000 	teq	r0, #0	; 0x0
        2277d0:	0a000012 	beq	227820 <TTestAgent::DoDropConnection(void)+0x74>
        2277d4:	ebff88ab 	bl	209a88 <TCommServer::IsBusy(void)>
        2277d8:	e3300000 	teq	r0, #0	; 0x0
        2277dc:	03a01001 	moveq	r1, #1	; 0x1
        2277e0:	059400a4 	ldreq	r0, [r4, #164]	; fField164
        2277e4:	0bff88a5 	bleq	209a80 <TCommServer::SetBusy(unsigned char)>
        2277e8:	e3a02001 	mov	r2, #1	; 0x1
        2277ec:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2277f0:	e59f1034 	ldr	r1, [pc, #34]	; 22782c <TTestAgent::DoDropConnection(void)+0x80>
        2277f4:	eb657282 	bl	1b84204 <TCommServer::$SendCommandHeader(unsigned long, unsigned char)>
        2277f8:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2277fc:	eb656a5a 	bl	1b8216c <TCommServer::$DisconnectFromTestServer(void)>
        227800:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        227804:	e3300000 	teq	r0, #0	; 0x0
        227808:	13a01001 	movne	r1, #1	; 0x1
        22780c:	1b656a48 	blne	1b82134 <TCommServer::$__dt(void)>
        227810:	e58450a4 	str	r5, [r4, #164]	; fField164
        227814:	e5940170 	ldr	r0, [r4, #368]	; fField368
        227818:	e3300000 	teq	r0, #0	; 0x0
        22781c:	15a050a4 	strne	r5, [r0, #164]!	; fField164
        227820:	e1a00005 	mov	r0, r5
        227824:	e5c450b0 	strb	r5, [r4, #176]	; fField176
        227828:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22782c:	64726f70 	ldrvsbt	r6, [r2], -#3952
    */
}

/**
 * Symbol: TTestAgent::DoRunTestsFromStore(unsigned char)
 * Address: 00227830
 */
TTestAgent::DoRunTestsFromStore(unsigned char) {
    /*
        227830:	e1a0c00d 	mov	ip, sp
        227834:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        227838:	e24cb004 	sub	fp, ip, #4	; 0x4
        22783c:	e3a01001 	mov	r1, #1	; 0x1
        227840:	e5c0116d 	strb	r1, [r0, #365]	; fField365
        227844:	e5c0116e 	strb	r1, [r0, #366]	; fField366
        227848:	eb656a48 	bl	1b82170 <TTestAgent::$DoDropConnection(void)>
        22784c:	e3a00000 	mov	r0, #0	; 0x0
        227850:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TTestAgent::AllocateATestReporter(TAgentReporter **)
 * Address: 00227868
 */
TTestAgent::AllocateATestReporter(TAgentReporter **) {
    /*
        227868:	e1a0c00d 	mov	ip, sp
        22786c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        227870:	e24cb004 	sub	fp, ip, #4	; 0x4
        227874:	e1a04001 	mov	r4, r1
        227878:	e3a05000 	mov	r5, #0	; 0x0
        22787c:	e3a01009 	mov	r1, #9	; 0x9
        227880:	e5d0216f 	ldrb	r2, [r0, #367]	; fField367
        227884:	e3320000 	teq	r2, #0	; 0x0
        227888:	159f0028 	ldrne	r0, [pc, #28]	; 2278b8 <TTestAgent::AllocateATestReporter(TAgentReporter **)+0x50>
        22788c:	15900000 	ldrne	r0, [r0]
        227890:	1a000005 	bne	2278ac <TTestAgent::AllocateATestReporter(TAgentReporter **)+0x44>
        227894:	e3a03014 	mov	r3, #20	; 0x14
        227898:	e5b02070 	ldr	r2, [r0, #112]!	; fField112
        22789c:	e3a00000 	mov	r0, #0	; 0x0
        2278a0:	ebff7be9 	bl	20684c <TAgentReporter::__ct(unsigned long, unsigned long, unsigned long)>
        2278a4:	e3300000 	teq	r0, #0	; 0x0
        2278a8:	03e05000 	mvneq	r5, #0	; 0x0
        2278ac:	e5840000 	str	r0, [r4]
        2278b0:	e1a00005 	mov	r0, r5
        2278b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2278b8:	0c104d48 	ldceq	13, cr4, [r0], -#288
    */
}

/**
 * Symbol: TTestAgent::GetSizeOf(void)
 * Address: 002278bc
 */
TTestAgent::GetSizeOf(void) {
    /*
        2278bc:	e3a00f5e 	mov	r0, #376	; 0x178
        2278c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTestAgent::ProcessTestMgrParameters(long)
 * Address: 002278c4
 */
TTestAgent::ProcessTestMgrParameters(long) {
    /*
        2278c4:	e1a0c00d 	mov	ip, sp
        2278c8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2278cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2278d0:	e1a05000 	mov	r5, r0
        2278d4:	e1a04001 	mov	r4, r1
        2278d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2278dc:	e3a06000 	mov	r6, #0	; 0x0
        2278e0:	e3510000 	cmp	r1, #0	; 0x0
        2278e4:	9a00001b 	bls	227958 <TTestAgent::ProcessTestMgrParameters(long)+0x94>
        2278e8:	e59f7020 	ldr	r7, [pc, #20]	; 227910 <TTestAgent::ProcessTestMgrParameters(long)+0x4c>
        2278ec:	e0440006 	sub	r0, r4, r6
        2278f0:	e3500004 	cmp	r0, #4	; 0x4
        2278f4:	2a000006 	bcs	227914 <TTestAgent::ProcessTestMgrParameters(long)+0x50>
        2278f8:	e1560004 	cmp	r6, r4
        2278fc:	23a01000 	movcs	r1, #0	; 0x0
        227900:	33a01001 	movcc	r1, #1	; 0x1
        227904:	e5b500a4 	ldr	r0, [r5, #164]!	; fField164
        227908:	ebff882d 	bl	2099c4 <TCommServer::FlushPadding(unsigned long)>
        22790c:	ea000011 	b	227958 <TTestAgent::ProcessTestMgrParameters(long)+0x94>
        227910:	746d696e 	strvcbt	r6, [sp], -#2414
        227914:	e28d1004 	add	r1, sp, #4	; 0x4
        227918:	e3a03000 	mov	r3, #0	; 0x0
        22791c:	e3a02004 	mov	r2, #4	; 0x4
        227920:	e59500a4 	ldr	r0, [r5, #164]	; fField164
        227924:	ebff87cb 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        227928:	e1a0100d 	mov	r1, sp
        22792c:	e3a03000 	mov	r3, #0	; 0x0
        227930:	e3a02004 	mov	r2, #4	; 0x4
        227934:	e59500a4 	ldr	r0, [r5, #164]	; fField164
        227938:	ebff87c6 	bl	209858 <TCommServer::ReadChunk(void *, long, unsigned char)>
        22793c:	e2866008 	add	r6, r6, #8	; 0x8
        227940:	e59d0004 	ldr	r0, [sp, #4]
        227944:	e1300007 	teq	r0, r7
        227948:	059d0000 	ldreq	r0, [sp]
        22794c:	0b61e9fa 	bleq	1aa213c <$SetRealClock(unsigned long)>
        227950:	e1560004 	cmp	r6, r4
        227954:	3affffe4 	bcc	2278ec <TTestAgent::ProcessTestMgrParameters(long)+0x28>
        227958:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)
 * Address: 0022795c
 */
TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *) {
    /*
        22795c:	e1a0c00d 	mov	ip, sp
        227960:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        227964:	e24cb004 	sub	fp, ip, #4	; 0x4
        227968:	e1a04000 	mov	r4, r0
        22796c:	e1a09001 	mov	r9, r1
        227970:	e1a05003 	mov	r5, r3
        227974:	e24dde31 	sub	sp, sp, #784	; 0x310
        227978:	e28d0004 	add	r0, sp, #4	; 0x4
        22797c:	eb66f22d 	bl	1be4238 <TAEvent::$__ct(void)>
        227980:	e3e07000 	mvn	r7, #0	; 0x0
        227984:	e3a01000 	mov	r1, #0	; 0x0
        227988:	e5cd1284 	strb	r1, [sp, #644]
        22798c:	e284a074 	add	sl, r4, #116	; 0x74
        227990:	e5950008 	ldr	r0, [r5, #8]
        227994:	e285602c 	add	r6, r5, #44	; 0x2c
        227998:	e59f8044 	ldr	r8, [pc, #44]	; 2279e4 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x88>
        22799c:	e350000a 	cmp	r0, #10	; 0xa
        2279a0:	908ff100 	addls	pc, pc, r0, lsl #2
        2279a4:	ea000270 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        2279a8:	ea00026f 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        2279ac:	ea000204 	b	2281c4 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x868>
        2279b0:	ea000206 	b	2281d0 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x874>
        2279b4:	ea000208 	b	2281dc <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x880>
        2279b8:	ea00020a 	b	2281e8 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x88c>
        2279bc:	ea000009 	b	2279e8 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x8c>
        2279c0:	ea000269 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        2279c4:	ea000268 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        2279c8:	ea000267 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        2279cc:	ea000208 	b	2281f4 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x898>
        2279d0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2279d4:	e3300000 	teq	r0, #0	; 0x0
        2279d8:	11a00004 	movne	r0, r4
        2279dc:	1b656df9 	blne	1b831c8 <TTestAgent::$IdleProc(void)>
        2279e0:	ea000261 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        2279e4:	0c104d48 	ldceq	13, cr4, [r0], -#288
        2279e8:	e284202a 	add	r2, r4, #42	; 0x2a
        2279ec:	e2822c01 	add	r2, r2, #256	; 0x100
        2279f0:	e595000c 	ldr	r0, [r5, #12]
        2279f4:	e28490e8 	add	r9, r4, #232	; 0xe8
        2279f8:	e58d230c 	str	r2, [sp, #780]
        2279fc:	e350000d 	cmp	r0, #13	; 0xd
        227a00:	908ff100 	addls	pc, pc, r0, lsl #2
        227a04:	ea000258 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227a08:	ea000257 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227a0c:	ea000010 	b	227a54 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xf8>
        227a10:	ea0000c8 	b	227d38 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x3dc>
        227a14:	ea0000bb 	b	227d08 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x3ac>
        227a18:	ea0000cf 	b	227d5c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x400>
        227a1c:	ea000124 	b	227eb4 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x558>
        227a20:	ea00014a 	b	227f50 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x5f4>
        227a24:	ea000107 	b	227e48 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x4ec>
        227a28:	ea00013b 	b	227f1c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x5c0>
        227a2c:	ea000147 	b	227f50 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x5f4>
        227a30:	ea000081 	b	227c3c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x2e0>
        227a34:	ea000078 	b	227c1c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x2c0>
        227a38:	ea00007c 	b	227c30 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x2d4>
        227a3c:	e3a02066 	mov	r2, #102	; 0x66
        227a40:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        227a44:	e3a01032 	mov	r1, #50	; 0x32
        227a48:	e5b40094 	ldr	r0, [r4, #148]!	; fField148
        227a4c:	eb67170d 	bl	1bed688 <TAEventHandler::$ResetIdle(unsigned long, TimeUnits)>
        227a50:	ea000245 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227a54:	e24dd014 	sub	sp, sp, #20	; 0x14
        227a58:	e28d0004 	add	r0, sp, #4	; 0x4
        227a5c:	eb669709 	bl	1bcd688 <TUNameServer::$__ct(void)>
        227a60:	e59f008c 	ldr	r0, [pc, #8c]	; 227af4 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x198>
        227a64:	e5900000 	ldr	r0, [r0]
        227a68:	e3a05001 	mov	r5, #1	; 0x1
        227a6c:	e58d0000 	str	r0, [sp]
        227a70:	e5c4507c 	strb	r5, [r4, #124]	; fField124
        227a74:	e28d3fc7 	add	r3, sp, #796	; 0x31c
        227a78:	e92d0008 	stmdb	sp!, {r3}
        227a7c:	e28d3fc7 	add	r3, sp, #796	; 0x31c
        227a80:	e28d0008 	add	r0, sp, #8	; 0x8
        227a84:	e28f2f1b 	add	r2, pc, #108	; 0x6c
        227a88:	e28f1f1c 	add	r1, pc, #112	; 0x70
        227a8c:	eb66bc32 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        227a90:	e28dd004 	add	sp, sp, #4	; 0x4
        227a94:	e1a07000 	mov	r7, r0
        227a98:	e1a0000a 	mov	r0, sl
        227a9c:	e59d1318 	ldr	r1, [sp, #792]
        227aa0:	eb66a368 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        227aa4:	e5960000 	ldr	r0, [r6]
        227aa8:	e58400a0 	str	r0, [r4, #160]	; fField160
        227aac:	e5960004 	ldr	r0, [r6, #4]
        227ab0:	e2861008 	add	r1, r6, #8	; 0x8
        227ab4:	e5840174 	str	r0, [r4, #372]	; fField372
        227ab8:	e1a00009 	mov	r0, r9
        227abc:	eb671b26 	bl	1bee75c <$Ustrcpy>
        227ac0:	e286104a 	add	r1, r6, #74	; 0x4a
        227ac4:	e59d0320 	ldr	r0, [sp, #800]
        227ac8:	eb671b23 	bl	1bee75c <$Ustrcpy>
        227acc:	e1a00009 	mov	r0, r9
        227ad0:	e1a0100d 	mov	r1, sp
        227ad4:	eb671b1f 	bl	1bee758 <$Ustrcmp>
        227ad8:	e3300000 	teq	r0, #0	; 0x0
        227adc:	1a000009 	bne	227b08 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x1ac>
        227ae0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        227ae4:	e3300000 	teq	r0, #0	; 0x0
        227ae8:	11a00004 	movne	r0, r4
        227aec:	1b65699f 	blne	1b82170 <TTestAgent::$DoDropConnection(void)>
        227af0:	ea000038 	b	227bd8 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x27c>
        227af4:	0037a704 	eoreqs	sl, r7, r4, lsl #14
        227af8:	5455506f 	ldrplb	r5, [r5], -#111	; fField111
        227afc:	72740000 	rsbvcs	r0, r4, #0	; 0x0
        227b00:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        227b04:	00000000 	andeq	r0, r0, r0
        227b08:	e5c450b0 	strb	r5, [r4, #176]	; fField176
        227b0c:	e24dd008 	sub	sp, sp, #8	; 0x8
        227b10:	e5940174 	ldr	r0, [r4, #372]	; fField372
        227b14:	e3300000 	teq	r0, #0	; 0x0
        227b18:	0a000011 	beq	227b64 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x208>
        227b1c:	e3370000 	teq	r7, #0	; 0x0
        227b20:	1a00000f 	bne	227b64 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x208>
        227b24:	e3a00002 	mov	r0, #2	; 0x2
        227b28:	eb666987 	bl	1bc214c <$AllocateRefHandle(long)>
        227b2c:	e58d0000 	str	r0, [sp]
        227b30:	e1a0500d 	mov	r5, sp
        227b34:	e28f0f2b 	add	r0, pc, #172	; 0xac
        227b38:	eb6675d0 	bl	1bc5280 <$Intern(char *)>
        227b3c:	eb666982 	bl	1bc214c <$AllocateRefHandle(long)>
        227b40:	e58d0004 	str	r0, [sp, #4]
        227b44:	e28d1004 	add	r1, sp, #4	; 0x4
        227b48:	e1a02005 	mov	r2, r5
        227b4c:	e5940174 	ldr	r0, [r4, #372]	; fField372
        227b50:	eb666d9f 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        227b54:	e59d0000 	ldr	r0, [sp]
        227b58:	eb666d97 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        227b5c:	e59d0004 	ldr	r0, [sp, #4]
        227b60:	eb666d95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        227b64:	e1a01009 	mov	r1, r9
        227b68:	e1a00004 	mov	r0, r4
        227b6c:	e59d2328 	ldr	r2, [sp, #808]
        227b70:	eb6571a6 	bl	1b84210 <TTestAgent::$Setup(char *, char *)>
        227b74:	e24dd008 	sub	sp, sp, #8	; 0x8
        227b78:	e5941174 	ldr	r1, [r4, #372]	; fField372
        227b7c:	e3310000 	teq	r1, #0	; 0x0
        227b80:	0a000011 	beq	227bcc <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x270>
        227b84:	e3300000 	teq	r0, #0	; 0x0
        227b88:	1a00000f 	bne	227bcc <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x270>
        227b8c:	e3a00002 	mov	r0, #2	; 0x2
        227b90:	eb66696d 	bl	1bc214c <$AllocateRefHandle(long)>
        227b94:	e58d0000 	str	r0, [sp]
        227b98:	e1a0500d 	mov	r5, sp
        227b9c:	e28f0f17 	add	r0, pc, #92	; 0x5c
        227ba0:	eb6675b6 	bl	1bc5280 <$Intern(char *)>
        227ba4:	eb666968 	bl	1bc214c <$AllocateRefHandle(long)>
        227ba8:	e58d0004 	str	r0, [sp, #4]
        227bac:	e28d1004 	add	r1, sp, #4	; 0x4
        227bb0:	e1a02005 	mov	r2, r5
        227bb4:	e5940174 	ldr	r0, [r4, #372]	; fField372
        227bb8:	eb666d85 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        227bbc:	e59d0000 	ldr	r0, [sp]
        227bc0:	eb666d7d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        227bc4:	e59d0004 	ldr	r0, [sp, #4]
        227bc8:	eb666d7b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        227bcc:	e3a01000 	mov	r1, #0	; 0x0
        227bd0:	e5c410b0 	strb	r1, [r4, #176]	; fField176
        227bd4:	e28dd010 	add	sp, sp, #16	; 0x10
        227bd8:	e28d0004 	add	r0, sp, #4	; 0x4
        227bdc:	e3a01000 	mov	r1, #0	; 0x0
        227be0:	eb669ac7 	bl	1bce704 <TUNameServer::$__dt(void)>
        227be4:	ea0000af 	b	227ea8 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x54c>
        227be8:	74657374 	strvcbt	r7, [r5], -#884	; fField884
        227bec:	4d677243 	sfmmi	f7, 2, [r7, -#268]!
        227bf0:	6f6e6e65 	swivs	0x006e6e65
        227bf4:	6374546f 	cmnvs	r4, #1862270976	; 0x6f000000
        227bf8:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        227bfc:	65720000 	ldrvsb	r0, [r2]!
        227c00:	74657374 	strvcbt	r7, [r5], -#884	; fField884
        227c04:	4d677243 	sfmmi	f7, 2, [r7, -#268]!
        227c08:	6f6e6e65 	swivs	0x006e6e65
        227c0c:	63746564 	cmnvs	r4, #419430400	; 0x19000000
        227c10:	546f5365 	strplbt	r5, [pc], #365	; 227c18 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x2bc>	; fField365
        227c14:	72766572 	rsbvcs	r6, r6, #478150656	; 0x1c800000
        227c18:	00000000 	andeq	r0, r0, r0
        227c1c:	e1a00004 	mov	r0, r4
        227c20:	eb656952 	bl	1b82170 <TTestAgent::$DoDropConnection(void)>
        227c24:	e1a00004 	mov	r0, r4
        227c28:	eb66f9be 	bl	1be6328 <TAppWorld::$AETerminateLoop(void)>
        227c2c:	ea0001ce 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227c30:	e1a00004 	mov	r0, r4
        227c34:	eb65694d 	bl	1b82170 <TTestAgent::$DoDropConnection(void)>
        227c38:	ea0001cb 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227c3c:	e28d3084 	add	r3, sp, #132	; 0x84
        227c40:	e92d0008 	stmdb	sp!, {r3}
        227c44:	e1a00006 	mov	r0, r6
        227c48:	e28d3f62 	add	r3, sp, #392	; 0x188
        227c4c:	e28d2004 	add	r2, sp, #4	; 0x4
        227c50:	e28f1f1e 	add	r1, pc, #120	; 0x78
        227c54:	eb663791 	bl	1bb5aa0 <$sscanf>
        227c58:	e28dd004 	add	sp, sp, #4	; 0x4
        227c5c:	e28d0f61 	add	r0, sp, #388	; 0x184
        227c60:	e3a01001 	mov	r1, #1	; 0x1
        227c64:	eb000b1f 	bl	22a8e8 <RecoverSpacesInString(char *, char)>
        227c68:	e28d0084 	add	r0, sp, #132	; 0x84
        227c6c:	e3a01001 	mov	r1, #1	; 0x1
        227c70:	eb000b1c 	bl	22a8e8 <RecoverSpacesInString(char *, char)>
        227c74:	e59d0000 	ldr	r0, [sp]
        227c78:	e3300001 	teq	r0, #1	; 0x1
        227c7c:	13300004 	teqne	r0, #4	; 0x4
        227c80:	1a000015 	bne	227cdc <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x380>
        227c84:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227c88:	e2800020 	add	r0, r0, #32	; 0x20
        227c8c:	e28d1f61 	add	r1, sp, #388	; 0x184
        227c90:	eb663785 	bl	1bb5aac <$strcpy>
        227c94:	e5b4009c 	ldr	r0, [r4, #156]!	; fField156
        227c98:	e2800080 	add	r0, r0, #128	; 0x80
        227c9c:	e28d1084 	add	r1, sp, #132	; 0x84
        227ca0:	eb663781 	bl	1bb5aac <$strcpy>
        227ca4:	e59d0000 	ldr	r0, [sp]
        227ca8:	e3300004 	teq	r0, #4	; 0x4
        227cac:	1a0001ae 	bne	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227cb0:	e28d1f61 	add	r1, sp, #388	; 0x184
        227cb4:	e5980000 	ldr	r0, [r8]
        227cb8:	eb66377b 	bl	1bb5aac <$strcpy>
        227cbc:	e5980000 	ldr	r0, [r8]
        227cc0:	e2800060 	add	r0, r0, #96	; 0x60
        227cc4:	e28d1084 	add	r1, sp, #132	; 0x84
        227cc8:	eb663777 	bl	1bb5aac <$strcpy>
        227ccc:	ea0001a6 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227cd0:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        227cd4:	73202573 	teqvc	r0, #482344960	; 0x1cc00000
        227cd8:	00000000 	andeq	r0, r0, r0
        227cdc:	e3300002 	teq	r0, #2	; 0x2
        227ce0:	1a0001a1 	bne	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227ce4:	e5940098 	ldr	r0, [r4, #152]	; fField152
        227ce8:	e2800020 	add	r0, r0, #32	; 0x20
        227cec:	e28d1f61 	add	r1, sp, #388	; 0x184
        227cf0:	eb66376d 	bl	1bb5aac <$strcpy>
        227cf4:	e5b40098 	ldr	r0, [r4, #152]!	; fField152
        227cf8:	e2800080 	add	r0, r0, #128	; 0x80
        227cfc:	e28d1084 	add	r1, sp, #132	; 0x84
        227d00:	eb663769 	bl	1bb5aac <$strcpy>
        227d04:	eaffffe9 	b	227cb0 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x354>
        227d08:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        227d0c:	e3300000 	teq	r0, #0	; 0x0
        227d10:	1a000195 	bne	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227d14:	e3a00001 	mov	r0, #1	; 0x1
        227d18:	e5c400b0 	strb	r0, [r4, #176]	; fField176
        227d1c:	e1a01009 	mov	r1, r9
        227d20:	e1a00004 	mov	r0, r4
        227d24:	e59d230c 	ldr	r2, [sp, #780]
        227d28:	eb657138 	bl	1b84210 <TTestAgent::$Setup(char *, char *)>
        227d2c:	e3a01000 	mov	r1, #0	; 0x0
        227d30:	e5c410b0 	strb	r1, [r4, #176]	; fField176
        227d34:	ea00018c 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227d38:	e5940098 	ldr	r0, [r4, #152]	; fField152
        227d3c:	e2800010 	add	r0, r0, #16	; 0x10
        227d40:	eb66af24 	bl	1bd39d8 <$GetGlobalTime>
        227d44:	e5940098 	ldr	r0, [r4, #152]	; fField152
        227d48:	e2800018 	add	r0, r0, #24	; 0x18
        227d4c:	e59410a0 	ldr	r1, [r4, #160]	; fField160
        227d50:	eb66b33d 	bl	1bd4a4c <$GetTaskTime>
        227d54:	e24dd024 	sub	sp, sp, #36	; 0x24
        227d58:	ea0000d6 	b	2280b8 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x75c>
        227d5c:	e24dd010 	sub	sp, sp, #16	; 0x10
        227d60:	e5940080 	ldr	r0, [r4, #128]	; fField128
        227d64:	e3300005 	teq	r0, #5	; 0x5
        227d68:	13a07002 	movne	r7, #2	; 0x2
        227d6c:	03a07004 	moveq	r7, #4	; 0x4
        227d70:	e1a0000d 	mov	r0, sp
        227d74:	e59410a0 	ldr	r1, [r4, #160]	; fField160
        227d78:	eb66b333 	bl	1bd4a4c <$GetTaskTime>
        227d7c:	e5940098 	ldr	r0, [r4, #152]	; fField152
        227d80:	e2800018 	add	r0, r0, #24	; 0x18
        227d84:	e24dd008 	sub	sp, sp, #8	; 0x8
        227d88:	e28d2008 	add	r2, sp, #8	; 0x8
        227d8c:	e8925000 	ldmia	r2, {ip, lr}
        227d90:	e88d5000 	stmia	sp, {ip, lr}
        227d94:	e1a0100d 	mov	r1, sp
        227d98:	eb66e4bf 	bl	1be109c <$CompSub>
        227d9c:	e28d008c 	add	r0, sp, #140	; 0x8c
        227da0:	e8bd5000 	ldmia	sp!, {ip, lr}
        227da4:	e8805000 	stmia	r0, {ip, lr}
        227da8:	e28d0008 	add	r0, sp, #8	; 0x8
        227dac:	eb66af09 	bl	1bd39d8 <$GetGlobalTime>
        227db0:	e5940098 	ldr	r0, [r4, #152]	; fField152
        227db4:	e2800010 	add	r0, r0, #16	; 0x10
        227db8:	e24dd008 	sub	sp, sp, #8	; 0x8
        227dbc:	e28d2010 	add	r2, sp, #16	; 0x10
        227dc0:	e8925000 	ldmia	r2, {ip, lr}
        227dc4:	e88d5000 	stmia	sp, {ip, lr}
        227dc8:	e1a0100d 	mov	r1, sp
        227dcc:	eb66e4b2 	bl	1be109c <$CompSub>
        227dd0:	e28d0094 	add	r0, sp, #148	; 0x94
        227dd4:	e8bd5000 	ldmia	sp!, {ip, lr}
        227dd8:	e8805000 	stmia	r0, {ip, lr}
        227ddc:	e28d0084 	add	r0, sp, #132	; 0x84
        227de0:	e3a01066 	mov	r1, #102	; 0x66
        227de4:	e2811c0e 	add	r1, r1, #3584	; 0xe00
        227de8:	eb66a291 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
        227dec:	e1a08000 	mov	r8, r0
        227df0:	e28d008c 	add	r0, sp, #140	; 0x8c
        227df4:	e3a01066 	mov	r1, #102	; 0x66
        227df8:	e2811c0e 	add	r1, r1, #3584	; 0xe00
        227dfc:	eb66a28c 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
        227e00:	e1a02000 	mov	r2, r0
        227e04:	e28d0fa5 	add	r0, sp, #660	; 0x294
        227e08:	e28f1f03 	add	r1, pc, #12	; 0xc
        227e0c:	e1a03008 	mov	r3, r8
        227e10:	eb66371f 	bl	1bb5a94 <$sprintf>
        227e14:	e24dd014 	sub	sp, sp, #20	; 0x14
        227e18:	ea0000a6 	b	2280b8 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x75c>
        227e1c:	20202020 	eorcs	r2, r0, r0, lsr #32
        227e20:	20647572 	rsbcs	r7, r4, r2, ror r5
        227e24:	6174696f 	cmnvs	r4, pc, ror #18
        227e28:	6e3d2025 	cdpvs	0, 3, cr2, cr13, cr5, {1}
        227e2c:	64206d73 	strvst	r6, [r0], -#3443
        227e30:	2c207461 	stccs	4, cr7, [r0], -#388
        227e34:	736b2064 	cmnvc	fp, #100	; 0x64
        227e38:	75726174 	ldrvcb	r6, [r2, -#372]!	; fField372
        227e3c:	696f6e3d 	stmvsdb	pc!, {r0, r2, r3, r4, r5, r9, sl, fp, sp, lr}^
        227e40:	20256420 	eorcs	r6, r5, r0, lsr #8
        227e44:	6d730d00 	ldcvsl	13, cr0, [r3]
        227e48:	e24dd010 	sub	sp, sp, #16	; 0x10
        227e4c:	e3a01000 	mov	r1, #0	; 0x0
        227e50:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227e54:	e5801000 	str	r1, [r0]
        227e58:	e5940080 	ldr	r0, [r4, #128]	; fField128
        227e5c:	e3300002 	teq	r0, #2	; 0x2
        227e60:	13a00005 	movne	r0, #5	; 0x5
        227e64:	03a00004 	moveq	r0, #4	; 0x4
        227e68:	e5840080 	str	r0, [r4, #128]	; fField128
        227e6c:	e5940170 	ldr	r0, [r4, #368]	; fField368
        227e70:	e3300000 	teq	r0, #0	; 0x0
        227e74:	15941080 	ldrne	r1, [r4, #128]	; fField128
        227e78:	15a01080 	strne	r1, [r0, #128]!	; fField128
        227e7c:	e24dd004 	sub	sp, sp, #4	; 0x4
        227e80:	e1a00006 	mov	r0, r6
        227e84:	e1a0200d 	mov	r2, sp
        227e88:	e28f1f08 	add	r1, pc, #32	; 0x20
        227e8c:	eb663703 	bl	1bb5aa0 <$sscanf>
        227e90:	e59d0000 	ldr	r0, [sp]
        227e94:	e3300000 	teq	r0, #0	; 0x0
        227e98:	13a00001 	movne	r0, #1	; 0x1
        227e9c:	e5c4016f 	strb	r0, [r4, #367]	; fField367
        227ea0:	e1a00004 	mov	r0, r4
        227ea4:	eb626cbd 	bl	1ac31a0 <TTestAgent::$StartCTestCase(void)>
        227ea8:	e28dd014 	add	sp, sp, #20	; 0x14
        227eac:	ea00012e 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        227eb0:	25640000 	strcsb	r0, [r4]!
        227eb4:	e24dd024 	sub	sp, sp, #36	; 0x24
        227eb8:	e1a0000d 	mov	r0, sp
        227ebc:	eb6695f1 	bl	1bcd688 <TUNameServer::$__ct(void)>
        227ec0:	e28d3fcb 	add	r3, sp, #812	; 0x32c
        227ec4:	e92d0008 	stmdb	sp!, {r3}
        227ec8:	e28d3fcb 	add	r3, sp, #812	; 0x32c
        227ecc:	e28d0004 	add	r0, sp, #4	; 0x4
        227ed0:	e24f2ff8 	sub	r2, pc, #992	; 0x3e0
        227ed4:	e28f1f0e 	add	r1, pc, #56	; 0x38
        227ed8:	eb66bb1f 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        227edc:	e28dd004 	add	sp, sp, #4	; 0x4
        227ee0:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227ee4:	e2800008 	add	r0, r0, #8	; 0x8
        227ee8:	e59d1328 	ldr	r1, [sp, #808]
        227eec:	eb66a255 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        227ef0:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227ef4:	e5b01004 	ldr	r1, [r0, #4]!
        227ef8:	e2800014 	add	r0, r0, #20	; 0x14
        227efc:	eb66b2d2 	bl	1bd4a4c <$GetTaskTime>
        227f00:	e1a0000d 	mov	r0, sp
        227f04:	e3a01000 	mov	r1, #0	; 0x0
        227f08:	eb6699fd 	bl	1bce704 <TUNameServer::$__dt(void)>
        227f0c:	e28dd010 	add	sp, sp, #16	; 0x10
        227f10:	ea000005 	b	227f2c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x5d0>
        227f14:	7474736b 	ldrvcbt	r7, [r4], -#875	; fField875
        227f18:	00000000 	andeq	r0, r0, r0
        227f1c:	e24dd014 	sub	sp, sp, #20	; 0x14
        227f20:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        227f24:	e594109c 	ldr	r1, [r4, #156]	; fField156
        227f28:	e5a10004 	str	r0, [r1, #4]!
        227f2c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227f30:	e5b01004 	ldr	r1, [r0, #4]!
        227f34:	e2800014 	add	r0, r0, #20	; 0x14
        227f38:	eb66b2c3 	bl	1bd4a4c <$GetTaskTime>
        227f3c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227f40:	e2800010 	add	r0, r0, #16	; 0x10
        227f44:	eb66aea3 	bl	1bd39d8 <$GetGlobalTime>
        227f48:	e24dd010 	sub	sp, sp, #16	; 0x10
        227f4c:	ea000059 	b	2280b8 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x75c>
        227f50:	e24dd024 	sub	sp, sp, #36	; 0x24
        227f54:	e5940080 	ldr	r0, [r4, #128]	; fField128
        227f58:	e3300005 	teq	r0, #5	; 0x5
        227f5c:	13a07002 	movne	r7, #2	; 0x2
        227f60:	03a07003 	moveq	r7, #3	; 0x3
        227f64:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227f68:	e5b01004 	ldr	r1, [r0, #4]!
        227f6c:	e1a0000d 	mov	r0, sp
        227f70:	eb66b2b5 	bl	1bd4a4c <$GetTaskTime>
        227f74:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227f78:	e2800018 	add	r0, r0, #24	; 0x18
        227f7c:	e24dd008 	sub	sp, sp, #8	; 0x8
        227f80:	e28d1008 	add	r1, sp, #8	; 0x8
        227f84:	e8915000 	ldmia	r1, {ip, lr}
        227f88:	e88d5000 	stmia	sp, {ip, lr}
        227f8c:	e1a0100d 	mov	r1, sp
        227f90:	eb66e441 	bl	1be109c <$CompSub>
        227f94:	e28d00a0 	add	r0, sp, #160	; 0xa0
        227f98:	e8bd5000 	ldmia	sp!, {ip, lr}
        227f9c:	e8805000 	stmia	r0, {ip, lr}
        227fa0:	e28d0008 	add	r0, sp, #8	; 0x8
        227fa4:	eb66ae8b 	bl	1bd39d8 <$GetGlobalTime>
        227fa8:	e594009c 	ldr	r0, [r4, #156]	; fField156
        227fac:	e2800010 	add	r0, r0, #16	; 0x10
        227fb0:	e24dd008 	sub	sp, sp, #8	; 0x8
        227fb4:	e28d1010 	add	r1, sp, #16	; 0x10
        227fb8:	e8915000 	ldmia	r1, {ip, lr}
        227fbc:	e88d5000 	stmia	sp, {ip, lr}
        227fc0:	e1a0100d 	mov	r1, sp
        227fc4:	eb66e434 	bl	1be109c <$CompSub>
        227fc8:	e28d00a8 	add	r0, sp, #168	; 0xa8
        227fcc:	e8bd5000 	ldmia	sp!, {ip, lr}
        227fd0:	e8805000 	stmia	r0, {ip, lr}
        227fd4:	e28d0098 	add	r0, sp, #152	; 0x98
        227fd8:	e3a01066 	mov	r1, #102	; 0x66
        227fdc:	e2811c0e 	add	r1, r1, #3584	; 0xe00
        227fe0:	eb66a213 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
        227fe4:	e1a08000 	mov	r8, r0
        227fe8:	e28d00a0 	add	r0, sp, #160	; 0xa0
        227fec:	e3a01066 	mov	r1, #102	; 0x66
        227ff0:	e2811c0e 	add	r1, r1, #3584	; 0xe00
        227ff4:	eb66a20e 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
        227ff8:	e1a02000 	mov	r2, r0
        227ffc:	e28d0faa 	add	r0, sp, #680	; 0x2a8
        228000:	e24f1f7b 	sub	r1, pc, #492	; 0x1ec
        228004:	e1a03008 	mov	r3, r8
        228008:	eb6636a1 	bl	1bb5a94 <$sprintf>
        22800c:	e595000c 	ldr	r0, [r5, #12]
        228010:	e3300006 	teq	r0, #6	; 0x6
        228014:	1a000016 	bne	228074 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x718>
        228018:	e59f0170 	ldr	r0, [pc, #170]	; 228190 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x834>
        22801c:	e58d0028 	str	r0, [sp, #40]
        228020:	e59f016c 	ldr	r0, [pc, #16c]	; 228194 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x838>
        228024:	e58d002c 	str	r0, [sp, #44]
        228028:	e3a00002 	mov	r0, #2	; 0x2
        22802c:	e58d0030 	str	r0, [sp, #48]
        228030:	e594009c 	ldr	r0, [r4, #156]	; fField156
        228034:	e280c008 	add	ip, r0, #8	; 0x8
        228038:	e3a0e000 	mov	lr, #0	; 0x0
        22803c:	e3a01000 	mov	r1, #0	; 0x0
        228040:	e3a03000 	mov	r3, #0	; 0x0
        228044:	e1a02001 	mov	r2, r1
        228048:	e3a00000 	mov	r0, #0	; 0x0
        22804c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        228050:	e1a0300e 	mov	r3, lr
        228054:	e3a02070 	mov	r2, #112	; 0x70
        228058:	e92d000c 	stmdb	sp!, {r2, r3}
        22805c:	e28d3040 	add	r3, sp, #64	; 0x40
        228060:	e1a0000c 	mov	r0, ip
        228064:	e3a02000 	mov	r2, #0	; 0x0
        228068:	e3a01001 	mov	r1, #1	; 0x1
        22806c:	eb66cb35 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        228070:	e28dd018 	add	sp, sp, #24	; 0x18
        228074:	e594009c 	ldr	r0, [r4, #156]	; fField156
        228078:	e5902000 	ldr	r2, [r0]
        22807c:	e3320000 	teq	r2, #0	; 0x0
        228080:	0a00000c 	beq	2280b8 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x75c>
        228084:	e24dd050 	sub	sp, sp, #80	; 0x50
        228088:	e1a0000d 	mov	r0, sp
        22808c:	e28f1f41 	add	r1, pc, #260	; 0x104
        228090:	eb66367f 	bl	1bb5a94 <$sprintf>
        228094:	e1a0000d 	mov	r0, sp
        228098:	eb6725f8 	bl	1bf1880 <$printf>
        22809c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2280a0:	e5900000 	ldr	r0, [r0]
        2280a4:	eb66c70e 	bl	1bd9ce4 <$RemovePackage(unsigned long)>
        2280a8:	e3a01000 	mov	r1, #0	; 0x0
        2280ac:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2280b0:	e5801000 	str	r1, [r0]
        2280b4:	e28dd050 	add	sp, sp, #80	; 0x50
        2280b8:	e1a01006 	mov	r1, r6
        2280bc:	e28d0f6a 	add	r0, sp, #424	; 0x1a8
        2280c0:	eb663679 	bl	1bb5aac <$strcpy>
        2280c4:	e28d1faa 	add	r1, sp, #680	; 0x2a8
        2280c8:	e28d0f6a 	add	r0, sp, #424	; 0x1a8
        2280cc:	eb663674 	bl	1bb5aa4 <$strcat>
        2280d0:	e28d3f6a 	add	r3, sp, #424	; 0x1a8
        2280d4:	e3a02000 	mov	r2, #0	; 0x0
        2280d8:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        2280dc:	e59f10d8 	ldr	r1, [pc, #d8]	; 2281bc <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x860>
        2280e0:	eb656824 	bl	1b82178 <TMessageQueue::$EnqueueMessage(unsigned long, FourULongs *, char const *)>
        2280e4:	e3770001 	cmn	r7, #1	; 0x1
        2280e8:	15847080 	strne	r7, [r4, #128]	; fField128
        2280ec:	15940170 	ldrne	r0, [r4, #368]	; fField368
        2280f0:	13300000 	teqne	r0, #0	; 0x0
        2280f4:	15a07080 	strne	r7, [r0, #128]!	; fField128
        2280f8:	e5b40174 	ldr	r0, [r4, #372]!	; fField372
        2280fc:	e3300000 	teq	r0, #0	; 0x0
        228100:	0a000020 	beq	228188 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x82c>
        228104:	e24dd0f4 	sub	sp, sp, #244	; 0xf4
        228108:	e1a0000d 	mov	r0, sp
        22810c:	eb66f049 	bl	1be4238 <TAEvent::$__ct(void)>
        228110:	e59f0078 	ldr	r0, [pc, #78]	; 228190 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x834>
        228114:	e58d0000 	str	r0, [sp]
        228118:	e59f00a0 	ldr	r0, [pc, #a0]	; 2281c0 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x864>
        22811c:	e58d0004 	str	r0, [sp, #4]
        228120:	e3a0c0f4 	mov	ip, #244	; 0xf4
        228124:	e5b5000c 	ldr	r0, [r5, #12]!
        228128:	e3300004 	teq	r0, #4	; 0x4
        22812c:	03a00006 	moveq	r0, #6	; 0x6
        228130:	0a000003 	beq	228144 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x7e8>
        228134:	e3300006 	teq	r0, #6	; 0x6
        228138:	13300009 	teqne	r0, #9	; 0x9
        22813c:	1a000010 	bne	228184 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x828>
        228140:	e3a00005 	mov	r0, #5	; 0x5
        228144:	e3a0e000 	mov	lr, #0	; 0x0
        228148:	e3a01000 	mov	r1, #0	; 0x0
        22814c:	e3a03000 	mov	r3, #0	; 0x0
        228150:	e1a02001 	mov	r2, r1
        228154:	e58d0008 	str	r0, [sp, #8]
        228158:	e3a00000 	mov	r0, #0	; 0x0
        22815c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        228160:	e1a0300e 	mov	r3, lr
        228164:	e1a0200c 	mov	r2, ip
        228168:	e92d000c 	stmdb	sp!, {r2, r3}
        22816c:	e28d3018 	add	r3, sp, #24	; 0x18
        228170:	e1a0000a 	mov	r0, sl
        228174:	e3a02000 	mov	r2, #0	; 0x0
        228178:	e3a01001 	mov	r1, #1	; 0x1
        22817c:	eb66caf1 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        228180:	e28dd018 	add	sp, sp, #24	; 0x18
        228184:	e28dd0f4 	add	sp, sp, #244	; 0xf4
        228188:	e28dd024 	add	sp, sp, #36	; 0x24
        22818c:	ea000076 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        228190:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        228194:	7674736b 	ldrvcbt	r7, [r4], -fp, ror #6	; fField6
        228198:	746f2072 	strvcbt	r2, [pc], #72	; 2281a0 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x844>
        22819c:	656d6f76 	strvsb	r6, [sp, -#3958]!
        2281a0:	65207465 	strvs	r7, [r0, -#1125]!
        2281a4:	73742063 	cmnvc	r4, #99	; 0x63
        2281a8:	61736520 	cmnvs	r3, r0, lsr #10
        2281ac:	5061636b 	rsbpl	r6, r1, fp, ror #6
        2281b0:	61676549 	cmnvs	r7, r9, asr #10
        2281b4:	643d2025 	ldrvst	r2, [sp], -#37	; fField37
        2281b8:	640d0000 	strvs	r0, [sp]
        2281bc:	616d7367 	cmnvs	sp, r7, ror #6
        2281c0:	74737365 	ldrvcbt	r7, [r3], -#869
        2281c4:	e51f1010 	ldr	r1, [pc, #fffffff0]	; 2281bc <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x860>
        2281c8:	e58d1000 	str	r1, [sp]
        2281cc:	ea000061 	b	228358 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x9fc>
        2281d0:	e59f0000 	ldr	r0, [pc, #0]	; 2281d8 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x87c>
        2281d4:	ea00005e 	b	228354 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x9f8>
        2281d8:	61657272 	cmnvs	r5, r2, ror r2
        2281dc:	e59f0000 	ldr	r0, [pc, #0]	; 2281e4 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x888>
        2281e0:	ea00005b 	b	228354 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x9f8>
        2281e4:	746d7367 	strvcbt	r7, [sp], -#871
        2281e8:	e59f0000 	ldr	r0, [pc, #0]	; 2281f0 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x894>
        2281ec:	ea000058 	b	228354 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x9f8>
        2281f0:	74657272 	strvcbt	r7, [r5], -#626
        2281f4:	e28400b4 	add	r0, r4, #180	; 0xb4
        2281f8:	e1a07000 	mov	r7, r0
        2281fc:	e8b91008 	ldmia	r9!, {r3, ip}
        228200:	e8a01008 	stmia	r0!, {r3, ip}
        228204:	e8991008 	ldmia	r9, {r3, ip}
        228208:	e8801008 	stmia	r0, {r3, ip}
        22820c:	e3a00001 	mov	r0, #1	; 0x1
        228210:	e5c400c4 	strb	r0, [r4, #196]	; fField196
        228214:	e5d4016d 	ldrb	r0, [r4, #365]	; fField365
        228218:	e3300000 	teq	r0, #0	; 0x0
        22821c:	0a000015 	beq	228278 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x91c>
        228220:	e24dd010 	sub	sp, sp, #16	; 0x10
        228224:	e2855014 	add	r5, r5, #20	; 0x14
        228228:	e9b5000c 	ldmib	r5!, {r2, r3}
        22822c:	e92d000c 	stmdb	sp!, {r2, r3}
        228230:	e28d3010 	add	r3, sp, #16	; 0x10
        228234:	e1a01006 	mov	r1, r6
        228238:	e28d2008 	add	r2, sp, #8	; 0x8
        22823c:	e59400e0 	ldr	r0, [r4, #224]	; fField224
        228240:	eb656bdb 	bl	1b831b4 <TTestStoreFileList::$Get(char *, char **, unsigned long *, unsigned long, unsigned long)>
        228244:	e28dd008 	add	sp, sp, #8	; 0x8
        228248:	e58d0004 	str	r0, [sp, #4]
        22824c:	e59d0000 	ldr	r0, [sp]
        228250:	e58d000c 	str	r0, [sp, #12]
        228254:	e1a00007 	mov	r0, r7
        228258:	e28d1004 	add	r1, sp, #4	; 0x4
        22825c:	e3a03000 	mov	r3, #0	; 0x0
        228260:	e3a0200c 	mov	r2, #12	; 0xc
        228264:	eb66c6a0 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        228268:	e3a01000 	mov	r1, #0	; 0x0
        22826c:	e5c410c4 	strb	r1, [r4, #196]	; fField196
        228270:	e28dd010 	add	sp, sp, #16	; 0x10
        228274:	ea00003c 	b	22836c <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa10>
        228278:	e5b80008 	ldr	r0, [r8, #8]!
        22827c:	e3300000 	teq	r0, #0	; 0x0
        228280:	0a000032 	beq	228350 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x9f4>
        228284:	e24ddf41 	sub	sp, sp, #260	; 0x104
        228288:	e28d0010 	add	r0, sp, #16	; 0x10
        22828c:	eb66efe9 	bl	1be4238 <TAEvent::$__ct(void)>
        228290:	e51f0108 	ldr	r0, [pc, #fffffef8]	; 228190 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x834>
        228294:	e58d0010 	str	r0, [sp, #16]
        228298:	e51f00e0 	ldr	r0, [pc, #ffffff20]	; 2281c0 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x864>
        22829c:	e58d0014 	str	r0, [sp, #20]
        2282a0:	e3a00007 	mov	r0, #7	; 0x7
        2282a4:	e1a01006 	mov	r1, r6
        2282a8:	e58d0018 	str	r0, [sp, #24]
        2282ac:	e28d0024 	add	r0, sp, #36	; 0x24
        2282b0:	eb6635fd 	bl	1bb5aac <$strcpy>
        2282b4:	e2853020 	add	r3, r5, #32	; 0x20
        2282b8:	e893000c 	ldmia	r3, {r2, r3}
        2282bc:	e92d000c 	stmdb	sp!, {r2, r3}
        2282c0:	e28d008c 	add	r0, sp, #140	; 0x8c
        2282c4:	e2853018 	add	r3, r5, #24	; 0x18
        2282c8:	e893000c 	ldmia	r3, {r2, r3}
        2282cc:	e28f1f1c 	add	r1, pc, #112	; 0x70
        2282d0:	eb6635ef 	bl	1bb5a94 <$sprintf>
        2282d4:	e28dd008 	add	sp, sp, #8	; 0x8
        2282d8:	e1a0000d 	mov	r0, sp
        2282dc:	e3a0100c 	mov	r1, #12	; 0xc
        2282e0:	e3a02000 	mov	r2, #0	; 0x0
        2282e4:	e3a0c000 	mov	ip, #0	; 0x0
        2282e8:	e3a08000 	mov	r8, #0	; 0x0
        2282ec:	e3a03000 	mov	r3, #0	; 0x0
        2282f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2282f4:	e1a03008 	mov	r3, r8
        2282f8:	e1a0100c 	mov	r1, ip
        2282fc:	e3a00f43 	mov	r0, #268	; 0x10c
        228300:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        228304:	e28d3030 	add	r3, sp, #48	; 0x30
        228308:	e92d0008 	stmdb	sp!, {r3}
        22830c:	e28d3030 	add	r3, sp, #48	; 0x30
        228310:	e1a0000a 	mov	r0, sl
        228314:	e3a02002 	mov	r2, #2	; 0x2
        228318:	e3a01001 	mov	r1, #1	; 0x1
        22831c:	eb66ca8a 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        228320:	e28dd024 	add	sp, sp, #36	; 0x24
        228324:	e1a00007 	mov	r0, r7
        228328:	e1a0100d 	mov	r1, sp
        22832c:	e3a03000 	mov	r3, #0	; 0x0
        228330:	e3a0200c 	mov	r2, #12	; 0xc
        228334:	eb66c66c 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        228338:	e5c480c4 	strb	r8, [r4, #196]	; fField196
        22833c:	e28ddf41 	add	sp, sp, #260	; 0x104
        228340:	ea000004 	b	228358 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0x9fc>
        228344:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        228348:	64202564 	strvst	r2, [r0], -#1380
        22834c:	20256400 	eorcs	r6, r5, r0, lsl #8
        228350:	e59f0018 	ldr	r0, [pc, #18]	; 228370 <TTestAgent::AEHandlerProc(TUMsgToken *, unsigned long *, TTestAgentEvent *)+0xa14>
        228354:	e58d0000 	str	r0, [sp]
        228358:	e1a03006 	mov	r3, r6
        22835c:	e2852018 	add	r2, r5, #24	; 0x18
        228360:	e5b400ac 	ldr	r0, [r4, #172]!	; fField172
        228364:	e59d1000 	ldr	r1, [sp]
        228368:	eb656782 	bl	1b82178 <TMessageQueue::$EnqueueMessage(unsigned long, FourULongs *, char const *)>
        22836c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        228370:	7466696c 	strvcbt	r6, [r6], -#2412
    */
}

/**
 * Symbol: TTestAgent::IdleProc(void)
 * Address: 00228374
 */
TTestAgent::IdleProc(void) {
    /*
        228374:	e1a0c00d 	mov	ip, sp
        228378:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22837c:	e24cb004 	sub	fp, ip, #4	; 0x4
        228380:	e1a04000 	mov	r4, r0
        228384:	e24ddf82 	sub	sp, sp, #520	; 0x208
        228388:	e3a08000 	mov	r8, #0	; 0x0
        22838c:	e3a06000 	mov	r6, #0	; 0x0
        228390:	e5d000b0 	ldrb	r0, [r0, #176]	; fField176
        228394:	e3300000 	teq	r0, #0	; 0x0
        228398:	0a000000 	beq	2283a0 <TTestAgent::IdleProc(void)+0x2c>
        22839c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2283a0:	e3a00001 	mov	r0, #1	; 0x1
        2283a4:	e5c400b0 	strb	r0, [r4, #176]	; fField176
        2283a8:	e59f70f0 	ldr	r7, [pc, #f0]	; 2284a0 <TTestAgent::IdleProc(void)+0x12c>
        2283ac:	e3a05000 	mov	r5, #0	; 0x0
        2283b0:	e5970000 	ldr	r0, [r7]
        2283b4:	e3300002 	teq	r0, #2	; 0x2
        2283b8:	1a000004 	bne	2283d0 <TTestAgent::IdleProc(void)+0x5c>
        2283bc:	eb62675a 	bl	1ac212c <$JournalInsertTabletSamople(void)>
        2283c0:	eb656f9e 	bl	1b84240 <$IsJournalReplayBusy(void)>
        2283c4:	e3300000 	teq	r0, #0	; 0x0
        2283c8:	03a08001 	moveq	r8, #1	; 0x1
        2283cc:	05875000 	streq	r5, [r7]
        2283d0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2283d4:	e3300000 	teq	r0, #0	; 0x0
        2283d8:	0a00004a 	beq	228508 <TTestAgent::IdleProc(void)+0x194>
        2283dc:	ebff85a9 	bl	209a88 <TCommServer::IsBusy(void)>
        2283e0:	e3300000 	teq	r0, #0	; 0x0
        2283e4:	1a000047 	bne	228508 <TTestAgent::IdleProc(void)+0x194>
        2283e8:	e3a01001 	mov	r1, #1	; 0x1
        2283ec:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2283f0:	ebff85a2 	bl	209a80 <TCommServer::SetBusy(unsigned char)>
        2283f4:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        2283f8:	eb656b76 	bl	1b831d8 <TMessageQueue::$IsQueueEmpty(void)>
        2283fc:	e28d9010 	add	r9, sp, #16	; 0x10
        228400:	e59fa09c 	ldr	sl, [pc, #9c]	; 2284a4 <TTestAgent::IdleProc(void)+0x130>
        228404:	e28470c8 	add	r7, r4, #200	; 0xc8
        228408:	e3300000 	teq	r0, #0	; 0x0
        22840c:	1a000039 	bne	2284f8 <TTestAgent::IdleProc(void)+0x184>
        228410:	e3a06001 	mov	r6, #1	; 0x1
        228414:	e28d3c01 	add	r3, sp, #256	; 0x100
        228418:	e92d0008 	stmdb	sp!, {r3}
        22841c:	e1a03007 	mov	r3, r7
        228420:	e28d2f82 	add	r2, sp, #520	; 0x208
        228424:	e28d1f81 	add	r1, sp, #516	; 0x204
        228428:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        22842c:	eb65674c 	bl	1b82164 <TMessageQueue::$DequeueMessage(long *, unsigned long *, FourULongs *, char *)>
        228430:	e28dd004 	add	sp, sp, #4	; 0x4
        228434:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        228438:	e3a02000 	mov	r2, #0	; 0x0
        22843c:	e59d1204 	ldr	r1, [sp, #516]
        228440:	eb656f6f 	bl	1b84204 <TCommServer::$SendCommandHeader(unsigned long, unsigned char)>
        228444:	e1a00007 	mov	r0, r7
        228448:	e1a0100d 	mov	r1, sp
        22844c:	e3a02010 	mov	r2, #16	; 0x10
        228450:	eb66dabf 	bl	1bdef54 <$BlockMove>
        228454:	e28d0c01 	add	r0, sp, #256	; 0x100
        228458:	eb663594 	bl	1bb5ab0 <$strlen>
        22845c:	e2802001 	add	r2, r0, #1	; 0x1
        228460:	e1a01009 	mov	r1, r9
        228464:	e28d0c01 	add	r0, sp, #256	; 0x100
        228468:	eb66dab9 	bl	1bdef54 <$BlockMove>
        22846c:	e28d0c01 	add	r0, sp, #256	; 0x100
        228470:	eb66358e 	bl	1bb5ab0 <$strlen>
        228474:	e2800011 	add	r0, r0, #17	; 0x11
        228478:	e58d0200 	str	r0, [sp, #512]
        22847c:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        228480:	eb656b54 	bl	1b831d8 <TMessageQueue::$IsQueueEmpty(void)>
        228484:	e3300000 	teq	r0, #0	; 0x0
        228488:	1a000002 	bne	228498 <TTestAgent::IdleProc(void)+0x124>
        22848c:	e59d0204 	ldr	r0, [sp, #516]
        228490:	e130000a 	teq	r0, sl
        228494:	1a000003 	bne	2284a8 <TTestAgent::IdleProc(void)+0x134>
        228498:	e3a03001 	mov	r3, #1	; 0x1
        22849c:	ea000002 	b	2284ac <TTestAgent::IdleProc(void)+0x138>
        2284a0:	0c100fb8 	ldceq	15, cr0, [r0], -#736
        2284a4:	7466696c 	strvcbt	r6, [r6], -#2412
        2284a8:	e3a03000 	mov	r3, #0	; 0x0
        2284ac:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2284b0:	e59d2200 	ldr	r2, [sp, #512]
        2284b4:	e1a0100d 	mov	r1, sp
        2284b8:	eb656f50 	bl	1b84200 <TCommServer::$SendChunk(void *, long, unsigned char)>
        2284bc:	e59d0204 	ldr	r0, [sp, #516]
        2284c0:	e130000a 	teq	r0, sl
        2284c4:	1a000007 	bne	2284e8 <TTestAgent::IdleProc(void)+0x174>
        2284c8:	e28d1c02 	add	r1, sp, #512	; 0x200
        2284cc:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2284d0:	eb656b39 	bl	1b831bc <TCommServer::$GetResponse(long *)>
        2284d4:	e58d0204 	str	r0, [sp, #516]
        2284d8:	e1a01000 	mov	r1, r0
        2284dc:	e1a00004 	mov	r0, r4
        2284e0:	e59d2200 	ldr	r2, [sp, #512]
        2284e4:	eb656b41 	bl	1b831f0 <TTestAgent::$ProcessTestServerCommand(unsigned long, long)>
        2284e8:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        2284ec:	eb656b39 	bl	1b831d8 <TMessageQueue::$IsQueueEmpty(void)>
        2284f0:	e3300000 	teq	r0, #0	; 0x0
        2284f4:	0affffc5 	beq	228410 <TTestAgent::IdleProc(void)+0x9c>
        2284f8:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2284fc:	e3300000 	teq	r0, #0	; 0x0
        228500:	13a01000 	movne	r1, #0	; 0x0
        228504:	1bff855d 	blne	209a80 <TCommServer::SetBusy(unsigned char)>
        228508:	e5940080 	ldr	r0, [r4, #128]	; fField128
        22850c:	e59f70b4 	ldr	r7, [pc, #b4]	; 2285c8 <TTestAgent::IdleProc(void)+0x254>
        228510:	e3300002 	teq	r0, #2	; 0x2
        228514:	1a00005f 	bne	228698 <TTestAgent::IdleProc(void)+0x324>
        228518:	e5970010 	ldr	r0, [r7, #16]
        22851c:	e3300000 	teq	r0, #0	; 0x0
        228520:	15b0903c 	ldrne	r9, [r0, #60]!
        228524:	13390000 	teqne	r9, #0	; 0x0
        228528:	0a000005 	beq	228544 <TTestAgent::IdleProc(void)+0x1d0>
        22852c:	e5990000 	ldr	r0, [r9]
        228530:	eb666b21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        228534:	e1a00009 	mov	r0, r9
        228538:	eb669468 	bl	1bcd6e0 <$__dl(void *)>
        22853c:	e5970010 	ldr	r0, [r7, #16]
        228540:	e5a0503c 	str	r5, [r0, #60]!
        228544:	e5940098 	ldr	r0, [r4, #152]	; fField152
        228548:	e5900000 	ldr	r0, [r0]
        22854c:	e3300000 	teq	r0, #0	; 0x0
        228550:	0a000002 	beq	228560 <TTestAgent::IdleProc(void)+0x1ec>
        228554:	eb66c5e2 	bl	1bd9ce4 <$RemovePackage(unsigned long)>
        228558:	e5940098 	ldr	r0, [r4, #152]	; fField152
        22855c:	e5805000 	str	r5, [r0]
        228560:	e5d4016d 	ldrb	r0, [r4, #365]	; fField365
        228564:	e3300000 	teq	r0, #0	; 0x0
        228568:	1a00002d 	bne	228624 <TTestAgent::IdleProc(void)+0x2b0>
        22856c:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        228570:	e3300000 	teq	r0, #0	; 0x0
        228574:	0a000047 	beq	228698 <TTestAgent::IdleProc(void)+0x324>
        228578:	ebff8542 	bl	209a88 <TCommServer::IsBusy(void)>
        22857c:	e3300000 	teq	r0, #0	; 0x0
        228580:	03360000 	teqeq	r6, #0	; 0x0
        228584:	1a000043 	bne	228698 <TTestAgent::IdleProc(void)+0x324>
        228588:	e3a01001 	mov	r1, #1	; 0x1
        22858c:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        228590:	ebff853a 	bl	209a80 <TCommServer::SetBusy(unsigned char)>
        228594:	e5940084 	ldr	r0, [r4, #132]	; fField132
        228598:	e3300003 	teq	r0, #3	; 0x3
        22859c:	03a02001 	moveq	r2, #1	; 0x1
        2285a0:	059400a4 	ldreq	r0, [r4, #164]	; fField164
        2285a4:	059f1020 	ldreq	r1, [pc, #20]	; 2285cc <TTestAgent::IdleProc(void)+0x258>
        2285a8:	0a000004 	beq	2285c0 <TTestAgent::IdleProc(void)+0x24c>
        2285ac:	e3300004 	teq	r0, #4	; 0x4
        2285b0:	1a000007 	bne	2285d4 <TTestAgent::IdleProc(void)+0x260>
        2285b4:	e3a02001 	mov	r2, #1	; 0x1
        2285b8:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2285bc:	e59f100c 	ldr	r1, [pc, #c]	; 2285d0 <TTestAgent::IdleProc(void)+0x25c>
        2285c0:	eb656f0f 	bl	1b84204 <TCommServer::$SendCommandHeader(unsigned long, unsigned char)>
        2285c4:	ea000010 	b	22860c <TTestAgent::IdleProc(void)+0x298>
        2285c8:	0c104d48 	ldceq	13, cr4, [r0], -#288
        2285cc:	73646f6e 	cmnvc	r4, #440	; 0x1b8
        2285d0:	63646f6e 	cmnvs	r4, #440	; 0x1b8
        2285d4:	e3300002 	teq	r0, #2	; 0x2
        2285d8:	1a00000b 	bne	22860c <TTestAgent::IdleProc(void)+0x298>
        2285dc:	e3a02001 	mov	r2, #1	; 0x1
        2285e0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2285e4:	e59f1034 	ldr	r1, [pc, #34]	; 228620 <TTestAgent::IdleProc(void)+0x2ac>
        2285e8:	eb656f05 	bl	1b84204 <TCommServer::$SendCommandHeader(unsigned long, unsigned char)>
        2285ec:	e28d1c02 	add	r1, sp, #512	; 0x200
        2285f0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        2285f4:	eb656af0 	bl	1b831bc <TCommServer::$GetResponse(long *)>
        2285f8:	e58d0204 	str	r0, [sp, #516]
        2285fc:	e1a01000 	mov	r1, r0
        228600:	e1a00004 	mov	r0, r4
        228604:	e59d2200 	ldr	r2, [sp, #512]
        228608:	eb656af8 	bl	1b831f0 <TTestAgent::$ProcessTestServerCommand(unsigned long, long)>
        22860c:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        228610:	e3300000 	teq	r0, #0	; 0x0
        228614:	13a01000 	movne	r1, #0	; 0x0
        228618:	1bff8518 	blne	209a80 <TCommServer::SetBusy(unsigned char)>
        22861c:	ea00001d 	b	228698 <TTestAgent::IdleProc(void)+0x324>
        228620:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        228624:	e59400dc 	ldr	r0, [r4, #220]	; fField220
        228628:	e5900000 	ldr	r0, [r0]
        22862c:	e3300000 	teq	r0, #0	; 0x0
        228630:	0a000002 	beq	228640 <TTestAgent::IdleProc(void)+0x2cc>
        228634:	e1a00004 	mov	r0, r4
        228638:	eb656ef6 	bl	1b84218 <TTestAgent::$StartACardTestCase(void)>
        22863c:	ea000015 	b	228698 <TTestAgent::IdleProc(void)+0x324>
        228640:	e5c4516d 	strb	r5, [r4, #365]	; fField365
        228644:	e5d4016e 	ldrb	r0, [r4, #366]	; fField366
        228648:	e3300000 	teq	r0, #0	; 0x0
        22864c:	0a000011 	beq	228698 <TTestAgent::IdleProc(void)+0x324>
        228650:	e59400e0 	ldr	r0, [r4, #224]	; fField224
        228654:	e3300000 	teq	r0, #0	; 0x0
        228658:	0a000005 	beq	228674 <TTestAgent::IdleProc(void)+0x300>
        22865c:	eb6566bf 	bl	1b82160 <TTestStoreFileList::$DeleteAll(void)>
        228660:	e59400e0 	ldr	r0, [r4, #224]	; fField224
        228664:	e3300000 	teq	r0, #0	; 0x0
        228668:	13a01001 	movne	r1, #1	; 0x1
        22866c:	1b6566b1 	blne	1b82138 <TTestStoreFileList::$__dt(void)>
        228670:	e58450e0 	str	r5, [r4, #224]	; fField224
        228674:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        228678:	e3300000 	teq	r0, #0	; 0x0
        22867c:	0a000005 	beq	228698 <TTestAgent::IdleProc(void)+0x324>
        228680:	eb6566b6 	bl	1b82160 <TTestStoreFileList::$DeleteAll(void)>
        228684:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        228688:	e3300000 	teq	r0, #0	; 0x0
        22868c:	13a01001 	movne	r1, #1	; 0x1
        228690:	1b6566a8 	blne	1b82138 <TTestStoreFileList::$__dt(void)>
        228694:	e58450e4 	str	r5, [r4, #228]	; fField228
        228698:	e3380000 	teq	r8, #0	; 0x0
        22869c:	13a029e1 	movne	r2, #3686400	; 0x384000
        2286a0:	13a01003 	movne	r1, #3	; 0x3
        2286a4:	15940094 	ldrne	r0, [r4, #148]	; fField148
        2286a8:	1a000006 	bne	2286c8 <TTestAgent::IdleProc(void)+0x354>
        2286ac:	e5b70008 	ldr	r0, [r7, #8]!
        2286b0:	e3300000 	teq	r0, #0	; 0x0
        2286b4:	e5940094 	ldr	r0, [r4, #148]	; fField148
        2286b8:	0a000004 	beq	2286d0 <TTestAgent::IdleProc(void)+0x35c>
        2286bc:	e3a02066 	mov	r2, #102	; 0x66
        2286c0:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        2286c4:	e3a01032 	mov	r1, #50	; 0x32
        2286c8:	eb6713ee 	bl	1bed688 <TAEventHandler::$ResetIdle(unsigned long, TimeUnits)>
        2286cc:	ea000000 	b	2286d4 <TTestAgent::IdleProc(void)+0x360>
        2286d0:	eb6713ed 	bl	1bed68c <TAEventHandler::$ResetIdle(void)>
        2286d4:	e5940080 	ldr	r0, [r4, #128]	; fField128
        2286d8:	e5840084 	str	r0, [r4, #132]	; fField132
        2286dc:	e5c450b0 	strb	r5, [r4, #176]	; fField176
        2286e0:	eaffff2d 	b	22839c <TTestAgent::IdleProc(void)+0x28>
    */
}

/**
 * Symbol: TTestAgent::AgentReportDirect(unsigned long, char *)
 * Address: 002286e4
 */
TTestAgent::AgentReportDirect(unsigned long, char *) {
    /*
        2286e4:	e1a0c00d 	mov	ip, sp
        2286e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2286ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2286f0:	e1a05000 	mov	r5, r0
        2286f4:	e1a04001 	mov	r4, r1
        2286f8:	e24ddc01 	sub	sp, sp, #256	; 0x100
        2286fc:	e1a0000d 	mov	r0, sp
        228700:	e28f1f06 	add	r1, pc, #24	; 0x18
        228704:	eb6634e2 	bl	1bb5a94 <$sprintf>
        228708:	e1a0300d 	mov	r3, sp
        22870c:	e1a01004 	mov	r1, r4
        228710:	e3a02000 	mov	r2, #0	; 0x0
        228714:	e5b500ac 	ldr	r0, [r5, #172]!	; fField172
        228718:	eb656696 	bl	1b82178 <TMessageQueue::$EnqueueMessage(unsigned long, FourULongs *, char const *)>
        22871c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        228720:	54657374 	strplbt	r7, [r5], -#884	; fField884
        228724:	4167656e 	cmnmi	r7, lr, ror #10
        228728:	74204552 	strvct	r4, [r0], -#1362
        22872c:	52092573 	andpl	r2, r9, #482344960	; 0x1cc00000
        228730:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TTestAgent::StartACardTestCase(void)
 * Address: 00228734
 */
TTestAgent::StartACardTestCase(void) {
    /*
        228734:	e1a0c00d 	mov	ip, sp
        228738:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22873c:	e24cb004 	sub	fp, ip, #4	; 0x4
        228740:	e1a04000 	mov	r4, r0
        228744:	e24dde2a 	sub	sp, sp, #672	; 0x2a0
        228748:	e3a00000 	mov	r0, #0	; 0x0
        22874c:	eb66e676 	bl	1be212c <$NewHandle>
        228750:	e1a06000 	mov	r6, r0
        228754:	e28d00b8 	add	r0, sp, #184	; 0xb8
        228758:	eb66eeb6 	bl	1be4238 <TAEvent::$__ct(void)>
        22875c:	e28d0090 	add	r0, sp, #144	; 0x90
        228760:	eb66eea7 	bl	1be4204 <CBufferSegment::$__ct(void)>
        228764:	e28d0080 	add	r0, sp, #128	; 0x80
        228768:	eb66ea95 	bl	1be31c4 <CBufferPipe::$__ct(void)>
        22876c:	e59f0048 	ldr	r0, [pc, #48]	; 2287bc <TTestAgent::StartACardTestCase(void)+0x88>
        228770:	e58d0080 	str	r0, [sp, #128]	; fField128
        228774:	e28d3f6e 	add	r3, sp, #440	; 0x1b8
        228778:	e28d2f8e 	add	r2, sp, #568	; 0x238
        22877c:	e28d1fa6 	add	r1, sp, #664	; 0x298
        228780:	e59400dc 	ldr	r0, [r4, #220]	; fField220
        228784:	eb656677 	bl	1b82168 <TTestCommandQueue::$DequeueTestCommand(unsigned long *, char *, char *)>
        228788:	e3300000 	teq	r0, #0	; 0x0
        22878c:	0a00000b 	beq	2287c0 <TTestAgent::StartACardTestCase(void)+0x8c>
        228790:	e1a04000 	mov	r4, r0
        228794:	e28d0080 	add	r0, sp, #128	; 0x80
        228798:	e3a01000 	mov	r1, #0	; 0x0
        22879c:	e1a0e00f 	mov	lr, pc
        2287a0:	e59df080 	ldr	pc, [sp, #128]	; fField128
        2287a4:	e28d0090 	add	r0, sp, #144	; 0x90
        2287a8:	e3a01000 	mov	r1, #0	; 0x0
        2287ac:	e1a0e00f 	mov	lr, pc
        2287b0:	e59df090 	ldr	pc, [sp, #144]	; fField144
        2287b4:	e1a00004 	mov	r0, r4
        2287b8:	ea0000db 	b	228b2c <TTestAgent::StartACardTestCase(void)+0x3f8>
        2287bc:	0001c83c 	andeq	ip, r1, ip, lsr r8
        2287c0:	e3a03000 	mov	r3, #0	; 0x0
        2287c4:	e3a02000 	mov	r2, #0	; 0x0
        2287c8:	e92d000c 	stmdb	sp!, {r2, r3}
        2287cc:	e28d3f6f 	add	r3, sp, #444	; 0x1bc
        2287d0:	e1a02006 	mov	r2, r6
        2287d4:	e28d1d09 	add	r1, sp, #576	; 0x240
        2287d8:	e59400e4 	ldr	r0, [r4, #228]	; fField228
        2287dc:	eb656a74 	bl	1b831b4 <TTestStoreFileList::$Get(char *, char **, unsigned long *, unsigned long, unsigned long)>
        2287e0:	e28dd008 	add	sp, sp, #8	; 0x8
        2287e4:	e1b05000 	movs	r5, r0
        2287e8:	0a000012 	beq	228838 <TTestAgent::StartACardTestCase(void)+0x104>
        2287ec:	e28d2f8e 	add	r2, sp, #568	; 0x238
        2287f0:	e1a0000d 	mov	r0, sp
        2287f4:	e28f1f05 	add	r1, pc, #20	; 0x14
        2287f8:	eb6634a5 	bl	1bb5a94 <$sprintf>
        2287fc:	e1a0200d 	mov	r2, sp
        228800:	e1a00004 	mov	r0, r4
        228804:	e59f1028 	ldr	r1, [pc, #28]	; 228834 <TTestAgent::StartACardTestCase(void)+0x100>
        228808:	eb65664d 	bl	1b82144 <TTestAgent::$AgentReportDirect(unsigned long, char *)>
        22880c:	ea0000bd 	b	228b08 <TTestAgent::StartACardTestCase(void)+0x3d4>
        228810:	43616e6e 	cmnmi	r1, #1760	; 0x6e0
        228814:	6f742066 	swivs	0x00742066
        228818:	696e6420 	stmvsdb	lr!, {r5, sl, sp, lr}^
        22881c:	74657374 	strvcbt	r7, [r5], -#884	; fField884
        228820:	20636173 	rsbcs	r6, r3, r3, ror r1
        228824:	65202573 	strvs	r2, [r0, -#1395]!	; fField1395
        228828:	2066726f 	rsbcs	r7, r6, pc, ror #4
        22882c:	6d207374 	stcvs	3, cr7, [r0, -#464]!
        228830:	6f726500 	swivs	0x00726500
        228834:	61657272 	cmnvs	r5, r2, ror r2
        228838:	e1a00006 	mov	r0, r6
        22883c:	eb66e632 	bl	1be210c <$HLock>
        228840:	e5967000 	ldr	r7, [r6]
        228844:	e59d0298 	ldr	r0, [sp, #664]
        228848:	e59f1038 	ldr	r1, [pc, #38]	; 228888 <TTestAgent::StartACardTestCase(void)+0x154>
        22884c:	e3a0a001 	mov	sl, #1	; 0x1
        228850:	e3a09003 	mov	r9, #3	; 0x3
        228854:	e59fc030 	ldr	ip, [pc, #30]	; 22888c <TTestAgent::StartACardTestCase(void)+0x158>
        228858:	e150000c 	cmp	r0, ip
        22885c:	0a000039 	beq	228948 <TTestAgent::StartACardTestCase(void)+0x214>
        228860:	ca00000c 	bgt	228898 <TTestAgent::StartACardTestCase(void)+0x164>
        228864:	e59fc024 	ldr	ip, [pc, #24]	; 228890 <TTestAgent::StartACardTestCase(void)+0x15c>
        228868:	e130000c 	teq	r0, ip
        22886c:	0a000039 	beq	228958 <TTestAgent::StartACardTestCase(void)+0x224>
        228870:	e59fc01c 	ldr	ip, [pc, #1c]	; 228894 <TTestAgent::StartACardTestCase(void)+0x160>
        228874:	e130000c 	teq	r0, ip
        228878:	0a00000d 	beq	2288b4 <TTestAgent::StartACardTestCase(void)+0x180>
        22887c:	e1300001 	teq	r0, r1
        228880:	1a00009e 	bne	228b00 <TTestAgent::StartACardTestCase(void)+0x3cc>
        228884:	ea000031 	b	228950 <TTestAgent::StartACardTestCase(void)+0x21c>
        228888:	6e636173 	mcrvs	1, 3, r6, cr3, cr3, {3}
        22888c:	73636173 	cmnvc	r3, #-1073741796	; 0xc000001c
        228890:	63617365 	cmnvs	r1, #-1811939327	; 0x94000001
        228894:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2
        228898:	e59fc094 	ldr	ip, [pc, #94]	; 228934 <TTestAgent::StartACardTestCase(void)+0x200>
        22889c:	e130000c 	teq	r0, ip
        2288a0:	159fc090 	ldrne	ip, [pc, #90]	; 228938 <TTestAgent::StartACardTestCase(void)+0x204>
        2288a4:	1130000c 	teqne	r0, ip
        2288a8:	159fc08c 	ldrne	ip, [pc, #8c]	; 22893c <TTestAgent::StartACardTestCase(void)+0x208>
        2288ac:	1130000c 	teqne	r0, ip
        2288b0:	1a000092 	bne	228b00 <TTestAgent::StartACardTestCase(void)+0x3cc>
        2288b4:	e5940098 	ldr	r0, [r4, #152]	; fField152
        2288b8:	e2801020 	add	r1, r0, #32	; 0x20
        2288bc:	e28d0f8e 	add	r0, sp, #568	; 0x238
        2288c0:	e3a02060 	mov	r2, #96	; 0x60
        2288c4:	eb66d9a2 	bl	1bdef54 <$BlockMove>
        2288c8:	e5940098 	ldr	r0, [r4, #152]	; fField152
        2288cc:	e2801080 	add	r1, r0, #128	; 0x80
        2288d0:	e28d0f6e 	add	r0, sp, #440	; 0x1b8
        2288d4:	e3a02080 	mov	r2, #128	; 0x80
        2288d8:	eb66d99d 	bl	1bdef54 <$BlockMove>
        2288dc:	e59f005c 	ldr	r0, [pc, #5c]	; 228940 <TTestAgent::StartACardTestCase(void)+0x20c>
        2288e0:	e58d00b8 	str	r0, [sp, #184]
        2288e4:	e59f0058 	ldr	r0, [pc, #58]	; 228944 <TTestAgent::StartACardTestCase(void)+0x210>
        2288e8:	e58d00bc 	str	r0, [sp, #188]
        2288ec:	e5940098 	ldr	r0, [r4, #152]	; fField152
        2288f0:	e2801020 	add	r1, r0, #32	; 0x20
        2288f4:	e28d00cc 	add	r0, sp, #204	; 0xcc
        2288f8:	eb66346b 	bl	1bb5aac <$strcpy>
        2288fc:	e5940098 	ldr	r0, [r4, #152]	; fField152
        228900:	e2801080 	add	r1, r0, #128	; 0x80
        228904:	e28d0f4b 	add	r0, sp, #300	; 0x12c
        228908:	eb663467 	bl	1bb5aac <$strcpy>
        22890c:	e2848074 	add	r8, r4, #116	; 0x74
        228910:	e59d0298 	ldr	r0, [sp, #664]
        228914:	e59fc018 	ldr	ip, [pc, #18]	; 228934 <TTestAgent::StartACardTestCase(void)+0x200>
        228918:	e130000c 	teq	r0, ip
        22891c:	1a000039 	bne	228a08 <TTestAgent::StartACardTestCase(void)+0x2d4>
        228920:	e58da0c0 	str	sl, [sp, #192]
        228924:	e59d01b4 	ldr	r0, [sp, #436]
        228928:	e58d00c4 	str	r0, [sp, #196]	; fField196
        22892c:	e58d70c8 	str	r7, [sp, #200]
        228930:	ea00004d 	b	228a6c <TTestAgent::StartACardTestCase(void)+0x338>
        228934:	73637270 	cmnvc	r3, #7	; 0x7
        228938:	73667261 	cmnvc	r6, #268435462	; 0x10000006
        22893c:	73736372 	cmnvc	r3, #-939524095	; 0xc8000001
        228940:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        228944:	74737365 	ldrvcbt	r7, [r3], -#869
        228948:	e1300001 	teq	r0, r1
        22894c:	1a000001 	bne	228958 <TTestAgent::StartACardTestCase(void)+0x224>
        228950:	e5c4a16f 	strb	sl, [r4, #367]	; fField367
        228954:	ea000001 	b	228960 <TTestAgent::StartACardTestCase(void)+0x22c>
        228958:	e3a01000 	mov	r1, #0	; 0x0
        22895c:	e5c4116f 	strb	r1, [r4, #367]	; fField367
        228960:	e594009c 	ldr	r0, [r4, #156]	; fField156
        228964:	e2801020 	add	r1, r0, #32	; 0x20
        228968:	e28d0f8e 	add	r0, sp, #568	; 0x238
        22896c:	e3a02060 	mov	r2, #96	; 0x60
        228970:	eb66d977 	bl	1bdef54 <$BlockMove>
        228974:	e594009c 	ldr	r0, [r4, #156]	; fField156
        228978:	e2801080 	add	r1, r0, #128	; 0x80
        22897c:	e28d0f6e 	add	r0, sp, #440	; 0x1b8
        228980:	e3a02080 	mov	r2, #128	; 0x80
        228984:	eb66d972 	bl	1bdef54 <$BlockMove>
        228988:	e5cd91ac 	strb	r9, [sp, #428]
        22898c:	e3a01000 	mov	r1, #0	; 0x0
        228990:	e5cd11ad 	strb	r1, [sp, #429]
        228994:	e28d3fa7 	add	r3, sp, #668	; 0x29c
        228998:	e1a00007 	mov	r0, r7
        22899c:	e28d2f6b 	add	r2, sp, #428	; 0x1ac
        2289a0:	e8920006 	ldmia	r2, {r1, r2}
        2289a4:	eb66b868 	bl	1bd6b4c <$LoadPackage(char *, SourceType, unsigned long *)>
        2289a8:	e1b05000 	movs	r5, r0
        2289ac:	128f0f0f 	addne	r0, pc, #60	; 0x3c
        2289b0:	1a000040 	bne	228ab8 <TTestAgent::StartACardTestCase(void)+0x384>
        2289b4:	e59d129c 	ldr	r1, [sp, #668]
        2289b8:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2289bc:	e5801000 	str	r1, [r0]
        2289c0:	e5940080 	ldr	r0, [r4, #128]	; fField128
        2289c4:	e3300002 	teq	r0, #2	; 0x2
        2289c8:	13a00005 	movne	r0, #5	; 0x5
        2289cc:	03a00004 	moveq	r0, #4	; 0x4
        2289d0:	e5840080 	str	r0, [r4, #128]	; fField128
        2289d4:	e5940170 	ldr	r0, [r4, #368]	; fField368
        2289d8:	e3300000 	teq	r0, #0	; 0x0
        2289dc:	15941080 	ldrne	r1, [r4, #128]	; fField128
        2289e0:	15a01080 	strne	r1, [r0, #128]!	; fField128
        2289e4:	e1a00004 	mov	r0, r4
        2289e8:	eb6269ec 	bl	1ac31a0 <TTestAgent::$StartCTestCase(void)>
        2289ec:	ea000043 	b	228b00 <TTestAgent::StartACardTestCase(void)+0x3cc>
        2289f0:	6572726f 	ldrvsb	r7, [r2, -#623]!
        2289f4:	72206672 	eorvc	r6, r0, #119537664	; 0x7200000
        2289f8:	6f6d204c 	swivs	0x006d204c
        2289fc:	6f616450 	swivs	0x00616450
        228a00:	61636b61 	cmnvs	r3, r1, ror #22
        228a04:	67650000 	strvsb	r0, [r5, -r0]!
        228a08:	e3e03000 	mvn	r3, #0	; 0x0
        228a0c:	e3a02000 	mov	r2, #0	; 0x0
        228a10:	e92d000c 	stmdb	sp!, {r2, r3}
        228a14:	e1a01007 	mov	r1, r7
        228a18:	e59d21bc 	ldr	r2, [sp, #444]
        228a1c:	e28d0098 	add	r0, sp, #152	; 0x98
        228a20:	e3a03000 	mov	r3, #0	; 0x0
        228a24:	eb6702a0 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        228a28:	e28dd008 	add	sp, sp, #8	; 0x8
        228a2c:	e28d1090 	add	r1, sp, #144	; 0x90
        228a30:	e28d0080 	add	r0, sp, #128	; 0x80
        228a34:	e3a03000 	mov	r3, #0	; 0x0
        228a38:	e3a02000 	mov	r2, #0	; 0x0
        228a3c:	eb670294 	bl	1be9494 <CBufferPipe::$Init(CBufferSegment *, CBufferSegment *, unsigned char)>
        228a40:	e28d1fa7 	add	r1, sp, #668	; 0x29c
        228a44:	e28d0080 	add	r0, sp, #128	; 0x80
        228a48:	e3a02001 	mov	r2, #1	; 0x1
        228a4c:	eb66b83d 	bl	1bd6b48 <$LoadPackage(CPipe *, unsigned long *, unsigned char)>
        228a50:	e1b05000 	movs	r5, r0
        228a54:	1a000014 	bne	228aac <TTestAgent::StartACardTestCase(void)+0x378>
        228a58:	e59d029c 	ldr	r0, [sp, #668]
        228a5c:	e5941098 	ldr	r1, [r4, #152]	; fField152
        228a60:	e5810000 	str	r0, [r1]
        228a64:	e3a00002 	mov	r0, #2	; 0x2
        228a68:	e58d00c0 	str	r0, [sp, #192]
        228a6c:	e3a0c000 	mov	ip, #0	; 0x0
        228a70:	e3a01000 	mov	r1, #0	; 0x0
        228a74:	e3a03000 	mov	r3, #0	; 0x0
        228a78:	e1a02001 	mov	r2, r1
        228a7c:	e3a00000 	mov	r0, #0	; 0x0
        228a80:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        228a84:	e1a0300c 	mov	r3, ip
        228a88:	e3a020f4 	mov	r2, #244	; 0xf4
        228a8c:	e92d000c 	stmdb	sp!, {r2, r3}
        228a90:	e28d30d0 	add	r3, sp, #208	; 0xd0
        228a94:	e1a00008 	mov	r0, r8
        228a98:	e3a02000 	mov	r2, #0	; 0x0
        228a9c:	e3a01001 	mov	r1, #1	; 0x1
        228aa0:	eb66c8a8 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        228aa4:	e28dd018 	add	sp, sp, #24	; 0x18
        228aa8:	e1a05000 	mov	r5, r0
        228aac:	e3350000 	teq	r5, #0	; 0x0
        228ab0:	0a000009 	beq	228adc <TTestAgent::StartACardTestCase(void)+0x3a8>
        228ab4:	e28f0f01 	add	r0, pc, #4	; 0x4
        228ab8:	eb672370 	bl	1bf1880 <$printf>
        228abc:	ea00000f 	b	228b00 <TTestAgent::StartACardTestCase(void)+0x3cc>
        228ac0:	6572726f 	ldrvsb	r7, [r2, -#623]!
        228ac4:	72207365 	eorvc	r7, r0, #-1811939327	; 0x94000001
        228ac8:	6e64696e 	cdpvs	9, 6, cr6, cr4, cr14, {3}
        228acc:	67206576 	undefined
        228ad0:	656e7420 	strvsb	r7, [lr, -#1056]!
        228ad4:	746f204e 	strvcbt	r2, [pc], #4e	; 228adc <TTestAgent::StartACardTestCase(void)+0x3a8>
        228ad8:	65777400 	ldrvsb	r7, [r7, -#1024]!
        228adc:	e5940080 	ldr	r0, [r4, #128]	; fField128
        228ae0:	e3300002 	teq	r0, #2	; 0x2
        228ae4:	13a00005 	movne	r0, #5	; 0x5
        228ae8:	15840080 	strne	r0, [r4, #128]	; fField128
        228aec:	05849080 	streq	r9, [r4, #128]	; fField128
        228af0:	e5940170 	ldr	r0, [r4, #368]	; fField368
        228af4:	e3300000 	teq	r0, #0	; 0x0
        228af8:	15b41080 	ldrne	r1, [r4, #128]!	; fField128
        228afc:	15a01080 	strne	r1, [r0, #128]!	; fField128
        228b00:	e1a00006 	mov	r0, r6
        228b04:	eb66e169 	bl	1be10b0 <$DisposHandle>
        228b08:	e28d0080 	add	r0, sp, #128	; 0x80
        228b0c:	e3a01000 	mov	r1, #0	; 0x0
        228b10:	e1a0e00f 	mov	lr, pc
        228b14:	e59df080 	ldr	pc, [sp, #128]	; fField128
        228b18:	e28d0090 	add	r0, sp, #144	; 0x90
        228b1c:	e3a01000 	mov	r1, #0	; 0x0
        228b20:	e1a0e00f 	mov	lr, pc
        228b24:	e59df090 	ldr	pc, [sp, #144]	; fField144
        228b28:	e1a00005 	mov	r0, r5
        228b2c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTestAgent::__ct(void)
 * Address: 00229b68
 */
TTestAgent::TTestAgent(void) {
    /*
        229b68:	e1a0c00d 	mov	ip, sp
        229b6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        229b70:	e24cb004 	sub	fp, ip, #4	; 0x4
        229b74:	e1b04000 	movs	r4, r0
        229b78:	1a000003 	bne	229b8c <TTestAgent::__ct(void)+0x24>
        229b7c:	e3a00f5e 	mov	r0, #376	; 0x178
        229b80:	eb6692ec 	bl	1bce738 <$__nw(unsigned int)>
        229b84:	e1b04000 	movs	r4, r0
        229b88:	0a00000f 	beq	229bcc <TTestAgent::__ct(void)+0x64>
        229b8c:	e1a00004 	mov	r0, r4
        229b90:	eb66e9ab 	bl	1be4244 <TAppWorld::$__ct(void)>
        229b94:	e3a00000 	mov	r0, #0	; 0x0
        229b98:	e5c40078 	strb	r0, [r4, #120]
        229b9c:	e5840074 	str	r0, [r4, #116]	; fField116
        229ba0:	e58400b4 	str	r0, [r4, #180]
        229ba4:	e58400c0 	str	r0, [r4, #192]
        229ba8:	e58400b8 	str	r0, [r4, #184]
        229bac:	e58400bc 	str	r0, [r4, #188]
        229bb0:	e59f101c 	ldr	r1, [pc, #1c]	; 229bd4 <TTestAgent::__ct(void)+0x6c>
        229bb4:	e5840088 	str	r0, [r4, #136]	; fField136
        229bb8:	e5841000 	str	r1, [r4]
        229bbc:	e584008c 	str	r0, [r4, #140]	; fField140
        229bc0:	e5840090 	str	r0, [r4, #144]	; fField144
        229bc4:	e5840094 	str	r0, [r4, #148]	; fField148
        229bc8:	e5c400c4 	strb	r0, [r4, #196]	; fField196
        229bcc:	e1a00004 	mov	r0, r4
        229bd0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        229bd4:	0001af08 	andeq	sl, r1, r8, lsl #30
    */
}

/**
 * Symbol: TTestAgent::MainConstructor(void)
 * Address: 0022a218
 */
TTestAgent::MainConstructor(void) {
    /*
        22a218:	e1a0c00d 	mov	ip, sp
        22a21c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22a220:	e24cb004 	sub	fp, ip, #4	; 0x4
        22a224:	e1a04000 	mov	r4, r0
        22a228:	eb660d33 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        22a22c:	e1b05000 	movs	r5, r0
        22a230:	1a000055 	bne	22a38c <TTestAgent::MainConstructor(void)+0x174>
        22a234:	e3a07000 	mov	r7, #0	; 0x0
        22a238:	e5c4707c 	strb	r7, [r4, #124]	; fField124
        22a23c:	eb66a5e4 	bl	1bd39d4 <$GetGlobals>
        22a240:	eb66f87d 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        22a244:	e5900000 	ldr	r0, [r0]
        22a248:	e5840070 	str	r0, [r4, #112]	; fField112
        22a24c:	e2840074 	add	r0, r4, #116	; 0x74
        22a250:	e1a01007 	mov	r1, r7
        22a254:	eb66997b 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        22a258:	e3a00001 	mov	r0, #1	; 0x1
        22a25c:	e5840080 	str	r0, [r4, #128]	; fField128
        22a260:	e58470a4 	str	r7, [r4, #164]	; fField164
        22a264:	e5840084 	str	r0, [r4, #132]	; fField132
        22a268:	e5c470b0 	strb	r7, [r4, #176]	; fField176
        22a26c:	e58470dc 	str	r7, [r4, #220]	; fField220
        22a270:	e58470e0 	str	r7, [r4, #224]	; fField224
        22a274:	e58470e4 	str	r7, [r4, #228]	; fField228
        22a278:	e5847174 	str	r7, [r4, #372]	; fField372
        22a27c:	e58470d8 	str	r7, [r4, #216]	; fField216
        22a280:	e5847170 	str	r7, [r4, #368]	; fField368
        22a284:	e5c4716d 	strb	r7, [r4, #365]	; fField365
        22a288:	e3a00c01 	mov	r0, #256	; 0x100
        22a28c:	eb66dfab 	bl	1be2140 <$NewPtr>
        22a290:	e5840098 	str	r0, [r4, #152]	; fField152
        22a294:	e5807000 	str	r7, [r0]
        22a298:	e3a00c01 	mov	r0, #256	; 0x100
        22a29c:	eb66dfa7 	bl	1be2140 <$NewPtr>
        22a2a0:	e584009c 	str	r0, [r4, #156]	; fField156
        22a2a4:	e5807000 	str	r7, [r0]
        22a2a8:	e3a00040 	mov	r0, #64	; 0x40
        22a2ac:	eb669121 	bl	1bce738 <$__nw(unsigned int)>
        22a2b0:	e1b05000 	movs	r5, r0
        22a2b4:	0a000004 	beq	22a2cc <TTestAgent::MainConstructor(void)+0xb4>
        22a2b8:	e1a00005 	mov	r0, r5
        22a2bc:	eb668cef 	bl	1bcd680 <TPartHandler::$__ct(void)>
        22a2c0:	e59f00cc 	ldr	r0, [pc, #cc]	; 22a394 <TTestAgent::MainConstructor(void)+0x17c>
        22a2c4:	e5850000 	str	r0, [r5]
        22a2c8:	e585403c 	str	r4, [r5, #60]
        22a2cc:	e1b00005 	movs	r0, r5
        22a2d0:	e5845090 	str	r5, [r4, #144]	; fField144
        22a2d4:	03e05000 	mvneq	r5, #0	; 0x0
        22a2d8:	0a00002b 	beq	22a38c <TTestAgent::MainConstructor(void)+0x174>
        22a2dc:	e59f10b4 	ldr	r1, [pc, #b4]	; 22a398 <TTestAgent::MainConstructor(void)+0x180>
        22a2e0:	eb66ade6 	bl	1bd5a80 <TPartHandler::$Init(unsigned long)>
        22a2e4:	e1b05000 	movs	r5, r0
        22a2e8:	1a000027 	bne	22a38c <TTestAgent::MainConstructor(void)+0x174>
        22a2ec:	e3a00018 	mov	r0, #24	; 0x18
        22a2f0:	eb669110 	bl	1bce738 <$__nw(unsigned int)>
        22a2f4:	e1b06000 	movs	r6, r0
        22a2f8:	0a000004 	beq	22a310 <TTestAgent::MainConstructor(void)+0xf8>
        22a2fc:	e1a00006 	mov	r0, r6
        22a300:	eb66e7c0 	bl	1be4208 <TAEventHandler::$__ct(void)>
        22a304:	e59f0090 	ldr	r0, [pc, #90]	; 22a39c <TTestAgent::MainConstructor(void)+0x184>
        22a308:	e5860000 	str	r0, [r6]
        22a30c:	e5864014 	str	r4, [r6, #20]
        22a310:	e1b00006 	movs	r0, r6
        22a314:	e5846094 	str	r6, [r4, #148]	; fField148
        22a318:	03e05002 	mvneq	r5, #2	; 0x2
        22a31c:	0a00001a 	beq	22a38c <TTestAgent::MainConstructor(void)+0x174>
        22a320:	e59f2078 	ldr	r2, [pc, #78]	; 22a3a0 <TTestAgent::MainConstructor(void)+0x188>
        22a324:	e59f1078 	ldr	r1, [pc, #78]	; 22a3a4 <TTestAgent::MainConstructor(void)+0x18c>
        22a328:	eb66fc60 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        22a32c:	e3a03001 	mov	r3, #1	; 0x1
        22a330:	e92d0008 	stmdb	sp!, {r3}
        22a334:	e3a03000 	mov	r3, #0	; 0x0
        22a338:	e3a029e1 	mov	r2, #3686400	; 0x384000
        22a33c:	e3a01003 	mov	r1, #3	; 0x3
        22a340:	e5940094 	ldr	r0, [r4, #148]	; fField148
        22a344:	eb66fc64 	bl	1be94dc <TAEventHandler::$InitIdler(unsigned long, TimeUnits, unsigned long, unsigned char)>
        22a348:	e28dd004 	add	sp, sp, #4	; 0x4
        22a34c:	e5c4716f 	strb	r7, [r4, #367]	; fField367
        22a350:	e59f1050 	ldr	r1, [pc, #50]	; 22a3a8 <TTestAgent::MainConstructor(void)+0x190>
        22a354:	e1a00004 	mov	r0, r4
        22a358:	eb655f7c 	bl	1b82150 <TTestAgent::$AllocateATestReporter(TAgentReporter **)>
        22a35c:	e59f6048 	ldr	r6, [pc, #48]	; 22a3ac <TTestAgent::MainConstructor(void)+0x194>
        22a360:	e5960000 	ldr	r0, [r6]
        22a364:	e3300000 	teq	r0, #0	; 0x0
        22a368:	03e05003 	mvneq	r5, #3	; 0x3
        22a36c:	0a000006 	beq	22a38c <TTestAgent::MainConstructor(void)+0x174>
        22a370:	e3a00000 	mov	r0, #0	; 0x0
        22a374:	eb655f6a 	bl	1b82124 <TMessageQueue::$__ct(void)>
        22a378:	e58400ac 	str	r0, [r4, #172]	; fField172
        22a37c:	e5a6000c 	str	r0, [r6, #12]!
        22a380:	e5b400ac 	ldr	r0, [r4, #172]!	; fField172
        22a384:	e3300000 	teq	r0, #0	; 0x0
        22a388:	03e05004 	mvneq	r5, #4	; 0x4
        22a38c:	e1a00005 	mov	r0, r5
        22a390:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        22a394:	00021420 	andeq	r1, r2, r0, lsr #8
        22a398:	74737074 	ldrvcbt	r7, [r3], -#116	; fField116
        22a39c:	0001f204 	andeq	pc, r1, r4, lsl #4
        22a3a0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        22a3a4:	74737465 	ldrvcbt	r7, [r3], -#1125
        22a3a8:	0c104d48 	ldceq	13, cr4, [r0], -#288
        22a3ac:	0c104d48 	ldceq	13, cr4, [r0], -#288
    */
}

/**
 * Symbol: TTestAgent::MainDestructor(void)
 * Address: 0022a930
 */
TTestAgent::MainDestructor(void) {
    /*
        22a930:	e1a0c00d 	mov	ip, sp
        22a934:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22a938:	e24cb004 	sub	fp, ip, #4	; 0x4
        22a93c:	e1a04000 	mov	r4, r0
        22a940:	e59000a4 	ldr	r0, [r0, #164]	; fField164
        22a944:	e3300000 	teq	r0, #0	; 0x0
        22a948:	11a00004 	movne	r0, r4
        22a94c:	1b655e07 	blne	1b82170 <TTestAgent::$DoDropConnection(void)>
        22a950:	e5940090 	ldr	r0, [r4, #144]	; fField144
        22a954:	e3300000 	teq	r0, #0	; 0x0
        22a958:	0a000002 	beq	22a968 <TTestAgent::MainDestructor(void)+0x38>
        22a95c:	e3a01001 	mov	r1, #1	; 0x1
        22a960:	e1a0e00f 	mov	lr, pc
        22a964:	e590f000 	ldr	pc, [r0]
        22a968:	e5940094 	ldr	r0, [r4, #148]	; fField148
        22a96c:	e3300000 	teq	r0, #0	; 0x0
        22a970:	0a000002 	beq	22a980 <TTestAgent::MainDestructor(void)+0x50>
        22a974:	e3a01001 	mov	r1, #1	; 0x1
        22a978:	e1a0e00f 	mov	lr, pc
        22a97c:	e590f000 	ldr	pc, [r0]
        22a980:	e59450ac 	ldr	r5, [r4, #172]	; fField172
        22a984:	e3350000 	teq	r5, #0	; 0x0
        22a988:	0a000004 	beq	22a9a0 <TTestAgent::MainDestructor(void)+0x70>
        22a98c:	e1a00005 	mov	r0, r5
        22a990:	e3a01000 	mov	r1, #0	; 0x0
        22a994:	eb66ea3a 	bl	1be5284 <CList::$__dt(void)>
        22a998:	e1a00005 	mov	r0, r5
        22a99c:	eb668b4f 	bl	1bcd6e0 <$__dl(void *)>
        22a9a0:	e5940098 	ldr	r0, [r4, #152]	; fField152
        22a9a4:	eb66d9c2 	bl	1be10b4 <$DisposPtr>
        22a9a8:	e594009c 	ldr	r0, [r4, #156]	; fField156
        22a9ac:	eb66d9c0 	bl	1be10b4 <$DisposPtr>
        22a9b0:	e1a00004 	mov	r0, r4
        22a9b4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        22a9b8:	ea660f51 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TTestAgent::MakeFork(void)
 * Address: 0022a9bc
 */
TTestAgent::MakeFork(void) {
    /*
        22a9bc:	e3a00000 	mov	r0, #0	; 0x0
        22a9c0:	eafffc68 	b	229b68 <TTestAgent::__ct(void)>
    */
}

/**
 * Symbol: TTestAgent::ForkInit(TForkWorld *)
 * Address: 0022a9c4
 */
TTestAgent::ForkInit(TForkWorld *) {
    /*
        22a9c4:	e1a0c00d 	mov	ip, sp
        22a9c8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22a9cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        22a9d0:	e1a04000 	mov	r4, r0
        22a9d4:	e1a05001 	mov	r5, r1
        22a9d8:	eb660b32 	bl	1bad6a8 <TAppWorld::$ForkInit(TForkWorld *)>
        22a9dc:	e1b06000 	movs	r6, r0
        22a9e0:	1a000005 	bne	22a9fc <TTestAgent::ForkInit(TForkWorld *)+0x38>
        22a9e4:	e3a07000 	mov	r7, #0	; 0x0
        22a9e8:	e3a02f42 	mov	r2, #264	; 0x108
        22a9ec:	e2841070 	add	r1, r4, #112	; 0x70
        22a9f0:	e2850070 	add	r0, r5, #112	; 0x70
        22a9f4:	eb66d156 	bl	1bdef54 <$BlockMove>
        22a9f8:	e5c470b0 	strb	r7, [r4, #176]	; fField176
        22a9fc:	e1a00006 	mov	r0, r6
        22aa00:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

