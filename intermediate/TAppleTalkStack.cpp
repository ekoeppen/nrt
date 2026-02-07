#include "include/TAppleTalkStack.h"

/**
 * Symbol: TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)
 * Address: 00031c50
 */
TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *) {
    /*
         31c50:	e1a0c00d 	mov	ip, sp
         31c54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         31c58:	e24cb004 	sub	fp, ip, #4	; 0x4
         31c5c:	e5931010 	ldr	r1, [r3, #16]
         31c60:	e3510007 	cmp	r1, #7	; 0x7
         31c64:	0a00000c 	beq	31c9c <TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x4c>
         31c68:	ca000006 	bgt	31c88 <TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x38>
         31c6c:	e3310001 	teq	r1, #1	; 0x1
         31c70:	0a00000d 	beq	31cac <TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x5c>
         31c74:	e3310004 	teq	r1, #4	; 0x4
         31c78:	1a00000e 	bne	31cb8 <TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x68>
         31c7c:	e1a01003 	mov	r1, r3
         31c80:	eb691bed 	bl	1a78c3c <TAppleTalkStack::$DetachLink(TAppleTalkMessage *)>
         31c84:	ea00000a 	b	31cb4 <TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x64>
         31c88:	e3310008 	teq	r1, #8	; 0x8
         31c8c:	1a000009 	bne	31cb8 <TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x68>
         31c90:	e1a01003 	mov	r1, r3
         31c94:	eb6938d1 	bl	1a7ffe0 <TAppleTalkStack::$ShutDown(TShutdownMessage *)>
         31c98:	ea000005 	b	31cb4 <TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x64>
         31c9c:	e5b30014 	ldr	r0, [r3, #20]!
         31ca0:	e1a0e00f 	mov	lr, pc
         31ca4:	e590f024 	ldr	pc, [r0, #36]	; fField36
         31ca8:	ea000002 	b	31cb8 <TAppleTalkStack::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x68>
         31cac:	e1a01003 	mov	r1, r3
         31cb0:	eb6913a4 	bl	1a76b48 <TAppleTalkStack::$AttachLink(TAppleTalkMessage *)>
         31cb4:	e1a04000 	mov	r4, r0
         31cb8:	e1a00004 	mov	r0, r4
         31cbc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAppleTalkStack::ShutDown(TShutdownMessage *)
 * Address: 00031cc0
 */
TAppleTalkStack::ShutDown(TShutdownMessage *) {
    /*
         31cc0:	e1a0c00d 	mov	ip, sp
         31cc4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         31cc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         31ccc:	e1a04001 	mov	r4, r1
         31cd0:	e3a00014 	mov	r0, #20	; 0x14
         31cd4:	e52d0004 	str	r0, [sp, -#4]!
         31cd8:	e59f0044 	ldr	r0, [pc, #44]	; 31d24 <TAppleTalkStack::ShutDown(TShutdownMessage *)+0x64>
         31cdc:	e5810004 	str	r0, [r1, #4]
         31ce0:	eb6e873b 	bl	1bd39d4 <$GetGlobals>
         31ce4:	e1a03004 	mov	r3, r4
         31ce8:	e92d0008 	stmdb	sp!, {r3}
         31cec:	e28d3004 	add	r3, sp, #4	; 0x4
         31cf0:	e3a02000 	mov	r2, #0	; 0x0
         31cf4:	e3a01000 	mov	r1, #0	; 0x0
         31cf8:	e590c000 	ldr	ip, [r0]
         31cfc:	e1a0e00f 	mov	lr, pc
         31d00:	e28cf050 	add	pc, ip, #80	; 0x50
         31d04:	e28dd004 	add	sp, sp, #4	; 0x4
         31d08:	e1a05000 	mov	r5, r0
         31d0c:	eb6e8730 	bl	1bd39d4 <$GetGlobals>
         31d10:	eb6ed184 	bl	1be6328 <TAppWorld::$AETerminateLoop(void)>
         31d14:	e59f000c 	ldr	r0, [pc, #c]	; 31d28 <TAppleTalkStack::ShutDown(TShutdownMessage *)+0x68>
         31d18:	e5a40004 	str	r0, [r4, #4]!
         31d1c:	e1a00005 	mov	r0, r5
         31d20:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         31d24:	2a2a2a2a 	bcs	abc5d4 <ROM$$Size+0x39c988>
         31d28:	61746c6b 	cmnvs	r4, fp, ror #24
    */
}

/**
 * Symbol: TAppleTalkStack::AttachLink(TAppleTalkMessage *)
 * Address: 00031d2c
 */
TAppleTalkStack::AttachLink(TAppleTalkMessage *) {
    /*
         31d2c:	e1a0c00d 	mov	ip, sp
         31d30:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         31d34:	e24cb004 	sub	fp, ip, #4	; 0x4
         31d38:	e24dd020 	sub	sp, sp, #32	; 0x20
         31d3c:	e1a06001 	mov	r6, r1
         31d40:	e28d7004 	add	r7, sp, #4	; 0x4
         31d44:	e3a0001c 	mov	r0, #28	; 0x1c
         31d48:	e58d0000 	str	r0, [sp]
         31d4c:	e5913014 	ldr	r3, [r1, #20]
         31d50:	e92d0008 	stmdb	sp!, {r3}
         31d54:	e59f00dc 	ldr	r0, [pc, #dc]	; 31e38 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x10c>
         31d58:	e5900000 	ldr	r0, [r0]
         31d5c:	e28f1f36 	add	r1, pc, #216	; 0xd8
         31d60:	e59f30dc 	ldr	r3, [pc, #dc]	; 31e44 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x118>
         31d64:	e3a02000 	mov	r2, #0	; 0x0
         31d68:	eb0d50ab 	bl	38601c <Satisfy__18TClassInfoRegistryCFPCcT1ClT3>
         31d6c:	e28dd004 	add	sp, sp, #4	; 0x4
         31d70:	e3a050a8 	mov	r5, #168	; 0xa8
         31d74:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
         31d78:	e3300000 	teq	r0, #0	; 0x0
         31d7c:	0a000033 	beq	31e50 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x124>
         31d80:	eb6e937d 	bl	1bd6b7c <TClassInfo::$New( const(void))>
         31d84:	e3300000 	teq	r0, #0	; 0x0
         31d88:	0a000030 	beq	31e50 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x124>
         31d8c:	e1a01000 	mov	r1, r0
         31d90:	e3a00000 	mov	r0, #0	; 0x0
         31d94:	eb695176 	bl	1a86374 <TLink::$__ct(PLink *)>
         31d98:	e1b04000 	movs	r4, r0
         31d9c:	0a00002b 	beq	31e50 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x124>
         31da0:	e5b60014 	ldr	r0, [r6, #20]!
         31da4:	e5840020 	str	r0, [r4, #32]
         31da8:	e1a00004 	mov	r0, r4
         31dac:	eb692810 	bl	1a7bdf4 <TLink::$Init(void)>
         31db0:	e1b05000 	movs	r5, r0
         31db4:	1a000016 	bne	31e14 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0xe8>
         31db8:	e1a00004 	mov	r0, r4
         31dbc:	eb690b16 	bl	1a74a1c <TLink::$Activate(void)>
         31dc0:	e1b05000 	movs	r5, r0
         31dc4:	1a000012 	bne	31e14 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0xe8>
         31dc8:	e59f0078 	ldr	r0, [pc, #78]	; 31e48 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x11c>
         31dcc:	e58d0004 	str	r0, [sp, #4]
         31dd0:	e59f0074 	ldr	r0, [pc, #74]	; 31e4c <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x120>
         31dd4:	e58d0008 	str	r0, [sp, #8]
         31dd8:	e3a00001 	mov	r0, #1	; 0x1
         31ddc:	e58d0014 	str	r0, [sp, #20]
         31de0:	e58d401c 	str	r4, [sp, #28]
         31de4:	eb6e86fa 	bl	1bd39d4 <$GetGlobals>
         31de8:	e1a03007 	mov	r3, r7
         31dec:	e92d0008 	stmdb	sp!, {r3}
         31df0:	e28d3004 	add	r3, sp, #4	; 0x4
         31df4:	e3a02000 	mov	r2, #0	; 0x0
         31df8:	e3a01000 	mov	r1, #0	; 0x0
         31dfc:	e590c000 	ldr	ip, [r0]
         31e00:	e1a0e00f 	mov	lr, pc
         31e04:	e28cf050 	add	pc, ip, #80	; 0x50
         31e08:	e28dd004 	add	sp, sp, #4	; 0x4
         31e0c:	e1b05000 	movs	r5, r0
         31e10:	0a00000e 	beq	31e50 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x124>
         31e14:	e28dd020 	add	sp, sp, #32	; 0x20
         31e18:	e3350000 	teq	r5, #0	; 0x0
         31e1c:	13340000 	teqne	r4, #0	; 0x0
         31e20:	0a00000b 	beq	31e54 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x128>
         31e24:	e1a00004 	mov	r0, r4
         31e28:	e3a01001 	mov	r1, #1	; 0x1
         31e2c:	e1a0e00f 	mov	lr, pc
         31e30:	e594f000 	ldr	pc, [r4]
         31e34:	ea000006 	b	31e54 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x128>
         31e38:	0c100b58 	ldceq	11, cr0, [r0], -#352
         31e3c:	504c696e 	subpl	r6, ip, lr, ror #18
         31e40:	6b000000 	blvs	31e48 <TAppleTalkStack::AttachLink(TAppleTalkMessage *)+0x11c>
         31e44:	61746c6b 	cmnvs	r4, fp, ror #24
         31e48:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         31e4c:	6c617020 	stcvsl	0, cr7, [r1], -#128
         31e50:	e28dd020 	add	sp, sp, #32	; 0x20
         31e54:	e1a00005 	mov	r0, r5
         31e58:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAppleTalkStack::DetachLink(TAppleTalkMessage *)
 * Address: 00031e5c
 */
TAppleTalkStack::DetachLink(TAppleTalkMessage *) {
    /*
         31e5c:	e1a0c00d 	mov	ip, sp
         31e60:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         31e64:	e24cb004 	sub	fp, ip, #4	; 0x4
         31e68:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         31e6c:	e28d4004 	add	r4, sp, #4	; 0x4
         31e70:	e3a00018 	mov	r0, #24	; 0x18
         31e74:	e58d0000 	str	r0, [sp]
         31e78:	e59f0040 	ldr	r0, [pc, #40]	; 31ec0 <TAppleTalkStack::DetachLink(TAppleTalkMessage *)+0x64>
         31e7c:	e58d0004 	str	r0, [sp, #4]
         31e80:	e59f003c 	ldr	r0, [pc, #3c]	; 31ec4 <TAppleTalkStack::DetachLink(TAppleTalkMessage *)+0x68>
         31e84:	e58d0008 	str	r0, [sp, #8]
         31e88:	e3a00004 	mov	r0, #4	; 0x4
         31e8c:	e58d0014 	str	r0, [sp, #20]
         31e90:	e5b10014 	ldr	r0, [r1, #20]!
         31e94:	e58d0018 	str	r0, [sp, #24]
         31e98:	eb6e86cd 	bl	1bd39d4 <$GetGlobals>
         31e9c:	e1a03004 	mov	r3, r4
         31ea0:	e92d0008 	stmdb	sp!, {r3}
         31ea4:	e28d3004 	add	r3, sp, #4	; 0x4
         31ea8:	e3a02000 	mov	r2, #0	; 0x0
         31eac:	e3a01000 	mov	r1, #0	; 0x0
         31eb0:	e590c000 	ldr	ip, [r0]
         31eb4:	e1a0e00f 	mov	lr, pc
         31eb8:	e28cf050 	add	pc, ip, #80	; 0x50
         31ebc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         31ec0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         31ec4:	6c617020 	stcvsl	0, cr7, [r1], -#128
    */
}

/**
 * Symbol: TAppleTalkStack::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 00031ec8
 */
TAppleTalkStack::ATLKAttachLink(TAppleTalkMessage *) {
    /*
         31ec8:	e3a00000 	mov	r0, #0	; 0x0
         31ecc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppleTalkStack::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 00031ed0
 */
TAppleTalkStack::ATLKDetachLink(TAppleTalkMessage *) {
    /*
         31ed0:	e3a00000 	mov	r0, #0	; 0x0
         31ed4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)
 * Address: 00031ed8
 */
TAppleTalkStack::ATLKOpen(TAppleTalkMessage *) {
    /*
         31ed8:	e1a0c00d 	mov	ip, sp
         31edc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         31ee0:	e24cb004 	sub	fp, ip, #4	; 0x4
         31ee4:	e1a04001 	mov	r4, r1
         31ee8:	e3a06000 	mov	r6, #0	; 0x0
         31eec:	eb6e86b8 	bl	1bd39d4 <$GetGlobals>
         31ef0:	e5941014 	ldr	r1, [r4, #20]
         31ef4:	e59f2058 	ldr	r2, [pc, #58]	; 31f54 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x7c>
         31ef8:	eb6eccfa 	bl	1be52e8 <TAppWorld::$AEFindHandler(unsigned long, unsigned long)>
         31efc:	e1b05000 	movs	r5, r0
         31f00:	1a000049 	bne	3202c <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x154>
         31f04:	e5940014 	ldr	r0, [r4, #20]
         31f08:	e59fc048 	ldr	ip, [pc, #48]	; 31f58 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x80>
         31f0c:	e150000c 	cmp	r0, ip
         31f10:	0a000024 	beq	31fa8 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0xd0>
         31f14:	ca000014 	bgt	31f6c <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x94>
         31f18:	e59fc03c 	ldr	ip, [pc, #3c]	; 31f5c <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x84>
         31f1c:	e130000c 	teq	r0, ip
         31f20:	0a00002f 	beq	31fe4 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x10c>
         31f24:	e59fc034 	ldr	ip, [pc, #34]	; 31f60 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x88>
         31f28:	e130000c 	teq	r0, ip
         31f2c:	0a000020 	beq	31fb4 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0xdc>
         31f30:	e59fc02c 	ldr	ip, [pc, #2c]	; 31f64 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x8c>
         31f34:	e130000c 	teq	r0, ip
         31f38:	0a000020 	beq	31fc0 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0xe8>
         31f3c:	e59fc024 	ldr	ip, [pc, #24]	; 31f68 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x90>
         31f40:	e130000c 	teq	r0, ip
         31f44:	1a000029 	bne	31ff0 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x118>
         31f48:	e3a00000 	mov	r0, #0	; 0x0
         31f4c:	eb69027f 	bl	1a72950 <TDDP::$__ct(void)>
         31f50:	ea000025 	b	31fec <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x114>
         31f54:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         31f58:	6c617020 	stcvsl	0, cr7, [r1], -#128
         31f5c:	61647370 	cmnvs	r4, r0, ror r3
         31f60:	61657020 	cmnvs	r5, r0, lsr #32
         31f64:	61747020 	cmnvs	r4, r0, lsr #32
         31f68:	64647020 	strvsbt	r7, [r4], -#32
         31f6c:	e59fc028 	ldr	ip, [pc, #28]	; 31f9c <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0xc4>
         31f70:	e130000c 	teq	r0, ip
         31f74:	0a000014 	beq	31fcc <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0xf4>
         31f78:	e59fc020 	ldr	ip, [pc, #20]	; 31fa0 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0xc8>
         31f7c:	e130000c 	teq	r0, ip
         31f80:	0a000014 	beq	31fd8 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x100>
         31f84:	e59fc018 	ldr	ip, [pc, #18]	; 31fa4 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0xcc>
         31f88:	e130000c 	teq	r0, ip
         31f8c:	1a000017 	bne	31ff0 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x118>
         31f90:	e3a00000 	mov	r0, #0	; 0x0
         31f94:	eb690271 	bl	1a72960 <TRTMP::$__ct(void)>
         31f98:	ea000013 	b	31fec <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x114>
         31f9c:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
         31fa0:	70617020 	rsbvc	r7, r1, r0, lsr #32
         31fa4:	72746d70 	rsbvcs	r6, r4, #7168	; 0x1c00
         31fa8:	e3a00000 	mov	r0, #0	; 0x0
         31fac:	eb69026d 	bl	1a72968 <TLinkMgr::$__ct(void)>
         31fb0:	ea00000d 	b	31fec <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x114>
         31fb4:	e3a00000 	mov	r0, #0	; 0x0
         31fb8:	eb690262 	bl	1a72948 <TAEP::$__ct(void)>
         31fbc:	ea00000a 	b	31fec <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x114>
         31fc0:	e3a00000 	mov	r0, #0	; 0x0
         31fc4:	eb690260 	bl	1a7294c <TATP::$__ct(void)>
         31fc8:	ea000007 	b	31fec <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x114>
         31fcc:	e3a00000 	mov	r0, #0	; 0x0
         31fd0:	eb69025f 	bl	1a72954 <TNBP::$__ct(void)>
         31fd4:	ea000004 	b	31fec <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x114>
         31fd8:	e3a00000 	mov	r0, #0	; 0x0
         31fdc:	eb69025d 	bl	1a72958 <TPAP::$__ct(void)>
         31fe0:	ea000001 	b	31fec <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x114>
         31fe4:	e3a00000 	mov	r0, #0	; 0x0
         31fe8:	eb69025b 	bl	1a7295c <TADSP::$__ct(void)>
         31fec:	e1a05000 	mov	r5, r0
         31ff0:	e1a00005 	mov	r0, r5
         31ff4:	e5951000 	ldr	r1, [r5]
         31ff8:	e1a0e00f 	mov	lr, pc
         31ffc:	e281f014 	add	pc, r1, #20	; 0x14
         32000:	e1b06000 	movs	r6, r0
         32004:	0a000008 	beq	3202c <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x154>
         32008:	e3350000 	teq	r5, #0	; 0x0
         3200c:	0a000004 	beq	32024 <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x14c>
         32010:	e1a00005 	mov	r0, r5
         32014:	e3a01001 	mov	r1, #1	; 0x1
         32018:	e1a0e00f 	mov	lr, pc
         3201c:	e595f000 	ldr	pc, [r5]
         32020:	e3a05000 	mov	r5, #0	; 0x0
         32024:	e3360000 	teq	r6, #0	; 0x0
         32028:	1a000007 	bne	3204c <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x174>
         3202c:	e3350000 	teq	r5, #0	; 0x0
         32030:	0a000005 	beq	3204c <TAppleTalkStack::ATLKOpen(TAppleTalkMessage *)+0x174>
         32034:	e1a01004 	mov	r1, r4
         32038:	e1a00005 	mov	r0, r5
         3203c:	e5952000 	ldr	r2, [r5]
         32040:	e1a0e00f 	mov	lr, pc
         32044:	e282f02c 	add	pc, r2, #44	; 0x2c
         32048:	e1a06000 	mov	r6, r0
         3204c:	e1a00006 	mov	r0, r6
         32050:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAppleTalkStack::ATLKClose(TAppleTalkMessage *)
 * Address: 00032054
 */
TAppleTalkStack::ATLKClose(TAppleTalkMessage *) {
    /*
         32054:	e1a0c00d 	mov	ip, sp
         32058:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3205c:	e24cb004 	sub	fp, ip, #4	; 0x4
         32060:	e1a04001 	mov	r4, r1
         32064:	eb6e865a 	bl	1bd39d4 <$GetGlobals>
         32068:	e5941014 	ldr	r1, [r4, #20]
         3206c:	e59f2040 	ldr	r2, [pc, #40]	; 320b4 <TAppleTalkStack::ATLKClose(TAppleTalkMessage *)+0x60>
         32070:	eb6ecc9c 	bl	1be52e8 <TAppWorld::$AEFindHandler(unsigned long, unsigned long)>
         32074:	e1b05000 	movs	r5, r0
         32078:	0a00000e 	beq	320b8 <TAppleTalkStack::ATLKClose(TAppleTalkMessage *)+0x64>
         3207c:	e1a01004 	mov	r1, r4
         32080:	e1a00005 	mov	r0, r5
         32084:	e5952000 	ldr	r2, [r5]
         32088:	e1a0e00f 	mov	lr, pc
         3208c:	e282f030 	add	pc, r2, #48	; 0x30
         32090:	e1a04000 	mov	r4, r0
         32094:	e5950014 	ldr	r0, [r5, #20]
         32098:	e2500001 	subs	r0, r0, #1	; 0x1
         3209c:	1a000007 	bne	320c0 <TAppleTalkStack::ATLKClose(TAppleTalkMessage *)+0x6c>
         320a0:	e1a00005 	mov	r0, r5
         320a4:	e3a01001 	mov	r1, #1	; 0x1
         320a8:	e1a0e00f 	mov	lr, pc
         320ac:	e595f000 	ldr	pc, [r5]
         320b0:	ea000002 	b	320c0 <TAppleTalkStack::ATLKClose(TAppleTalkMessage *)+0x6c>
         320b4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         320b8:	e3a04015 	mov	r4, #21	; 0x15
         320bc:	e2444c2f 	sub	r4, r4, #12032	; 0x2f00
         320c0:	e1a00004 	mov	r0, r4
         320c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAppleTalkStack::ATLKShutDown(TAppleTalkMessage *)
 * Address: 000320c8
 */
TAppleTalkStack::ATLKShutDown(TAppleTalkMessage *) {
    /*
         320c8:	e3a00000 	mov	r0, #0	; 0x0
         320cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppleTalkStack::ATLKSocketClosed(TAppleTalkMessage *)
 * Address: 000320d0
 */
TAppleTalkStack::ATLKSocketClosed(TAppleTalkMessage *) {
    /*
         320d0:	e3a00000 	mov	r0, #0	; 0x0
         320d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppleTalkStack::__ct(void)
 * Address: 000323b8
 */
TAppleTalkStack::TAppleTalkStack(void) {
    /*
         323b8:	e1a0c00d 	mov	ip, sp
         323bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         323c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         323c4:	e1b04000 	movs	r4, r0
         323c8:	1a000003 	bne	323dc <TAppleTalkStack::__ct(void)+0x24>
         323cc:	e3a00018 	mov	r0, #24	; 0x18
         323d0:	eb6e70d8 	bl	1bce738 <$__nw(unsigned int)>
         323d4:	e1b04000 	movs	r4, r0
         323d8:	0a000003 	beq	323ec <TAppleTalkStack::__ct(void)+0x34>
         323dc:	e1a00004 	mov	r0, r4
         323e0:	eb68fd32 	bl	1a718b0 <TStackObject::$__ct(void)>
         323e4:	e59f0008 	ldr	r0, [pc, #8]	; 323f4 <TAppleTalkStack::__ct(void)+0x3c>
         323e8:	e5840000 	str	r0, [r4]
         323ec:	e1a00004 	mov	r0, r4
         323f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         323f4:	0001def8 	streqd	sp, [r1], -r8
    */
}

/**
 * Symbol: TAppleTalkStack::__dt(void)
 * Address: 000323f8
 */
TAppleTalkStack::~TAppleTalkStack(void) {
    /*
         323f8:	e1a0c00d 	mov	ip, sp
         323fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         32400:	e24cb004 	sub	fp, ip, #4	; 0x4
         32404:	e1a04000 	mov	r4, r0
         32408:	e1a05001 	mov	r5, r1
         3240c:	e59f0020 	ldr	r0, [pc, #20]	; 32434 <TAppleTalkStack::__dt(void)+0x3c>
         32410:	e5840000 	str	r0, [r4]
         32414:	e1a00004 	mov	r0, r4
         32418:	e3a01000 	mov	r1, #0	; 0x0
         3241c:	eb69055b 	bl	1a73990 <TStackObject::$__dt(void)>
         32420:	e3150001 	tst	r5, #1	; 0x1
         32424:	11a00004 	movne	r0, r4
         32428:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         3242c:	1a6e6cab 	bne	1bcd6e0 <$__dl(void *)>
         32430:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         32434:	0001def8 	streqd	sp, [r1], -r8
    */
}

/**
 * Symbol: TAppleTalkStack::Init(void)
 * Address: 00032438
 */
TAppleTalkStack::Init(void) {
    /*
         32438:	e59f2004 	ldr	r2, [pc, #4]	; 32444 <TAppleTalkStack::Init(void)+0xc>
         3243c:	e59f1004 	ldr	r1, [pc, #4]	; 32448 <TAppleTalkStack::Init(void)+0x10>
         32440:	ea692658 	b	1a7bda8 <TStackObject::$Init(unsigned long, unsigned long)>
         32444:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         32448:	61746c6b 	cmnvs	r4, fp, ror #24
    */
}

