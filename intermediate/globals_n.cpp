#include "Newton.h"

/**
 * Symbol: NewDictionary
 * Address: 00028d7c
 */
void globals::NewDictionary() {
    /*
         28d7c:	e1a0c00d 	mov	ip, sp
         28d80:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         28d84:	e24cb004 	sub	fp, ip, #4	; 0x4
         28d88:	e1a04000 	mov	r4, r0
         28d8c:	e1a05001 	mov	r5, r1
         28d90:	e3a00058 	mov	r0, #88	; 0x58
         28d94:	eb6ee4e4 	bl	1be212c <$NewHandle>
         28d98:	e1b06000 	movs	r6, r0
         28d9c:	e3e09001 	mvn	r9, #1	; 0x1
         28da0:	e59f70bc 	ldr	r7, [pc, #bc]	; 28e64 <NewDictionary+0xe8>
         28da4:	e3a00000 	mov	r0, #0	; 0x0
         28da8:	05879000 	streq	r9, [r7]
         28dac:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         28db0:	e5972004 	ldr	r2, [r7, #4]
         28db4:	e5961000 	ldr	r1, [r6]
         28db8:	e5812000 	str	r2, [r1]
         28dbc:	e2041007 	and	r1, r4, #7	; 0x7
         28dc0:	e3310005 	teq	r1, #5	; 0x5
         28dc4:	13310002 	teqne	r1, #2	; 0x2
         28dc8:	059f1098 	ldreq	r1, [pc, #98]	; 28e68 <NewDictionary+0xec>
         28dcc:	159f1098 	ldrne	r1, [pc, #98]	; 28e6c <NewDictionary+0xf0>
         28dd0:	e5962000 	ldr	r2, [r6]
         28dd4:	e5a2101c 	str	r1, [r2, #28]!
         28dd8:	e3a02064 	mov	r2, #100	; 0x64
         28ddc:	e5961000 	ldr	r1, [r6]
         28de0:	e5a12018 	str	r2, [r1, #24]!
         28de4:	e3e02000 	mvn	r2, #0	; 0x0
         28de8:	e5961000 	ldr	r1, [r6]
         28dec:	e5a12004 	str	r2, [r1, #4]!
         28df0:	e3a01001 	mov	r1, #1	; 0x1
         28df4:	e5962000 	ldr	r2, [r6]
         28df8:	e1a08000 	mov	r8, r0
         28dfc:	e5a2103c 	str	r1, [r2, #60]!
         28e00:	e5960000 	ldr	r0, [r6]
         28e04:	e5a08038 	str	r8, [r0, #56]!
         28e08:	e5960000 	ldr	r0, [r6]
         28e0c:	e5a06040 	str	r6, [r0, #64]!
         28e10:	e5960000 	ldr	r0, [r6]
         28e14:	e5a0104c 	str	r1, [r0, #76]!
         28e18:	e5960000 	ldr	r0, [r6]
         28e1c:	e5a08044 	str	r8, [r0, #68]!
         28e20:	e5960000 	ldr	r0, [r6]
         28e24:	e5a05034 	str	r5, [r0, #52]!
         28e28:	e5960000 	ldr	r0, [r6]
         28e2c:	e5a08024 	str	r8, [r0, #36]!
         28e30:	e5960000 	ldr	r0, [r6]
         28e34:	e5a08048 	str	r8, [r0, #72]!
         28e38:	e3a00002 	mov	r0, #2	; 0x2
         28e3c:	e5961000 	ldr	r1, [r6]
         28e40:	e5a10014 	str	r0, [r1, #20]!
         28e44:	eb6ee4b8 	bl	1be212c <$NewHandle>
         28e48:	e3300000 	teq	r0, #0	; 0x0
         28e4c:	1a000007 	bne	28e70 <NewDictionary+0xf4>
         28e50:	e1a00006 	mov	r0, r6
         28e54:	eb6ee095 	bl	1be10b0 <$DisposHandle>
         28e58:	e1a00008 	mov	r0, r8
         28e5c:	e5879000 	str	r9, [r7]
         28e60:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         28e64:	0c100810 	ldceq	8, cr0, [r0], -#64
         28e68:	0c105bf4 	ldceq	11, cr5, [r0], -#976
         28e6c:	0c105af4 	ldceq	10, cr5, [r0], -#976
         28e70:	e5961000 	ldr	r1, [r6]
         28e74:	e5a10008 	str	r0, [r1, #8]!
         28e78:	e1a01000 	mov	r1, r0
         28e7c:	e3a02061 	mov	r2, #97	; 0x61
         28e80:	e5960000 	ldr	r0, [r6]
         28e84:	e5911000 	ldr	r1, [r1]
         28e88:	e5a0100c 	str	r1, [r0, #12]!
         28e8c:	e5c12000 	strb	r2, [r1]
         28e90:	e5960000 	ldr	r0, [r6]
         28e94:	e5901034 	ldr	r1, [r0, #52]
         28e98:	e1841201 	orr	r1, r4, r1, lsl #4
         28e9c:	e590000c 	ldr	r0, [r0, #12]
         28ea0:	e5c01001 	strb	r1, [r0, #1]
         28ea4:	e5960000 	ldr	r0, [r6]
         28ea8:	e590100c 	ldr	r1, [r0, #12]
         28eac:	e5902014 	ldr	r2, [r0, #20]
         28eb0:	e0811002 	add	r1, r1, r2
         28eb4:	e5a01010 	str	r1, [r0, #16]!
         28eb8:	e1a00006 	mov	r0, r6
         28ebc:	e5878000 	str	r8, [r7]
         28ec0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: NewVerifyReset
 * Address: 0002c6a8
 */
void globals::NewVerifyReset() {
    /*
         2c6a8:	e1a0c00d 	mov	ip, sp
         2c6ac:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         2c6b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         2c6b4:	e1a06000 	mov	r6, r0
         2c6b8:	e1a05002 	mov	r5, r2
         2c6bc:	e1a04003 	mov	r4, r3
         2c6c0:	eb675272 	bl	1a01090 <$PositionToHandle>
         2c6c4:	e1a08000 	mov	r8, r0
         2c6c8:	e59f0070 	ldr	r0, [pc, #70]	; 2c740 <NewVerifyReset+0x98>
         2c6cc:	e5900000 	ldr	r0, [r0]
         2c6d0:	e3300000 	teq	r0, #0	; 0x0
         2c6d4:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         2c6d8:	e59f7064 	ldr	r7, [pc, #64]	; 2c744 <NewVerifyReset+0x9c>
         2c6dc:	e3a09000 	mov	r9, #0	; 0x0
         2c6e0:	e5960000 	ldr	r0, [r6]
         2c6e4:	e5a09020 	str	r9, [r0, #32]!
         2c6e8:	e5960000 	ldr	r0, [r6]
         2c6ec:	e5a0902c 	str	r9, [r0, #44]!
         2c6f0:	e5960000 	ldr	r0, [r6]
         2c6f4:	e5a0701c 	str	r7, [r0, #28]!
         2c6f8:	e5960000 	ldr	r0, [r6]
         2c6fc:	e5a08040 	str	r8, [r0, #64]!
         2c700:	e1360008 	teq	r6, r8
         2c704:	e5960000 	ldr	r0, [r6]
         2c708:	1a00000e 	bne	2c748 <NewVerifyReset+0xa0>
         2c70c:	e3340000 	teq	r4, #0	; 0x0
         2c710:	e5a05028 	str	r5, [r0, #40]!
         2c714:	15d40000 	ldrneb	r0, [r4]
         2c718:	13300000 	teqne	r0, #0	; 0x0
         2c71c:	0a00000a 	beq	2c74c <NewVerifyReset+0xa4>
         2c720:	e1a01004 	mov	r1, r4
         2c724:	e1a00007 	mov	r0, r7
         2c728:	eb674e4e 	bl	1a00068 <$Astrcpy__FPcT1>
         2c72c:	e1a00004 	mov	r0, r4
         2c730:	eb674e4d 	bl	1a0006c <$Astrlen(char *)>
         2c734:	e5961000 	ldr	r1, [r6]
         2c738:	e5a10020 	str	r0, [r1, #32]!
         2c73c:	ea000002 	b	2c74c <NewVerifyReset+0xa4>
         2c740:	0c100810 	ldceq	8, cr0, [r0], -#64
         2c744:	0c105af4 	ldceq	10, cr5, [r0], -#976
         2c748:	e5a09028 	str	r9, [r0, #40]!
         2c74c:	e5960000 	ldr	r0, [r6]
         2c750:	e5b06044 	ldr	r6, [r0, #68]!
         2c754:	e3360000 	teq	r6, #0	; 0x0
         2c758:	1affffe0 	bne	2c6e0 <NewVerifyReset+0x38>
         2c75c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: NextCompletion
 * Address: 0002d224
 */
void globals::NextCompletion() {
    /*
         2d224:	e1a0c00d 	mov	ip, sp
         2d228:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         2d22c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2d230:	e1a04000 	mov	r4, r0
         2d234:	e1a06001 	mov	r6, r1
         2d238:	e1a05002 	mov	r5, r2
         2d23c:	e59b9008 	ldr	r9, [fp, #8]
         2d240:	e59ba004 	ldr	sl, [fp, #4]
         2d244:	e59f7060 	ldr	r7, [pc, #60]	; 2d2ac <NextCompletion+0x88>
         2d248:	e59f8060 	ldr	r8, [pc, #60]	; 2d2b0 <NextCompletion+0x8c>
         2d24c:	e5980018 	ldr	r0, [r8, #24]
         2d250:	e5941000 	ldr	r1, [r4]
         2d254:	e5911008 	ldr	r1, [r1, #8]
         2d258:	e5911000 	ldr	r1, [r1]
         2d25c:	e5d11001 	ldrb	r1, [r1, #1]
         2d260:	e2011007 	and	r1, r1, #7	; 0x7
         2d264:	e3310005 	teq	r1, #5	; 0x5
         2d268:	13310002 	teqne	r1, #2	; 0x2
         2d26c:	03a01001 	moveq	r1, #1	; 0x1
         2d270:	13a01000 	movne	r1, #0	; 0x0
         2d274:	e21110ff 	ands	r1, r1, #255	; 0xff
         2d278:	0a000004 	beq	2d290 <NextCompletion+0x6c>
         2d27c:	e5932000 	ldr	r2, [r3]
         2d280:	e1b02822 	movs	r2, r2, lsr #16
         2d284:	0a000004 	beq	2d29c <NextCompletion+0x78>
         2d288:	e3510000 	cmp	r1, #0	; 0x0
         2d28c:	1a000008 	bne	2d2b4 <NextCompletion+0x90>
         2d290:	e5d31000 	ldrb	r1, [r3]
         2d294:	e3310000 	teq	r1, #0	; 0x0
         2d298:	1a00000e 	bne	2d2d8 <NextCompletion+0xb4>
         2d29c:	e3a07000 	mov	r7, #0	; 0x0
         2d2a0:	e3e01005 	mvn	r1, #5	; 0x5
         2d2a4:	e5881000 	str	r1, [r8]
         2d2a8:	ea00002e 	b	2d368 <NextCompletion+0x144>
         2d2ac:	0c100824 	ldceq	8, cr0, [r0], -#144
         2d2b0:	0c100810 	ldceq	8, cr0, [r0], -#64
         2d2b4:	0a000007 	beq	2d2d8 <NextCompletion+0xb4>
         2d2b8:	e1a01003 	mov	r1, r3
         2d2bc:	e1a00005 	mov	r0, r5
         2d2c0:	eb674b65 	bl	1a0005c <$Ashortstrcpy__FPUsT1>
         2d2c4:	e1a00006 	mov	r0, r6
         2d2c8:	eb674b64 	bl	1a00060 <$Ashortstrlen(unsigned short *)>
         2d2cc:	e0800fa0 	add	r0, r0, r0, lsr #31
         2d2d0:	e1a000c0 	mov	r0, r0, asr #1
         2d2d4:	ea000004 	b	2d2ec <NextCompletion+0xc8>
         2d2d8:	e1a01003 	mov	r1, r3
         2d2dc:	e1a00005 	mov	r0, r5
         2d2e0:	eb674b60 	bl	1a00068 <$Astrcpy__FPcT1>
         2d2e4:	e1a00006 	mov	r0, r6
         2d2e8:	eb674b5f 	bl	1a0006c <$Astrlen(char *)>
         2d2ec:	e5941000 	ldr	r1, [r4]
         2d2f0:	e3a06000 	mov	r6, #0	; 0x0
         2d2f4:	e5a10020 	str	r0, [r1, #32]!
         2d2f8:	e5940000 	ldr	r0, [r4]
         2d2fc:	e5a0602c 	str	r6, [r0, #44]!
         2d300:	e5940000 	ldr	r0, [r4]
         2d304:	e5a0501c 	str	r5, [r0, #28]!
         2d308:	e1a00004 	mov	r0, r4
         2d30c:	e3a01006 	mov	r1, #6	; 0x6
         2d310:	eb674b56 	bl	1a00070 <$CallAirusA>
         2d314:	e1a00004 	mov	r0, r4
         2d318:	eb675385 	bl	1a02134 <$HasActualOrImpliedAtr(AirusAParmBlock **)>
         2d31c:	e3300000 	teq	r0, #0	; 0x0
         2d320:	03a07000 	moveq	r7, #0	; 0x0
         2d324:	15940000 	ldrne	r0, [r4]
         2d328:	15900024 	ldrne	r0, [r0, #36]
         2d32c:	15870000 	strne	r0, [r7]
         2d330:	e1a00004 	mov	r0, r4
         2d334:	eb67537e 	bl	1a02134 <$HasActualOrImpliedAtr(AirusAParmBlock **)>
         2d338:	e3300000 	teq	r0, #0	; 0x0
         2d33c:	15940000 	ldrne	r0, [r4]
         2d340:	15900048 	ldrne	r0, [r0, #72]
         2d344:	e5941000 	ldr	r1, [r4]
         2d348:	e591102c 	ldr	r1, [r1, #44]
         2d34c:	e3310000 	teq	r1, #0	; 0x0
         2d350:	05886000 	streq	r6, [r8]
         2d354:	0a000003 	beq	2d368 <NextCompletion+0x144>
         2d358:	e3310001 	teq	r1, #1	; 0x1
         2d35c:	03e01009 	mvneq	r1, #9	; 0x9
         2d360:	03a07000 	moveq	r7, #0	; 0x0
         2d364:	05881000 	streq	r1, [r8]
         2d368:	e33a0000 	teq	sl, #0	; 0x0
         2d36c:	158a7000 	strne	r7, [sl]
         2d370:	e3390000 	teq	r9, #0	; 0x0
         2d374:	15890000 	strne	r0, [r9]
         2d378:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NORM(long *)
 * Address: 00030dbc
 */
NORM(long *) {
    /*
         30dbc:	e3a0203f 	mov	r2, #63	; 0x3f
         30dc0:	e2822bc9 	add	r2, r2, #205824	; 0x32400
         30dc4:	e5901000 	ldr	r1, [r0]
         30dc8:	e1510002 	cmp	r1, r2
         30dcc:	da000007 	ble	30df0 <NORM(long *)+0x34>
         30dd0:	e5901000 	ldr	r1, [r0]
         30dd4:	e241107e 	sub	r1, r1, #126	; 0x7e
         30dd8:	e2811b6e 	add	r1, r1, #112640	; 0x1b800
         30ddc:	e2411702 	sub	r1, r1, #524288	; 0x80000
         30de0:	e5801000 	str	r1, [r0]
         30de4:	e1510002 	cmp	r1, r2
         30de8:	cafffff8 	bgt	30dd0 <NORM(long *)+0x14>
         30dec:	e1a0f00e 	mov	pc, lr
         30df0:	e1a02001 	mov	r2, r1
         30df4:	e3e0103e 	mvn	r1, #62	; 0x3e
         30df8:	e2411bc9 	sub	r1, r1, #205824	; 0x32400
         30dfc:	e1520001 	cmp	r2, r1
         30e00:	c1a0f00e 	movgt	pc, lr
         30e04:	e5902000 	ldr	r2, [r0]
         30e08:	e282207e 	add	r2, r2, #126	; 0x7e
         30e0c:	e2822b92 	add	r2, r2, #149504	; 0x24800
         30e10:	e2822701 	add	r2, r2, #262144	; 0x40000
         30e14:	e5802000 	str	r2, [r0]
         30e18:	e1520001 	cmp	r2, r1
         30e1c:	dafffff8 	ble	30e04 <NORM(long *)+0x48>
         30e20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NextTab(void)
 * Address: 000382d0
 */
NextTab(void) {
    /*
         382d0:	e3a00000 	mov	r0, #0	; 0x0
         382d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NextDown(void)
 * Address: 000382d8
 */
NextDown(void) {
    /*
         382d8:	e3a00000 	mov	r0, #0	; 0x0
         382dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NextUp(void)
 * Address: 000382e4
 */
NextUp(void) {
    /*
         382e4:	e3a00000 	mov	r0, #0	; 0x0
         382e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NewByName__FPCcT1
 * Address: 0005c884
 */
void globals::NewByName() {
    /*
         5c884:	e1a0c00d 	mov	ip, sp
         5c888:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5c88c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c890:	e1a02001 	mov	r2, r1
         5c894:	e1a01000 	mov	r1, r0
         5c898:	e59f001c 	ldr	r0, [pc, #1c]	; 5c8bc <NewByName__FPCcT1+0x38>
         5c89c:	e5900000 	ldr	r0, [r0]
         5c8a0:	e3a03000 	mov	r3, #0	; 0x0
         5c8a4:	eb6df91b 	bl	1bdad18 <$Satisfy__18TClassInfoRegistryCFPCcT1Ul>
         5c8a8:	e3300000 	teq	r0, #0	; 0x0
         5c8ac:	03a00000 	moveq	r0, #0	; 0x0
         5c8b0:	191b6800 	ldmnedb	fp, {fp, sp, lr}
         5c8b4:	1a6de8b0 	bne	1bd6b7c <TClassInfo::$New( const(void))>
         5c8b8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         5c8bc:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: NewByName__FPCcT1Ul
 * Address: 0005c8c0
 */
void globals::NewByName() {
    /*
         5c8c0:	e1a0c00d 	mov	ip, sp
         5c8c4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5c8c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c8cc:	e1a03002 	mov	r3, r2
         5c8d0:	e1a02001 	mov	r2, r1
         5c8d4:	e1a01000 	mov	r1, r0
         5c8d8:	e59f0018 	ldr	r0, [pc, #18]	; 5c8f8 <NewByName__FPCcT1Ul+0x38>
         5c8dc:	e5900000 	ldr	r0, [r0]
         5c8e0:	eb6df90c 	bl	1bdad18 <$Satisfy__18TClassInfoRegistryCFPCcT1Ul>
         5c8e4:	e3300000 	teq	r0, #0	; 0x0
         5c8e8:	03a00000 	moveq	r0, #0	; 0x0
         5c8ec:	191b6800 	ldmnedb	fp, {fp, sp, lr}
         5c8f0:	1a6de8a1 	bne	1bd6b7c <TClassInfo::$New( const(void))>
         5c8f4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         5c8f8:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: NewByName__FPCcN21
 * Address: 0005c8fc
 */
void globals::NewByName() {
    /*
         5c8fc:	e1a0c00d 	mov	ip, sp
         5c900:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5c904:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c908:	e1a03002 	mov	r3, r2
         5c90c:	e1a02001 	mov	r2, r1
         5c910:	e1a01000 	mov	r1, r0
         5c914:	e59f0018 	ldr	r0, [pc, #18]	; 5c934 <NewByName__FPCcN21+0x38>
         5c918:	e5900000 	ldr	r0, [r0]
         5c91c:	eb0ca5b8 	bl	386004 <Satisfy__18TClassInfoRegistryCFPCcN21>
         5c920:	e3300000 	teq	r0, #0	; 0x0
         5c924:	03a00000 	moveq	r0, #0	; 0x0
         5c928:	191b6800 	ldmnedb	fp, {fp, sp, lr}
         5c92c:	1a6de892 	bne	1bd6b7c <TClassInfo::$New( const(void))>
         5c930:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         5c934:	0c100b58 	ldceq	11, cr0, [r0], -#352
    */
}

/**
 * Symbol: NewFromHunkByName__FPvPCcT2
 * Address: 0005cb0c
 */
void globals::NewFromHunkByName() {
    /*
         5cb0c:	e1a0c00d 	mov	ip, sp
         5cb10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5cb14:	e24cb004 	sub	fp, ip, #4	; 0x4
         5cb18:	eb6dcf38 	bl	1bd0800 <$ClassInfoFromHunkByName__FPvPCcT2>
         5cb1c:	e1b04000 	movs	r4, r0
         5cb20:	03a00000 	moveq	r0, #0	; 0x0
         5cb24:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5cb28:	e1a00004 	mov	r0, r4
         5cb2c:	eb6e00ba 	bl	1bdce1c <TClassInfo::$Size( const(void))>
         5cb30:	eb6de80c 	bl	1bd6b68 <$malloc>
         5cb34:	e1b05000 	movs	r5, r0
         5cb38:	11a01005 	movne	r1, r5
         5cb3c:	11a00004 	movne	r0, r4
         5cb40:	1b6de806 	blne	1bd6b60 <TClassInfo::$MakeAt( const(void const *))>
         5cb44:	e1a00005 	mov	r0, r5
         5cb48:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3
 * Address: 00065848
 */
void globals::NewGetTraceFromStrokes() {
    /*
         65848:	e1a0c00d 	mov	ip, sp
         6584c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         65850:	e24cb004 	sub	fp, ip, #4	; 0x4
         65854:	e1a06001 	mov	r6, r1
         65858:	e24dd00c 	sub	sp, sp, #12	; 0xc
         6585c:	e3a05000 	mov	r5, #0	; 0x0
         65860:	e51b302c 	ldr	r3, [fp, -#44]
         65864:	e5c35001 	strb	r5, [r3, #1]
         65868:	e5c35000 	strb	r5, [r3]
         6586c:	e51b2030 	ldr	r2, [fp, -#48]
         65870:	e5c25001 	strb	r5, [r2, #1]
         65874:	e5c25000 	strb	r5, [r2]
         65878:	e5914000 	ldr	r4, [r1]
         6587c:	e3340000 	teq	r4, #0	; 0x0
         65880:	1a000016 	bne	658e0 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x98>
         65884:	e3a00000 	mov	r0, #0	; 0x0
         65888:	e3a01000 	mov	r1, #0	; 0x0
         6588c:	e51b2038 	ldr	r2, [fp, -#56]
         65890:	e5922000 	ldr	r2, [r2]
         65894:	e3320000 	teq	r2, #0	; 0x0
         65898:	0a0000a2 	beq	65b28 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x2e0>
         6589c:	e592200c 	ldr	r2, [r2, #12]
         658a0:	e0820000 	add	r0, r2, r0
         658a4:	e2800001 	add	r0, r0, #1	; 0x1
         658a8:	e2811001 	add	r1, r1, #1	; 0x1
         658ac:	e51b2038 	ldr	r2, [fp, -#56]
         658b0:	e7922101 	ldr	r2, [r2, r1, lsl #2]
         658b4:	e3320000 	teq	r2, #0	; 0x0
         658b8:	1afffff7 	bne	6589c <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x54>
         658bc:	e3300000 	teq	r0, #0	; 0x0
         658c0:	0a000098 	beq	65b28 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x2e0>
         658c4:	e2800001 	add	r0, r0, #1	; 0x1
         658c8:	e1a00100 	mov	r0, r0, lsl #2
         658cc:	eb6827ba 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
         658d0:	e1b04000 	movs	r4, r0
         658d4:	05865000 	streq	r5, [r6]
         658d8:	0a000092 	beq	65b28 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x2e0>
         658dc:	e5864000 	str	r4, [r6]
         658e0:	e3a08000 	mov	r8, #0	; 0x0
         658e4:	e3a07000 	mov	r7, #0	; 0x0
         658e8:	e3a06001 	mov	r6, #1	; 0x1
         658ec:	e5c45001 	strb	r5, [r4, #1]
         658f0:	e5c45000 	strb	r5, [r4]
         658f4:	e3e01000 	mvn	r1, #0	; 0x0
         658f8:	e5c41003 	strb	r1, [r4, #3]
         658fc:	e5c41002 	strb	r1, [r4, #2]
         65900:	e3a00000 	mov	r0, #0	; 0x0
         65904:	e58d0004 	str	r0, [sp, #4]
         65908:	e51b0038 	ldr	r0, [fp, -#56]
         6590c:	e5900000 	ldr	r0, [r0]
         65910:	e3300000 	teq	r0, #0	; 0x0
         65914:	0a000058 	beq	65a7c <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x234>
         65918:	e59fa084 	ldr	sl, [pc, #84]	; 659a4 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x15c>
         6591c:	e590100c 	ldr	r1, [r0, #12]
         65920:	e58d1008 	str	r1, [sp, #8]
         65924:	e51b302c 	ldr	r3, [fp, -#44]
         65928:	e5932000 	ldr	r2, [r3]
         6592c:	e1a02822 	mov	r2, r2, lsr #16
         65930:	e0821001 	add	r1, r2, r1
         65934:	e2811001 	add	r1, r1, #1	; 0x1
         65938:	e51b302c 	ldr	r3, [fp, -#44]
         6593c:	e5c31001 	strb	r1, [r3, #1]
         65940:	e1a01441 	mov	r1, r1, asr #8
         65944:	e5c31000 	strb	r1, [r3]
         65948:	e3a01000 	mov	r1, #0	; 0x0
         6594c:	eb6c1725 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
         65950:	e1a05000 	mov	r5, r0
         65954:	e3a01000 	mov	r1, #0	; 0x0
         65958:	e58d1000 	str	r1, [sp]
         6595c:	e59d0008 	ldr	r0, [sp, #8]
         65960:	e3500000 	cmp	r0, #0	; 0x0
         65964:	9a000033 	bls	65a38 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x1f0>
         65968:	e59a0000 	ldr	r0, [sl]
         6596c:	e3300702 	teq	r0, #524288	; 0x80000
         65970:	e1a00005 	mov	r0, r5
         65974:	1a00000b 	bne	659a8 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x160>
         65978:	eb6c1f4f 	bl	1b6d6bc <$SampleX(SamplePt *)>
         6597c:	e3a01902 	mov	r1, #32768	; 0x8000
         65980:	e0810180 	add	r0, r1, r0, lsl #3
         65984:	e1a00840 	mov	r0, r0, asr #16
         65988:	e1a09800 	mov	r9, r0, lsl #16
         6598c:	e1a09849 	mov	r9, r9, asr #16
         65990:	e1a00005 	mov	r0, r5
         65994:	eb6c1f49 	bl	1b6d6c0 <$SampleY(SamplePt *)>
         65998:	e3a01902 	mov	r1, #32768	; 0x8000
         6599c:	e0810180 	add	r0, r1, r0, lsl #3
         659a0:	ea00000c 	b	659d8 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x190>
         659a4:	0c101894 	ldceq	8, cr1, [r0], -#592
         659a8:	eb6c1f43 	bl	1b6d6bc <$SampleX(SamplePt *)>
         659ac:	e59a1000 	ldr	r1, [sl]
         659b0:	eb6dedc3 	bl	1be10c4 <$FixedMultiply>
         659b4:	e2800902 	add	r0, r0, #32768	; 0x8000
         659b8:	e1a00840 	mov	r0, r0, asr #16
         659bc:	e1a09800 	mov	r9, r0, lsl #16
         659c0:	e1a09849 	mov	r9, r9, asr #16
         659c4:	e1a00005 	mov	r0, r5
         659c8:	eb6c1f3c 	bl	1b6d6c0 <$SampleY(SamplePt *)>
         659cc:	e59a1004 	ldr	r1, [sl, #4]
         659d0:	eb6dedbb 	bl	1be10c4 <$FixedMultiply>
         659d4:	e2800902 	add	r0, r0, #32768	; 0x8000
         659d8:	e1a00840 	mov	r0, r0, asr #16
         659dc:	e1a00800 	mov	r0, r0, lsl #16
         659e0:	e1a00840 	mov	r0, r0, asr #16
         659e4:	e1590008 	cmp	r9, r8
         659e8:	b1a08009 	movlt	r8, r9
         659ec:	e1500007 	cmp	r0, r7
         659f0:	b1a07000 	movlt	r7, r0
         659f4:	e0841106 	add	r1, r4, r6, lsl #2
         659f8:	e5c19001 	strb	r9, [r1, #1]
         659fc:	e1a02449 	mov	r2, r9, asr #8
         65a00:	e5c12000 	strb	r2, [r1]
         65a04:	e1a01006 	mov	r1, r6
         65a08:	e2866001 	add	r6, r6, #1	; 0x1
         65a0c:	e0841101 	add	r1, r4, r1, lsl #2
         65a10:	e5c10003 	strb	r0, [r1, #3]
         65a14:	e1a00440 	mov	r0, r0, asr #8
         65a18:	e5c10002 	strb	r0, [r1, #2]
         65a1c:	e2855004 	add	r5, r5, #4	; 0x4
         65a20:	e59d1000 	ldr	r1, [sp]
         65a24:	e2811001 	add	r1, r1, #1	; 0x1
         65a28:	e58d1000 	str	r1, [sp]
         65a2c:	e59d0008 	ldr	r0, [sp, #8]
         65a30:	e1510000 	cmp	r1, r0
         65a34:	3affffcb 	bcc	65968 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x120>
         65a38:	e3a00000 	mov	r0, #0	; 0x0
         65a3c:	e0841106 	add	r1, r4, r6, lsl #2
         65a40:	e5c10001 	strb	r0, [r1, #1]
         65a44:	e5c10000 	strb	r0, [r1]
         65a48:	e3e01000 	mvn	r1, #0	; 0x0
         65a4c:	e1a00006 	mov	r0, r6
         65a50:	e2866001 	add	r6, r6, #1	; 0x1
         65a54:	e0840100 	add	r0, r4, r0, lsl #2
         65a58:	e5c01003 	strb	r1, [r0, #3]
         65a5c:	e5c01002 	strb	r1, [r0, #2]
         65a60:	e59d0004 	ldr	r0, [sp, #4]
         65a64:	e2800001 	add	r0, r0, #1	; 0x1
         65a68:	e58d0004 	str	r0, [sp, #4]
         65a6c:	e51b1038 	ldr	r1, [fp, -#56]
         65a70:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         65a74:	e3300000 	teq	r0, #0	; 0x0
         65a78:	1affffa7 	bne	6591c <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0xd4>
         65a7c:	e59d0004 	ldr	r0, [sp, #4]
         65a80:	e51b2030 	ldr	r2, [fp, -#48]
         65a84:	e5c20001 	strb	r0, [r2, #1]
         65a88:	e1a00440 	mov	r0, r0, asr #8
         65a8c:	e5c20000 	strb	r0, [r2]
         65a90:	e59d0004 	ldr	r0, [sp, #4]
         65a94:	e3500000 	cmp	r0, #0	; 0x0
         65a98:	9a000007 	bls	65abc <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x274>
         65a9c:	e51b302c 	ldr	r3, [fp, -#44]
         65aa0:	e5930000 	ldr	r0, [r3]
         65aa4:	e1a00820 	mov	r0, r0, lsr #16
         65aa8:	e2800001 	add	r0, r0, #1	; 0x1
         65aac:	e51b302c 	ldr	r3, [fp, -#44]
         65ab0:	e5c30001 	strb	r0, [r3, #1]
         65ab4:	e1a00440 	mov	r0, r0, asr #8
         65ab8:	e5c30000 	strb	r0, [r3]
         65abc:	e3380000 	teq	r8, #0	; 0x0
         65ac0:	03370000 	teqeq	r7, #0	; 0x0
         65ac4:	0a000017 	beq	65b28 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x2e0>
         65ac8:	e51b302c 	ldr	r3, [fp, -#44]
         65acc:	e5930000 	ldr	r0, [r3]
         65ad0:	e1a00840 	mov	r0, r0, asr #16
         65ad4:	e3a01000 	mov	r1, #0	; 0x0
         65ad8:	e3500000 	cmp	r0, #0	; 0x0
         65adc:	9a000011 	bls	65b28 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x2e0>
         65ae0:	e5943000 	ldr	r3, [r4]
         65ae4:	e1b03843 	movs	r3, r3, asr #16
         65ae8:	15942002 	ldrne	r2, [r4, #2]
         65aec:	11a02842 	movne	r2, r2, asr #16
         65af0:	13720001 	cmnne	r2, #1	; 0x1
         65af4:	0a000007 	beq	65b18 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x2d0>
         65af8:	e0433008 	sub	r3, r3, r8
         65afc:	e5c43001 	strb	r3, [r4, #1]
         65b00:	e1a03443 	mov	r3, r3, asr #8
         65b04:	e5c43000 	strb	r3, [r4]
         65b08:	e0422007 	sub	r2, r2, r7
         65b0c:	e5c42003 	strb	r2, [r4, #3]
         65b10:	e1a02442 	mov	r2, r2, asr #8
         65b14:	e5c42002 	strb	r2, [r4, #2]
         65b18:	e2844004 	add	r4, r4, #4	; 0x4
         65b1c:	e2811001 	add	r1, r1, #1	; 0x1
         65b20:	e1510000 	cmp	r1, r0
         65b24:	3affffed 	bcc	65ae0 <NewGetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3+0x298>
         65b28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NoConversion(char *, unsigned char *, long)
 * Address: 00074aac
 */
NoConversion(char *, unsigned char *, long) {
    /*
         74aac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NewCorrectInfo(void)
 * Address: 0007623c
 */
NewCorrectInfo(void) {
    /*
         7623c:	e1a0c00d 	mov	ip, sp
         76240:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         76244:	e24cb004 	sub	fp, ip, #4	; 0x4
         76248:	e24dd004 	sub	sp, sp, #4	; 0x4
         7624c:	e59f0024 	ldr	r0, [pc, #24]	; 76278 <NewCorrectInfo(void)+0x3c>
         76250:	eb6d2fc5 	bl	1bc216c <$Clone(RefVar const &)>
         76254:	eb6d2fbc 	bl	1bc214c <$AllocateRefHandle(long)>
         76258:	e58d0000 	str	r0, [sp]
         7625c:	e1a0000d 	mov	r0, sp
         76260:	eb68f9f7 	bl	1ab4a44 <$InitCorrection(RefVar const &)>
         76264:	e59d0000 	ldr	r0, [sp]
         76268:	e5904000 	ldr	r4, [r0]
         7626c:	eb6d33d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76270:	e1a00004 	mov	r0, r4
         76274:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         76278:	00681050 	rsbeq	r1, r8, r0, asr r0
    */
}

/**
 * Symbol: NewASCIIString(RefVar const &)
 * Address: 0007d78c
 */
NewASCIIString(RefVar const &) {
    /*
         7d78c:	e1a0c00d 	mov	ip, sp
         7d790:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7d794:	e24cb004 	sub	fp, ip, #4	; 0x4
         7d798:	e1a04000 	mov	r4, r0
         7d79c:	e5900000 	ldr	r0, [r0]
         7d7a0:	e5900000 	ldr	r0, [r0]
         7d7a4:	eb6d1ec0 	bl	1bc52ac <$Length(long)>
         7d7a8:	e1a000a0 	mov	r0, r0, lsr #1
         7d7ac:	eb6d9263 	bl	1be2140 <$NewPtr>
         7d7b0:	e1b05000 	movs	r5, r0
         7d7b4:	0a000005 	beq	7d7d0 <NewASCIIString(RefVar const &)+0x44>
         7d7b8:	e1a00004 	mov	r0, r4
         7d7bc:	eb6d1670 	bl	1bc3184 <$GetCString(RefVar const &)>
         7d7c0:	e1a01005 	mov	r1, r5
         7d7c4:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         7d7c8:	e3a02001 	mov	r2, #1	; 0x1
         7d7cc:	eb6da6eb 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         7d7d0:	e1a00005 	mov	r0, r5
         7d7d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NextPhrase(void)
 * Address: 00080e94
 */
NextPhrase(void) {
    /*
         80e94:	e1a0c00d 	mov	ip, sp
         80e98:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         80e9c:	e24cb004 	sub	fp, ip, #4	; 0x4
         80ea0:	e3a00002 	mov	r0, #2	; 0x2
         80ea4:	eb6d04a8 	bl	1bc214c <$AllocateRefHandle(long)>
         80ea8:	e1a04000 	mov	r4, r0
         80eac:	e59f5034 	ldr	r5, [pc, #34]	; 80ee8 <NextPhrase(void)+0x54>
         80eb0:	e5950000 	ldr	r0, [r5]
         80eb4:	e5900110 	ldr	r0, [r0, #272]
         80eb8:	e5900000 	ldr	r0, [r0]
         80ebc:	eb6d10fa 	bl	1bc52ac <$Length(long)>
         80ec0:	e1a07000 	mov	r7, r0
         80ec4:	e5950000 	ldr	r0, [r5]
         80ec8:	e5900100 	ldr	r0, [r0, #256]
         80ecc:	e3a06002 	mov	r6, #2	; 0x2
         80ed0:	e3300000 	teq	r0, #0	; 0x0
         80ed4:	1a000004 	bne	80eec <NextPhrase(void)+0x58>
         80ed8:	e1a00004 	mov	r0, r4
         80edc:	eb6d08b6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         80ee0:	e1a00006 	mov	r0, r6
         80ee4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         80ee8:	0c100bbc 	ldceq	11, cr0, [r0], -#752
         80eec:	eb66e78d 	bl	1a3ad28 <$PeekValidPhrase(void)>
         80ef0:	e3300004 	teq	r0, #4	; 0x4
         80ef4:	1afffff7 	bne	80ed8 <NextPhrase(void)+0x44>
         80ef8:	e2873001 	add	r3, r7, #1	; 0x1
         80efc:	e5950000 	ldr	r0, [r5]
         80f00:	e5902100 	ldr	r2, [r0, #256]
         80f04:	e0433002 	sub	r3, r3, r2
         80f08:	e5901104 	ldr	r1, [r0, #260]
         80f0c:	e1530001 	cmp	r3, r1
         80f10:	ba00000b 	blt	80f44 <NextPhrase(void)+0xb0>
         80f14:	e2800e11 	add	r0, r0, #272	; 0x110
         80f18:	eb66e780 	bl	1a3ad20 <$PartialGlueString__FRC6RefVarUlT2>
         80f1c:	e5840000 	str	r0, [r4]
         80f20:	e5950000 	ldr	r0, [r5]
         80f24:	e5901104 	ldr	r1, [r0, #260]
         80f28:	e2811001 	add	r1, r1, #1	; 0x1
         80f2c:	e5a01104 	str	r1, [r0, #260]!
         80f30:	e5945000 	ldr	r5, [r4]
         80f34:	e1a00004 	mov	r0, r4
         80f38:	eb6d089f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         80f3c:	e1a00005 	mov	r0, r5
         80f40:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         80f44:	e3a01001 	mov	r1, #1	; 0x1
         80f48:	e5a01104 	str	r1, [r0, #260]!
         80f4c:	e5950000 	ldr	r0, [r5]
         80f50:	e5901100 	ldr	r1, [r0, #256]
         80f54:	e2511001 	subs	r1, r1, #1	; 0x1
         80f58:	e5a01100 	str	r1, [r0, #256]!
         80f5c:	0affffdd 	beq	80ed8 <NextPhrase(void)+0x44>
         80f60:	eb66e770 	bl	1a3ad28 <$PeekValidPhrase(void)>
         80f64:	e3300004 	teq	r0, #4	; 0x4
         80f68:	1affffda 	bne	80ed8 <NextPhrase(void)+0x44>
         80f6c:	e5950000 	ldr	r0, [r5]
         80f70:	e5901104 	ldr	r1, [r0, #260]
         80f74:	e5902100 	ldr	r2, [r0, #256]
         80f78:	eaffffe5 	b	80f14 <NextPhrase(void)+0x80>
    */
}

/**
 * Symbol: NStringCat__FRC6RefVarN21
 * Address: 0008337c
 */
void globals::NStringCat() {
    /*
         8337c:	e1a0c00d 	mov	ip, sp
         83380:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         83384:	e24cb004 	sub	fp, ip, #4	; 0x4
         83388:	e1a04001 	mov	r4, r1
         8338c:	e1a05002 	mov	r5, r2
         83390:	e5910000 	ldr	r0, [r1]
         83394:	e5900000 	ldr	r0, [r0]
         83398:	eb6d07c3 	bl	1bc52ac <$Length(long)>
         8339c:	e1a06000 	mov	r6, r0
         833a0:	e5950000 	ldr	r0, [r5]
         833a4:	e5900000 	ldr	r0, [r0]
         833a8:	eb6d07bf 	bl	1bc52ac <$Length(long)>
         833ac:	e0860000 	add	r0, r6, r0
         833b0:	e2401002 	sub	r1, r0, #2	; 0x2
         833b4:	e1a00004 	mov	r0, r4
         833b8:	eb6d0beb 	bl	1bc636c <$SetLength(RefVar const &, long)>
         833bc:	e1a00005 	mov	r0, r5
         833c0:	eb6cff6f 	bl	1bc3184 <$GetCString(RefVar const &)>
         833c4:	e1a05000 	mov	r5, r0
         833c8:	e1a00004 	mov	r0, r4
         833cc:	eb6cff6c 	bl	1bc3184 <$GetCString(RefVar const &)>
         833d0:	e1a01005 	mov	r1, r5
         833d4:	eb6dacdd 	bl	1bee750 <$Ustrcat>
         833d8:	e5940000 	ldr	r0, [r4]
         833dc:	e5900000 	ldr	r0, [r0]
         833e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NextDayOfWeek(TDate *, unsigned long)
 * Address: 0008aa4c
 */
NextDayOfWeek(TDate *, unsigned long) {
    /*
         8aa4c:	e1a0c00d 	mov	ip, sp
         8aa50:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         8aa54:	e24cb004 	sub	fp, ip, #4	; 0x4
         8aa58:	e1a04000 	mov	r4, r0
         8aa5c:	e1a06001 	mov	r6, r1
         8aa60:	eb6dd138 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
         8aa64:	e1a05000 	mov	r5, r0
         8aa68:	e3a00b02 	mov	r0, #2048	; 0x800
         8aa6c:	e5941018 	ldr	r1, [r4, #24]
         8aa70:	e1a00130 	mov	r0, r0, lsr r1
         8aa74:	e2061efe 	and	r1, r6, #4064	; 0xfe0
         8aa78:	e206601f 	and	r6, r6, #31	; 0x1f
         8aa7c:	e3a02000 	mov	r2, #0	; 0x0
         8aa80:	e1110000 	tst	r1, r0
         8aa84:	15940008 	ldrne	r0, [r4, #8]
         8aa88:	10800002 	addne	r0, r0, r2
         8aa8c:	15840008 	strne	r0, [r4, #8]
         8aa90:	1a000007 	bne	8aab4 <NextDayOfWeek(TDate *, unsigned long)+0x68>
         8aa94:	e1a000a0 	mov	r0, r0, lsr #1
         8aa98:	e3500020 	cmp	r0, #32	; 0x20
         8aa9c:	33a00b02 	movcc	r0, #2048	; 0x800
         8aaa0:	e2822001 	add	r2, r2, #1	; 0x1
         8aaa4:	e1a02802 	mov	r2, r2, lsl #16
         8aaa8:	e1a02842 	mov	r2, r2, asr #16
         8aaac:	e3520007 	cmp	r2, #7	; 0x7
         8aab0:	bafffff2 	blt	8aa80 <NextDayOfWeek(TDate *, unsigned long)+0x34>
         8aab4:	e1a00004 	mov	r0, r4
         8aab8:	eb6dd120 	bl	1bfef40 <TDate::$CleanUpFields(void)>
         8aabc:	e336001f 	teq	r6, #31	; 0x1f
         8aac0:	0a00001e 	beq	8ab40 <NextDayOfWeek(TDate *, unsigned long)+0xf4>
         8aac4:	e5947008 	ldr	r7, [r4, #8]
         8aac8:	e2471001 	sub	r1, r7, #1	; 0x1
         8aacc:	e3a00007 	mov	r0, #7	; 0x7
         8aad0:	eb6c9f9c 	bl	1bb2948 <$__rt_udiv>
         8aad4:	e3a01010 	mov	r1, #16	; 0x10
         8aad8:	e1a01031 	mov	r1, r1, lsr r0
         8aadc:	e3a00000 	mov	r0, #0	; 0x0
         8aae0:	e3310001 	teq	r1, #1	; 0x1
         8aae4:	1a000004 	bne	8aafc <NextDayOfWeek(TDate *, unsigned long)+0xb0>
         8aae8:	e0872000 	add	r2, r7, r0
         8aaec:	e1520005 	cmp	r2, r5
         8aaf0:	82400007 	subhi	r0, r0, #7	; 0x7
         8aaf4:	81a00800 	movhi	r0, r0, lsl #16
         8aaf8:	81a00840 	movhi	r0, r0, asr #16
         8aafc:	e1160001 	tst	r6, r1
         8ab00:	0a000007 	beq	8ab24 <NextDayOfWeek(TDate *, unsigned long)+0xd8>
         8ab04:	e0871000 	add	r1, r7, r0
         8ab08:	e5841008 	str	r1, [r4, #8]
         8ab0c:	e5941018 	ldr	r1, [r4, #24]
         8ab10:	e0811000 	add	r1, r1, r0
         8ab14:	e3a00007 	mov	r0, #7	; 0x7
         8ab18:	eb6c9f8a 	bl	1bb2948 <$__rt_udiv>
         8ab1c:	e5841018 	str	r1, [r4, #24]
         8ab20:	ea000006 	b	8ab40 <NextDayOfWeek(TDate *, unsigned long)+0xf4>
         8ab24:	e1b010a1 	movs	r1, r1, lsr #1
         8ab28:	03a01010 	moveq	r1, #16	; 0x10
         8ab2c:	e2800007 	add	r0, r0, #7	; 0x7
         8ab30:	e1a00800 	mov	r0, r0, lsl #16
         8ab34:	e1a00840 	mov	r0, r0, asr #16
         8ab38:	e350001c 	cmp	r0, #28	; 0x1c
         8ab3c:	daffffe7 	ble	8aae0 <NextDayOfWeek(TDate *, unsigned long)+0x94>
         8ab40:	e5940008 	ldr	r0, [r4, #8]
         8ab44:	e1500005 	cmp	r0, r5
         8ab48:	991ba8f0 	ldmlsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         8ab4c:	e0400005 	sub	r0, r0, r5
         8ab50:	e5840008 	str	r0, [r4, #8]
         8ab54:	e5940004 	ldr	r0, [r4, #4]
         8ab58:	e2800001 	add	r0, r0, #1	; 0x1
         8ab5c:	e5840004 	str	r0, [r4, #4]
         8ab60:	e350000c 	cmp	r0, #12	; 0xc
         8ab64:	991ba8f0 	ldmlsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         8ab68:	e3a00001 	mov	r0, #1	; 0x1
         8ab6c:	e5840004 	str	r0, [r4, #4]
         8ab70:	e5940000 	ldr	r0, [r4]
         8ab74:	e2800001 	add	r0, r0, #1	; 0x1
         8ab78:	e5840000 	str	r0, [r4]
         8ab7c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NextDateOfMonth(TDate *, unsigned long)
 * Address: 0008ab80
 */
NextDateOfMonth(TDate *, unsigned long) {
    /*
         8ab80:	e1a0c00d 	mov	ip, sp
         8ab84:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         8ab88:	e24cb004 	sub	fp, ip, #4	; 0x4
         8ab8c:	e1a04000 	mov	r4, r0
         8ab90:	e5906008 	ldr	r6, [r0, #8]
         8ab94:	e211003f 	ands	r0, r1, #63	; 0x3f
         8ab98:	0a000003 	beq	8abac <NextDateOfMonth(TDate *, unsigned long)+0x2c>
         8ab9c:	e1560000 	cmp	r6, r0
         8aba0:	8a000001 	bhi	8abac <NextDateOfMonth(TDate *, unsigned long)+0x2c>
         8aba4:	e1b05000 	movs	r5, r0
         8aba8:	1a00000a 	bne	8abd8 <NextDateOfMonth(TDate *, unsigned long)+0x58>
         8abac:	e1a05000 	mov	r5, r0
         8abb0:	e5940004 	ldr	r0, [r4, #4]
         8abb4:	e2800001 	add	r0, r0, #1	; 0x1
         8abb8:	e5840004 	str	r0, [r4, #4]
         8abbc:	e350000c 	cmp	r0, #12	; 0xc
         8abc0:	9a000004 	bls	8abd8 <NextDateOfMonth(TDate *, unsigned long)+0x58>
         8abc4:	e3a00001 	mov	r0, #1	; 0x1
         8abc8:	e5840004 	str	r0, [r4, #4]
         8abcc:	e5940000 	ldr	r0, [r4]
         8abd0:	e2800001 	add	r0, r0, #1	; 0x1
         8abd4:	e5840000 	str	r0, [r4]
         8abd8:	e1a00004 	mov	r0, r4
         8abdc:	eb6dd0d9 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
         8abe0:	e1550000 	cmp	r5, r0
         8abe4:	81a05000 	movhi	r5, r0
         8abe8:	8a000003 	bhi	8abfc <NextDateOfMonth(TDate *, unsigned long)+0x7c>
         8abec:	e0451006 	sub	r1, r5, r6
         8abf0:	e3a00007 	mov	r0, #7	; 0x7
         8abf4:	eb6c9f53 	bl	1bb2948 <$__rt_udiv>
         8abf8:	e1a07001 	mov	r7, r1
         8abfc:	e5940018 	ldr	r0, [r4, #24]
         8ac00:	e0801007 	add	r1, r0, r7
         8ac04:	e3a00007 	mov	r0, #7	; 0x7
         8ac08:	eb6c9f4e 	bl	1bb2948 <$__rt_udiv>
         8ac0c:	e5a45008 	str	r5, [r4, #8]!
         8ac10:	e5841010 	str	r1, [r4, #16]
         8ac14:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NextDateOfYear(TDate *, unsigned long)
 * Address: 0008bc68
 */
NextDateOfYear(TDate *, unsigned long) {
    /*
         8bc68:	e1a0c00d 	mov	ip, sp
         8bc6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         8bc70:	e24cb004 	sub	fp, ip, #4	; 0x4
         8bc74:	e1a04000 	mov	r4, r0
         8bc78:	e3a000ff 	mov	r0, #255	; 0xff
         8bc7c:	e0000421 	and	r0, r0, r1, lsr #8
         8bc80:	e20150ff 	and	r5, r1, #255	; 0xff
         8bc84:	e5941004 	ldr	r1, [r4, #4]
         8bc88:	e1510000 	cmp	r1, r0
         8bc8c:	8a000003 	bhi	8bca0 <NextDateOfYear(TDate *, unsigned long)+0x38>
         8bc90:	1a000005 	bne	8bcac <NextDateOfYear(TDate *, unsigned long)+0x44>
         8bc94:	e5941008 	ldr	r1, [r4, #8]
         8bc98:	e1510005 	cmp	r1, r5
         8bc9c:	9a000002 	bls	8bcac <NextDateOfYear(TDate *, unsigned long)+0x44>
         8bca0:	e5941000 	ldr	r1, [r4]
         8bca4:	e2811001 	add	r1, r1, #1	; 0x1
         8bca8:	e5841000 	str	r1, [r4]
         8bcac:	e5840004 	str	r0, [r4, #4]
         8bcb0:	e1a00004 	mov	r0, r4
         8bcb4:	eb6dcca3 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
         8bcb8:	e1550000 	cmp	r5, r0
         8bcbc:	c1a05000 	movgt	r5, r0
         8bcc0:	e5a45008 	str	r5, [r4, #8]!
         8bcc4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NextDateByWeekInYear(TDate *, unsigned long)
 * Address: 0008c290
 */
NextDateByWeekInYear(TDate *, unsigned long) {
    /*
         8c290:	e1a0c00d 	mov	ip, sp
         8c294:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         8c298:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c29c:	e1a04000 	mov	r4, r0
         8c2a0:	e1a05001 	mov	r5, r1
         8c2a4:	e24dd028 	sub	sp, sp, #40	; 0x28
         8c2a8:	e3a0000f 	mov	r0, #15	; 0xf
         8c2ac:	e0006621 	and	r6, r0, r1, lsr #12
         8c2b0:	e1a0000d 	mov	r0, sp
         8c2b4:	eb6dcb20 	bl	1bfef3c <TDate::$__ct(void)>
         8c2b8:	e3a07001 	mov	r7, #1	; 0x1
         8c2bc:	e98d00c0 	stmib	sp, {r6, r7}
         8c2c0:	e5940000 	ldr	r0, [r4]
         8c2c4:	e58d0000 	str	r0, [sp]
         8c2c8:	e5940004 	ldr	r0, [r4, #4]
         8c2cc:	e1500006 	cmp	r0, r6
         8c2d0:	8a00000a 	bhi	8c300 <NextDateByWeekInYear(TDate *, unsigned long)+0x70>
         8c2d4:	1a00000c 	bne	8c30c <NextDateByWeekInYear(TDate *, unsigned long)+0x7c>
         8c2d8:	e1a0000d 	mov	r0, sp
         8c2dc:	eb6dcb17 	bl	1bfef40 <TDate::$CleanUpFields(void)>
         8c2e0:	e1a01005 	mov	r1, r5
         8c2e4:	e1a0000d 	mov	r0, sp
         8c2e8:	eb6dcb1c 	bl	1bfef60 <$NextDayOfWeek(TDate *, unsigned long)>
         8c2ec:	e5940008 	ldr	r0, [r4, #8]
         8c2f0:	e59d1008 	ldr	r1, [sp, #8]
         8c2f4:	e1500001 	cmp	r0, r1
         8c2f8:	9a00000c 	bls	8c330 <NextDateByWeekInYear(TDate *, unsigned long)+0xa0>
         8c2fc:	e58d7008 	str	r7, [sp, #8]
         8c300:	e59d0000 	ldr	r0, [sp]
         8c304:	e2800001 	add	r0, r0, #1	; 0x1
         8c308:	e58d0000 	str	r0, [sp]
         8c30c:	e1a0000d 	mov	r0, sp
         8c310:	eb6dcb0a 	bl	1bfef40 <TDate::$CleanUpFields(void)>
         8c314:	e1a01005 	mov	r1, r5
         8c318:	e1a0000d 	mov	r0, sp
         8c31c:	eb6dcb0f 	bl	1bfef60 <$NextDayOfWeek(TDate *, unsigned long)>
         8c320:	e59d0000 	ldr	r0, [sp]
         8c324:	e5840000 	str	r0, [r4]
         8c328:	e59d0004 	ldr	r0, [sp, #4]
         8c32c:	e5840004 	str	r0, [r4, #4]
         8c330:	e59d0008 	ldr	r0, [sp, #8]
         8c334:	e5a40008 	str	r0, [r4, #8]!
         8c338:	e59d0024 	ldr	r0, [sp, #36]
         8c33c:	eb6cdb9e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8c340:	e59d0020 	ldr	r0, [sp, #32]
         8c344:	eb6cdb9c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8c348:	e59d001c 	ldr	r0, [sp, #28]
         8c34c:	eb6cdb9a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8c350:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NextPeriod__FP5TDateUlT2
 * Address: 0008c354
 */
void globals::NextPeriod() {
    /*
         8c354:	e1a0c00d 	mov	ip, sp
         8c358:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         8c35c:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c360:	e1a04000 	mov	r4, r0
         8c364:	e20250ff 	and	r5, r2, #255	; 0xff
         8c368:	e1a06422 	mov	r6, r2, lsr #8
         8c36c:	eb6dcf06 	bl	1bfff8c <TDate::$TotalDays( const(void))>
         8c370:	e0401006 	sub	r1, r0, r6
         8c374:	e3510000 	cmp	r1, #0	; 0x0
         8c378:	d5940008 	ldrle	r0, [r4, #8]
         8c37c:	d0400001 	suble	r0, r0, r1
         8c380:	da000006 	ble	8c3a0 <NextPeriod__FP5TDateUlT2+0x4c>
         8c384:	e1a00005 	mov	r0, r5
         8c388:	eb6c996c 	bl	1bb2940 <$__rt_sdiv>
         8c38c:	e0450001 	sub	r0, r5, r1
         8c390:	e1300005 	teq	r0, r5
         8c394:	03a00000 	moveq	r0, #0	; 0x0
         8c398:	e5941008 	ldr	r1, [r4, #8]
         8c39c:	e0810000 	add	r0, r1, r0
         8c3a0:	e5840008 	str	r0, [r4, #8]
         8c3a4:	e1a00004 	mov	r0, r4
         8c3a8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         8c3ac:	ea6dcae3 	b	1bfef40 <TDate::$CleanUpFields(void)>
    */
}

/**
 * Symbol: NextMeeting__FP5TDateUlN22
 * Address: 0008c3b0
 */
void globals::NextMeeting() {
    /*
         8c3b0:	e3530007 	cmp	r3, #7	; 0x7
         8c3b4:	908ff103 	addls	pc, pc, r3, lsl #2
         8c3b8:	e1a0f00e 	mov	pc, lr
         8c3bc:	ea000007 	b	8c3e0 <NextMeeting__FP5TDateUlN22+0x30>
         8c3c0:	ea000006 	b	8c3e0 <NextMeeting__FP5TDateUlN22+0x30>
         8c3c4:	ea000007 	b	8c3e8 <NextMeeting__FP5TDateUlN22+0x38>
         8c3c8:	ea000008 	b	8c3f0 <NextMeeting__FP5TDateUlN22+0x40>
         8c3cc:	ea000009 	b	8c3f8 <NextMeeting__FP5TDateUlN22+0x48>
         8c3d0:	e1a0f00e 	mov	pc, lr
         8c3d4:	e1a0f00e 	mov	pc, lr
         8c3d8:	e1a01002 	mov	r1, r2
         8c3dc:	ea68a9d8 	b	1ab6b44 <$NextDateByWeekInYear(TDate *, unsigned long)>
         8c3e0:	e1a01002 	mov	r1, r2
         8c3e4:	ea6dcadd 	b	1bfef60 <$NextDayOfWeek(TDate *, unsigned long)>
         8c3e8:	e1a01002 	mov	r1, r2
         8c3ec:	ea6dcad9 	b	1bfef58 <$NextDateOfMonth(TDate *, unsigned long)>
         8c3f0:	e1a01002 	mov	r1, r2
         8c3f4:	ea6dcad8 	b	1bfef5c <$NextDateOfYear(TDate *, unsigned long)>
         8c3f8:	e3a01000 	mov	r1, #0	; 0x0
         8c3fc:	ea6dcad9 	b	1bfef68 <$NextPeriod__FP5TDateUlT2>
    */
}

/**
 * Symbol: NextAvailDomainInDCR(unsigned long &)
 * Address: 0009c5d4
 */
NextAvailDomainInDCR(unsigned long &) {
    /*
         9c5d4:	e1a03000 	mov	r3, r0
         9c5d8:	e3a00000 	mov	r0, #0	; 0x0
         9c5dc:	e3a02003 	mov	r2, #3	; 0x3
         9c5e0:	e5931000 	ldr	r1, [r3]
         9c5e4:	e1a0c080 	mov	ip, r0, lsl #1
         9c5e8:	e1110c12 	tst	r1, r2, lsl ip
         9c5ec:	1a000003 	bne	9c600 <NextAvailDomainInDCR(unsigned long &)+0x2c>
         9c5f0:	e1a0c080 	mov	ip, r0, lsl #1
         9c5f4:	e1811c12 	orr	r1, r1, r2, lsl ip
         9c5f8:	e5831000 	str	r1, [r3]
         9c5fc:	e1a0f00e 	mov	pc, lr
         9c600:	e2800001 	add	r0, r0, #1	; 0x1
         9c604:	e350000f 	cmp	r0, #15	; 0xf
         9c608:	3afffff5 	bcc	9c5e4 <NextAvailDomainInDCR(unsigned long &)+0x10>
         9c60c:	e3e00000 	mvn	r0, #0	; 0x0
         9c610:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NewLine(RefVar const &, long, SortStuff *)
 * Address: 000aa738
 */
NewLine(RefVar const &, long, SortStuff *) {
    /*
         aa738:	e1a0c00d 	mov	ip, sp
         aa73c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         aa740:	e24cb004 	sub	fp, ip, #4	; 0x4
         aa744:	e1a04001 	mov	r4, r1
         aa748:	e1a05002 	mov	r5, r2
         aa74c:	e24dd004 	sub	sp, sp, #4	; 0x4
         aa750:	e3a00002 	mov	r0, #2	; 0x2
         aa754:	eb6c5e7c 	bl	1bc214c <$AllocateRefHandle(long)>
         aa758:	e58d0000 	str	r0, [sp]
         aa75c:	e2850004 	add	r0, r5, #4	; 0x4
         aa760:	e1a06000 	mov	r6, r0
         aa764:	e5900000 	ldr	r0, [r0]
         aa768:	e5900000 	ldr	r0, [r0]
         aa76c:	eb6c6ace 	bl	1bc52ac <$Length(long)>
         aa770:	e1a09000 	mov	r9, r0
         aa774:	e5960000 	ldr	r0, [r6]
         aa778:	e5900000 	ldr	r0, [r0]
         aa77c:	e1a01004 	mov	r1, r4
         aa780:	eb6c66b3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         aa784:	e41d1004 	ldr	r1, [sp], -#4
         aa788:	e1a07004 	mov	r7, r4
         aa78c:	e1540009 	cmp	r4, r9
         aa790:	e5810000 	str	r0, [r1]
         aa794:	aa000016 	bge	aa7f4 <NewLine(RefVar const &, long, SortStuff *)+0xbc>
         aa798:	e1a0a006 	mov	sl, r6
         aa79c:	e5960000 	ldr	r0, [r6]
         aa7a0:	e5900000 	ldr	r0, [r0]
         aa7a4:	e1a01007 	mov	r1, r7
         aa7a8:	eb6c66a9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         aa7ac:	e3100003 	tst	r0, #3	; 0x3
         aa7b0:	01a00140 	moveq	r0, r0, asr #2
         aa7b4:	0a000000 	beq	aa7bc <NewLine(RefVar const &, long, SortStuff *)+0x84>
         aa7b8:	eb6c5e57 	bl	1bc211c <$_RINTError(long)>
         aa7bc:	e2800001 	add	r0, r0, #1	; 0x1
         aa7c0:	e1a00100 	mov	r0, r0, lsl #2
         aa7c4:	eb6c5e60 	bl	1bc214c <$AllocateRefHandle(long)>
         aa7c8:	e1a08000 	mov	r8, r0
         aa7cc:	e5902000 	ldr	r2, [r0]
         aa7d0:	e59a0000 	ldr	r0, [sl]
         aa7d4:	e5900000 	ldr	r0, [r0]
         aa7d8:	e1a01007 	mov	r1, r7
         aa7dc:	eb6c6edd 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         aa7e0:	e1a00008 	mov	r0, r8
         aa7e4:	eb6c6274 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa7e8:	e2877001 	add	r7, r7, #1	; 0x1
         aa7ec:	e1570009 	cmp	r7, r9
         aa7f0:	baffffe8 	blt	aa798 <NewLine(RefVar const &, long, SortStuff *)+0x60>
         aa7f4:	e1a00006 	mov	r0, r6
         aa7f8:	e28d2004 	add	r2, sp, #4	; 0x4
         aa7fc:	e1a01004 	mov	r1, r4
         aa800:	eb01f9a6 	bl	128ea0 <ArrayInsertAt(RefVar const &, long, long)>
         aa804:	e51b0034 	ldr	r0, [fp, -#52]
         aa808:	eb689811 	bl	1ad0854 <$GetKidBounds(RefVar const &)>
         aa80c:	eb6c5e4e 	bl	1bc214c <$AllocateRefHandle(long)>
         aa810:	e58d0000 	str	r0, [sp]
         aa814:	e1a0200d 	mov	r2, sp
         aa818:	e2850008 	add	r0, r5, #8	; 0x8
         aa81c:	e1a01004 	mov	r1, r4
         aa820:	eb01f99e 	bl	128ea0 <ArrayInsertAt(RefVar const &, long, long)>
         aa824:	e59d0000 	ldr	r0, [sp]
         aa828:	eb6c6263 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa82c:	e59d0004 	ldr	r0, [sp, #4]
         aa830:	e5900000 	ldr	r0, [r0]
         aa834:	e3100003 	tst	r0, #3	; 0x3
         aa838:	01a00140 	moveq	r0, r0, asr #2
         aa83c:	0a000000 	beq	aa844 <NewLine(RefVar const &, long, SortStuff *)+0x10c>
         aa840:	eb6c5e35 	bl	1bc211c <$_RINTError(long)>
         aa844:	e1a01000 	mov	r1, r0
         aa848:	e1a00005 	mov	r0, r5
         aa84c:	e51b2034 	ldr	r2, [fp, -#52]
         aa850:	eb01f992 	bl	128ea0 <ArrayInsertAt(RefVar const &, long, long)>
         aa854:	e5bd0004 	ldr	r0, [sp, #4]!
         aa858:	eb6c6257 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa85c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NextHandler
 * Address: 000b03f0
 */
void globals::NextHandler() {
    /*
         b03f0:	e2802060 	add	r2, r0, #96	; 0x60
         b03f4:	e8920007 	ldmia	r2, {r0, r1, r2}
         b03f8:	ea6ccb67 	b	1be319c <$Throw>
    */
}

/**
 * Symbol: NO_TRICHandler(void *)
 * Address: 000e6b04
 */
NO_TRICHandler(void *) {
    /*
         e6b04:	e3a000ba 	mov	r0, #186	; 0xba
         e6b08:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         e6b0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NegativeNumberProtoStr(void)
 * Address: 000ebe68
 */
NegativeNumberProtoStr(void) {
    /*
         ebe68:	e1a0c00d 	mov	ip, sp
         ebe6c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ebe70:	e24cb004 	sub	fp, ip, #4	; 0x4
         ebe74:	e59f50d4 	ldr	r5, [pc, #d4]	; ebf50 <NegativeNumberProtoStr(void)+0xe8>
         ebe78:	e5950028 	ldr	r0, [r5, #40]
         ebe7c:	e3300000 	teq	r0, #0	; 0x0
         ebe80:	1a000030 	bne	ebf48 <NegativeNumberProtoStr(void)+0xe0>
         ebe84:	e24dd008 	sub	sp, sp, #8	; 0x8
         ebe88:	eb66c813 	bl	1a9dedc <$PositiveNumberProtoStr(void)>
         ebe8c:	e1a08000 	mov	r8, r0
         ebe90:	e59f40bc 	ldr	r4, [pc, #bc]	; ebf54 <NegativeNumberProtoStr(void)+0xec>
         ebe94:	e594001c 	ldr	r0, [r4, #28]
         ebe98:	e5900000 	ldr	r0, [r0]
         ebe9c:	e5900000 	ldr	r0, [r0]
         ebea0:	eb6b58a9 	bl	1bc214c <$AllocateRefHandle(long)>
         ebea4:	e58d0000 	str	r0, [sp]
         ebea8:	e1a0000d 	mov	r0, sp
         ebeac:	eb6b5cb4 	bl	1bc3184 <$GetCString(RefVar const &)>
         ebeb0:	e1a07000 	mov	r7, r0
         ebeb4:	e59d0000 	ldr	r0, [sp]
         ebeb8:	eb6b5cbf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ebebc:	e5b40020 	ldr	r0, [r4, #32]!
         ebec0:	e5900000 	ldr	r0, [r0]
         ebec4:	e5900000 	ldr	r0, [r0]
         ebec8:	eb6b589f 	bl	1bc214c <$AllocateRefHandle(long)>
         ebecc:	e58d0004 	str	r0, [sp, #4]
         ebed0:	e28d0004 	add	r0, sp, #4	; 0x4
         ebed4:	eb6b5caa 	bl	1bc3184 <$GetCString(RefVar const &)>
         ebed8:	e1a06000 	mov	r6, r0
         ebedc:	e59d0004 	ldr	r0, [sp, #4]
         ebee0:	eb6b5cb5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ebee4:	e1a00008 	mov	r0, r8
         ebee8:	eb6c0a1c 	bl	1bee760 <$Ustrlen>
         ebeec:	e1a04000 	mov	r4, r0
         ebef0:	e1a00007 	mov	r0, r7
         ebef4:	eb6c0a19 	bl	1bee760 <$Ustrlen>
         ebef8:	e0844000 	add	r4, r4, r0
         ebefc:	e1a00006 	mov	r0, r6
         ebf00:	eb6c0a16 	bl	1bee760 <$Ustrlen>
         ebf04:	e0841000 	add	r1, r4, r0
         ebf08:	e3a00002 	mov	r0, #2	; 0x2
         ebf0c:	e0800081 	add	r0, r0, r1, lsl #1
         ebf10:	eb6bd88b 	bl	1be2144 <$NewPtrClear>
         ebf14:	e1b04000 	movs	r4, r0
         ebf18:	0a000009 	beq	ebf44 <NegativeNumberProtoStr(void)+0xdc>
         ebf1c:	e1a01007 	mov	r1, r7
         ebf20:	e1a00004 	mov	r0, r4
         ebf24:	eb6c0a0c 	bl	1bee75c <$Ustrcpy>
         ebf28:	e1a01008 	mov	r1, r8
         ebf2c:	e1a00004 	mov	r0, r4
         ebf30:	eb6c0a06 	bl	1bee750 <$Ustrcat>
         ebf34:	e1a01006 	mov	r1, r6
         ebf38:	e1a00004 	mov	r0, r4
         ebf3c:	eb6c0a03 	bl	1bee750 <$Ustrcat>
         ebf40:	e5854028 	str	r4, [r5, #40]
         ebf44:	e28dd008 	add	sp, sp, #8	; 0x8
         ebf48:	e5b50028 	ldr	r0, [r5, #40]!
         ebf4c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ebf50:	0c100f84 	ldceq	15, cr0, [r0], -#528
         ebf54:	0c106198 	ldfeqs	f6, [r0], -#608
    */
}

/**
 * Symbol: NegativeIntProtoStr(void)
 * Address: 000ebfac
 */
NegativeIntProtoStr(void) {
    /*
         ebfac:	e1a0c00d 	mov	ip, sp
         ebfb0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ebfb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         ebfb8:	e59f50d4 	ldr	r5, [pc, #d4]	; ec094 <NegativeIntProtoStr(void)+0xe8>
         ebfbc:	e5950030 	ldr	r0, [r5, #48]
         ebfc0:	e3300000 	teq	r0, #0	; 0x0
         ebfc4:	1a000030 	bne	ec08c <NegativeIntProtoStr(void)+0xe0>
         ebfc8:	e24dd008 	sub	sp, sp, #8	; 0x8
         ebfcc:	eb675861 	bl	1ac2158 <$PositiveIntProtoStr(void)>
         ebfd0:	e1a08000 	mov	r8, r0
         ebfd4:	e59f40bc 	ldr	r4, [pc, #bc]	; ec098 <NegativeIntProtoStr(void)+0xec>
         ebfd8:	e594001c 	ldr	r0, [r4, #28]
         ebfdc:	e5900000 	ldr	r0, [r0]
         ebfe0:	e5900000 	ldr	r0, [r0]
         ebfe4:	eb6b5858 	bl	1bc214c <$AllocateRefHandle(long)>
         ebfe8:	e58d0000 	str	r0, [sp]
         ebfec:	e1a0000d 	mov	r0, sp
         ebff0:	eb6b5c63 	bl	1bc3184 <$GetCString(RefVar const &)>
         ebff4:	e1a07000 	mov	r7, r0
         ebff8:	e59d0000 	ldr	r0, [sp]
         ebffc:	eb6b5c6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec000:	e5b40020 	ldr	r0, [r4, #32]!
         ec004:	e5900000 	ldr	r0, [r0]
         ec008:	e5900000 	ldr	r0, [r0]
         ec00c:	eb6b584e 	bl	1bc214c <$AllocateRefHandle(long)>
         ec010:	e58d0004 	str	r0, [sp, #4]
         ec014:	e28d0004 	add	r0, sp, #4	; 0x4
         ec018:	eb6b5c59 	bl	1bc3184 <$GetCString(RefVar const &)>
         ec01c:	e1a06000 	mov	r6, r0
         ec020:	e59d0004 	ldr	r0, [sp, #4]
         ec024:	eb6b5c64 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec028:	e1a00008 	mov	r0, r8
         ec02c:	eb6c09cb 	bl	1bee760 <$Ustrlen>
         ec030:	e1a04000 	mov	r4, r0
         ec034:	e1a00007 	mov	r0, r7
         ec038:	eb6c09c8 	bl	1bee760 <$Ustrlen>
         ec03c:	e0844000 	add	r4, r4, r0
         ec040:	e1a00006 	mov	r0, r6
         ec044:	eb6c09c5 	bl	1bee760 <$Ustrlen>
         ec048:	e0841000 	add	r1, r4, r0
         ec04c:	e3a00002 	mov	r0, #2	; 0x2
         ec050:	e0800081 	add	r0, r0, r1, lsl #1
         ec054:	eb6bd83a 	bl	1be2144 <$NewPtrClear>
         ec058:	e1b04000 	movs	r4, r0
         ec05c:	0a000009 	beq	ec088 <NegativeIntProtoStr(void)+0xdc>
         ec060:	e1a01007 	mov	r1, r7
         ec064:	e1a00004 	mov	r0, r4
         ec068:	eb6c09bb 	bl	1bee75c <$Ustrcpy>
         ec06c:	e1a01008 	mov	r1, r8
         ec070:	e1a00004 	mov	r0, r4
         ec074:	eb6c09b5 	bl	1bee750 <$Ustrcat>
         ec078:	e1a01006 	mov	r1, r6
         ec07c:	e1a00004 	mov	r0, r4
         ec080:	eb6c09b2 	bl	1bee750 <$Ustrcat>
         ec084:	e5854030 	str	r4, [r5, #48]
         ec088:	e28dd008 	add	sp, sp, #8	; 0x8
         ec08c:	e5b50030 	ldr	r0, [r5, #48]!
         ec090:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ec094:	0c100f84 	ldceq	15, cr0, [r0], -#528
         ec098:	0c106198 	ldfeqs	f6, [r0], -#608
    */
}

/**
 * Symbol: NumberStringSpec__FdPUsUlT3
 * Address: 000ed528
 */
void globals::NumberStringSpec() {
    /*
         ed528:	e1a0c00d 	mov	ip, sp
         ed52c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ed530:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         ed534:	e24cb014 	sub	fp, ip, #20	; 0x14
         ed538:	e24dd040 	sub	sp, sp, #64	; 0x40
         ed53c:	e3a0c046 	mov	ip, #70	; 0x46
         ed540:	e3a00006 	mov	r0, #6	; 0x6
         ed544:	e58d0008 	str	r0, [sp, #8]
         ed548:	e3e00000 	mvn	r0, #0	; 0x0
         ed54c:	e58d0004 	str	r0, [sp, #4]
         ed550:	e58d0000 	str	r0, [sp]
         ed554:	e59b0014 	ldr	r0, [fp, #20]
         ed558:	e3100080 	tst	r0, #128	; 0x80
         ed55c:	0a000003 	beq	ed570 <NumberStringSpec__FdPUsUlT3+0x48>
         ed560:	e200100f 	and	r1, r0, #15	; 0xf
         ed564:	e58d1008 	str	r1, [sp, #8]
         ed568:	e3100c02 	tst	r0, #512	; 0x200
         ed56c:	03a0c066 	moveq	ip, #102	; 0x66
         ed570:	e3100c01 	tst	r0, #256	; 0x100
         ed574:	0a000003 	beq	ed588 <NumberStringSpec__FdPUsUlT3+0x60>
         ed578:	ed9b9101 	ldfd	f1, [fp, #4]
         ed57c:	ed9f8140 	ldfd	f0, [pc, #256]
         ed580:	ee110180 	mufd	f0, f1, f0
         ed584:	ed8b8101 	stfd	f0, [fp, #4]
         ed588:	e1a0300d 	mov	r3, sp
         ed58c:	e28d2004 	add	r2, sp, #4	; 0x4
         ed590:	e28d1008 	add	r1, sp, #8	; 0x8
         ed594:	e28d000c 	add	r0, sp, #12	; 0xc
         ed598:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ed59c:	e28d2020 	add	r2, sp, #32	; 0x20
         ed5a0:	e28b1004 	add	r1, fp, #4	; 0x4
         ed5a4:	e1a0000c 	mov	r0, ip
         ed5a8:	e3a03e11 	mov	r3, #272	; 0x110
         ed5ac:	eb09451a 	bl	33ea1c <_fp_display>
         ed5b0:	e28dd010 	add	sp, sp, #16	; 0x10
         ed5b4:	e59d100c 	ldr	r1, [sp, #12]
         ed5b8:	e5d11000 	ldrb	r1, [r1]
         ed5bc:	e331002d 	teq	r1, #45	; 0x2d
         ed5c0:	13a01000 	movne	r1, #0	; 0x0
         ed5c4:	03a01001 	moveq	r1, #1	; 0x1
         ed5c8:	e20110ff 	and	r1, r1, #255	; 0xff
         ed5cc:	e59d2004 	ldr	r2, [sp, #4]
         ed5d0:	e3520000 	cmp	r2, #0	; 0x0
         ed5d4:	d59d2000 	ldrle	r2, [sp]
         ed5d8:	d3520000 	cmple	r2, #0	; 0x0
         ed5dc:	da00000c 	ble	ed614 <NumberStringSpec__FdPUsUlT3+0xec>
         ed5e0:	e3a02000 	mov	r2, #0	; 0x0
         ed5e4:	e3500000 	cmp	r0, #0	; 0x0
         ed5e8:	9a000009 	bls	ed614 <NumberStringSpec__FdPUsUlT3+0xec>
         ed5ec:	e3a03030 	mov	r3, #48	; 0x30
         ed5f0:	e28dc010 	add	ip, sp, #16	; 0x10
         ed5f4:	e7dcc002 	ldrb	ip, [ip, r2]
         ed5f8:	e33c003c 	teq	ip, #60	; 0x3c
         ed5fc:	133c003e 	teqne	ip, #62	; 0x3e
         ed600:	028dc010 	addeq	ip, sp, #16	; 0x10
         ed604:	07cc3002 	streqb	r3, [ip, r2]
         ed608:	e2822001 	add	r2, r2, #1	; 0x1
         ed60c:	e1520000 	cmp	r2, r0
         ed610:	3afffff6 	bcc	ed5f0 <NumberStringSpec__FdPUsUlT3+0xc8>
         ed614:	e1a0c000 	mov	ip, r0
         ed618:	e28d2010 	add	r2, sp, #16	; 0x10
         ed61c:	e7d22000 	ldrb	r2, [r2, r0]
         ed620:	e332002e 	teq	r2, #46	; 0x2e
         ed624:	0a00000a 	beq	ed654 <NumberStringSpec__FdPUsUlT3+0x12c>
         ed628:	e3a02000 	mov	r2, #0	; 0x0
         ed62c:	e3500000 	cmp	r0, #0	; 0x0
         ed630:	3a000007 	bcc	ed654 <NumberStringSpec__FdPUsUlT3+0x12c>
         ed634:	e28d3010 	add	r3, sp, #16	; 0x10
         ed638:	e7d33002 	ldrb	r3, [r3, r2]
         ed63c:	e333002e 	teq	r3, #46	; 0x2e
         ed640:	01a0c002 	moveq	ip, r2
         ed644:	0a000002 	beq	ed654 <NumberStringSpec__FdPUsUlT3+0x12c>
         ed648:	e2822001 	add	r2, r2, #1	; 0x1
         ed64c:	e1520000 	cmp	r2, r0
         ed650:	9afffff7 	bls	ed634 <NumberStringSpec__FdPUsUlT3+0x10c>
         ed654:	e3a03000 	mov	r3, #0	; 0x0
         ed658:	e28d2010 	add	r2, sp, #16	; 0x10
         ed65c:	e7c23000 	strb	r3, [r2, r0]
         ed660:	e28b3010 	add	r3, fp, #16	; 0x10
         ed664:	e893000c 	ldmia	r3, {r2, r3}
         ed668:	e92d000c 	stmdb	sp!, {r2, r3}
         ed66c:	e1a0300c 	mov	r3, ip
         ed670:	e1a02001 	mov	r2, r1
         ed674:	e28d0018 	add	r0, sp, #24	; 0x18
         ed678:	e59b100c 	ldr	r1, [fp, #12]
         ed67c:	eb6af7da 	bl	1bab5ec <$_IntlNumberMunge__FPcPUsUcUlN24>
         ed680:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         ed684:	40590000 	submis	r0, r9, r0
         ed688:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: NumberString(double, unsigned short *, unsigned long, char *)
 * Address: 000ed68c
 */
NumberString(double, unsigned short *, unsigned long, char *) {
    /*
         ed68c:	e1a0c00d 	mov	ip, sp
         ed690:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ed694:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ed698:	e24cb014 	sub	fp, ip, #20	; 0x14
         ed69c:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
         ed6a0:	ed9bc101 	ldfd	f4, [fp, #4]
         ed6a4:	e1a04002 	mov	r4, r2
         ed6a8:	e3a00000 	mov	r0, #0	; 0x0
         ed6ac:	e52d0004 	str	r0, [sp, -#4]!
         ed6b0:	e5c20001 	strb	r0, [r2, #1]
         ed6b4:	e5c20000 	strb	r0, [r2]
         ed6b8:	ed9f8108 	ldfd	f0, [pc, #32]
         ed6bc:	eed4f110 	cmfe	f4, f0
         ed6c0:	c3e00001 	mvngt	r0, #1	; 0x1
         ed6c4:	ca000003 	bgt	ed6d8 <NumberString(double, unsigned short *, unsigned long, char *)+0x4c>
         ed6c8:	ed9f8106 	ldfd	f0, [pc, #24]
         ed6cc:	eed4f110 	cmfe	f4, f0
         ed6d0:	aa000006 	bge	ed6f0 <NumberString(double, unsigned short *, unsigned long, char *)+0x64>
         ed6d4:	e3e00002 	mvn	r0, #2	; 0x2
         ed6d8:	e58d0000 	str	r0, [sp]
         ed6dc:	ea0000e5 	b	eda78 <NumberString(double, unsigned short *, unsigned long, char *)+0x3ec>
         ed6e0:	7fefffff 	swivc	0x00efffff
         ed6e4:	fffffffe 	swinv	0x00fffffe
         ed6e8:	ffefffff 	swinv	0x00efffff
         ed6ec:	fffffffe 	swinv	0x00fffffe
         ed6f0:	eed4f118 	cmfe	f4, #0.0
         ed6f4:	a3a00000 	movge	r0, #0	; 0x0
         ed6f8:	b3a00001 	movlt	r0, #1	; 0x1
         ed6fc:	e21080ff 	ands	r8, r0, #255	; 0xff
         ed700:	1e10c184 	mnfned	f4, f4
         ed704:	e24dd040 	sub	sp, sp, #64	; 0x40
         ed708:	e1a0000d 	mov	r0, sp
         ed70c:	e59b1014 	ldr	r1, [fp, #20]
         ed710:	ed2dc102 	stfd	f4, [sp, -#8]!
         ed714:	e8bd000c 	ldmia	sp!, {r2, r3}
         ed718:	eb6b20dd 	bl	1bb5a94 <$sprintf>
         ed71c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         ed720:	e3a06000 	mov	r6, #0	; 0x0
         ed724:	e3a09000 	mov	r9, #0	; 0x0
         ed728:	e3a07000 	mov	r7, #0	; 0x0
         ed72c:	e3a0a000 	mov	sl, #0	; 0x0
         ed730:	e3a05000 	mov	r5, #0	; 0x0
         ed734:	e58d6008 	str	r6, [sp, #8]
         ed738:	e58d7004 	str	r7, [sp, #4]
         ed73c:	e28d000c 	add	r0, sp, #12	; 0xc
         ed740:	e5d01000 	ldrb	r1, [r0]
         ed744:	e3310000 	teq	r1, #0	; 0x0
         ed748:	0a00002d 	beq	ed804 <NumberString(double, unsigned short *, unsigned long, char *)+0x178>
         ed74c:	e331002e 	teq	r1, #46	; 0x2e
         ed750:	01a06000 	moveq	r6, r0
         ed754:	0a000022 	beq	ed7e4 <NumberString(double, unsigned short *, unsigned long, char *)+0x158>
         ed758:	e3310065 	teq	r1, #101	; 0x65
         ed75c:	1a000011 	bne	ed7a8 <NumberString(double, unsigned short *, unsigned long, char *)+0x11c>
         ed760:	e3380000 	teq	r8, #0	; 0x0
         ed764:	0a000005 	beq	ed780 <NumberString(double, unsigned short *, unsigned long, char *)+0xf4>
         ed768:	ee108184 	mnfd	f0, f4
         ed76c:	e28d000c 	add	r0, sp, #12	; 0xc
         ed770:	e59b1014 	ldr	r1, [fp, #20]
         ed774:	ed2d8102 	stfd	f0, [sp, -#8]!
         ed778:	e8bd000c 	ldmia	sp!, {r2, r3}
         ed77c:	eb6b20c4 	bl	1bb5a94 <$sprintf>
         ed780:	e28d000c 	add	r0, sp, #12	; 0xc
         ed784:	eb6b20c9 	bl	1bb5ab0 <$strlen>
         ed788:	e1a03000 	mov	r3, r0
         ed78c:	e1a01004 	mov	r1, r4
         ed790:	e28d000c 	add	r0, sp, #12	; 0xc
         ed794:	e3a02001 	mov	r2, #1	; 0x1
         ed798:	eb6be6f9 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ed79c:	e59d004c 	ldr	r0, [sp, #76]
         ed7a0:	ed1bc20d 	lfm	f4, 1, [fp, -#52]
         ed7a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ed7a8:	e3510030 	cmp	r1, #48	; 0x30
         ed7ac:	ba000006 	blt	ed7cc <NumberString(double, unsigned short *, unsigned long, char *)+0x140>
         ed7b0:	e3510039 	cmp	r1, #57	; 0x39
         ed7b4:	ca000004 	bgt	ed7cc <NumberString(double, unsigned short *, unsigned long, char *)+0x140>
         ed7b8:	e3350000 	teq	r5, #0	; 0x0
         ed7bc:	01a09000 	moveq	r9, r0
         ed7c0:	e3360000 	teq	r6, #0	; 0x0
         ed7c4:	02855001 	addeq	r5, r5, #1	; 0x1
         ed7c8:	ea000003 	b	ed7dc <NumberString(double, unsigned short *, unsigned long, char *)+0x150>
         ed7cc:	e3360000 	teq	r6, #0	; 0x0
         ed7d0:	0a000001 	beq	ed7dc <NumberString(double, unsigned short *, unsigned long, char *)+0x150>
         ed7d4:	e33a0000 	teq	sl, #0	; 0x0
         ed7d8:	01a0a000 	moveq	sl, r0
         ed7dc:	e3350000 	teq	r5, #0	; 0x0
         ed7e0:	02877001 	addeq	r7, r7, #1	; 0x1
         ed7e4:	e5f01001 	ldrb	r1, [r0, #1]!
         ed7e8:	e3310000 	teq	r1, #0	; 0x0
         ed7ec:	1affffd6 	bne	ed74c <NumberString(double, unsigned short *, unsigned long, char *)+0xc0>
         ed7f0:	e33a0000 	teq	sl, #0	; 0x0
         ed7f4:	0a000002 	beq	ed804 <NumberString(double, unsigned short *, unsigned long, char *)+0x178>
         ed7f8:	e1a0000a 	mov	r0, sl
         ed7fc:	eb6b20ab 	bl	1bb5ab0 <$strlen>
         ed800:	e58d0004 	str	r0, [sp, #4]
         ed804:	e24dd014 	sub	sp, sp, #20	; 0x14
         ed808:	e59f0054 	ldr	r0, [pc, #54]	; ed864 <NumberString(double, unsigned short *, unsigned long, char *)+0x1d8>
         ed80c:	e5900018 	ldr	r0, [r0, #24]
         ed810:	e5900000 	ldr	r0, [r0]
         ed814:	e5900000 	ldr	r0, [r0]
         ed818:	eb6b524b 	bl	1bc214c <$AllocateRefHandle(long)>
         ed81c:	e58d0000 	str	r0, [sp]
         ed820:	e1a0000d 	mov	r0, sp
         ed824:	eb6b5656 	bl	1bc3184 <$GetCString(RefVar const &)>
         ed828:	e58d0010 	str	r0, [sp, #16]
         ed82c:	e59d0000 	ldr	r0, [sp]
         ed830:	eb6b5661 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ed834:	e59d0010 	ldr	r0, [sp, #16]
         ed838:	eb6c03c8 	bl	1bee760 <$Ustrlen>
         ed83c:	e58d000c 	str	r0, [sp, #12]
         ed840:	e59f0020 	ldr	r0, [pc, #20]	; ed868 <NumberString(double, unsigned short *, unsigned long, char *)+0x1dc>
         ed844:	e5900000 	ldr	r0, [r0]
         ed848:	e3380000 	teq	r8, #0	; 0x0
         ed84c:	e58d0008 	str	r0, [sp, #8]
         ed850:	0a000007 	beq	ed874 <NumberString(double, unsigned short *, unsigned long, char *)+0x1e8>
         ed854:	e3360000 	teq	r6, #0	; 0x0
         ed858:	0a000003 	beq	ed86c <NumberString(double, unsigned short *, unsigned long, char *)+0x1e0>
         ed85c:	eb66bd69 	bl	1a9ce08 <$NegativeNumberProtoStr(void)>
         ed860:	ea000008 	b	ed888 <NumberString(double, unsigned short *, unsigned long, char *)+0x1fc>
         ed864:	0c106198 	ldfeqs	f6, [r0], -#608
         ed868:	0c100f9c 	ldceq	15, cr0, [r0], -#624
         ed86c:	eb675232 	bl	1ac213c <$NegativeIntProtoStr(void)>
         ed870:	ea000004 	b	ed888 <NumberString(double, unsigned short *, unsigned long, char *)+0x1fc>
         ed874:	e3360000 	teq	r6, #0	; 0x0
         ed878:	0a000001 	beq	ed884 <NumberString(double, unsigned short *, unsigned long, char *)+0x1f8>
         ed87c:	eb66c196 	bl	1a9dedc <$PositiveNumberProtoStr(void)>
         ed880:	ea000000 	b	ed888 <NumberString(double, unsigned short *, unsigned long, char *)+0x1fc>
         ed884:	eb675233 	bl	1ac2158 <$PositiveIntProtoStr(void)>
         ed888:	e2451001 	sub	r1, r5, #1	; 0x1
         ed88c:	e58d0004 	str	r0, [sp, #4]
         ed890:	e24dd008 	sub	sp, sp, #8	; 0x8
         ed894:	e59d0010 	ldr	r0, [sp, #16]
         ed898:	eb6b142a 	bl	1bb2948 <$__rt_udiv>
         ed89c:	e59d1014 	ldr	r1, [sp, #20]
         ed8a0:	e0225091 	mla	r2, r1, r0, r5
         ed8a4:	e3360000 	teq	r6, #0	; 0x0
         ed8a8:	e58d2004 	str	r2, [sp, #4]
         ed8ac:	12860001 	addne	r0, r6, #1	; 0x1
         ed8b0:	1a000004 	bne	ed8c8 <NumberString(double, unsigned short *, unsigned long, char *)+0x23c>
         ed8b4:	e59d0024 	ldr	r0, [sp, #36]
         ed8b8:	e3300000 	teq	r0, #0	; 0x0
         ed8bc:	03a02000 	moveq	r2, #0	; 0x0
         ed8c0:	0a000003 	beq	ed8d4 <NumberString(double, unsigned short *, unsigned long, char *)+0x248>
         ed8c4:	e59d0024 	ldr	r0, [sp, #36]
         ed8c8:	eb6b2078 	bl	1bb5ab0 <$strlen>
         ed8cc:	e59d1020 	ldr	r1, [sp, #32]
         ed8d0:	e0402001 	sub	r2, r0, r1
         ed8d4:	e58d2000 	str	r2, [sp]
         ed8d8:	e59d000c 	ldr	r0, [sp, #12]
         ed8dc:	eb6c039f 	bl	1bee760 <$Ustrlen>
         ed8e0:	e59d1020 	ldr	r1, [sp, #32]
         ed8e4:	e0871001 	add	r1, r7, r1
         ed8e8:	e59d2004 	ldr	r2, [sp, #4]
         ed8ec:	e0811002 	add	r1, r1, r2
         ed8f0:	e59d2000 	ldr	r2, [sp]
         ed8f4:	e0811002 	add	r1, r1, r2
         ed8f8:	e0800001 	add	r0, r0, r1
         ed8fc:	e59b3010 	ldr	r3, [fp, #16]
         ed900:	e1530000 	cmp	r3, r0
         ed904:	9a000056 	bls	eda64 <NumberString(double, unsigned short *, unsigned long, char *)+0x3d8>
         ed908:	e24dd080 	sub	sp, sp, #128	; 0x80
         ed90c:	e59d2084 	ldr	r2, [sp, #132]
         ed910:	e3520020 	cmp	r2, #32	; 0x20
         ed914:	359d2080 	ldrcc	r2, [sp, #128]
         ed918:	33520020 	cmpcc	r2, #32	; 0x20
         ed91c:	2a00004e 	bcs	eda5c <NumberString(double, unsigned short *, unsigned long, char *)+0x3d0>
         ed920:	e28d8040 	add	r8, sp, #64	; 0x40
         ed924:	e3390000 	teq	r9, #0	; 0x0
         ed928:	0a00001c 	beq	ed9a0 <NumberString(double, unsigned short *, unsigned long, char *)+0x314>
         ed92c:	e1a01005 	mov	r1, r5
         ed930:	e58d909c 	str	r9, [sp, #156]
         ed934:	e59d0090 	ldr	r0, [sp, #144]
         ed938:	eb6b1402 	bl	1bb2948 <$__rt_udiv>
         ed93c:	e1b09001 	movs	r9, r1
         ed940:	059d9090 	ldreq	r9, [sp, #144]
         ed944:	e3350000 	teq	r5, #0	; 0x0
         ed948:	0a000017 	beq	ed9ac <NumberString(double, unsigned short *, unsigned long, char *)+0x320>
         ed94c:	e1a03009 	mov	r3, r9
         ed950:	e1a01008 	mov	r1, r8
         ed954:	e3a02001 	mov	r2, #1	; 0x1
         ed958:	e59d009c 	ldr	r0, [sp, #156]
         ed95c:	eb6be688 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ed960:	e0455009 	sub	r5, r5, r9
         ed964:	e59d009c 	ldr	r0, [sp, #156]
         ed968:	e0800009 	add	r0, r0, r9
         ed96c:	e0888089 	add	r8, r8, r9, lsl #1
         ed970:	e58d009c 	str	r0, [sp, #156]
         ed974:	e3550000 	cmp	r5, #0	; 0x0
         ed978:	e59d9090 	ldr	r9, [sp, #144]
         ed97c:	9a000004 	bls	ed994 <NumberString(double, unsigned short *, unsigned long, char *)+0x308>
         ed980:	e1a00008 	mov	r0, r8
         ed984:	e59d1098 	ldr	r1, [sp, #152]
         ed988:	eb6c0373 	bl	1bee75c <$Ustrcpy>
         ed98c:	e59d0094 	ldr	r0, [sp, #148]
         ed990:	e0888080 	add	r8, r8, r0, lsl #1
         ed994:	e3350000 	teq	r5, #0	; 0x0
         ed998:	1affffeb 	bne	ed94c <NumberString(double, unsigned short *, unsigned long, char *)+0x2c0>
         ed99c:	ea000002 	b	ed9ac <NumberString(double, unsigned short *, unsigned long, char *)+0x320>
         ed9a0:	e3a00000 	mov	r0, #0	; 0x0
         ed9a4:	e5cd0041 	strb	r0, [sp, #65]
         ed9a8:	e5cd0040 	strb	r0, [sp, #64]
         ed9ac:	e3360000 	teq	r6, #0	; 0x0
         ed9b0:	12860001 	addne	r0, r6, #1	; 0x1
         ed9b4:	159d3080 	ldrne	r3, [sp, #128]
         ed9b8:	11a0100d 	movne	r1, sp
         ed9bc:	1a000005 	bne	ed9d8 <NumberString(double, unsigned short *, unsigned long, char *)+0x34c>
         ed9c0:	e59d00a4 	ldr	r0, [sp, #164]
         ed9c4:	e3300000 	teq	r0, #0	; 0x0
         ed9c8:	0a000005 	beq	ed9e4 <NumberString(double, unsigned short *, unsigned long, char *)+0x358>
         ed9cc:	e59d3080 	ldr	r3, [sp, #128]
         ed9d0:	e1a0100d 	mov	r1, sp
         ed9d4:	e59d00a4 	ldr	r0, [sp, #164]
         ed9d8:	e3a02001 	mov	r2, #1	; 0x1
         ed9dc:	eb6be668 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ed9e0:	ea000002 	b	ed9f0 <NumberString(double, unsigned short *, unsigned long, char *)+0x364>
         ed9e4:	e3a00000 	mov	r0, #0	; 0x0
         ed9e8:	e5cd0001 	strb	r0, [sp, #1]
         ed9ec:	e5cd0000 	strb	r0, [sp]
         ed9f0:	e3370000 	teq	r7, #0	; 0x0
         ed9f4:	0a000005 	beq	eda10 <NumberString(double, unsigned short *, unsigned long, char *)+0x384>
         ed9f8:	e1a03007 	mov	r3, r7
         ed9fc:	e1a01004 	mov	r1, r4
         eda00:	e28d00a8 	add	r0, sp, #168	; 0xa8
         eda04:	e3a02001 	mov	r2, #1	; 0x1
         eda08:	eb6be65d 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         eda0c:	e0844087 	add	r4, r4, r7, lsl #1
         eda10:	e1a0300d 	mov	r3, sp
         eda14:	e92d0008 	stmdb	sp!, {r3}
         eda18:	e28d3044 	add	r3, sp, #68	; 0x44
         eda1c:	e59d2090 	ldr	r2, [sp, #144]
         eda20:	e1a00004 	mov	r0, r4
         eda24:	e59b1010 	ldr	r1, [fp, #16]
         eda28:	eb6bf6e0 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
         eda2c:	e28dd004 	add	sp, sp, #4	; 0x4
         eda30:	e59d00a0 	ldr	r0, [sp, #160]
         eda34:	e3300000 	teq	r0, #0	; 0x0
         eda38:	0a000007 	beq	eda5c <NumberString(double, unsigned short *, unsigned long, char *)+0x3d0>
         eda3c:	e1a00004 	mov	r0, r4
         eda40:	eb6c0346 	bl	1bee760 <$Ustrlen>
         eda44:	e0844080 	add	r4, r4, r0, lsl #1
         eda48:	e1a01004 	mov	r1, r4
         eda4c:	e1a0000a 	mov	r0, sl
         eda50:	e3a02001 	mov	r2, #1	; 0x1
         eda54:	e59d30a0 	ldr	r3, [sp, #160]
         eda58:	eb6be649 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         eda5c:	e28dd080 	add	sp, sp, #128	; 0x80
         eda60:	ea000003 	b	eda74 <NumberString(double, unsigned short *, unsigned long, char *)+0x3e8>
         eda64:	e3380000 	teq	r8, #0	; 0x0
         eda68:	03e00001 	mvneq	r0, #1	; 0x1
         eda6c:	13e00002 	mvnne	r0, #2	; 0x2
         eda70:	e58d0068 	str	r0, [sp, #104]
         eda74:	e28dd068 	add	sp, sp, #104	; 0x68
         eda78:	e49d0004 	ldr	r0, [sp], #4
         eda7c:	eaffff47 	b	ed7a0 <NumberString(double, unsigned short *, unsigned long, char *)+0x114>
    */
}

/**
 * Symbol: NextLetter(LetterCursor *)
 * Address: 001072c4
 */
NextLetter(LetterCursor *) {
    /*
        1072c4:	e1a0c00d 	mov	ip, sp
        1072c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1072cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1072d0:	e1a04000 	mov	r4, r0
        1072d4:	e590001c 	ldr	r0, [r0, #28]
        1072d8:	e1a00820 	mov	r0, r0, lsr #16
        1072dc:	ebfffded 	bl	106a98 <PairedChar(long)>
        1072e0:	e5c4001d 	strb	r0, [r4, #29]
        1072e4:	e1a00420 	mov	r0, r0, lsr #8
        1072e8:	e5c4001c 	strb	r0, [r4, #28]
        1072ec:	e594001c 	ldr	r0, [r4, #28]
        1072f0:	e1a00820 	mov	r0, r0, lsr #16
        1072f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NamePtr(char *, unsigned long)
 * Address: 0011b858
 */
NamePtr(char *, unsigned long) {
    /*
        11b858:	e3300000 	teq	r0, #0	; 0x0
        11b85c:	1a6b11e1 	bne	1bdffe8 <$SetPtrName>
        11b860:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NameHandle(char **, unsigned long)
 * Address: 0011b930
 */
NameHandle(char **, unsigned long) {
    /*
        11b930:	e3300000 	teq	r0, #0	; 0x0
        11b934:	1a6b11a7 	bne	1bdffd8 <$SetHandleName>
        11b938:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NeuroNetWS(int *)
 * Address: 001286b4
 */
NeuroNetWS(int *) {
    /*
        1286b4:	e1a0c00d 	mov	ip, sp
        1286b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1286bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1286c0:	e1a04000 	mov	r4, r0
        1286c4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1286c8:	e1a0100d 	mov	r1, sp
        1286cc:	eb6830ce 	bl	1b34a0c <$Rget_answer(int *, long *)>
        1286d0:	e5b40020 	ldr	r0, [r4, #32]!
        1286d4:	e3500000 	cmp	r0, #0	; 0x0
        1286d8:	ba000017 	blt	12873c <NeuroNetWS(int *)+0x88>
        1286dc:	e35000fa 	cmp	r0, #250	; 0xfa
        1286e0:	aa000015 	bge	12873c <NeuroNetWS(int *)+0x88>
        1286e4:	e59d0000 	ldr	r0, [sp]
        1286e8:	e080c180 	add	ip, r0, r0, lsl #3
        1286ec:	e08c0200 	add	r0, ip, r0, lsl #4
        1286f0:	e1a00100 	mov	r0, r0, lsl #2
        1286f4:	e1a00440 	mov	r0, r0, asr #8
        1286f8:	e59d1004 	ldr	r1, [sp, #4]
        1286fc:	e081c181 	add	ip, r1, r1, lsl #3
        128700:	e08c1201 	add	r1, ip, r1, lsl #4
        128704:	e1a01101 	mov	r1, r1, lsl #2
        128708:	e1a01441 	mov	r1, r1, asr #8
        12870c:	e1500001 	cmp	r0, r1
        128710:	d1a02001 	movle	r2, r1
        128714:	c2602000 	rsbgt	r2, r0, #0	; 0x0
        128718:	d0410000 	suble	r0, r1, r0
        12871c:	c0400001 	subgt	r0, r0, r1
        128720:	e0800100 	add	r0, r0, r0, lsl #2
        128724:	e3500064 	cmp	r0, #100	; 0x64
        128728:	c3a00064 	movgt	r0, #100	; 0x64
        12872c:	e0010290 	mul	r1, r0, r2
        128730:	e3a00064 	mov	r0, #100	; 0x64
        128734:	eb6a2881 	bl	1bb2940 <$__rt_sdiv>
        128738:	ea000002 	b	128748 <NeuroNetWS(int *)+0x94>
        12873c:	e35000fa 	cmp	r0, #250	; 0xfa
        128740:	b3e00063 	mvnlt	r0, #99	; 0x63
        128744:	a3a00064 	movge	r0, #100	; 0x64
        128748:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NTKInit(void)
 * Address: 0012b198
 */
NTKInit(void) {
    /*
        12b198:	e1a0c00d 	mov	ip, sp
        12b19c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12b1a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b1a4:	eb09643c 	bl	38429c <ClassInfo__19PHammerInTranslatorSFv>
        12b1a8:	e1a01000 	mov	r1, r0
        12b1ac:	e59f410c 	ldr	r4, [pc, #10c]	; 12b2c0 <NTKInit(void)+0x128>
        12b1b0:	e3a02000 	mov	r2, #0	; 0x0
        12b1b4:	e5940000 	ldr	r0, [r4]
        12b1b8:	eb6ab6a3 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b1bc:	eb09645a 	bl	38432c <ClassInfo__20PHammerOutTranslatorSFv>
        12b1c0:	e1a01000 	mov	r1, r0
        12b1c4:	e3a02000 	mov	r2, #0	; 0x0
        12b1c8:	e5940000 	ldr	r0, [r4]
        12b1cc:	eb6ab69e 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b1d0:	eb096481 	bl	3843dc <ClassInfo__17PNullInTranslatorSFv>
        12b1d4:	e1a01000 	mov	r1, r0
        12b1d8:	e3a02000 	mov	r2, #0	; 0x0
        12b1dc:	e5940000 	ldr	r0, [r4]
        12b1e0:	eb6ab699 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b1e4:	eb0964a0 	bl	38446c <ClassInfo__18PNullOutTranslatorSFv>
        12b1e8:	e1a01000 	mov	r1, r0
        12b1ec:	e3a02000 	mov	r2, #0	; 0x0
        12b1f0:	e5940000 	ldr	r0, [r4]
        12b1f4:	eb6ab694 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b1f8:	eb0964c6 	bl	384518 <ClassInfo__18PStdioInTranslatorSFv>
        12b1fc:	e1a01000 	mov	r1, r0
        12b200:	e3a02000 	mov	r2, #0	; 0x0
        12b204:	e5940000 	ldr	r0, [r4]
        12b208:	eb6ab68f 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b20c:	eb0964c1 	bl	384518 <ClassInfo__18PStdioInTranslatorSFv>
        12b210:	e1a01000 	mov	r1, r0
        12b214:	e3a02000 	mov	r2, #0	; 0x0
        12b218:	e5940000 	ldr	r0, [r4]
        12b21c:	eb6ab68a 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b220:	eb6663fe 	bl	1ac4220 <$ClassInfo__19PSerialInTranslatorSFv>
        12b224:	e1a01000 	mov	r1, r0
        12b228:	e3a02000 	mov	r2, #0	; 0x0
        12b22c:	e5940000 	ldr	r0, [r4]
        12b230:	eb6ab685 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b234:	eb6663fa 	bl	1ac4224 <$ClassInfo__20PSerialOutTranslatorSFv>
        12b238:	e1a01000 	mov	r1, r0
        12b23c:	e3a02000 	mov	r2, #0	; 0x0
        12b240:	e5940000 	ldr	r0, [r4]
        12b244:	eb6ab680 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b248:	eb6663f2 	bl	1ac4218 <$ClassInfo__16PNTKInTranslatorSFv>
        12b24c:	e1a01000 	mov	r1, r0
        12b250:	e3a02000 	mov	r2, #0	; 0x0
        12b254:	e5940000 	ldr	r0, [r4]
        12b258:	eb6ab67b 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b25c:	eb6663ee 	bl	1ac421c <$ClassInfo__17PNTKOutTranslatorSFv>
        12b260:	e1a01000 	mov	r1, r0
        12b264:	e3a02000 	mov	r2, #0	; 0x0
        12b268:	e5940000 	ldr	r0, [r4]
        12b26c:	eb6ab676 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        12b270:	e3a00014 	mov	r0, #20	; 0x14
        12b274:	eb6a8d2f 	bl	1bce738 <$__nw(unsigned int)>
        12b278:	e1b04000 	movs	r4, r0
        12b27c:	0a000003 	beq	12b290 <NTKInit(void)+0xf8>
        12b280:	e1a00004 	mov	r0, r4
        12b284:	eb6ae3df 	bl	1be4208 <TAEventHandler::$__ct(void)>
        12b288:	e59f0034 	ldr	r0, [pc, #34]	; 12b2c4 <NTKInit(void)+0x12c>
        12b28c:	e5840000 	str	r0, [r4]
        12b290:	e1a00004 	mov	r0, r4
        12b294:	e59f402c 	ldr	r4, [pc, #2c]	; 12b2c8 <NTKInit(void)+0x130>
        12b298:	e5840004 	str	r0, [r4, #4]
        12b29c:	e59f2028 	ldr	r2, [pc, #28]	; 12b2cc <NTKInit(void)+0x134>
        12b2a0:	e59f1028 	ldr	r1, [pc, #28]	; 12b2d0 <NTKInit(void)+0x138>
        12b2a4:	eb6af881 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        12b2a8:	e3a03000 	mov	r3, #0	; 0x0
        12b2ac:	e3a02000 	mov	r2, #0	; 0x0
        12b2b0:	e3a01000 	mov	r1, #0	; 0x0
        12b2b4:	e5b40004 	ldr	r0, [r4, #4]!
        12b2b8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        12b2bc:	ea6a0904 	b	1bad6d4 <TAEventHandler::$InitIdler(unsigned long, unsigned long, unsigned char)>
        12b2c0:	0c100b58 	ldceq	11, cr0, [r0], -#352
        12b2c4:	0001e554 	andeq	lr, r1, r4, asr r5
        12b2c8:	0c10155c 	ldceq	5, cr1, [r0], -#368
        12b2cc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b2d0:	72657020 	rsbvc	r7, r5, #32	; 0x20
    */
}

/**
 * Symbol: NTKShutdown(long)
 * Address: 0012b9ec
 */
NTKShutdown(long) {
    /*
        12b9ec:	e1a0c00d 	mov	ip, sp
        12b9f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12b9f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b9f8:	e1a04000 	mov	r4, r0
        12b9fc:	e59f5048 	ldr	r5, [pc, #48]	; 12ba4c <NTKShutdown(long)+0x60>
        12ba00:	e5950000 	ldr	r0, [r5]
        12ba04:	e3300000 	teq	r0, #0	; 0x0
        12ba08:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        12ba0c:	eb667abf 	bl	1aca510 <TNTKNub::$StopListener(void)>
        12ba10:	e5950000 	ldr	r0, [r5]
        12ba14:	e3300000 	teq	r0, #0	; 0x0
        12ba18:	13a01001 	movne	r1, #1	; 0x1
        12ba1c:	1b667acb 	blne	1aca550 <TNTKNub::$__dt(void)>
        12ba20:	e3a00000 	mov	r0, #0	; 0x0
        12ba24:	e3340000 	teq	r4, #0	; 0x0
        12ba28:	e5850000 	str	r0, [r5]
        12ba2c:	13740001 	cmnne	r4, #1	; 0x1
        12ba30:	1284cb23 	addne	ip, r4, #35840	; 0x8c00
        12ba34:	137c00a6 	cmnne	ip, #166	; 0xa6
        12ba38:	11a00004 	movne	r0, r4
        12ba3c:	13a01003 	movne	r1, #3	; 0x3
        12ba40:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        12ba44:	1a659bc9 	bne	1a92970 <$ErrorNotify__FlT1>
        12ba48:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12ba4c:	0c10155c 	ldceq	5, cr1, [r0], -#368
    */
}

/**
 * Symbol: NTKSendStackTrace(RefVar const &)
 * Address: 0012be34
 */
NTKSendStackTrace(RefVar const &) {
    /*
        12be34:	e1a02000 	mov	r2, r0
        12be38:	e59f0008 	ldr	r0, [pc, #8]	; 12be48 <NTKSendStackTrace(RefVar const &)+0x14>
        12be3c:	e5900000 	ldr	r0, [r0]
        12be40:	e59f1004 	ldr	r1, [pc, #4]	; 12be4c <NTKSendStackTrace(RefVar const &)+0x18>
        12be44:	ea66759c 	b	1ac94bc <TNTKNub::$SendRef(unsigned long, RefVar const &)>
        12be48:	0c10155c 	ldceq	5, cr1, [r0], -#368
        12be4c:	6673746b 	ldrvsbt	r7, [r3], -fp, ror #8
    */
}

/**
 * Symbol: NubADSPLookup(TCMAAppleTalkAddr *, RefVar const &)
 * Address: 0012be50
 */
NubADSPLookup(TCMAAppleTalkAddr *, RefVar const &) {
    /*
        12be50:	e1a0c00d 	mov	ip, sp
        12be54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12be58:	e24cb004 	sub	fp, ip, #4	; 0x4
        12be5c:	e1a04000 	mov	r4, r0
        12be60:	e1a05001 	mov	r5, r1
        12be64:	e1a00001 	mov	r0, r1
        12be68:	eb6a650b 	bl	1bc529c <$IsString(RefVar const &)>
        12be6c:	e3300000 	teq	r0, #0	; 0x0
        12be70:	0a00002c 	beq	12bf28 <NubADSPLookup(TCMAAppleTalkAddr *, RefVar const &)+0xd8>
        12be74:	e24ddf56 	sub	sp, sp, #344	; 0x158
        12be78:	e28d0078 	add	r0, sp, #120	; 0x78
        12be7c:	eb6b1ec5 	bl	1bf3998 <TLookupNames::$__ct(void)>
        12be80:	e1a0000d 	mov	r0, sp
        12be84:	eb6b1ec4 	bl	1bf399c <TNBPName::$__ct(void)>
        12be88:	e59f3090 	ldr	r3, [pc, #90]	; 12bf20 <NubADSPLookup(TCMAAppleTalkAddr *, RefVar const &)+0xd0>
        12be8c:	e3a02019 	mov	r2, #25	; 0x19
        12be90:	e59f108c 	ldr	r1, [pc, #8c]	; 12bf24 <NubADSPLookup(TCMAAppleTalkAddr *, RefVar const &)+0xd4>
        12be94:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        12be98:	e1a00005 	mov	r0, r5
        12be9c:	eb6a5cb8 	bl	1bc3184 <$GetCString(RefVar const &)>
        12bea0:	e1a01000 	mov	r1, r0
        12bea4:	e28d0084 	add	r0, sp, #132	; 0x84
        12bea8:	e3a03001 	mov	r3, #1	; 0x1
        12beac:	e3a02001 	mov	r2, #1	; 0x1
        12beb0:	eb6b43ec 	bl	1bfce68 <TLookupNames::$LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, unsigned long, unsigned long)>
        12beb4:	e28dd00c 	add	sp, sp, #12	; 0xc
        12beb8:	e1b05000 	movs	r5, r0
        12bebc:	1a000004 	bne	12bed4 <NubADSPLookup(TCMAAppleTalkAddr *, RefVar const &)+0x84>
        12bec0:	e1a0100d 	mov	r1, sp
        12bec4:	e28d0078 	add	r0, sp, #120	; 0x78
        12bec8:	e3a02001 	mov	r2, #1	; 0x1
        12becc:	eb6b1eb4 	bl	1bf39a4 <TLookupNames::$GetName(TNBPName &, unsigned long)>
        12bed0:	e1a05000 	mov	r5, r0
        12bed4:	e28d0078 	add	r0, sp, #120	; 0x78
        12bed8:	eb652f32 	bl	1a77ba8 <TLookupNames::$Close(void)>
        12bedc:	e3350000 	teq	r5, #0	; 0x0
        12bee0:	1a000009 	bne	12bf0c <NubADSPLookup(TCMAAppleTalkAddr *, RefVar const &)+0xbc>
        12bee4:	e59d0004 	ldr	r0, [sp, #4]
        12bee8:	e5840010 	str	r0, [r4, #16]
        12beec:	e59d000a 	ldr	r0, [sp, #10]
        12bef0:	e5c40015 	strb	r0, [r4, #21]
        12bef4:	e1a00440 	mov	r0, r0, asr #8
        12bef8:	e5c40014 	strb	r0, [r4, #20]
        12befc:	e5dd000a 	ldrb	r0, [sp, #10]
        12bf00:	e5c40016 	strb	r0, [r4, #22]
        12bf04:	e5dd000b 	ldrb	r0, [sp, #11]
        12bf08:	e5c40017 	strb	r0, [r4, #23]
        12bf0c:	e28d0078 	add	r0, sp, #120	; 0x78
        12bf10:	e3a01000 	mov	r1, #0	; 0x0
        12bf14:	eb6b1ea3 	bl	1bf39a8 <TLookupNames::$__dt(void)>
        12bf18:	e28ddf56 	add	sp, sp, #344	; 0x158
        12bf1c:	ea000002 	b	12bf2c <NubADSPLookup(TCMAAppleTalkAddr *, RefVar const &)+0xdc>
        12bf20:	001c1f38 	andeqs	r1, ip, r8, lsr pc
        12bf24:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
        12bf28:	e3e05000 	mvn	r5, #0	; 0x0
        12bf2c:	e1a00005 	mov	r0, r5
        12bf30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NubADSPOptions__FP12TOptionArrayT1
 * Address: 0012bf34
 */
void globals::NubADSPOptions() {
    /*
        12bf34:	e1a0c00d 	mov	ip, sp
        12bf38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12bf3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12bf40:	e1a05000 	mov	r5, r0
        12bf44:	e1a04001 	mov	r4, r1
        12bf48:	e24dd028 	sub	sp, sp, #40	; 0x28
        12bf4c:	e28d0014 	add	r0, sp, #20	; 0x14
        12bf50:	e3a02c02 	mov	r2, #512	; 0x200
        12bf54:	e3a01001 	mov	r1, #1	; 0x1
        12bf58:	eb656904 	bl	1a86370 <TCMOAppleTalkBuffer::$__ct(unsigned long, long)>
        12bf5c:	e1a0000d 	mov	r0, sp
        12bf60:	e3a02c02 	mov	r2, #512	; 0x200
        12bf64:	e3a01002 	mov	r1, #2	; 0x2
        12bf68:	eb656900 	bl	1a86370 <TCMOAppleTalkBuffer::$__ct(unsigned long, long)>
        12bf6c:	e1a00005 	mov	r0, r5
        12bf70:	eb652f15 	bl	1a77bcc <$CMGetOptionsForAppleTalkADSP(TOptionArray *)>
        12bf74:	e3300000 	teq	r0, #0	; 0x0
        12bf78:	1a000009 	bne	12bfa4 <NubADSPOptions__FP12TOptionArrayT1+0x70>
        12bf7c:	e28d2014 	add	r2, sp, #20	; 0x14
        12bf80:	e5941000 	ldr	r1, [r4]
        12bf84:	e1a00004 	mov	r0, r4
        12bf88:	eb6a3745 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        12bf8c:	e3300000 	teq	r0, #0	; 0x0
        12bf90:	1a000003 	bne	12bfa4 <NubADSPOptions__FP12TOptionArrayT1+0x70>
        12bf94:	e1a0200d 	mov	r2, sp
        12bf98:	e5941000 	ldr	r1, [r4]
        12bf9c:	e1a00004 	mov	r0, r4
        12bfa0:	eb6a373f 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        12bfa4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NormCdata(long *)
 * Address: 0012d400
 */
NormCdata(long *) {
    /*
        12d400:	e1a0c00d 	mov	ip, sp
        12d404:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12d408:	e24cb004 	sub	fp, ip, #4	; 0x4
        12d40c:	e1a04000 	mov	r4, r0
        12d410:	e3a00000 	mov	r0, #0	; 0x0
        12d414:	e3a01000 	mov	r1, #0	; 0x0
        12d418:	e4942004 	ldr	r2, [r4], #4
        12d41c:	e0200292 	mla	r0, r2, r2, r0
        12d420:	e2811001 	add	r1, r1, #1	; 0x1
        12d424:	e351000e 	cmp	r1, #14	; 0xe
        12d428:	bafffffa 	blt	12d418 <NormCdata(long *)+0x18>
        12d42c:	e2444038 	sub	r4, r4, #56	; 0x38
        12d430:	eb680d05 	bl	1b3084c <$SQRT32_ORTO(unsigned long)>
        12d434:	e1a06000 	mov	r6, r0
        12d438:	e3a05000 	mov	r5, #0	; 0x0
        12d43c:	e5940000 	ldr	r0, [r4]
        12d440:	e1a01500 	mov	r1, r0, lsl #10
        12d444:	e1a00006 	mov	r0, r6
        12d448:	eb6a153c 	bl	1bb2940 <$__rt_sdiv>
        12d44c:	e2855001 	add	r5, r5, #1	; 0x1
        12d450:	e355000e 	cmp	r5, #14	; 0xe
        12d454:	e4840004 	str	r0, [r4], #4
        12d458:	bafffff7 	blt	12d43c <NormCdata(long *)+0x3c>
        12d45c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternLookup
 * Address: 00131f5c
 */
void globals::NetPatternLookup() {
    /*
        131f5c:	e1a0c00d 	mov	ip, sp
        131f60:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        131f64:	e24cb004 	sub	fp, ip, #4	; 0x4
        131f68:	e1a04000 	mov	r4, r0
        131f6c:	e3e06000 	mvn	r6, #0	; 0x0
        131f70:	e3a05000 	mov	r5, #0	; 0x0
        131f74:	e59f7064 	ldr	r7, [pc, #64]	; 131fe0 <NetPatternLookup+0x84>
        131f78:	e0850085 	add	r0, r5, r5, lsl #1
        131f7c:	e7971100 	ldr	r1, [r7, r0, lsl #2]
        131f80:	e1a00004 	mov	r0, r4
        131f84:	eb6a0ec7 	bl	1bb5aa8 <$strcmp>
        131f88:	e3300000 	teq	r0, #0	; 0x0
        131f8c:	01a06805 	moveq	r6, r5, lsl #16
        131f90:	01a06846 	moveq	r6, r6, asr #16
        131f94:	0a000002 	beq	131fa4 <NetPatternLookup+0x48>
        131f98:	e2855001 	add	r5, r5, #1	; 0x1
        131f9c:	e3550007 	cmp	r5, #7	; 0x7
        131fa0:	3afffff4 	bcc	131f78 <NetPatternLookup+0x1c>
        131fa4:	e3760001 	cmn	r6, #1	; 0x1
        131fa8:	1a00000a 	bne	131fd8 <NetPatternLookup+0x7c>
        131fac:	e24ddc02 	sub	sp, sp, #512	; 0x200
        131fb0:	e1a02004 	mov	r2, r4
        131fb4:	e1a0000d 	mov	r0, sp
        131fb8:	e28f1f09 	add	r1, pc, #36	; 0x24
        131fbc:	eb6a026e 	bl	1bb297c <$_sprintf>
        131fc0:	e28ddc02 	add	sp, sp, #512	; 0x200
        131fc4:	e59f0034 	ldr	r0, [pc, #34]	; 132000 <NetPatternLookup+0xa4>
        131fc8:	e5900000 	ldr	r0, [r0]
        131fcc:	e3a02000 	mov	r2, #0	; 0x0
        131fd0:	e3a01001 	mov	r1, #1	; 0x1
        131fd4:	eb6ac470 	bl	1be319c <$Throw>
        131fd8:	e1a00006 	mov	r0, r6
        131fdc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        131fe0:	00373fb0 	ldreqh	r3, [r7], -r0
        131fe4:	556e6b6e 	strplb	r6, [lr, -#2926]!
        131fe8:	6f776e20 	swivs	0x00776e20
        131fec:	70617474 	rsbvc	r7, r1, r4, ror r4
        131ff0:	65726e20 	ldrvsb	r6, [r2, -#3616]!
        131ff4:	74797065 	ldrvcbt	r7, [r9], -#101
        131ff8:	20222573 	eorcs	r2, r2, r3, ror r5
        131ffc:	22000000 	andcs	r0, r0, #0	; 0x0
        132000:	003774f8 	ldreqsh	r7, [r7], -r8
        132004:	42617369 	rsbmi	r7, r1, #-1543503871	; 0xa4000001
        132008:	63496d61 	cmpvs	r9, #6208	; 0x1840
        13200c:	67650000 	strvsb	r0, [r5, -r0]!
    */
}

/**
 * Symbol: NetPatternizerImageInit
 * Address: 00132010
 */
void globals::NetPatternizerImageInit() {
    /*
        132010:	e1a0c00d 	mov	ip, sp
        132014:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        132018:	e24cb004 	sub	fp, ip, #4	; 0x4
        13201c:	e1a04000 	mov	r4, r0
        132020:	e59b0010 	ldr	r0, [fp, #16]
        132024:	e99b4020 	ldmib	fp, {r5, lr}
        132028:	e59bc00c 	ldr	ip, [fp, #12]
        13202c:	e2844010 	add	r4, r4, #16	; 0x10
        132030:	e8840006 	stmia	r4, {r1, r2}
        132034:	e2444010 	sub	r4, r4, #16	; 0x10
        132038:	e5c43020 	strb	r3, [r4, #32]
        13203c:	e5c45021 	strb	r5, [r4, #33]
        132040:	e1a0100c 	mov	r1, ip
        132044:	e5840024 	str	r0, [r4, #36]
        132048:	e3a00000 	mov	r0, #0	; 0x0
        13204c:	e5840008 	str	r0, [r4, #8]
        132050:	e584e018 	str	lr, [r4, #24]
        132054:	e1a0000e 	mov	r0, lr
        132058:	e3a02002 	mov	r2, #2	; 0x2
        13205c:	e584c01c 	str	ip, [r4, #28]
        132060:	eb68fe25 	bl	1b718fc <$RenderAACreate>
        132064:	e5840008 	str	r0, [r4, #8]
        132068:	e5900000 	ldr	r0, [r0]
        13206c:	e584000c 	str	r0, [r4, #12]
        132070:	e1a00004 	mov	r0, r4
        132074:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternizerImageInitFromBP
 * Address: 00132078
 */
void globals::NetPatternizerImageInitFromBP() {
    /*
        132078:	e1a0c00d 	mov	ip, sp
        13207c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        132080:	e24cb004 	sub	fp, ip, #4	; 0x4
        132084:	e1a0c000 	mov	ip, r0
        132088:	e1a00001 	mov	r0, r1
        13208c:	e591e00c 	ldr	lr, [r1, #12]
        132090:	e79e1182 	ldr	r1, [lr, r2, lsl #3]
        132094:	e1a01841 	mov	r1, r1, asr #16
        132098:	e08ee182 	add	lr, lr, r2, lsl #3
        13209c:	e59e2002 	ldr	r2, [lr, #2]
        1320a0:	e1a02842 	mov	r2, r2, asr #16
        1320a4:	e59e4004 	ldr	r4, [lr, #4]
        1320a8:	e590e03c 	ldr	lr, [r0, #60]
        1320ac:	e08ee844 	add	lr, lr, r4, asr #16
        1320b0:	e1a04003 	mov	r4, r3
        1320b4:	e1a0300e 	mov	r3, lr
        1320b8:	e5b0e074 	ldr	lr, [r0, #116]!
        1320bc:	e59e0014 	ldr	r0, [lr, #20]
        1320c0:	e20000ff 	and	r0, r0, #255	; 0xff
        1320c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1320c8:	e59e0018 	ldr	r0, [lr, #24]
        1320cc:	e20030ff 	and	r3, r0, #255	; 0xff
        1320d0:	e1a01004 	mov	r1, r4
        1320d4:	e1a0000c 	mov	r0, ip
        1320d8:	e5be207c 	ldr	r2, [lr, #124]!
        1320dc:	eb68fdf2 	bl	1b718ac <$NetPatternizerImageInit>
        1320e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternizerImageDestroy
 * Address: 001320e4
 */
void globals::NetPatternizerImageDestroy() {
    /*
        1320e4:	e3300000 	teq	r0, #0	; 0x0
        1320e8:	15901008 	ldrne	r1, [r0, #8]
        1320ec:	13310000 	teqne	r1, #0	; 0x0
        1320f0:	01a0f00e 	moveq	pc, lr
        1320f4:	e590200c 	ldr	r2, [r0, #12]
        1320f8:	e5812000 	str	r2, [r1]
        1320fc:	e5900008 	ldr	r0, [r0, #8]
        132100:	ea6901fe 	b	1b72900 <$RenderAADestroy>
    */
}

/**
 * Symbol: NetPatternizerImageGraph
 * Address: 00132104
 */
void globals::NetPatternizerImageGraph() {
    /*
        132104:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NetPatternImageCreate
 * Address: 00132108
 */
void globals::NetPatternImageCreate() {
    /*
        132108:	e1a0c00d 	mov	ip, sp
        13210c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        132110:	e24cb004 	sub	fp, ip, #4	; 0x4
        132114:	e1a04000 	mov	r4, r0
        132118:	e24dd004 	sub	sp, sp, #4	; 0x4
        13211c:	e1a08000 	mov	r8, r0
        132120:	e59f50b4 	ldr	r5, [pc, #b4]	; 1321dc <NetPatternImageCreate+0xd4>
        132124:	e1a01005 	mov	r1, r5
        132128:	e3a0000c 	mov	r0, #12	; 0xc
        13212c:	eb6ac002 	bl	1be213c <$NewNamedPtr>
        132130:	e59f60a8 	ldr	r6, [pc, #a8]	; 1321e0 <NetPatternImageCreate+0xd8>
        132134:	e5860000 	str	r0, [r6]
        132138:	e59f70a4 	ldr	r7, [pc, #a4]	; 1321e4 <NetPatternImageCreate+0xdc>
        13213c:	e3300000 	teq	r0, #0	; 0x0
        132140:	1a000004 	bne	132158 <NetPatternImageCreate+0x50>
        132144:	e5970000 	ldr	r0, [r7]
        132148:	e28f1f26 	add	r1, pc, #152	; 0x98
        13214c:	e3a02000 	mov	r2, #0	; 0x0
        132150:	eb6ac411 	bl	1be319c <$Throw>
        132154:	e5960000 	ldr	r0, [r6]
        132158:	e58d0000 	str	r0, [sp]
        13215c:	e3a00000 	mov	r0, #0	; 0x0
        132160:	e59d1000 	ldr	r1, [sp]
        132164:	e5a10008 	str	r0, [r1, #8]!
        132168:	e52d006c 	str	r0, [sp, -#108]!
        13216c:	e28d0008 	add	r0, sp, #8	; 0x8
        132170:	eb6a01ff 	bl	1bb2974 <$setjmp>
        132174:	e3300000 	teq	r0, #0	; 0x0
        132178:	1a00001b 	bne	1321ec <NetPatternImageCreate+0xe4>
        13217c:	e1a0000d 	mov	r0, sp
        132180:	eb6ab7bd 	bl	1be007c <$AddExceptionHandler>
        132184:	e1a01004 	mov	r1, r4
        132188:	e59d006c 	ldr	r0, [sp, #108]
        13218c:	eb68f9ad 	bl	1b70848 <$NetPatternInit_>
        132190:	e2888014 	add	r8, r8, #20	; 0x14
        132194:	e9b80003 	ldmib	r8!, {r0, r1}
        132198:	e0000091 	mul	r0, r1, r0
        13219c:	e1a01005 	mov	r1, r5
        1321a0:	eb6abfe5 	bl	1be213c <$NewNamedPtr>
        1321a4:	e5860000 	str	r0, [r6]
        1321a8:	e3300000 	teq	r0, #0	; 0x0
        1321ac:	1a000004 	bne	1321c4 <NetPatternImageCreate+0xbc>
        1321b0:	e5970000 	ldr	r0, [r7]
        1321b4:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        1321b8:	e3a02000 	mov	r2, #0	; 0x0
        1321bc:	eb6ac3f6 	bl	1be319c <$Throw>
        1321c0:	e5960000 	ldr	r0, [r6]
        1321c4:	e59d106c 	ldr	r1, [sp, #108]
        1321c8:	e5a10008 	str	r0, [r1, #8]!
        1321cc:	e1a0000d 	mov	r0, sp
        1321d0:	eb6abbb8 	bl	1be10b8 <$ExitHandler>
        1321d4:	e5bd006c 	ldr	r0, [sp, #108]!
        1321d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1321dc:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        1321e0:	0c101950 	ldceq	9, cr1, [r0], -#320
        1321e4:	003712cc 	eoreqs	r1, r7, ip, asr #5
        1321e8:	00000000 	andeq	r0, r0, r0
        1321ec:	e59d006c 	ldr	r0, [sp, #108]
        1321f0:	eb68f991 	bl	1b7083c <$NetPatternImageDestroy>
        1321f4:	e1a0000d 	mov	r0, sp
        1321f8:	eb6abfd5 	bl	1be2154 <$NextHandler>
        1321fc:	eafffffa 	b	1321ec <NetPatternImageCreate+0xe4>
    */
}

/**
 * Symbol: NetPatternImageSLToPat
 * Address: 00132200
 */
void globals::NetPatternImageSLToPat() {
    /*
        132200:	e3320000 	teq	r2, #0	; 0x0
        132204:	01a0f00e 	moveq	pc, lr
        132208:	e1a0c00d 	mov	ip, sp
        13220c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        132210:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        132214:	e24cb014 	sub	fp, ip, #20	; 0x14
        132218:	e1a04000 	mov	r4, r0
        13221c:	e59b8020 	ldr	r8, [fp, #32]
        132220:	e28ba014 	add	sl, fp, #20	; 0x14
        132224:	e89a0600 	ldmia	sl, {r9, sl}
        132228:	e24dd028 	sub	sp, sp, #40	; 0x28
        13222c:	e5920008 	ldr	r0, [r2, #8]
        132230:	e5927000 	ldr	r7, [r2]
        132234:	e5971008 	ldr	r1, [r7, #8]
        132238:	e5810000 	str	r0, [r1]
        13223c:	e5970008 	ldr	r0, [r7, #8]
        132240:	e5900014 	ldr	r0, [r0, #20]
        132244:	eb6901b0 	bl	1b7290c <$RenderClear>
        132248:	e5940074 	ldr	r0, [r4, #116]
        13224c:	e5900040 	ldr	r0, [r0, #64]
        132250:	e31000ff 	tst	r0, #255	; 0xff
        132254:	11a09008 	movne	r9, r8
        132258:	159ba024 	ldrne	sl, [fp, #36]
        13225c:	e28d1014 	add	r1, sp, #20	; 0x14
        132260:	e59b0008 	ldr	r0, [fp, #8]
        132264:	eb6901be 	bl	1b72964 <$SLFindBounds>
        132268:	e28d1014 	add	r1, sp, #20	; 0x14
        13226c:	e28d000c 	add	r0, sp, #12	; 0xc
        132270:	eb68f556 	bl	1b6f7d0 <$FixedRectSize>
        132274:	e5970018 	ldr	r0, [r7, #24]
        132278:	e1a00800 	mov	r0, r0, lsl #16
        13227c:	e58d0008 	str	r0, [sp, #8]
        132280:	e597001c 	ldr	r0, [r7, #28]
        132284:	e1a00800 	mov	r0, r0, lsl #16
        132288:	e58d0004 	str	r0, [sp, #4]
        13228c:	e59d0008 	ldr	r0, [sp, #8]
        132290:	e2408801 	sub	r8, r0, #65536	; 0x10000
        132294:	e59d0004 	ldr	r0, [sp, #4]
        132298:	e2400801 	sub	r0, r0, #65536	; 0x10000
        13229c:	e58d0024 	str	r0, [sp, #36]
        1322a0:	e58d0000 	str	r0, [sp]
        1322a4:	e5970010 	ldr	r0, [r7, #16]
        1322a8:	e3300001 	teq	r0, #1	; 0x1
        1322ac:	1a00003e 	bne	1323ac <NetPatternImageSLToPat+0x1ac>
        1322b0:	e5940074 	ldr	r0, [r4, #116]
        1322b4:	e5900054 	ldr	r0, [r0, #84]
        1322b8:	e59d100c 	ldr	r1, [sp, #12]
        1322bc:	eb6abb80 	bl	1be10c4 <$FixedMultiply>
        1322c0:	e1500008 	cmp	r0, r8
        1322c4:	da000004 	ble	1322dc <NetPatternImageSLToPat+0xdc>
        1322c8:	e1a00008 	mov	r0, r8
        1322cc:	e59d100c 	ldr	r1, [sp, #12]
        1322d0:	eb6abb7a 	bl	1be10c0 <$FixedDivide>
        1322d4:	e1a06000 	mov	r6, r0
        1322d8:	ea000001 	b	1322e4 <NetPatternImageSLToPat+0xe4>
        1322dc:	e5940074 	ldr	r0, [r4, #116]
        1322e0:	e5b06054 	ldr	r6, [r0, #84]!
        1322e4:	e1a0100a 	mov	r1, sl
        1322e8:	e1a00008 	mov	r0, r8
        1322ec:	eb6abb73 	bl	1be10c0 <$FixedDivide>
        1322f0:	e1a05000 	mov	r5, r0
        1322f4:	e5940074 	ldr	r0, [r4, #116]
        1322f8:	e5900058 	ldr	r0, [r0, #88]
        1322fc:	e1a01005 	mov	r1, r5
        132300:	eb6abb6f 	bl	1be10c4 <$FixedMultiply>
        132304:	e1500006 	cmp	r0, r6
        132308:	aa000004 	bge	132320 <NetPatternImageSLToPat+0x120>
        13230c:	e5940074 	ldr	r0, [r4, #116]
        132310:	e5900058 	ldr	r0, [r0, #88]
        132314:	e1a01005 	mov	r1, r5
        132318:	eb6abb69 	bl	1be10c4 <$FixedMultiply>
        13231c:	e1a06000 	mov	r6, r0
        132320:	e59d1010 	ldr	r1, [sp, #16]
        132324:	e5940074 	ldr	r0, [r4, #116]
        132328:	e5900054 	ldr	r0, [r0, #84]
        13232c:	eb6abb64 	bl	1be10c4 <$FixedMultiply>
        132330:	e59d1000 	ldr	r1, [sp]
        132334:	e1500001 	cmp	r0, r1
        132338:	da000004 	ble	132350 <NetPatternImageSLToPat+0x150>
        13233c:	e59d0000 	ldr	r0, [sp]
        132340:	e59d1010 	ldr	r1, [sp, #16]
        132344:	eb6abb5d 	bl	1be10c0 <$FixedDivide>
        132348:	e1a05000 	mov	r5, r0
        13234c:	ea000001 	b	132358 <NetPatternImageSLToPat+0x158>
        132350:	e5940074 	ldr	r0, [r4, #116]
        132354:	e5b05054 	ldr	r5, [r0, #84]!
        132358:	e1a01009 	mov	r1, r9
        13235c:	e59d0024 	ldr	r0, [sp, #36]
        132360:	eb6abb56 	bl	1be10c0 <$FixedDivide>
        132364:	e1a08000 	mov	r8, r0
        132368:	e5940074 	ldr	r0, [r4, #116]
        13236c:	e5900058 	ldr	r0, [r0, #88]
        132370:	e1a01008 	mov	r1, r8
        132374:	eb6abb52 	bl	1be10c4 <$FixedMultiply>
        132378:	e1500005 	cmp	r0, r5
        13237c:	aa000004 	bge	132394 <NetPatternImageSLToPat+0x194>
        132380:	e5b40074 	ldr	r0, [r4, #116]!
        132384:	e5900058 	ldr	r0, [r0, #88]
        132388:	e1a01008 	mov	r1, r8
        13238c:	eb6abb4c 	bl	1be10c4 <$FixedMultiply>
        132390:	e1a05000 	mov	r5, r0
        132394:	e0860086 	add	r0, r6, r6, lsl #1
        132398:	e1500005 	cmp	r0, r5
        13239c:	b1a05000 	movlt	r5, r0
        1323a0:	e0850085 	add	r0, r5, r5, lsl #1
        1323a4:	e1500006 	cmp	r0, r6
        1323a8:	b1a06000 	movlt	r6, r0
        1323ac:	e1a01006 	mov	r1, r6
        1323b0:	e59d000c 	ldr	r0, [sp, #12]
        1323b4:	eb6abb42 	bl	1be10c4 <$FixedMultiply>
        1323b8:	e59d1008 	ldr	r1, [sp, #8]
        1323bc:	e0410000 	sub	r0, r1, r0
        1323c0:	e3a01902 	mov	r1, #32768	; 0x8000
        1323c4:	eb6abb3e 	bl	1be10c4 <$FixedMultiply>
        1323c8:	e1a04000 	mov	r4, r0
        1323cc:	e1a01006 	mov	r1, r6
        1323d0:	e59d0014 	ldr	r0, [sp, #20]
        1323d4:	eb6abb3a 	bl	1be10c4 <$FixedMultiply>
        1323d8:	e0444000 	sub	r4, r4, r0
        1323dc:	e1a01005 	mov	r1, r5
        1323e0:	e59d0010 	ldr	r0, [sp, #16]
        1323e4:	eb6abb36 	bl	1be10c4 <$FixedMultiply>
        1323e8:	e59d1004 	ldr	r1, [sp, #4]
        1323ec:	e0410000 	sub	r0, r1, r0
        1323f0:	e3a01902 	mov	r1, #32768	; 0x8000
        1323f4:	eb6abb32 	bl	1be10c4 <$FixedMultiply>
        1323f8:	e1a08000 	mov	r8, r0
        1323fc:	e1a01005 	mov	r1, r5
        132400:	e59d0018 	ldr	r0, [sp, #24]
        132404:	eb6abb2e 	bl	1be10c4 <$FixedMultiply>
        132408:	e0480000 	sub	r0, r8, r0
        13240c:	e1a03005 	mov	r3, r5
        132410:	e1a02006 	mov	r2, r6
        132414:	e92d000c 	stmdb	sp!, {r2, r3}
        132418:	e1a03000 	mov	r3, r0
        13241c:	e1a02004 	mov	r2, r4
        132420:	e5971008 	ldr	r1, [r7, #8]
        132424:	e59b0008 	ldr	r0, [fp, #8]
        132428:	eb69014c 	bl	1b72960 <$SLDrawAAAt>
        13242c:	e28dd008 	add	sp, sp, #8	; 0x8
        132430:	e5b70008 	ldr	r0, [r7, #8]!
        132434:	eb690132 	bl	1b72904 <$RenderAAFlush>
        132438:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternImageSetInput
 * Address: 0013243c
 */
void globals::NetPatternImageSetInput() {
    /*
        13243c:	e1a0c00d 	mov	ip, sp
        132440:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        132444:	e24cb004 	sub	fp, ip, #4	; 0x4
        132448:	e1a04000 	mov	r4, r0
        13244c:	e5905000 	ldr	r5, [r0]
        132450:	e2852018 	add	r2, r5, #24	; 0x18
        132454:	e8920006 	ldmia	r2, {r1, r2}
        132458:	e0010192 	mul	r1, r2, r1
        13245c:	e5900008 	ldr	r0, [r0, #8]
        132460:	e0817000 	add	r7, r1, r0
        132464:	e5d51021 	ldrb	r1, [r5, #33]
        132468:	e3310000 	teq	r1, #0	; 0x0
        13246c:	05d51020 	ldreqb	r1, [r5, #32]
        132470:	033100ff 	teqeq	r1, #255	; 0xff
        132474:	1a000007 	bne	132498 <NetPatternImageSetInput+0x5c>
        132478:	e1500007 	cmp	r0, r7
        13247c:	e5b51024 	ldr	r1, [r5, #36]!
        132480:	2a000015 	bcs	1324dc <NetPatternImageSetInput+0xa0>
        132484:	e4d02001 	ldrb	r2, [r0], #1
        132488:	e4c12001 	strb	r2, [r1], #1
        13248c:	e1500007 	cmp	r0, r7
        132490:	3afffffb 	bcc	132484 <NetPatternImageSetInput+0x48>
        132494:	ea000010 	b	1324dc <NetPatternImageSetInput+0xa0>
        132498:	e1a06000 	mov	r6, r0
        13249c:	e1500007 	cmp	r0, r7
        1324a0:	e5958024 	ldr	r8, [r5, #36]
        1324a4:	2a00000c 	bcs	1324dc <NetPatternImageSetInput+0xa0>
        1324a8:	e5d50020 	ldrb	r0, [r5, #32]
        1324ac:	e5d51021 	ldrb	r1, [r5, #33]
        1324b0:	e0400001 	sub	r0, r0, r1
        1324b4:	e1a01400 	mov	r1, r0, lsl #8
        1324b8:	e5d60000 	ldrb	r0, [r6]
        1324bc:	e0800400 	add	r0, r0, r0, lsl #8
        1324c0:	eb6abaff 	bl	1be10c4 <$FixedMultiply>
        1324c4:	e5d51021 	ldrb	r1, [r5, #33]
        1324c8:	e0810440 	add	r0, r1, r0, asr #8
        1324cc:	e4c80001 	strb	r0, [r8], #1
        1324d0:	e2866001 	add	r6, r6, #1	; 0x1
        1324d4:	e1560007 	cmp	r6, r7
        1324d8:	3afffff2 	bcc	1324a8 <NetPatternImageSetInput+0x6c>
        1324dc:	e5940000 	ldr	r0, [r4]
        1324e0:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        1324e4:	ea68fcef 	b	1b718a8 <$NetPatternizerImageGraph>
    */
}

/**
 * Symbol: NetPatternImageDestroy
 * Address: 001324e8
 */
void globals::NetPatternImageDestroy() {
    /*
        1324e8:	e3300000 	teq	r0, #0	; 0x0
        1324ec:	01a0f00e 	moveq	pc, lr
        1324f0:	e1a0c00d 	mov	ip, sp
        1324f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1324f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1324fc:	e1a04000 	mov	r4, r0
        132500:	e5900008 	ldr	r0, [r0, #8]
        132504:	e3300000 	teq	r0, #0	; 0x0
        132508:	1b6a8112 	blne	1bd2958 <$free>
        13250c:	e1a00004 	mov	r0, r4
        132510:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        132514:	ea6a810f 	b	1bd2958 <$free>
        132518:	4d756c74 	ldcmil	12, cr6, [r5, -#464]!
        13251c:	692d496e 	stmvsdb	sp!, {r1, r2, r3, r5, r6, r8, fp, lr}
        132520:	70757420 	rsbvcs	r7, r5, r0, lsr #8
        132524:	47726964 	ldrmib	r6, [r2, -r4, ror #18]!
        132528:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: NetPatternizerMultiInit
 * Address: 0013252c
 */
void globals::NetPatternizerMultiInit() {
    /*
        13252c:	e1a0c00d 	mov	ip, sp
        132530:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        132534:	e24cb004 	sub	fp, ip, #4	; 0x4
        132538:	e1b04000 	movs	r4, r0
        13253c:	e1a05001 	mov	r5, r1
        132540:	e3a00000 	mov	r0, #0	; 0x0
        132544:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        132548:	e1a06000 	mov	r6, r0
        13254c:	e584000c 	str	r0, [r4, #12]
        132550:	e5845008 	str	r5, [r4, #8]
        132554:	e1a00105 	mov	r0, r5, lsl #2
        132558:	e59f1054 	ldr	r1, [pc, #54]	; 1325b4 <NetPatternizerMultiInit+0x88>
        13255c:	eb6abef6 	bl	1be213c <$NewNamedPtr>
        132560:	e59f7050 	ldr	r7, [pc, #50]	; 1325b8 <NetPatternizerMultiInit+0x8c>
        132564:	e5870000 	str	r0, [r7]
        132568:	e3300000 	teq	r0, #0	; 0x0
        13256c:	1a000005 	bne	132588 <NetPatternizerMultiInit+0x5c>
        132570:	e59f0044 	ldr	r0, [pc, #44]	; 1325bc <NetPatternizerMultiInit+0x90>
        132574:	e5900000 	ldr	r0, [r0]
        132578:	e28f1f10 	add	r1, pc, #64	; 0x40
        13257c:	e3a02000 	mov	r2, #0	; 0x0
        132580:	eb6ac305 	bl	1be319c <$Throw>
        132584:	e5970000 	ldr	r0, [r7]
        132588:	e584000c 	str	r0, [r4, #12]
        13258c:	e3a00000 	mov	r0, #0	; 0x0
        132590:	e3550000 	cmp	r5, #0	; 0x0
        132594:	9a000004 	bls	1325ac <NetPatternizerMultiInit+0x80>
        132598:	e594100c 	ldr	r1, [r4, #12]
        13259c:	e7816100 	str	r6, [r1, r0, lsl #2]
        1325a0:	e2800001 	add	r0, r0, #1	; 0x1
        1325a4:	e1500005 	cmp	r0, r5
        1325a8:	3afffffa 	bcc	132598 <NetPatternizerMultiInit+0x6c>
        1325ac:	e1a00004 	mov	r0, r4
        1325b0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1325b4:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        1325b8:	0c101950 	ldceq	9, cr1, [r0], -#320
        1325bc:	003712cc 	eoreqs	r1, r7, ip, asr #5
        1325c0:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: NetPatternizerMultiInitFromBP
 * Address: 001325c4
 */
void globals::NetPatternizerMultiInitFromBP() {
    /*
        1325c4:	e1a0c00d 	mov	ip, sp
        1325c8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1325cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1325d0:	e1a05000 	mov	r5, r0
        1325d4:	e1a04001 	mov	r4, r1
        1325d8:	e5911006 	ldr	r1, [r1, #6]
        1325dc:	e1a01841 	mov	r1, r1, asr #16
        1325e0:	e3a06000 	mov	r6, #0	; 0x0
        1325e4:	e3510001 	cmp	r1, #1	; 0x1
        1325e8:	ba000002 	blt	1325f8 <NetPatternizerMultiInitFromBP+0x34>
        1325ec:	eb68fcb3 	bl	1b718c0 <$NetPatternizerMultiInit>
        1325f0:	e1b07000 	movs	r7, r0
        1325f4:	1a000001 	bne	132600 <NetPatternizerMultiInitFromBP+0x3c>
        1325f8:	e1a00006 	mov	r0, r6
        1325fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        132600:	e3a06000 	mov	r6, #0	; 0x0
        132604:	e5970008 	ldr	r0, [r7, #8]
        132608:	e3500000 	cmp	r0, #0	; 0x0
        13260c:	9a000008 	bls	132634 <NetPatternizerMultiInitFromBP+0x70>
        132610:	e1a01006 	mov	r1, r6
        132614:	e1a00004 	mov	r0, r4
        132618:	eb68fc9d 	bl	1b71894 <$NetPatternizerCreateForGrid>
        13261c:	e597100c 	ldr	r1, [r7, #12]
        132620:	e7810106 	str	r0, [r1, r6, lsl #2]
        132624:	e2866001 	add	r6, r6, #1	; 0x1
        132628:	e5970008 	ldr	r0, [r7, #8]
        13262c:	e1500006 	cmp	r0, r6
        132630:	8afffff6 	bhi	132610 <NetPatternizerMultiInitFromBP+0x4c>
        132634:	e1a00005 	mov	r0, r5
        132638:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternizerMultiDestroy
 * Address: 0013263c
 */
void globals::NetPatternizerMultiDestroy() {
    /*
        13263c:	e3300000 	teq	r0, #0	; 0x0
        132640:	01a0f00e 	moveq	pc, lr
        132644:	e1a0c00d 	mov	ip, sp
        132648:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13264c:	e24cb004 	sub	fp, ip, #4	; 0x4
        132650:	e1a05000 	mov	r5, r0
        132654:	e590000c 	ldr	r0, [r0, #12]
        132658:	e3300000 	teq	r0, #0	; 0x0
        13265c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        132660:	e3a04000 	mov	r4, #0	; 0x0
        132664:	e5950008 	ldr	r0, [r5, #8]
        132668:	e3500000 	cmp	r0, #0	; 0x0
        13266c:	9a000006 	bls	13268c <NetPatternizerMultiDestroy+0x50>
        132670:	e595000c 	ldr	r0, [r5, #12]
        132674:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        132678:	eb68fc87 	bl	1b7189c <$NetPatternizerDestroy>
        13267c:	e2844001 	add	r4, r4, #1	; 0x1
        132680:	e5950008 	ldr	r0, [r5, #8]
        132684:	e1500004 	cmp	r0, r4
        132688:	8afffff8 	bhi	132670 <NetPatternizerMultiDestroy+0x34>
        13268c:	e5b5000c 	ldr	r0, [r5, #12]!
        132690:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        132694:	ea6a80af 	b	1bd2958 <$free>
    */
}

/**
 * Symbol: NetPatternizerMultiGraph
 * Address: 00132698
 */
void globals::NetPatternizerMultiGraph() {
    /*
        132698:	e1a0c00d 	mov	ip, sp
        13269c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1326a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1326a4:	e1a05000 	mov	r5, r0
        1326a8:	e3a04000 	mov	r4, #0	; 0x0
        1326ac:	e5900008 	ldr	r0, [r0, #8]
        1326b0:	e3500000 	cmp	r0, #0	; 0x0
        1326b4:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
        1326b8:	e595000c 	ldr	r0, [r5, #12]
        1326bc:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        1326c0:	eb68fc89 	bl	1b718ec <$NetPatternizerUpdateGraphics>
        1326c4:	e2844001 	add	r4, r4, #1	; 0x1
        1326c8:	e5950008 	ldr	r0, [r5, #8]
        1326cc:	e1500004 	cmp	r0, r4
        1326d0:	8afffff8 	bhi	1326b8 <NetPatternizerMultiGraph+0x20>
        1326d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternMultiCreate
 * Address: 001326d8
 */
void globals::NetPatternMultiCreate() {
    /*
        1326d8:	e1a0c00d 	mov	ip, sp
        1326dc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1326e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1326e4:	e1a04000 	mov	r4, r0
        1326e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1326ec:	e1b08000 	movs	r8, r0
        1326f0:	e3a09000 	mov	r9, #0	; 0x0
        1326f4:	01a00009 	moveq	r0, r9
        1326f8:	0a00004d 	beq	132834 <NetPatternMultiCreate+0x15c>
        1326fc:	e59f5098 	ldr	r5, [pc, #98]	; 13279c <NetPatternMultiCreate+0xc4>
        132700:	e1a01005 	mov	r1, r5
        132704:	e3a00010 	mov	r0, #16	; 0x10
        132708:	eb6abe8b 	bl	1be213c <$NewNamedPtr>
        13270c:	e59f608c 	ldr	r6, [pc, #8c]	; 1327a0 <NetPatternMultiCreate+0xc8>
        132710:	e5860000 	str	r0, [r6]
        132714:	e59f7088 	ldr	r7, [pc, #88]	; 1327a4 <NetPatternMultiCreate+0xcc>
        132718:	e3300000 	teq	r0, #0	; 0x0
        13271c:	1a000004 	bne	132734 <NetPatternMultiCreate+0x5c>
        132720:	e5970000 	ldr	r0, [r7]
        132724:	e28f1f1f 	add	r1, pc, #124	; 0x7c
        132728:	e3a02000 	mov	r2, #0	; 0x0
        13272c:	eb6ac29a 	bl	1be319c <$Throw>
        132730:	e5960000 	ldr	r0, [r6]
        132734:	e58d0004 	str	r0, [sp, #4]
        132738:	e1a01004 	mov	r1, r4
        13273c:	e59d0004 	ldr	r0, [sp, #4]
        132740:	eb68f840 	bl	1b70848 <$NetPatternInit_>
        132744:	e59d0004 	ldr	r0, [sp, #4]
        132748:	e5a0900c 	str	r9, [r0, #12]!
        13274c:	e52d906c 	str	r9, [sp, -#108]!
        132750:	e28d0008 	add	r0, sp, #8	; 0x8
        132754:	eb6a0086 	bl	1bb2974 <$setjmp>
        132758:	e3300000 	teq	r0, #0	; 0x0
        13275c:	1a000035 	bne	132838 <NetPatternMultiCreate+0x160>
        132760:	e1a0000d 	mov	r0, sp
        132764:	eb6ab644 	bl	1be007c <$AddExceptionHandler>
        132768:	e5981008 	ldr	r1, [r8, #8]
        13276c:	e59d0070 	ldr	r0, [sp, #112]
        132770:	e5a01008 	str	r1, [r0, #8]!
        132774:	e59d0070 	ldr	r0, [sp, #112]
        132778:	e5900008 	ldr	r0, [r0, #8]
        13277c:	e1a00100 	mov	r0, r0, lsl #2
        132780:	eb6abe6f 	bl	1be2144 <$NewPtrClear>
        132784:	e5860000 	str	r0, [r6]
        132788:	e3300000 	teq	r0, #0	; 0x0
        13278c:	0a000006 	beq	1327ac <NetPatternMultiCreate+0xd4>
        132790:	e1a01005 	mov	r1, r5
        132794:	eb6ab613 	bl	1bdffe8 <$SetPtrName>
        132798:	ea000007 	b	1327bc <NetPatternMultiCreate+0xe4>
        13279c:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        1327a0:	0c101950 	ldceq	9, cr1, [r0], -#320
        1327a4:	003712cc 	eoreqs	r1, r7, ip, asr #5
        1327a8:	00000000 	andeq	r0, r0, r0
        1327ac:	e5970000 	ldr	r0, [r7]
        1327b0:	e24f1f04 	sub	r1, pc, #16	; 0x10
        1327b4:	e3a02000 	mov	r2, #0	; 0x0
        1327b8:	eb6ac277 	bl	1be319c <$Throw>
        1327bc:	e5961000 	ldr	r1, [r6]
        1327c0:	e59d0070 	ldr	r0, [sp, #112]
        1327c4:	e5a0100c 	str	r1, [r0, #12]!
        1327c8:	e3a00000 	mov	r0, #0	; 0x0
        1327cc:	e58d006c 	str	r0, [sp, #108]
        1327d0:	e59d0070 	ldr	r0, [sp, #112]
        1327d4:	e5b01008 	ldr	r1, [r0, #8]!
        1327d8:	e59d006c 	ldr	r0, [sp, #108]
        1327dc:	e1510000 	cmp	r1, r0
        1327e0:	9a00000f 	bls	132824 <NetPatternMultiCreate+0x14c>
        1327e4:	e598100c 	ldr	r1, [r8, #12]
        1327e8:	e59d006c 	ldr	r0, [sp, #108]
        1327ec:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        1327f0:	eb68f80d 	bl	1b7082c <$NetPatternCreate>
        1327f4:	e59d1070 	ldr	r1, [sp, #112]
        1327f8:	e5b1200c 	ldr	r2, [r1, #12]!
        1327fc:	e59d106c 	ldr	r1, [sp, #108]
        132800:	e7820101 	str	r0, [r2, r1, lsl #2]
        132804:	e59d006c 	ldr	r0, [sp, #108]
        132808:	e2800001 	add	r0, r0, #1	; 0x1
        13280c:	e58d006c 	str	r0, [sp, #108]
        132810:	e59d0070 	ldr	r0, [sp, #112]
        132814:	e5b01008 	ldr	r1, [r0, #8]!
        132818:	e59d006c 	ldr	r0, [sp, #108]
        13281c:	e1510000 	cmp	r1, r0
        132820:	8affffef 	bhi	1327e4 <NetPatternMultiCreate+0x10c>
        132824:	e1a0000d 	mov	r0, sp
        132828:	eb6aba22 	bl	1be10b8 <$ExitHandler>
        13282c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        132830:	e59d0004 	ldr	r0, [sp, #4]
        132834:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        132838:	e59d0070 	ldr	r0, [sp, #112]
        13283c:	eb68f804 	bl	1b70854 <$NetPatternMultiDestroy>
        132840:	e1a0000d 	mov	r0, sp
        132844:	eb6abe42 	bl	1be2154 <$NextHandler>
        132848:	eafffffa 	b	132838 <NetPatternMultiCreate+0x160>
    */
}

/**
 * Symbol: NetPatternMultiSLToPat
 * Address: 0013284c
 */
void globals::NetPatternMultiSLToPat() {
    /*
        13284c:	e3320000 	teq	r2, #0	; 0x0
        132850:	01a0f00e 	moveq	pc, lr
        132854:	e1a0c00d 	mov	ip, sp
        132858:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13285c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        132860:	e24cb014 	sub	fp, ip, #20	; 0x14
        132864:	e1a05002 	mov	r5, r2
        132868:	e3a04000 	mov	r4, #0	; 0x0
        13286c:	e59b6024 	ldr	r6, [fp, #36]
        132870:	e59b7020 	ldr	r7, [fp, #32]
        132874:	e59b801c 	ldr	r8, [fp, #28]
        132878:	e59b9018 	ldr	r9, [fp, #24]
        13287c:	e59ba014 	ldr	sl, [fp, #20]
        132880:	e5920008 	ldr	r0, [r2, #8]
        132884:	e3500000 	cmp	r0, #0	; 0x0
        132888:	991baff0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13288c:	e1a00006 	mov	r0, r6
        132890:	e28b3028 	add	r3, fp, #40	; 0x28
        132894:	e893000e 	ldmia	r3, {r1, r2, r3}
        132898:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13289c:	e1a03007 	mov	r3, r7
        1328a0:	e1a02008 	mov	r2, r8
        1328a4:	e1a01009 	mov	r1, r9
        1328a8:	e1a0000a 	mov	r0, sl
        1328ac:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1328b0:	e595000c 	ldr	r0, [r5, #12]
        1328b4:	e7902104 	ldr	r2, [r0, r4, lsl #2]
        1328b8:	e99b0003 	ldmib	fp, {r0, r1}
        1328bc:	e59b3010 	ldr	r3, [fp, #16]
        1328c0:	e592c000 	ldr	ip, [r2]
        1328c4:	e59cc000 	ldr	ip, [ip]
        1328c8:	e1a0e00f 	mov	lr, pc
        1328cc:	e59cf010 	ldr	pc, [ip, #16]
        1328d0:	e28dd020 	add	sp, sp, #32	; 0x20
        1328d4:	e2844001 	add	r4, r4, #1	; 0x1
        1328d8:	e5950008 	ldr	r0, [r5, #8]
        1328dc:	e1500004 	cmp	r0, r4
        1328e0:	8affffe9 	bhi	13288c <NetPatternMultiSLToPat+0x40>
        1328e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternMultiSetInput
 * Address: 001328e8
 */
void globals::NetPatternMultiSetInput() {
    /*
        1328e8:	e1a0c00d 	mov	ip, sp
        1328ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1328f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1328f4:	e1a05000 	mov	r5, r0
        1328f8:	e3a04000 	mov	r4, #0	; 0x0
        1328fc:	e5900008 	ldr	r0, [r0, #8]
        132900:	e3500000 	cmp	r0, #0	; 0x0
        132904:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
        132908:	e595000c 	ldr	r0, [r5, #12]
        13290c:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        132910:	eb68f7d5 	bl	1b7086c <$NetPatternSetInput>
        132914:	e2844001 	add	r4, r4, #1	; 0x1
        132918:	e5950008 	ldr	r0, [r5, #8]
        13291c:	e1500004 	cmp	r0, r4
        132920:	8afffff8 	bhi	132908 <NetPatternMultiSetInput+0x20>
        132924:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternMultiDestroy
 * Address: 00132928
 */
void globals::NetPatternMultiDestroy() {
    /*
        132928:	e3300000 	teq	r0, #0	; 0x0
        13292c:	01a0f00e 	moveq	pc, lr
        132930:	e1a0c00d 	mov	ip, sp
        132934:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        132938:	e24cb004 	sub	fp, ip, #4	; 0x4
        13293c:	e1a04000 	mov	r4, r0
        132940:	e1a06000 	mov	r6, r0
        132944:	e590000c 	ldr	r0, [r0, #12]
        132948:	e3300000 	teq	r0, #0	; 0x0
        13294c:	0a00000c 	beq	132984 <NetPatternMultiDestroy+0x5c>
        132950:	e3a05000 	mov	r5, #0	; 0x0
        132954:	e5960008 	ldr	r0, [r6, #8]
        132958:	e3500000 	cmp	r0, #0	; 0x0
        13295c:	9a000006 	bls	13297c <NetPatternMultiDestroy+0x54>
        132960:	e596000c 	ldr	r0, [r6, #12]
        132964:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        132968:	eb68f7b0 	bl	1b70830 <$NetPatternDestroy>
        13296c:	e2855001 	add	r5, r5, #1	; 0x1
        132970:	e5960008 	ldr	r0, [r6, #8]
        132974:	e1500005 	cmp	r0, r5
        132978:	8afffff8 	bhi	132960 <NetPatternMultiDestroy+0x38>
        13297c:	e5b6000c 	ldr	r0, [r6, #12]!
        132980:	eb6a7ff4 	bl	1bd2958 <$free>
        132984:	e1a00004 	mov	r0, r4
        132988:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        13298c:	ea6a7ff1 	b	1bd2958 <$free>
        132990:	496d6167 	stmmidb	sp!, {r0, r1, r2, r5, r6, r8, sp, lr}^
        132994:	65204173 	strvs	r4, [r0, -#371]!
        132998:	70656374 	rsbvc	r6, r5, r4, ror r3
        13299c:	204e6f72 	subcs	r6, lr, r2, ror pc
        1329a0:	6d616c69 	stcvsl	12, cr6, [r1, -#420]!
        1329a4:	7a656400 	bvc	1a8b9ac <$CIFlushInput+0x3b0>
        1329a8:	496d6167 	stmmidb	sp!, {r0, r1, r2, r5, r6, r8, sp, lr}^
        1329ac:	65204865 	strvs	r4, [r0, -#2149]!
        1329b0:	69676874 	stmvsdb	r7!, {r2, r4, r5, r6, fp, sp, lr}^
        1329b4:	00000000 	andeq	r0, r0, r0
        1329b8:	496d6167 	stmmidb	sp!, {r0, r1, r2, r5, r6, r8, sp, lr}^
        1329bc:	65204865 	strvs	r4, [r0, -#2149]!
        1329c0:	69676874 	stmvsdb	r7!, {r2, r4, r5, r6, fp, sp, lr}^
        1329c4:	00000000 	andeq	r0, r0, r0
        1329c8:	496d6167 	stmmidb	sp!, {r0, r1, r2, r5, r6, r8, sp, lr}^
        1329cc:	65204261 	strvs	r4, [r0, -#609]!
        1329d0:	73650000 	cmnvc	r5, #0	; 0x0
        1329d4:	5374726f 	cmnpl	r4, #-268435450	; 0xf0000006
        1329d8:	6b652043 	blvs	1a7aaec <TLookupNames::$GetId(void)+0xdf0>
        1329dc:	6f756e74 	swivs	0x00756e74
        1329e0:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: NetPatternizerScalarInit
 * Address: 001329e4
 */
void globals::NetPatternizerScalarInit() {
    /*
        1329e4:	e59d1004 	ldr	r1, [sp, #4]
        1329e8:	e59dc000 	ldr	ip, [sp]
        1329ec:	e5c02010 	strb	r2, [r0, #16]
        1329f0:	e5c03011 	strb	r3, [r0, #17]
        1329f4:	e580100c 	str	r1, [r0, #12]
        1329f8:	e580c008 	str	ip, [r0, #8]
        1329fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NetPatternizerScalarInitFromBP
 * Address: 00132a00
 */
void globals::NetPatternizerScalarInitFromBP() {
    /*
        132a00:	e1a0c00d 	mov	ip, sp
        132a04:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        132a08:	e24cb004 	sub	fp, ip, #4	; 0x4
        132a0c:	e1a0c002 	mov	ip, r2
        132a10:	e592e00c 	ldr	lr, [r2, #12]
        132a14:	e79e2183 	ldr	r2, [lr, r3, lsl #3]
        132a18:	e1a02842 	mov	r2, r2, asr #16
        132a1c:	e08e3183 	add	r3, lr, r3, lsl #3
        132a20:	e5933004 	ldr	r3, [r3, #4]
        132a24:	e59ce03c 	ldr	lr, [ip, #60]
        132a28:	e08e3843 	add	r3, lr, r3, asr #16
        132a2c:	e92d000c 	stmdb	sp!, {r2, r3}
        132a30:	e5bc2074 	ldr	r2, [ip, #116]!
        132a34:	e5923014 	ldr	r3, [r2, #20]
        132a38:	e20330ff 	and	r3, r3, #255	; 0xff
        132a3c:	e5922018 	ldr	r2, [r2, #24]
        132a40:	e20220ff 	and	r2, r2, #255	; 0xff
        132a44:	eb68fba2 	bl	1b718d4 <$NetPatternizerScalarInit>
        132a48:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternCapHeightSLToPat
 * Address: 00132a4c
 */
void globals::NetPatternCapHeightSLToPat() {
    /*
        132a4c:	e1a0c00d 	mov	ip, sp
        132a50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        132a54:	e24cb004 	sub	fp, ip, #4	; 0x4
        132a58:	e59b4020 	ldr	r4, [fp, #32]
        132a5c:	e24dd018 	sub	sp, sp, #24	; 0x18
        132a60:	e3320000 	teq	r2, #0	; 0x0
        132a64:	1a000000 	bne	132a6c <NetPatternCapHeightSLToPat+0x20>
        132a68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        132a6c:	e1a05002 	mov	r5, r2
        132a70:	e28d2008 	add	r2, sp, #8	; 0x8
        132a74:	e1a00001 	mov	r0, r1
        132a78:	e1a01002 	mov	r1, r2
        132a7c:	eb68ffb8 	bl	1b72964 <$SLFindBounds>
        132a80:	e28d1008 	add	r1, sp, #8	; 0x8
        132a84:	e1a0000d 	mov	r0, sp
        132a88:	eb68f350 	bl	1b6f7d0 <$FixedRectSize>
        132a8c:	e59d0004 	ldr	r0, [sp, #4]
        132a90:	e2800801 	add	r0, r0, #65536	; 0x10000
        132a94:	e1a01004 	mov	r1, r4
        132a98:	e58d0004 	str	r0, [sp, #4]
        132a9c:	eb6ab987 	bl	1be10c0 <$FixedDivide>
        132aa0:	e3500801 	cmp	r0, #65536	; 0x10000
        132aa4:	ca000004 	bgt	132abc <NetPatternCapHeightSLToPat+0x70>
        132aa8:	e1a01004 	mov	r1, r4
        132aac:	e59d0004 	ldr	r0, [sp, #4]
        132ab0:	eb6ab982 	bl	1be10c0 <$FixedDivide>
        132ab4:	e3500000 	cmp	r0, #0	; 0x0
        132ab8:	da000009 	ble	132ae4 <NetPatternCapHeightSLToPat+0x98>
        132abc:	e1a01004 	mov	r1, r4
        132ac0:	e59d0004 	ldr	r0, [sp, #4]
        132ac4:	eb6ab97d 	bl	1be10c0 <$FixedDivide>
        132ac8:	e3500801 	cmp	r0, #65536	; 0x10000
        132acc:	c3a00801 	movgt	r0, #65536	; 0x10000
        132ad0:	ca000004 	bgt	132ae8 <NetPatternCapHeightSLToPat+0x9c>
        132ad4:	e1a01004 	mov	r1, r4
        132ad8:	e59d0004 	ldr	r0, [sp, #4]
        132adc:	eb6ab977 	bl	1be10c0 <$FixedDivide>
        132ae0:	ea000000 	b	132ae8 <NetPatternCapHeightSLToPat+0x9c>
        132ae4:	e3a00000 	mov	r0, #0	; 0x0
        132ae8:	e5a50008 	str	r0, [r5, #8]!
        132aec:	eaffffdd 	b	132a68 <NetPatternCapHeightSLToPat+0x1c>
    */
}

/**
 * Symbol: NetPatternizerBaseInitFromBP
 * Address: 00132af0
 */
void globals::NetPatternizerBaseInitFromBP() {
    /*
        132af0:	e1a0c00d 	mov	ip, sp
        132af4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        132af8:	e24cb004 	sub	fp, ip, #4	; 0x4
        132afc:	e1a04000 	mov	r4, r0
        132b00:	e1a03002 	mov	r3, r2
        132b04:	e1a02001 	mov	r2, r1
        132b08:	e28f1f02 	add	r1, pc, #8	; 0x8
        132b0c:	eb68fb71 	bl	1b718d8 <$NetPatternizerScalarInitFromBP>
        132b10:	e1a00004 	mov	r0, r4
        132b14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        132b18:	42617365 	rsbmi	r7, r1, #-1811939327	; 0x94000001
        132b1c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: NetPatternBaseSLToPat
 * Address: 00132b20
 */
void globals::NetPatternBaseSLToPat() {
    /*
        132b20:	e1a0c00d 	mov	ip, sp
        132b24:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        132b28:	e24cb004 	sub	fp, ip, #4	; 0x4
        132b2c:	e1a05000 	mov	r5, r0
        132b30:	e1a04003 	mov	r4, r3
        132b34:	e59b0010 	ldr	r0, [fp, #16]
        132b38:	e59b300c 	ldr	r3, [fp, #12]
        132b3c:	e59b6004 	ldr	r6, [fp, #4]
        132b40:	e24dd010 	sub	sp, sp, #16	; 0x10
        132b44:	e3320000 	teq	r2, #0	; 0x0
        132b48:	0a000051 	beq	132c94 <NetPatternBaseSLToPat+0x174>
        132b4c:	e1a07002 	mov	r7, r2
        132b50:	e5952074 	ldr	r2, [r5, #116]
        132b54:	e5922040 	ldr	r2, [r2, #64]
        132b58:	e31200ff 	tst	r2, #255	; 0xff
        132b5c:	11a04003 	movne	r4, r3
        132b60:	11a06000 	movne	r6, r0
        132b64:	e1a00001 	mov	r0, r1
        132b68:	e1a0100d 	mov	r1, sp
        132b6c:	eb68ff7c 	bl	1b72964 <$SLFindBounds>
        132b70:	e5b50074 	ldr	r0, [r5, #116]!
        132b74:	e590003c 	ldr	r0, [r0, #60]
        132b78:	e31000ff 	tst	r0, #255	; 0xff
        132b7c:	e3a05033 	mov	r5, #51	; 0x33
        132b80:	e2855cb3 	add	r5, r5, #45824	; 0xb300
        132b84:	e59d000c 	ldr	r0, [sp, #12]
        132b88:	0a00001f 	beq	132c0c <NetPatternBaseSLToPat+0xec>
        132b8c:	e0440000 	sub	r0, r4, r0
        132b90:	e1a01006 	mov	r1, r6
        132b94:	eb6ab949 	bl	1be10c0 <$FixedDivide>
        132b98:	e2800902 	add	r0, r0, #32768	; 0x8000
        132b9c:	e1a01005 	mov	r1, r5
        132ba0:	eb6ab947 	bl	1be10c4 <$FixedMultiply>
        132ba4:	e3500801 	cmp	r0, #65536	; 0x10000
        132ba8:	ca000008 	bgt	132bd0 <NetPatternBaseSLToPat+0xb0>
        132bac:	e59d000c 	ldr	r0, [sp, #12]
        132bb0:	e0440000 	sub	r0, r4, r0
        132bb4:	e1a01006 	mov	r1, r6
        132bb8:	eb6ab940 	bl	1be10c0 <$FixedDivide>
        132bbc:	e2800902 	add	r0, r0, #32768	; 0x8000
        132bc0:	e1a01005 	mov	r1, r5
        132bc4:	eb6ab93e 	bl	1be10c4 <$FixedMultiply>
        132bc8:	e3500000 	cmp	r0, #0	; 0x0
        132bcc:	da00000c 	ble	132c04 <NetPatternBaseSLToPat+0xe4>
        132bd0:	e59d000c 	ldr	r0, [sp, #12]
        132bd4:	e0440000 	sub	r0, r4, r0
        132bd8:	e1a01006 	mov	r1, r6
        132bdc:	eb6ab937 	bl	1be10c0 <$FixedDivide>
        132be0:	e2800902 	add	r0, r0, #32768	; 0x8000
        132be4:	e1a01005 	mov	r1, r5
        132be8:	eb6ab935 	bl	1be10c4 <$FixedMultiply>
        132bec:	e3500801 	cmp	r0, #65536	; 0x10000
        132bf0:	d59d000c 	ldrle	r0, [sp, #12]
        132bf4:	d0440000 	suble	r0, r4, r0
        132bf8:	da00001f 	ble	132c7c <NetPatternBaseSLToPat+0x15c>
        132bfc:	e3a00801 	mov	r0, #65536	; 0x10000
        132c00:	ea000022 	b	132c90 <NetPatternBaseSLToPat+0x170>
        132c04:	e3a00000 	mov	r0, #0	; 0x0
        132c08:	ea000020 	b	132c90 <NetPatternBaseSLToPat+0x170>
        132c0c:	e0400004 	sub	r0, r0, r4
        132c10:	e1a01006 	mov	r1, r6
        132c14:	eb6ab929 	bl	1be10c0 <$FixedDivide>
        132c18:	e2800902 	add	r0, r0, #32768	; 0x8000
        132c1c:	e1a01005 	mov	r1, r5
        132c20:	eb6ab927 	bl	1be10c4 <$FixedMultiply>
        132c24:	e3500801 	cmp	r0, #65536	; 0x10000
        132c28:	ca000008 	bgt	132c50 <NetPatternBaseSLToPat+0x130>
        132c2c:	e59d000c 	ldr	r0, [sp, #12]
        132c30:	e0400004 	sub	r0, r0, r4
        132c34:	e1a01006 	mov	r1, r6
        132c38:	eb6ab920 	bl	1be10c0 <$FixedDivide>
        132c3c:	e2800902 	add	r0, r0, #32768	; 0x8000
        132c40:	e1a01005 	mov	r1, r5
        132c44:	eb6ab91e 	bl	1be10c4 <$FixedMultiply>
        132c48:	e3500000 	cmp	r0, #0	; 0x0
        132c4c:	daffffec 	ble	132c04 <NetPatternBaseSLToPat+0xe4>
        132c50:	e59d000c 	ldr	r0, [sp, #12]
        132c54:	e0400004 	sub	r0, r0, r4
        132c58:	e1a01006 	mov	r1, r6
        132c5c:	eb6ab917 	bl	1be10c0 <$FixedDivide>
        132c60:	e2800902 	add	r0, r0, #32768	; 0x8000
        132c64:	e1a01005 	mov	r1, r5
        132c68:	eb6ab915 	bl	1be10c4 <$FixedMultiply>
        132c6c:	e3500801 	cmp	r0, #65536	; 0x10000
        132c70:	caffffe1 	bgt	132bfc <NetPatternBaseSLToPat+0xdc>
        132c74:	e59d000c 	ldr	r0, [sp, #12]
        132c78:	e0400004 	sub	r0, r0, r4
        132c7c:	e1a01006 	mov	r1, r6
        132c80:	eb6ab90e 	bl	1be10c0 <$FixedDivide>
        132c84:	e2800902 	add	r0, r0, #32768	; 0x8000
        132c88:	e1a01005 	mov	r1, r5
        132c8c:	eb6ab90c 	bl	1be10c4 <$FixedMultiply>
        132c90:	e5a70008 	str	r0, [r7, #8]!
        132c94:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternizerHeightInitFromBP
 * Address: 00132c98
 */
void globals::NetPatternizerHeightInitFromBP() {
    /*
        132c98:	e1a0c00d 	mov	ip, sp
        132c9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        132ca0:	e24cb004 	sub	fp, ip, #4	; 0x4
        132ca4:	e1a04000 	mov	r4, r0
        132ca8:	e1a03002 	mov	r3, r2
        132cac:	e1a02001 	mov	r2, r1
        132cb0:	e28f1f02 	add	r1, pc, #8	; 0x8
        132cb4:	eb68fb07 	bl	1b718d8 <$NetPatternizerScalarInitFromBP>
        132cb8:	e1a00004 	mov	r0, r4
        132cbc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        132cc0:	48656967 	stmmida	r5!, {r0, r1, r2, r5, r6, r8, fp, sp, lr}^
        132cc4:	68740000 	ldmvsda	r4!, {}^
    */
}

/**
 * Symbol: NetPatternizerCapHeightInitFromBP
 * Address: 00132cc8
 */
void globals::NetPatternizerCapHeightInitFromBP() {
    /*
        132cc8:	e1a0c00d 	mov	ip, sp
        132ccc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        132cd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        132cd4:	e1a04000 	mov	r4, r0
        132cd8:	e1a03002 	mov	r3, r2
        132cdc:	e1a02001 	mov	r2, r1
        132ce0:	e28f1f02 	add	r1, pc, #8	; 0x8
        132ce4:	eb68fafb 	bl	1b718d8 <$NetPatternizerScalarInitFromBP>
        132ce8:	e1a00004 	mov	r0, r4
        132cec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        132cf0:	43617048 	cmnmi	r1, #72	; 0x48
        132cf4:	65696768 	strvsb	r6, [r9, -#1896]!
        132cf8:	74000000 	strvc	r0, [r0]
    */
}

/**
 * Symbol: NetPatternizerCountInitFromBP
 * Address: 00132cfc
 */
void globals::NetPatternizerCountInitFromBP() {
    /*
        132cfc:	e1a0c00d 	mov	ip, sp
        132d00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        132d04:	e24cb004 	sub	fp, ip, #4	; 0x4
        132d08:	e1a04000 	mov	r4, r0
        132d0c:	e1a03002 	mov	r3, r2
        132d10:	e1a02001 	mov	r2, r1
        132d14:	e28f1f02 	add	r1, pc, #8	; 0x8
        132d18:	eb68faee 	bl	1b718d8 <$NetPatternizerScalarInitFromBP>
        132d1c:	e1a00004 	mov	r0, r4
        132d20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        132d24:	5374726f 	cmnpl	r4, #-268435450	; 0xf0000006
        132d28:	6b652043 	blvs	1a7ae3c <TResponseManager::$HandleReleaseTimer(TTimerMessage *)+0xc0>
        132d2c:	6f756e74 	swivs	0x00756e74
        132d30:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: NetPatternCountSLToPat
 * Address: 00132d34
 */
void globals::NetPatternCountSLToPat() {
    /*
        132d34:	e3320000 	teq	r2, #0	; 0x0
        132d38:	01a0f00e 	moveq	pc, lr
        132d3c:	e1a0c00d 	mov	ip, sp
        132d40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        132d44:	e24cb004 	sub	fp, ip, #4	; 0x4
        132d48:	e1a04002 	mov	r4, r2
        132d4c:	e5920000 	ldr	r0, [r2]
        132d50:	e5900008 	ldr	r0, [r0, #8]
        132d54:	e5911000 	ldr	r1, [r1]
        132d58:	e1a01841 	mov	r1, r1, asr #16
        132d5c:	e1500001 	cmp	r0, r1
        132d60:	91a02000 	movls	r2, r0
        132d64:	81a02001 	movhi	r2, r1
        132d68:	e1a01800 	mov	r1, r0, lsl #16
        132d6c:	e1a00802 	mov	r0, r2, lsl #16
        132d70:	eb6ab8d2 	bl	1be10c0 <$FixedDivide>
        132d74:	e5a40008 	str	r0, [r4, #8]!
        132d78:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternizerScalarDestroy
 * Address: 00132d7c
 */
void globals::NetPatternizerScalarDestroy() {
    /*
        132d7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NetPatternizerScalarGraph
 * Address: 00132d80
 */
void globals::NetPatternizerScalarGraph() {
    /*
        132d80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NetPatternScalarCreate
 * Address: 00132d84
 */
void globals::NetPatternScalarCreate() {
    /*
        132d84:	e1a0c00d 	mov	ip, sp
        132d88:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        132d8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        132d90:	e1a04000 	mov	r4, r0
        132d94:	e59f104c 	ldr	r1, [pc, #4c]	; 132de8 <NetPatternScalarCreate+0x64>
        132d98:	e3a0000c 	mov	r0, #12	; 0xc
        132d9c:	eb6abce6 	bl	1be213c <$NewNamedPtr>
        132da0:	e59f5044 	ldr	r5, [pc, #44]	; 132dec <NetPatternScalarCreate+0x68>
        132da4:	e5850000 	str	r0, [r5]
        132da8:	e3300000 	teq	r0, #0	; 0x0
        132dac:	11a05000 	movne	r5, r0
        132db0:	1a000005 	bne	132dcc <NetPatternScalarCreate+0x48>
        132db4:	e59f0034 	ldr	r0, [pc, #34]	; 132df0 <NetPatternScalarCreate+0x6c>
        132db8:	e5900000 	ldr	r0, [r0]
        132dbc:	e28f1f0c 	add	r1, pc, #48	; 0x30
        132dc0:	e3a02000 	mov	r2, #0	; 0x0
        132dc4:	eb6ac0f4 	bl	1be319c <$Throw>
        132dc8:	e5955000 	ldr	r5, [r5]
        132dcc:	e1a01004 	mov	r1, r4
        132dd0:	e1a00005 	mov	r0, r5
        132dd4:	eb68f69b 	bl	1b70848 <$NetPatternInit_>
        132dd8:	e3a00801 	mov	r0, #65536	; 0x10000
        132ddc:	e5850008 	str	r0, [r5, #8]
        132de0:	e1a00005 	mov	r0, r5
        132de4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        132de8:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        132dec:	0c101950 	ldceq	9, cr1, [r0], -#320
        132df0:	003712cc 	eoreqs	r1, r7, ip, asr #5
        132df4:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: NetPatternScalarSetInput
 * Address: 00132df8
 */
void globals::NetPatternScalarSetInput() {
    /*
        132df8:	e1a0c00d 	mov	ip, sp
        132dfc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        132e00:	e24cb004 	sub	fp, ip, #4	; 0x4
        132e04:	e1a04000 	mov	r4, r0
        132e08:	e1a02000 	mov	r2, r0
        132e0c:	e5905000 	ldr	r5, [r0]
        132e10:	e5950008 	ldr	r0, [r5, #8]
        132e14:	e3300000 	teq	r0, #0	; 0x0
        132e18:	0a000017 	beq	132e7c <NetPatternScalarSetInput+0x84>
        132e1c:	e3500001 	cmp	r0, #1	; 0x1
        132e20:	9a00000f 	bls	132e64 <NetPatternScalarSetInput+0x6c>
        132e24:	e5d53011 	ldrb	r3, [r5, #17]
        132e28:	e92d0008 	stmdb	sp!, {r3}
        132e2c:	e3a01ed7 	mov	r1, #3440	; 0xd70
        132e30:	e2811a0f 	add	r1, r1, #61440	; 0xf000
        132e34:	e0811800 	add	r1, r1, r0, lsl #16
        132e38:	e5b20008 	ldr	r0, [r2, #8]!
        132e3c:	eb6ab8a0 	bl	1be10c4 <$FixedMultiply>
        132e40:	e1a00840 	mov	r0, r0, asr #16
        132e44:	e1a02800 	mov	r2, r0, lsl #16
        132e48:	e1a02842 	mov	r2, r2, asr #16
        132e4c:	e5d53010 	ldrb	r3, [r5, #16]
        132e50:	e5b51008 	ldr	r1, [r5, #8]!
        132e54:	e5950004 	ldr	r0, [r5, #4]
        132e58:	eb68f684 	bl	1b70870 <$NetPatternSetNth>
        132e5c:	e28dd004 	add	sp, sp, #4	; 0x4
        132e60:	ea000005 	b	132e7c <NetPatternScalarSetInput+0x84>
        132e64:	e3a01cff 	mov	r1, #65280	; 0xff00
        132e68:	e5b20008 	ldr	r0, [r2, #8]!
        132e6c:	eb6ab894 	bl	1be10c4 <$FixedMultiply>
        132e70:	e1a00440 	mov	r0, r0, asr #8
        132e74:	e5b5100c 	ldr	r1, [r5, #12]!
        132e78:	e5c10000 	strb	r0, [r1]
        132e7c:	e5940000 	ldr	r0, [r4]
        132e80:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        132e84:	ea68fa91 	b	1b718d0 <$NetPatternizerScalarGraph>
    */
}

/**
 * Symbol: NetPatternScalarDestroy
 * Address: 00132e88
 */
void globals::NetPatternScalarDestroy() {
    /*
        132e88:	e3300000 	teq	r0, #0	; 0x0
        132e8c:	1a6a7eb1 	bne	1bd2958 <$free>
        132e90:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NetPatternizerAspectNormInitFromBP
 * Address: 00132e94
 */
void globals::NetPatternizerAspectNormInitFromBP() {
    /*
        132e94:	e1a0c00d 	mov	ip, sp
        132e98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        132e9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        132ea0:	e1a04000 	mov	r4, r0
        132ea4:	e1a03002 	mov	r3, r2
        132ea8:	e1a02001 	mov	r2, r1
        132eac:	e28f1f02 	add	r1, pc, #8	; 0x8
        132eb0:	eb68fa88 	bl	1b718d8 <$NetPatternizerScalarInitFromBP>
        132eb4:	e1a00004 	mov	r0, r4
        132eb8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        132ebc:	41737065 	cmnmi	r3, r5, rrx
        132ec0:	63744e6f 	cmnvs	r4, #1776	; 0x6f0
        132ec4:	726d0000 	rsbvc	r0, sp, #0	; 0x0
    */
}

/**
 * Symbol: NetPatternAspectNormSLToPat
 * Address: 00132ec8
 */
void globals::NetPatternAspectNormSLToPat() {
    /*
        132ec8:	e1a0c00d 	mov	ip, sp
        132ecc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        132ed0:	e24cb004 	sub	fp, ip, #4	; 0x4
        132ed4:	e24dd018 	sub	sp, sp, #24	; 0x18
        132ed8:	e3320000 	teq	r2, #0	; 0x0
        132edc:	1a000000 	bne	132ee4 <NetPatternAspectNormSLToPat+0x1c>
        132ee0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        132ee4:	e1a04002 	mov	r4, r2
        132ee8:	e28d2008 	add	r2, sp, #8	; 0x8
        132eec:	e1a00001 	mov	r0, r1
        132ef0:	e1a01002 	mov	r1, r2
        132ef4:	eb68fe9a 	bl	1b72964 <$SLFindBounds>
        132ef8:	e28d1008 	add	r1, sp, #8	; 0x8
        132efc:	e1a0000d 	mov	r0, sp
        132f00:	eb68f232 	bl	1b6f7d0 <$FixedRectSize>
        132f04:	e59d0000 	ldr	r0, [sp]
        132f08:	e2800801 	add	r0, r0, #65536	; 0x10000
        132f0c:	e58d0000 	str	r0, [sp]
        132f10:	e59d0004 	ldr	r0, [sp, #4]
        132f14:	e2800801 	add	r0, r0, #65536	; 0x10000
        132f18:	e58d0004 	str	r0, [sp, #4]
        132f1c:	e1a01000 	mov	r1, r0
        132f20:	e59d0000 	ldr	r0, [sp]
        132f24:	eb6ab865 	bl	1be10c0 <$FixedDivide>
        132f28:	e5840008 	str	r0, [r4, #8]
        132f2c:	e3500906 	cmp	r0, #98304	; 0x18000
        132f30:	c3a00906 	movgt	r0, #98304	; 0x18000
        132f34:	c5840008 	strgt	r0, [r4, #8]
        132f38:	e3a01906 	mov	r1, #98304	; 0x18000
        132f3c:	e5940008 	ldr	r0, [r4, #8]
        132f40:	eb6ab85e 	bl	1be10c0 <$FixedDivide>
        132f44:	e5a40008 	str	r0, [r4, #8]!
        132f48:	eaffffe4 	b	132ee0 <NetPatternAspectNormSLToPat+0x18>
    */
}

/**
 * Symbol: NetPatternHeightSLToPat
 * Address: 00132f4c
 */
void globals::NetPatternHeightSLToPat() {
    /*
        132f4c:	e1a0c00d 	mov	ip, sp
        132f50:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        132f54:	e24cb004 	sub	fp, ip, #4	; 0x4
        132f58:	e1a04000 	mov	r4, r0
        132f5c:	e59b0010 	ldr	r0, [fp, #16]
        132f60:	e59b5004 	ldr	r5, [fp, #4]
        132f64:	e24dd018 	sub	sp, sp, #24	; 0x18
        132f68:	e3320000 	teq	r2, #0	; 0x0
        132f6c:	0a00004a 	beq	13309c <NetPatternHeightSLToPat+0x150>
        132f70:	e1a06002 	mov	r6, r2
        132f74:	e5942074 	ldr	r2, [r4, #116]
        132f78:	e5922040 	ldr	r2, [r2, #64]
        132f7c:	e31200ff 	tst	r2, #255	; 0xff
        132f80:	11a05000 	movne	r5, r0
        132f84:	e28d2008 	add	r2, sp, #8	; 0x8
        132f88:	e1a00001 	mov	r0, r1
        132f8c:	e1a01002 	mov	r1, r2
        132f90:	eb68fe73 	bl	1b72964 <$SLFindBounds>
        132f94:	e28d1008 	add	r1, sp, #8	; 0x8
        132f98:	e1a0000d 	mov	r0, sp
        132f9c:	eb68f20b 	bl	1b6f7d0 <$FixedRectSize>
        132fa0:	e59d0000 	ldr	r0, [sp]
        132fa4:	e2800801 	add	r0, r0, #65536	; 0x10000
        132fa8:	e58d0000 	str	r0, [sp]
        132fac:	e59d0004 	ldr	r0, [sp, #4]
        132fb0:	e2800801 	add	r0, r0, #65536	; 0x10000
        132fb4:	e58d0004 	str	r0, [sp, #4]
        132fb8:	e5b40074 	ldr	r0, [r4, #116]!
        132fbc:	e590003c 	ldr	r0, [r0, #60]
        132fc0:	e31000ff 	tst	r0, #255	; 0xff
        132fc4:	0a000020 	beq	13304c <NetPatternHeightSLToPat+0x100>
        132fc8:	e1a01005 	mov	r1, r5
        132fcc:	e59d0004 	ldr	r0, [sp, #4]
        132fd0:	eb6ab83a 	bl	1be10c0 <$FixedDivide>
        132fd4:	e3a040cc 	mov	r4, #204	; 0xcc
        132fd8:	e2844b33 	add	r4, r4, #52224	; 0xcc00
        132fdc:	e1a01004 	mov	r1, r4
        132fe0:	eb6ab837 	bl	1be10c4 <$FixedMultiply>
        132fe4:	e3500801 	cmp	r0, #65536	; 0x10000
        132fe8:	ca000006 	bgt	133008 <NetPatternHeightSLToPat+0xbc>
        132fec:	e1a01005 	mov	r1, r5
        132ff0:	e59d0004 	ldr	r0, [sp, #4]
        132ff4:	eb6ab831 	bl	1be10c0 <$FixedDivide>
        132ff8:	e1a01004 	mov	r1, r4
        132ffc:	eb6ab830 	bl	1be10c4 <$FixedMultiply>
        133000:	e3500000 	cmp	r0, #0	; 0x0
        133004:	da00000e 	ble	133044 <NetPatternHeightSLToPat+0xf8>
        133008:	e1a01005 	mov	r1, r5
        13300c:	e59d0004 	ldr	r0, [sp, #4]
        133010:	eb6ab82a 	bl	1be10c0 <$FixedDivide>
        133014:	e1a01004 	mov	r1, r4
        133018:	eb6ab829 	bl	1be10c4 <$FixedMultiply>
        13301c:	e3500801 	cmp	r0, #65536	; 0x10000
        133020:	da000001 	ble	13302c <NetPatternHeightSLToPat+0xe0>
        133024:	e3a00801 	mov	r0, #65536	; 0x10000
        133028:	ea00001a 	b	133098 <NetPatternHeightSLToPat+0x14c>
        13302c:	e1a01005 	mov	r1, r5
        133030:	e59d0004 	ldr	r0, [sp, #4]
        133034:	eb6ab821 	bl	1be10c0 <$FixedDivide>
        133038:	e1a01004 	mov	r1, r4
        13303c:	eb6ab820 	bl	1be10c4 <$FixedMultiply>
        133040:	ea000014 	b	133098 <NetPatternHeightSLToPat+0x14c>
        133044:	e3a00000 	mov	r0, #0	; 0x0
        133048:	ea000012 	b	133098 <NetPatternHeightSLToPat+0x14c>
        13304c:	e1a01085 	mov	r1, r5, lsl #1
        133050:	e1a04001 	mov	r4, r1
        133054:	e59d0004 	ldr	r0, [sp, #4]
        133058:	eb6ab818 	bl	1be10c0 <$FixedDivide>
        13305c:	e3500801 	cmp	r0, #65536	; 0x10000
        133060:	ca000004 	bgt	133078 <NetPatternHeightSLToPat+0x12c>
        133064:	e1a01004 	mov	r1, r4
        133068:	e59d0004 	ldr	r0, [sp, #4]
        13306c:	eb6ab813 	bl	1be10c0 <$FixedDivide>
        133070:	e3500000 	cmp	r0, #0	; 0x0
        133074:	dafffff2 	ble	133044 <NetPatternHeightSLToPat+0xf8>
        133078:	e1a01004 	mov	r1, r4
        13307c:	e59d0004 	ldr	r0, [sp, #4]
        133080:	eb6ab80e 	bl	1be10c0 <$FixedDivide>
        133084:	e3500801 	cmp	r0, #65536	; 0x10000
        133088:	caffffe5 	bgt	133024 <NetPatternHeightSLToPat+0xd8>
        13308c:	e1a01004 	mov	r1, r4
        133090:	e59d0004 	ldr	r0, [sp, #4]
        133094:	eb6ab809 	bl	1be10c0 <$FixedDivide>
        133098:	e5a60008 	str	r0, [r6, #8]!
        13309c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1330a0:	50656e55 	rsbpl	r6, r5, r5, asr lr
        1330a4:	70537472 	subvcs	r7, r3, r2, ror r4
        1330a8:	6f6b6500 	swivs	0x006b6500
    */
}

/**
 * Symbol: NetPatternizerStrokeInit
 * Address: 001330ac
 */
void globals::NetPatternizerStrokeInit() {
    /*
        1330ac:	e92d4000 	stmdb	sp!, {lr}
        1330b0:	e59dc008 	ldr	ip, [sp, #8]
        1330b4:	e59de004 	ldr	lr, [sp, #4]
        1330b8:	e5c01008 	strb	r1, [r0, #8]
        1330bc:	e5c02009 	strb	r2, [r0, #9]
        1330c0:	e280000c 	add	r0, r0, #12	; 0xc
        1330c4:	e8804008 	stmia	r0, {r3, lr}
        1330c8:	e580c008 	str	ip, [r0, #8]
        1330cc:	e240000c 	sub	r0, r0, #12	; 0xc
        1330d0:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: NetPatternizerStrokeInitFromBP
 * Address: 001330d4
 */
void globals::NetPatternizerStrokeInitFromBP() {
    /*
        1330d4:	e1a0c00d 	mov	ip, sp
        1330d8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1330dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1330e0:	e591300c 	ldr	r3, [r1, #12]
        1330e4:	e793c182 	ldr	ip, [r3, r2, lsl #3]
        1330e8:	e1a0c84c 	mov	ip, ip, asr #16
        1330ec:	e0833182 	add	r3, r3, r2, lsl #3
        1330f0:	e5932002 	ldr	r2, [r3, #2]
        1330f4:	e1a02842 	mov	r2, r2, asr #16
        1330f8:	e5933004 	ldr	r3, [r3, #4]
        1330fc:	e591e03c 	ldr	lr, [r1, #60]
        133100:	e08e3843 	add	r3, lr, r3, asr #16
        133104:	e92d000c 	stmdb	sp!, {r2, r3}
        133108:	e5911074 	ldr	r1, [r1, #116]
        13310c:	e5912014 	ldr	r2, [r1, #20]
        133110:	e20220ff 	and	r2, r2, #255	; 0xff
        133114:	e5911018 	ldr	r1, [r1, #24]
        133118:	e20110ff 	and	r1, r1, #255	; 0xff
        13311c:	e1a0300c 	mov	r3, ip
        133120:	eb68f9ef 	bl	1b718e4 <$NetPatternizerStrokeInit>
        133124:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternizerStrokeDestroy
 * Address: 00133128
 */
void globals::NetPatternizerStrokeDestroy() {
    /*
        133128:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NetPatternizerStrokeGraph
 * Address: 0013312c
 */
void globals::NetPatternizerStrokeGraph() {
    /*
        13312c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NetPatternStrokeCreate
 * Address: 00133130
 */
void globals::NetPatternStrokeCreate() {
    /*
        133130:	e1a0c00d 	mov	ip, sp
        133134:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        133138:	e24cb004 	sub	fp, ip, #4	; 0x4
        13313c:	e1a04000 	mov	r4, r0
        133140:	e3a00000 	mov	r0, #0	; 0x0
        133144:	e52d0004 	str	r0, [sp, -#4]!
        133148:	e1a08004 	mov	r8, r4
        13314c:	e3a09000 	mov	r9, #0	; 0x0
        133150:	e52d906c 	str	r9, [sp, -#108]!
        133154:	e28d0008 	add	r0, sp, #8	; 0x8
        133158:	eb69fe05 	bl	1bb2974 <$setjmp>
        13315c:	e3300000 	teq	r0, #0	; 0x0
        133160:	1a00002c 	bne	133218 <NetPatternStrokeCreate+0xe8>
        133164:	e1a0000d 	mov	r0, sp
        133168:	eb6ab3c3 	bl	1be007c <$AddExceptionHandler>
        13316c:	e59f5094 	ldr	r5, [pc, #94]	; 133208 <NetPatternStrokeCreate+0xd8>
        133170:	e1a01005 	mov	r1, r5
        133174:	e3a0000c 	mov	r0, #12	; 0xc
        133178:	eb6abbef 	bl	1be213c <$NewNamedPtr>
        13317c:	e59f6088 	ldr	r6, [pc, #88]	; 13320c <NetPatternStrokeCreate+0xdc>
        133180:	e5860000 	str	r0, [r6]
        133184:	e59f7084 	ldr	r7, [pc, #84]	; 133210 <NetPatternStrokeCreate+0xe0>
        133188:	e3300000 	teq	r0, #0	; 0x0
        13318c:	1a000004 	bne	1331a4 <NetPatternStrokeCreate+0x74>
        133190:	e5970000 	ldr	r0, [r7]
        133194:	e28f1f1e 	add	r1, pc, #120	; 0x78
        133198:	e3a02000 	mov	r2, #0	; 0x0
        13319c:	eb6abffe 	bl	1be319c <$Throw>
        1331a0:	e5960000 	ldr	r0, [r6]
        1331a4:	e58d006c 	str	r0, [sp, #108]
        1331a8:	e1a01004 	mov	r1, r4
        1331ac:	e59d006c 	ldr	r0, [sp, #108]
        1331b0:	eb68f5a4 	bl	1b70848 <$NetPatternInit_>
        1331b4:	e59d006c 	ldr	r0, [sp, #108]
        1331b8:	e5a09008 	str	r9, [r0, #8]!
        1331bc:	e2888008 	add	r8, r8, #8	; 0x8
        1331c0:	e9b80003 	ldmib	r8!, {r0, r1}
        1331c4:	e0000091 	mul	r0, r1, r0
        1331c8:	e1a01005 	mov	r1, r5
        1331cc:	eb6abbda 	bl	1be213c <$NewNamedPtr>
        1331d0:	e5860000 	str	r0, [r6]
        1331d4:	e3300000 	teq	r0, #0	; 0x0
        1331d8:	1a000004 	bne	1331f0 <NetPatternStrokeCreate+0xc0>
        1331dc:	e5970000 	ldr	r0, [r7]
        1331e0:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        1331e4:	e3a02000 	mov	r2, #0	; 0x0
        1331e8:	eb6abfeb 	bl	1be319c <$Throw>
        1331ec:	e5960000 	ldr	r0, [r6]
        1331f0:	e59d106c 	ldr	r1, [sp, #108]
        1331f4:	e5a10008 	str	r0, [r1, #8]!
        1331f8:	e1a0000d 	mov	r0, sp
        1331fc:	eb6ab7ad 	bl	1be10b8 <$ExitHandler>
        133200:	e5bd006c 	ldr	r0, [sp, #108]!
        133204:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        133208:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        13320c:	0c101950 	ldceq	9, cr1, [r0], -#320
        133210:	003712cc 	eoreqs	r1, r7, ip, asr #5
        133214:	00000000 	andeq	r0, r0, r0
        133218:	e59d006c 	ldr	r0, [sp, #108]
        13321c:	eb68f595 	bl	1b70878 <$NetPatternStrokeDestroy>
        133220:	e1a0000d 	mov	r0, sp
        133224:	eb6abbca 	bl	1be2154 <$NextHandler>
        133228:	eafffffa 	b	133218 <NetPatternStrokeCreate+0xe8>
    */
}

/**
 * Symbol: NetPatternStrokePUDSLToPat
 * Address: 0013322c
 */
void globals::NetPatternStrokePUDSLToPat() {
    /*
        13322c:	e1a0c00d 	mov	ip, sp
        133230:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        133234:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        133238:	e24cb014 	sub	fp, ip, #20	; 0x14
        13323c:	e24dd040 	sub	sp, sp, #64	; 0x40
        133240:	e3a00000 	mov	r0, #0	; 0x0
        133244:	e58d000c 	str	r0, [sp, #12]
        133248:	e3a00000 	mov	r0, #0	; 0x0
        13324c:	e58d0008 	str	r0, [sp, #8]
        133250:	e3a00000 	mov	r0, #0	; 0x0
        133254:	e58d0004 	str	r0, [sp, #4]
        133258:	e3a00000 	mov	r0, #0	; 0x0
        13325c:	e58d0000 	str	r0, [sp]
        133260:	e3320000 	teq	r2, #0	; 0x0
        133264:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        133268:	e1a0a002 	mov	sl, r2
        13326c:	e3a00000 	mov	r0, #0	; 0x0
        133270:	e3a04000 	mov	r4, #0	; 0x0
        133274:	e5928000 	ldr	r8, [r2]
        133278:	e59b1008 	ldr	r1, [fp, #8]
        13327c:	e5912000 	ldr	r2, [r1]
        133280:	e1a02842 	mov	r2, r2, asr #16
        133284:	e3520000 	cmp	r2, #0	; 0x0
        133288:	da000007 	ble	1332ac <NetPatternStrokePUDSLToPat+0x80>
        13328c:	e59b1008 	ldr	r1, [fp, #8]
        133290:	e5911004 	ldr	r1, [r1, #4]
        133294:	e7913100 	ldr	r3, [r1, r0, lsl #2]
        133298:	e5933000 	ldr	r3, [r3]
        13329c:	e0844843 	add	r4, r4, r3, asr #16
        1332a0:	e2800001 	add	r0, r0, #1	; 0x1
        1332a4:	e1500002 	cmp	r0, r2
        1332a8:	bafffff9 	blt	133294 <NetPatternStrokePUDSLToPat+0x68>
        1332ac:	e3a00000 	mov	r0, #0	; 0x0
        1332b0:	e52d0070 	str	r0, [sp, -#112]!
        1332b4:	e58d0004 	str	r0, [sp, #4]
        1332b8:	e28d000c 	add	r0, sp, #12	; 0xc
        1332bc:	eb69fdac 	bl	1bb2974 <$setjmp>
        1332c0:	e3300000 	teq	r0, #0	; 0x0
        1332c4:	1a000136 	bne	1337a4 <NetPatternStrokePUDSLToPat+0x578>
        1332c8:	e28d0004 	add	r0, sp, #4	; 0x4
        1332cc:	eb6ab36a 	bl	1be007c <$AddExceptionHandler>
        1332d0:	e0840104 	add	r0, r4, r4, lsl #2
        1332d4:	e0800184 	add	r0, r0, r4, lsl #3
        1332d8:	e59f11dc 	ldr	r1, [pc, #1dc]	; 1334bc <NetPatternStrokePUDSLToPat+0x290>
        1332dc:	eb6abb96 	bl	1be213c <$NewNamedPtr>
        1332e0:	e59f51d8 	ldr	r5, [pc, #1d8]	; 1334c0 <NetPatternStrokePUDSLToPat+0x294>
        1332e4:	e5850000 	str	r0, [r5]
        1332e8:	e3300000 	teq	r0, #0	; 0x0
        1332ec:	1a000005 	bne	133308 <NetPatternStrokePUDSLToPat+0xdc>
        1332f0:	e59f01cc 	ldr	r0, [pc, #1cc]	; 1334c4 <NetPatternStrokePUDSLToPat+0x298>
        1332f4:	e5900000 	ldr	r0, [r0]
        1332f8:	e28f1f72 	add	r1, pc, #456	; 0x1c8
        1332fc:	e3a02000 	mov	r2, #0	; 0x0
        133300:	eb6abfa5 	bl	1be319c <$Throw>
        133304:	e5950000 	ldr	r0, [r5]
        133308:	e58d007c 	str	r0, [sp, #124]
        13330c:	e59d007c 	ldr	r0, [sp, #124]
        133310:	e0800104 	add	r0, r0, r4, lsl #2
        133314:	e58d0078 	str	r0, [sp, #120]
        133318:	e59d0078 	ldr	r0, [sp, #120]
        13331c:	e0800104 	add	r0, r0, r4, lsl #2
        133320:	e58d0070 	str	r0, [sp, #112]
        133324:	e59d0070 	ldr	r0, [sp, #112]
        133328:	e0800104 	add	r0, r0, r4, lsl #2
        13332c:	e58d0074 	str	r0, [sp, #116]
        133330:	e3a01000 	mov	r1, #0	; 0x0
        133334:	e3a05000 	mov	r5, #0	; 0x0
        133338:	e58d1098 	str	r1, [sp, #152]
        13333c:	e58d1080 	str	r1, [sp, #128]
        133340:	e59b0008 	ldr	r0, [fp, #8]
        133344:	e5900000 	ldr	r0, [r0]
        133348:	e1a00840 	mov	r0, r0, asr #16
        13334c:	e3500000 	cmp	r0, #0	; 0x0
        133350:	da000042 	ble	133460 <NetPatternStrokePUDSLToPat+0x234>
        133354:	e59b0008 	ldr	r0, [fp, #8]
        133358:	e5900004 	ldr	r0, [r0, #4]
        13335c:	e59d1080 	ldr	r1, [sp, #128]
        133360:	e7907101 	ldr	r7, [r0, r1, lsl #2]
        133364:	e3a06000 	mov	r6, #0	; 0x0
        133368:	e5970000 	ldr	r0, [r7]
        13336c:	e1a00840 	mov	r0, r0, asr #16
        133370:	e3500000 	cmp	r0, #0	; 0x0
        133374:	da000032 	ble	133444 <NetPatternStrokePUDSLToPat+0x218>
        133378:	e1550004 	cmp	r5, r4
        13337c:	a91baff0 	ldmgedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        133380:	e1b01006 	movs	r1, r6
        133384:	13a01001 	movne	r1, #1	; 0x1
        133388:	e59d0074 	ldr	r0, [sp, #116]
        13338c:	e7c01005 	strb	r1, [r0, r5]
        133390:	e5970008 	ldr	r0, [r7, #8]
        133394:	e7901186 	ldr	r1, [r0, r6, lsl #3]
        133398:	e59d007c 	ldr	r0, [sp, #124]
        13339c:	e7801105 	str	r1, [r0, r5, lsl #2]
        1333a0:	e5970008 	ldr	r0, [r7, #8]
        1333a4:	e0800186 	add	r0, r0, r6, lsl #3
        1333a8:	e5b01004 	ldr	r1, [r0, #4]!
        1333ac:	e59d0078 	ldr	r0, [sp, #120]
        1333b0:	e7801105 	str	r1, [r0, r5, lsl #2]
        1333b4:	e3350000 	teq	r5, #0	; 0x0
        1333b8:	0a000017 	beq	13341c <NetPatternStrokePUDSLToPat+0x1f0>
        1333bc:	e59d007c 	ldr	r0, [sp, #124]
        1333c0:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        1333c4:	e0400009 	sub	r0, r0, r9
        1333c8:	e59d1078 	ldr	r1, [sp, #120]
        1333cc:	e7911105 	ldr	r1, [r1, r5, lsl #2]
        1333d0:	e59d209c 	ldr	r2, [sp, #156]
        1333d4:	e0419002 	sub	r9, r1, r2
        1333d8:	e1a01000 	mov	r1, r0
        1333dc:	eb6ab738 	bl	1be10c4 <$FixedMultiply>
        1333e0:	e1a01009 	mov	r1, r9
        1333e4:	e52d0004 	str	r0, [sp, -#4]!
        1333e8:	e1a00009 	mov	r0, r9
        1333ec:	eb6ab734 	bl	1be10c4 <$FixedMultiply>
        1333f0:	e1a01000 	mov	r1, r0
        1333f4:	e49d0004 	ldr	r0, [sp], #4
        1333f8:	e0800001 	add	r0, r0, r1
        1333fc:	eb6ab735 	bl	1be10d8 <$FractSquareRoot>
        133400:	e2800040 	add	r0, r0, #64	; 0x40
        133404:	e1a003c0 	mov	r0, r0, asr #7
        133408:	e59d1098 	ldr	r1, [sp, #152]
        13340c:	e0811000 	add	r1, r1, r0
        133410:	e58d1098 	str	r1, [sp, #152]
        133414:	e59d1070 	ldr	r1, [sp, #112]
        133418:	e7810105 	str	r0, [r1, r5, lsl #2]
        13341c:	e59d007c 	ldr	r0, [sp, #124]
        133420:	e7909105 	ldr	r9, [r0, r5, lsl #2]
        133424:	e59d0078 	ldr	r0, [sp, #120]
        133428:	e7902105 	ldr	r2, [r0, r5, lsl #2]
        13342c:	e2855001 	add	r5, r5, #1	; 0x1
        133430:	e2866001 	add	r6, r6, #1	; 0x1
        133434:	e58d209c 	str	r2, [sp, #156]
        133438:	e5970000 	ldr	r0, [r7]
        13343c:	e1560840 	cmp	r6, r0, asr #16
        133440:	baffffcc 	blt	133378 <NetPatternStrokePUDSLToPat+0x14c>
        133444:	e59d1080 	ldr	r1, [sp, #128]
        133448:	e2811001 	add	r1, r1, #1	; 0x1
        13344c:	e58d1080 	str	r1, [sp, #128]
        133450:	e59b0008 	ldr	r0, [fp, #8]
        133454:	e5900000 	ldr	r0, [r0]
        133458:	e1510840 	cmp	r1, r0, asr #16
        13345c:	baffffbc 	blt	133354 <NetPatternStrokePUDSLToPat+0x128>
        133460:	e598000c 	ldr	r0, [r8, #12]
        133464:	e1a01800 	mov	r1, r0, lsl #16
        133468:	e59d0098 	ldr	r0, [sp, #152]
        13346c:	eb6ab713 	bl	1be10c0 <$FixedDivide>
        133470:	e58d0094 	str	r0, [sp, #148]
        133474:	e1a09000 	mov	r9, r0
        133478:	e59d007c 	ldr	r0, [sp, #124]
        13347c:	e5900000 	ldr	r0, [r0]
        133480:	e58d00a0 	str	r0, [sp, #160]
        133484:	e59d0078 	ldr	r0, [sp, #120]
        133488:	e5901000 	ldr	r1, [r0]
        13348c:	e3a00000 	mov	r0, #0	; 0x0
        133490:	e3a06000 	mov	r6, #0	; 0x0
        133494:	e3a04000 	mov	r4, #0	; 0x0
        133498:	e58d0084 	str	r0, [sp, #132]
        13349c:	e58d109c 	str	r1, [sp, #156]
        1334a0:	e598000c 	ldr	r0, [r8, #12]
        1334a4:	e3500000 	cmp	r0, #0	; 0x0
        1334a8:	da0000bf 	ble	1337ac <NetPatternStrokePUDSLToPat+0x580>
        1334ac:	e2450001 	sub	r0, r5, #1	; 0x1
        1334b0:	e58d00ac 	str	r0, [sp, #172]
        1334b4:	e3a07000 	mov	r7, #0	; 0x0
        1334b8:	ea000012 	b	133508 <NetPatternStrokePUDSLToPat+0x2dc>
        1334bc:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        1334c0:	0c101950 	ldceq	9, cr1, [r0], -#320
        1334c4:	003712cc 	eoreqs	r1, r7, ip, asr #5
        1334c8:	00000000 	andeq	r0, r0, r0
        1334cc:	e2844001 	add	r4, r4, #1	; 0x1
        1334d0:	e59d0070 	ldr	r0, [sp, #112]
        1334d4:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        1334d8:	e0499000 	sub	r9, r9, r0
        1334dc:	e59d0074 	ldr	r0, [sp, #116]
        1334e0:	e7d00004 	ldrb	r0, [r0, r4]
        1334e4:	e3300000 	teq	r0, #0	; 0x0
        1334e8:	0a000004 	beq	133500 <NetPatternStrokePUDSLToPat+0x2d4>
        1334ec:	e59d0070 	ldr	r0, [sp, #112]
        1334f0:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        1334f4:	e59d1084 	ldr	r1, [sp, #132]
        1334f8:	e0400001 	sub	r0, r0, r1
        1334fc:	e0807007 	add	r7, r0, r7
        133500:	e3a00000 	mov	r0, #0	; 0x0
        133504:	e58d0084 	str	r0, [sp, #132]
        133508:	e59d00ac 	ldr	r0, [sp, #172]
        13350c:	e1500004 	cmp	r0, r4
        133510:	da000004 	ble	133528 <NetPatternStrokePUDSLToPat+0x2fc>
        133514:	e59d0070 	ldr	r0, [sp, #112]
        133518:	e0800104 	add	r0, r0, r4, lsl #2
        13351c:	e5900004 	ldr	r0, [r0, #4]
        133520:	e1500009 	cmp	r0, r9
        133524:	daffffe8 	ble	1334cc <NetPatternStrokePUDSLToPat+0x2a0>
        133528:	e59d00ac 	ldr	r0, [sp, #172]
        13352c:	e1500004 	cmp	r0, r4
        133530:	ca000016 	bgt	133590 <NetPatternStrokePUDSLToPat+0x364>
        133534:	e59d007c 	ldr	r0, [sp, #124]
        133538:	e0800105 	add	r0, r0, r5, lsl #2
        13353c:	e5301004 	ldr	r1, [r0, -#4]!
        133540:	e58d1090 	str	r1, [sp, #144]
        133544:	e59d0078 	ldr	r0, [sp, #120]
        133548:	e0800105 	add	r0, r0, r5, lsl #2
        13354c:	e5302004 	ldr	r2, [r0, -#4]!
        133550:	e58d208c 	str	r2, [sp, #140]
        133554:	e59d0074 	ldr	r0, [sp, #116]
        133558:	e0800005 	add	r0, r0, r5
        13355c:	e5500001 	ldrb	r0, [r0, -#1]
        133560:	e3300000 	teq	r0, #0	; 0x0
        133564:	0a000040 	beq	13366c <NetPatternStrokePUDSLToPat+0x440>
        133568:	e59d0070 	ldr	r0, [sp, #112]
        13356c:	e0800105 	add	r0, r0, r5, lsl #2
        133570:	e5100004 	ldr	r0, [r0, -#4]
        133574:	e59d1084 	ldr	r1, [sp, #132]
        133578:	e0400001 	sub	r0, r0, r1
        13357c:	e0807007 	add	r7, r0, r7
        133580:	e59d0070 	ldr	r0, [sp, #112]
        133584:	e0800105 	add	r0, r0, r5, lsl #2
        133588:	e5100004 	ldr	r0, [r0, -#4]
        13358c:	ea000035 	b	133668 <NetPatternStrokePUDSLToPat+0x43c>
        133590:	e59d0070 	ldr	r0, [sp, #112]
        133594:	e0800104 	add	r0, r0, r4, lsl #2
        133598:	e5900004 	ldr	r0, [r0, #4]
        13359c:	e3300000 	teq	r0, #0	; 0x0
        1335a0:	03a00801 	moveq	r0, #65536	; 0x10000
        1335a4:	0a000004 	beq	1335bc <NetPatternStrokePUDSLToPat+0x390>
        1335a8:	e59d0070 	ldr	r0, [sp, #112]
        1335ac:	e0800104 	add	r0, r0, r4, lsl #2
        1335b0:	e5b01004 	ldr	r1, [r0, #4]!
        1335b4:	e1a00009 	mov	r0, r9
        1335b8:	eb6ab6c0 	bl	1be10c0 <$FixedDivide>
        1335bc:	e58d0088 	str	r0, [sp, #136]
        1335c0:	e59d007c 	ldr	r0, [sp, #124]
        1335c4:	e0800104 	add	r0, r0, r4, lsl #2
        1335c8:	e5b01004 	ldr	r1, [r0, #4]!
        1335cc:	e59d007c 	ldr	r0, [sp, #124]
        1335d0:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        1335d4:	e0411000 	sub	r1, r1, r0
        1335d8:	e59d0088 	ldr	r0, [sp, #136]
        1335dc:	eb6ab6b8 	bl	1be10c4 <$FixedMultiply>
        1335e0:	e59d107c 	ldr	r1, [sp, #124]
        1335e4:	e7911104 	ldr	r1, [r1, r4, lsl #2]
        1335e8:	e0801001 	add	r1, r0, r1
        1335ec:	e58d1090 	str	r1, [sp, #144]
        1335f0:	e59d0078 	ldr	r0, [sp, #120]
        1335f4:	e0800104 	add	r0, r0, r4, lsl #2
        1335f8:	e5b01004 	ldr	r1, [r0, #4]!
        1335fc:	e59d0078 	ldr	r0, [sp, #120]
        133600:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        133604:	e0411000 	sub	r1, r1, r0
        133608:	e59d0088 	ldr	r0, [sp, #136]
        13360c:	eb6ab6ac 	bl	1be10c4 <$FixedMultiply>
        133610:	e59d1078 	ldr	r1, [sp, #120]
        133614:	e7911104 	ldr	r1, [r1, r4, lsl #2]
        133618:	e0802001 	add	r2, r0, r1
        13361c:	e58d208c 	str	r2, [sp, #140]
        133620:	e59d0074 	ldr	r0, [sp, #116]
        133624:	e0800004 	add	r0, r0, r4
        133628:	e5d00001 	ldrb	r0, [r0, #1]
        13362c:	e3300000 	teq	r0, #0	; 0x0
        133630:	0a00000d 	beq	13366c <NetPatternStrokePUDSLToPat+0x440>
        133634:	e59d0070 	ldr	r0, [sp, #112]
        133638:	e0800104 	add	r0, r0, r4, lsl #2
        13363c:	e5b01004 	ldr	r1, [r0, #4]!
        133640:	e59d0088 	ldr	r0, [sp, #136]
        133644:	eb6ab69e 	bl	1be10c4 <$FixedMultiply>
        133648:	e59d1084 	ldr	r1, [sp, #132]
        13364c:	e0400001 	sub	r0, r0, r1
        133650:	e0807007 	add	r7, r0, r7
        133654:	e59d0070 	ldr	r0, [sp, #112]
        133658:	e0800104 	add	r0, r0, r4, lsl #2
        13365c:	e5b01004 	ldr	r1, [r0, #4]!
        133660:	e59d0088 	ldr	r0, [sp, #136]
        133664:	eb6ab696 	bl	1be10c4 <$FixedMultiply>
        133668:	e58d0084 	str	r0, [sp, #132]
        13366c:	e59d00a0 	ldr	r0, [sp, #160]
        133670:	e59d1090 	ldr	r1, [sp, #144]
        133674:	e0410000 	sub	r0, r1, r0
        133678:	e59d109c 	ldr	r1, [sp, #156]
        13367c:	e59d208c 	ldr	r2, [sp, #140]
        133680:	e0421001 	sub	r1, r2, r1
        133684:	e24dd008 	sub	sp, sp, #8	; 0x8
        133688:	eb68ec2d 	bl	1b6e744 <$ApproxFixATan2Cycles>
        13368c:	e2800902 	add	r0, r0, #32768	; 0x8000
        133690:	e5982010 	ldr	r2, [r8, #16]
        133694:	e58d20b0 	str	r2, [sp, #176]
        133698:	e2421001 	sub	r1, r2, #1	; 0x1
        13369c:	e58d10ac 	str	r1, [sp, #172]
        1336a0:	e0000091 	mul	r0, r1, r0
        1336a4:	e1a01840 	mov	r1, r0, asr #16
        1336a8:	e3a020ff 	mov	r2, #255	; 0xff
        1336ac:	e0020440 	and	r0, r2, r0, asr #8
        1336b0:	e58d0000 	str	r0, [sp]
        1336b4:	e59d00ac 	ldr	r0, [sp, #172]
        1336b8:	eb69fca0 	bl	1bb2940 <$__rt_sdiv>
        1336bc:	e2811001 	add	r1, r1, #1	; 0x1
        1336c0:	e58d1004 	str	r1, [sp, #4]
        1336c4:	e59d00ac 	ldr	r0, [sp, #172]
        1336c8:	eb69fc9c 	bl	1bb2940 <$__rt_sdiv>
        1336cc:	e2810001 	add	r0, r1, #1	; 0x1
        1336d0:	e3a01000 	mov	r1, #0	; 0x0
        1336d4:	e59d20b0 	ldr	r2, [sp, #176]
        1336d8:	e3520000 	cmp	r2, #0	; 0x0
        1336dc:	da000008 	ble	133704 <NetPatternStrokePUDSLToPat+0x4d8>
        1336e0:	e3a0c000 	mov	ip, #0	; 0x0
        1336e4:	e59a3008 	ldr	r3, [sl, #8]
        1336e8:	e598200c 	ldr	r2, [r8, #12]
        1336ec:	e0226291 	mla	r2, r1, r2, r6
        1336f0:	e7c3c002 	strb	ip, [r3, r2]
        1336f4:	e2811001 	add	r1, r1, #1	; 0x1
        1336f8:	e5982010 	ldr	r2, [r8, #16]
        1336fc:	e1520001 	cmp	r2, r1
        133700:	cafffff7 	bgt	1336e4 <NetPatternStrokePUDSLToPat+0x4b8>
        133704:	e59d1000 	ldr	r1, [sp]
        133708:	e26130ff 	rsb	r3, r1, #255	; 0xff
        13370c:	e59a2008 	ldr	r2, [sl, #8]
        133710:	e598100c 	ldr	r1, [r8, #12]
        133714:	e59dc004 	ldr	ip, [sp, #4]
        133718:	e021619c 	mla	r1, ip, r1, r6
        13371c:	e7c23001 	strb	r3, [r2, r1]
        133720:	e59d1000 	ldr	r1, [sp]
        133724:	e59a3008 	ldr	r3, [sl, #8]
        133728:	e598200c 	ldr	r2, [r8, #12]
        13372c:	e0206092 	mla	r0, r2, r0, r6
        133730:	e7c31000 	strb	r1, [r3, r0]
        133734:	e28dd008 	add	sp, sp, #8	; 0x8
        133738:	e1a00007 	mov	r0, r7
        13373c:	e59d1094 	ldr	r1, [sp, #148]
        133740:	eb6ab65e 	bl	1be10c0 <$FixedDivide>
        133744:	e3500801 	cmp	r0, #65536	; 0x10000
        133748:	a3a0c000 	movge	ip, #0	; 0x0
        13374c:	a59a0008 	ldrge	r0, [sl, #8]
        133750:	a7c0c006 	strgeb	ip, [r0, r6]
        133754:	aa000007 	bge	133778 <NetPatternStrokePUDSLToPat+0x54c>
        133758:	e1a00007 	mov	r0, r7
        13375c:	e59d1094 	ldr	r1, [sp, #148]
        133760:	eb6ab656 	bl	1be10c0 <$FixedDivide>
        133764:	e3a020ff 	mov	r2, #255	; 0xff
        133768:	e0020440 	and	r0, r2, r0, asr #8
        13376c:	e0420000 	sub	r0, r2, r0
        133770:	e59a1008 	ldr	r1, [sl, #8]
        133774:	e7c10006 	strb	r0, [r1, r6]
        133778:	e59d0090 	ldr	r0, [sp, #144]
        13377c:	e58d00a0 	str	r0, [sp, #160]
        133780:	e59d108c 	ldr	r1, [sp, #140]
        133784:	e2866001 	add	r6, r6, #1	; 0x1
        133788:	e58d109c 	str	r1, [sp, #156]
        13378c:	e59d1094 	ldr	r1, [sp, #148]
        133790:	e0899001 	add	r9, r9, r1
        133794:	e598000c 	ldr	r0, [r8, #12]
        133798:	e1500006 	cmp	r0, r6
        13379c:	caffff44 	bgt	1334b4 <NetPatternStrokePUDSLToPat+0x288>
        1337a0:	ea000001 	b	1337ac <NetPatternStrokePUDSLToPat+0x580>
        1337a4:	e3a00001 	mov	r0, #1	; 0x1
        1337a8:	e58d0000 	str	r0, [sp]
        1337ac:	e59d007c 	ldr	r0, [sp, #124]
        1337b0:	e3300000 	teq	r0, #0	; 0x0
        1337b4:	159d007c 	ldrne	r0, [sp, #124]
        1337b8:	1b6a7c66 	blne	1bd2958 <$free>
        1337bc:	e59d0000 	ldr	r0, [sp]
        1337c0:	e3300000 	teq	r0, #0	; 0x0
        1337c4:	128d0004 	addne	r0, sp, #4	; 0x4
        1337c8:	1b6aba61 	blne	1be2154 <$NextHandler>
        1337cc:	e28d0004 	add	r0, sp, #4	; 0x4
        1337d0:	eb6ab638 	bl	1be10b8 <$ExitHandler>
        1337d4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternStrokeSetInput
 * Address: 001338c0
 */
void globals::NetPatternStrokeSetInput() {
    /*
        1338c0:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1338c4:	e5901000 	ldr	r1, [r0]
        1338c8:	e281c00c 	add	ip, r1, #12	; 0xc
        1338cc:	e89c1008 	ldmia	ip, {r3, ip}
        1338d0:	e003039c 	mul	r3, ip, r3
        1338d4:	e5902008 	ldr	r2, [r0, #8]
        1338d8:	e0833002 	add	r3, r3, r2
        1338dc:	e5d1c009 	ldrb	ip, [r1, #9]
        1338e0:	e33c0000 	teq	ip, #0	; 0x0
        1338e4:	05d1c008 	ldreqb	ip, [r1, #8]
        1338e8:	033c00ff 	teqeq	ip, #255	; 0xff
        1338ec:	1a000007 	bne	133910 <NetPatternStrokeSetInput+0x50>
        1338f0:	e5911014 	ldr	r1, [r1, #20]
        1338f4:	e1520003 	cmp	r2, r3
        1338f8:	2a000011 	bcs	133944 <NetPatternStrokeSetInput+0x84>
        1338fc:	e4d2c001 	ldrb	ip, [r2], #1
        133900:	e4c1c001 	strb	ip, [r1], #1
        133904:	e1520003 	cmp	r2, r3
        133908:	3afffffb 	bcc	1338fc <NetPatternStrokeSetInput+0x3c>
        13390c:	ea00000c 	b	133944 <NetPatternStrokeSetInput+0x84>
        133910:	e1520003 	cmp	r2, r3
        133914:	e591c014 	ldr	ip, [r1, #20]
        133918:	2a000009 	bcs	133944 <NetPatternStrokeSetInput+0x84>
        13391c:	e5d14008 	ldrb	r4, [r1, #8]
        133920:	e5d1e009 	ldrb	lr, [r1, #9]
        133924:	e044500e 	sub	r5, r4, lr
        133928:	e4d24001 	ldrb	r4, [r2], #1
        13392c:	e0844404 	add	r4, r4, r4, lsl #8
        133930:	e0050594 	mul	r5, r4, r5
        133934:	e08ee445 	add	lr, lr, r5, asr #8
        133938:	e4cce001 	strb	lr, [ip], #1
        13393c:	e1520003 	cmp	r2, r3
        133940:	3afffff5 	bcc	13391c <NetPatternStrokeSetInput+0x5c>
        133944:	e5900000 	ldr	r0, [r0]
        133948:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        13394c:	ea68f7e3 	b	1b718e0 <$NetPatternizerStrokeGraph>
    */
}

/**
 * Symbol: NetPatternStrokeDestroy
 * Address: 00133950
 */
void globals::NetPatternStrokeDestroy() {
    /*
        133950:	e3300000 	teq	r0, #0	; 0x0
        133954:	01a0f00e 	moveq	pc, lr
        133958:	e1a0c00d 	mov	ip, sp
        13395c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        133960:	e24cb004 	sub	fp, ip, #4	; 0x4
        133964:	e1a04000 	mov	r4, r0
        133968:	e5900008 	ldr	r0, [r0, #8]
        13396c:	e3300000 	teq	r0, #0	; 0x0
        133970:	1b6a7bf8 	blne	1bd2958 <$free>
        133974:	e1a00004 	mov	r0, r4
        133978:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        13397c:	ea6a7bf5 	b	1bd2958 <$free>
    */
}

/**
 * Symbol: NetPatternizerCreateFromBP
 * Address: 00133980
 */
void globals::NetPatternizerCreateFromBP() {
    /*
        133980:	e1a0c00d 	mov	ip, sp
        133984:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        133988:	e24cb004 	sub	fp, ip, #4	; 0x4
        13398c:	e1a04000 	mov	r4, r0
        133990:	e24dd004 	sub	sp, sp, #4	; 0x4
        133994:	e59f0054 	ldr	r0, [pc, #54]	; 1339f0 <NetPatternizerCreateFromBP+0x70>
        133998:	eb68f7ca 	bl	1b718c8 <$NetPatternizerNewInstance>
        13399c:	e58d0000 	str	r0, [sp]
        1339a0:	e3a00000 	mov	r0, #0	; 0x0
        1339a4:	e52d006c 	str	r0, [sp, -#108]!
        1339a8:	e28d0008 	add	r0, sp, #8	; 0x8
        1339ac:	eb69fbf0 	bl	1bb2974 <$setjmp>
        1339b0:	e3300000 	teq	r0, #0	; 0x0
        1339b4:	1a00000e 	bne	1339f4 <NetPatternizerCreateFromBP+0x74>
        1339b8:	e1a0000d 	mov	r0, sp
        1339bc:	eb6ab1ae 	bl	1be007c <$AddExceptionHandler>
        1339c0:	e1a01004 	mov	r1, r4
        1339c4:	e59d006c 	ldr	r0, [sp, #108]
        1339c8:	e3a03000 	mov	r3, #0	; 0x0
        1339cc:	e3a02000 	mov	r2, #0	; 0x0
        1339d0:	e59dc06c 	ldr	ip, [sp, #108]
        1339d4:	e59cc000 	ldr	ip, [ip]
        1339d8:	e1a0e00f 	mov	lr, pc
        1339dc:	e59cf008 	ldr	pc, [ip, #8]
        1339e0:	e1a0000d 	mov	r0, sp
        1339e4:	eb6ab5b3 	bl	1be10b8 <$ExitHandler>
        1339e8:	e5bd006c 	ldr	r0, [sp, #108]!
        1339ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1339f0:	00374028 	eoreqs	r4, r7, r8, lsr #32
        1339f4:	e59d006c 	ldr	r0, [sp, #108]
        1339f8:	eb68f7a7 	bl	1b7189c <$NetPatternizerDestroy>
        1339fc:	e1a0000d 	mov	r0, sp
        133a00:	eb6ab9d3 	bl	1be2154 <$NextHandler>
        133a04:	eafffffa 	b	1339f4 <NetPatternizerCreateFromBP+0x74>
    */
}

/**
 * Symbol: NetPatternDestroy
 * Address: 00133a08
 */
void globals::NetPatternDestroy() {
    /*
        133a08:	e3300000 	teq	r0, #0	; 0x0
        133a0c:	01a0f00e 	moveq	pc, lr
        133a10:	e1a0c00d 	mov	ip, sp
        133a14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        133a18:	e24cb004 	sub	fp, ip, #4	; 0x4
        133a1c:	e5904000 	ldr	r4, [r0]
        133a20:	e5941000 	ldr	r1, [r4]
        133a24:	e1a0e00f 	mov	lr, pc
        133a28:	e591f018 	ldr	pc, [r1, #24]
        133a2c:	e5940004 	ldr	r0, [r4, #4]
        133a30:	e2400001 	sub	r0, r0, #1	; 0x1
        133a34:	e5840004 	str	r0, [r4, #4]
        133a38:	e3500000 	cmp	r0, #0	; 0x0
        133a3c:	c91ba810 	ldmgtdb	fp, {r4, fp, sp, pc}
        133a40:	e1a00004 	mov	r0, r4
        133a44:	e5941000 	ldr	r1, [r4]
        133a48:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        133a4c:	e591f020 	ldr	pc, [r1, #32]
    */
}

/**
 * Symbol: NetPatternizerUpdateGraphics
 * Address: 00133a50
 */
void globals::NetPatternizerUpdateGraphics() {
    /*
        133a50:	e5901000 	ldr	r1, [r0]
        133a54:	e591f01c 	ldr	pc, [r1, #28]
    */
}

/**
 * Symbol: NetPatternizerDestroy
 * Address: 00133a58
 */
void globals::NetPatternizerDestroy() {
    /*
        133a58:	e1a0c00d 	mov	ip, sp
        133a5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        133a60:	e24cb004 	sub	fp, ip, #4	; 0x4
        133a64:	e1b04000 	movs	r4, r0
        133a68:	e3a05000 	mov	r5, #0	; 0x0
        133a6c:	1a000001 	bne	133a78 <NetPatternizerDestroy+0x20>
        133a70:	e1a00005 	mov	r0, r5
        133a74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        133a78:	e5940004 	ldr	r0, [r4, #4]
        133a7c:	e2500001 	subs	r0, r0, #1	; 0x1
        133a80:	e5840004 	str	r0, [r4, #4]
        133a84:	13a00001 	movne	r0, #1	; 0x1
        133a88:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        133a8c:	e1a00004 	mov	r0, r4
        133a90:	e5941000 	ldr	r1, [r4]
        133a94:	e1a0e00f 	mov	lr, pc
        133a98:	e591f020 	ldr	pc, [r1, #32]
        133a9c:	e1a00004 	mov	r0, r4
        133aa0:	eb6a7bac 	bl	1bd2958 <$free>
        133aa4:	eafffff1 	b	133a70 <NetPatternizerDestroy+0x18>
    */
}

/**
 * Symbol: NetPatternSetNth
 * Address: 00133aa8
 */
void globals::NetPatternSetNth() {
    /*
        133aa8:	e92d4000 	stmdb	sp!, {lr}
        133aac:	e203c0ff 	and	ip, r3, #255	; 0xff
        133ab0:	e59de004 	ldr	lr, [sp, #4]
        133ab4:	e20ee0ff 	and	lr, lr, #255	; 0xff
        133ab8:	e3a03000 	mov	r3, #0	; 0x0
        133abc:	e3510000 	cmp	r1, #0	; 0x0
        133ac0:	da000003 	ble	133ad4 <NetPatternSetNth+0x2c>
        133ac4:	e7c0e003 	strb	lr, [r0, r3]
        133ac8:	e2833001 	add	r3, r3, #1	; 0x1
        133acc:	e1530001 	cmp	r3, r1
        133ad0:	bafffffb 	blt	133ac4 <NetPatternSetNth+0x1c>
        133ad4:	e3520000 	cmp	r2, #0	; 0x0
        133ad8:	b8bd8000 	ldmltia	sp!, {pc}
        133adc:	e1520001 	cmp	r2, r1
        133ae0:	b7c0c002 	strltb	ip, [r0, r2]
        133ae4:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: NetPatternizerCreateForGrid
 * Address: 00133ae8
 */
void globals::NetPatternizerCreateForGrid() {
    /*
        133ae8:	e1a0c00d 	mov	ip, sp
        133aec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        133af0:	e24cb004 	sub	fp, ip, #4	; 0x4
        133af4:	e1a05000 	mov	r5, r0
        133af8:	e1a04001 	mov	r4, r1
        133afc:	e24dd004 	sub	sp, sp, #4	; 0x4
        133b00:	e5900006 	ldr	r0, [r0, #6]
        133b04:	e3a06000 	mov	r6, #0	; 0x0
        133b08:	e1510840 	cmp	r1, r0, asr #16
        133b0c:	2a00000c 	bcs	133b44 <NetPatternizerCreateForGrid+0x5c>
        133b10:	e5950010 	ldr	r0, [r5, #16]
        133b14:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        133b18:	eb68f34b 	bl	1b7084c <$NetPatternLookup>
        133b1c:	e3500000 	cmp	r0, #0	; 0x0
        133b20:	ba000007 	blt	133b44 <NetPatternizerCreateForGrid+0x5c>
        133b24:	e0800080 	add	r0, r0, r0, lsl #1
        133b28:	e59f101c 	ldr	r1, [pc, #1c]	; 133b4c <NetPatternizerCreateForGrid+0x64>
        133b2c:	e0817100 	add	r7, r1, r0, lsl #2
        133b30:	e5970008 	ldr	r0, [r7, #8]
        133b34:	e3300000 	teq	r0, #0	; 0x0
        133b38:	15901008 	ldrne	r1, [r0, #8]
        133b3c:	13310000 	teqne	r1, #0	; 0x0
        133b40:	1a000002 	bne	133b50 <NetPatternizerCreateForGrid+0x68>
        133b44:	e1a00006 	mov	r0, r6
        133b48:	ea000014 	b	133ba0 <NetPatternizerCreateForGrid+0xb8>
        133b4c:	00373fb0 	ldreqh	r3, [r7], -r0
        133b50:	eb68f75c 	bl	1b718c8 <$NetPatternizerNewInstance>
        133b54:	e58d0000 	str	r0, [sp]
        133b58:	e52d606c 	str	r6, [sp, -#108]!
        133b5c:	e28d0008 	add	r0, sp, #8	; 0x8
        133b60:	eb69fb83 	bl	1bb2974 <$setjmp>
        133b64:	e3300000 	teq	r0, #0	; 0x0
        133b68:	1a00000d 	bne	133ba4 <NetPatternizerCreateForGrid+0xbc>
        133b6c:	e1a0000d 	mov	r0, sp
        133b70:	eb6ab141 	bl	1be007c <$AddExceptionHandler>
        133b74:	e1a02004 	mov	r2, r4
        133b78:	e1a01005 	mov	r1, r5
        133b7c:	e5b73004 	ldr	r3, [r7, #4]!
        133b80:	e59d006c 	ldr	r0, [sp, #108]
        133b84:	e59dc06c 	ldr	ip, [sp, #108]
        133b88:	e59cc000 	ldr	ip, [ip]
        133b8c:	e1a0e00f 	mov	lr, pc
        133b90:	e59cf008 	ldr	pc, [ip, #8]
        133b94:	e1a0000d 	mov	r0, sp
        133b98:	eb6ab546 	bl	1be10b8 <$ExitHandler>
        133b9c:	e5bd006c 	ldr	r0, [sp, #108]!
        133ba0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        133ba4:	e59d006c 	ldr	r0, [sp, #108]
        133ba8:	eb68f73b 	bl	1b7189c <$NetPatternizerDestroy>
        133bac:	e1a0000d 	mov	r0, sp
        133bb0:	eb6ab967 	bl	1be2154 <$NextHandler>
        133bb4:	eafffffa 	b	133ba4 <NetPatternizerCreateForGrid+0xbc>
    */
}

/**
 * Symbol: NetPatternizerNewInstance
 * Address: 00133bb8
 */
void globals::NetPatternizerNewInstance() {
    /*
        133bb8:	e1a0c00d 	mov	ip, sp
        133bbc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        133bc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        133bc4:	e1a04000 	mov	r4, r0
        133bc8:	e5900004 	ldr	r0, [r0, #4]
        133bcc:	e59f1040 	ldr	r1, [pc, #40]	; 133c14 <NetPatternizerNewInstance+0x5c>
        133bd0:	eb6ab959 	bl	1be213c <$NewNamedPtr>
        133bd4:	e59f503c 	ldr	r5, [pc, #3c]	; 133c18 <NetPatternizerNewInstance+0x60>
        133bd8:	e5850000 	str	r0, [r5]
        133bdc:	e3300000 	teq	r0, #0	; 0x0
        133be0:	11a05000 	movne	r5, r0
        133be4:	1a000005 	bne	133c00 <NetPatternizerNewInstance+0x48>
        133be8:	e59f002c 	ldr	r0, [pc, #2c]	; 133c1c <NetPatternizerNewInstance+0x64>
        133bec:	e5900000 	ldr	r0, [r0]
        133bf0:	e28f1f0a 	add	r1, pc, #40	; 0x28
        133bf4:	e3a02000 	mov	r2, #0	; 0x0
        133bf8:	eb6abd67 	bl	1be319c <$Throw>
        133bfc:	e5955000 	ldr	r5, [r5]
        133c00:	e1a01004 	mov	r1, r4
        133c04:	e1a00005 	mov	r0, r5
        133c08:	eb68f729 	bl	1b718b4 <$NetPatternizerInit_>
        133c0c:	e1a00005 	mov	r0, r5
        133c10:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        133c14:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        133c18:	0c101950 	ldceq	9, cr1, [r0], -#320
        133c1c:	003712cc 	eoreqs	r1, r7, ip, asr #5
        133c20:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: NetPatternizerInit_
 * Address: 00133c24
 */
void globals::NetPatternizerInit_() {
    /*
        133c24:	e5801000 	str	r1, [r0]
        133c28:	e3a01001 	mov	r1, #1	; 0x1
        133c2c:	e5a01004 	str	r1, [r0, #4]!
        133c30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NetPatternInit_
 * Address: 00133c34
 */
void globals::NetPatternInit_() {
    /*
        133c34:	e5801000 	str	r1, [r0]
        133c38:	e3a0103f 	mov	r1, #63	; 0x3f
        133c3c:	e5c01004 	strb	r1, [r0, #4]
        133c40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NetPatternCreate
 * Address: 00133c44
 */
void globals::NetPatternCreate() {
    /*
        133c44:	e1a0c00d 	mov	ip, sp
        133c48:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        133c4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        133c50:	e1a04000 	mov	r4, r0
        133c54:	e5901000 	ldr	r1, [r0]
        133c58:	e1a0e00f 	mov	lr, pc
        133c5c:	e591f00c 	ldr	pc, [r1, #12]
        133c60:	e5941004 	ldr	r1, [r4, #4]
        133c64:	e2811001 	add	r1, r1, #1	; 0x1
        133c68:	e5a41004 	str	r1, [r4, #4]!
        133c6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NetPatternSetInput
 * Address: 00133c70
 */
void globals::NetPatternSetInput() {
    /*
        133c70:	e5901000 	ldr	r1, [r0]
        133c74:	e5911000 	ldr	r1, [r1]
        133c78:	e591f014 	ldr	pc, [r1, #20]
    */
}

/**
 * Symbol: NewHandle
 * Address: 00141538
 */
void globals::NewHandle() {
    /*
        141538:	e1a0c00d 	mov	ip, sp
        14153c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        141540:	e24cb004 	sub	fp, ip, #4	; 0x4
        141544:	e1a04000 	mov	r4, r0
        141548:	e3a07000 	mov	r7, #0	; 0x0
        14154c:	e59f51a4 	ldr	r5, [pc, #1a4]	; 1416f8 <NewHandle+0x1c0>
        141550:	e5d50000 	ldrb	r0, [r5]
        141554:	e3300000 	teq	r0, #0	; 0x0
        141558:	0a000012 	beq	1415a8 <NewHandle+0x70>
        14155c:	e595001c 	ldr	r0, [r5, #28]
        141560:	e2801001 	add	r1, r0, #1	; 0x1
        141564:	e585101c 	str	r1, [r5, #28]
        141568:	e5950010 	ldr	r0, [r5, #16]
        14156c:	e1310000 	teq	r1, r0
        141570:	03a00023 	moveq	r0, #35	; 0x23
        141574:	0b6a82fb 	bleq	1be2168 <$ReportMemMgrTrap(long)>
        141578:	e5950004 	ldr	r0, [r5, #4]
        14157c:	e3300000 	teq	r0, #0	; 0x0
        141580:	0a000002 	beq	141590 <NewHandle+0x58>
        141584:	e1540000 	cmp	r4, r0
        141588:	33a0003c 	movcc	r0, #60	; 0x3c
        14158c:	3a000004 	bcc	1415a4 <NewHandle+0x6c>
        141590:	e5950008 	ldr	r0, [r5, #8]
        141594:	e1540000 	cmp	r4, r0
        141598:	3a000002 	bcc	1415a8 <NewHandle+0x70>
        14159c:	e3a0003d 	mov	r0, #61	; 0x3d
        1415a0:	e2800c3e 	add	r0, r0, #15872	; 0x3e00
        1415a4:	eb6a82ef 	bl	1be2168 <$ReportMemMgrTrap(long)>
        1415a8:	eb6a7ecf 	bl	1be10ec <$GetHeap>
        1415ac:	eb6a7a7b 	bl	1bdffa0 <$GetRelocHeap>
        1415b0:	e1a06000 	mov	r6, r0
        1415b4:	eb6a7ecc 	bl	1be10ec <$GetHeap>
        1415b8:	e1360000 	teq	r6, r0
        1415bc:	0a000004 	beq	1415d4 <NewHandle+0x9c>
        1415c0:	eb6a7ec9 	bl	1be10ec <$GetHeap>
        1415c4:	e1a07000 	mov	r7, r0
        1415c8:	eb6a7ec7 	bl	1be10ec <$GetHeap>
        1415cc:	eb6a7a73 	bl	1bdffa0 <$GetRelocHeap>
        1415d0:	eb6a86ea 	bl	1be3180 <$SetHeap>
        1415d4:	e3a08000 	mov	r8, #0	; 0x0
        1415d8:	e3a00000 	mov	r0, #0	; 0x0
        1415dc:	eb6a7ec4 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        1415e0:	e3300000 	teq	r0, #0	; 0x0
        1415e4:	0a000004 	beq	1415fc <NewHandle+0xc4>
        1415e8:	e3a08001 	mov	r8, #1	; 0x1
        1415ec:	e3a00000 	mov	r0, #0	; 0x0
        1415f0:	eb6a7ebf 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        1415f4:	e3a01000 	mov	r1, #0	; 0x0
        1415f8:	eb6a3455 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1415fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        141600:	e59f90f4 	ldr	r9, [pc, #f4]	; 1416fc <NewHandle+0x1c4>
        141604:	e5990000 	ldr	r0, [r9]
        141608:	e3100040 	tst	r0, #64	; 0x40
        14160c:	0a000006 	beq	14162c <NewHandle+0xf4>
        141610:	e1a0100d 	mov	r1, sp
        141614:	e3a00000 	mov	r0, #0	; 0x0
        141618:	eb6a764e 	bl	1bdef58 <$CheckHeap>
        14161c:	e1b01000 	movs	r1, r0
        141620:	159d2000 	ldrne	r2, [sp]
        141624:	128f0f35 	addne	r0, pc, #212	; 0xd4
        141628:	1b6a82cf 	blne	1be216c <$ReportSmashedHeap(char *, long, void *)>
        14162c:	e28dd004 	add	sp, sp, #4	; 0x4
        141630:	e1a00004 	mov	r0, r4
        141634:	eb68dd8d 	bl	1b78c70 <$NewIndirectBlock>
        141638:	e1b06000 	movs	r6, r0
        14163c:	0a000003 	beq	141650 <NewHandle+0x118>
        141640:	e59f00c4 	ldr	r0, [pc, #c4]	; 14170c <NewHandle+0x1d4>
        141644:	e5901000 	ldr	r1, [r0]
        141648:	e0811004 	add	r1, r1, r4
        14164c:	e5801000 	str	r1, [r0]
        141650:	e24dd004 	sub	sp, sp, #4	; 0x4
        141654:	e5990000 	ldr	r0, [r9]
        141658:	e3100040 	tst	r0, #64	; 0x40
        14165c:	0a000006 	beq	14167c <NewHandle+0x144>
        141660:	e1a0100d 	mov	r1, sp
        141664:	e3a00000 	mov	r0, #0	; 0x0
        141668:	eb6a763a 	bl	1bdef58 <$CheckHeap>
        14166c:	e1b01000 	movs	r1, r0
        141670:	159d2000 	ldrne	r2, [sp]
        141674:	128f0f25 	addne	r0, pc, #148	; 0x94
        141678:	1b6a82bb 	blne	1be216c <$ReportSmashedHeap(char *, long, void *)>
        14167c:	e28dd004 	add	sp, sp, #4	; 0x4
        141680:	e3380000 	teq	r8, #0	; 0x0
        141684:	0a000002 	beq	141694 <NewHandle+0x15c>
        141688:	e3a00000 	mov	r0, #0	; 0x0
        14168c:	eb6a7e98 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        141690:	eb6a6180 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        141694:	e59f007c 	ldr	r0, [pc, #7c]	; 141718 <NewHandle+0x1e0>
        141698:	e5900000 	ldr	r0, [r0]
        14169c:	e2400054 	sub	r0, r0, #84	; 0x54
        1416a0:	e3360000 	teq	r6, #0	; 0x0
        1416a4:	03e0106b 	mvneq	r1, #107	; 0x6b
        1416a8:	13a01000 	movne	r1, #0	; 0x0
        1416ac:	e5a01048 	str	r1, [r0, #72]!
        1416b0:	e5d50020 	ldrb	r0, [r5, #32]
        1416b4:	e3300000 	teq	r0, #0	; 0x0
        1416b8:	0a000003 	beq	1416cc <NewHandle+0x194>
        1416bc:	eb6a828f 	bl	1be2100 <$HashCallChain>
        1416c0:	e3c01102 	bic	r1, r0, #-2147483648	; 0x80000000
        1416c4:	e1a00006 	mov	r0, r6
        1416c8:	eb6a7a42 	bl	1bdffd8 <$SetHandleName>
        1416cc:	e5b50018 	ldr	r0, [r5, #24]!
        1416d0:	e3300000 	teq	r0, #0	; 0x0
        1416d4:	0a000002 	beq	1416e4 <NewHandle+0x1ac>
        1416d8:	e1360000 	teq	r6, r0
        1416dc:	03a00026 	moveq	r0, #38	; 0x26
        1416e0:	0b6a82a0 	bleq	1be2168 <$ReportMemMgrTrap(long)>
        1416e4:	e3370000 	teq	r7, #0	; 0x0
        1416e8:	11a00007 	movne	r0, r7
        1416ec:	1b6a86a3 	blne	1be3180 <$SetHeap>
        1416f0:	e1a00006 	mov	r0, r6
        1416f4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1416f8:	0c10165c 	ldceq	6, cr1, [r0], -#368
        1416fc:	000013fc 	streqd	r1, [r0], -ip
        141700:	656e7465 	strvsb	r7, [lr, -#1125]!
        141704:	72696e67 	rsbvc	r6, r9, #1648	; 0x670
        141708:	00000000 	andeq	r0, r0, r0
        14170c:	0c101010 	ldceq	0, cr1, [r0], -#64
        141710:	6c656176 	stfvse	f6, [r5], -#472
        141714:	696e6700 	stmvsdb	lr!, {r8, r9, sl, sp, lr}^
        141718:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: NewNamedHandle
 * Address: 0014171c
 */
void globals::NewNamedHandle() {
    /*
        14171c:	e1a0c00d 	mov	ip, sp
        141720:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        141724:	e24cb004 	sub	fp, ip, #4	; 0x4
        141728:	e1a04001 	mov	r4, r1
        14172c:	eb6a827e 	bl	1be212c <$NewHandle>
        141730:	e1b05000 	movs	r5, r0
        141734:	11a01004 	movne	r1, r4
        141738:	11a00005 	movne	r0, r5
        14173c:	1b6a7a25 	blne	1bdffd8 <$SetHandleName>
        141740:	e1a00005 	mov	r0, r5
        141744:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NewHandleClear
 * Address: 00141748
 */
void globals::NewHandleClear() {
    /*
        141748:	e1a0c00d 	mov	ip, sp
        14174c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        141750:	e24cb004 	sub	fp, ip, #4	; 0x4
        141754:	e1a04000 	mov	r4, r0
        141758:	eb6a8273 	bl	1be212c <$NewHandle>
        14175c:	e1b05000 	movs	r5, r0
        141760:	0a000005 	beq	14177c <NewHandleClear+0x34>
        141764:	e1a00005 	mov	r0, r5
        141768:	eb6a8267 	bl	1be210c <$HLock>
        14176c:	e1a01004 	mov	r1, r4
        141770:	eb697a2c 	bl	1ba0028 <$ClearMemory>
        141774:	e1a00005 	mov	r0, r5
        141778:	eb6a8265 	bl	1be2114 <$HUnlock>
        14177c:	e1a00005 	mov	r0, r5
        141780:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NewFakeHandle
 * Address: 00142174
 */
void globals::NewFakeHandle() {
    /*
        142174:	e1a0c00d 	mov	ip, sp
        142178:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14217c:	e24cb004 	sub	fp, ip, #4	; 0x4
        142180:	e1a05000 	mov	r5, r0
        142184:	e1a04001 	mov	r4, r1
        142188:	e3a06000 	mov	r6, #0	; 0x0
        14218c:	eb6a7bd6 	bl	1be10ec <$GetHeap>
        142190:	eb6a7782 	bl	1bdffa0 <$GetRelocHeap>
        142194:	e1a07000 	mov	r7, r0
        142198:	eb6a7bd3 	bl	1be10ec <$GetHeap>
        14219c:	e1370000 	teq	r7, r0
        1421a0:	0a000004 	beq	1421b8 <NewFakeHandle+0x44>
        1421a4:	eb6a7bd0 	bl	1be10ec <$GetHeap>
        1421a8:	e1a06000 	mov	r6, r0
        1421ac:	eb6a7bce 	bl	1be10ec <$GetHeap>
        1421b0:	eb6a777a 	bl	1bdffa0 <$GetRelocHeap>
        1421b4:	eb6a83f1 	bl	1be3180 <$SetHeap>
        1421b8:	e3a07000 	mov	r7, #0	; 0x0
        1421bc:	e3a00000 	mov	r0, #0	; 0x0
        1421c0:	eb6a7bcb 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        1421c4:	e3300000 	teq	r0, #0	; 0x0
        1421c8:	0a000004 	beq	1421e0 <NewFakeHandle+0x6c>
        1421cc:	e3a07001 	mov	r7, #1	; 0x1
        1421d0:	e3a00000 	mov	r0, #0	; 0x0
        1421d4:	eb6a7bc6 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        1421d8:	e3a01000 	mov	r1, #0	; 0x0
        1421dc:	eb6a315c 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1421e0:	e1a01004 	mov	r1, r4
        1421e4:	e1a00005 	mov	r0, r5
        1421e8:	eb68da9f 	bl	1b78c6c <$NewFakeIndirectBlock>
        1421ec:	e1a04000 	mov	r4, r0
        1421f0:	e3370000 	teq	r7, #0	; 0x0
        1421f4:	0a000002 	beq	142204 <NewFakeHandle+0x90>
        1421f8:	e3a00000 	mov	r0, #0	; 0x0
        1421fc:	eb6a7bbc 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142200:	eb6a5ea4 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        142204:	e3360000 	teq	r6, #0	; 0x0
        142208:	11a00006 	movne	r0, r6
        14220c:	1b6a83db 	blne	1be3180 <$SetHeap>
        142210:	e1a00004 	mov	r0, r4
        142214:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NewVMHeap
 * Address: 00142338
 */
void globals::NewVMHeap() {
    /*
        142338:	e1a0c00d 	mov	ip, sp
        14233c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        142340:	e24cb004 	sub	fp, ip, #4	; 0x4
        142344:	e1a04002 	mov	r4, r2
        142348:	e1a0c003 	mov	ip, r3
        14234c:	e24dd008 	sub	sp, sp, #8	; 0x8
        142350:	e3300000 	teq	r0, #0	; 0x0
        142354:	1a000002 	bne	142364 <NewVMHeap+0x2c>
        142358:	e59f00d4 	ldr	r0, [pc, #d4]	; 142434 <NewVMHeap+0xfc>
        14235c:	e5900000 	ldr	r0, [r0]
        142360:	e5100020 	ldr	r0, [r0, -#32]
        142364:	e21c7101 	ands	r7, ip, #1073741824	; 0x40000000
        142368:	12811a01 	addne	r1, r1, #4096	; 0x1000
        14236c:	e1a0300d 	mov	r3, sp
        142370:	e28d2004 	add	r2, sp, #4	; 0x4
        142374:	e92d000c 	stmdb	sp!, {r2, r3}
        142378:	e3cc2101 	bic	r2, ip, #1073741824	; 0x40000000
        14237c:	e3823004 	orr	r3, r2, #4	; 0x4
        142380:	e1a02001 	mov	r2, r1
        142384:	e3a01000 	mov	r1, #0	; 0x0
        142388:	eb6a5602 	bl	1bd7b98 <$NewHeapArea>
        14238c:	e28dd008 	add	sp, sp, #8	; 0x8
        142390:	e1b06000 	movs	r6, r0
        142394:	1a000029 	bne	142440 <NewVMHeap+0x108>
        142398:	e3a05b01 	mov	r5, #1024	; 0x400
        14239c:	e3370000 	teq	r7, #0	; 0x0
        1423a0:	0a000006 	beq	1423c0 <NewVMHeap+0x88>
        1423a4:	e59d0004 	ldr	r0, [sp, #4]
        1423a8:	e2400001 	sub	r0, r0, #1	; 0x1
        1423ac:	e2800a01 	add	r0, r0, #4096	; 0x1000
        1423b0:	e1a00620 	mov	r0, r0, lsr #12
        1423b4:	e1a00600 	mov	r0, r0, lsl #12
        1423b8:	e3a05a01 	mov	r5, #4096	; 0x1000
        1423bc:	e58d0004 	str	r0, [sp, #4]
        1423c0:	eb6a7b49 	bl	1be10ec <$GetHeap>
        1423c4:	e1a07000 	mov	r7, r0
        1423c8:	e59d0004 	ldr	r0, [sp, #4]
        1423cc:	e0801005 	add	r1, r0, r5
        1423d0:	e3a02000 	mov	r2, #0	; 0x0
        1423d4:	eb6a51de 	bl	1bd6b54 <$LockHeapRange>
        1423d8:	e59d0004 	ldr	r0, [sp, #4]
        1423dc:	e0801005 	add	r1, r0, r5
        1423e0:	eb6a6eae 	bl	1bddea0 <$UnlockHeapRange>
        1423e4:	e59d0004 	ldr	r0, [sp, #4]
        1423e8:	e59d1000 	ldr	r1, [sp]
        1423ec:	e0411000 	sub	r1, r1, r0
        1423f0:	e1a02005 	mov	r2, r5
        1423f4:	eb6a76f3 	bl	1bdffc8 <$NewHeap>
        1423f8:	e1a05000 	mov	r5, r0
        1423fc:	e1a00007 	mov	r0, r7
        142400:	eb6a835e 	bl	1be3180 <$SetHeap>
        142404:	e3350000 	teq	r5, #0	; 0x0
        142408:	0a00000b 	beq	14243c <NewVMHeap+0x104>
        14240c:	e1a00005 	mov	r0, r5
        142410:	eb6a7b1a 	bl	1be1080 <$AddSemaphoreToHeap>
        142414:	e1a00005 	mov	r0, r5
        142418:	eb6a76f1 	bl	1bdffe4 <$SetHeapIsVMBacked>
        14241c:	e1a02005 	mov	r2, r5
        142420:	e59f1010 	ldr	r1, [pc, #10]	; 142438 <NewVMHeap+0x100>
        142424:	e1a00005 	mov	r0, r5
        142428:	eb6a6671 	bl	1bdbdf4 <$SetRemoveRoutine>
        14242c:	e5845000 	str	r5, [r4]
        142430:	ea000002 	b	142440 <NewVMHeap+0x108>
        142434:	0c10105c 	ldceq	0, cr1, [r0], -#368
        142438:	01b78c44 	moveqs	r8, r4, asr #24
        14243c:	e3e0606b 	mvn	r6, #107	; 0x6b
        142440:	e1a00006 	mov	r0, r6
        142444:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NewPersistentVMHeap
 * Address: 00142448
 */
void globals::NewPersistentVMHeap() {
    /*
        142448:	e1a0c00d 	mov	ip, sp
        14244c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        142450:	e24cb004 	sub	fp, ip, #4	; 0x4
        142454:	e1b05000 	movs	r5, r0
        142458:	e1a07001 	mov	r7, r1
        14245c:	e1a04002 	mov	r4, r2
        142460:	e1a06003 	mov	r6, r3
        142464:	e59ba004 	ldr	sl, [fp, #4]
        142468:	e24dd014 	sub	sp, sp, #20	; 0x14
        14246c:	e3e09000 	mvn	r9, #0	; 0x0
        142470:	1a000002 	bne	142480 <NewPersistentVMHeap+0x38>
        142474:	e59f0108 	ldr	r0, [pc, #108]	; 142584 <NewPersistentVMHeap+0x13c>
        142478:	e5900000 	ldr	r0, [r0]
        14247c:	e5305020 	ldr	r5, [r0, -#32]!
        142480:	e3a08000 	mov	r8, #0	; 0x0
        142484:	e28d3010 	add	r3, sp, #16	; 0x10
        142488:	e1a0200d 	mov	r2, sp
        14248c:	e1a01008 	mov	r1, r8
        142490:	e3a00000 	mov	r0, #0	; 0x0
        142494:	ebff6cf7 	bl	11d878 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl>
        142498:	e3300000 	teq	r0, #0	; 0x0
        14249c:	0a000039 	beq	142588 <NewPersistentVMHeap+0x140>
        1424a0:	e59d0004 	ldr	r0, [sp, #4]
        1424a4:	e1300005 	teq	r0, r5
        1424a8:	01a09008 	moveq	r9, r8
        1424ac:	0a000007 	beq	1424d0 <NewPersistentVMHeap+0x88>
        1424b0:	e2888001 	add	r8, r8, #1	; 0x1
        1424b4:	e28d3010 	add	r3, sp, #16	; 0x10
        1424b8:	e1a0200d 	mov	r2, sp
        1424bc:	e1a01008 	mov	r1, r8
        1424c0:	e3a00000 	mov	r0, #0	; 0x0
        1424c4:	ebff6ceb 	bl	11d878 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl>
        1424c8:	e3300000 	teq	r0, #0	; 0x0
        1424cc:	1afffff3 	bne	1424a0 <NewPersistentVMHeap+0x58>
        1424d0:	e3790001 	cmn	r9, #1	; 0x1
        1424d4:	0a00002b 	beq	142588 <NewPersistentVMHeap+0x140>
        1424d8:	e3863101 	orr	r3, r6, #1073741824	; 0x40000000
        1424dc:	e1a02004 	mov	r2, r4
        1424e0:	e1a01007 	mov	r1, r7
        1424e4:	e1a00005 	mov	r0, r5
        1424e8:	eb6a7f17 	bl	1be214c <$NewVMHeap>
        1424ec:	e58d0010 	str	r0, [sp, #16]
        1424f0:	e3300000 	teq	r0, #0	; 0x0
        1424f4:	1a000020 	bne	14257c <NewPersistentVMHeap+0x134>
        1424f8:	e24dd024 	sub	sp, sp, #36	; 0x24
        1424fc:	e28d0014 	add	r0, sp, #20	; 0x14
        142500:	eb66b8c5 	bl	1af081c <TSingleQContainer::$__ct(void)>
        142504:	e28d202c 	add	r2, sp, #44	; 0x2c
        142508:	e28d1030 	add	r1, sp, #48	; 0x30
        14250c:	e5940000 	ldr	r0, [r4]
        142510:	eb6a4531 	bl	1bd39dc <$GetHeapAreaInfo>
        142514:	e58d0034 	str	r0, [sp, #52]
        142518:	e3300000 	teq	r0, #0	; 0x0
        14251c:	1a000015 	bne	142578 <NewPersistentVMHeap+0x130>
        142520:	e1a03009 	mov	r3, r9
        142524:	e1a0100a 	mov	r1, sl
        142528:	e1a0000d 	mov	r0, sp
        14252c:	e3a02001 	mov	r2, #1	; 0x1
        142530:	eb66ea37 	bl	1afce14 <PersistentDBEntry::$Init(unsigned long, unsigned char, unsigned long)>
        142534:	e5940000 	ldr	r0, [r4]
        142538:	e59d1030 	ldr	r1, [sp, #48]
        14253c:	e1a02001 	mov	r2, r1
        142540:	e59d302c 	ldr	r3, [sp, #44]
        142544:	e0431001 	sub	r1, r3, r1
        142548:	e98d0005 	stmib	sp, {r0, r2}
        14254c:	e58d100c 	str	r1, [sp, #12]
        142550:	e59d0020 	ldr	r0, [sp, #32]
        142554:	e3c00080 	bic	r0, r0, #128	; 0x80
        142558:	e58d0020 	str	r0, [sp, #32]
        14255c:	e1a0100d 	mov	r1, sp
        142560:	e1a0000a 	mov	r0, sl
        142564:	eb674d4c 	bl	1b15a9c <$RegisterPersistentNewEntry__13MemObjManagerSFUlP17PersistentDBEntry>
        142568:	e58d0034 	str	r0, [sp, #52]
        14256c:	e3300000 	teq	r0, #0	; 0x0
        142570:	15940000 	ldrne	r0, [r4]
        142574:	1b6a7acb 	blne	1be10a8 <$DestroyVMHeap>
        142578:	e28dd024 	add	sp, sp, #36	; 0x24
        14257c:	e59d0010 	ldr	r0, [sp, #16]
        142580:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        142584:	0c10105c 	ldceq	0, cr1, [r0], -#368
        142588:	e3a00022 	mov	r0, #34	; 0x22
        14258c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        142590:	e58d0010 	str	r0, [sp, #16]
        142594:	eafffff8 	b	14257c <NewPersistentVMHeap+0x134>
    */
}

/**
 * Symbol: NewSegregatedVMHeap
 * Address: 001425e8
 */
void globals::NewSegregatedVMHeap() {
    /*
        1425e8:	e1a0c00d 	mov	ip, sp
        1425ec:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1425f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1425f4:	e1a04000 	mov	r4, r0
        1425f8:	e1a06001 	mov	r6, r1
        1425fc:	e1a05002 	mov	r5, r2
        142600:	e1a07003 	mov	r7, r3
        142604:	e59b9004 	ldr	r9, [fp, #4]
        142608:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14260c:	e3a00000 	mov	r0, #0	; 0x0
        142610:	e58d0008 	str	r0, [sp, #8]
        142614:	e58d0004 	str	r0, [sp, #4]
        142618:	e1a03009 	mov	r3, r9
        14261c:	e58d0000 	str	r0, [sp]
        142620:	e28d2008 	add	r2, sp, #8	; 0x8
        142624:	e1a01006 	mov	r1, r6
        142628:	e1a00004 	mov	r0, r4
        14262c:	eb6a7ec6 	bl	1be214c <$NewVMHeap>
        142630:	e1b08000 	movs	r8, r0
        142634:	1a000038 	bne	14271c <NewSegregatedVMHeap+0x134>
        142638:	e3550000 	cmp	r5, #0	; 0x0
        14263c:	da000033 	ble	142710 <NewSegregatedVMHeap+0x128>
        142640:	e1b01006 	movs	r1, r6
        142644:	42811003 	addmi	r1, r1, #3	; 0x3
        142648:	e1a01141 	mov	r1, r1, asr #2
        14264c:	e1a03009 	mov	r3, r9
        142650:	e28d2004 	add	r2, sp, #4	; 0x4
        142654:	e1a00004 	mov	r0, r4
        142658:	eb6a7ebb 	bl	1be214c <$NewVMHeap>
        14265c:	e1b08000 	movs	r8, r0
        142660:	1a00002d 	bne	14271c <NewSegregatedVMHeap+0x134>
        142664:	e59d0004 	ldr	r0, [sp, #4]
        142668:	eb69766f 	bl	1ba002c <$ClobberHeapSemaphore>
        14266c:	e59d0008 	ldr	r0, [sp, #8]
        142670:	eb6a764c 	bl	1bdffa8 <$GetSkiaHeapSemaphore>
        142674:	e1a01000 	mov	r1, r0
        142678:	e59d0004 	ldr	r0, [sp, #4]
        14267c:	eb6a765e 	bl	1bdfffc <$SetSkiaHeapSemaphore>
        142680:	e99d0003 	ldmib	sp, {r0, r1}
        142684:	eb6a7652 	bl	1bdffd4 <$SetFixedHeap>
        142688:	e59d0008 	ldr	r0, [sp, #8]
        14268c:	e59d1004 	ldr	r1, [sp, #4]
        142690:	eb68dd97 	bl	1b79cf4 <$SetMPHeap>
        142694:	e59d1004 	ldr	r1, [sp, #4]
        142698:	e1a00001 	mov	r0, r1
        14269c:	eb68dd94 	bl	1b79cf4 <$SetMPHeap>
        1426a0:	e1a03009 	mov	r3, r9
        1426a4:	e1a0200d 	mov	r2, sp
        1426a8:	e1a01005 	mov	r1, r5
        1426ac:	e1a00004 	mov	r0, r4
        1426b0:	eb6a7ea5 	bl	1be214c <$NewVMHeap>
        1426b4:	e1b08000 	movs	r8, r0
        1426b8:	1a000017 	bne	14271c <NewSegregatedVMHeap+0x134>
        1426bc:	e59d0000 	ldr	r0, [sp]
        1426c0:	e59d1008 	ldr	r1, [sp, #8]
        1426c4:	eb6a7642 	bl	1bdffd4 <$SetFixedHeap>
        1426c8:	e89d0003 	ldmia	sp, {r0, r1}
        1426cc:	eb68dd88 	bl	1b79cf4 <$SetMPHeap>
        1426d0:	e59d0008 	ldr	r0, [sp, #8]
        1426d4:	e59d1000 	ldr	r1, [sp]
        1426d8:	eb6a7645 	bl	1bdfff4 <$SetRelocHeap>
        1426dc:	e59d0004 	ldr	r0, [sp, #4]
        1426e0:	e59d1000 	ldr	r1, [sp]
        1426e4:	eb6a7642 	bl	1bdfff4 <$SetRelocHeap>
        1426e8:	e59d1000 	ldr	r1, [sp]
        1426ec:	e1a00001 	mov	r0, r1
        1426f0:	eb6a763f 	bl	1bdfff4 <$SetRelocHeap>
        1426f4:	e59d0000 	ldr	r0, [sp]
        1426f8:	eb69764b 	bl	1ba002c <$ClobberHeapSemaphore>
        1426fc:	e59d0008 	ldr	r0, [sp, #8]
        142700:	eb6a7628 	bl	1bdffa8 <$GetSkiaHeapSemaphore>
        142704:	e1a01000 	mov	r1, r0
        142708:	e59d0000 	ldr	r0, [sp]
        14270c:	eb6a763a 	bl	1bdfffc <$SetSkiaHeapSemaphore>
        142710:	e59d0008 	ldr	r0, [sp, #8]
        142714:	e5870000 	str	r0, [r7]
        142718:	ea000003 	b	14272c <NewSegregatedVMHeap+0x144>
        14271c:	e3380000 	teq	r8, #0	; 0x0
        142720:	159d0008 	ldrne	r0, [sp, #8]
        142724:	13300000 	teqne	r0, #0	; 0x0
        142728:	1b6a7a5e 	blne	1be10a8 <$DestroyVMHeap>
        14272c:	e1a00008 	mov	r0, r8
        142730:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: NewHeapAt
 * Address: 00142818
 */
void globals::NewHeapAt() {
    /*
        142818:	e1a0c00d 	mov	ip, sp
        14281c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        142820:	e24cb004 	sub	fp, ip, #4	; 0x4
        142824:	e1a04002 	mov	r4, r2
        142828:	e3a02b01 	mov	r2, #1024	; 0x400
        14282c:	eb6a75e5 	bl	1bdffc8 <$NewHeap>
        142830:	e3300000 	teq	r0, #0	; 0x0
        142834:	03e0006b 	mvneq	r0, #107	; 0x6b
        142838:	15840000 	strne	r0, [r4]
        14283c:	13a00000 	movne	r0, #0	; 0x0
        142840:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NewPtr
 * Address: 00142b28
 */
void globals::NewPtr() {
    /*
        142b28:	e1a0c00d 	mov	ip, sp
        142b2c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        142b30:	e24cb004 	sub	fp, ip, #4	; 0x4
        142b34:	e1a04000 	mov	r4, r0
        142b38:	e59f51a4 	ldr	r5, [pc, #1a4]	; 142ce4 <NewPtr+0x1bc>
        142b3c:	e5d50000 	ldrb	r0, [r5]
        142b40:	e3300000 	teq	r0, #0	; 0x0
        142b44:	0a00001c 	beq	142bbc <NewPtr+0x94>
        142b48:	e595001c 	ldr	r0, [r5, #28]
        142b4c:	e2800001 	add	r0, r0, #1	; 0x1
        142b50:	e585001c 	str	r0, [r5, #28]
        142b54:	e5951010 	ldr	r1, [r5, #16]
        142b58:	e1300001 	teq	r0, r1
        142b5c:	03a00023 	moveq	r0, #35	; 0x23
        142b60:	0b6a7d80 	bleq	1be2168 <$ReportMemMgrTrap(long)>
        142b64:	e595000c 	ldr	r0, [r5, #12]
        142b68:	e3300000 	teq	r0, #0	; 0x0
        142b6c:	0a000006 	beq	142b8c <NewPtr+0x64>
        142b70:	eb6a7d62 	bl	1be2100 <$HashCallChain>
        142b74:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
        142b78:	e595100c 	ldr	r1, [r5, #12]
        142b7c:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
        142b80:	e1300001 	teq	r0, r1
        142b84:	059f015c 	ldreq	r0, [pc, #15c]	; 142ce8 <NewPtr+0x1c0>
        142b88:	0b6a7d76 	bleq	1be2168 <$ReportMemMgrTrap(long)>
        142b8c:	e5950004 	ldr	r0, [r5, #4]
        142b90:	e3300000 	teq	r0, #0	; 0x0
        142b94:	0a000002 	beq	142ba4 <NewPtr+0x7c>
        142b98:	e1540000 	cmp	r4, r0
        142b9c:	33a0003c 	movcc	r0, #60	; 0x3c
        142ba0:	3a000004 	bcc	142bb8 <NewPtr+0x90>
        142ba4:	e5950008 	ldr	r0, [r5, #8]
        142ba8:	e1540000 	cmp	r4, r0
        142bac:	3a000002 	bcc	142bbc <NewPtr+0x94>
        142bb0:	e3a0003d 	mov	r0, #61	; 0x3d
        142bb4:	e2800c3e 	add	r0, r0, #15872	; 0x3e00
        142bb8:	eb6a7d6a 	bl	1be2168 <$ReportMemMgrTrap(long)>
        142bbc:	e59f0128 	ldr	r0, [pc, #128]	; 142cec <NewPtr+0x1c4>
        142bc0:	e5d00000 	ldrb	r0, [r0]
        142bc4:	e59f7124 	ldr	r7, [pc, #124]	; 142cf0 <NewPtr+0x1c8>
        142bc8:	e3300000 	teq	r0, #0	; 0x0
        142bcc:	0a00004f 	beq	142d10 <NewPtr+0x1e8>
        142bd0:	eb6a7945 	bl	1be10ec <$GetHeap>
        142bd4:	eb6a4fd3 	bl	1bd6b28 <$IsSafeHeap(void *)>
        142bd8:	e3300000 	teq	r0, #0	; 0x0
        142bdc:	1a00004b 	bne	142d10 <NewPtr+0x1e8>
        142be0:	e3a09000 	mov	r9, #0	; 0x0
        142be4:	e3a00000 	mov	r0, #0	; 0x0
        142be8:	eb6a7941 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142bec:	e3300000 	teq	r0, #0	; 0x0
        142bf0:	0a000004 	beq	142c08 <NewPtr+0xe0>
        142bf4:	e3a09001 	mov	r9, #1	; 0x1
        142bf8:	e3a00000 	mov	r0, #0	; 0x0
        142bfc:	eb6a793c 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142c00:	e3a01000 	mov	r1, #0	; 0x0
        142c04:	eb6a2ed2 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        142c08:	e24dd004 	sub	sp, sp, #4	; 0x4
        142c0c:	e59fa0e0 	ldr	sl, [pc, #e0]	; 142cf4 <NewPtr+0x1cc>
        142c10:	e59a0000 	ldr	r0, [sl]
        142c14:	e3100040 	tst	r0, #64	; 0x40
        142c18:	0a000006 	beq	142c38 <NewPtr+0x110>
        142c1c:	e1a0100d 	mov	r1, sp
        142c20:	e3a00000 	mov	r0, #0	; 0x0
        142c24:	eb6a70cb 	bl	1bdef58 <$CheckHeap>
        142c28:	e1b01000 	movs	r1, r0
        142c2c:	159d2000 	ldrne	r2, [sp]
        142c30:	128f0f30 	addne	r0, pc, #192	; 0xc0
        142c34:	1b6a7d4c 	blne	1be216c <$ReportSmashedHeap(char *, long, void *)>
        142c38:	e28dd004 	add	sp, sp, #4	; 0x4
        142c3c:	e1a00004 	mov	r0, r4
        142c40:	eb68d808 	bl	1b78c68 <$NewDirectBlock>
        142c44:	e1b06000 	movs	r6, r0
        142c48:	e59f80b4 	ldr	r8, [pc, #b4]	; 142d04 <NewPtr+0x1dc>
        142c4c:	05980000 	ldreq	r0, [r8]
        142c50:	02400054 	subeq	r0, r0, #84	; 0x54
        142c54:	03e0106b 	mvneq	r1, #107	; 0x6b
        142c58:	0a000007 	beq	142c7c <NewPtr+0x154>
        142c5c:	e5970000 	ldr	r0, [r7]
        142c60:	e0800004 	add	r0, r0, r4
        142c64:	e5870000 	str	r0, [r7]
        142c68:	e1a00006 	mov	r0, r6
        142c6c:	eb68d7f5 	bl	1b78c48 <$IncrementBlockBusy>
        142c70:	e5980000 	ldr	r0, [r8]
        142c74:	e2400054 	sub	r0, r0, #84	; 0x54
        142c78:	e3a01000 	mov	r1, #0	; 0x0
        142c7c:	e5a01048 	str	r1, [r0, #72]!
        142c80:	e24dd004 	sub	sp, sp, #4	; 0x4
        142c84:	e59a0000 	ldr	r0, [sl]
        142c88:	e3100040 	tst	r0, #64	; 0x40
        142c8c:	0a000006 	beq	142cac <NewPtr+0x184>
        142c90:	e1a0100d 	mov	r1, sp
        142c94:	e3a00000 	mov	r0, #0	; 0x0
        142c98:	eb6a70ae 	bl	1bdef58 <$CheckHeap>
        142c9c:	e1b01000 	movs	r1, r0
        142ca0:	159d2000 	ldrne	r2, [sp]
        142ca4:	128f0f17 	addne	r0, pc, #92	; 0x5c
        142ca8:	1b6a7d2f 	blne	1be216c <$ReportSmashedHeap(char *, long, void *)>
        142cac:	e28dd004 	add	sp, sp, #4	; 0x4
        142cb0:	e3390000 	teq	r9, #0	; 0x0
        142cb4:	0a000002 	beq	142cc4 <NewPtr+0x19c>
        142cb8:	e3a00000 	mov	r0, #0	; 0x0
        142cbc:	eb6a790c 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142cc0:	eb6a5bf4 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        142cc4:	e5d50020 	ldrb	r0, [r5, #32]
        142cc8:	e3300000 	teq	r0, #0	; 0x0
        142ccc:	0a000026 	beq	142d6c <NewPtr+0x244>
        142cd0:	eb6a7d0a 	bl	1be2100 <$HashCallChain>
        142cd4:	e3c01102 	bic	r1, r0, #-2147483648	; 0x80000000
        142cd8:	e1a00006 	mov	r0, r6
        142cdc:	eb6a74c1 	bl	1bdffe8 <$SetPtrName>
        142ce0:	ea000021 	b	142d6c <NewPtr+0x244>
        142ce4:	0c10165c 	ldceq	6, cr1, [r0], -#368
        142ce8:	68617368 	stmvsda	r1!, {r3, r5, r6, r8, r9, ip, sp, lr}^
        142cec:	0c10102c 	ldceq	0, cr1, [r0], -#176
        142cf0:	0c101014 	ldceq	0, cr1, [r0], -#80
        142cf4:	000013fc 	streqd	r1, [r0], -ip
        142cf8:	656e7465 	strvsb	r7, [lr, -#1125]!
        142cfc:	72696e67 	rsbvc	r6, r9, #1648	; 0x670
        142d00:	00000000 	andeq	r0, r0, r0
        142d04:	0c10105c 	ldceq	0, cr1, [r0], -#368
        142d08:	6c656176 	stfvse	f6, [r5], -#472
        142d0c:	696e6700 	stmvsdb	lr!, {r8, r9, sl, sp, lr}^
        142d10:	e3a08000 	mov	r8, #0	; 0x0
        142d14:	e3a00000 	mov	r0, #0	; 0x0
        142d18:	eb6a78f5 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142d1c:	e3300000 	teq	r0, #0	; 0x0
        142d20:	0a000004 	beq	142d38 <NewPtr+0x210>
        142d24:	e3a08001 	mov	r8, #1	; 0x1
        142d28:	e3a00000 	mov	r0, #0	; 0x0
        142d2c:	eb6a78f0 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142d30:	e3a01000 	mov	r1, #0	; 0x0
        142d34:	eb6a2e86 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        142d38:	e59f004c 	ldr	r0, [pc, #4c]	; 142d8c <NewPtr+0x264>
        142d3c:	e5901000 	ldr	r1, [r0]
        142d40:	e1a00004 	mov	r0, r4
        142d44:	eb670549 	bl	1b04270 <$SafeHeapAlloc(long, SSafeHeapPage *)>
        142d48:	e1b06000 	movs	r6, r0
        142d4c:	15970000 	ldrne	r0, [r7]
        142d50:	10800004 	addne	r0, r0, r4
        142d54:	15870000 	strne	r0, [r7]
        142d58:	e3380000 	teq	r8, #0	; 0x0
        142d5c:	0a000002 	beq	142d6c <NewPtr+0x244>
        142d60:	e3a00000 	mov	r0, #0	; 0x0
        142d64:	eb6a78e2 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142d68:	eb6a5bca 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        142d6c:	e5b50018 	ldr	r0, [r5, #24]!
        142d70:	e3300000 	teq	r0, #0	; 0x0
        142d74:	0a000002 	beq	142d84 <NewPtr+0x25c>
        142d78:	e1360000 	teq	r6, r0
        142d7c:	03a00026 	moveq	r0, #38	; 0x26
        142d80:	0b6a7cf8 	bleq	1be2168 <$ReportMemMgrTrap(long)>
        142d84:	e1a00006 	mov	r0, r6
        142d88:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        142d8c:	0c101080 	ldceq	0, cr1, [r0], -#512
    */
}

/**
 * Symbol: NewWiredPtr
 * Address: 00142e2c
 */
void globals::NewWiredPtr() {
    /*
        142e2c:	e1a0c00d 	mov	ip, sp
        142e30:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        142e34:	e24cb004 	sub	fp, ip, #4	; 0x4
        142e38:	e1a04000 	mov	r4, r0
        142e3c:	e3a08000 	mov	r8, #0	; 0x0
        142e40:	e3a07000 	mov	r7, #0	; 0x0
        142e44:	e3a00000 	mov	r0, #0	; 0x0
        142e48:	eb6a78a9 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142e4c:	e3300000 	teq	r0, #0	; 0x0
        142e50:	0a000004 	beq	142e68 <NewWiredPtr+0x3c>
        142e54:	e3a07001 	mov	r7, #1	; 0x1
        142e58:	e3a00000 	mov	r0, #0	; 0x0
        142e5c:	eb6a78a4 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142e60:	e3a01000 	mov	r1, #0	; 0x0
        142e64:	eb6a2e3a 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        142e68:	eb6a789c 	bl	1be10e0 <$GetCurrentHeap>
        142e6c:	eb6a744e 	bl	1bdffac <$GetWiredHeap>
        142e70:	e1b05000 	movs	r5, r0
        142e74:	1a000036 	bne	142f54 <NewWiredPtr+0x128>
        142e78:	e24dd008 	sub	sp, sp, #8	; 0x8
        142e7c:	e1a0300d 	mov	r3, sp
        142e80:	e28d2004 	add	r2, sp, #4	; 0x4
        142e84:	e92d000c 	stmdb	sp!, {r2, r3}
        142e88:	e59f009c 	ldr	r0, [pc, #9c]	; 142f2c <NewWiredPtr+0x100>
        142e8c:	e5900000 	ldr	r0, [r0]
        142e90:	e5100020 	ldr	r0, [r0, -#32]
        142e94:	e3a03001 	mov	r3, #1	; 0x1
        142e98:	e3a02902 	mov	r2, #32768	; 0x8000
        142e9c:	e3a01000 	mov	r1, #0	; 0x0
        142ea0:	eb6a533c 	bl	1bd7b98 <$NewHeapArea>
        142ea4:	e28dd008 	add	sp, sp, #8	; 0x8
        142ea8:	e3300000 	teq	r0, #0	; 0x0
        142eac:	1a000022 	bne	142f3c <NewWiredPtr+0x110>
        142eb0:	e3a00010 	mov	r0, #16	; 0x10
        142eb4:	eb68d76b 	bl	1b78c68 <$NewDirectBlock>
        142eb8:	e1b05000 	movs	r5, r0
        142ebc:	0a00001c 	beq	142f34 <NewWiredPtr+0x108>
        142ec0:	e59f6068 	ldr	r6, [pc, #68]	; 142f30 <NewWiredPtr+0x104>
        142ec4:	e5960000 	ldr	r0, [r6]
        142ec8:	e0800004 	add	r0, r0, r4
        142ecc:	e5860000 	str	r0, [r6]
        142ed0:	e1a00005 	mov	r0, r5
        142ed4:	eb68d75b 	bl	1b78c48 <$IncrementBlockBusy>
        142ed8:	e59d0004 	ldr	r0, [sp, #4]
        142edc:	e2400001 	sub	r0, r0, #1	; 0x1
        142ee0:	e2800a01 	add	r0, r0, #4096	; 0x1000
        142ee4:	e1a00620 	mov	r0, r0, lsr #12
        142ee8:	e1a00600 	mov	r0, r0, lsl #12
        142eec:	e5850000 	str	r0, [r5]
        142ef0:	e59d0000 	ldr	r0, [sp]
        142ef4:	e5850004 	str	r0, [r5, #4]
        142ef8:	e1a00005 	mov	r0, r5
        142efc:	eb66f438 	bl	1afffe4 <$New__14SWiredHeapPageSFP15SWiredHeapDescr>
        142f00:	e5850008 	str	r0, [r5, #8]
        142f04:	e3300000 	teq	r0, #0	; 0x0
        142f08:	1a00000d 	bne	142f44 <NewWiredPtr+0x118>
        142f0c:	e1a00005 	mov	r0, r5
        142f10:	eb68d334 	bl	1b77be8 <$DecrementBlockBusy>
        142f14:	e1a00005 	mov	r0, r5
        142f18:	eb68d333 	bl	1b77bec <$DisposeDirectBlock>
        142f1c:	e5960000 	ldr	r0, [r6]
        142f20:	e0400004 	sub	r0, r0, r4
        142f24:	e5860000 	str	r0, [r6]
        142f28:	ea000003 	b	142f3c <NewWiredPtr+0x110>
        142f2c:	0c10105c 	ldceq	0, cr1, [r0], -#368
        142f30:	0c101014 	ldceq	0, cr1, [r0], -#80
        142f34:	e59d0004 	ldr	r0, [sp, #4]
        142f38:	eb6a3e89 	bl	1bd2964 <$FreePagedMem>
        142f3c:	e28dd008 	add	sp, sp, #8	; 0x8
        142f40:	ea000007 	b	142f64 <NewWiredPtr+0x138>
        142f44:	eb6a7865 	bl	1be10e0 <$GetCurrentHeap>
        142f48:	e1a01005 	mov	r1, r5
        142f4c:	eb6a742b 	bl	1be0000 <$SetWiredHeap>
        142f50:	e28dd008 	add	sp, sp, #8	; 0x8
        142f54:	e1a00004 	mov	r0, r4
        142f58:	e5b51008 	ldr	r1, [r5, #8]!
        142f5c:	eb6704c3 	bl	1b04270 <$SafeHeapAlloc(long, SSafeHeapPage *)>
        142f60:	e1a08000 	mov	r8, r0
        142f64:	e3370000 	teq	r7, #0	; 0x0
        142f68:	0a000002 	beq	142f78 <NewWiredPtr+0x14c>
        142f6c:	e3a00000 	mov	r0, #0	; 0x0
        142f70:	eb6a785f 	bl	1be10f4 <$GetHeapSemaphore(void *)>
        142f74:	eb6a5b47 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        142f78:	e1a00008 	mov	r0, r8
        142f7c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: NewNamedPtr
 * Address: 00143090
 */
void globals::NewNamedPtr() {
    /*
        143090:	e1a0c00d 	mov	ip, sp
        143094:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        143098:	e24cb004 	sub	fp, ip, #4	; 0x4
        14309c:	e1a04001 	mov	r4, r1
        1430a0:	eb6a7c26 	bl	1be2140 <$NewPtr>
        1430a4:	e1b05000 	movs	r5, r0
        1430a8:	11a01004 	movne	r1, r4
        1430ac:	11a00005 	movne	r0, r5
        1430b0:	1b6a73cc 	blne	1bdffe8 <$SetPtrName>
        1430b4:	e1a00005 	mov	r0, r5
        1430b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NewPtrClear
 * Address: 001431e0
 */
void globals::NewPtrClear() {
    /*
        1431e0:	e1a0c00d 	mov	ip, sp
        1431e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1431e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1431ec:	e1a04000 	mov	r4, r0
        1431f0:	eb6a7bd2 	bl	1be2140 <$NewPtr>
        1431f4:	e1b05000 	movs	r5, r0
        1431f8:	11a01004 	movne	r1, r4
        1431fc:	11a00005 	movne	r0, r5
        143200:	1b697388 	blne	1ba0028 <$ClearMemory>
        143204:	e1a00005 	mov	r0, r5
        143208:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Notify(RefVar const &)
 * Address: 00146584
 */
Notify(RefVar const &) {
    /*
        146584:	e1a02000 	mov	r2, r0
        146588:	e59f000c 	ldr	r0, [pc, #c]	; 14659c <Notify(RefVar const &)+0x18>
        14658c:	e5900000 	ldr	r0, [r0]
        146590:	e2800024 	add	r0, r0, #36	; 0x24
        146594:	e59f1004 	ldr	r1, [pc, #4]	; 1465a0 <Notify(RefVar const &)+0x1c>
        146598:	ea69f30d 	b	1bc31d4 <$DoMessage__FRC6RefVarN21>
        14659c:	0c101934 	ldceq	9, cr1, [r0], -#208
        1465a0:	00683aa8 	rsbeq	r3, r8, r8, lsr #21
    */
}

/**
 * Symbol: NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)
 * Address: 001619f4
 */
NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *) {
    /*
        1619f4:	e1a0c00d 	mov	ip, sp
        1619f8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1619fc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        161a00:	e24cb014 	sub	fp, ip, #20	; 0x14
        161a04:	e1a04001 	mov	r4, r1
        161a08:	e1a05002 	mov	r5, r2
        161a0c:	e1a06003 	mov	r6, r3
        161a10:	e3a00000 	mov	r0, #0	; 0x0
        161a14:	e59b7020 	ldr	r7, [fp, #32]
        161a18:	e59b801c 	ldr	r8, [fp, #28]
        161a1c:	e28ba014 	add	sl, fp, #20	; 0x14
        161a20:	e89a0600 	ldmia	sl, {r9, sl}
        161a24:	e56d0004 	strb	r0, [sp, -#4]!
        161a28:	e1a00001 	mov	r0, r1
        161a2c:	eb66754a 	bl	1afef5c <TStore::$LockStore(void)>
        161a30:	e3a03000 	mov	r3, #0	; 0x0
        161a34:	e1a02007 	mov	r2, r7
        161a38:	e1a01008 	mov	r1, r8
        161a3c:	e1a0000a 	mov	r0, sl
        161a40:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        161a44:	e1a03009 	mov	r3, r9
        161a48:	e1a02005 	mov	r2, r5
        161a4c:	e1a01004 	mov	r1, r4
        161a50:	e59b0004 	ldr	r0, [fp, #4]
        161a54:	eb66af1a 	bl	1b0d6c4 <$AllocatePackage(CPipe *, TStore *, unsigned long, char *, void *, long, TCallbackCompressor *, TLOCallback *)>
        161a58:	e28dd010 	add	sp, sp, #16	; 0x10
        161a5c:	e1a07000 	mov	r7, r0
        161a60:	e3300001 	teq	r0, #1	; 0x1
        161a64:	03a00000 	moveq	r0, #0	; 0x0
        161a68:	05860000 	streq	r0, [r6]
        161a6c:	0a000004 	beq	161a84 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0x90>
        161a70:	e3370000 	teq	r7, #0	; 0x0
        161a74:	0a000003 	beq	161a88 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0x94>
        161a78:	e1a00004 	mov	r0, r4
        161a7c:	eb663f8a 	bl	1af18ac <TStore::$Abort(void)>
        161a80:	e1a00007 	mov	r0, r7
        161a84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        161a88:	e24dd004 	sub	sp, sp, #4	; 0x4
        161a8c:	e28d3004 	add	r3, sp, #4	; 0x4
        161a90:	e92d0008 	stmdb	sp!, {r3}
        161a94:	e28d3004 	add	r3, sp, #4	; 0x4
        161a98:	e1a02006 	mov	r2, r6
        161a9c:	e1a01005 	mov	r1, r5
        161aa0:	e1a00004 	mov	r0, r4
        161aa4:	eb667d78 	bl	1b0108c <$PackageAvailable__FP6TStoreUlPUlPUcT4>
        161aa8:	e28dd004 	add	sp, sp, #4	; 0x4
        161aac:	e1b07000 	movs	r7, r0
        161ab0:	0a000003 	beq	161ac4 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0xd0>
        161ab4:	e1a01005 	mov	r1, r5
        161ab8:	e1a00004 	mov	r0, r4
        161abc:	eb69bb69 	bl	1bd0868 <$DeallocatePackage(TStore *, unsigned long)>
        161ac0:	ea000025 	b	161b5c <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0x168>
        161ac4:	e5dd0000 	ldrb	r0, [sp]
        161ac8:	e3300000 	teq	r0, #0	; 0x0
        161acc:	0a000005 	beq	161ae8 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0xf4>
        161ad0:	e3a00000 	mov	r0, #0	; 0x0
        161ad4:	e1a01005 	mov	r1, r5
        161ad8:	e5860000 	str	r0, [r6]
        161adc:	e1a00004 	mov	r0, r4
        161ae0:	eb69bb60 	bl	1bd0868 <$DeallocatePackage(TStore *, unsigned long)>
        161ae4:	ea000012 	b	161b34 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0x140>
        161ae8:	e24dd004 	sub	sp, sp, #4	; 0x4
        161aec:	e1a02005 	mov	r2, r5
        161af0:	e1a01004 	mov	r1, r4
        161af4:	e1a0000d 	mov	r0, sp
        161af8:	e3a03001 	mov	r3, #1	; 0x1
        161afc:	eb66c7bd 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
        161b00:	e3300000 	teq	r0, #0	; 0x0
        161b04:	0a000003 	beq	161b18 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0x124>
        161b08:	e1a01005 	mov	r1, r5
        161b0c:	e1a00004 	mov	r0, r4
        161b10:	eb69bb54 	bl	1bd0868 <$DeallocatePackage(TStore *, unsigned long)>
        161b14:	ea000005 	b	161b30 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0x13c>
        161b18:	e59d0000 	ldr	r0, [sp]
        161b1c:	eb66c7aa 	bl	1b139cc <$CommitObject(unsigned long)>
        161b20:	e3300000 	teq	r0, #0	; 0x0
        161b24:	1afffff7 	bne	161b08 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0x114>
        161b28:	e59d0000 	ldr	r0, [sp]
        161b2c:	ebfe8866 	bl	103ccc <UnmapLargeObject(unsigned long)>
        161b30:	e28dd004 	add	sp, sp, #4	; 0x4
        161b34:	e1a00004 	mov	r0, r4
        161b38:	eb669a4d 	bl	1b08474 <TStore::$UnlockStore(void)>
        161b3c:	e1a07000 	mov	r7, r0
        161b40:	e5dd0004 	ldrb	r0, [sp, #4]
        161b44:	e3300000 	teq	r0, #0	; 0x0
        161b48:	0a000003 	beq	161b5c <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0x168>
        161b4c:	e3a02000 	mov	r2, #0	; 0x0
        161b50:	e3a01000 	mov	r1, #0	; 0x0
        161b54:	e59f0008 	ldr	r0, [pc, #8]	; 161b64 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)+0x170>
        161b58:	eb6a370e 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
        161b5c:	e1a00007 	mov	r0, r7
        161b60:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        161b64:	ffffd8a3 	swinv	0x00ffd8a3
    */
}

/**
 * Symbol: NextTabOrCRCharOffset(unsigned short *, unsigned char *)
 * Address: 0017cd50
 */
NextTabOrCRCharOffset(unsigned short *, unsigned char *) {
    /*
        17cd50:	e3a02000 	mov	r2, #0	; 0x0
        17cd54:	e5903000 	ldr	r3, [r0]
        17cd58:	e1b03823 	movs	r3, r3, lsr #16
        17cd5c:	0a00000a 	beq	17cd8c <NextTabOrCRCharOffset(unsigned short *, unsigned char *)+0x3c>
        17cd60:	e5903000 	ldr	r3, [r0]
        17cd64:	e1a03823 	mov	r3, r3, lsr #16
        17cd68:	e3330009 	teq	r3, #9	; 0x9
        17cd6c:	0a000008 	beq	17cd94 <NextTabOrCRCharOffset(unsigned short *, unsigned char *)+0x44>
        17cd70:	e333000d 	teq	r3, #13	; 0xd
        17cd74:	03a00001 	moveq	r0, #1	; 0x1
        17cd78:	0a000006 	beq	17cd98 <NextTabOrCRCharOffset(unsigned short *, unsigned char *)+0x48>
        17cd7c:	e2822001 	add	r2, r2, #1	; 0x1
        17cd80:	e5b03002 	ldr	r3, [r0, #2]!
        17cd84:	e1b03823 	movs	r3, r3, lsr #16
        17cd88:	1afffff4 	bne	17cd60 <NextTabOrCRCharOffset(unsigned short *, unsigned char *)+0x10>
        17cd8c:	e3e00000 	mvn	r0, #0	; 0x0
        17cd90:	e1a0f00e 	mov	pc, lr
        17cd94:	e3a00000 	mov	r0, #0	; 0x0
        17cd98:	e5c10000 	strb	r0, [r1]
        17cd9c:	e1a00002 	mov	r0, r2
        17cda0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NextPolySegHit__FP12PolygonShapeR6TPointPlN23
 * Address: 0018ee60
 */
void globals::NextPolySegHit() {
    /*
        18ee60:	e1a0c00d 	mov	ip, sp
        18ee64:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18ee68:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18ee6c:	e24cb014 	sub	fp, ip, #20	; 0x14
        18ee70:	e1a04000 	mov	r4, r0
        18ee74:	e1a06001 	mov	r6, r1
        18ee78:	e1a05002 	mov	r5, r2
        18ee7c:	e59f9074 	ldr	r9, [pc, #74]	; 18eef8 <NextPolySegHit__FP12PolygonShapeR6TPointPlN23+0x98>
        18ee80:	e5990004 	ldr	r0, [r9, #4]
        18ee84:	e2808001 	add	r8, r0, #1	; 0x1
        18ee88:	e5920000 	ldr	r0, [r2]
        18ee8c:	e2807001 	add	r7, r0, #1	; 0x1
        18ee90:	e5940002 	ldr	r0, [r4, #2]
        18ee94:	e1570840 	cmp	r7, r0, asr #16
        18ee98:	aa000020 	bge	18ef20 <NextPolySegHit__FP12PolygonShapeR6TPointPlN23+0xc0>
        18ee9c:	e24dd038 	sub	sp, sp, #56	; 0x38
        18eea0:	e0840107 	add	r0, r4, r7, lsl #2
        18eea4:	e2801004 	add	r1, r0, #4	; 0x4
        18eea8:	e28d2004 	add	r2, sp, #4	; 0x4
        18eeac:	eb646143 	bl	1aa73c0 <$CalcSegParameters__FRC6TPointT1P9SegParams>
        18eeb0:	e5990004 	ldr	r0, [r9, #4]
        18eeb4:	e58d0024 	str	r0, [sp, #36]
        18eeb8:	e1a0200d 	mov	r2, sp
        18eebc:	e28d1004 	add	r1, sp, #4	; 0x4
        18eec0:	e1a00006 	mov	r0, r6
        18eec4:	eb64613e 	bl	1aa73c4 <$SegHitRatio(TPoint const &, SegParams const &, long *)>
        18eec8:	e2900102 	adds	r0, r0, #-2147483648	; 0x80000000
        18eecc:	13a00001 	movne	r0, #1	; 0x1
        18eed0:	e31000ff 	tst	r0, #255	; 0xff
        18eed4:	0a000008 	beq	18eefc <NextPolySegHit__FP12PolygonShapeR6TPointPlN23+0x9c>
        18eed8:	e59d0000 	ldr	r0, [sp]
        18eedc:	e3500000 	cmp	r0, #0	; 0x0
        18eee0:	b2600000 	rsblt	r0, r0, #0	; 0x0
        18eee4:	e58d0000 	str	r0, [sp]
        18eee8:	e1580000 	cmp	r8, r0
        18eeec:	c1a08000 	movgt	r8, r0
        18eef0:	c1a0a007 	movgt	sl, r7
        18eef4:	ea000004 	b	18ef0c <NextPolySegHit__FP12PolygonShapeR6TPointPlN23+0xac>
        18eef8:	0c101768 	ldceq	7, cr1, [r0], -#416
        18eefc:	e5990004 	ldr	r0, [r9, #4]
        18ef00:	e1580000 	cmp	r8, r0
        18ef04:	d28dd038 	addle	sp, sp, #56	; 0x38
        18ef08:	da000004 	ble	18ef20 <NextPolySegHit__FP12PolygonShapeR6TPointPlN23+0xc0>
        18ef0c:	e28dd038 	add	sp, sp, #56	; 0x38
        18ef10:	e2877001 	add	r7, r7, #1	; 0x1
        18ef14:	e5940002 	ldr	r0, [r4, #2]
        18ef18:	e1570840 	cmp	r7, r0, asr #16
        18ef1c:	baffffde 	blt	18ee9c <NextPolySegHit__FP12PolygonShapeR6TPointPlN23+0x3c>
        18ef20:	e5b90004 	ldr	r0, [r9, #4]!
        18ef24:	e1580000 	cmp	r8, r0
        18ef28:	c3a00000 	movgt	r0, #0	; 0x0
        18ef2c:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18ef30:	e59b3010 	ldr	r3, [fp, #16]
        18ef34:	e583a000 	str	sl, [r3]
        18ef38:	e59b0014 	ldr	r0, [fp, #20]
        18ef3c:	e5808000 	str	r8, [r0]
        18ef40:	e5940002 	ldr	r0, [r4, #2]
        18ef44:	e1a00840 	mov	r0, r0, asr #16
        18ef48:	e2400001 	sub	r0, r0, #1	; 0x1
        18ef4c:	e1570000 	cmp	r7, r0
        18ef50:	b1a00007 	movlt	r0, r7
        18ef54:	e5850000 	str	r0, [r5]
        18ef58:	e3a00001 	mov	r0, #1	; 0x1
        18ef5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NextPSegBegin__FP12PolygonShapeUclT3
 * Address: 0018ef60
 */
void globals::NextPSegBegin() {
    /*
        18ef60:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        18ef64:	e201c0ff 	and	ip, r1, #255	; 0xff
        18ef68:	e1a04002 	mov	r4, r2
        18ef6c:	e0921003 	adds	r1, r2, r3
        18ef70:	5a000005 	bpl	18ef8c <NextPSegBegin__FP12PolygonShapeUclT3+0x2c>
        18ef74:	e33c0000 	teq	ip, #0	; 0x0
        18ef78:	15901002 	ldrne	r1, [r0, #2]
        18ef7c:	11a01841 	movne	r1, r1, asr #16
        18ef80:	12412001 	subne	r2, r1, #1	; 0x1
        18ef84:	1a000007 	bne	18efa8 <NextPSegBegin__FP12PolygonShapeUclT3+0x48>
        18ef88:	ea000005 	b	18efa4 <NextPSegBegin__FP12PolygonShapeUclT3+0x44>
        18ef8c:	e590e002 	ldr	lr, [r0, #2]
        18ef90:	e151084e 	cmp	r1, lr, asr #16
        18ef94:	ba000003 	blt	18efa8 <NextPSegBegin__FP12PolygonShapeUclT3+0x48>
        18ef98:	e33c0000 	teq	ip, #0	; 0x0
        18ef9c:	13a02000 	movne	r2, #0	; 0x0
        18efa0:	1a000000 	bne	18efa8 <NextPSegBegin__FP12PolygonShapeUclT3+0x48>
        18efa4:	e3e02000 	mvn	r2, #0	; 0x0
        18efa8:	e3520000 	cmp	r2, #0	; 0x0
        18efac:	ba00000c 	blt	18efe4 <NextPSegBegin__FP12PolygonShapeUclT3+0x84>
        18efb0:	e0821003 	add	r1, r2, r3
        18efb4:	e080e101 	add	lr, r0, r1, lsl #2
        18efb8:	e28e5004 	add	r5, lr, #4	; 0x4
        18efbc:	e080e102 	add	lr, r0, r2, lsl #2
        18efc0:	e5955000 	ldr	r5, [r5]
        18efc4:	e59ee004 	ldr	lr, [lr, #4]
        18efc8:	e135000e 	teq	r5, lr
        18efcc:	1a000004 	bne	18efe4 <NextPSegBegin__FP12PolygonShapeUclT3+0x84>
        18efd0:	e1310004 	teq	r1, r4
        18efd4:	11a02001 	movne	r2, r1
        18efd8:	1affffe3 	bne	18ef6c <NextPSegBegin__FP12PolygonShapeUclT3+0xc>
        18efdc:	e3e00000 	mvn	r0, #0	; 0x0
        18efe0:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        18efe4:	e1a00002 	mov	r0, r2
        18efe8:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: NextHiliteIndex__FP6TPointlN22
 * Address: 0018efec
 */
void globals::NextHiliteIndex() {
    /*
        18efec:	e1a0c00d 	mov	ip, sp
        18eff0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18eff4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18eff8:	e24dd004 	sub	sp, sp, #4	; 0x4
        18effc:	e080c101 	add	ip, r0, r1, lsl #2
        18f000:	e59cc000 	ldr	ip, [ip]
        18f004:	e58dc000 	str	ip, [sp]
        18f008:	e281c001 	add	ip, r1, #1	; 0x1
        18f00c:	e1a0e00c 	mov	lr, ip
        18f010:	e15c0002 	cmp	ip, r2
        18f014:	aa000013 	bge	18f068 <NextHiliteIndex__FP6TPointlN22+0x7c>
        18f018:	e59d4002 	ldr	r4, [sp, #2]
        18f01c:	e1a04844 	mov	r4, r4, asr #16
        18f020:	e080510c 	add	r5, r0, ip, lsl #2
        18f024:	e5955002 	ldr	r5, [r5, #2]
        18f028:	e0544845 	subs	r4, r4, r5, asr #16
        18f02c:	42644000 	rsbmi	r4, r4, #0	; 0x0
        18f030:	e1540003 	cmp	r4, r3
        18f034:	ca000006 	bgt	18f054 <NextHiliteIndex__FP6TPointlN22+0x68>
        18f038:	e790410c 	ldr	r4, [r0, ip, lsl #2]
        18f03c:	e1a04844 	mov	r4, r4, asr #16
        18f040:	e59d5000 	ldr	r5, [sp]
        18f044:	e0744845 	rsbs	r4, r4, r5, asr #16
        18f048:	42644000 	rsbmi	r4, r4, #0	; 0x0
        18f04c:	e1540003 	cmp	r4, r3
        18f050:	da000001 	ble	18f05c <NextHiliteIndex__FP6TPointlN22+0x70>
        18f054:	e1a0000c 	mov	r0, ip
        18f058:	ea00000b 	b	18f08c <NextHiliteIndex__FP6TPointlN22+0xa0>
        18f05c:	e28cc001 	add	ip, ip, #1	; 0x1
        18f060:	e15c0002 	cmp	ip, r2
        18f064:	baffffeb 	blt	18f018 <NextHiliteIndex__FP6TPointlN22+0x2c>
        18f068:	e15e0002 	cmp	lr, r2
        18f06c:	aa000005 	bge	18f088 <NextHiliteIndex__FP6TPointlN22+0x9c>
        18f070:	e3530000 	cmp	r3, #0	; 0x0
        18f074:	da000003 	ble	18f088 <NextHiliteIndex__FP6TPointlN22+0x9c>
        18f078:	e0833fa3 	add	r3, r3, r3, lsr #31
        18f07c:	e1a030c3 	mov	r3, r3, asr #1
        18f080:	eb6460d8 	bl	1aa73e8 <$NextHiliteIndex__FP6TPointlN22>
        18f084:	ea000000 	b	18f08c <NextHiliteIndex__FP6TPointlN22+0xa0>
        18f088:	e3e00000 	mvn	r0, #0	; 0x0
        18f08c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NotifySend(TSharedMemMsg *)
 * Address: 00191e10
 */
NotifySend(TSharedMemMsg *) {
    /*
        191e10:	e1a0c00d 	mov	ip, sp
        191e14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        191e18:	e24cb004 	sub	fp, ip, #4	; 0x4
        191e1c:	e1a04000 	mov	r4, r0
        191e20:	e24dd004 	sub	sp, sp, #4	; 0x4
        191e24:	e1a0200d 	mov	r2, sp
        191e28:	e5901040 	ldr	r1, [r0, #64]
        191e2c:	e3a00002 	mov	r0, #2	; 0x2
        191e30:	eb658f20 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        191e34:	e3300000 	teq	r0, #0	; 0x0
        191e38:	1a000003 	bne	191e4c <NotifySend(TSharedMemMsg *)+0x3c>
        191e3c:	e5942054 	ldr	r2, [r4, #84]
        191e40:	e1a01004 	mov	r1, r4
        191e44:	e59d0000 	ldr	r0, [sp]
        191e48:	eb65cd1b 	bl	1b052bc <TPort::$Send(TSharedMemMsg *, unsigned long)>
        191e4c:	e3300000 	teq	r0, #0	; 0x0
        191e50:	11a01000 	movne	r1, r0
        191e54:	11a00004 	movne	r0, r4
        191e58:	1b658f10 	blne	1af5aa0 <TSharedMemMsg::$CompleteSender(long)>
        191e5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NotifyTimeout(TSharedMemMsg *)
 * Address: 00191e60
 */
NotifyTimeout(TSharedMemMsg *) {
    /*
        191e60:	e590103c 	ldr	r1, [r0, #60]
        191e64:	e3110080 	tst	r1, #128	; 0x80
        191e68:	e59f100c 	ldr	r1, [pc, #c]	; 191e7c <NotifyTimeout(TSharedMemMsg *)+0x1c>
        191e6c:	01a02001 	moveq	r2, r1
        191e70:	03a01000 	moveq	r1, #0	; 0x0
        191e74:	0a658f08 	beq	1af5a9c <TSharedMemMsg::$CompleteReceiver(TSharedMemMsg *, long)>
        191e78:	1a658f08 	bne	1af5aa0 <TSharedMemMsg::$CompleteSender(long)>
        191e7c:	ffffd8db 	swinv	0x00ffd8db
    */
}

/**
 * Symbol: NewCachedRgn(void)
 * Address: 00197964
 */
NewCachedRgn(void) {
    /*
        197964:	e1a0c00d 	mov	ip, sp
        197968:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19796c:	e24cb004 	sub	fp, ip, #4	; 0x4
        197970:	e59f103c 	ldr	r1, [pc, #3c]	; 1979b4 <NewCachedRgn(void)+0x50>
        197974:	e5910000 	ldr	r0, [r1]
        197978:	e3300000 	teq	r0, #0	; 0x0
        19797c:	13a02000 	movne	r2, #0	; 0x0
        197980:	15812000 	strne	r2, [r1]
        197984:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        197988:	eb66e7ce 	bl	1b518c8 <$NewRgn(void)>
        19798c:	e1b04000 	movs	r4, r0
        197990:	1a000005 	bne	1979ac <NewCachedRgn(void)+0x48>
        197994:	e59f001c 	ldr	r0, [pc, #1c]	; 1979b8 <NewCachedRgn(void)+0x54>
        197998:	e5900000 	ldr	r0, [r0]
        19799c:	e3a02000 	mov	r2, #0	; 0x0
        1979a0:	e3a010e9 	mov	r1, #233	; 0xe9
        1979a4:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        1979a8:	eb692dfb 	bl	1be319c <$Throw>
        1979ac:	e1a00004 	mov	r0, r4
        1979b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1979b4:	0c1017b0 	ldceq	7, cr1, [r0], -#704
        1979b8:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: NextInkIndex(RefVar const &, long)
 * Address: 001a163c
 */
NextInkIndex(RefVar const &, long) {
    /*
        1a163c:	e1a0c00d 	mov	ip, sp
        1a1640:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a1644:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a1648:	e1a04001 	mov	r4, r1
        1a164c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a1650:	e3e06000 	mvn	r6, #0	; 0x0
        1a1654:	e59f10ac 	ldr	r1, [pc, #ac]	; 1a1708 <NextInkIndex(RefVar const &, long)+0xcc>
        1a1658:	e3a02000 	mov	r2, #0	; 0x0
        1a165c:	eb688b01 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1a1660:	eb6882b9 	bl	1bc214c <$AllocateRefHandle(long)>
        1a1664:	e58d0000 	str	r0, [sp]
        1a1668:	e1a0000d 	mov	r0, sp
        1a166c:	eb688f0a 	bl	1bc529c <$IsString(RefVar const &)>
        1a1670:	e3300000 	teq	r0, #0	; 0x0
        1a1674:	0a00001f 	beq	1a16f8 <NextInkIndex(RefVar const &, long)+0xbc>
        1a1678:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a167c:	e28d1004 	add	r1, sp, #4	; 0x4
        1a1680:	e1a0000d 	mov	r0, sp
        1a1684:	eb687e93 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1a1688:	e1a0000d 	mov	r0, sp
        1a168c:	eb6882a0 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1a1690:	e1a05000 	mov	r5, r0
        1a1694:	e1a0000d 	mov	r0, sp
        1a1698:	e3a01000 	mov	r1, #0	; 0x0
        1a169c:	eb688297 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1a16a0:	e1a00005 	mov	r0, r5
        1a16a4:	eb69342d 	bl	1bee760 <$Ustrlen>
        1a16a8:	e2844001 	add	r4, r4, #1	; 0x1
        1a16ac:	e1500004 	cmp	r0, r4
        1a16b0:	9a00000f 	bls	1a16f4 <NextInkIndex(RefVar const &, long)+0xb8>
        1a16b4:	e7950084 	ldr	r0, [r5, r4, lsl #1]
        1a16b8:	e1a00820 	mov	r0, r0, lsr #16
        1a16bc:	e3300000 	teq	r0, #0	; 0x0
        1a16c0:	0a00000b 	beq	1a16f4 <NextInkIndex(RefVar const &, long)+0xb8>
        1a16c4:	e3a00001 	mov	r0, #1	; 0x1
        1a16c8:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        1a16cc:	e7951084 	ldr	r1, [r5, r4, lsl #1]
        1a16d0:	e1a01821 	mov	r1, r1, lsr #16
        1a16d4:	e1310000 	teq	r1, r0
        1a16d8:	01a06004 	moveq	r6, r4
        1a16dc:	0a000004 	beq	1a16f4 <NextInkIndex(RefVar const &, long)+0xb8>
        1a16e0:	e2844001 	add	r4, r4, #1	; 0x1
        1a16e4:	e7951084 	ldr	r1, [r5, r4, lsl #1]
        1a16e8:	e1a01821 	mov	r1, r1, lsr #16
        1a16ec:	e3310000 	teq	r1, #0	; 0x0
        1a16f0:	1afffff5 	bne	1a16cc <NextInkIndex(RefVar const &, long)+0x90>
        1a16f4:	e28dd004 	add	sp, sp, #4	; 0x4
        1a16f8:	e59d0000 	ldr	r0, [sp]
        1a16fc:	eb6886ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a1700:	e1a00006 	mov	r0, r6
        1a1704:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1a1708:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: NewReservedBlock__FP11TFlashStoreUlN22
 * Address: 001a8954
 */
void globals::NewReservedBlock() {
    /*
        1a8954:	e1a0c00d 	mov	ip, sp
        1a8958:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a895c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8960:	e1a04000 	mov	r4, r0
        1a8964:	e1a06001 	mov	r6, r1
        1a8968:	e1a05002 	mov	r5, r2
        1a896c:	e1a07003 	mov	r7, r3
        1a8970:	e1a01002 	mov	r1, r2
        1a8974:	eb655559 	bl	1afdee0 <TFlashStore::$IsErased(unsigned long)>
        1a8978:	e3300000 	teq	r0, #0	; 0x0
        1a897c:	1a000004 	bne	1a8994 <NewReservedBlock__FP11TFlashStoreUlN22+0x40>
        1a8980:	e1a01005 	mov	r1, r5
        1a8984:	e1a00004 	mov	r0, r4
        1a8988:	eb657ea2 	bl	1b08418 <TFlashStore::$SyncErase(unsigned long)>
        1a898c:	e3300000 	teq	r0, #0	; 0x0
        1a8990:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a8994:	e24dd030 	sub	sp, sp, #48	; 0x30
        1a8998:	e3a00000 	mov	r0, #0	; 0x0
        1a899c:	e58d0020 	str	r0, [sp, #32]
        1a89a0:	e58d5018 	str	r5, [sp, #24]
        1a89a4:	e58d602c 	str	r6, [sp, #44]
        1a89a8:	e5941058 	ldr	r1, [r4, #88]
        1a89ac:	e1a01135 	mov	r1, r5, lsr r1
        1a89b0:	e0811081 	add	r1, r1, r1, lsl #1
        1a89b4:	e5940024 	ldr	r0, [r4, #36]
        1a89b8:	e0800181 	add	r0, r0, r1, lsl #3
        1a89bc:	eb653c7f 	bl	1af7bc0 <TFlashPhysBlock::$EraseCount(void)>
        1a89c0:	e3a03000 	mov	r3, #0	; 0x0
        1a89c4:	e1a02005 	mov	r2, r5
        1a89c8:	e58d0024 	str	r0, [sp, #36]
        1a89cc:	e58d7028 	str	r7, [sp, #40]
        1a89d0:	e92d000c 	stmdb	sp!, {r2, r3}
        1a89d4:	e28d3008 	add	r3, sp, #8	; 0x8
        1a89d8:	e1a00004 	mov	r0, r4
        1a89dc:	e3a02030 	mov	r2, #48	; 0x30
        1a89e0:	e59f1050 	ldr	r1, [pc, #50]	; 1a8a38 <NewReservedBlock__FP11TFlashStoreUlN22+0xe4>
        1a89e4:	eb6527c5 	bl	1af2900 <TFlashStore::$AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)>
        1a89e8:	e28dd008 	add	sp, sp, #8	; 0x8
        1a89ec:	e3300000 	teq	r0, #0	; 0x0
        1a89f0:	1a00000f 	bne	1a8a34 <NewReservedBlock__FP11TFlashStoreUlN22+0xe0>
        1a89f4:	e5941058 	ldr	r1, [r4, #88]
        1a89f8:	e1a01136 	mov	r1, r6, lsr r1
        1a89fc:	e594002c 	ldr	r0, [r4, #44]
        1a8a00:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        1a8a04:	e1a0100d 	mov	r1, sp
        1a8a08:	eb66829e 	bl	1b49488 <TFlashBlock::$SetInfo(SReservedBlockLogEntry *)>
        1a8a0c:	e3300000 	teq	r0, #0	; 0x0
        1a8a10:	1a000007 	bne	1a8a34 <NewReservedBlock__FP11TFlashStoreUlN22+0xe0>
        1a8a14:	e59f0020 	ldr	r0, [pc, #20]	; 1a8a3c <NewReservedBlock__FP11TFlashStoreUlN22+0xe8>
        1a8a18:	e52d0004 	str	r0, [sp, -#4]!
        1a8a1c:	e1a0200d 	mov	r2, sp
        1a8a20:	e1a01005 	mov	r1, r5
        1a8a24:	e1a00004 	mov	r0, r4
        1a8a28:	e3a03004 	mov	r3, #4	; 0x4
        1a8a2c:	eb652be3 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
        1a8a30:	e28dd004 	add	sp, sp, #4	; 0x4
        1a8a34:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a8a38:	7a626c6b 	bvc	1a43bec <TPackageStore::$Sleep(void)+0x9f0>
        1a8a3c:	72626c6b 	rsbvc	r6, r2, #27392	; 0x6b00
    */
}

/**
 * Symbol: NSSendRootMessage(RefVar const &)
 * Address: 001b1fe4
 */
NSSendRootMessage(RefVar const &) {
    /*
        1b1fe4:	e1a01000 	mov	r1, r0
        1b1fe8:	e59f0008 	ldr	r0, [pc, #8]	; 1b1ff8 <NSSendRootMessage(RefVar const &)+0x14>
        1b1fec:	e5900000 	ldr	r0, [r0]
        1b1ff0:	e2800024 	add	r0, r0, #36	; 0x24
        1b1ff4:	ea693811 	b	1c00040 <$NSSend__FRC6RefVarT1>
        1b1ff8:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: NSSendRootMessage__FRC6RefVarT1
 * Address: 001b2a94
 */
void globals::NSSendRootMessage() {
    /*
        1b2a94:	e59f2014 	ldr	r2, [pc, #14]	; 1b2ab0 <NSSendRootMessage__FRC6RefVarT1+0x1c>
        1b2a98:	e5922000 	ldr	r2, [r2]
        1b2a9c:	e2823024 	add	r3, r2, #36	; 0x24
        1b2aa0:	e1a02001 	mov	r2, r1
        1b2aa4:	e1a01000 	mov	r1, r0
        1b2aa8:	e1a00003 	mov	r0, r3
        1b2aac:	ea693564 	b	1c00044 <$NSSend__FRC6RefVarN21>
        1b2ab0:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: NSSendRootMessage__FRC6RefVarN21
 * Address: 001b39bc
 */
void globals::NSSendRootMessage() {
    /*
        1b39bc:	e59f3018 	ldr	r3, [pc, #18]	; 1b39dc <NSSendRootMessage__FRC6RefVarN21+0x20>
        1b39c0:	e5933000 	ldr	r3, [r3]
        1b39c4:	e283c024 	add	ip, r3, #36	; 0x24
        1b39c8:	e1a03002 	mov	r3, r2
        1b39cc:	e1a02001 	mov	r2, r1
        1b39d0:	e1a01000 	mov	r1, r0
        1b39d4:	e1a0000c 	mov	r0, ip
        1b39d8:	ea69319a 	b	1c00048 <$NSSend__FRC6RefVarN31>
        1b39dc:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: NSSendRootMessage__FRC6RefVarN31
 * Address: 001b4320
 */
void globals::NSSendRootMessage() {
    /*
        1b4320:	e1a0c00d 	mov	ip, sp
        1b4324:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b4328:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b432c:	e92d0008 	stmdb	sp!, {r3}
        1b4330:	e59f301c 	ldr	r3, [pc, #1c]	; 1b4354 <NSSendRootMessage__FRC6RefVarN31+0x34>
        1b4334:	e5933000 	ldr	r3, [r3]
        1b4338:	e283c024 	add	ip, r3, #36	; 0x24
        1b433c:	e1a03002 	mov	r3, r2
        1b4340:	e1a02001 	mov	r2, r1
        1b4344:	e1a01000 	mov	r1, r0
        1b4348:	e1a0000c 	mov	r0, ip
        1b434c:	eb692f3e 	bl	1c0004c <$NSSend__FRC6RefVarN41>
        1b4350:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1b4354:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: NSSendRootMessage__FRC6RefVarN41
 * Address: 001b4840
 */
void globals::NSSendRootMessage() {
    /*
        1b4840:	e1a0c00d 	mov	ip, sp
        1b4844:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b4848:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b484c:	e1a0c002 	mov	ip, r2
        1b4850:	e1a02003 	mov	r2, r3
        1b4854:	e59b3004 	ldr	r3, [fp, #4]
        1b4858:	e92d000c 	stmdb	sp!, {r2, r3}
        1b485c:	e59f201c 	ldr	r2, [pc, #1c]	; 1b4880 <NSSendRootMessage__FRC6RefVarN41+0x40>
        1b4860:	e5922000 	ldr	r2, [r2]
        1b4864:	e282e024 	add	lr, r2, #36	; 0x24
        1b4868:	e1a0300c 	mov	r3, ip
        1b486c:	e1a02001 	mov	r2, r1
        1b4870:	e1a01000 	mov	r1, r0
        1b4874:	e1a0000e 	mov	r0, lr
        1b4878:	eb692df4 	bl	1c00050 <$NSSend__FRC6RefVarN51>
        1b487c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1b4880:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: NSSendRootMessage__FRC6RefVarN51
 * Address: 001b4cf0
 */
void globals::NSSendRootMessage() {
    /*
        1b4cf0:	e1a0c00d 	mov	ip, sp
        1b4cf4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b4cf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b4cfc:	e1a0e001 	mov	lr, r1
        1b4d00:	e1a0c002 	mov	ip, r2
        1b4d04:	e1a01003 	mov	r1, r3
        1b4d08:	e99b000c 	ldmib	fp, {r2, r3}
        1b4d0c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1b4d10:	e59f101c 	ldr	r1, [pc, #1c]	; 1b4d34 <NSSendRootMessage__FRC6RefVarN51+0x44>
        1b4d14:	e5911000 	ldr	r1, [r1]
        1b4d18:	e2814024 	add	r4, r1, #36	; 0x24
        1b4d1c:	e1a0300c 	mov	r3, ip
        1b4d20:	e1a0200e 	mov	r2, lr
        1b4d24:	e1a01000 	mov	r1, r0
        1b4d28:	e1a00004 	mov	r0, r4
        1b4d2c:	eb692cc8 	bl	1c00054 <$NSSend__FRC6RefVarN61>
        1b4d30:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1b4d34:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: NSSendRootMessage__FRC6RefVarN61
 * Address: 001b564c
 */
void globals::NSSendRootMessage() {
    /*
        1b564c:	e1a0c00d 	mov	ip, sp
        1b5650:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1b5654:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b5658:	e1a04000 	mov	r4, r0
        1b565c:	e1a0e001 	mov	lr, r1
        1b5660:	e1a0c002 	mov	ip, r2
        1b5664:	e1a00003 	mov	r0, r3
        1b5668:	e99b000e 	ldmib	fp, {r1, r2, r3}
        1b566c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1b5670:	e59f0018 	ldr	r0, [pc, #18]	; 1b5690 <NSSendRootMessage__FRC6RefVarN61+0x44>
        1b5674:	e5900000 	ldr	r0, [r0]
        1b5678:	e2800024 	add	r0, r0, #36	; 0x24
        1b567c:	e1a0300c 	mov	r3, ip
        1b5680:	e1a0200e 	mov	r2, lr
        1b5684:	e1a01004 	mov	r1, r4
        1b5688:	eb692a72 	bl	1c00058 <$NSSend__FRC6RefVarN71>
        1b568c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1b5690:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: NSSendRootMessageWithArgArray__FRC6RefVarT1
 * Address: 001b5b34
 */
void globals::NSSendRootMessageWithArgArray() {
    /*
        1b5b34:	e59f2014 	ldr	r2, [pc, #14]	; 1b5b50 <NSSendRootMessageWithArgArray__FRC6RefVarT1+0x1c>
        1b5b38:	e5922000 	ldr	r2, [r2]
        1b5b3c:	e2823024 	add	r3, r2, #36	; 0x24
        1b5b40:	e1a02001 	mov	r2, r1
        1b5b44:	e1a01000 	mov	r1, r0
        1b5b48:	e1a00003 	mov	r0, r3
        1b5b4c:	ea6835a0 	b	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1b5b50:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: non_sub__FP9SPEC_TYPEPsT2i
 * Address: 001beb90
 */
void globals::non_sub() {
    /*
        1beb90:	e1a0c00d 	mov	ip, sp
        1beb94:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1beb98:	e24cb004 	sub	fp, ip, #4	; 0x4
        1beb9c:	e1a06000 	mov	r6, r0
        1beba0:	e1a05001 	mov	r5, r1
        1beba4:	e1a04002 	mov	r4, r2
        1beba8:	e1a07003 	mov	r7, r3
        1bebac:	e5901004 	ldr	r1, [r0, #4]
        1bebb0:	e1a01841 	mov	r1, r1, asr #16
        1bebb4:	e7923081 	ldr	r3, [r2, r1, lsl #1]
        1bebb8:	e1a03843 	mov	r3, r3, asr #16
        1bebbc:	e5902006 	ldr	r2, [r0, #6]
        1bebc0:	e1a02842 	mov	r2, r2, asr #16
        1bebc4:	e7940082 	ldr	r0, [r4, r2, lsl #1]
        1bebc8:	e1a00840 	mov	r0, r0, asr #16
        1bebcc:	e1530000 	cmp	r3, r0
        1bebd0:	b1a00003 	movlt	r0, r3
        1bebd4:	e5963008 	ldr	r3, [r6, #8]
        1bebd8:	e1a03843 	mov	r3, r3, asr #16
        1bebdc:	e7943083 	ldr	r3, [r4, r3, lsl #1]
        1bebe0:	e1a03843 	mov	r3, r3, asr #16
        1bebe4:	e0430000 	sub	r0, r3, r0
        1bebe8:	e0800100 	add	r0, r0, r0, lsl #2
        1bebec:	e7953082 	ldr	r3, [r5, r2, lsl #1]
        1bebf0:	e1a03843 	mov	r3, r3, asr #16
        1bebf4:	e7951081 	ldr	r1, [r5, r1, lsl #1]
        1bebf8:	e1a01841 	mov	r1, r1, asr #16
        1bebfc:	e0431001 	sub	r1, r3, r1
        1bec00:	e3a09000 	mov	r9, #0	; 0x0
        1bec04:	e1500081 	cmp	r0, r1, lsl #1
        1bec08:	ca000045 	bgt	1bed24 <non_sub__FP9SPEC_TYPEPsT2i+0x194>
        1bec0c:	e5960010 	ldr	r0, [r6, #16]
        1bec10:	e596800c 	ldr	r8, [r6, #12]
        1bec14:	e5d01000 	ldrb	r1, [r0]
        1bec18:	e3310001 	teq	r1, #1	; 0x1
        1bec1c:	05d81000 	ldreqb	r1, [r8]
        1bec20:	03310001 	teqeq	r1, #1	; 0x1
        1bec24:	1a00003e 	bne	1bed24 <non_sub__FP9SPEC_TYPEPsT2i+0x194>
        1bec28:	e5981008 	ldr	r1, [r8, #8]
        1bec2c:	e1a01841 	mov	r1, r1, asr #16
        1bec30:	e795c081 	ldr	ip, [r5, r1, lsl #1]
        1bec34:	e1a0c84c 	mov	ip, ip, asr #16
        1bec38:	e5983004 	ldr	r3, [r8, #4]
        1bec3c:	e1a03843 	mov	r3, r3, asr #16
        1bec40:	e7953083 	ldr	r3, [r5, r3, lsl #1]
        1bec44:	e1a03843 	mov	r3, r3, asr #16
        1bec48:	e15c0003 	cmp	ip, r3
        1bec4c:	b5900008 	ldrlt	r0, [r0, #8]
        1bec50:	b1a00840 	movlt	r0, r0, asr #16
        1bec54:	b7940080 	ldrlt	r0, [r4, r0, lsl #1]
        1bec58:	b1a00840 	movlt	r0, r0, asr #16
        1bec5c:	b7941081 	ldrlt	r1, [r4, r1, lsl #1]
        1bec60:	b1a01841 	movlt	r1, r1, asr #16
        1bec64:	b1500001 	cmplt	r0, r1
        1bec68:	ba00002d 	blt	1bed24 <non_sub__FP9SPEC_TYPEPsT2i+0x194>
        1bec6c:	e5981006 	ldr	r1, [r8, #6]
        1bec70:	e1a01841 	mov	r1, r1, asr #16
        1bec74:	e1a00002 	mov	r0, r2
        1bec78:	e1a03004 	mov	r3, r4
        1bec7c:	e1a02005 	mov	r2, r5
        1bec80:	eb65999a 	bl	1b252f0 <$ixMin__FiT1PsT3>
        1bec84:	e5962006 	ldr	r2, [r6, #6]
        1bec88:	e1a02842 	mov	r2, r2, asr #16
        1bec8c:	e7941082 	ldr	r1, [r4, r2, lsl #1]
        1bec90:	e1a01841 	mov	r1, r1, asr #16
        1bec94:	e0411007 	sub	r1, r1, r7
        1bec98:	e7953082 	ldr	r3, [r5, r2, lsl #1]
        1bec9c:	e1a03843 	mov	r3, r3, asr #16
        1beca0:	e0836007 	add	r6, r3, r7
        1beca4:	e7943080 	ldr	r3, [r4, r0, lsl #1]
        1beca8:	e1a03843 	mov	r3, r3, asr #16
        1becac:	e1530001 	cmp	r3, r1
        1becb0:	b7950080 	ldrlt	r0, [r5, r0, lsl #1]
        1becb4:	b1a00840 	movlt	r0, r0, asr #16
        1becb8:	b1500006 	cmplt	r0, r6
        1becbc:	ba000018 	blt	1bed24 <non_sub__FP9SPEC_TYPEPsT2i+0x194>
        1becc0:	e1530001 	cmp	r3, r1
        1becc4:	ba00001b 	blt	1bed38 <non_sub__FP9SPEC_TYPEPsT2i+0x1a8>
        1becc8:	e1a00002 	mov	r0, r2
        1beccc:	e5982006 	ldr	r2, [r8, #6]
        1becd0:	e1a02842 	mov	r2, r2, asr #16
        1becd4:	e1520000 	cmp	r2, r0
        1becd8:	da000016 	ble	1bed38 <non_sub__FP9SPEC_TYPEPsT2i+0x1a8>
        1becdc:	e7943080 	ldr	r3, [r4, r0, lsl #1]
        1bece0:	e1a03843 	mov	r3, r3, asr #16
        1bece4:	e1530001 	cmp	r3, r1
        1bece8:	ba000003 	blt	1becfc <non_sub__FP9SPEC_TYPEPsT2i+0x16c>
        1becec:	e7953080 	ldr	r3, [r5, r0, lsl #1]
        1becf0:	e1a03843 	mov	r3, r3, asr #16
        1becf4:	e1530006 	cmp	r3, r6
        1becf8:	da00000b 	ble	1bed2c <non_sub__FP9SPEC_TYPEPsT2i+0x19c>
        1becfc:	e1a01002 	mov	r1, r2
        1bed00:	e1a03004 	mov	r3, r4
        1bed04:	e1a02005 	mov	r2, r5
        1bed08:	e1a00800 	mov	r0, r0, lsl #16
        1bed0c:	e1a00840 	mov	r0, r0, asr #16
        1bed10:	eb659976 	bl	1b252f0 <$ixMin__FiT1PsT3>
        1bed14:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        1bed18:	e1a00840 	mov	r0, r0, asr #16
        1bed1c:	e1500006 	cmp	r0, r6
        1bed20:	aa000004 	bge	1bed38 <non_sub__FP9SPEC_TYPEPsT2i+0x1a8>
        1bed24:	e1a00009 	mov	r0, r9
        1bed28:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1bed2c:	e2800001 	add	r0, r0, #1	; 0x1
        1bed30:	e1520000 	cmp	r2, r0
        1bed34:	caffffe8 	bgt	1becdc <non_sub__FP9SPEC_TYPEPsT2i+0x14c>
        1bed38:	e3a00001 	mov	r0, #1	; 0x1
        1bed3c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: non_super__FP4EXTRiPsN23
 * Address: 001bf578
 */
void globals::non_super() {
    /*
        1bf578:	e1a0c00d 	mov	ip, sp
        1bf57c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1bf580:	e24cb004 	sub	fp, ip, #4	; 0x4
        1bf584:	e1a04003 	mov	r4, r3
        1bf588:	e0805201 	add	r5, r0, r1, lsl #4
        1bf58c:	e59b9004 	ldr	r9, [fp, #4]
        1bf590:	e595000c 	ldr	r0, [r5, #12]
        1bf594:	e5906010 	ldr	r6, [r0, #16]
        1bf598:	e590700c 	ldr	r7, [r0, #12]
        1bf59c:	e5d03001 	ldrb	r3, [r0, #1]
        1bf5a0:	e3a08001 	mov	r8, #1	; 0x1
        1bf5a4:	e333006e 	teq	r3, #110	; 0x6e
        1bf5a8:	01a00008 	moveq	r0, r8
        1bf5ac:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1bf5b0:	e3510003 	cmp	r1, #3	; 0x3
        1bf5b4:	da000038 	ble	1bf69c <non_super__FP4EXTRiPsN23+0x124>
        1bf5b8:	e5d61000 	ldrb	r1, [r6]
        1bf5bc:	e3310003 	teq	r1, #3	; 0x3
        1bf5c0:	05d71000 	ldreqb	r1, [r7]
        1bf5c4:	03310003 	teqeq	r1, #3	; 0x3
        1bf5c8:	1a000033 	bne	1bf69c <non_super__FP4EXTRiPsN23+0x124>
        1bf5cc:	e590e004 	ldr	lr, [r0, #4]
        1bf5d0:	e1a0e84e 	mov	lr, lr, asr #16
        1bf5d4:	e794308e 	ldr	r3, [r4, lr, lsl #1]
        1bf5d8:	e1a03843 	mov	r3, r3, asr #16
        1bf5dc:	e590c006 	ldr	ip, [r0, #6]
        1bf5e0:	e1a0c84c 	mov	ip, ip, asr #16
        1bf5e4:	e794108c 	ldr	r1, [r4, ip, lsl #1]
        1bf5e8:	e1a01841 	mov	r1, r1, asr #16
        1bf5ec:	e1530001 	cmp	r3, r1
        1bf5f0:	d1a0a001 	movle	sl, r1
        1bf5f4:	c1a0a003 	movgt	sl, r3
        1bf5f8:	e5900008 	ldr	r0, [r0, #8]
        1bf5fc:	e1a00840 	mov	r0, r0, asr #16
        1bf600:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        1bf604:	e1a00840 	mov	r0, r0, asr #16
        1bf608:	e04aa000 	sub	sl, sl, r0
        1bf60c:	c1a01003 	movgt	r1, r3
        1bf610:	e0410000 	sub	r0, r1, r0
        1bf614:	e08a0080 	add	r0, sl, r0, lsl #1
        1bf618:	e792108c 	ldr	r1, [r2, ip, lsl #1]
        1bf61c:	e1a01841 	mov	r1, r1, asr #16
        1bf620:	e792208e 	ldr	r2, [r2, lr, lsl #1]
        1bf624:	e1a02842 	mov	r2, r2, asr #16
        1bf628:	e0411002 	sub	r1, r1, r2
        1bf62c:	e1500001 	cmp	r0, r1
        1bf630:	aa000019 	bge	1bf69c <non_super__FP4EXTRiPsN23+0x124>
        1bf634:	e5950004 	ldr	r0, [r5, #4]
        1bf638:	e1a00840 	mov	r0, r0, asr #16
        1bf63c:	e2801001 	add	r1, r0, #1	; 0x1
        1bf640:	e3a00003 	mov	r0, #3	; 0x3
        1bf644:	eb67ccbd 	bl	1bb2940 <$__rt_sdiv>
        1bf648:	e1a0a000 	mov	sl, r0
        1bf64c:	e5950006 	ldr	r0, [r5, #6]
        1bf650:	e1a00840 	mov	r0, r0, asr #16
        1bf654:	e7990080 	ldr	r0, [r9, r0, lsl #1]
        1bf658:	e1a00840 	mov	r0, r0, asr #16
        1bf65c:	e0881080 	add	r1, r8, r0, lsl #1
        1bf660:	e3a00003 	mov	r0, #3	; 0x3
        1bf664:	eb67ccb5 	bl	1bb2940 <$__rt_sdiv>
        1bf668:	e08a1000 	add	r1, sl, r0
        1bf66c:	e5970008 	ldr	r0, [r7, #8]
        1bf670:	e1a00840 	mov	r0, r0, asr #16
        1bf674:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        1bf678:	e1a00840 	mov	r0, r0, asr #16
        1bf67c:	e1510000 	cmp	r1, r0
        1bf680:	b1a00008 	movlt	r0, r8
        1bf684:	b5962008 	ldrlt	r2, [r6, #8]
        1bf688:	b1a02842 	movlt	r2, r2, asr #16
        1bf68c:	b7942082 	ldrlt	r2, [r4, r2, lsl #1]
        1bf690:	b1a02842 	movlt	r2, r2, asr #16
        1bf694:	b1510002 	cmplt	r1, r2
        1bf698:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1bf69c:	e3a00000 	mov	r0, #0	; 0x0
        1bf6a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)
 * Address: 001bf8ac
 */
neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char) {
    /*
        1bf8ac:	e1a0c00d 	mov	ip, sp
        1bf8b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bf8b4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1bf8b8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1bf8bc:	e1a04000 	mov	r4, r0
        1bf8c0:	e1a05001 	mov	r5, r1
        1bf8c4:	e20290ff 	and	r9, r2, #255	; 0xff
        1bf8c8:	e59ba014 	ldr	sl, [fp, #20]
        1bf8cc:	e24dd028 	sub	sp, sp, #40	; 0x28
        1bf8d0:	e3a06000 	mov	r6, #0	; 0x0
        1bf8d4:	e3a01000 	mov	r1, #0	; 0x0
        1bf8d8:	e3390003 	teq	r9, #3	; 0x3
        1bf8dc:	e58d6024 	str	r6, [sp, #36]
        1bf8e0:	03a07065 	moveq	r7, #101	; 0x65
        1bf8e4:	0a000001 	beq	1bf8f0 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x44>
        1bf8e8:	e3390001 	teq	r9, #1	; 0x1
        1bf8ec:	03a07066 	moveq	r7, #102	; 0x66
        1bf8f0:	e3a00000 	mov	r0, #0	; 0x0
        1bf8f4:	e3550000 	cmp	r5, #0	; 0x0
        1bf8f8:	da000029 	ble	1bf9a4 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0xf8>
        1bf8fc:	e7942200 	ldr	r2, [r4, r0, lsl #4]
        1bf900:	e1a02842 	mov	r2, r2, asr #16
        1bf904:	e1320007 	teq	r2, r7
        1bf908:	13320067 	teqne	r2, #103	; 0x67
        1bf90c:	12866001 	addne	r6, r6, #1	; 0x1
        1bf910:	e2800001 	add	r0, r0, #1	; 0x1
        1bf914:	e1500005 	cmp	r0, r5
        1bf918:	bafffff7 	blt	1bf8fc <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x50>
        1bf91c:	e3560001 	cmp	r6, #1	; 0x1
        1bf920:	da00001d 	ble	1bf99c <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0xf0>
        1bf924:	e3a00000 	mov	r0, #0	; 0x0
        1bf928:	e3550000 	cmp	r5, #0	; 0x0
        1bf92c:	da000017 	ble	1bf990 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0xe4>
        1bf930:	e7942200 	ldr	r2, [r4, r0, lsl #4]
        1bf934:	e1a02842 	mov	r2, r2, asr #16
        1bf938:	e1320007 	teq	r2, r7
        1bf93c:	13320067 	teqne	r2, #103	; 0x67
        1bf940:	0a00000f 	beq	1bf984 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0xd8>
        1bf944:	e3390003 	teq	r9, #3	; 0x3
        1bf948:	00842200 	addeq	r2, r4, r0, lsl #4
        1bf94c:	05928004 	ldreq	r8, [r2, #4]
        1bf950:	01a08848 	moveq	r8, r8, asr #16
        1bf954:	0a000009 	beq	1bf980 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0xd4>
        1bf958:	e3390001 	teq	r9, #1	; 0x1
        1bf95c:	1a000007 	bne	1bf980 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0xd4>
        1bf960:	e0842200 	add	r2, r4, r0, lsl #4
        1bf964:	e5923006 	ldr	r3, [r2, #6]
        1bf968:	e1a03843 	mov	r3, r3, asr #16
        1bf96c:	e59bc010 	ldr	ip, [fp, #16]
        1bf970:	e79c3083 	ldr	r3, [ip, r3, lsl #1]
        1bf974:	e1a03843 	mov	r3, r3, asr #16
        1bf978:	e5922004 	ldr	r2, [r2, #4]
        1bf97c:	e0438842 	sub	r8, r3, r2, asr #16
        1bf980:	e0811008 	add	r1, r1, r8
        1bf984:	e2800001 	add	r0, r0, #1	; 0x1
        1bf988:	e1500005 	cmp	r0, r5
        1bf98c:	baffffe7 	blt	1bf930 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x84>
        1bf990:	e1a00006 	mov	r0, r6
        1bf994:	eb67cbe9 	bl	1bb2940 <$__rt_sdiv>
        1bf998:	e58d0024 	str	r0, [sp, #36]
        1bf99c:	e3560001 	cmp	r6, #1	; 0x1
        1bf9a0:	ca000001 	bgt	1bf9ac <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x100>
        1bf9a4:	e3a00001 	mov	r0, #1	; 0x1
        1bf9a8:	ea000059 	b	1bfb14 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x268>
        1bf9ac:	e3a06001 	mov	r6, #1	; 0x1
        1bf9b0:	e3550001 	cmp	r5, #1	; 0x1
        1bf9b4:	da000055 	ble	1bfb10 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x264>
        1bf9b8:	e7940206 	ldr	r0, [r4, r6, lsl #4]
        1bf9bc:	e1a00840 	mov	r0, r0, asr #16
        1bf9c0:	e1300007 	teq	r0, r7
        1bf9c4:	00841206 	addeq	r1, r4, r6, lsl #4
        1bf9c8:	05111010 	ldreq	r1, [r1, -#16]
        1bf9cc:	01a01841 	moveq	r1, r1, asr #16
        1bf9d0:	03310067 	teqeq	r1, #103	; 0x67
        1bf9d4:	0a000004 	beq	1bf9ec <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x140>
        1bf9d8:	e3300067 	teq	r0, #103	; 0x67
        1bf9dc:	00840206 	addeq	r0, r4, r6, lsl #4
        1bf9e0:	05100010 	ldreq	r0, [r0, -#16]
        1bf9e4:	01370840 	teqeq	r7, r0, asr #16
        1bf9e8:	1a000045 	bne	1bfb04 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x258>
        1bf9ec:	e28d2010 	add	r2, sp, #16	; 0x10
        1bf9f0:	e0841206 	add	r1, r4, r6, lsl #4
        1bf9f4:	e1a00001 	mov	r0, r1
        1bf9f8:	e8b11008 	ldmia	r1!, {r3, ip}
        1bf9fc:	e8a21008 	stmia	r2!, {r3, ip}
        1bfa00:	e8911008 	ldmia	r1, {r3, ip}
        1bfa04:	e8821008 	stmia	r2, {r3, ip}
        1bfa08:	e28dd010 	add	sp, sp, #16	; 0x10
        1bfa0c:	e1a01000 	mov	r1, r0
        1bfa10:	e9311008 	ldmdb	r1!, {r3, ip}
        1bfa14:	e92d1008 	stmdb	sp!, {r3, ip}
        1bfa18:	e9311008 	ldmdb	r1!, {r3, ip}
        1bfa1c:	e92d1008 	stmdb	sp!, {r3, ip}
        1bfa20:	e3390003 	teq	r9, #3	; 0x3
        1bfa24:	059d8014 	ldreq	r8, [sp, #20]
        1bfa28:	01a08848 	moveq	r8, r8, asr #16
        1bfa2c:	059d1004 	ldreq	r1, [sp, #4]
        1bfa30:	01a01841 	moveq	r1, r1, asr #16
        1bfa34:	058d1020 	streq	r1, [sp, #32]
        1bfa38:	0a000021 	beq	1bfac4 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x218>
        1bfa3c:	e3390001 	teq	r9, #1	; 0x1
        1bfa40:	1a00001f 	bne	1bfac4 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x218>
        1bfa44:	e59d0016 	ldr	r0, [sp, #22]
        1bfa48:	e1a00840 	mov	r0, r0, asr #16
        1bfa4c:	e59b3010 	ldr	r3, [fp, #16]
        1bfa50:	e7931080 	ldr	r1, [r3, r0, lsl #1]
        1bfa54:	e1a01841 	mov	r1, r1, asr #16
        1bfa58:	e59d0014 	ldr	r0, [sp, #20]
        1bfa5c:	e0418840 	sub	r8, r1, r0, asr #16
        1bfa60:	e59d0006 	ldr	r0, [sp, #6]
        1bfa64:	e1a00840 	mov	r0, r0, asr #16
        1bfa68:	e59b3010 	ldr	r3, [fp, #16]
        1bfa6c:	e7931080 	ldr	r1, [r3, r0, lsl #1]
        1bfa70:	e1a01841 	mov	r1, r1, asr #16
        1bfa74:	e59d0004 	ldr	r0, [sp, #4]
        1bfa78:	e0411840 	sub	r1, r1, r0, asr #16
        1bfa7c:	e35a0000 	cmp	sl, #0	; 0x0
        1bfa80:	e58d1020 	str	r1, [sp, #32]
        1bfa84:	da000006 	ble	1bfaa4 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x1f8>
        1bfa88:	e59d0010 	ldr	r0, [sp, #16]
        1bfa8c:	e1370840 	teq	r7, r0, asr #16
        1bfa90:	1a000003 	bne	1bfaa4 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x1f8>
        1bfa94:	e158000a 	cmp	r8, sl
        1bfa98:	ba000001 	blt	1bfaa4 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x1f8>
        1bfa9c:	e2463001 	sub	r3, r6, #1	; 0x1
        1bfaa0:	ea000013 	b	1bfaf4 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x248>
        1bfaa4:	e35a0000 	cmp	sl, #0	; 0x0
        1bfaa8:	da000005 	ble	1bfac4 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x218>
        1bfaac:	e59d0000 	ldr	r0, [sp]
        1bfab0:	e1370840 	teq	r7, r0, asr #16
        1bfab4:	1a000002 	bne	1bfac4 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x218>
        1bfab8:	e59d1020 	ldr	r1, [sp, #32]
        1bfabc:	e151000a 	cmp	r1, sl
        1bfac0:	aa00000a 	bge	1bfaf0 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x244>
        1bfac4:	e59d0024 	ldr	r0, [sp, #36]
        1bfac8:	e0480000 	sub	r0, r8, r0
        1bfacc:	eb62bf3c 	bl	1a6f7c4 <$HWRAbs(int)>
        1bfad0:	e52d0004 	str	r0, [sp, -#4]!
        1bfad4:	e59d0028 	ldr	r0, [sp, #40]
        1bfad8:	e59d1024 	ldr	r1, [sp, #36]
        1bfadc:	e0410000 	sub	r0, r1, r0
        1bfae0:	eb62bf37 	bl	1a6f7c4 <$HWRAbs(int)>
        1bfae4:	e49d1004 	ldr	r1, [sp], #4
        1bfae8:	e1510000 	cmp	r1, r0
        1bfaec:	aaffffea 	bge	1bfa9c <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x1f0>
        1bfaf0:	e1a03006 	mov	r3, r6
        1bfaf4:	e1a02006 	mov	r2, r6
        1bfaf8:	e1a01005 	mov	r1, r5
        1bfafc:	e1a00004 	mov	r0, r4
        1bfb00:	eb659a09 	bl	1b2632c <$ret_to_line__FP4EXTRiN22>
        1bfb04:	e2866001 	add	r6, r6, #1	; 0x1
        1bfb08:	e1560005 	cmp	r6, r5
        1bfb0c:	baffffa9 	blt	1bf9b8 <neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)+0x10c>
        1bfb10:	e3a00000 	mov	r0, #0	; 0x0
        1bfb14:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: num_bord_correction__FP4EXTRPiiUcT3PsT6
 * Address: 001c1960
 */
void globals::num_bord_correction() {
    /*
        1c1960:	e1a0c00d 	mov	ip, sp
        1c1964:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1968:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1c196c:	e24cb014 	sub	fp, ip, #20	; 0x14
        1c1970:	e1a04000 	mov	r4, r0
        1c1974:	e1a05001 	mov	r5, r1
        1c1978:	e20360ff 	and	r6, r3, #255	; 0xff
        1c197c:	e3360003 	teq	r6, #3	; 0x3
        1c1980:	03a08065 	moveq	r8, #101	; 0x65
        1c1984:	03a07001 	moveq	r7, #1	; 0x1
        1c1988:	0a000002 	beq	1c1998 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x38>
        1c198c:	e3360001 	teq	r6, #1	; 0x1
        1c1990:	03a08066 	moveq	r8, #102	; 0x66
        1c1994:	03a07003 	moveq	r7, #3	; 0x3
        1c1998:	e3a00000 	mov	r0, #0	; 0x0
        1c199c:	e5951000 	ldr	r1, [r5]
        1c19a0:	e3510000 	cmp	r1, #0	; 0x0
        1c19a4:	da00000f 	ble	1c19e8 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x88>
        1c19a8:	e1a02808 	mov	r2, r8, lsl #16
        1c19ac:	e1a02842 	mov	r2, r2, asr #16
        1c19b0:	e1a03442 	mov	r3, r2, asr #8
        1c19b4:	e3a0c000 	mov	ip, #0	; 0x0
        1c19b8:	e0841200 	add	r1, r4, r0, lsl #4
        1c19bc:	e591e00c 	ldr	lr, [r1, #12]
        1c19c0:	e5dee002 	ldrb	lr, [lr, #2]
        1c19c4:	e33e00ce 	teq	lr, #206	; 0xce
        1c19c8:	15c1c001 	strneb	ip, [r1, #1]
        1c19cc:	15c1c000 	strneb	ip, [r1]
        1c19d0:	05c12001 	streqb	r2, [r1, #1]
        1c19d4:	05c13000 	streqb	r3, [r1]
        1c19d8:	e2800001 	add	r0, r0, #1	; 0x1
        1c19dc:	e5951000 	ldr	r1, [r5]
        1c19e0:	e1500001 	cmp	r0, r1
        1c19e4:	bafffff3 	blt	1c19b8 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x58>
        1c19e8:	e1a02008 	mov	r2, r8
        1c19ec:	e1a01005 	mov	r1, r5
        1c19f0:	e1a00004 	mov	r0, r4
        1c19f4:	eb658a18 	bl	1b2425c <$delete_line_extr(EXTR *, int *, int)>
        1c19f8:	e3a03000 	mov	r3, #0	; 0x0
        1c19fc:	e3a02001 	mov	r2, #1	; 0x1
        1c1a00:	e28b1018 	add	r1, fp, #24	; 0x18
        1c1a04:	e8910003 	ldmia	r1, {r0, r1}
        1c1a08:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1a0c:	e3a03902 	mov	r3, #32768	; 0x8000
        1c1a10:	e2433001 	sub	r3, r3, #1	; 0x1
        1c1a14:	e3a02000 	mov	r2, #0	; 0x0
        1c1a18:	e1a01006 	mov	r1, r6
        1c1a1c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1c1a20:	e59b200c 	ldr	r2, [fp, #12]
        1c1a24:	e59b3014 	ldr	r3, [fp, #20]
        1c1a28:	e1a00004 	mov	r0, r4
        1c1a2c:	e5951000 	ldr	r1, [r5]
        1c1a30:	eb658e13 	bl	1b25284 <$find_gaps_in_line__FP4EXTRiN22UcN22PsT8UiUi>
        1c1a34:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1c1a38:	e3a03000 	mov	r3, #0	; 0x0
        1c1a3c:	e3a02001 	mov	r2, #1	; 0x1
        1c1a40:	e3a01001 	mov	r1, #1	; 0x1
        1c1a44:	e3a00000 	mov	r0, #0	; 0x0
        1c1a48:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1a4c:	e3a01902 	mov	r1, #32768	; 0x8000
        1c1a50:	e2411001 	sub	r1, r1, #1	; 0x1
        1c1a54:	e59b2018 	ldr	r2, [fp, #24]
        1c1a58:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1a5c:	e1a03006 	mov	r3, r6
        1c1a60:	e59b2014 	ldr	r2, [fp, #20]
        1c1a64:	e1a00004 	mov	r0, r4
        1c1a68:	e5951000 	ldr	r1, [r5]
        1c1a6c:	eb658e05 	bl	1b25288 <$find_glitches_in_line__FP4EXTRiT2UcN22PsN27T2UiUi>
        1c1a70:	e28dd020 	add	sp, sp, #32	; 0x20
        1c1a74:	e3a00000 	mov	r0, #0	; 0x0
        1c1a78:	e5951000 	ldr	r1, [r5]
        1c1a7c:	e3510000 	cmp	r1, #0	; 0x0
        1c1a80:	da000051 	ble	1c1bcc <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x26c>
        1c1a84:	e1a02808 	mov	r2, r8, lsl #16
        1c1a88:	e1a02842 	mov	r2, r2, asr #16
        1c1a8c:	e1a03442 	mov	r3, r2, asr #8
        1c1a90:	e3360003 	teq	r6, #3	; 0x3
        1c1a94:	1a000004 	bne	1c1aac <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x14c>
        1c1a98:	e7941200 	ldr	r1, [r4, r0, lsl #4]
        1c1a9c:	e1a01841 	mov	r1, r1, asr #16
        1c1aa0:	e331001e 	teq	r1, #30	; 0x1e
        1c1aa4:	1a000019 	bne	1c1b10 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x1b0>
        1c1aa8:	ea000005 	b	1c1ac4 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x164>
        1c1aac:	e3360001 	teq	r6, #1	; 0x1
        1c1ab0:	1a000014 	bne	1c1b08 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x1a8>
        1c1ab4:	e7941200 	ldr	r1, [r4, r0, lsl #4]
        1c1ab8:	e1a01841 	mov	r1, r1, asr #16
        1c1abc:	e3310014 	teq	r1, #20	; 0x14
        1c1ac0:	1a000019 	bne	1c1b2c <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x1cc>
        1c1ac4:	e084c200 	add	ip, r4, r0, lsl #4
        1c1ac8:	e59c100c 	ldr	r1, [ip, #12]
        1c1acc:	e5d1e002 	ldrb	lr, [r1, #2]
        1c1ad0:	e33e00ca 	teq	lr, #202	; 0xca
        1c1ad4:	1a00000b 	bne	1c1b08 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x1a8>
        1c1ad8:	e5cc2001 	strb	r2, [ip, #1]
        1c1adc:	e5cc3000 	strb	r3, [ip]
        1c1ae0:	e591c010 	ldr	ip, [r1, #16]
        1c1ae4:	e5dce000 	ldrb	lr, [ip]
        1c1ae8:	e13e0007 	teq	lr, r7
        1c1aec:	03a0e0ce 	moveq	lr, #206	; 0xce
        1c1af0:	05cce002 	streqb	lr, [ip, #2]
        1c1af4:	e591100c 	ldr	r1, [r1, #12]
        1c1af8:	e5d1c000 	ldrb	ip, [r1]
        1c1afc:	e13c0007 	teq	ip, r7
        1c1b00:	03a0e0ce 	moveq	lr, #206	; 0xce
        1c1b04:	05c1e002 	streqb	lr, [r1, #2]
        1c1b08:	e3360003 	teq	r6, #3	; 0x3
        1c1b0c:	1a000004 	bne	1c1b24 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x1c4>
        1c1b10:	e7941200 	ldr	r1, [r4, r0, lsl #4]
        1c1b14:	e1a01841 	mov	r1, r1, asr #16
        1c1b18:	e3310032 	teq	r1, #50	; 0x32
        1c1b1c:	1a000026 	bne	1c1bbc <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x25c>
        1c1b20:	ea000005 	b	1c1b3c <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x1dc>
        1c1b24:	e3360001 	teq	r6, #1	; 0x1
        1c1b28:	1a000023 	bne	1c1bbc <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x25c>
        1c1b2c:	e7941200 	ldr	r1, [r4, r0, lsl #4]
        1c1b30:	e1a01841 	mov	r1, r1, asr #16
        1c1b34:	e3310028 	teq	r1, #40	; 0x28
        1c1b38:	1a00001f 	bne	1c1bbc <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x25c>
        1c1b3c:	e5951000 	ldr	r1, [r5]
        1c1b40:	e2411001 	sub	r1, r1, #1	; 0x1
        1c1b44:	e1510000 	cmp	r1, r0
        1c1b48:	da00001b 	ble	1c1bbc <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x25c>
        1c1b4c:	e0841200 	add	r1, r4, r0, lsl #4
        1c1b50:	e591c00c 	ldr	ip, [r1, #12]
        1c1b54:	e5dcc002 	ldrb	ip, [ip, #2]
        1c1b58:	e33c00ca 	teq	ip, #202	; 0xca
        1c1b5c:	0591101c 	ldreq	r1, [r1, #28]
        1c1b60:	05d11002 	ldreqb	r1, [r1, #2]
        1c1b64:	033100ca 	teqeq	r1, #202	; 0xca
        1c1b68:	1a000012 	bne	1c1bb8 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x258>
        1c1b6c:	e1a01000 	mov	r1, r0
        1c1b70:	e2809001 	add	r9, r0, #1	; 0x1
        1c1b74:	e084c201 	add	ip, r4, r1, lsl #4
        1c1b78:	e5cc2001 	strb	r2, [ip, #1]
        1c1b7c:	e5cc3000 	strb	r3, [ip]
        1c1b80:	e5bce00c 	ldr	lr, [ip, #12]!
        1c1b84:	e59ec010 	ldr	ip, [lr, #16]
        1c1b88:	e5dca000 	ldrb	sl, [ip]
        1c1b8c:	e13a0007 	teq	sl, r7
        1c1b90:	03a0a0ce 	moveq	sl, #206	; 0xce
        1c1b94:	05cca002 	streqb	sl, [ip, #2]
        1c1b98:	e5bec00c 	ldr	ip, [lr, #12]!
        1c1b9c:	e5dce000 	ldrb	lr, [ip]
        1c1ba0:	e13e0007 	teq	lr, r7
        1c1ba4:	03a0a0ce 	moveq	sl, #206	; 0xce
        1c1ba8:	05cca002 	streqb	sl, [ip, #2]
        1c1bac:	e2811001 	add	r1, r1, #1	; 0x1
        1c1bb0:	e1590001 	cmp	r9, r1
        1c1bb4:	aaffffee 	bge	1c1b74 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x214>
        1c1bb8:	e2800001 	add	r0, r0, #1	; 0x1
        1c1bbc:	e2800001 	add	r0, r0, #1	; 0x1
        1c1bc0:	e5951000 	ldr	r1, [r5]
        1c1bc4:	e1500001 	cmp	r0, r1
        1c1bc8:	baffffb0 	blt	1c1a90 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x130>
        1c1bcc:	e1a02008 	mov	r2, r8
        1c1bd0:	e1a01005 	mov	r1, r5
        1c1bd4:	e1a00004 	mov	r0, r4
        1c1bd8:	eb65899f 	bl	1b2425c <$delete_line_extr(EXTR *, int *, int)>
        1c1bdc:	e1a07000 	mov	r7, r0
        1c1be0:	e3a00000 	mov	r0, #0	; 0x0
        1c1be4:	e5951000 	ldr	r1, [r5]
        1c1be8:	e3510000 	cmp	r1, #0	; 0x0
        1c1bec:	da000007 	ble	1c1c10 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x2b0>
        1c1bf0:	e3a01000 	mov	r1, #0	; 0x0
        1c1bf4:	e0842200 	add	r2, r4, r0, lsl #4
        1c1bf8:	e5c21001 	strb	r1, [r2, #1]
        1c1bfc:	e5c21000 	strb	r1, [r2]
        1c1c00:	e2800001 	add	r0, r0, #1	; 0x1
        1c1c04:	e5952000 	ldr	r2, [r5]
        1c1c08:	e1500002 	cmp	r0, r2
        1c1c0c:	bafffff8 	blt	1c1bf4 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x294>
        1c1c10:	e3a03000 	mov	r3, #0	; 0x0
        1c1c14:	e3a02000 	mov	r2, #0	; 0x0
        1c1c18:	e28b1018 	add	r1, fp, #24	; 0x18
        1c1c1c:	e8910003 	ldmia	r1, {r0, r1}
        1c1c20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1c24:	e3a03902 	mov	r3, #32768	; 0x8000
        1c1c28:	e2433001 	sub	r3, r3, #1	; 0x1
        1c1c2c:	e1a01006 	mov	r1, r6
        1c1c30:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1c1c34:	e59b200c 	ldr	r2, [fp, #12]
        1c1c38:	e59b3014 	ldr	r3, [fp, #20]
        1c1c3c:	e1a00004 	mov	r0, r4
        1c1c40:	e5951000 	ldr	r1, [r5]
        1c1c44:	eb658d8e 	bl	1b25284 <$find_gaps_in_line__FP4EXTRiN22UcN22PsT8UiUi>
        1c1c48:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1c1c4c:	e3a03000 	mov	r3, #0	; 0x0
        1c1c50:	e3a02000 	mov	r2, #0	; 0x0
        1c1c54:	e3a01001 	mov	r1, #1	; 0x1
        1c1c58:	e3a00000 	mov	r0, #0	; 0x0
        1c1c5c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1c60:	e3a01902 	mov	r1, #32768	; 0x8000
        1c1c64:	e2411001 	sub	r1, r1, #1	; 0x1
        1c1c68:	e59b2018 	ldr	r2, [fp, #24]
        1c1c6c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1c70:	e1a03006 	mov	r3, r6
        1c1c74:	e59b2014 	ldr	r2, [fp, #20]
        1c1c78:	e1a00004 	mov	r0, r4
        1c1c7c:	e5951000 	ldr	r1, [r5]
        1c1c80:	eb658d80 	bl	1b25288 <$find_glitches_in_line__FP4EXTRiT2UcN22PsN27T2UiUi>
        1c1c84:	e28dd020 	add	sp, sp, #32	; 0x20
        1c1c88:	e3a00000 	mov	r0, #0	; 0x0
        1c1c8c:	e5951000 	ldr	r1, [r5]
        1c1c90:	e3510000 	cmp	r1, #0	; 0x0
        1c1c94:	da000014 	ble	1c1cec <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x38c>
        1c1c98:	e3a01000 	mov	r1, #0	; 0x0
        1c1c9c:	e3a02067 	mov	r2, #103	; 0x67
        1c1ca0:	e3360003 	teq	r6, #3	; 0x3
        1c1ca4:	1a000004 	bne	1c1cbc <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x35c>
        1c1ca8:	e7943200 	ldr	r3, [r4, r0, lsl #4]
        1c1cac:	e1a03843 	mov	r3, r3, asr #16
        1c1cb0:	e3330014 	teq	r3, #20	; 0x14
        1c1cb4:	1a000008 	bne	1c1cdc <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x37c>
        1c1cb8:	ea000004 	b	1c1cd0 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x370>
        1c1cbc:	e3360001 	teq	r6, #1	; 0x1
        1c1cc0:	07943200 	ldreq	r3, [r4, r0, lsl #4]
        1c1cc4:	01a03843 	moveq	r3, r3, asr #16
        1c1cc8:	0333001e 	teqeq	r3, #30	; 0x1e
        1c1ccc:	1a000002 	bne	1c1cdc <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x37c>
        1c1cd0:	e0843200 	add	r3, r4, r0, lsl #4
        1c1cd4:	e5c32001 	strb	r2, [r3, #1]
        1c1cd8:	e5c31000 	strb	r1, [r3]
        1c1cdc:	e2800001 	add	r0, r0, #1	; 0x1
        1c1ce0:	e5953000 	ldr	r3, [r5]
        1c1ce4:	e1500003 	cmp	r0, r3
        1c1ce8:	baffffec 	blt	1c1ca0 <num_bord_correction__FP4EXTRPiiUcT3PsT6+0x340>
        1c1cec:	e1a01005 	mov	r1, r5
        1c1cf0:	e1a00004 	mov	r0, r4
        1c1cf4:	e3a02067 	mov	r2, #103	; 0x67
        1c1cf8:	eb658957 	bl	1b2425c <$delete_line_extr(EXTR *, int *, int)>
        1c1cfc:	e1a00007 	mov	r0, r7
        1c1d00:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: numbers_in_text__FP8low_typePsT2
 * Address: 001c4368
 */
void globals::numbers_in_text() {
    /*
        1c4368:	e1a0c00d 	mov	ip, sp
        1c436c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1c4370:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c4374:	e1a04000 	mov	r4, r0
        1c4378:	e24dd038 	sub	sp, sp, #56	; 0x38
        1c437c:	e3a00000 	mov	r0, #0	; 0x0
        1c4380:	e58d002c 	str	r0, [sp, #44]
        1c4384:	e58d0028 	str	r0, [sp, #40]
        1c4388:	e58d0024 	str	r0, [sp, #36]
        1c438c:	e58d0018 	str	r0, [sp, #24]
        1c4390:	e3a00902 	mov	r0, #32768	; 0x8000
        1c4394:	e2400001 	sub	r0, r0, #1	; 0x1
        1c4398:	e58d0014 	str	r0, [sp, #20]
        1c439c:	e5943014 	ldr	r3, [r4, #20]
        1c43a0:	e5946004 	ldr	r6, [r4, #4]
        1c43a4:	e594700c 	ldr	r7, [r4, #12]
        1c43a8:	e1a00004 	mov	r0, r4
        1c43ac:	e3a01000 	mov	r1, #0	; 0x0
        1c43b0:	e58d3010 	str	r3, [sp, #16]
        1c43b4:	eb657f9d 	bl	1b24230 <$classify_num_strokes(low_type *, int *)>
        1c43b8:	e3a00001 	mov	r0, #1	; 0x1
        1c43bc:	e58d0030 	str	r0, [sp, #48]
        1c43c0:	e58d0034 	str	r0, [sp, #52]
        1c43c4:	e5945040 	ldr	r5, [r4, #64]
        1c43c8:	e3350000 	teq	r5, #0	; 0x0
        1c43cc:	0a00013e 	beq	1c48cc <numbers_in_text__FP8low_typePsT2+0x564>
        1c43d0:	e5d50000 	ldrb	r0, [r5]
        1c43d4:	e3300010 	teq	r0, #16	; 0x10
        1c43d8:	05950004 	ldreq	r0, [r5, #4]
        1c43dc:	01a00840 	moveq	r0, r0, asr #16
        1c43e0:	058d0020 	streq	r0, [sp, #32]
        1c43e4:	0a00012c 	beq	1c489c <numbers_in_text__FP8low_typePsT2+0x534>
        1c43e8:	e3300020 	teq	r0, #32	; 0x20
        1c43ec:	1a00012a 	bne	1c489c <numbers_in_text__FP8low_typePsT2+0x534>
        1c43f0:	e59d002c 	ldr	r0, [sp, #44]
        1c43f4:	e2800001 	add	r0, r0, #1	; 0x1
        1c43f8:	e58d002c 	str	r0, [sp, #44]
        1c43fc:	e5958006 	ldr	r8, [r5, #6]
        1c4400:	e1a08848 	mov	r8, r8, asr #16
        1c4404:	e5d50002 	ldrb	r0, [r5, #2]
        1c4408:	e3300004 	teq	r0, #4	; 0x4
        1c440c:	059d0024 	ldreq	r0, [sp, #36]
        1c4410:	02800001 	addeq	r0, r0, #1	; 0x1
        1c4414:	058d0024 	streq	r0, [sp, #36]
        1c4418:	0a00011f 	beq	1c489c <numbers_in_text__FP8low_typePsT2+0x534>
        1c441c:	e33000cc 	teq	r0, #204	; 0xcc
        1c4420:	1a000010 	bne	1c4468 <numbers_in_text__FP8low_typePsT2+0x100>
        1c4424:	e28d3008 	add	r3, sp, #8	; 0x8
        1c4428:	e92d0008 	stmdb	sp!, {r3}
        1c442c:	e1a03008 	mov	r3, r8
        1c4430:	e59d0024 	ldr	r0, [sp, #36]
        1c4434:	e1a02800 	mov	r2, r0, lsl #16
        1c4438:	e1a02842 	mov	r2, r2, asr #16
        1c443c:	e1a01007 	mov	r1, r7
        1c4440:	e1a00006 	mov	r0, r6
        1c4444:	eb656ef6 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1c4448:	e28dd004 	add	sp, sp, #4	; 0x4
        1c444c:	e59d100a 	ldr	r1, [sp, #10]
        1c4450:	e1a01841 	mov	r1, r1, asr #16
        1c4454:	e5940076 	ldr	r0, [r4, #118]
        1c4458:	e1310840 	teq	r1, r0, asr #16
        1c445c:	1a000001 	bne	1c4468 <numbers_in_text__FP8low_typePsT2+0x100>
        1c4460:	e3a00000 	mov	r0, #0	; 0x0
        1c4464:	ea000177 	b	1c4a48 <numbers_in_text__FP8low_typePsT2+0x6e0>
        1c4468:	e5d50002 	ldrb	r0, [r5, #2]
        1c446c:	e33000cf 	teq	r0, #207	; 0xcf
        1c4470:	133000d0 	teqne	r0, #208	; 0xd0
        1c4474:	1a000014 	bne	1c44cc <numbers_in_text__FP8low_typePsT2+0x164>
        1c4478:	e28d3008 	add	r3, sp, #8	; 0x8
        1c447c:	e92d0008 	stmdb	sp!, {r3}
        1c4480:	e1a03808 	mov	r3, r8, lsl #16
        1c4484:	e1a03843 	mov	r3, r3, asr #16
        1c4488:	e59d0024 	ldr	r0, [sp, #36]
        1c448c:	e1a02800 	mov	r2, r0, lsl #16
        1c4490:	e1a02842 	mov	r2, r2, asr #16
        1c4494:	e1a01007 	mov	r1, r7
        1c4498:	e1a00006 	mov	r0, r6
        1c449c:	eb656ee0 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1c44a0:	e28dd004 	add	sp, sp, #4	; 0x4
        1c44a4:	e5940076 	ldr	r0, [r4, #118]
        1c44a8:	e1a00840 	mov	r0, r0, asr #16
        1c44ac:	e594107a 	ldr	r1, [r4, #122]
        1c44b0:	e1a01841 	mov	r1, r1, asr #16
        1c44b4:	e0800101 	add	r0, r0, r1, lsl #2
        1c44b8:	e59d100e 	ldr	r1, [sp, #14]
        1c44bc:	e1a01841 	mov	r1, r1, asr #16
        1c44c0:	e0811101 	add	r1, r1, r1, lsl #2
        1c44c4:	e1500001 	cmp	r0, r1
        1c44c8:	caffffe4 	bgt	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c44cc:	e5d50002 	ldrb	r0, [r5, #2]
        1c44d0:	e3300001 	teq	r0, #1	; 0x1
        1c44d4:	133000ca 	teqne	r0, #202	; 0xca
        1c44d8:	133000cf 	teqne	r0, #207	; 0xcf
        1c44dc:	1a0000ee 	bne	1c489c <numbers_in_text__FP8low_typePsT2+0x534>
        1c44e0:	e59d0028 	ldr	r0, [sp, #40]
        1c44e4:	e2800001 	add	r0, r0, #1	; 0x1
        1c44e8:	e58d0028 	str	r0, [sp, #40]
        1c44ec:	e28d3008 	add	r3, sp, #8	; 0x8
        1c44f0:	e92d0008 	stmdb	sp!, {r3}
        1c44f4:	e1a03808 	mov	r3, r8, lsl #16
        1c44f8:	e1a03843 	mov	r3, r3, asr #16
        1c44fc:	e1a0a003 	mov	sl, r3
        1c4500:	e59d0024 	ldr	r0, [sp, #36]
        1c4504:	e1a02800 	mov	r2, r0, lsl #16
        1c4508:	e1a02842 	mov	r2, r2, asr #16
        1c450c:	e1a09002 	mov	r9, r2
        1c4510:	e1a01007 	mov	r1, r7
        1c4514:	e1a00006 	mov	r0, r6
        1c4518:	eb656ec1 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1c451c:	e28dd004 	add	sp, sp, #4	; 0x4
        1c4520:	e59d000e 	ldr	r0, [sp, #14]
        1c4524:	e1a00840 	mov	r0, r0, asr #16
        1c4528:	e59d100a 	ldr	r1, [sp, #10]
        1c452c:	e0400841 	sub	r0, r0, r1, asr #16
        1c4530:	e1a08000 	mov	r8, r0
        1c4534:	e0601180 	rsb	r1, r0, r0, lsl #3
        1c4538:	e1a01081 	mov	r1, r1, lsl #1
        1c453c:	e59d200c 	ldr	r2, [sp, #12]
        1c4540:	e1a02842 	mov	r2, r2, asr #16
        1c4544:	e59d0008 	ldr	r0, [sp, #8]
        1c4548:	e0420840 	sub	r0, r2, r0, asr #16
        1c454c:	e0800100 	add	r0, r0, r0, lsl #2
        1c4550:	e1510080 	cmp	r1, r0, lsl #1
        1c4554:	baffffc1 	blt	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c4558:	e1a03007 	mov	r3, r7
        1c455c:	e1a02006 	mov	r2, r6
        1c4560:	e1a0100a 	mov	r1, sl
        1c4564:	e1a00009 	mov	r0, r9
        1c4568:	eb658360 	bl	1b252f0 <$ixMin__FiT1PsT3>
        1c456c:	e1a03007 	mov	r3, r7
        1c4570:	e1a02006 	mov	r2, r6
        1c4574:	e1a0100a 	mov	r1, sl
        1c4578:	e58d001c 	str	r0, [sp, #28]
        1c457c:	e1a00009 	mov	r0, r9
        1c4580:	eb658359 	bl	1b252ec <$ixMax__FiT1PsT3>
        1c4584:	e59d101c 	ldr	r1, [sp, #28]
        1c4588:	e59d3010 	ldr	r3, [sp, #16]
        1c458c:	e7931081 	ldr	r1, [r3, r1, lsl #1]
        1c4590:	e1a01841 	mov	r1, r1, asr #16
        1c4594:	e7930080 	ldr	r0, [r3, r0, lsl #1]
        1c4598:	e1a00840 	mov	r0, r0, asr #16
        1c459c:	e51b202c 	ldr	r2, [fp, -#44]
        1c45a0:	e7922081 	ldr	r2, [r2, r1, lsl #1]
        1c45a4:	e1a02842 	mov	r2, r2, asr #16
        1c45a8:	e51b3030 	ldr	r3, [fp, -#48]
        1c45ac:	e7931081 	ldr	r1, [r3, r1, lsl #1]
        1c45b0:	e1a01841 	mov	r1, r1, asr #16
        1c45b4:	e0421001 	sub	r1, r2, r1
        1c45b8:	e51b202c 	ldr	r2, [fp, -#44]
        1c45bc:	e7922080 	ldr	r2, [r2, r0, lsl #1]
        1c45c0:	e1a02842 	mov	r2, r2, asr #16
        1c45c4:	e51b3030 	ldr	r3, [fp, -#48]
        1c45c8:	e7930080 	ldr	r0, [r3, r0, lsl #1]
        1c45cc:	e1a00840 	mov	r0, r0, asr #16
        1c45d0:	e0420000 	sub	r0, r2, r0
        1c45d4:	e1510000 	cmp	r1, r0
        1c45d8:	c1a00001 	movgt	r0, r1
        1c45dc:	e59d100e 	ldr	r1, [sp, #14]
        1c45e0:	e1a01841 	mov	r1, r1, asr #16
        1c45e4:	e59d200a 	ldr	r2, [sp, #10]
        1c45e8:	e0411842 	sub	r1, r1, r2, asr #16
        1c45ec:	e0811101 	add	r1, r1, r1, lsl #2
        1c45f0:	e080c080 	add	ip, r0, r0, lsl #1
        1c45f4:	e08c0180 	add	r0, ip, r0, lsl #3
        1c45f8:	e1500081 	cmp	r0, r1, lsl #1
        1c45fc:	caffff97 	bgt	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c4600:	e3a09000 	mov	r9, #0	; 0x0
        1c4604:	e1a0a009 	mov	sl, r9
        1c4608:	e5950010 	ldr	r0, [r5, #16]
        1c460c:	e5d01000 	ldrb	r1, [r0]
        1c4610:	e3310010 	teq	r1, #16	; 0x10
        1c4614:	0a000021 	beq	1c46a0 <numbers_in_text__FP8low_typePsT2+0x338>
        1c4618:	e5d01000 	ldrb	r1, [r0]
        1c461c:	e3310003 	teq	r1, #3	; 0x3
        1c4620:	1a000003 	bne	1c4634 <numbers_in_text__FP8low_typePsT2+0x2cc>
        1c4624:	e5d01001 	ldrb	r1, [r0, #1]
        1c4628:	e3310065 	teq	r1, #101	; 0x65
        1c462c:	03a09001 	moveq	r9, #1	; 0x1
        1c4630:	ea000016 	b	1c4690 <numbers_in_text__FP8low_typePsT2+0x328>
        1c4634:	e3310001 	teq	r1, #1	; 0x1
        1c4638:	1a000014 	bne	1c4690 <numbers_in_text__FP8low_typePsT2+0x328>
        1c463c:	e5d01001 	ldrb	r1, [r0, #1]
        1c4640:	e3310066 	teq	r1, #102	; 0x66
        1c4644:	0a000010 	beq	1c468c <numbers_in_text__FP8low_typePsT2+0x324>
        1c4648:	e5d02002 	ldrb	r2, [r0, #2]
        1c464c:	e3320003 	teq	r2, #3	; 0x3
        1c4650:	1331000d 	teqne	r1, #13	; 0xd
        1c4654:	1331006e 	teqne	r1, #110	; 0x6e
        1c4658:	1a00000c 	bne	1c4690 <numbers_in_text__FP8low_typePsT2+0x328>
        1c465c:	e5901006 	ldr	r1, [r0, #6]
        1c4660:	e1a01841 	mov	r1, r1, asr #16
        1c4664:	e7972081 	ldr	r2, [r7, r1, lsl #1]
        1c4668:	e1a02842 	mov	r2, r2, asr #16
        1c466c:	e59d3010 	ldr	r3, [sp, #16]
        1c4670:	e7931081 	ldr	r1, [r3, r1, lsl #1]
        1c4674:	e1a01841 	mov	r1, r1, asr #16
        1c4678:	e51b3030 	ldr	r3, [fp, -#48]
        1c467c:	e7931081 	ldr	r1, [r3, r1, lsl #1]
        1c4680:	e1a01841 	mov	r1, r1, asr #16
        1c4684:	e1520001 	cmp	r2, r1
        1c4688:	aa000000 	bge	1c4690 <numbers_in_text__FP8low_typePsT2+0x328>
        1c468c:	e3a0a001 	mov	sl, #1	; 0x1
        1c4690:	e5900010 	ldr	r0, [r0, #16]
        1c4694:	e5d01000 	ldrb	r1, [r0]
        1c4698:	e3310010 	teq	r1, #16	; 0x10
        1c469c:	1affffdd 	bne	1c4618 <numbers_in_text__FP8low_typePsT2+0x2b0>
        1c46a0:	e59d0034 	ldr	r0, [sp, #52]
        1c46a4:	e3300001 	teq	r0, #1	; 0x1
        1c46a8:	03390000 	teqeq	r9, #0	; 0x0
        1c46ac:	0a000003 	beq	1c46c0 <numbers_in_text__FP8low_typePsT2+0x358>
        1c46b0:	e59d0030 	ldr	r0, [sp, #48]
        1c46b4:	e3300001 	teq	r0, #1	; 0x1
        1c46b8:	033a0000 	teqeq	sl, #0	; 0x0
        1c46bc:	1a000066 	bne	1c485c <numbers_in_text__FP8low_typePsT2+0x4f4>
        1c46c0:	e595100c 	ldr	r1, [r5, #12]
        1c46c4:	e3310000 	teq	r1, #0	; 0x0
        1c46c8:	0a000030 	beq	1c4790 <numbers_in_text__FP8low_typePsT2+0x428>
        1c46cc:	e5910004 	ldr	r0, [r1, #4]
        1c46d0:	e1a00840 	mov	r0, r0, asr #16
        1c46d4:	e5d12000 	ldrb	r2, [r1]
        1c46d8:	e3320020 	teq	r2, #32	; 0x20
        1c46dc:	0a000003 	beq	1c46f0 <numbers_in_text__FP8low_typePsT2+0x388>
        1c46e0:	e591100c 	ldr	r1, [r1, #12]
        1c46e4:	e5d12000 	ldrb	r2, [r1]
        1c46e8:	e3320020 	teq	r2, #32	; 0x20
        1c46ec:	1afffffb 	bne	1c46e0 <numbers_in_text__FP8low_typePsT2+0x378>
        1c46f0:	e5911006 	ldr	r1, [r1, #6]
        1c46f4:	e1a01841 	mov	r1, r1, asr #16
        1c46f8:	e1a0300d 	mov	r3, sp
        1c46fc:	e92d0008 	stmdb	sp!, {r3}
        1c4700:	e1a03001 	mov	r3, r1
        1c4704:	e1a02800 	mov	r2, r0, lsl #16
        1c4708:	e1a02842 	mov	r2, r2, asr #16
        1c470c:	e1a01007 	mov	r1, r7
        1c4710:	e1a00006 	mov	r0, r6
        1c4714:	eb656e42 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1c4718:	e28dd004 	add	sp, sp, #4	; 0x4
        1c471c:	e59d1002 	ldr	r1, [sp, #2]
        1c4720:	e1a01841 	mov	r1, r1, asr #16
        1c4724:	e59d000e 	ldr	r0, [sp, #14]
        1c4728:	e1510840 	cmp	r1, r0, asr #16
        1c472c:	da000009 	ble	1c4758 <numbers_in_text__FP8low_typePsT2+0x3f0>
        1c4730:	e59d100c 	ldr	r1, [sp, #12]
        1c4734:	e1a01841 	mov	r1, r1, asr #16
        1c4738:	e59d0000 	ldr	r0, [sp]
        1c473c:	e1510840 	cmp	r1, r0, asr #16
        1c4740:	aa000004 	bge	1c4758 <numbers_in_text__FP8low_typePsT2+0x3f0>
        1c4744:	e3a09001 	mov	r9, #1	; 0x1
        1c4748:	e59d1006 	ldr	r1, [sp, #6]
        1c474c:	e1a01841 	mov	r1, r1, asr #16
        1c4750:	e59d000a 	ldr	r0, [sp, #10]
        1c4754:	e0418840 	sub	r8, r1, r0, asr #16
        1c4758:	e59d1006 	ldr	r1, [sp, #6]
        1c475c:	e1a01841 	mov	r1, r1, asr #16
        1c4760:	e59d000a 	ldr	r0, [sp, #10]
        1c4764:	e1510840 	cmp	r1, r0, asr #16
        1c4768:	b59d100c 	ldrlt	r1, [sp, #12]
        1c476c:	b1a01841 	movlt	r1, r1, asr #16
        1c4770:	b59d0000 	ldrlt	r0, [sp]
        1c4774:	b1510840 	cmplt	r1, r0, asr #16
        1c4778:	aa000004 	bge	1c4790 <numbers_in_text__FP8low_typePsT2+0x428>
        1c477c:	e3a0a001 	mov	sl, #1	; 0x1
        1c4780:	e59d000e 	ldr	r0, [sp, #14]
        1c4784:	e1a00840 	mov	r0, r0, asr #16
        1c4788:	e59d1002 	ldr	r1, [sp, #2]
        1c478c:	e0408841 	sub	r8, r0, r1, asr #16
        1c4790:	e5951010 	ldr	r1, [r5, #16]
        1c4794:	e3310000 	teq	r1, #0	; 0x0
        1c4798:	0a00002f 	beq	1c485c <numbers_in_text__FP8low_typePsT2+0x4f4>
        1c479c:	e5910006 	ldr	r0, [r1, #6]
        1c47a0:	e1a00840 	mov	r0, r0, asr #16
        1c47a4:	e5d12000 	ldrb	r2, [r1]
        1c47a8:	e3320010 	teq	r2, #16	; 0x10
        1c47ac:	0a000003 	beq	1c47c0 <numbers_in_text__FP8low_typePsT2+0x458>
        1c47b0:	e5911010 	ldr	r1, [r1, #16]
        1c47b4:	e5d12000 	ldrb	r2, [r1]
        1c47b8:	e3320010 	teq	r2, #16	; 0x10
        1c47bc:	1afffffb 	bne	1c47b0 <numbers_in_text__FP8low_typePsT2+0x448>
        1c47c0:	e5912004 	ldr	r2, [r1, #4]
        1c47c4:	e1a02842 	mov	r2, r2, asr #16
        1c47c8:	e1a0300d 	mov	r3, sp
        1c47cc:	e92d0008 	stmdb	sp!, {r3}
        1c47d0:	e1a03800 	mov	r3, r0, lsl #16
        1c47d4:	e1a03843 	mov	r3, r3, asr #16
        1c47d8:	e1a01007 	mov	r1, r7
        1c47dc:	e1a00006 	mov	r0, r6
        1c47e0:	eb656e0f 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1c47e4:	e28dd004 	add	sp, sp, #4	; 0x4
        1c47e8:	e59d1002 	ldr	r1, [sp, #2]
        1c47ec:	e1a01841 	mov	r1, r1, asr #16
        1c47f0:	e59d000e 	ldr	r0, [sp, #14]
        1c47f4:	e1510840 	cmp	r1, r0, asr #16
        1c47f8:	c59d1004 	ldrgt	r1, [sp, #4]
        1c47fc:	c1a01841 	movgt	r1, r1, asr #16
        1c4800:	c59d0008 	ldrgt	r0, [sp, #8]
        1c4804:	c1510840 	cmpgt	r1, r0, asr #16
        1c4808:	da000004 	ble	1c4820 <numbers_in_text__FP8low_typePsT2+0x4b8>
        1c480c:	e3a09001 	mov	r9, #1	; 0x1
        1c4810:	e59d1006 	ldr	r1, [sp, #6]
        1c4814:	e1a01841 	mov	r1, r1, asr #16
        1c4818:	e59d000a 	ldr	r0, [sp, #10]
        1c481c:	e0418840 	sub	r8, r1, r0, asr #16
        1c4820:	e59d1006 	ldr	r1, [sp, #6]
        1c4824:	e1a01841 	mov	r1, r1, asr #16
        1c4828:	e59d000a 	ldr	r0, [sp, #10]
        1c482c:	e1510840 	cmp	r1, r0, asr #16
        1c4830:	aa000009 	bge	1c485c <numbers_in_text__FP8low_typePsT2+0x4f4>
        1c4834:	e59d0004 	ldr	r0, [sp, #4]
        1c4838:	e1a00840 	mov	r0, r0, asr #16
        1c483c:	e59d1008 	ldr	r1, [sp, #8]
        1c4840:	e1500841 	cmp	r0, r1, asr #16
        1c4844:	da000004 	ble	1c485c <numbers_in_text__FP8low_typePsT2+0x4f4>
        1c4848:	e3a0a001 	mov	sl, #1	; 0x1
        1c484c:	e59d000e 	ldr	r0, [sp, #14]
        1c4850:	e1a00840 	mov	r0, r0, asr #16
        1c4854:	e59d1002 	ldr	r1, [sp, #2]
        1c4858:	e0408841 	sub	r8, r0, r1, asr #16
        1c485c:	e3390000 	teq	r9, #0	; 0x0
        1c4860:	03a00000 	moveq	r0, #0	; 0x0
        1c4864:	058d0034 	streq	r0, [sp, #52]
        1c4868:	e33a0000 	teq	sl, #0	; 0x0
        1c486c:	03a00000 	moveq	r0, #0	; 0x0
        1c4870:	058d0030 	streq	r0, [sp, #48]
        1c4874:	e59d0018 	ldr	r0, [sp, #24]
        1c4878:	e1500008 	cmp	r0, r8
        1c487c:	d1a00008 	movle	r0, r8
        1c4880:	c59d0018 	ldrgt	r0, [sp, #24]
        1c4884:	e58d0018 	str	r0, [sp, #24]
        1c4888:	e59d0014 	ldr	r0, [sp, #20]
        1c488c:	e1500008 	cmp	r0, r8
        1c4890:	a1a00008 	movge	r0, r8
        1c4894:	b59d0014 	ldrlt	r0, [sp, #20]
        1c4898:	e58d0014 	str	r0, [sp, #20]
        1c489c:	e595000c 	ldr	r0, [r5, #12]
        1c48a0:	e3300000 	teq	r0, #0	; 0x0
        1c48a4:	11a05000 	movne	r5, r0
        1c48a8:	1afffec8 	bne	1c43d0 <numbers_in_text__FP8low_typePsT2+0x68>
        1c48ac:	e59d0028 	ldr	r0, [sp, #40]
        1c48b0:	e3500001 	cmp	r0, #1	; 0x1
        1c48b4:	da000004 	ble	1c48cc <numbers_in_text__FP8low_typePsT2+0x564>
        1c48b8:	e59d0034 	ldr	r0, [sp, #52]
        1c48bc:	e3300000 	teq	r0, #0	; 0x0
        1c48c0:	059d0030 	ldreq	r0, [sp, #48]
        1c48c4:	03300000 	teqeq	r0, #0	; 0x0
        1c48c8:	0afffee4 	beq	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c48cc:	e59d0014 	ldr	r0, [sp, #20]
        1c48d0:	e0600200 	rsb	r0, r0, r0, lsl #4
        1c48d4:	e59d1018 	ldr	r1, [sp, #24]
        1c48d8:	e0811101 	add	r1, r1, r1, lsl #2
        1c48dc:	e1500081 	cmp	r0, r1, lsl #1
        1c48e0:	bafffede 	blt	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c48e4:	e59d0028 	ldr	r0, [sp, #40]
        1c48e8:	e3300000 	teq	r0, #0	; 0x0
        1c48ec:	0afffedb 	beq	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c48f0:	e59d0028 	ldr	r0, [sp, #40]
        1c48f4:	e3300001 	teq	r0, #1	; 0x1
        1c48f8:	1a000002 	bne	1c4908 <numbers_in_text__FP8low_typePsT2+0x5a0>
        1c48fc:	e59d002c 	ldr	r0, [sp, #44]
        1c4900:	e3500003 	cmp	r0, #3	; 0x3
        1c4904:	cafffed5 	bgt	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c4908:	e59d002c 	ldr	r0, [sp, #44]
        1c490c:	e3300002 	teq	r0, #2	; 0x2
        1c4910:	059d0024 	ldreq	r0, [sp, #36]
        1c4914:	03300001 	teqeq	r0, #1	; 0x1
        1c4918:	0afffed0 	beq	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c491c:	e59d0028 	ldr	r0, [sp, #40]
        1c4920:	e3300001 	teq	r0, #1	; 0x1
        1c4924:	1a000046 	bne	1c4a44 <numbers_in_text__FP8low_typePsT2+0x6dc>
        1c4928:	e59d0034 	ldr	r0, [sp, #52]
        1c492c:	e3300000 	teq	r0, #0	; 0x0
        1c4930:	0afffeca 	beq	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c4934:	ea000000 	b	1c493c <numbers_in_text__FP8low_typePsT2+0x5d4>
        1c4938:	e5955010 	ldr	r5, [r5, #16]
        1c493c:	e5d50002 	ldrb	r0, [r5, #2]
        1c4940:	e3300001 	teq	r0, #1	; 0x1
        1c4944:	0a000002 	beq	1c4954 <numbers_in_text__FP8low_typePsT2+0x5ec>
        1c4948:	e33000ca 	teq	r0, #202	; 0xca
        1c494c:	1afffff9 	bne	1c4938 <numbers_in_text__FP8low_typePsT2+0x5d0>
        1c4950:	eafffec2 	b	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c4954:	e1a07005 	mov	r7, r5
        1c4958:	e5d50000 	ldrb	r0, [r5]
        1c495c:	e3300010 	teq	r0, #16	; 0x10
        1c4960:	0a000037 	beq	1c4a44 <numbers_in_text__FP8low_typePsT2+0x6dc>
        1c4964:	e5d50000 	ldrb	r0, [r5]
        1c4968:	e3300003 	teq	r0, #3	; 0x3
        1c496c:	05d50001 	ldreqb	r0, [r5, #1]
        1c4970:	03300064 	teqeq	r0, #100	; 0x64
        1c4974:	1a00002e 	bne	1c4a34 <numbers_in_text__FP8low_typePsT2+0x6cc>
        1c4978:	e5950004 	ldr	r0, [r5, #4]
        1c497c:	e1a00840 	mov	r0, r0, asr #16
        1c4980:	e796c080 	ldr	ip, [r6, r0, lsl #1]
        1c4984:	e1a0c84c 	mov	ip, ip, asr #16
        1c4988:	e5950006 	ldr	r0, [r5, #6]
        1c498c:	e1a00840 	mov	r0, r0, asr #16
        1c4990:	e7963080 	ldr	r3, [r6, r0, lsl #1]
        1c4994:	e1a03843 	mov	r3, r3, asr #16
        1c4998:	e3a0e000 	mov	lr, #0	; 0x0
        1c499c:	e1a00007 	mov	r0, r7
        1c49a0:	e5d71000 	ldrb	r1, [r7]
        1c49a4:	e3310010 	teq	r1, #16	; 0x10
        1c49a8:	0afffeac 	beq	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c49ac:	e5d01000 	ldrb	r1, [r0]
        1c49b0:	e3310003 	teq	r1, #3	; 0x3
        1c49b4:	05d01001 	ldreqb	r1, [r0, #1]
        1c49b8:	03310065 	teqeq	r1, #101	; 0x65
        1c49bc:	1a000016 	bne	1c4a1c <numbers_in_text__FP8low_typePsT2+0x6b4>
        1c49c0:	e5901004 	ldr	r1, [r0, #4]
        1c49c4:	e1a01841 	mov	r1, r1, asr #16
        1c49c8:	e7962081 	ldr	r2, [r6, r1, lsl #1]
        1c49cc:	e1a02842 	mov	r2, r2, asr #16
        1c49d0:	e5901006 	ldr	r1, [r0, #6]
        1c49d4:	e1a01841 	mov	r1, r1, asr #16
        1c49d8:	e7961081 	ldr	r1, [r6, r1, lsl #1]
        1c49dc:	e1a01841 	mov	r1, r1, asr #16
        1c49e0:	e15c0003 	cmp	ip, r3
        1c49e4:	d1a04003 	movle	r4, r3
        1c49e8:	c1a0400c 	movgt	r4, ip
        1c49ec:	e1520001 	cmp	r2, r1
        1c49f0:	a1a08001 	movge	r8, r1
        1c49f4:	b1a08002 	movlt	r8, r2
        1c49f8:	e1540008 	cmp	r4, r8
        1c49fc:	ba000006 	blt	1c4a1c <numbers_in_text__FP8low_typePsT2+0x6b4>
        1c4a00:	e1520001 	cmp	r2, r1
        1c4a04:	c1a01002 	movgt	r1, r2
        1c4a08:	e15c0003 	cmp	ip, r3
        1c4a0c:	a1a02003 	movge	r2, r3
        1c4a10:	b1a0200c 	movlt	r2, ip
        1c4a14:	e1510002 	cmp	r1, r2
        1c4a18:	aa000005 	bge	1c4a34 <numbers_in_text__FP8low_typePsT2+0x6cc>
        1c4a1c:	e5900010 	ldr	r0, [r0, #16]
        1c4a20:	e5d01000 	ldrb	r1, [r0]
        1c4a24:	e3310010 	teq	r1, #16	; 0x10
        1c4a28:	1affffdf 	bne	1c49ac <numbers_in_text__FP8low_typePsT2+0x644>
        1c4a2c:	e33e0000 	teq	lr, #0	; 0x0
        1c4a30:	0afffe8a 	beq	1c4460 <numbers_in_text__FP8low_typePsT2+0xf8>
        1c4a34:	e5955010 	ldr	r5, [r5, #16]
        1c4a38:	e5d50000 	ldrb	r0, [r5]
        1c4a3c:	e3300010 	teq	r0, #16	; 0x10
        1c4a40:	1affffc7 	bne	1c4964 <numbers_in_text__FP8low_typePsT2+0x5fc>
        1c4a44:	e3a00001 	mov	r0, #1	; 0x1
        1c4a48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NotDrawn__FPlN21l
 * Address: 001c6384
 */
void globals::NotDrawn() {
    /*
        1c6384:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NewStack
 * Address: 001f8968
 */
void globals::NewStack() {
    /*
        1f8968:	e1a0c00d 	mov	ip, sp
        1f896c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f8970:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8974:	e1a04003 	mov	r4, r3
        1f8978:	e59b5004 	ldr	r5, [fp, #4]
        1f897c:	e52d0018 	str	r0, [sp, -#24]!
        1f8980:	e3a00000 	mov	r0, #0	; 0x0
        1f8984:	e98d0007 	stmib	sp, {r0, r1, r2}
        1f8988:	e59f002c 	ldr	r0, [pc, #2c]	; 1f89bc <NewStack+0x54>
        1f898c:	e5900004 	ldr	r0, [r0, #4]
        1f8990:	e1a0200d 	mov	r2, sp
        1f8994:	e3a01001 	mov	r1, #1	; 0x1
        1f8998:	e59000b8 	ldr	r0, [r0, #184]
        1f899c:	eb06d65f 	bl	3ae320 <MonitorDispatchSWI>
        1f89a0:	e3300000 	teq	r0, #0	; 0x0
        1f89a4:	1a000003 	bne	1f89b8 <NewStack+0x50>
        1f89a8:	e59d1010 	ldr	r1, [sp, #16]
        1f89ac:	e5841000 	str	r1, [r4]
        1f89b0:	e59d1014 	ldr	r1, [sp, #20]
        1f89b4:	e5851000 	str	r1, [r5]
        1f89b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1f89bc:	0c104c08 	ldceq	12, cr4, [r0], -#32
    */
}

/**
 * Symbol: NewHeapArea
 * Address: 001f89c0
 */
void globals::NewHeapArea() {
    /*
        1f89c0:	e1a0c00d 	mov	ip, sp
        1f89c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f89c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f89cc:	e59b4008 	ldr	r4, [fp, #8]
        1f89d0:	e59b5004 	ldr	r5, [fp, #4]
        1f89d4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1f89d8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1f89dc:	e59f0024 	ldr	r0, [pc, #24]	; 1f8a08 <NewHeapArea+0x48>
        1f89e0:	e5900004 	ldr	r0, [r0, #4]
        1f89e4:	e1a0200d 	mov	r2, sp
        1f89e8:	e3a01002 	mov	r1, #2	; 0x2
        1f89ec:	e59000b8 	ldr	r0, [r0, #184]
        1f89f0:	eb06d64a 	bl	3ae320 <MonitorDispatchSWI>
        1f89f4:	e59d1010 	ldr	r1, [sp, #16]
        1f89f8:	e5851000 	str	r1, [r5]
        1f89fc:	e59d1014 	ldr	r1, [sp, #20]
        1f8a00:	e5841000 	str	r1, [r4]
        1f8a04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1f8a08:	0c104c08 	ldceq	12, cr4, [r0], -#32
    */
}

/**
 * Symbol: NewHeapDomain
 * Address: 001f8bf8
 */
void globals::NewHeapDomain() {
    /*
        1f8bf8:	e1a0c00d 	mov	ip, sp
        1f8bfc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f8c00:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8c04:	e1a04002 	mov	r4, r2
        1f8c08:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f8c0c:	e92d0003 	stmdb	sp!, {r0, r1}
        1f8c10:	e59f001c 	ldr	r0, [pc, #1c]	; 1f8c34 <NewHeapDomain+0x3c>
        1f8c14:	e5900004 	ldr	r0, [r0, #4]
        1f8c18:	e1a0200d 	mov	r2, sp
        1f8c1c:	e3a01008 	mov	r1, #8	; 0x8
        1f8c20:	e59000b8 	ldr	r0, [r0, #184]
        1f8c24:	eb06d5bd 	bl	3ae320 <MonitorDispatchSWI>
        1f8c28:	e59d1008 	ldr	r1, [sp, #8]
        1f8c2c:	e5841000 	str	r1, [r4]
        1f8c30:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1f8c34:	0c104c08 	ldceq	12, cr4, [r0], -#32
    */
}

/**
 * Symbol: NukeEgregiousStrokes(FRect *)
 * Address: 001ff190
 */
NukeEgregiousStrokes(FRect *) {
    /*
        1ff190:	e1a0c00d 	mov	ip, sp
        1ff194:	e92ddff1 	stmdb	sp!, {r0, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ff198:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ff19c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ff1a0:	e3a07000 	mov	r7, #0	; 0x0
        1ff1a4:	eb65b516 	bl	1b6c604 <$GetTicks(void)>
        1ff1a8:	e2409f96 	sub	r9, r0, #600	; 0x258
        1ff1ac:	e59f0110 	ldr	r0, [pc, #110]	; 1ff2c4 <NukeEgregiousStrokes(FRect *)+0x134>
        1ff1b0:	e58d0004 	str	r0, [sp, #4]
        1ff1b4:	e5900004 	ldr	r0, [r0, #4]
        1ff1b8:	e3a01000 	mov	r1, #0	; 0x0
        1ff1bc:	eb673d64 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1ff1c0:	e59f4100 	ldr	r4, [pc, #100]	; 1ff2c8 <NukeEgregiousStrokes(FRect *)+0x138>
        1ff1c4:	e5941000 	ldr	r1, [r4]
        1ff1c8:	e5910002 	ldr	r0, [r1, #2]
        1ff1cc:	e1a00840 	mov	r0, r0, asr #16
        1ff1d0:	e58d0000 	str	r0, [sp]
        1ff1d4:	e5911000 	ldr	r1, [r1]
        1ff1d8:	e1300841 	teq	r0, r1, asr #16
        1ff1dc:	0a000042 	beq	1ff2ec <NukeEgregiousStrokes(FRect *)+0x15c>
        1ff1e0:	e3a08000 	mov	r8, #0	; 0x0
        1ff1e4:	e3a0a000 	mov	sl, #0	; 0x0
        1ff1e8:	e5940000 	ldr	r0, [r4]
        1ff1ec:	e5905002 	ldr	r5, [r0, #2]
        1ff1f0:	e1a05845 	mov	r5, r5, asr #16
        1ff1f4:	e0800105 	add	r0, r0, r5, lsl #2
        1ff1f8:	e5b06004 	ldr	r6, [r0, #4]!
        1ff1fc:	e3360000 	teq	r6, #0	; 0x0
        1ff200:	0a000004 	beq	1ff218 <NukeEgregiousStrokes(FRect *)+0x88>
        1ff204:	e1a00006 	mov	r0, r6
        1ff208:	e3a01102 	mov	r1, #-2147483648	; 0x80000000
        1ff20c:	eb658ff5 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        1ff210:	e3300000 	teq	r0, #0	; 0x0
        1ff214:	0a00000a 	beq	1ff244 <NukeEgregiousStrokes(FRect *)+0xb4>
        1ff218:	e2850001 	add	r0, r5, #1	; 0x1
        1ff21c:	e1a05800 	mov	r5, r0, lsl #16
        1ff220:	e1a05845 	mov	r5, r5, asr #16
        1ff224:	e3550040 	cmp	r5, #64	; 0x40
        1ff228:	a2450040 	subge	r0, r5, #64	; 0x40
        1ff22c:	a1a05800 	movge	r5, r0, lsl #16
        1ff230:	a1a05845 	movge	r5, r5, asr #16
        1ff234:	e3a08001 	mov	r8, #1	; 0x1
        1ff238:	e5940000 	ldr	r0, [r4]
        1ff23c:	e0800105 	add	r0, r0, r5, lsl #2
        1ff240:	e5b06004 	ldr	r6, [r0, #4]!
        1ff244:	e1a01009 	mov	r1, r9
        1ff248:	e1a00006 	mov	r0, r6
        1ff24c:	eb656ec0 	bl	1b5ad54 <$AbandonedStroke(TStroke *, unsigned long)>
        1ff250:	e3300000 	teq	r0, #0	; 0x0
        1ff254:	0a00001c 	beq	1ff2cc <NukeEgregiousStrokes(FRect *)+0x13c>
        1ff258:	e3370000 	teq	r7, #0	; 0x0
        1ff25c:	13a02000 	movne	r2, #0	; 0x0
        1ff260:	03a02001 	moveq	r2, #1	; 0x1
        1ff264:	e2860020 	add	r0, r6, #32	; 0x20
        1ff268:	e51b102c 	ldr	r1, [fp, -#44]
        1ff26c:	eb6572c4 	bl	1b5bd84 <$AddRect>
        1ff270:	e1a00006 	mov	r0, r6
        1ff274:	e1a0e00f 	mov	lr, pc
        1ff278:	e596f000 	ldr	pc, [r6]
        1ff27c:	e3a01000 	mov	r1, #0	; 0x0
        1ff280:	e5940000 	ldr	r0, [r4]
        1ff284:	e0800105 	add	r0, r0, r5, lsl #2
        1ff288:	e5a01004 	str	r1, [r0, #4]!
        1ff28c:	e5940000 	ldr	r0, [r4]
        1ff290:	e5c05003 	strb	r5, [r0, #3]
        1ff294:	e1a01445 	mov	r1, r5, asr #8
        1ff298:	e5c01002 	strb	r1, [r0, #2]
        1ff29c:	e3a0a001 	mov	sl, #1	; 0x1
        1ff2a0:	e3a07001 	mov	r7, #1	; 0x1
        1ff2a4:	e5940000 	ldr	r0, [r4]
        1ff2a8:	e5901002 	ldr	r1, [r0, #2]
        1ff2ac:	e1a01841 	mov	r1, r1, asr #16
        1ff2b0:	e5900000 	ldr	r0, [r0]
        1ff2b4:	e1310840 	teq	r1, r0, asr #16
        1ff2b8:	1a000003 	bne	1ff2cc <NukeEgregiousStrokes(FRect *)+0x13c>
        1ff2bc:	eb658fc2 	bl	1b631cc <$StrokeNext(void)>
        1ff2c0:	ea000009 	b	1ff2ec <NukeEgregiousStrokes(FRect *)+0x15c>
        1ff2c4:	0c104c24 	ldceq	12, cr4, [r0], -#144
        1ff2c8:	0c10189c 	ldceq	8, cr1, [r0], -#624
        1ff2cc:	e3380000 	teq	r8, #0	; 0x0
        1ff2d0:	133a0000 	teqne	sl, #0	; 0x0
        1ff2d4:	15940000 	ldrne	r0, [r4]
        1ff2d8:	15901002 	ldrne	r1, [r0, #2]
        1ff2dc:	11a01841 	movne	r1, r1, asr #16
        1ff2e0:	15900000 	ldrne	r0, [r0]
        1ff2e4:	11310840 	teqne	r1, r0, asr #16
        1ff2e8:	1affffbc 	bne	1ff1e0 <NukeEgregiousStrokes(FRect *)+0x50>
        1ff2ec:	e5940000 	ldr	r0, [r4]
        1ff2f0:	e5900000 	ldr	r0, [r0]
        1ff2f4:	e1a00820 	mov	r0, r0, lsr #16
        1ff2f8:	e2800001 	add	r0, r0, #1	; 0x1
        1ff2fc:	e1a05800 	mov	r5, r0, lsl #16
        1ff300:	e1a05845 	mov	r5, r5, asr #16
        1ff304:	e3550040 	cmp	r5, #64	; 0x40
        1ff308:	a2450040 	subge	r0, r5, #64	; 0x40
        1ff30c:	a1a05800 	movge	r5, r0, lsl #16
        1ff310:	a1a05845 	movge	r5, r5, asr #16
        1ff314:	e59d0000 	ldr	r0, [sp]
        1ff318:	e1350000 	teq	r5, r0
        1ff31c:	0a00001f 	beq	1ff3a0 <NukeEgregiousStrokes(FRect *)+0x210>
        1ff320:	e3a08000 	mov	r8, #0	; 0x0
        1ff324:	e5940000 	ldr	r0, [r4]
        1ff328:	e0800105 	add	r0, r0, r5, lsl #2
        1ff32c:	e1a01009 	mov	r1, r9
        1ff330:	e5b06004 	ldr	r6, [r0, #4]!
        1ff334:	e1a00006 	mov	r0, r6
        1ff338:	eb656e85 	bl	1b5ad54 <$AbandonedStroke(TStroke *, unsigned long)>
        1ff33c:	e3300000 	teq	r0, #0	; 0x0
        1ff340:	0a00000c 	beq	1ff378 <NukeEgregiousStrokes(FRect *)+0x1e8>
        1ff344:	e3370000 	teq	r7, #0	; 0x0
        1ff348:	13a02000 	movne	r2, #0	; 0x0
        1ff34c:	03a02001 	moveq	r2, #1	; 0x1
        1ff350:	e2860020 	add	r0, r6, #32	; 0x20
        1ff354:	e51b102c 	ldr	r1, [fp, -#44]
        1ff358:	eb657289 	bl	1b5bd84 <$AddRect>
        1ff35c:	e1a00006 	mov	r0, r6
        1ff360:	e1a0e00f 	mov	lr, pc
        1ff364:	e596f000 	ldr	pc, [r6]
        1ff368:	e5940000 	ldr	r0, [r4]
        1ff36c:	e0800105 	add	r0, r0, r5, lsl #2
        1ff370:	e3a07001 	mov	r7, #1	; 0x1
        1ff374:	e5a08004 	str	r8, [r0, #4]!
        1ff378:	e2850001 	add	r0, r5, #1	; 0x1
        1ff37c:	e1a05800 	mov	r5, r0, lsl #16
        1ff380:	e1a05845 	mov	r5, r5, asr #16
        1ff384:	e3550040 	cmp	r5, #64	; 0x40
        1ff388:	a2450040 	subge	r0, r5, #64	; 0x40
        1ff38c:	a1a05800 	movge	r5, r0, lsl #16
        1ff390:	a1a05845 	movge	r5, r5, asr #16
        1ff394:	e59d0000 	ldr	r0, [sp]
        1ff398:	e1350000 	teq	r5, r0
        1ff39c:	1affffe0 	bne	1ff324 <NukeEgregiousStrokes(FRect *)+0x194>
        1ff3a0:	e59d0004 	ldr	r0, [sp, #4]
        1ff3a4:	e5900004 	ldr	r0, [r0, #4]
        1ff3a8:	eb676a3a 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1ff3ac:	e20700ff 	and	r0, r7, #255	; 0xff
        1ff3b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NORMD(long *)
 * Address: 0021566c
 */
NORMD(long *) {
    /*
        21566c:	e5901000 	ldr	r1, [r0]
        215670:	e351072d 	cmp	r1, #11796480	; 0xb40000
        215674:	da000005 	ble	215690 <NORMD(long *)+0x24>
        215678:	e5901000 	ldr	r1, [r0]
        21567c:	e241175a 	sub	r1, r1, #23592960	; 0x1680000
        215680:	e5801000 	str	r1, [r0]
        215684:	e351072d 	cmp	r1, #11796480	; 0xb40000
        215688:	cafffffa 	bgt	215678 <NORMD(long *)+0xc>
        21568c:	e1a0f00e 	mov	pc, lr
        215690:	e371072d 	cmn	r1, #11796480	; 0xb40000
        215694:	c1a0f00e 	movgt	pc, lr
        215698:	e5901000 	ldr	r1, [r0]
        21569c:	e281175a 	add	r1, r1, #23592960	; 0x1680000
        2156a0:	e5801000 	str	r1, [r0]
        2156a4:	e371072d 	cmn	r1, #11796480	; 0xb40000
        2156a8:	dafffffa 	ble	215698 <NORMD(long *)+0x2c>
        2156ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NewTurn__FP8TurnData6FPointT2
 * Address: 0021f17c
 */
void globals::NewTurn() {
    /*
        21f17c:	e1a0c00d 	mov	ip, sp
        21f180:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        21f184:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21f188:	e24cb014 	sub	fp, ip, #20	; 0x14
        21f18c:	e28030a4 	add	r3, r0, #164	; 0xa4
        21f190:	e8830006 	stmia	r3, {r1, r2}
        21f194:	e28010ac 	add	r1, r0, #172	; 0xac
        21f198:	e28b0010 	add	r0, fp, #16	; 0x10
        21f19c:	e8905000 	ldmia	r0, {ip, lr}
        21f1a0:	e8815000 	stmia	r1, {ip, lr}
        21f1a4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: NextQuad__FUlT1Pl
 * Address: 00221240
 */
void globals::NextQuad() {
    /*
        221240:	e92d4000 	stmdb	sp!, {lr}
        221244:	e280c001 	add	ip, r0, #1	; 0x1
        221248:	e2403001 	sub	r3, r0, #1	; 0x1
        22124c:	e592e000 	ldr	lr, [r2]
        221250:	e33e0000 	teq	lr, #0	; 0x0
        221254:	1a000010 	bne	22129c <NextQuad__FUlT1Pl+0x5c>
        221258:	e13c0001 	teq	ip, r1
        22125c:	0a000002 	beq	22126c <NextQuad__FUlT1Pl+0x2c>
        221260:	e3310003 	teq	r1, #3	; 0x3
        221264:	03300000 	teqeq	r0, #0	; 0x0
        221268:	1a000002 	bne	221278 <NextQuad__FUlT1Pl+0x38>
        22126c:	e3a03001 	mov	r3, #1	; 0x1
        221270:	e5823000 	str	r3, [r2]
        221274:	ea000014 	b	2212cc <NextQuad__FUlT1Pl+0x8c>
        221278:	e1330001 	teq	r3, r1
        22127c:	0a000003 	beq	221290 <NextQuad__FUlT1Pl+0x50>
        221280:	e3300000 	teq	r0, #0	; 0x0
        221284:	03310003 	teqeq	r1, #3	; 0x3
        221288:	13a00000 	movne	r0, #0	; 0x0
        22128c:	18bd8000 	ldmneia	sp!, {pc}
        221290:	e3e0c000 	mvn	ip, #0	; 0x0
        221294:	e582c000 	str	ip, [r2]
        221298:	ea000001 	b	2212a4 <NextQuad__FUlT1Pl+0x64>
        22129c:	e37e0001 	cmn	lr, #1	; 0x1
        2212a0:	1a000009 	bne	2212cc <NextQuad__FUlT1Pl+0x8c>
        2212a4:	e1330001 	teq	r3, r1
        2212a8:	0a000002 	beq	2212b8 <NextQuad__FUlT1Pl+0x78>
        2212ac:	e3310003 	teq	r1, #3	; 0x3
        2212b0:	03300000 	teqeq	r0, #0	; 0x0
        2212b4:	1a000001 	bne	2212c0 <NextQuad__FUlT1Pl+0x80>
        2212b8:	e3a00001 	mov	r0, #1	; 0x1
        2212bc:	ea000000 	b	2212c4 <NextQuad__FUlT1Pl+0x84>
        2212c0:	e3a00000 	mov	r0, #0	; 0x0
        2212c4:	e20000ff 	and	r0, r0, #255	; 0xff
        2212c8:	e8bd8000 	ldmia	sp!, {pc}
        2212cc:	e13c0001 	teq	ip, r1
        2212d0:	0afffff8 	beq	2212b8 <NextQuad__FUlT1Pl+0x78>
        2212d4:	e3310000 	teq	r1, #0	; 0x0
        2212d8:	03300003 	teqeq	r0, #3	; 0x3
        2212dc:	1afffff7 	bne	2212c0 <NextQuad__FUlT1Pl+0x80>
        2212e0:	eafffff4 	b	2212b8 <NextQuad__FUlT1Pl+0x78>
    */
}

/**
 * Symbol: NewCoeffs(EqSystem *)
 * Address: 00225330
 */
NewCoeffs(EqSystem *) {
    /*
        225330:	e1a0c00d 	mov	ip, sp
        225334:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        225338:	e24cb004 	sub	fp, ip, #4	; 0x4
        22533c:	e1a04000 	mov	r4, r0
        225340:	e3a06000 	mov	r6, #0	; 0x0
        225344:	e5907004 	ldr	r7, [r0, #4]
        225348:	e3570029 	cmp	r7, #41	; 0x29
        22534c:	ca000006 	bgt	22536c <NewCoeffs(EqSystem *)+0x3c>
        225350:	e3a00094 	mov	r0, #148	; 0x94
        225354:	eb651cc0 	bl	1b6c65c <$MakeHandle(long)>
        225358:	e1a05000 	mov	r5, r0
        22535c:	e59f1010 	ldr	r1, [pc, #10]	; 225374 <NewCoeffs(EqSystem *)+0x44>
        225360:	eb6520c9 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
        225364:	e3350000 	teq	r5, #0	; 0x0
        225368:	1a000002 	bne	225378 <NewCoeffs(EqSystem *)+0x48>
        22536c:	e1a00006 	mov	r0, r6
        225370:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        225374:	636f6630 	cmnvs	pc, #50331648	; 0x3000000
        225378:	e5940004 	ldr	r0, [r4, #4]
        22537c:	e2800001 	add	r0, r0, #1	; 0x1
        225380:	e5840004 	str	r0, [r4, #4]
        225384:	e0870087 	add	r0, r7, r7, lsl #1
        225388:	e0840100 	add	r0, r4, r0, lsl #2
        22538c:	e5c0600c 	strb	r6, [r0, #12]
        225390:	e5a05010 	str	r5, [r0, #16]!
        225394:	e3a00000 	mov	r0, #0	; 0x0
        225398:	e5951000 	ldr	r1, [r5]
        22539c:	e7816100 	str	r6, [r1, r0, lsl #2]
        2253a0:	e2800001 	add	r0, r0, #1	; 0x1
        2253a4:	e3500024 	cmp	r0, #36	; 0x24
        2253a8:	dafffffa 	ble	225398 <NewCoeffs(EqSystem *)+0x68>
        2253ac:	e1a00005 	mov	r0, r5
        2253b0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NoDiacriticsText(unsigned short *, long)
 * Address: 002577d4
 */
NoDiacriticsText(unsigned short *, long) {
    /*
        2577d4:	e59f2004 	ldr	r2, [pc, #4]	; 2577e0 <NoDiacriticsText(unsigned short *, long)+0xc>
        2577d8:	e5922068 	ldr	r2, [r2, #104]
        2577dc:	ea652a48 	b	1ba2104 <$ConvertTextCase(unsigned short *, long, signed char *)>
        2577e0:	0c107790 	ldceq	7, cr7, [r0], -#576
    */
}

/**
 * Symbol: NextHeapBlock
 * Address: 00271f1c
 */
void globals::NextHeapBlock() {
    /*
        271f1c:	e1a0c00d 	mov	ip, sp
        271f20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        271f24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        271f28:	e24cb014 	sub	fp, ip, #20	; 0x14
        271f2c:	e1a05002 	mov	r5, r2
        271f30:	e1a04003 	mov	r4, r3
        271f34:	e3300000 	teq	r0, #0	; 0x0
        271f38:	e59b6024 	ldr	r6, [fp, #36]
        271f3c:	e59b7020 	ldr	r7, [fp, #32]
        271f40:	e59b801c 	ldr	r8, [fp, #28]
        271f44:	e59b9018 	ldr	r9, [fp, #24]
        271f48:	e59ba014 	ldr	sl, [fp, #20]
        271f4c:	0b65bc63 	bleq	1be10e0 <$GetCurrentHeap>
        271f50:	e1a01000 	mov	r1, r0
        271f54:	e5900060 	ldr	r0, [r0, #96]
        271f58:	e3a02000 	mov	r2, #0	; 0x0
        271f5c:	e59b3008 	ldr	r3, [fp, #8]
        271f60:	e1300003 	teq	r0, r3
        271f64:	11a00002 	movne	r0, r2
        271f68:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        271f6c:	e3350000 	teq	r5, #0	; 0x0
        271f70:	12450010 	subne	r0, r5, #16	; 0x10
        271f74:	02410010 	subeq	r0, r1, #16	; 0x10
        271f78:	e5d03000 	ldrb	r3, [r0]
        271f7c:	e3130080 	tst	r3, #128	; 0x80
        271f80:	15903004 	ldrne	r3, [r0, #4]
        271f84:	01a03000 	moveq	r3, r0
        271f88:	05900000 	ldreq	r0, [r0]
        271f8c:	e0830000 	add	r0, r3, r0
        271f90:	e5911004 	ldr	r1, [r1, #4]
        271f94:	e1510000 	cmp	r1, r0
        271f98:	91a00005 	movls	r0, r5
        271f9c:	e5d01000 	ldrb	r1, [r0]
        271fa0:	e3110080 	tst	r1, #128	; 0x80
        271fa4:	1a000010 	bne	271fec <NextHeapBlock+0xd0>
        271fa8:	e1a01000 	mov	r1, r0
        271fac:	e3340000 	teq	r4, #0	; 0x0
        271fb0:	12810010 	addne	r0, r1, #16	; 0x10
        271fb4:	15840000 	strne	r0, [r4]
        271fb8:	e33a0000 	teq	sl, #0	; 0x0
        271fbc:	158a2000 	strne	r2, [sl]
        271fc0:	e3a00007 	mov	r0, #7	; 0x7
        271fc4:	e3390000 	teq	r9, #0	; 0x0
        271fc8:	15890000 	strne	r0, [r9]
        271fcc:	e3380000 	teq	r8, #0	; 0x0
        271fd0:	15c82000 	strneb	r2, [r8]
        271fd4:	e3370000 	teq	r7, #0	; 0x0
        271fd8:	15911000 	ldrne	r1, [r1]
        271fdc:	15871000 	strne	r1, [r7]
        271fe0:	e3360000 	teq	r6, #0	; 0x0
        271fe4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        271fe8:	ea000026 	b	272088 <NextHeapBlock+0x16c>
        271fec:	e2013003 	and	r3, r1, #3	; 0x3
        271ff0:	e3330001 	teq	r3, #1	; 0x1
        271ff4:	1a000039 	bne	2720e0 <NextHeapBlock+0x1c4>
        271ff8:	e1a03000 	mov	r3, r0
        271ffc:	e3110010 	tst	r1, #16	; 0x10
        272000:	0a000024 	beq	272098 <NextHeapBlock+0x17c>
        272004:	e5d30002 	ldrb	r0, [r3, #2]
        272008:	e33000ff 	teq	r0, #255	; 0xff
        27200c:	1a000021 	bne	272098 <NextHeapBlock+0x17c>
        272010:	e5d30003 	ldrb	r0, [r3, #3]
        272014:	e3500005 	cmp	r0, #5	; 0x5
        272018:	908ff100 	addls	pc, pc, r0, lsl #2
        27201c:	ea00001b 	b	272090 <NextHeapBlock+0x174>
        272020:	ea00001a 	b	272090 <NextHeapBlock+0x174>
        272024:	ea000004 	b	27203c <NextHeapBlock+0x120>
        272028:	ea000003 	b	27203c <NextHeapBlock+0x120>
        27202c:	ea000004 	b	272044 <NextHeapBlock+0x128>
        272030:	ea000005 	b	27204c <NextHeapBlock+0x130>
        272034:	e3a00006 	mov	r0, #6	; 0x6
        272038:	ea000004 	b	272050 <NextHeapBlock+0x134>
        27203c:	e3a00001 	mov	r0, #1	; 0x1
        272040:	ea000002 	b	272050 <NextHeapBlock+0x134>
        272044:	e3a00002 	mov	r0, #2	; 0x2
        272048:	ea000000 	b	272050 <NextHeapBlock+0x134>
        27204c:	e3a00005 	mov	r0, #5	; 0x5
        272050:	e3340000 	teq	r4, #0	; 0x0
        272054:	12831010 	addne	r1, r3, #16	; 0x10
        272058:	15841000 	strne	r1, [r4]
        27205c:	e33a0000 	teq	sl, #0	; 0x0
        272060:	158a2000 	strne	r2, [sl]
        272064:	e3390000 	teq	r9, #0	; 0x0
        272068:	15890000 	strne	r0, [r9]
        27206c:	e3380000 	teq	r8, #0	; 0x0
        272070:	15c82000 	strneb	r2, [r8]
        272074:	e3370000 	teq	r7, #0	; 0x0
        272078:	15b31004 	ldrne	r1, [r3, #4]!
        27207c:	15871000 	strne	r1, [r7]
        272080:	e3360000 	teq	r6, #0	; 0x0
        272084:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272088:	e5862000 	str	r2, [r6]
        27208c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272090:	e3e00000 	mvn	r0, #0	; 0x0
        272094:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272098:	e3340000 	teq	r4, #0	; 0x0
        27209c:	12830010 	addne	r0, r3, #16	; 0x10
        2720a0:	15840000 	strne	r0, [r4]
        2720a4:	e33a0000 	teq	sl, #0	; 0x0
        2720a8:	158a2000 	strne	r2, [sl]
        2720ac:	e3a00003 	mov	r0, #3	; 0x3
        2720b0:	e3390000 	teq	r9, #0	; 0x0
        2720b4:	15890000 	strne	r0, [r9]
        2720b8:	e3380000 	teq	r8, #0	; 0x0
        2720bc:	15d31003 	ldrneb	r1, [r3, #3]
        2720c0:	15c81000 	strneb	r1, [r8]
        2720c4:	e3370000 	teq	r7, #0	; 0x0
        2720c8:	15931004 	ldrne	r1, [r3, #4]
        2720cc:	15871000 	strne	r1, [r7]
        2720d0:	e3360000 	teq	r6, #0	; 0x0
        2720d4:	15b3100c 	ldrne	r1, [r3, #12]!
        2720d8:	1a000013 	bne	27212c <NextHeapBlock+0x210>
        2720dc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2720e0:	e1a01000 	mov	r1, r0
        2720e4:	e3340000 	teq	r4, #0	; 0x0
        2720e8:	12810010 	addne	r0, r1, #16	; 0x10
        2720ec:	15840000 	strne	r0, [r4]
        2720f0:	e33a0000 	teq	sl, #0	; 0x0
        2720f4:	15910008 	ldrne	r0, [r1, #8]
        2720f8:	158a0000 	strne	r0, [sl]
        2720fc:	e3a00004 	mov	r0, #4	; 0x4
        272100:	e3390000 	teq	r9, #0	; 0x0
        272104:	15890000 	strne	r0, [r9]
        272108:	e3380000 	teq	r8, #0	; 0x0
        27210c:	15d12003 	ldrneb	r2, [r1, #3]
        272110:	15c82000 	strneb	r2, [r8]
        272114:	e3370000 	teq	r7, #0	; 0x0
        272118:	15912004 	ldrne	r2, [r1, #4]
        27211c:	15872000 	strne	r2, [r7]
        272120:	e3360000 	teq	r6, #0	; 0x0
        272124:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272128:	e591100c 	ldr	r1, [r1, #12]
        27212c:	e5861000 	str	r1, [r6]
        272130:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)
 * Address: 00296e04
 */
New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *) {
    /*
        296e04:	e1a0c00d 	mov	ip, sp
        296e08:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        296e0c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        296e10:	e24cb014 	sub	fp, ip, #20	; 0x14
        296e14:	e1a05000 	mov	r5, r0
        296e18:	e1a04003 	mov	r4, r3
        296e1c:	e59b6040 	ldr	r6, [fp, #64]
        296e20:	e59b8014 	ldr	r8, [fp, #20]
        296e24:	e59ba01c 	ldr	sl, [fp, #28]
        296e28:	e24dd028 	sub	sp, sp, #40	; 0x28
        296e2c:	e3e00000 	mvn	r0, #0	; 0x0
        296e30:	e58d0014 	str	r0, [sp, #20]
        296e34:	e3a00000 	mov	r0, #0	; 0x0
        296e38:	e58d0008 	str	r0, [sp, #8]
        296e3c:	e3a00018 	mov	r0, #24	; 0x18
        296e40:	eb5f625d 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        296e44:	e1b07000 	movs	r7, r0
        296e48:	03e00000 	mvneq	r0, #0	; 0x0
        296e4c:	0a000178 	beq	297434 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x630>
        296e50:	e58d6000 	str	r6, [sp]
        296e54:	e3a0e000 	mov	lr, #0	; 0x0
        296e58:	e5876014 	str	r6, [r7, #20]
        296e5c:	e58de010 	str	lr, [sp, #16]
        296e60:	e59b2020 	ldr	r2, [fp, #32]
        296e64:	e3520000 	cmp	r2, #0	; 0x0
        296e68:	da00016e 	ble	297428 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x624>
        296e6c:	e59de010 	ldr	lr, [sp, #16]
        296e70:	e08e010e 	add	r0, lr, lr, lsl #2
        296e74:	e080028e 	add	r0, r0, lr, lsl #5
        296e78:	e0880100 	add	r0, r8, r0, lsl #2
        296e7c:	e5901008 	ldr	r1, [r0, #8]
        296e80:	e3310003 	teq	r1, #3	; 0x3
        296e84:	0a000161 	beq	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        296e88:	e3a01000 	mov	r1, #0	; 0x0
        296e8c:	e1a02001 	mov	r2, r1
        296e90:	e1a09001 	mov	r9, r1
        296e94:	e58d1004 	str	r1, [sp, #4]
        296e98:	e590308c 	ldr	r3, [r0, #140]
        296e9c:	e0833083 	add	r3, r3, r3, lsl #1
        296ea0:	e58d3024 	str	r3, [sp, #36]
        296ea4:	e59be038 	ldr	lr, [fp, #56]
        296ea8:	e79ec203 	ldr	ip, [lr, r3, lsl #4]
        296eac:	e59de010 	ldr	lr, [sp, #16]
        296eb0:	e04ec00c 	sub	ip, lr, ip
        296eb4:	e59be038 	ldr	lr, [fp, #56]
        296eb8:	e08e3203 	add	r3, lr, r3, lsl #4
        296ebc:	e58d3020 	str	r3, [sp, #32]
        296ec0:	e5933004 	ldr	r3, [r3, #4]
        296ec4:	e59de010 	ldr	lr, [sp, #16]
        296ec8:	e043300e 	sub	r3, r3, lr
        296ecc:	e1a06000 	mov	r6, r0
        296ed0:	e35c0000 	cmp	ip, #0	; 0x0
        296ed4:	c240e094 	subgt	lr, r0, #148	; 0x94
        296ed8:	c58de004 	strgt	lr, [sp, #4]
        296edc:	e35c0001 	cmp	ip, #1	; 0x1
        296ee0:	c2401f4a 	subgt	r1, r0, #296	; 0x128
        296ee4:	e3530000 	cmp	r3, #0	; 0x0
        296ee8:	c2809094 	addgt	r9, r0, #148	; 0x94
        296eec:	e3530001 	cmp	r3, #1	; 0x1
        296ef0:	c2802f4a 	addgt	r2, r0, #296	; 0x128
        296ef4:	e5876000 	str	r6, [r7]
        296ef8:	e59de004 	ldr	lr, [sp, #4]
        296efc:	e2877008 	add	r7, r7, #8	; 0x8
        296f00:	e8870202 	stmia	r7, {r1, r9}
        296f04:	e5872008 	str	r2, [r7, #8]
        296f08:	e527e004 	str	lr, [r7, -#4]!
        296f0c:	e2477004 	sub	r7, r7, #4	; 0x4
        296f10:	e59d3024 	ldr	r3, [sp, #36]
        296f14:	e59b2038 	ldr	r2, [fp, #56]
        296f18:	e7920203 	ldr	r0, [r2, r3, lsl #4]
        296f1c:	e59d3020 	ldr	r3, [sp, #32]
        296f20:	e5b32004 	ldr	r2, [r3, #4]!
        296f24:	e082c102 	add	ip, r2, r2, lsl #2
        296f28:	e08c2282 	add	r2, ip, r2, lsl #5
        296f2c:	e0882102 	add	r2, r8, r2, lsl #2
        296f30:	e58d201c 	str	r2, [sp, #28]
        296f34:	e5922004 	ldr	r2, [r2, #4]
        296f38:	e0801100 	add	r1, r0, r0, lsl #2
        296f3c:	e0811280 	add	r1, r1, r0, lsl #5
        296f40:	e58d1018 	str	r1, [sp, #24]
        296f44:	e7981101 	ldr	r1, [r8, r1, lsl #2]
        296f48:	e0422001 	sub	r2, r2, r1
        296f4c:	e2822001 	add	r2, r2, #1	; 0x1
        296f50:	e3320004 	teq	r2, #4	; 0x4
        296f54:	059de010 	ldreq	lr, [sp, #16]
        296f58:	0130000e 	teqeq	r0, lr
        296f5c:	1a00001a 	bne	296fcc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1c8>
        296f60:	e0610181 	rsb	r0, r1, r1, lsl #3
        296f64:	e0840100 	add	r0, r4, r0, lsl #2
        296f68:	e5901044 	ldr	r1, [r0, #68]
        296f6c:	e590000c 	ldr	r0, [r0, #12]
        296f70:	eb625de7 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        296f74:	e3700003 	cmn	r0, #3	; 0x3
        296f78:	da000013 	ble	296fcc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1c8>
        296f7c:	e3500007 	cmp	r0, #7	; 0x7
        296f80:	aa000011 	bge	296fcc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1c8>
        296f84:	e59d1018 	ldr	r1, [sp, #24]
        296f88:	e0880101 	add	r0, r8, r1, lsl #2
        296f8c:	e5900080 	ldr	r0, [r0, #128]
        296f90:	e59d201c 	ldr	r2, [sp, #28]
        296f94:	e5b21080 	ldr	r1, [r2, #128]!
        296f98:	e28b3038 	add	r3, fp, #56	; 0x38
        296f9c:	e893000c 	ldmia	r3, {r2, r3}
        296fa0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        296fa4:	e1a0300a 	mov	r3, sl
        296fa8:	e92d0008 	stmdb	sp!, {r3}
        296fac:	e1a03008 	mov	r3, r8
        296fb0:	e1a02004 	mov	r2, r4
        296fb4:	e1a01005 	mov	r1, r5
        296fb8:	e1a00007 	mov	r0, r7
        296fbc:	eb00011d 	bl	297438 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x634>
        296fc0:	e28dd014 	add	sp, sp, #20	; 0x14
        296fc4:	e3300000 	teq	r0, #0	; 0x0
        296fc8:	1a000110 	bne	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        296fcc:	e59de004 	ldr	lr, [sp, #4]
        296fd0:	e33e0000 	teq	lr, #0	; 0x0
        296fd4:	03390000 	teqeq	r9, #0	; 0x0
        296fd8:	05960008 	ldreq	r0, [r6, #8]
        296fdc:	03300002 	teqeq	r0, #2	; 0x2
        296fe0:	08960003 	ldmeqia	r6, {r0, r1}
        296fe4:	02802002 	addeq	r2, r0, #2	; 0x2
        296fe8:	01310002 	teqeq	r1, r2
        296fec:	1a00000f 	bne	297030 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x22c>
        296ff0:	e5962038 	ldr	r2, [r6, #56]
        296ff4:	e59d3000 	ldr	r3, [sp]
        296ff8:	e1530082 	cmp	r3, r2, lsl #1
        296ffc:	aa00000b 	bge	297030 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x22c>
        297000:	e0600180 	rsb	r0, r0, r0, lsl #3
        297004:	e0840100 	add	r0, r4, r0, lsl #2
        297008:	e5900030 	ldr	r0, [r0, #48]
        29700c:	e0611181 	rsb	r1, r1, r1, lsl #3
        297010:	e0841101 	add	r1, r4, r1, lsl #2
        297014:	e5911014 	ldr	r1, [r1, #20]
        297018:	e1500001 	cmp	r0, r1
        29701c:	aa000003 	bge	297030 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x22c>
        297020:	e1a02004 	mov	r2, r4
        297024:	e1a01005 	mov	r1, r5
        297028:	e1a00007 	mov	r0, r7
        29702c:	eb62767d 	bl	1b34a28 <$SignFromTwoSections(tagLocalStuff *, void *, tag_wapx_type *)>
        297030:	e5960074 	ldr	r0, [r6, #116]
        297034:	e3500f7d 	cmp	r0, #500	; 0x1f4
        297038:	0a000043 	beq	29714c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x348>
        29703c:	ca000015 	bgt	297098 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x294>
        297040:	e3300f4b 	teq	r0, #300	; 0x12c
        297044:	0a0000da 	beq	2973b4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x5b0>
        297048:	e3300e19 	teq	r0, #400	; 0x190
        29704c:	1a0000ef 	bne	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        297050:	e5960078 	ldr	r0, [r6, #120]
        297054:	e240ce19 	sub	ip, r0, #400	; 0x190
        297058:	e33c0002 	teq	ip, #2	; 0x2
        29705c:	1a0000bc 	bne	297354 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x550>
        297060:	e5960008 	ldr	r0, [r6, #8]
        297064:	e3300002 	teq	r0, #2	; 0x2
        297068:	1a00008b 	bne	29729c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x498>
        29706c:	e5962080 	ldr	r2, [r6, #128]
        297070:	e1a03002 	mov	r3, r2
        297074:	e59de004 	ldr	lr, [sp, #4]
        297078:	e33e0000 	teq	lr, #0	; 0x0
        29707c:	03390000 	teqeq	r9, #0	; 0x0
        297080:	1a000060 	bne	297208 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x404>
        297084:	e1a02004 	mov	r2, r4
        297088:	e1a01005 	mov	r1, r5
        29708c:	e1a00007 	mov	r0, r7
        297090:	eb625980 	bl	1b2d698 <$DgtFromAloneDnCCWArc(tagLocalStuff *, void *, tag_wapx_type *)>
        297094:	ea000080 	b	29729c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x498>
        297098:	e3300faf 	teq	r0, #700	; 0x2bc
        29709c:	0a00000e 	beq	2970dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2d8>
        2970a0:	e240ce57 	sub	ip, r0, #1392	; 0x570
        2970a4:	e33c0008 	teq	ip, #8	; 0x8
        2970a8:	1a0000d8 	bne	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        2970ac:	e5b62080 	ldr	r2, [r6, #128]!
        2970b0:	e1a03002 	mov	r3, r2
        2970b4:	e1a0100a 	mov	r1, sl
        2970b8:	e59b0018 	ldr	r0, [fp, #24]
        2970bc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2970c0:	e1a03008 	mov	r3, r8
        2970c4:	e1a02004 	mov	r2, r4
        2970c8:	e1a01005 	mov	r1, r5
        2970cc:	e1a00007 	mov	r0, r7
        2970d0:	eb00068b 	bl	298b04 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1d00>
        2970d4:	e28dd010 	add	sp, sp, #16	; 0x10
        2970d8:	ea0000cc 	b	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        2970dc:	e5960078 	ldr	r0, [r6, #120]
        2970e0:	e240cfaf 	sub	ip, r0, #700	; 0x2bc
        2970e4:	e33c0002 	teq	ip, #2	; 0x2
        2970e8:	1a00000c 	bne	297120 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x31c>
        2970ec:	e5962080 	ldr	r2, [r6, #128]
        2970f0:	e1a03002 	mov	r3, r2
        2970f4:	e1a0000a 	mov	r0, sl
        2970f8:	e59b1024 	ldr	r1, [fp, #36]
        2970fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        297100:	e59b3018 	ldr	r3, [fp, #24]
        297104:	e92d0008 	stmdb	sp!, {r3}
        297108:	e1a03008 	mov	r3, r8
        29710c:	e1a02004 	mov	r2, r4
        297110:	e1a01005 	mov	r1, r5
        297114:	e1a00007 	mov	r0, r7
        297118:	eb0005bd 	bl	298814 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1a10>
        29711c:	e28dd014 	add	sp, sp, #20	; 0x14
        297120:	e5960078 	ldr	r0, [r6, #120]
        297124:	e240cfaf 	sub	ip, r0, #700	; 0x2bc
        297128:	e33c0001 	teq	ip, #1	; 0x1
        29712c:	05b60008 	ldreq	r0, [r6, #8]!
        297130:	03300002 	teqeq	r0, #2	; 0x2
        297134:	1a0000b5 	bne	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        297138:	e1a02004 	mov	r2, r4
        29713c:	e1a01005 	mov	r1, r5
        297140:	e1a00007 	mov	r0, r7
        297144:	eb625d81 	bl	1b2e750 <$GreyDgtFromELink(tagLocalStuff *, void *, tag_wapx_type *)>
        297148:	ea0000b0 	b	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        29714c:	e5960078 	ldr	r0, [r6, #120]
        297150:	e240cf7d 	sub	ip, r0, #500	; 0x1f4
        297154:	e33c0002 	teq	ip, #2	; 0x2
        297158:	1a000014 	bne	2971b0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3ac>
        29715c:	e5962080 	ldr	r2, [r6, #128]
        297160:	e1a03002 	mov	r3, r2
        297164:	e92d000c 	stmdb	sp!, {r2, r3}
        297168:	e28b1038 	add	r1, fp, #56	; 0x38
        29716c:	e9311008 	ldmdb	r1!, {r3, ip}
        297170:	e92d1008 	stmdb	sp!, {r3, ip}
        297174:	e9311008 	ldmdb	r1!, {r3, ip}
        297178:	e92d1008 	stmdb	sp!, {r3, ip}
        29717c:	e1a0000a 	mov	r0, sl
        297180:	e59b1024 	ldr	r1, [fp, #36]
        297184:	e28b3038 	add	r3, fp, #56	; 0x38
        297188:	e893000c 	ldmia	r3, {r2, r3}
        29718c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        297190:	e59b3018 	ldr	r3, [fp, #24]
        297194:	e92d0008 	stmdb	sp!, {r3}
        297198:	e1a03008 	mov	r3, r8
        29719c:	e1a02004 	mov	r2, r4
        2971a0:	e1a01005 	mov	r1, r5
        2971a4:	e1a00007 	mov	r0, r7
        2971a8:	eb0006df 	bl	298d2c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f28>
        2971ac:	e28dd02c 	add	sp, sp, #44	; 0x2c
        2971b0:	e5960078 	ldr	r0, [r6, #120]
        2971b4:	e240cf7d 	sub	ip, r0, #500	; 0x1f4
        2971b8:	e33c0001 	teq	ip, #1	; 0x1
        2971bc:	1a000093 	bne	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        2971c0:	e5b61080 	ldr	r1, [r6, #128]!
        2971c4:	e1a02001 	mov	r2, r1
        2971c8:	e59b3038 	ldr	r3, [fp, #56]
        2971cc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2971d0:	e28b1038 	add	r1, fp, #56	; 0x38
        2971d4:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        2971d8:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        2971dc:	e1a0100a 	mov	r1, sl
        2971e0:	e59b0018 	ldr	r0, [fp, #24]
        2971e4:	e28b3020 	add	r3, fp, #32	; 0x20
        2971e8:	e893000c 	ldmia	r3, {r2, r3}
        2971ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2971f0:	e1a03008 	mov	r3, r8
        2971f4:	e1a02004 	mov	r2, r4
        2971f8:	e1a01005 	mov	r1, r5
        2971fc:	e1a00007 	mov	r0, r7
        297200:	eb0011fd 	bl	29b9fc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf8>
        297204:	ea000068 	b	2973ac <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x5a8>
        297208:	e92d000c 	stmdb	sp!, {r2, r3}
        29720c:	e28b1038 	add	r1, fp, #56	; 0x38
        297210:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        297214:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        297218:	e1a0300a 	mov	r3, sl
        29721c:	e92d0008 	stmdb	sp!, {r3}
        297220:	e1a03008 	mov	r3, r8
        297224:	e1a02004 	mov	r2, r4
        297228:	e1a01005 	mov	r1, r5
        29722c:	e1a00007 	mov	r0, r7
        297230:	eb000bc6 	bl	29a150 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x334c>
        297234:	e28dd01c 	add	sp, sp, #28	; 0x1c
        297238:	e3390000 	teq	r9, #0	; 0x0
        29723c:	0a000016 	beq	29729c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x498>
        297240:	e5990078 	ldr	r0, [r9, #120]
        297244:	e240ce19 	sub	ip, r0, #400	; 0x190
        297248:	e33c0002 	teq	ip, #2	; 0x2
        29724c:	1240cf4b 	subne	ip, r0, #300	; 0x12c
        297250:	133c0001 	teqne	ip, #1	; 0x1
        297254:	1a000010 	bne	29729c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x498>
        297258:	e599003c 	ldr	r0, [r9, #60]
        29725c:	e5991048 	ldr	r1, [r9, #72]
        297260:	e1510000 	cmp	r1, r0
        297264:	da00000c 	ble	29729c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x498>
        297268:	e5960080 	ldr	r0, [r6, #128]
        29726c:	e5b91080 	ldr	r1, [r9, #128]!
        297270:	e28b3038 	add	r3, fp, #56	; 0x38
        297274:	e893000c 	ldmia	r3, {r2, r3}
        297278:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        29727c:	e1a0300a 	mov	r3, sl
        297280:	e92d0008 	stmdb	sp!, {r3}
        297284:	e1a03008 	mov	r3, r8
        297288:	e1a02004 	mov	r2, r4
        29728c:	e1a01005 	mov	r1, r5
        297290:	e1a00007 	mov	r0, r7
        297294:	eb626db2 	bl	1b32964 <$DgtFromDnHorseshoe__FP13tagLocalStuffPvP13tag_wapx_typeP9tag_CHUNKPiiT6P7tag_STKT6>
        297298:	e28dd014 	add	sp, sp, #20	; 0x14
        29729c:	e596107c 	ldr	r1, [r6, #124]
        2972a0:	e3710001 	cmn	r1, #1	; 0x1
        2972a4:	0a000022 	beq	297334 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x530>
        2972a8:	e28d2008 	add	r2, sp, #8	; 0x8
        2972ac:	e1a00005 	mov	r0, r5
        2972b0:	eb62613d 	bl	1b2f7ac <$LO_PickDirectInd(void *, int, tag_LOWOBJ **)>
        2972b4:	e1a00005 	mov	r0, r5
        2972b8:	e59d1008 	ldr	r1, [sp, #8]
        2972bc:	eb626139 	bl	1b2f7a8 <$LO_HowManyChunks(void *, tag_LOWOBJ *)>
        2972c0:	e1a09000 	mov	r9, r0
        2972c4:	e3a03001 	mov	r3, #1	; 0x1
        2972c8:	e92d0008 	stmdb	sp!, {r3}
        2972cc:	e1a02004 	mov	r2, r4
        2972d0:	e1a01008 	mov	r1, r8
        2972d4:	e1a00005 	mov	r0, r5
        2972d8:	e59d300c 	ldr	r3, [sp, #12]
        2972dc:	eb62612f 	bl	1b2f7a0 <$LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)>
        2972e0:	e28dd004 	add	sp, sp, #4	; 0x4
        2972e4:	e1a03009 	mov	r3, r9
        2972e8:	e58d000c 	str	r0, [sp, #12]
        2972ec:	e92d0008 	stmdb	sp!, {r3}
        2972f0:	e1a02004 	mov	r2, r4
        2972f4:	e1a01008 	mov	r1, r8
        2972f8:	e1a00005 	mov	r0, r5
        2972fc:	e59d300c 	ldr	r3, [sp, #12]
        297300:	eb626126 	bl	1b2f7a0 <$LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)>
        297304:	e28dd004 	add	sp, sp, #4	; 0x4
        297308:	e1a03000 	mov	r3, r0
        29730c:	e1a0100a 	mov	r1, sl
        297310:	e1a00008 	mov	r0, r8
        297314:	e59d200c 	ldr	r2, [sp, #12]
        297318:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        29731c:	e1a03004 	mov	r3, r4
        297320:	e1a01005 	mov	r1, r5
        297324:	e1a00007 	mov	r0, r7
        297328:	e59d2018 	ldr	r2, [sp, #24]
        29732c:	eb0000ec 	bl	2976e4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8e0>
        297330:	e28dd010 	add	sp, sp, #16	; 0x10
        297334:	e5b60008 	ldr	r0, [r6, #8]!
        297338:	e3300001 	teq	r0, #1	; 0x1
        29733c:	1a000033 	bne	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        297340:	e1a02004 	mov	r2, r4
        297344:	e1a01005 	mov	r1, r5
        297348:	e1a00007 	mov	r0, r7
        29734c:	eb6258d2 	bl	1b2d69c <$DgtFromUpCCWArc(tagLocalStuff *, void *, tag_wapx_type *)>
        297350:	ea00002e 	b	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        297354:	e240ce19 	sub	ip, r0, #400	; 0x190
        297358:	e33c0001 	teq	ip, #1	; 0x1
        29735c:	05960008 	ldreq	r0, [r6, #8]
        297360:	03300002 	teqeq	r0, #2	; 0x2
        297364:	1a000029 	bne	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        297368:	e5b61080 	ldr	r1, [r6, #128]!
        29736c:	e1a02001 	mov	r2, r1
        297370:	e59b3038 	ldr	r3, [fp, #56]
        297374:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        297378:	e28b1038 	add	r1, fp, #56	; 0x38
        29737c:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        297380:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        297384:	e1a0100a 	mov	r1, sl
        297388:	e59b0018 	ldr	r0, [fp, #24]
        29738c:	e28b3020 	add	r3, fp, #32	; 0x20
        297390:	e893000c 	ldmia	r3, {r2, r3}
        297394:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        297398:	e1a03008 	mov	r3, r8
        29739c:	e1a02004 	mov	r2, r4
        2973a0:	e1a01005 	mov	r1, r5
        2973a4:	e1a00007 	mov	r0, r7
        2973a8:	eb000d3e 	bl	29a8a8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3aa4>
        2973ac:	e28dd02c 	add	sp, sp, #44	; 0x2c
        2973b0:	ea000016 	b	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        2973b4:	e2861034 	add	r1, r6, #52	; 0x34
        2973b8:	e8910003 	ldmia	r1, {r0, r1}
        2973bc:	e1500001 	cmp	r0, r1
        2973c0:	aa000012 	bge	297410 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x60c>
        2973c4:	e5b60080 	ldr	r0, [r6, #128]!
        2973c8:	e1a01000 	mov	r1, r0
        2973cc:	e28b3038 	add	r3, fp, #56	; 0x38
        2973d0:	e893000c 	ldmia	r3, {r2, r3}
        2973d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2973d8:	e1a0200a 	mov	r2, sl
        2973dc:	e1a00008 	mov	r0, r8
        2973e0:	e59b1018 	ldr	r1, [fp, #24]
        2973e4:	e59b3024 	ldr	r3, [fp, #36]
        2973e8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2973ec:	e1a03004 	mov	r3, r4
        2973f0:	e59d2028 	ldr	r2, [sp, #40]
        2973f4:	e92d000c 	stmdb	sp!, {r2, r3}
        2973f8:	e1a01005 	mov	r1, r5
        2973fc:	e1a00007 	mov	r0, r7
        297400:	e28b3008 	add	r3, fp, #8	; 0x8
        297404:	e893000c 	ldmia	r3, {r2, r3}
        297408:	eb000114 	bl	297860 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xa5c>
        29740c:	e28dd028 	add	sp, sp, #40	; 0x28
        297410:	e59de010 	ldr	lr, [sp, #16]
        297414:	e28ee001 	add	lr, lr, #1	; 0x1
        297418:	e58de010 	str	lr, [sp, #16]
        29741c:	e59b2020 	ldr	r2, [fp, #32]
        297420:	e15e0002 	cmp	lr, r2
        297424:	bafffe90 	blt	296e6c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x68>
        297428:	e1a00007 	mov	r0, r7
        29742c:	eb5f60e3 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        297430:	e59d0014 	ldr	r0, [sp, #20]
        297434:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        297438:	e1a0c00d 	mov	ip, sp
        29743c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        297440:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        297444:	e24cb014 	sub	fp, ip, #20	; 0x14
        297448:	e1a04002 	mov	r4, r2
        29744c:	e28be01c 	add	lr, fp, #28	; 0x1c
        297450:	e89e4006 	ldmia	lr, {r1, r2, lr}
        297454:	e59bc018 	ldr	ip, [fp, #24]
        297458:	e24dd014 	sub	sp, sp, #20	; 0x14
        29745c:	e3a05000 	mov	r5, #0	; 0x0
        297460:	e58d5010 	str	r5, [sp, #16]
        297464:	e5900000 	ldr	r0, [r0]
        297468:	e13c0001 	teq	ip, r1
        29746c:	05901008 	ldreq	r1, [r0, #8]
        297470:	03310002 	teqeq	r1, #2	; 0x2
        297474:	05901078 	ldreq	r1, [r0, #120]
        297478:	0241cf7d 	subeq	ip, r1, #500	; 0x1f4
        29747c:	033c0001 	teqeq	ip, #1	; 0x1
        297480:	0a000095 	beq	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        297484:	e590108c 	ldr	r1, [r0, #140]
        297488:	e3510001 	cmp	r1, #1	; 0x1
        29748c:	da000018 	ble	2974f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x6f0>
        297490:	e081c081 	add	ip, r1, r1, lsl #1
        297494:	e082c20c 	add	ip, r2, ip, lsl #4
        297498:	e24c6060 	sub	r6, ip, #96	; 0x60
        29749c:	e8960060 	ldmia	r6, {r5, r6}
        2974a0:	e1350006 	teq	r5, r6
        2974a4:	024cc030 	subeq	ip, ip, #48	; 0x30
        2974a8:	089c1080 	ldmeqia	ip, {r7, ip}
        2974ac:	0137000c 	teqeq	r7, ip
        2974b0:	1a00000f 	bne	2974f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x6f0>
        2974b4:	e085c105 	add	ip, r5, r5, lsl #2
        2974b8:	e08c5285 	add	r5, ip, r5, lsl #5
        2974bc:	e0836105 	add	r6, r3, r5, lsl #2
        2974c0:	e3a0502d 	mov	r5, #45	; 0x2d
        2974c4:	e2855c01 	add	r5, r5, #256	; 0x100
        2974c8:	e5968078 	ldr	r8, [r6, #120]
        2974cc:	e1380005 	teq	r8, r5
        2974d0:	1a000007 	bne	2974f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x6f0>
        2974d4:	e087c107 	add	ip, r7, r7, lsl #2
        2974d8:	e08c7287 	add	r7, ip, r7, lsl #5
        2974dc:	e083c107 	add	ip, r3, r7, lsl #2
        2974e0:	e58dc000 	str	ip, [sp]
        2974e4:	e5bc7078 	ldr	r7, [ip, #120]!
        2974e8:	e1370005 	teq	r7, r5
        2974ec:	03a01001 	moveq	r1, #1	; 0x1
        2974f0:	0a00001c 	beq	297568 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x764>
        2974f4:	e24ec002 	sub	ip, lr, #2	; 0x2
        2974f8:	e15c0001 	cmp	ip, r1
        2974fc:	da000076 	ble	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        297500:	e0811081 	add	r1, r1, r1, lsl #1
        297504:	e0821201 	add	r1, r2, r1, lsl #4
        297508:	e5912034 	ldr	r2, [r1, #52]
        29750c:	e591c030 	ldr	ip, [r1, #48]
        297510:	e13c0002 	teq	ip, r2
        297514:	05912060 	ldreq	r2, [r1, #96]
        297518:	05911064 	ldreq	r1, [r1, #100]
        29751c:	01320001 	teqeq	r2, r1
        297520:	1a00006d 	bne	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        297524:	e1a0100c 	mov	r1, ip
        297528:	e081c101 	add	ip, r1, r1, lsl #2
        29752c:	e08c1281 	add	r1, ip, r1, lsl #5
        297530:	e0836101 	add	r6, r3, r1, lsl #2
        297534:	e3a0102d 	mov	r1, #45	; 0x2d
        297538:	e2811c01 	add	r1, r1, #256	; 0x100
        29753c:	e596e078 	ldr	lr, [r6, #120]
        297540:	e13e0001 	teq	lr, r1
        297544:	1a000064 	bne	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        297548:	e082c102 	add	ip, r2, r2, lsl #2
        29754c:	e08c2282 	add	r2, ip, r2, lsl #5
        297550:	e083c102 	add	ip, r3, r2, lsl #2
        297554:	e58dc000 	str	ip, [sp]
        297558:	e5bc2078 	ldr	r2, [ip, #120]!
        29755c:	e1320001 	teq	r2, r1
        297560:	1a00005d 	bne	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        297564:	e3a01002 	mov	r1, #2	; 0x2
        297568:	e58d100c 	str	r1, [sp, #12]
        29756c:	e5905000 	ldr	r5, [r0]
        297570:	e2859001 	add	r9, r5, #1	; 0x1
        297574:	e285a002 	add	sl, r5, #2	; 0x2
        297578:	e2853003 	add	r3, r5, #3	; 0x3
        29757c:	e1a08003 	mov	r8, r3
        297580:	e92d0008 	stmdb	sp!, {r3}
        297584:	e1a0300a 	mov	r3, sl
        297588:	e1a02009 	mov	r2, r9
        29758c:	e1a01005 	mov	r1, r5
        297590:	e1a00004 	mov	r0, r4
        297594:	eb62541e 	bl	1b2c614 <$CheckQIntersec__FP13tag_wapx_typeiN32>
        297598:	e28dd004 	add	sp, sp, #4	; 0x4
        29759c:	e3300000 	teq	r0, #0	; 0x0
        2975a0:	1a00004d 	bne	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        2975a4:	e5962004 	ldr	r2, [r6, #4]
        2975a8:	e5967000 	ldr	r7, [r6]
        2975ac:	e58d2008 	str	r2, [sp, #8]
        2975b0:	e59d0000 	ldr	r0, [sp]
        2975b4:	e5903000 	ldr	r3, [r0]
        2975b8:	e58d3004 	str	r3, [sp, #4]
        2975bc:	e1a03002 	mov	r3, r2
        2975c0:	e5b06004 	ldr	r6, [r0, #4]!
        2975c4:	e92d0008 	stmdb	sp!, {r3}
        2975c8:	e1a03007 	mov	r3, r7
        2975cc:	e1a02009 	mov	r2, r9
        2975d0:	e1a01005 	mov	r1, r5
        2975d4:	e1a00004 	mov	r0, r4
        2975d8:	eb62540d 	bl	1b2c614 <$CheckQIntersec__FP13tag_wapx_typeiN32>
        2975dc:	e28dd004 	add	sp, sp, #4	; 0x4
        2975e0:	e3300000 	teq	r0, #0	; 0x0
        2975e4:	0a00003c 	beq	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        2975e8:	e1a03006 	mov	r3, r6
        2975ec:	e92d0008 	stmdb	sp!, {r3}
        2975f0:	e1a02009 	mov	r2, r9
        2975f4:	e1a01005 	mov	r1, r5
        2975f8:	e1a00004 	mov	r0, r4
        2975fc:	e59d3008 	ldr	r3, [sp, #8]
        297600:	eb625403 	bl	1b2c614 <$CheckQIntersec__FP13tag_wapx_typeiN32>
        297604:	e28dd004 	add	sp, sp, #4	; 0x4
        297608:	e3300000 	teq	r0, #0	; 0x0
        29760c:	0a000032 	beq	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        297610:	e59d3008 	ldr	r3, [sp, #8]
        297614:	e92d0008 	stmdb	sp!, {r3}
        297618:	e1a03007 	mov	r3, r7
        29761c:	e1a02008 	mov	r2, r8
        297620:	e1a0100a 	mov	r1, sl
        297624:	e1a00004 	mov	r0, r4
        297628:	eb6253f9 	bl	1b2c614 <$CheckQIntersec__FP13tag_wapx_typeiN32>
        29762c:	e28dd004 	add	sp, sp, #4	; 0x4
        297630:	e3300000 	teq	r0, #0	; 0x0
        297634:	0a000028 	beq	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        297638:	e1a03006 	mov	r3, r6
        29763c:	e92d0008 	stmdb	sp!, {r3}
        297640:	e1a02008 	mov	r2, r8
        297644:	e1a0100a 	mov	r1, sl
        297648:	e1a00004 	mov	r0, r4
        29764c:	e59d3008 	ldr	r3, [sp, #8]
        297650:	eb6253ef 	bl	1b2c614 <$CheckQIntersec__FP13tag_wapx_typeiN32>
        297654:	e28dd004 	add	sp, sp, #4	; 0x4
        297658:	e3300000 	teq	r0, #0	; 0x0
        29765c:	0a00001e 	beq	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        297660:	e1a03006 	mov	r3, r6
        297664:	e92d0008 	stmdb	sp!, {r3}
        297668:	e1a01007 	mov	r1, r7
        29766c:	e1a00004 	mov	r0, r4
        297670:	e59d200c 	ldr	r2, [sp, #12]
        297674:	e59d3008 	ldr	r3, [sp, #8]
        297678:	eb6253e5 	bl	1b2c614 <$CheckQIntersec__FP13tag_wapx_typeiN32>
        29767c:	e28dd004 	add	sp, sp, #4	; 0x4
        297680:	e3300000 	teq	r0, #0	; 0x0
        297684:	1a000014 	bne	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        297688:	e59d000c 	ldr	r0, [sp, #12]
        29768c:	e3300002 	teq	r0, #2	; 0x2
        297690:	01a01006 	moveq	r1, r6
        297694:	0a000004 	beq	2976ac <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8a8>
        297698:	e59d000c 	ldr	r0, [sp, #12]
        29769c:	e3300001 	teq	r0, #1	; 0x1
        2976a0:	1a00000d 	bne	2976dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x8d8>
        2976a4:	e1a05007 	mov	r5, r7
        2976a8:	e1a01008 	mov	r1, r8
        2976ac:	e3a03000 	mov	r3, #0	; 0x0
        2976b0:	e3a0205b 	mov	r2, #91	; 0x5b
        2976b4:	e2822c05 	add	r2, r2, #1280	; 0x500
        2976b8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2976bc:	e1a03005 	mov	r3, r5
        2976c0:	e1a01004 	mov	r1, r4
        2976c4:	e2422047 	sub	r2, r2, #71	; 0x47
        2976c8:	e59b0008 	ldr	r0, [fp, #8]
        2976cc:	eb62602f 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        2976d0:	e28dd00c 	add	sp, sp, #12	; 0xc
        2976d4:	e3a00001 	mov	r0, #1	; 0x1
        2976d8:	e58d0010 	str	r0, [sp, #16]
        2976dc:	e59d0010 	ldr	r0, [sp, #16]
        2976e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2976e4:	e1a0c00d 	mov	ip, sp
        2976e8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2976ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2976f0:	e1a06001 	mov	r6, r1
        2976f4:	e1a04002 	mov	r4, r2
        2976f8:	e1a05003 	mov	r5, r3
        2976fc:	e59b1010 	ldr	r1, [fp, #16]
        297700:	e59b3008 	ldr	r3, [fp, #8]
        297704:	e59ba004 	ldr	sl, [fp, #4]
        297708:	e24dd008 	sub	sp, sp, #8	; 0x8
        29770c:	e5b02014 	ldr	r2, [r0, #20]!
        297710:	e594000c 	ldr	r0, [r4, #12]
        297714:	e5949008 	ldr	r9, [r4, #8]
        297718:	e58d0000 	str	r0, [sp]
        29771c:	e594c024 	ldr	ip, [r4, #36]
        297720:	e58dc004 	str	ip, [sp, #4]
        297724:	e594001c 	ldr	r0, [r4, #28]
        297728:	e04c8000 	sub	r8, ip, r0
        29772c:	e7930101 	ldr	r0, [r3, r1, lsl #2]
        297730:	e080c100 	add	ip, r0, r0, lsl #2
        297734:	e08c0280 	add	r0, ip, r0, lsl #5
        297738:	e08a1100 	add	r1, sl, r0, lsl #2
        29773c:	e5917068 	ldr	r7, [r1, #104]
        297740:	e3770001 	cmn	r7, #1	; 0x1
        297744:	0a00001d 	beq	2977c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x9bc>
        297748:	e0870107 	add	r0, r7, r7, lsl #2
        29774c:	e0800287 	add	r0, r0, r7, lsl #5
        297750:	e08a0100 	add	r0, sl, r0, lsl #2
        297754:	e5903068 	ldr	r3, [r0, #104]
        297758:	e3730001 	cmn	r3, #1	; 0x1
        29775c:	1a000017 	bne	2977c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x9bc>
        297760:	e5903078 	ldr	r3, [r0, #120]
        297764:	e243cf4b 	sub	ip, r3, #300	; 0x12c
        297768:	e33c0001 	teq	ip, #1	; 0x1
        29776c:	1243ce19 	subne	ip, r3, #400	; 0x190
        297770:	133c0001 	teqne	ip, #1	; 0x1
        297774:	1a000011 	bne	2977c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x9bc>
        297778:	e590c020 	ldr	ip, [r0, #32]
        29777c:	e5913020 	ldr	r3, [r1, #32]
        297780:	e04cc003 	sub	ip, ip, r3
        297784:	e5911018 	ldr	r1, [r1, #24]
        297788:	e0431001 	sub	r1, r3, r1
        29778c:	e0811fa1 	add	r1, r1, r1, lsr #31
        297790:	e15c00c1 	cmp	ip, r1, asr #1
        297794:	da000009 	ble	2977c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x9bc>
        297798:	e3a03018 	mov	r3, #24	; 0x18
        29779c:	e3a0201d 	mov	r2, #29	; 0x1d
        2977a0:	e2822c05 	add	r2, r2, #1280	; 0x500
        2977a4:	e5b01004 	ldr	r1, [r0, #4]!
        2977a8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2977ac:	e1a03009 	mov	r3, r9
        2977b0:	e1a01005 	mov	r1, r5
        2977b4:	e1a00006 	mov	r0, r6
        2977b8:	e2422009 	sub	r2, r2, #9	; 0x9
        2977bc:	ea000023 	b	297850 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xa4c>
        2977c0:	e1a01082 	mov	r1, r2, lsl #1
        2977c4:	e3a00003 	mov	r0, #3	; 0x3
        2977c8:	eb646c5c 	bl	1bb2940 <$__rt_sdiv>
        2977cc:	e1500008 	cmp	r0, r8
        2977d0:	aa000020 	bge	297858 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xa54>
        2977d4:	e3770001 	cmn	r7, #1	; 0x1
        2977d8:	0a000014 	beq	297830 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xa2c>
        2977dc:	e0870107 	add	r0, r7, r7, lsl #2
        2977e0:	e0800287 	add	r0, r0, r7, lsl #5
        2977e4:	e08a7100 	add	r7, sl, r0, lsl #2
        2977e8:	e5970008 	ldr	r0, [r7, #8]
        2977ec:	e3300002 	teq	r0, #2	; 0x2
        2977f0:	1a00000e 	bne	297830 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xa2c>
        2977f4:	e5b41018 	ldr	r1, [r4, #24]!
        2977f8:	e5940008 	ldr	r0, [r4, #8]
        2977fc:	e0401001 	sub	r1, r0, r1
        297800:	e0811fa1 	add	r1, r1, r1, lsr #31
        297804:	e5970014 	ldr	r0, [r7, #20]
        297808:	e15000c1 	cmp	r0, r1, asr #1
        29780c:	da000007 	ble	297830 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xa2c>
        297810:	e1a01008 	mov	r1, r8
        297814:	e3a00003 	mov	r0, #3	; 0x3
        297818:	e59d4004 	ldr	r4, [sp, #4]
        29781c:	eb646c47 	bl	1bb2940 <$__rt_sdiv>
        297820:	e0440000 	sub	r0, r4, r0
        297824:	e5b71020 	ldr	r1, [r7, #32]!
        297828:	e1500001 	cmp	r0, r1
        29782c:	ba000009 	blt	297858 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xa54>
        297830:	e3a03019 	mov	r3, #25	; 0x19
        297834:	e3a02f45 	mov	r2, #276	; 0x114
        297838:	e2822b01 	add	r2, r2, #1024	; 0x400
        29783c:	e59d1000 	ldr	r1, [sp]
        297840:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        297844:	e1a03009 	mov	r3, r9
        297848:	e1a01005 	mov	r1, r5
        29784c:	e1a00006 	mov	r0, r6
        297850:	eb625fce 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        297854:	e28dd00c 	add	sp, sp, #12	; 0xc
        297858:	e3e00000 	mvn	r0, #0	; 0x0
        29785c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        297860:	e1a0c00d 	mov	ip, sp
        297864:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        297868:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        29786c:	e24cb014 	sub	fp, ip, #20	; 0x14
        297870:	e24dd020 	sub	sp, sp, #32	; 0x20
        297874:	e59b0004 	ldr	r0, [fp, #4]
        297878:	e5901008 	ldr	r1, [r0, #8]
        29787c:	e8900410 	ldmia	r0, {r4, sl}
        297880:	e58d1000 	str	r1, [sp]
        297884:	e5b07014 	ldr	r7, [r0, #20]!
        297888:	e59b0008 	ldr	r0, [fp, #8]
        29788c:	eb625fc4 	bl	1b2f7a4 <$LO_GetWorkClassID(void *)>
        297890:	e59b0030 	ldr	r0, [fp, #48]
        297894:	e59b502c 	ldr	r5, [fp, #44]
        297898:	e1350000 	teq	r5, r0
        29789c:	1a00031f 	bne	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        2978a0:	e59b0024 	ldr	r0, [fp, #36]
        2978a4:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        2978a8:	e080c100 	add	ip, r0, r0, lsl #2
        2978ac:	e08c0280 	add	r0, ip, r0, lsl #5
        2978b0:	e59b601c 	ldr	r6, [fp, #28]
        2978b4:	e0860100 	add	r0, r6, r0, lsl #2
        2978b8:	e5901020 	ldr	r1, [r0, #32]
        2978bc:	e5900018 	ldr	r0, [r0, #24]
        2978c0:	e0418000 	sub	r8, r1, r0
        2978c4:	e1a01007 	mov	r1, r7
        2978c8:	e3a00003 	mov	r0, #3	; 0x3
        2978cc:	eb646c1b 	bl	1bb2940 <$__rt_sdiv>
        2978d0:	e1500008 	cmp	r0, r8
        2978d4:	ca000311 	bgt	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        2978d8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2978dc:	e594008c 	ldr	r0, [r4, #140]
        2978e0:	e2807001 	add	r7, r0, #1	; 0x1
        2978e4:	e59b2038 	ldr	r2, [fp, #56]
        2978e8:	e58d2028 	str	r2, [sp, #40]
        2978ec:	e1370002 	teq	r7, r2
        2978f0:	15940080 	ldrne	r0, [r4, #128]
        2978f4:	13300000 	teqne	r0, #0	; 0x0
        2978f8:	0a0000ea 	beq	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        2978fc:	e0870087 	add	r0, r7, r7, lsl #1
        297900:	e59b1034 	ldr	r1, [fp, #52]
        297904:	e1a08001 	mov	r8, r1
        297908:	e791e200 	ldr	lr, [r1, r0, lsl #4]
        29790c:	e0810200 	add	r0, r1, r0, lsl #4
        297910:	e08e210e 	add	r2, lr, lr, lsl #2
        297914:	e082228e 	add	r2, r2, lr, lsl #5
        297918:	e5b03004 	ldr	r3, [r0, #4]!
        29791c:	e58d2024 	str	r2, [sp, #36]
        297920:	e7961102 	ldr	r1, [r6, r2, lsl #2]
        297924:	e0830103 	add	r0, r3, r3, lsl #2
        297928:	e0800283 	add	r0, r0, r3, lsl #5
        29792c:	e0860100 	add	r0, r6, r0, lsl #2
        297930:	e58d1020 	str	r1, [sp, #32]
        297934:	e5900004 	ldr	r0, [r0, #4]
        297938:	e13e0003 	teq	lr, r3
        29793c:	059d2024 	ldreq	r2, [sp, #36]
        297940:	00862102 	addeq	r2, r6, r2, lsl #2
        297944:	05929078 	ldreq	r9, [r2, #120]
        297948:	0249cf4b 	subeq	ip, r9, #300	; 0x12c
        29794c:	033c0001 	teqeq	ip, #1	; 0x1
        297950:	1a000009 	bne	29797c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xb78>
        297954:	e592c080 	ldr	ip, [r2, #128]
        297958:	e59b9028 	ldr	r9, [fp, #40]
        29795c:	e2499001 	sub	r9, r9, #1	; 0x1
        297960:	e15c0009 	cmp	ip, r9
        297964:	aa000004 	bge	29797c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xb78>
        297968:	e592c190 	ldr	ip, [r2, #400]
        29796c:	e37c0001 	cmn	ip, #1	; 0x1
        297970:	02822f49 	addeq	r2, r2, #292	; 0x124
        297974:	09b20108 	ldmeqib	r2!, {r3, r8}
        297978:	0a00002a 	beq	297a28 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xc24>
        29797c:	e13e0003 	teq	lr, r3
        297980:	059d2024 	ldreq	r2, [sp, #36]
        297984:	00862102 	addeq	r2, r6, r2, lsl #2
        297988:	05923078 	ldreq	r3, [r2, #120]
        29798c:	0243cf7d 	subeq	ip, r3, #500	; 0x1f4
        297990:	033c0002 	teqeq	ip, #2	; 0x2
        297994:	05923008 	ldreq	r3, [r2, #8]
        297998:	03330002 	teqeq	r3, #2	; 0x2
        29799c:	1a000007 	bne	2979c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xbbc>
        2979a0:	e1a08000 	mov	r8, r0
        2979a4:	e5920004 	ldr	r0, [r2, #4]
        2979a8:	e5d23091 	ldrb	r3, [r2, #145]
        2979ac:	e0400003 	sub	r0, r0, r3
        2979b0:	e59d3020 	ldr	r3, [sp, #32]
        2979b4:	e5d22090 	ldrb	r2, [r2, #144]
        2979b8:	e0833002 	add	r3, r3, r2
        2979bc:	ea000019 	b	297a28 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xc24>
        2979c0:	e0402001 	sub	r2, r0, r1
        2979c4:	e3520003 	cmp	r2, #3	; 0x3
        2979c8:	ca0000b6 	bgt	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        2979cc:	01a08000 	moveq	r8, r0
        2979d0:	02810001 	addeq	r0, r1, #1	; 0x1
        2979d4:	02803001 	addeq	r3, r0, #1	; 0x1
        2979d8:	0a000012 	beq	297a28 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xc24>
        2979dc:	e59d2028 	ldr	r2, [sp, #40]
        2979e0:	e2422001 	sub	r2, r2, #1	; 0x1
        2979e4:	e1320007 	teq	r2, r7
        2979e8:	0a0000ae 	beq	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        2979ec:	e2872001 	add	r2, r7, #1	; 0x1
        2979f0:	e0822082 	add	r2, r2, r2, lsl #1
        2979f4:	e7983202 	ldr	r3, [r8, r2, lsl #4]
        2979f8:	e083c103 	add	ip, r3, r3, lsl #2
        2979fc:	e08c3283 	add	r3, ip, r3, lsl #5
        297a00:	e7963103 	ldr	r3, [r6, r3, lsl #2]
        297a04:	e0882202 	add	r2, r8, r2, lsl #4
        297a08:	e5922004 	ldr	r2, [r2, #4]
        297a0c:	e082c102 	add	ip, r2, r2, lsl #2
        297a10:	e08c2282 	add	r2, ip, r2, lsl #5
        297a14:	e0862102 	add	r2, r6, r2, lsl #2
        297a18:	e5b28004 	ldr	r8, [r2, #4]!
        297a1c:	e0482003 	sub	r2, r8, r3
        297a20:	e3520002 	cmp	r2, #2	; 0x2
        297a24:	ca00009f 	bgt	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297a28:	e0612181 	rsb	r2, r1, r1, lsl #3
        297a2c:	e59b1018 	ldr	r1, [fp, #24]
        297a30:	e0812102 	add	r2, r1, r2, lsl #2
        297a34:	e282200c 	add	r2, r2, #12	; 0xc
        297a38:	e9b25000 	ldmib	r2!, {ip, lr}
        297a3c:	e0600180 	rsb	r0, r0, r0, lsl #3
        297a40:	e0810100 	add	r0, r1, r0, lsl #2
        297a44:	e5b06010 	ldr	r6, [r0, #16]!
        297a48:	e5902004 	ldr	r2, [r0, #4]
        297a4c:	e0630183 	rsb	r0, r3, r3, lsl #3
        297a50:	e0810100 	add	r0, r1, r0, lsl #2
        297a54:	e58d2010 	str	r2, [sp, #16]
        297a58:	e280000c 	add	r0, r0, #12	; 0xc
        297a5c:	e9b00280 	ldmib	r0!, {r7, r9}
        297a60:	e0680188 	rsb	r0, r8, r8, lsl #3
        297a64:	e0810100 	add	r0, r1, r0, lsl #2
        297a68:	e5901010 	ldr	r1, [r0, #16]
        297a6c:	e58d1008 	str	r1, [sp, #8]
        297a70:	e5b01014 	ldr	r1, [r0, #20]!
        297a74:	e15c0006 	cmp	ip, r6
        297a78:	e58d1004 	str	r1, [sp, #4]
        297a7c:	b1570006 	cmplt	r7, r6
        297a80:	b59d0008 	ldrlt	r0, [sp, #8]
        297a84:	b1570000 	cmplt	r7, r0
        297a88:	aa000086 	bge	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297a8c:	e59d0008 	ldr	r0, [sp, #8]
        297a90:	e1560000 	cmp	r6, r0
        297a94:	d59d0008 	ldrle	r0, [sp, #8]
        297a98:	c1a00006 	movgt	r0, r6
        297a9c:	e15c0007 	cmp	ip, r7
        297aa0:	a1a01007 	movge	r1, r7
        297aa4:	b1a0100c 	movlt	r1, ip
        297aa8:	e0402001 	sub	r2, r0, r1
        297aac:	e58d2000 	str	r2, [sp]
        297ab0:	e5940038 	ldr	r0, [r4, #56]
        297ab4:	e0801080 	add	r1, r0, r0, lsl #1
        297ab8:	e1510082 	cmp	r1, r2, lsl #1
        297abc:	ba000079 	blt	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297ac0:	e59d1004 	ldr	r1, [sp, #4]
        297ac4:	e1590001 	cmp	r9, r1
        297ac8:	d59d1004 	ldrle	r1, [sp, #4]
        297acc:	c1a01009 	movgt	r1, r9
        297ad0:	e59d3010 	ldr	r3, [sp, #16]
        297ad4:	e15e0003 	cmp	lr, r3
        297ad8:	a59d2010 	ldrge	r2, [sp, #16]
        297adc:	b1a0200e 	movlt	r2, lr
        297ae0:	e0411002 	sub	r1, r1, r2
        297ae4:	e1510000 	cmp	r1, r0
        297ae8:	ca00006e 	bgt	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297aec:	e284103c 	add	r1, r4, #60	; 0x3c
        297af0:	e8910003 	ldmia	r1, {r0, r1}
        297af4:	e2843048 	add	r3, r4, #72	; 0x48
        297af8:	e893000c 	ldmia	r3, {r2, r3}
        297afc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        297b00:	e1a02006 	mov	r2, r6
        297b04:	e1a0100e 	mov	r1, lr
        297b08:	e1a0000c 	mov	r0, ip
        297b0c:	e59d3020 	ldr	r3, [sp, #32]
        297b10:	eb6252be 	bl	1b2c610 <$CheckQIntersecXY__FiN71>
        297b14:	e28dd010 	add	sp, sp, #16	; 0x10
        297b18:	e3300000 	teq	r0, #0	; 0x0
        297b1c:	0a000061 	beq	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297b20:	e284103c 	add	r1, r4, #60	; 0x3c
        297b24:	e8910003 	ldmia	r1, {r0, r1}
        297b28:	e2843048 	add	r3, r4, #72	; 0x48
        297b2c:	e893000c 	ldmia	r3, {r2, r3}
        297b30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        297b34:	e1a03009 	mov	r3, r9
        297b38:	e1a02007 	mov	r2, r7
        297b3c:	e1a00006 	mov	r0, r6
        297b40:	e59d1020 	ldr	r1, [sp, #32]
        297b44:	eb6252b1 	bl	1b2c610 <$CheckQIntersecXY__FiN71>
        297b48:	e28dd010 	add	sp, sp, #16	; 0x10
        297b4c:	e3300000 	teq	r0, #0	; 0x0
        297b50:	0a000054 	beq	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297b54:	e284103c 	add	r1, r4, #60	; 0x3c
        297b58:	e8910003 	ldmia	r1, {r0, r1}
        297b5c:	e2843048 	add	r3, r4, #72	; 0x48
        297b60:	e893000c 	ldmia	r3, {r2, r3}
        297b64:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        297b68:	e1a01009 	mov	r1, r9
        297b6c:	e1a00007 	mov	r0, r7
        297b70:	e59d2018 	ldr	r2, [sp, #24]
        297b74:	e59d3014 	ldr	r3, [sp, #20]
        297b78:	eb6252a4 	bl	1b2c610 <$CheckQIntersecXY__FiN71>
        297b7c:	e28dd010 	add	sp, sp, #16	; 0x10
        297b80:	e3300000 	teq	r0, #0	; 0x0
        297b84:	0a000047 	beq	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297b88:	e33a0000 	teq	sl, #0	; 0x0
        297b8c:	0a000009 	beq	297bb8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xdb4>
        297b90:	e59d000c 	ldr	r0, [sp, #12]
        297b94:	e3300000 	teq	r0, #0	; 0x0
        297b98:	0a000042 	beq	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297b9c:	e33a0000 	teq	sl, #0	; 0x0
        297ba0:	159a0078 	ldrne	r0, [sl, #120]
        297ba4:	1240cf4b 	subne	ip, r0, #300	; 0x12c
        297ba8:	133c0001 	teqne	ip, #1	; 0x1
        297bac:	1240ce19 	subne	ip, r0, #400	; 0x190
        297bb0:	133c0002 	teqne	ip, #2	; 0x2
        297bb4:	1a00003b 	bne	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297bb8:	e5940080 	ldr	r0, [r4, #128]
        297bbc:	e59b1024 	ldr	r1, [fp, #36]
        297bc0:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        297bc4:	e2400002 	sub	r0, r0, #2	; 0x2
        297bc8:	e0806100 	add	r6, r0, r0, lsl #2
        297bcc:	e0866280 	add	r6, r6, r0, lsl #5
        297bd0:	e59b001c 	ldr	r0, [fp, #28]
        297bd4:	e0800106 	add	r0, r0, r6, lsl #2
        297bd8:	e5901064 	ldr	r1, [r0, #100]
        297bdc:	e3710001 	cmn	r1, #1	; 0x1
        297be0:	1a000030 	bne	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297be4:	e5d01010 	ldrb	r1, [r0, #16]
        297be8:	e351000b 	cmp	r1, #11	; 0xb
        297bec:	da00002d 	ble	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297bf0:	e5902038 	ldr	r2, [r0, #56]
        297bf4:	e5941038 	ldr	r1, [r4, #56]
        297bf8:	e1520001 	cmp	r2, r1
        297bfc:	aa000029 	bge	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297c00:	e3510000 	cmp	r1, #0	; 0x0
        297c04:	e5942020 	ldr	r2, [r4, #32]
        297c08:	b2811003 	addlt	r1, r1, #3	; 0x3
        297c0c:	e0422141 	sub	r2, r2, r1, asr #2
        297c10:	e5901020 	ldr	r1, [r0, #32]
        297c14:	e1520001 	cmp	r2, r1
        297c18:	da000022 	ble	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297c1c:	e5901034 	ldr	r1, [r0, #52]
        297c20:	e59d2000 	ldr	r2, [sp]
        297c24:	e1510082 	cmp	r1, r2, lsl #1
        297c28:	aa00001e 	bge	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297c2c:	e594101c 	ldr	r1, [r4, #28]
        297c30:	e5942014 	ldr	r2, [r4, #20]
        297c34:	e0811002 	add	r1, r1, r2
        297c38:	e0811fa1 	add	r1, r1, r1, lsr #31
        297c3c:	e590001c 	ldr	r0, [r0, #28]
        297c40:	e06000c1 	rsb	r0, r0, r1, asr #1
        297c44:	eb5f5ede 	bl	1a6f7c4 <$HWRAbs(int)>
        297c48:	e59b101c 	ldr	r1, [fp, #28]
        297c4c:	e0812106 	add	r2, r1, r6, lsl #2
        297c50:	e5923038 	ldr	r3, [r2, #56]
        297c54:	e1500003 	cmp	r0, r3
        297c58:	aa000012 	bge	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297c5c:	e5b20078 	ldr	r0, [r2, #120]!
        297c60:	e240cf4b 	sub	ip, r0, #300	; 0x12c
        297c64:	e33c0001 	teq	ip, #1	; 0x1
        297c68:	1240ce19 	subne	ip, r0, #400	; 0x190
        297c6c:	133c0002 	teqne	ip, #2	; 0x2
        297c70:	1a00000c 	bne	297ca8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xea4>
        297c74:	e7910106 	ldr	r0, [r1, r6, lsl #2]
        297c78:	e1a01008 	mov	r1, r8
        297c7c:	e3a03000 	mov	r3, #0	; 0x0
        297c80:	e3a02f57 	mov	r2, #348	; 0x15c
        297c84:	e2822b01 	add	r2, r2, #1024	; 0x400
        297c88:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        297c8c:	e1a03000 	mov	r3, r0
        297c90:	e2422048 	sub	r2, r2, #72	; 0x48
        297c94:	e59b0008 	ldr	r0, [fp, #8]
        297c98:	e59b1018 	ldr	r1, [fp, #24]
        297c9c:	eb625ebb 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        297ca0:	e28dd00c 	add	sp, sp, #12	; 0xc
        297ca4:	ea00015e 	b	298224 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1420>
        297ca8:	e28dd00c 	add	sp, sp, #12	; 0xc
        297cac:	e59b0008 	ldr	r0, [fp, #8]
        297cb0:	eb625ebb 	bl	1b2f7a4 <$LO_GetWorkClassID(void *)>
        297cb4:	e1a06000 	mov	r6, r0
        297cb8:	e3a01f45 	mov	r1, #276	; 0x114
        297cbc:	e2811b01 	add	r1, r1, #1024	; 0x400
        297cc0:	e59b0008 	ldr	r0, [fp, #8]
        297cc4:	eb625ebb 	bl	1b2f7b8 <$LO_SetWorkClass(void *, unsigned int)>
        297cc8:	e28b1014 	add	r1, fp, #20	; 0x14
        297ccc:	e59b0008 	ldr	r0, [fp, #8]
        297cd0:	eb625eb6 	bl	1b2f7b0 <$LO_PickFirst(void *, tag_LOWOBJ **)>
        297cd4:	e3300000 	teq	r0, #0	; 0x0
        297cd8:	0a000020 	beq	297d60 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xf5c>
        297cdc:	e59b0008 	ldr	r0, [fp, #8]
        297ce0:	e59b1014 	ldr	r1, [fp, #20]
        297ce4:	eb625eaf 	bl	1b2f7a8 <$LO_HowManyChunks(void *, tag_LOWOBJ *)>
        297ce8:	e1a07000 	mov	r7, r0
        297cec:	e3a03001 	mov	r3, #1	; 0x1
        297cf0:	e92d0008 	stmdb	sp!, {r3}
        297cf4:	e59b0008 	ldr	r0, [fp, #8]
        297cf8:	e59b101c 	ldr	r1, [fp, #28]
        297cfc:	e59b2018 	ldr	r2, [fp, #24]
        297d00:	e59b3014 	ldr	r3, [fp, #20]
        297d04:	eb625ea5 	bl	1b2f7a0 <$LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)>
        297d08:	e28dd004 	add	sp, sp, #4	; 0x4
        297d0c:	e1a08000 	mov	r8, r0
        297d10:	e1a03007 	mov	r3, r7
        297d14:	e92d0008 	stmdb	sp!, {r3}
        297d18:	e59b0008 	ldr	r0, [fp, #8]
        297d1c:	e59b101c 	ldr	r1, [fp, #28]
        297d20:	e59b2018 	ldr	r2, [fp, #24]
        297d24:	e59b3014 	ldr	r3, [fp, #20]
        297d28:	eb625e9c 	bl	1b2f7a0 <$LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)>
        297d2c:	e28dd004 	add	sp, sp, #4	; 0x4
        297d30:	e1580005 	cmp	r8, r5
        297d34:	d1550000 	cmple	r5, r0
        297d38:	ca000003 	bgt	297d4c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xf48>
        297d3c:	e1a01006 	mov	r1, r6
        297d40:	e59b0008 	ldr	r0, [fp, #8]
        297d44:	eb625e9b 	bl	1b2f7b8 <$LO_SetWorkClass(void *, unsigned int)>
        297d48:	ea0001f4 	b	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        297d4c:	e28b1014 	add	r1, fp, #20	; 0x14
        297d50:	e59b0008 	ldr	r0, [fp, #8]
        297d54:	eb625e96 	bl	1b2f7b4 <$LO_PickNext(void *, tag_LOWOBJ **)>
        297d58:	e3300000 	teq	r0, #0	; 0x0
        297d5c:	1affffde 	bne	297cdc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xed8>
        297d60:	e1a01006 	mov	r1, r6
        297d64:	e59b0008 	ldr	r0, [fp, #8]
        297d68:	eb625e92 	bl	1b2f7b8 <$LO_SetWorkClass(void *, unsigned int)>
        297d6c:	e59b0024 	ldr	r0, [fp, #36]
        297d70:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        297d74:	e080c100 	add	ip, r0, r0, lsl #2
        297d78:	e08c0280 	add	r0, ip, r0, lsl #5
        297d7c:	e59b901c 	ldr	r9, [fp, #28]
        297d80:	e0898100 	add	r8, r9, r0, lsl #2
        297d84:	e5981008 	ldr	r1, [r8, #8]
        297d88:	e3510002 	cmp	r1, #2	; 0x2
        297d8c:	1a00000c 	bne	297dc4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xfc0>
        297d90:	e5981064 	ldr	r1, [r8, #100]
        297d94:	e3710001 	cmn	r1, #1	; 0x1
        297d98:	05981068 	ldreq	r1, [r8, #104]
        297d9c:	03710001 	cmneq	r1, #1	; 0x1
        297da0:	1a000008 	bne	297dc8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0xfc4>
        297da4:	e7990100 	ldr	r0, [r9, r0, lsl #2]
        297da8:	e3a0301a 	mov	r3, #26	; 0x1a
        297dac:	e3a02015 	mov	r2, #21	; 0x15
        297db0:	e2822c05 	add	r2, r2, #1280	; 0x500
        297db4:	e5b81004 	ldr	r1, [r8, #4]!
        297db8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        297dbc:	e1a03000 	mov	r3, r0
        297dc0:	ea000112 	b	298210 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x140c>
        297dc4:	1a000118 	bne	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297dc8:	e5980064 	ldr	r0, [r8, #100]
        297dcc:	e3700001 	cmn	r0, #1	; 0x1
        297dd0:	0a000115 	beq	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297dd4:	e598101c 	ldr	r1, [r8, #28]
        297dd8:	e0806100 	add	r6, r0, r0, lsl #2
        297ddc:	e0866280 	add	r6, r6, r0, lsl #5
        297de0:	e0897106 	add	r7, r9, r6, lsl #2
        297de4:	e58d7010 	str	r7, [sp, #16]
        297de8:	e52d1004 	str	r1, [sp, -#4]!
        297dec:	e3a00009 	mov	r0, #9	; 0x9
        297df0:	e5971038 	ldr	r1, [r7, #56]
        297df4:	eb646ad1 	bl	1bb2940 <$__rt_sdiv>
        297df8:	e49d1004 	ldr	r1, [sp], #4
        297dfc:	e0810000 	add	r0, r1, r0
        297e00:	e59d1010 	ldr	r1, [sp, #16]
        297e04:	e591101c 	ldr	r1, [r1, #28]
        297e08:	e1500001 	cmp	r0, r1
        297e0c:	ba000106 	blt	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297e10:	e5970064 	ldr	r0, [r7, #100]
        297e14:	e3700001 	cmn	r0, #1	; 0x1
        297e18:	1a000103 	bne	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297e1c:	e5970078 	ldr	r0, [r7, #120]
        297e20:	e240cf4b 	sub	ip, r0, #300	; 0x12c
        297e24:	e33c0001 	teq	ip, #1	; 0x1
        297e28:	0a00001e 	beq	297ea8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x10a4>
        297e2c:	e240ce19 	sub	ip, r0, #400	; 0x190
        297e30:	e33c0001 	teq	ip, #1	; 0x1
        297e34:	1a00000c 	bne	297e6c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1068>
        297e38:	e5970084 	ldr	r0, [r7, #132]
        297e3c:	e0601180 	rsb	r1, r0, r0, lsl #3
        297e40:	e59b0020 	ldr	r0, [fp, #32]
        297e44:	e0800101 	add	r0, r0, r1, lsl #2
        297e48:	e5901018 	ldr	r1, [r0, #24]
        297e4c:	e52d1004 	str	r1, [sp, -#4]!
        297e50:	e5b01014 	ldr	r1, [r0, #20]!
        297e54:	e3a00009 	mov	r0, #9	; 0x9
        297e58:	eb646ab8 	bl	1bb2940 <$__rt_sdiv>
        297e5c:	e49d1004 	ldr	r1, [sp], #4
        297e60:	e1510000 	cmp	r1, r0
        297e64:	aa0000f0 	bge	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297e68:	ea00000e 	b	297ea8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x10a4>
        297e6c:	e240ce19 	sub	ip, r0, #400	; 0x190
        297e70:	e33c0002 	teq	ip, #2	; 0x2
        297e74:	1a0000ec 	bne	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297e78:	e5970084 	ldr	r0, [r7, #132]
        297e7c:	e0600180 	rsb	r0, r0, r0, lsl #3
        297e80:	e59b1020 	ldr	r1, [fp, #32]
        297e84:	e0810100 	add	r0, r1, r0, lsl #2
        297e88:	e5901018 	ldr	r1, [r0, #24]
        297e8c:	e52d1004 	str	r1, [sp, -#4]!
        297e90:	e5b01014 	ldr	r1, [r0, #20]!
        297e94:	e3a00009 	mov	r0, #9	; 0x9
        297e98:	eb646aa8 	bl	1bb2940 <$__rt_sdiv>
        297e9c:	e49d1004 	ldr	r1, [sp], #4
        297ea0:	e1510000 	cmp	r1, r0
        297ea4:	aa0000e0 	bge	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297ea8:	e5980068 	ldr	r0, [r8, #104]
        297eac:	e3700001 	cmn	r0, #1	; 0x1
        297eb0:	1a0000dd 	bne	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297eb4:	e7999106 	ldr	r9, [r9, r6, lsl #2]
        297eb8:	e5988004 	ldr	r8, [r8, #4]
        297ebc:	e2877038 	add	r7, r7, #56	; 0x38
        297ec0:	e9b7000c 	ldmib	r7!, {r2, r3}
        297ec4:	e2871008 	add	r1, r7, #8	; 0x8
        297ec8:	e8910003 	ldmia	r1, {r0, r1}
        297ecc:	eb625a15 	bl	1b2e728 <$GetDirection__FiN31>
        297ed0:	e1a07000 	mov	r7, r0
        297ed4:	e59b0024 	ldr	r0, [fp, #36]
        297ed8:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        297edc:	e080c100 	add	ip, r0, r0, lsl #2
        297ee0:	e08c0280 	add	r0, ip, r0, lsl #5
        297ee4:	e59b101c 	ldr	r1, [fp, #28]
        297ee8:	e0813100 	add	r3, r1, r0, lsl #2
        297eec:	e283103c 	add	r1, r3, #60	; 0x3c
        297ef0:	e8910003 	ldmia	r1, {r0, r1}
        297ef4:	e2833048 	add	r3, r3, #72	; 0x48
        297ef8:	e893000c 	ldmia	r3, {r2, r3}
        297efc:	eb625a09 	bl	1b2e728 <$GetDirection__FiN31>
        297f00:	e1a01000 	mov	r1, r0
        297f04:	e1a00007 	mov	r0, r7
        297f08:	eb625a01 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        297f0c:	e3500000 	cmp	r0, #0	; 0x0
        297f10:	ba000017 	blt	297f74 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1170>
        297f14:	e3500002 	cmp	r0, #2	; 0x2
        297f18:	ca000015 	bgt	297f74 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1170>
        297f1c:	e59be01c 	ldr	lr, [fp, #28]
        297f20:	e08e1106 	add	r1, lr, r6, lsl #2
        297f24:	e5911078 	ldr	r1, [r1, #120]
        297f28:	e241ce19 	sub	ip, r1, #400	; 0x190
        297f2c:	e33c0002 	teq	ip, #2	; 0x2
        297f30:	0a000001 	beq	297f3c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1138>
        297f34:	e3570008 	cmp	r7, #8	; 0x8
        297f38:	9a00000d 	bls	297f74 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1170>
        297f3c:	e1a03005 	mov	r3, r5
        297f40:	e1a0000e 	mov	r0, lr
        297f44:	e28b2024 	add	r2, fp, #36	; 0x24
        297f48:	e8920006 	ldmia	r2, {r1, r2}
        297f4c:	eb000175 	bl	298528 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1724>
        297f50:	e3700001 	cmn	r0, #1	; 0x1
        297f54:	11a08000 	movne	r8, r0
        297f58:	e3a0306f 	mov	r3, #111	; 0x6f
        297f5c:	e3a02015 	mov	r2, #21	; 0x15
        297f60:	e2822c05 	add	r2, r2, #1280	; 0x500
        297f64:	e1a01008 	mov	r1, r8
        297f68:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        297f6c:	e1a03009 	mov	r3, r9
        297f70:	ea0000a6 	b	298210 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x140c>
        297f74:	e3500003 	cmp	r0, #3	; 0x3
        297f78:	aa000004 	bge	297f90 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x118c>
        297f7c:	e3300002 	teq	r0, #2	; 0x2
        297f80:	1a0000a9 	bne	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297f84:	e3570008 	cmp	r7, #8	; 0x8
        297f88:	8a0000a7 	bhi	29822c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1428>
        297f8c:	ea000001 	b	297f98 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1194>
        297f90:	e3500002 	cmp	r0, #2	; 0x2
        297f94:	1a000006 	bne	297fb4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x11b0>
        297f98:	e5ba005c 	ldr	r0, [sl, #92]!
        297f9c:	e5b4105c 	ldr	r1, [r4, #92]!
        297fa0:	e3510000 	cmp	r1, #0	; 0x0
        297fa4:	b281100f 	addlt	r1, r1, #15	; 0xf
        297fa8:	e1500241 	cmp	r0, r1, asr #4
        297fac:	daffffe9 	ble	297f58 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1154>
        297fb0:	ea000000 	b	297fb8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x11b4>
        297fb4:	1a00001f 	bne	298038 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1234>
        297fb8:	e3570008 	cmp	r7, #8	; 0x8
        297fbc:	3a00001d 	bcc	298038 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1234>
        297fc0:	e59b201c 	ldr	r2, [fp, #28]
        297fc4:	e7920106 	ldr	r0, [r2, r6, lsl #2]
        297fc8:	e0601180 	rsb	r1, r0, r0, lsl #3
        297fcc:	e59b0018 	ldr	r0, [fp, #24]
        297fd0:	e7901101 	ldr	r1, [r0, r1, lsl #2]
        297fd4:	e0822106 	add	r2, r2, r6, lsl #2
        297fd8:	e5922004 	ldr	r2, [r2, #4]
        297fdc:	e0622182 	rsb	r2, r2, r2, lsl #3
        297fe0:	e7902102 	ldr	r2, [r0, r2, lsl #2]
        297fe4:	e59b000c 	ldr	r0, [fp, #12]
        297fe8:	eb626a4c 	bl	1b32920 <$v_MostFarFromChord__FP14tag_WORD_TRACEiT2>
        297fec:	e59b101c 	ldr	r1, [fp, #28]
        297ff0:	e081c106 	add	ip, r1, r6, lsl #2
        297ff4:	e59c1040 	ldr	r1, [ip, #64]
        297ff8:	e59c204c 	ldr	r2, [ip, #76]
        297ffc:	e0413002 	sub	r3, r1, r2
        298000:	e59c2048 	ldr	r2, [ip, #72]
        298004:	e59cc03c 	ldr	ip, [ip, #60]
        298008:	e042200c 	sub	r2, r2, ip
        29800c:	e59be00c 	ldr	lr, [fp, #12]
        298010:	e79e4180 	ldr	r4, [lr, r0, lsl #3]
        298014:	e1a04844 	mov	r4, r4, asr #16
        298018:	e044c00c 	sub	ip, r4, ip
        29801c:	e08e0180 	add	r0, lr, r0, lsl #3
        298020:	e5900002 	ldr	r0, [r0, #2]
        298024:	e0610840 	rsb	r0, r1, r0, asr #16
        298028:	e0010c93 	mul	r1, r3, ip
        29802c:	e0201092 	mla	r0, r2, r0, r1
        298030:	e3500000 	cmp	r0, #0	; 0x0
        298034:	caffffc7 	bgt	297f58 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1154>
        298038:	e59b001c 	ldr	r0, [fp, #28]
        29803c:	e7908106 	ldr	r8, [r0, r6, lsl #2]
        298040:	e59b1024 	ldr	r1, [fp, #36]
        298044:	e7911105 	ldr	r1, [r1, r5, lsl #2]
        298048:	e081c101 	add	ip, r1, r1, lsl #2
        29804c:	e08c1281 	add	r1, ip, r1, lsl #5
        298050:	e0801101 	add	r1, r0, r1, lsl #2
        298054:	e0800106 	add	r0, r0, r6, lsl #2
        298058:	e5917004 	ldr	r7, [r1, #4]
        29805c:	e5900040 	ldr	r0, [r0, #64]
        298060:	e591104c 	ldr	r1, [r1, #76]
        298064:	e0400001 	sub	r0, r0, r1
        298068:	eb5f5dd5 	bl	1a6f7c4 <$HWRAbs(int)>
        29806c:	e1a0a000 	mov	sl, r0
        298070:	e59b9024 	ldr	r9, [fp, #36]
        298074:	e7990105 	ldr	r0, [r9, r5, lsl #2]
        298078:	e080c100 	add	ip, r0, r0, lsl #2
        29807c:	e08c0280 	add	r0, ip, r0, lsl #5
        298080:	e59b401c 	ldr	r4, [fp, #28]
        298084:	e0840100 	add	r0, r4, r0, lsl #2
        298088:	e58d000c 	str	r0, [sp, #12]
        29808c:	e5901020 	ldr	r1, [r0, #32]
        298090:	e5900018 	ldr	r0, [r0, #24]
        298094:	e0411000 	sub	r1, r1, r0
        298098:	e3a00003 	mov	r0, #3	; 0x3
        29809c:	e58d1008 	str	r1, [sp, #8]
        2980a0:	eb646a26 	bl	1bb2940 <$__rt_sdiv>
        2980a4:	e15a0000 	cmp	sl, r0
        2980a8:	ba00011c 	blt	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        2980ac:	e2851001 	add	r1, r5, #1	; 0x1
        2980b0:	e59b0028 	ldr	r0, [fp, #40]
        2980b4:	e1510000 	cmp	r1, r0
        2980b8:	aa000014 	bge	298110 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x130c>
        2980bc:	e0890105 	add	r0, r9, r5, lsl #2
        2980c0:	e5900004 	ldr	r0, [r0, #4]
        2980c4:	e080c100 	add	ip, r0, r0, lsl #2
        2980c8:	e08c0280 	add	r0, ip, r0, lsl #5
        2980cc:	e0840100 	add	r0, r4, r0, lsl #2
        2980d0:	e5901014 	ldr	r1, [r0, #20]
        2980d4:	e590301c 	ldr	r3, [r0, #28]
        2980d8:	e043c001 	sub	ip, r3, r1
        2980dc:	e5902018 	ldr	r2, [r0, #24]
        2980e0:	e5903020 	ldr	r3, [r0, #32]
        2980e4:	e0432002 	sub	r2, r3, r2
        2980e8:	e15c0002 	cmp	ip, r2
        2980ec:	da000007 	ble	298110 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x130c>
        2980f0:	e5902078 	ldr	r2, [r0, #120]
        2980f4:	e242cf4b 	sub	ip, r2, #300	; 0x12c
        2980f8:	e33c0001 	teq	ip, #1	; 0x1
        2980fc:	1a000003 	bne	298110 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x130c>
        298100:	e59d200c 	ldr	r2, [sp, #12]
        298104:	e592201c 	ldr	r2, [r2, #28]
        298108:	e1510002 	cmp	r1, r2
        29810c:	b5b07004 	ldrlt	r7, [r0, #4]!
        298110:	e2551002 	subs	r1, r5, #2	; 0x2
        298114:	e59d0008 	ldr	r0, [sp, #8]
        298118:	4a000028 	bmi	2981c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x13bc>
        29811c:	e0892105 	add	r2, r9, r5, lsl #2
        298120:	e5121008 	ldr	r1, [r2, -#8]
        298124:	e0819101 	add	r9, r1, r1, lsl #2
        298128:	e0899281 	add	r9, r9, r1, lsl #5
        29812c:	e0845109 	add	r5, r4, r9, lsl #2
        298130:	e5951074 	ldr	r1, [r5, #116]
        298134:	e3310f4b 	teq	r1, #300	; 0x12c
        298138:	05951064 	ldreq	r1, [r5, #100]
        29813c:	03710001 	cmneq	r1, #1	; 0x1
        298140:	1a00001e 	bne	2981c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x13bc>
        298144:	e0800fa0 	add	r0, r0, r0, lsr #31
        298148:	e5951038 	ldr	r1, [r5, #56]
        29814c:	e15100c0 	cmp	r1, r0, asr #1
        298150:	aa00001a 	bge	2981c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x13bc>
        298154:	e5320004 	ldr	r0, [r2, -#4]!
        298158:	e080c100 	add	ip, r0, r0, lsl #2
        29815c:	e08c0280 	add	r0, ip, r0, lsl #5
        298160:	e0840100 	add	r0, r4, r0, lsl #2
        298164:	e5b02020 	ldr	r2, [r0, #32]!
        298168:	e5950018 	ldr	r0, [r5, #24]
        29816c:	e042a000 	sub	sl, r2, r0
        298170:	e1a01081 	mov	r1, r1, lsl #1
        298174:	e3a00003 	mov	r0, #3	; 0x3
        298178:	eb6469f0 	bl	1bb2940 <$__rt_sdiv>
        29817c:	e15a0000 	cmp	sl, r0
        298180:	aa00000e 	bge	2981c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x13bc>
        298184:	e595005c 	ldr	r0, [r5, #92]
        298188:	e1a01100 	mov	r1, r0, lsl #2
        29818c:	e3a00009 	mov	r0, #9	; 0x9
        298190:	eb6469ea 	bl	1bb2940 <$__rt_sdiv>
        298194:	e0842106 	add	r2, r4, r6, lsl #2
        298198:	e595103c 	ldr	r1, [r5, #60]
        29819c:	e592303c 	ldr	r3, [r2, #60]
        2981a0:	e0411003 	sub	r1, r1, r3
        2981a4:	e0030191 	mul	r3, r1, r1
        2981a8:	e5b51040 	ldr	r1, [r5, #64]!
        2981ac:	e5922040 	ldr	r2, [r2, #64]
        2981b0:	e0412002 	sub	r2, r1, r2
        2981b4:	e0213292 	mla	r1, r2, r2, r3
        2981b8:	e1510000 	cmp	r1, r0
        2981bc:	b7948109 	ldrlt	r8, [r4, r9, lsl #2]
        2981c0:	e0670187 	rsb	r0, r7, r7, lsl #3
        2981c4:	e59b2018 	ldr	r2, [fp, #24]
        2981c8:	e0821100 	add	r1, r2, r0, lsl #2
        2981cc:	e2811010 	add	r1, r1, #16	; 0x10
        2981d0:	e8910003 	ldmia	r1, {r0, r1}
        2981d4:	e0683188 	rsb	r3, r8, r8, lsl #3
        2981d8:	e0823103 	add	r3, r2, r3, lsl #2
        2981dc:	e2833010 	add	r3, r3, #16	; 0x10
        2981e0:	e893000c 	ldmia	r3, {r2, r3}
        2981e4:	eb62594f 	bl	1b2e728 <$GetDirection__FiN31>
        2981e8:	e3500004 	cmp	r0, #4	; 0x4
        2981ec:	9a000001 	bls	2981f8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x13f4>
        2981f0:	e3500016 	cmp	r0, #22	; 0x16
        2981f4:	3a0000c9 	bcc	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        2981f8:	e3a0301c 	mov	r3, #28	; 0x1c
        2981fc:	e3a0201b 	mov	r2, #27	; 0x1b
        298200:	e2822c05 	add	r2, r2, #1280	; 0x500
        298204:	e1a01007 	mov	r1, r7
        298208:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        29820c:	e1a03008 	mov	r3, r8
        298210:	e3a02f45 	mov	r2, #276	; 0x114
        298214:	e2822b01 	add	r2, r2, #1024	; 0x400
        298218:	e59b0008 	ldr	r0, [fp, #8]
        29821c:	e59b1018 	ldr	r1, [fp, #24]
        298220:	eb625d5a 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        298224:	e28dd00c 	add	sp, sp, #12	; 0xc
        298228:	ea0000bc 	b	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        29822c:	e59b0024 	ldr	r0, [fp, #36]
        298230:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        298234:	e080c100 	add	ip, r0, r0, lsl #2
        298238:	e08c0280 	add	r0, ip, r0, lsl #5
        29823c:	e59b301c 	ldr	r3, [fp, #28]
        298240:	e083e100 	add	lr, r3, r0, lsl #2
        298244:	e59e0064 	ldr	r0, [lr, #100]
        298248:	e3700001 	cmn	r0, #1	; 0x1
        29824c:	159e7068 	ldrne	r7, [lr, #104]
        298250:	13770001 	cmnne	r7, #1	; 0x1
        298254:	0a0000b1 	beq	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        298258:	e0871107 	add	r1, r7, r7, lsl #2
        29825c:	e0811287 	add	r1, r1, r7, lsl #5
        298260:	e0831101 	add	r1, r3, r1, lsl #2
        298264:	e591203c 	ldr	r2, [r1, #60]
        298268:	e5911048 	ldr	r1, [r1, #72]
        29826c:	e1520001 	cmp	r2, r1
        298270:	aa0000aa 	bge	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        298274:	e0806100 	add	r6, r0, r0, lsl #2
        298278:	e0866280 	add	r6, r6, r0, lsl #5
        29827c:	e0830106 	add	r0, r3, r6, lsl #2
        298280:	e5901048 	ldr	r1, [r0, #72]
        298284:	e590203c 	ldr	r2, [r0, #60]
        298288:	e1520001 	cmp	r2, r1
        29828c:	aa0000a3 	bge	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        298290:	e5bec038 	ldr	ip, [lr, #56]!
        298294:	e08ce08c 	add	lr, ip, ip, lsl #1
        298298:	e590c038 	ldr	ip, [r0, #56]
        29829c:	e15e010c 	cmp	lr, ip, lsl #2
        2982a0:	da00009e 	ble	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        2982a4:	e590e078 	ldr	lr, [r0, #120]
        2982a8:	e24ecf4b 	sub	ip, lr, #300	; 0x12c
        2982ac:	e33c0001 	teq	ip, #1	; 0x1
        2982b0:	124ece19 	subne	ip, lr, #400	; 0x190
        2982b4:	133c0001 	teqne	ip, #1	; 0x1
        2982b8:	1a000098 	bne	298520 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x171c>
        2982bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2982c0:	e793a106 	ldr	sl, [r3, r6, lsl #2]
        2982c4:	e1a0c001 	mov	ip, r1
        2982c8:	e5b03040 	ldr	r3, [r0, #64]!
        2982cc:	e590100c 	ldr	r1, [r0, #12]
        2982d0:	e1a0000c 	mov	r0, ip
        2982d4:	eb625913 	bl	1b2e728 <$GetDirection__FiN31>
        2982d8:	e1a08000 	mov	r8, r0
        2982dc:	e59b0024 	ldr	r0, [fp, #36]
        2982e0:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        2982e4:	e080c100 	add	ip, r0, r0, lsl #2
        2982e8:	e08c0280 	add	r0, ip, r0, lsl #5
        2982ec:	e59b101c 	ldr	r1, [fp, #28]
        2982f0:	e0813100 	add	r3, r1, r0, lsl #2
        2982f4:	e283103c 	add	r1, r3, #60	; 0x3c
        2982f8:	e8910003 	ldmia	r1, {r0, r1}
        2982fc:	e2833048 	add	r3, r3, #72	; 0x48
        298300:	e893000c 	ldmia	r3, {r2, r3}
        298304:	eb625907 	bl	1b2e728 <$GetDirection__FiN31>
        298308:	e1a01000 	mov	r1, r0
        29830c:	e1a00008 	mov	r0, r8
        298310:	eb6258ff 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        298314:	e3500000 	cmp	r0, #0	; 0x0
        298318:	da00007f 	ble	29851c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1718>
        29831c:	e59b901c 	ldr	r9, [fp, #28]
        298320:	e0898106 	add	r8, r9, r6, lsl #2
        298324:	e5980064 	ldr	r0, [r8, #100]
        298328:	e3700001 	cmn	r0, #1	; 0x1
        29832c:	0a000031 	beq	2983f8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x15f4>
        298330:	e080c100 	add	ip, r0, r0, lsl #2
        298334:	e08c0280 	add	r0, ip, r0, lsl #5
        298338:	e0890100 	add	r0, r9, r0, lsl #2
        29833c:	e5900064 	ldr	r0, [r0, #100]
        298340:	e3700001 	cmn	r0, #1	; 0x1
        298344:	1a000074 	bne	29851c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1718>
        298348:	e598001c 	ldr	r0, [r8, #28]
        29834c:	e5982014 	ldr	r2, [r8, #20]
        298350:	e040a002 	sub	sl, r0, r2
        298354:	e5980020 	ldr	r0, [r8, #32]
        298358:	e5981018 	ldr	r1, [r8, #24]
        29835c:	e0401001 	sub	r1, r0, r1
        298360:	e3a00003 	mov	r0, #3	; 0x3
        298364:	e52d2004 	str	r2, [sp, -#4]!
        298368:	eb646974 	bl	1bb2940 <$__rt_sdiv>
        29836c:	e49d2004 	ldr	r2, [sp], #4
        298370:	e0421000 	sub	r1, r2, r0
        298374:	e40d1004 	str	r1, [sp], -#4
        298378:	e598101c 	ldr	r1, [r8, #28]
        29837c:	e0810000 	add	r0, r1, r0
        298380:	e58d0008 	str	r0, [sp, #8]
        298384:	e5982018 	ldr	r2, [r8, #24]
        298388:	e1a0100a 	mov	r1, sl
        29838c:	e3a00003 	mov	r0, #3	; 0x3
        298390:	e58d2000 	str	r2, [sp]
        298394:	eb646969 	bl	1bb2940 <$__rt_sdiv>
        298398:	e41d200c 	ldr	r2, [sp], -#12
        29839c:	e0421000 	sub	r1, r2, r0
        2983a0:	e5982020 	ldr	r2, [r8, #32]
        2983a4:	e0820000 	add	r0, r2, r0
        2983a8:	e5b82064 	ldr	r2, [r8, #100]!
        2983ac:	e082c102 	add	ip, r2, r2, lsl #2
        2983b0:	e08c2282 	add	r2, ip, r2, lsl #5
        2983b4:	e7998102 	ldr	r8, [r9, r2, lsl #2]
        2983b8:	e0892102 	add	r2, r9, r2, lsl #2
        2983bc:	e5922004 	ldr	r2, [r2, #4]
        2983c0:	e58d000c 	str	r0, [sp, #12]
        2983c4:	e59d0014 	ldr	r0, [sp, #20]
        2983c8:	e58d0008 	str	r0, [sp, #8]
        2983cc:	e58d1004 	str	r1, [sp, #4]
        2983d0:	e59d1010 	ldr	r1, [sp, #16]
        2983d4:	e58d1000 	str	r1, [sp]
        2983d8:	e1a01008 	mov	r1, r8
        2983dc:	e59b0018 	ldr	r0, [fp, #24]
        2983e0:	e49d3004 	ldr	r3, [sp], #4
        2983e4:	eb000087 	bl	298608 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1804>
        2983e8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2983ec:	e3300000 	teq	r0, #0	; 0x0
        2983f0:	0a000049 	beq	29851c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1718>
        2983f4:	e1a0a008 	mov	sl, r8
        2983f8:	e59b0024 	ldr	r0, [fp, #36]
        2983fc:	e7901105 	ldr	r1, [r0, r5, lsl #2]
        298400:	e0812101 	add	r2, r1, r1, lsl #2
        298404:	e0822281 	add	r2, r2, r1, lsl #5
        298408:	e59b101c 	ldr	r1, [fp, #28]
        29840c:	e0812102 	add	r2, r1, r2, lsl #2
        298410:	e592201c 	ldr	r2, [r2, #28]
        298414:	e0813106 	add	r3, r1, r6, lsl #2
        298418:	e593c01c 	ldr	ip, [r3, #28]
        29841c:	e152000c 	cmp	r2, ip
        298420:	d1a0e00c 	movle	lr, ip
        298424:	c1a0e002 	movgt	lr, r2
        298428:	e7902105 	ldr	r2, [r0, r5, lsl #2]
        29842c:	e082c102 	add	ip, r2, r2, lsl #2
        298430:	e08c2282 	add	r2, ip, r2, lsl #5
        298434:	e0812102 	add	r2, r1, r2, lsl #2
        298438:	e5b2c014 	ldr	ip, [r2, #20]!
        29843c:	e5932014 	ldr	r2, [r3, #20]
        298440:	e15c0002 	cmp	ip, r2
        298444:	a1a06002 	movge	r6, r2
        298448:	b1a0600c 	movlt	r6, ip
        29844c:	e7902105 	ldr	r2, [r0, r5, lsl #2]
        298450:	e082c102 	add	ip, r2, r2, lsl #2
        298454:	e08c2282 	add	r2, ip, r2, lsl #5
        298458:	e0812102 	add	r2, r1, r2, lsl #2
        29845c:	e5922018 	ldr	r2, [r2, #24]
        298460:	e593c018 	ldr	ip, [r3, #24]
        298464:	e152000c 	cmp	r2, ip
        298468:	a1a0200c 	movge	r2, ip
        29846c:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        298470:	e080c100 	add	ip, r0, r0, lsl #2
        298474:	e08c0280 	add	r0, ip, r0, lsl #5
        298478:	e0810100 	add	r0, r1, r0, lsl #2
        29847c:	e5900020 	ldr	r0, [r0, #32]
        298480:	e5933020 	ldr	r3, [r3, #32]
        298484:	e1500003 	cmp	r0, r3
        298488:	d1a00003 	movle	r0, r3
        29848c:	e1a03007 	mov	r3, r7
        298490:	e92d0008 	stmdb	sp!, {r3}
        298494:	e24dd010 	sub	sp, sp, #16	; 0x10
        298498:	e58d000c 	str	r0, [sp, #12]
        29849c:	e98d4004 	stmib	sp, {r2, lr}
        2984a0:	e58d6000 	str	r6, [sp]
        2984a4:	e1a02006 	mov	r2, r6
        2984a8:	e59b0018 	ldr	r0, [fp, #24]
        2984ac:	e5bd3004 	ldr	r3, [sp, #4]!
        2984b0:	e28dd004 	add	sp, sp, #4	; 0x4
        2984b4:	eb000070 	bl	29867c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1878>
        2984b8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2984bc:	e1a01000 	mov	r1, r0
        2984c0:	e3700001 	cmn	r0, #1	; 0x1
        2984c4:	0a000014 	beq	29851c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1718>
        2984c8:	e0613181 	rsb	r3, r1, r1, lsl #3
        2984cc:	e59b0018 	ldr	r0, [fp, #24]
        2984d0:	e0803103 	add	r3, r0, r3, lsl #2
        2984d4:	e5b3c010 	ldr	ip, [r3, #16]!
        2984d8:	e06a318a 	rsb	r3, sl, sl, lsl #3
        2984dc:	e0802103 	add	r2, r0, r3, lsl #2
        2984e0:	e5922010 	ldr	r2, [r2, #16]
        2984e4:	e04c2002 	sub	r2, ip, r2
        2984e8:	e5b43038 	ldr	r3, [r4, #56]!
        2984ec:	e1520083 	cmp	r2, r3, lsl #1
        2984f0:	ca000009 	bgt	29851c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1718>
        2984f4:	e3a0301d 	mov	r3, #29	; 0x1d
        2984f8:	e3a02016 	mov	r2, #22	; 0x16
        2984fc:	e2822c05 	add	r2, r2, #1280	; 0x500
        298500:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        298504:	e1a0300a 	mov	r3, sl
        298508:	e1a01000 	mov	r1, r0
        29850c:	e2422002 	sub	r2, r2, #2	; 0x2
        298510:	e59b0008 	ldr	r0, [fp, #8]
        298514:	eb625c9d 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        298518:	e28dd00c 	add	sp, sp, #12	; 0xc
        29851c:	e28dd008 	add	sp, sp, #8	; 0x8
        298520:	e3e00000 	mvn	r0, #0	; 0x0
        298524:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        298528:	e1a0c00d 	mov	ip, sp
        29852c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        298530:	e24cb004 	sub	fp, ip, #4	; 0x4
        298534:	e3e05000 	mvn	r5, #0	; 0x0
        298538:	e283c001 	add	ip, r3, #1	; 0x1
        29853c:	e15c0002 	cmp	ip, r2
        298540:	a3e00000 	mvnge	r0, #0	; 0x0
        298544:	a91ba8f0 	ldmgedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        298548:	e791210c 	ldr	r2, [r1, ip, lsl #2]
        29854c:	e082c102 	add	ip, r2, r2, lsl #2
        298550:	e08c2282 	add	r2, ip, r2, lsl #5
        298554:	e0804102 	add	r4, r0, r2, lsl #2
        298558:	e5942068 	ldr	r2, [r4, #104]
        29855c:	e3720001 	cmn	r2, #1	; 0x1
        298560:	1a000026 	bne	298600 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x17fc>
        298564:	e594203c 	ldr	r2, [r4, #60]
        298568:	e7911103 	ldr	r1, [r1, r3, lsl #2]
        29856c:	e081c101 	add	ip, r1, r1, lsl #2
        298570:	e08c1281 	add	r1, ip, r1, lsl #5
        298574:	e0800101 	add	r0, r0, r1, lsl #2
        298578:	e590e048 	ldr	lr, [r0, #72]
        29857c:	e152000e 	cmp	r2, lr
        298580:	aa00001e 	bge	298600 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x17fc>
        298584:	e5943014 	ldr	r3, [r4, #20]
        298588:	e594c01c 	ldr	ip, [r4, #28]
        29858c:	e04c6003 	sub	r6, ip, r3
        298590:	e5941018 	ldr	r1, [r4, #24]
        298594:	e5942020 	ldr	r2, [r4, #32]
        298598:	e0427001 	sub	r7, r2, r1
        29859c:	e0877107 	add	r7, r7, r7, lsl #2
        2985a0:	e0877fa7 	add	r7, r7, r7, lsr #31
        2985a4:	e15600c7 	cmp	r6, r7, asr #1
        2985a8:	da000014 	ble	298600 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x17fc>
        2985ac:	e08c3003 	add	r3, ip, r3
        2985b0:	e0833fa3 	add	r3, r3, r3, lsr #31
        2985b4:	e0821001 	add	r1, r2, r1
        2985b8:	e0811fa1 	add	r1, r1, r1, lsr #31
        2985bc:	e06e30c3 	rsb	r3, lr, r3, asr #1
        2985c0:	e00c0393 	mul	ip, r3, r3
        2985c4:	e590204c 	ldr	r2, [r0, #76]
        2985c8:	e06210c1 	rsb	r1, r2, r1, asr #1
        2985cc:	e026c191 	mla	r6, r1, r1, ip
        2985d0:	e5901020 	ldr	r1, [r0, #32]
        2985d4:	e5902018 	ldr	r2, [r0, #24]
        2985d8:	e0411002 	sub	r1, r1, r2
        2985dc:	e0020191 	mul	r2, r1, r1
        2985e0:	e590101c 	ldr	r1, [r0, #28]
        2985e4:	e5900014 	ldr	r0, [r0, #20]
        2985e8:	e0410000 	sub	r0, r1, r0
        2985ec:	e0212090 	mla	r1, r0, r0, r2
        2985f0:	e3a00009 	mov	r0, #9	; 0x9
        2985f4:	eb6468d1 	bl	1bb2940 <$__rt_sdiv>
        2985f8:	e1560000 	cmp	r6, r0
        2985fc:	b5b45004 	ldrlt	r5, [r4, #4]!
        298600:	e1a00005 	mov	r0, r5
        298604:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        298608:	e1a0c00d 	mov	ip, sp
        29860c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        298610:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        298614:	e24cb014 	sub	fp, ip, #20	; 0x14
        298618:	e3a03001 	mov	r3, #1	; 0x1
        29861c:	e1510002 	cmp	r1, r2
        298620:	ca000013 	bgt	298674 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1870>
        298624:	e061c181 	rsb	ip, r1, r1, lsl #3
        298628:	e080e10c 	add	lr, r0, ip, lsl #2
        29862c:	e59ec010 	ldr	ip, [lr, #16]
        298630:	e59b4018 	ldr	r4, [fp, #24]
        298634:	e15c0004 	cmp	ip, r4
        298638:	ca000008 	bgt	298660 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x185c>
        29863c:	e59b4010 	ldr	r4, [fp, #16]
        298640:	e15c0004 	cmp	ip, r4
        298644:	a5bec014 	ldrge	ip, [lr, #20]!
        298648:	a59be014 	ldrge	lr, [fp, #20]
        29864c:	a15c000e 	cmpge	ip, lr
        298650:	ba000002 	blt	298660 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x185c>
        298654:	e59be01c 	ldr	lr, [fp, #28]
        298658:	e15c000e 	cmp	ip, lr
        29865c:	da000001 	ble	298668 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1864>
        298660:	e3a03000 	mov	r3, #0	; 0x0
        298664:	ea000002 	b	298674 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1870>
        298668:	e2811001 	add	r1, r1, #1	; 0x1
        29866c:	e1510002 	cmp	r1, r2
        298670:	daffffeb 	ble	298624 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1820>
        298674:	e1a00003 	mov	r0, r3
        298678:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        29867c:	e1a0c00d 	mov	ip, sp
        298680:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        298684:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        298688:	e24cb014 	sub	fp, ip, #20	; 0x14
        29868c:	e1a04000 	mov	r4, r0
        298690:	e59b901c 	ldr	r9, [fp, #28]
        298694:	e24dd004 	sub	sp, sp, #4	; 0x4
        298698:	e0890109 	add	r0, r9, r9, lsl #2
        29869c:	e0800289 	add	r0, r0, r9, lsl #5
        2986a0:	e0815100 	add	r5, r1, r0, lsl #2
        2986a4:	e5956004 	ldr	r6, [r5, #4]
        2986a8:	e1a07006 	mov	r7, r6
        2986ac:	e1a08006 	mov	r8, r6
        2986b0:	e595204c 	ldr	r2, [r5, #76]
        2986b4:	e1a0e002 	mov	lr, r2
        2986b8:	e3a00000 	mov	r0, #0	; 0x0
        2986bc:	e289a001 	add	sl, r9, #1	; 0x1
        2986c0:	e08ac10a 	add	ip, sl, sl, lsl #2
        2986c4:	e08ca28a 	add	sl, ip, sl, lsl #5
        2986c8:	e081c10a 	add	ip, r1, sl, lsl #2
        2986cc:	e5953048 	ldr	r3, [r5, #72]
        2986d0:	e58dc000 	str	ip, [sp]
        2986d4:	e089a000 	add	sl, r9, r0
        2986d8:	e08ac10a 	add	ip, sl, sl, lsl #2
        2986dc:	e08ca28a 	add	sl, ip, sl, lsl #5
        2986e0:	e081c10a 	add	ip, r1, sl, lsl #2
        2986e4:	e5bca068 	ldr	sl, [ip, #104]!
        2986e8:	e37a0001 	cmn	sl, #1	; 0x1
        2986ec:	0a000020 	beq	298774 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1970>
        2986f0:	e3300001 	teq	r0, #1	; 0x1
        2986f4:	1a000007 	bne	298718 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1914>
        2986f8:	e59dc000 	ldr	ip, [sp]
        2986fc:	e5bc6068 	ldr	r6, [ip, #104]!
        298700:	e086c106 	add	ip, r6, r6, lsl #2
        298704:	e08c6286 	add	r6, ip, r6, lsl #5
        298708:	e081c106 	add	ip, r1, r6, lsl #2
        29870c:	e59cc068 	ldr	ip, [ip, #104]
        298710:	e37c0001 	cmn	ip, #1	; 0x1
        298714:	1a000006 	bne	298734 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1930>
        298718:	e08a610a 	add	r6, sl, sl, lsl #2
        29871c:	e086628a 	add	r6, r6, sl, lsl #5
        298720:	e081c106 	add	ip, r1, r6, lsl #2
        298724:	e59c6048 	ldr	r6, [ip, #72]
        298728:	e59ca03c 	ldr	sl, [ip, #60]
        29872c:	e156000a 	cmp	r6, sl
        298730:	aa000001 	bge	29873c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1938>
        298734:	e3e00000 	mvn	r0, #0	; 0x0
        298738:	ea000034 	b	298810 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1a0c>
        29873c:	e1530006 	cmp	r3, r6
        298740:	b1a03006 	movlt	r3, r6
        298744:	e59c604c 	ldr	r6, [ip, #76]
        298748:	e15e0006 	cmp	lr, r6
        29874c:	c1a0e006 	movgt	lr, r6
        298750:	c59c8004 	ldrgt	r8, [ip, #4]
        298754:	e59c604c 	ldr	r6, [ip, #76]
        298758:	e1520006 	cmp	r2, r6
        29875c:	b1a02006 	movlt	r2, r6
        298760:	b59c7004 	ldrlt	r7, [ip, #4]
        298764:	e2800001 	add	r0, r0, #1	; 0x1
        298768:	e5bc6004 	ldr	r6, [ip, #4]!
        29876c:	e3500002 	cmp	r0, #2	; 0x2
        298770:	baffffd7 	blt	2986d4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x18d0>
        298774:	e0660186 	rsb	r0, r6, r6, lsl #3
        298778:	e0840100 	add	r0, r4, r0, lsl #2
        29877c:	e5900010 	ldr	r0, [r0, #16]
        298780:	e595a03c 	ldr	sl, [r5, #60]
        298784:	e040900a 	sub	r9, r0, sl
        298788:	e59b000c 	ldr	r0, [fp, #12]
        29878c:	e59b1014 	ldr	r1, [fp, #20]
        298790:	e0410000 	sub	r0, r1, r0
        298794:	e1a01080 	mov	r1, r0, lsl #1
        298798:	e3a00003 	mov	r0, #3	; 0x3
        29879c:	eb646867 	bl	1bb2940 <$__rt_sdiv>
        2987a0:	e1590000 	cmp	r9, r0
        2987a4:	daffffe2 	ble	298734 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1930>
        2987a8:	e1590100 	cmp	r9, r0, lsl #2
        2987ac:	aaffffe0 	bge	298734 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1930>
        2987b0:	e0680188 	rsb	r0, r8, r8, lsl #3
        2987b4:	e0840100 	add	r0, r4, r0, lsl #2
        2987b8:	e5b08014 	ldr	r8, [r0, #20]!
        2987bc:	e59b0010 	ldr	r0, [fp, #16]
        2987c0:	e59b1018 	ldr	r1, [fp, #24]
        2987c4:	e0411000 	sub	r1, r1, r0
        2987c8:	e3a00003 	mov	r0, #3	; 0x3
        2987cc:	eb64685b 	bl	1bb2940 <$__rt_sdiv>
        2987d0:	e59b1010 	ldr	r1, [fp, #16]
        2987d4:	e0800001 	add	r0, r0, r1
        2987d8:	e1580000 	cmp	r8, r0
        2987dc:	daffffd4 	ble	298734 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1930>
        2987e0:	e1a0000a 	mov	r0, sl
        2987e4:	e0672187 	rsb	r2, r7, r7, lsl #3
        2987e8:	e0843102 	add	r3, r4, r2, lsl #2
        2987ec:	e5b51040 	ldr	r1, [r5, #64]!
        2987f0:	e2833010 	add	r3, r3, #16	; 0x10
        2987f4:	e893000c 	ldmia	r3, {r2, r3}
        2987f8:	eb6257ca 	bl	1b2e728 <$GetDirection__FiN31>
        2987fc:	e3500010 	cmp	r0, #16	; 0x10
        298800:	3affffcb 	bcc	298734 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1930>
        298804:	e3500015 	cmp	r0, #21	; 0x15
        298808:	2affffc9 	bcs	298734 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1930>
        29880c:	e1a00006 	mov	r0, r6
        298810:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        298814:	e1a0c00d 	mov	ip, sp
        298818:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        29881c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        298820:	e24cb014 	sub	fp, ip, #20	; 0x14
        298824:	e1a05002 	mov	r5, r2
        298828:	e1a04003 	mov	r4, r3
        29882c:	e59b6018 	ldr	r6, [fp, #24]
        298830:	e28ba020 	add	sl, fp, #32	; 0x20
        298834:	e89a0600 	ldmia	sl, {r9, sl}
        298838:	e24dd008 	sub	sp, sp, #8	; 0x8
        29883c:	e1a0800a 	mov	r8, sl
        298840:	e5901014 	ldr	r1, [r0, #20]
        298844:	e5902000 	ldr	r2, [r0]
        298848:	e3a00003 	mov	r0, #3	; 0x3
        29884c:	e5b27038 	ldr	r7, [r2, #56]!
        298850:	eb64683a 	bl	1bb2940 <$__rt_sdiv>
        298854:	e1570000 	cmp	r7, r0
        298858:	ba0000a7 	blt	298afc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cf8>
        29885c:	e7960109 	ldr	r0, [r6, r9, lsl #2]
        298860:	e080c100 	add	ip, r0, r0, lsl #2
        298864:	e08c0280 	add	r0, ip, r0, lsl #5
        298868:	e7947100 	ldr	r7, [r4, r0, lsl #2]
        29886c:	e796010a 	ldr	r0, [r6, sl, lsl #2]
        298870:	e080c100 	add	ip, r0, r0, lsl #2
        298874:	e08c0280 	add	r0, ip, r0, lsl #5
        298878:	e0840100 	add	r0, r4, r0, lsl #2
        29887c:	e5901004 	ldr	r1, [r0, #4]
        298880:	e58d1000 	str	r1, [sp]
        298884:	e5900088 	ldr	r0, [r0, #136]
        298888:	e0600180 	rsb	r0, r0, r0, lsl #3
        29888c:	e59b1014 	ldr	r1, [fp, #20]
        298890:	e0812100 	add	r2, r1, r0, lsl #2
        298894:	e5920004 	ldr	r0, [r2, #4]
        298898:	e0600180 	rsb	r0, r0, r0, lsl #3
        29889c:	e0851100 	add	r1, r5, r0, lsl #2
        2988a0:	e2811010 	add	r1, r1, #16	; 0x10
        2988a4:	e8910003 	ldmia	r1, {r0, r1}
        2988a8:	e5922008 	ldr	r2, [r2, #8]
        2988ac:	e0622182 	rsb	r2, r2, r2, lsl #3
        2988b0:	e0853102 	add	r3, r5, r2, lsl #2
        2988b4:	e2833010 	add	r3, r3, #16	; 0x10
        2988b8:	e893000c 	ldmia	r3, {r2, r3}
        2988bc:	eb625799 	bl	1b2e728 <$GetDirection__FiN31>
        2988c0:	e58d0004 	str	r0, [sp, #4]
        2988c4:	e350000e 	cmp	r0, #14	; 0xe
        2988c8:	9a00001f 	bls	29894c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1b48>
        2988cc:	e7960109 	ldr	r0, [r6, r9, lsl #2]
        2988d0:	e080c100 	add	ip, r0, r0, lsl #2
        2988d4:	e08c0280 	add	r0, ip, r0, lsl #5
        2988d8:	e0840100 	add	r0, r4, r0, lsl #2
        2988dc:	e5900064 	ldr	r0, [r0, #100]
        2988e0:	e3700001 	cmn	r0, #1	; 0x1
        2988e4:	0a00000d 	beq	298920 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1b1c>
        2988e8:	e0801100 	add	r1, r0, r0, lsl #2
        2988ec:	e0811280 	add	r1, r1, r0, lsl #5
        2988f0:	e0840101 	add	r0, r4, r1, lsl #2
        2988f4:	e5902078 	ldr	r2, [r0, #120]
        2988f8:	e242cf4b 	sub	ip, r2, #300	; 0x12c
        2988fc:	e33c0001 	teq	ip, #1	; 0x1
        298900:	1242ce19 	subne	ip, r2, #400	; 0x190
        298904:	133c0001 	teqne	ip, #1	; 0x1
        298908:	1a00007b 	bne	298afc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cf8>
        29890c:	e590203c 	ldr	r2, [r0, #60]
        298910:	e5900048 	ldr	r0, [r0, #72]
        298914:	e1520000 	cmp	r2, r0
        298918:	ca000077 	bgt	298afc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cf8>
        29891c:	e7947101 	ldr	r7, [r4, r1, lsl #2]
        298920:	e3a03001 	mov	r3, #1	; 0x1
        298924:	e3a02016 	mov	r2, #22	; 0x16
        298928:	e2822c05 	add	r2, r2, #1280	; 0x500
        29892c:	e59d1000 	ldr	r1, [sp]
        298930:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        298934:	e1a03007 	mov	r3, r7
        298938:	e1a01005 	mov	r1, r5
        29893c:	e2422002 	sub	r2, r2, #2	; 0x2
        298940:	e59b0008 	ldr	r0, [fp, #8]
        298944:	eb625b91 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        298948:	e28dd00c 	add	sp, sp, #12	; 0xc
        29894c:	e59d0004 	ldr	r0, [sp, #4]
        298950:	e350000f 	cmp	r0, #15	; 0xf
        298954:	2a000068 	bcs	298afc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cf8>
        298958:	e796010a 	ldr	r0, [r6, sl, lsl #2]
        29895c:	e080c100 	add	ip, r0, r0, lsl #2
        298960:	e08c0280 	add	r0, ip, r0, lsl #5
        298964:	e0840100 	add	r0, r4, r0, lsl #2
        298968:	e5900068 	ldr	r0, [r0, #104]
        29896c:	e3700001 	cmn	r0, #1	; 0x1
        298970:	0a00000f 	beq	2989b4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1bb0>
        298974:	e080c100 	add	ip, r0, r0, lsl #2
        298978:	e08c0280 	add	r0, ip, r0, lsl #5
        29897c:	e0840100 	add	r0, r4, r0, lsl #2
        298980:	e5901078 	ldr	r1, [r0, #120]
        298984:	e241cf4b 	sub	ip, r1, #300	; 0x12c
        298988:	e33c0001 	teq	ip, #1	; 0x1
        29898c:	1241ce19 	subne	ip, r1, #400	; 0x190
        298990:	133c0001 	teqne	ip, #1	; 0x1
        298994:	1a000058 	bne	298afc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cf8>
        298998:	e590103c 	ldr	r1, [r0, #60]
        29899c:	e5902048 	ldr	r2, [r0, #72]
        2989a0:	e1510002 	cmp	r1, r2
        2989a4:	ba000054 	blt	298afc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cf8>
        2989a8:	e5901004 	ldr	r1, [r0, #4]
        2989ac:	e58d1000 	str	r1, [sp]
        2989b0:	e5b08080 	ldr	r8, [r0, #128]!
        2989b4:	e2880001 	add	r0, r8, #1	; 0x1
        2989b8:	e59b101c 	ldr	r1, [fp, #28]
        2989bc:	e1500001 	cmp	r0, r1
        2989c0:	aa000028 	bge	298a68 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1c64>
        2989c4:	e0861108 	add	r1, r6, r8, lsl #2
        2989c8:	e5911004 	ldr	r1, [r1, #4]
        2989cc:	e081c101 	add	ip, r1, r1, lsl #2
        2989d0:	e08c1281 	add	r1, ip, r1, lsl #5
        2989d4:	e0841101 	add	r1, r4, r1, lsl #2
        2989d8:	e591201c 	ldr	r2, [r1, #28]
        2989dc:	e5911014 	ldr	r1, [r1, #20]
        2989e0:	e0421001 	sub	r1, r2, r1
        2989e4:	e3510000 	cmp	r1, #0	; 0x0
        2989e8:	da00001e 	ble	298a68 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1c64>
        2989ec:	e1a03009 	mov	r3, r9
        2989f0:	e0020191 	mul	r2, r1, r1
        2989f4:	e7960100 	ldr	r0, [r6, r0, lsl #2]
        2989f8:	e080c100 	add	ip, r0, r0, lsl #2
        2989fc:	e08c0280 	add	r0, ip, r0, lsl #5
        298a00:	e0840100 	add	r0, r4, r0, lsl #2
        298a04:	e590103c 	ldr	r1, [r0, #60]
        298a08:	e590c048 	ldr	ip, [r0, #72]
        298a0c:	e151000c 	cmp	r1, ip
        298a10:	a1a0e00c 	movge	lr, ip
        298a14:	b1a0e001 	movlt	lr, r1
        298a18:	a590104c 	ldrge	r1, [r0, #76]
        298a1c:	b5901040 	ldrlt	r1, [r0, #64]
        298a20:	e7963103 	ldr	r3, [r6, r3, lsl #2]
        298a24:	e083c103 	add	ip, r3, r3, lsl #2
        298a28:	e08c3283 	add	r3, ip, r3, lsl #5
        298a2c:	e0843103 	add	r3, r4, r3, lsl #2
        298a30:	e593c03c 	ldr	ip, [r3, #60]
        298a34:	e04ec00c 	sub	ip, lr, ip
        298a38:	e00e0c9c 	mul	lr, ip, ip
        298a3c:	e5933040 	ldr	r3, [r3, #64]
        298a40:	e0413003 	sub	r3, r1, r3
        298a44:	e021e393 	mla	r1, r3, r3, lr
        298a48:	e3520000 	cmp	r2, #0	; 0x0
        298a4c:	b2822003 	addlt	r2, r2, #3	; 0x3
        298a50:	e1510142 	cmp	r1, r2, asr #2
        298a54:	b3a03002 	movlt	r3, #2	; 0x2
        298a58:	b3a02019 	movlt	r2, #25	; 0x19
        298a5c:	b2822c05 	addlt	r2, r2, #1280	; 0x500
        298a60:	b5b01004 	ldrlt	r1, [r0, #4]!
        298a64:	ba00001c 	blt	298adc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cd8>
        298a68:	e7960109 	ldr	r0, [r6, r9, lsl #2]
        298a6c:	e080c100 	add	ip, r0, r0, lsl #2
        298a70:	e08c0280 	add	r0, ip, r0, lsl #5
        298a74:	e0840100 	add	r0, r4, r0, lsl #2
        298a78:	e5901064 	ldr	r1, [r0, #100]
        298a7c:	e3710001 	cmn	r1, #1	; 0x1
        298a80:	0a000011 	beq	298acc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cc8>
        298a84:	e0812101 	add	r2, r1, r1, lsl #2
        298a88:	e0822281 	add	r2, r2, r1, lsl #5
        298a8c:	e0841102 	add	r1, r4, r2, lsl #2
        298a90:	e5913078 	ldr	r3, [r1, #120]
        298a94:	e243cf4b 	sub	ip, r3, #300	; 0x12c
        298a98:	e33c0001 	teq	ip, #1	; 0x1
        298a9c:	1243ce19 	subne	ip, r3, #400	; 0x190
        298aa0:	133c0001 	teqne	ip, #1	; 0x1
        298aa4:	1a000014 	bne	298afc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cf8>
        298aa8:	e591303c 	ldr	r3, [r1, #60]
        298aac:	e591c048 	ldr	ip, [r1, #72]
        298ab0:	e153000c 	cmp	r3, ip
        298ab4:	d5911038 	ldrle	r1, [r1, #56]
        298ab8:	d0811081 	addle	r1, r1, r1, lsl #1
        298abc:	d5900038 	ldrle	r0, [r0, #56]
        298ac0:	d1510080 	cmple	r1, r0, lsl #1
        298ac4:	ca00000c 	bgt	298afc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1cf8>
        298ac8:	e7947102 	ldr	r7, [r4, r2, lsl #2]
        298acc:	e3a03003 	mov	r3, #3	; 0x3
        298ad0:	e3a02017 	mov	r2, #23	; 0x17
        298ad4:	e2822c05 	add	r2, r2, #1280	; 0x500
        298ad8:	e59d1000 	ldr	r1, [sp]
        298adc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        298ae0:	e1a03007 	mov	r3, r7
        298ae4:	e1a01005 	mov	r1, r5
        298ae8:	e3a02f45 	mov	r2, #276	; 0x114
        298aec:	e2822b01 	add	r2, r2, #1024	; 0x400
        298af0:	e59b0008 	ldr	r0, [fp, #8]
        298af4:	eb625b25 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        298af8:	e28dd00c 	add	sp, sp, #12	; 0xc
        298afc:	e3e00000 	mvn	r0, #0	; 0x0
        298b00:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        298b04:	e1a0c00d 	mov	ip, sp
        298b08:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        298b0c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        298b10:	e24cb014 	sub	fp, ip, #20	; 0x14
        298b14:	e1a04002 	mov	r4, r2
        298b18:	e1a05003 	mov	r5, r3
        298b1c:	e28b301c 	add	r3, fp, #28	; 0x1c
        298b20:	e893000a 	ldmia	r3, {r1, r3}
        298b24:	e59b2018 	ldr	r2, [fp, #24]
        298b28:	e59b9014 	ldr	r9, [fp, #20]
        298b2c:	e5900014 	ldr	r0, [r0, #20]
        298b30:	e1310003 	teq	r1, r3
        298b34:	1a00007a 	bne	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298b38:	e7921101 	ldr	r1, [r2, r1, lsl #2]
        298b3c:	e081c101 	add	ip, r1, r1, lsl #2
        298b40:	e08c1281 	add	r1, ip, r1, lsl #5
        298b44:	e7958101 	ldr	r8, [r5, r1, lsl #2]
        298b48:	e0851101 	add	r1, r5, r1, lsl #2
        298b4c:	e1a06001 	mov	r6, r1
        298b50:	e5912020 	ldr	r2, [r1, #32]
        298b54:	e5917004 	ldr	r7, [r1, #4]
        298b58:	e5911018 	ldr	r1, [r1, #24]
        298b5c:	e042a001 	sub	sl, r2, r1
        298b60:	e1a01080 	mov	r1, r0, lsl #1
        298b64:	e3a00003 	mov	r0, #3	; 0x3
        298b68:	eb646774 	bl	1bb2940 <$__rt_sdiv>
        298b6c:	e150000a 	cmp	r0, sl
        298b70:	aa00006b 	bge	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298b74:	e2862084 	add	r2, r6, #132	; 0x84
        298b78:	e8920006 	ldmia	r2, {r1, r2}
        298b7c:	e0420001 	sub	r0, r2, r1
        298b80:	e3500002 	cmp	r0, #2	; 0x2
        298b84:	ba000066 	blt	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298b88:	e0610181 	rsb	r0, r1, r1, lsl #3
        298b8c:	e0890100 	add	r0, r9, r0, lsl #2
        298b90:	e590300c 	ldr	r3, [r0, #12]
        298b94:	e3330001 	teq	r3, #1	; 0x1
        298b98:	0a000004 	beq	298bb0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1dac>
        298b9c:	e3330002 	teq	r3, #2	; 0x2
        298ba0:	1a00005f 	bne	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298ba4:	e5903010 	ldr	r3, [r0, #16]
        298ba8:	e3530000 	cmp	r3, #0	; 0x0
        298bac:	da00005c 	ble	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298bb0:	e5903004 	ldr	r3, [r0, #4]
        298bb4:	e0633183 	rsb	r3, r3, r3, lsl #3
        298bb8:	e0843103 	add	r3, r4, r3, lsl #2
        298bbc:	e5933010 	ldr	r3, [r3, #16]
        298bc0:	e5900008 	ldr	r0, [r0, #8]
        298bc4:	e0600180 	rsb	r0, r0, r0, lsl #3
        298bc8:	e0840100 	add	r0, r4, r0, lsl #2
        298bcc:	e5900010 	ldr	r0, [r0, #16]
        298bd0:	e1530000 	cmp	r3, r0
        298bd4:	aa000052 	bge	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298bd8:	e2810001 	add	r0, r1, #1	; 0x1
        298bdc:	e0600180 	rsb	r0, r0, r0, lsl #3
        298be0:	e0890100 	add	r0, r9, r0, lsl #2
        298be4:	e590100c 	ldr	r1, [r0, #12]
        298be8:	e3310002 	teq	r1, #2	; 0x2
        298bec:	1a00004c 	bne	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298bf0:	e5901010 	ldr	r1, [r0, #16]
        298bf4:	e3510000 	cmp	r1, #0	; 0x0
        298bf8:	aa000049 	bge	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298bfc:	e5901004 	ldr	r1, [r0, #4]
        298c00:	e0611181 	rsb	r1, r1, r1, lsl #3
        298c04:	e0841101 	add	r1, r4, r1, lsl #2
        298c08:	e5911014 	ldr	r1, [r1, #20]
        298c0c:	e5900008 	ldr	r0, [r0, #8]
        298c10:	e0600180 	rsb	r0, r0, r0, lsl #3
        298c14:	e0840100 	add	r0, r4, r0, lsl #2
        298c18:	e5900014 	ldr	r0, [r0, #20]
        298c1c:	e1510000 	cmp	r1, r0
        298c20:	aa00003f 	bge	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298c24:	e0620182 	rsb	r0, r2, r2, lsl #3
        298c28:	e0890100 	add	r0, r9, r0, lsl #2
        298c2c:	e590100c 	ldr	r1, [r0, #12]
        298c30:	e3310001 	teq	r1, #1	; 0x1
        298c34:	0a000004 	beq	298c4c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1e48>
        298c38:	e3310002 	teq	r1, #2	; 0x2
        298c3c:	1a000038 	bne	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298c40:	e5901010 	ldr	r1, [r0, #16]
        298c44:	e3510000 	cmp	r1, #0	; 0x0
        298c48:	da000035 	ble	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298c4c:	e5901004 	ldr	r1, [r0, #4]
        298c50:	e0611181 	rsb	r1, r1, r1, lsl #3
        298c54:	e0841101 	add	r1, r4, r1, lsl #2
        298c58:	e5911010 	ldr	r1, [r1, #16]
        298c5c:	e5900008 	ldr	r0, [r0, #8]
        298c60:	e0600180 	rsb	r0, r0, r0, lsl #3
        298c64:	e0840100 	add	r0, r4, r0, lsl #2
        298c68:	e5900010 	ldr	r0, [r0, #16]
        298c6c:	e1510000 	cmp	r1, r0
        298c70:	da00002b 	ble	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298c74:	e3a0102d 	mov	r1, #45	; 0x2d
        298c78:	e2811c01 	add	r1, r1, #256	; 0x100
        298c7c:	e2810064 	add	r0, r1, #100	; 0x64
        298c80:	e5962064 	ldr	r2, [r6, #100]
        298c84:	e3720001 	cmn	r2, #1	; 0x1
        298c88:	0a00000b 	beq	298cbc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1eb8>
        298c8c:	e082e102 	add	lr, r2, r2, lsl #2
        298c90:	e08ee282 	add	lr, lr, r2, lsl #5
        298c94:	e085210e 	add	r2, r5, lr, lsl #2
        298c98:	e5923078 	ldr	r3, [r2, #120]
        298c9c:	e1330001 	teq	r3, r1
        298ca0:	11330000 	teqne	r3, r0
        298ca4:	1a00001e 	bne	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298ca8:	e592303c 	ldr	r3, [r2, #60]
        298cac:	e5922048 	ldr	r2, [r2, #72]
        298cb0:	e1530002 	cmp	r3, r2
        298cb4:	ca00001a 	bgt	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298cb8:	e795810e 	ldr	r8, [r5, lr, lsl #2]
        298cbc:	e5b62068 	ldr	r2, [r6, #104]!
        298cc0:	e3720001 	cmn	r2, #1	; 0x1
        298cc4:	0a00000b 	beq	298cf8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1ef4>
        298cc8:	e082c102 	add	ip, r2, r2, lsl #2
        298ccc:	e08c2282 	add	r2, ip, r2, lsl #5
        298cd0:	e0852102 	add	r2, r5, r2, lsl #2
        298cd4:	e5923078 	ldr	r3, [r2, #120]
        298cd8:	e1330001 	teq	r3, r1
        298cdc:	11330000 	teqne	r3, r0
        298ce0:	1a00000f 	bne	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298ce4:	e592003c 	ldr	r0, [r2, #60]
        298ce8:	e5921048 	ldr	r1, [r2, #72]
        298cec:	e1500001 	cmp	r0, r1
        298cf0:	ba00000b 	blt	298d24 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1f20>
        298cf4:	e5b27004 	ldr	r7, [r2, #4]!
        298cf8:	e3a03004 	mov	r3, #4	; 0x4
        298cfc:	e3a02017 	mov	r2, #23	; 0x17
        298d00:	e2822c05 	add	r2, r2, #1280	; 0x500
        298d04:	e1a01007 	mov	r1, r7
        298d08:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        298d0c:	e1a03008 	mov	r3, r8
        298d10:	e1a01004 	mov	r1, r4
        298d14:	e2422003 	sub	r2, r2, #3	; 0x3
        298d18:	e59b0008 	ldr	r0, [fp, #8]
        298d1c:	eb625a9b 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        298d20:	e28dd00c 	add	sp, sp, #12	; 0xc
        298d24:	e3e00000 	mvn	r0, #0	; 0x0
        298d28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        298d2c:	e1a0c00d 	mov	ip, sp
        298d30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        298d34:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        298d38:	e24cb014 	sub	fp, ip, #20	; 0x14
        298d3c:	e1a04002 	mov	r4, r2
        298d40:	e1a05003 	mov	r5, r3
        298d44:	e59ba018 	ldr	sl, [fp, #24]
        298d48:	e24dd0a0 	sub	sp, sp, #160	; 0xa0
        298d4c:	e59b0004 	ldr	r0, [fp, #4]
        298d50:	e5906000 	ldr	r6, [r0]
        298d54:	e59b0004 	ldr	r0, [fp, #4]
        298d58:	e5b07004 	ldr	r7, [r0, #4]!
        298d5c:	e59b0004 	ldr	r0, [fp, #4]
        298d60:	e5900008 	ldr	r0, [r0, #8]
        298d64:	e58d000c 	str	r0, [sp, #12]
        298d68:	e59b0004 	ldr	r0, [fp, #4]
        298d6c:	e590000c 	ldr	r0, [r0, #12]
        298d70:	e58d0008 	str	r0, [sp, #8]
        298d74:	e59b0004 	ldr	r0, [fp, #4]
        298d78:	e5900010 	ldr	r0, [r0, #16]
        298d7c:	e58d0004 	str	r0, [sp, #4]
        298d80:	e59b0004 	ldr	r0, [fp, #4]
        298d84:	e5b01014 	ldr	r1, [r0, #20]!
        298d88:	e58d1000 	str	r1, [sp]
        298d8c:	e59b003c 	ldr	r0, [fp, #60]
        298d90:	e59b1038 	ldr	r1, [fp, #56]
        298d94:	e1310000 	teq	r1, r0
        298d98:	1a0003f9 	bne	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        298d9c:	e59b1038 	ldr	r1, [fp, #56]
        298da0:	e58d1044 	str	r1, [sp, #68]
        298da4:	e79a0101 	ldr	r0, [sl, r1, lsl #2]
        298da8:	e58d0024 	str	r0, [sp, #36]
        298dac:	e58d0028 	str	r0, [sp, #40]
        298db0:	e080c100 	add	ip, r0, r0, lsl #2
        298db4:	e08c0280 	add	r0, ip, r0, lsl #5
        298db8:	e0850100 	add	r0, r5, r0, lsl #2
        298dbc:	e5b01014 	ldr	r1, [r0, #20]!
        298dc0:	e58d1010 	str	r1, [sp, #16]
        298dc4:	e5902004 	ldr	r2, [r0, #4]
        298dc8:	e58d2014 	str	r2, [sp, #20]
        298dcc:	e5902008 	ldr	r2, [r0, #8]
        298dd0:	e58d2018 	str	r2, [sp, #24]
        298dd4:	e590000c 	ldr	r0, [r0, #12]
        298dd8:	e58d001c 	str	r0, [sp, #28]
        298ddc:	e59d1044 	ldr	r1, [sp, #68]
        298de0:	e79a0101 	ldr	r0, [sl, r1, lsl #2]
        298de4:	e080c100 	add	ip, r0, r0, lsl #2
        298de8:	e08c0280 	add	r0, ip, r0, lsl #5
        298dec:	e7959100 	ldr	r9, [r5, r0, lsl #2]
        298df0:	e0850100 	add	r0, r5, r0, lsl #2
        298df4:	e590104c 	ldr	r1, [r0, #76]
        298df8:	e5902040 	ldr	r2, [r0, #64]
        298dfc:	e1520001 	cmp	r2, r1
        298e00:	e5908004 	ldr	r8, [r0, #4]
        298e04:	ca00040b 	bgt	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        298e08:	e5901020 	ldr	r1, [r0, #32]
        298e0c:	e58d109c 	str	r1, [sp, #156]
        298e10:	e5900018 	ldr	r0, [r0, #24]
        298e14:	e0412000 	sub	r2, r1, r0
        298e18:	e58d203c 	str	r2, [sp, #60]
        298e1c:	e3a00003 	mov	r0, #3	; 0x3
        298e20:	e59d1000 	ldr	r1, [sp]
        298e24:	eb6466c5 	bl	1bb2940 <$__rt_sdiv>
        298e28:	e58d0098 	str	r0, [sp, #152]
        298e2c:	e59d203c 	ldr	r2, [sp, #60]
        298e30:	e1500002 	cmp	r0, r2
        298e34:	ba00000c 	blt	298e6c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2068>
        298e38:	e59d1000 	ldr	r1, [sp]
        298e3c:	e0811fa1 	add	r1, r1, r1, lsr #31
        298e40:	e59d203c 	ldr	r2, [sp, #60]
        298e44:	e15200c1 	cmp	r2, r1, asr #1
        298e48:	da0003cd 	ble	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        298e4c:	e59d109c 	ldr	r1, [sp, #156]
        298e50:	e59b0034 	ldr	r0, [fp, #52]
        298e54:	e0410000 	sub	r0, r1, r0
        298e58:	eb5f5a59 	bl	1a6f7c4 <$HWRAbs(int)>
        298e5c:	e1a01000 	mov	r1, r0
        298e60:	e59d2098 	ldr	r2, [sp, #152]
        298e64:	e1500002 	cmp	r0, r2
        298e68:	aa0003c5 	bge	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        298e6c:	e59d1044 	ldr	r1, [sp, #68]
        298e70:	e79a0101 	ldr	r0, [sl, r1, lsl #2]
        298e74:	e080c100 	add	ip, r0, r0, lsl #2
        298e78:	e08c0280 	add	r0, ip, r0, lsl #5
        298e7c:	e0851100 	add	r1, r5, r0, lsl #2
        298e80:	e5910064 	ldr	r0, [r1, #100]
        298e84:	e58d0040 	str	r0, [sp, #64]
        298e88:	e3700001 	cmn	r0, #1	; 0x1
        298e8c:	0a000054 	beq	298fe4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x21e0>
        298e90:	e59d203c 	ldr	r2, [sp, #60]
        298e94:	e0130292 	muls	r3, r2, r2
        298e98:	4283300f 	addmi	r3, r3, #15	; 0xf
        298e9c:	e1a03243 	mov	r3, r3, asr #4
        298ea0:	e0682188 	rsb	r2, r8, r8, lsl #3
        298ea4:	e0842102 	add	r2, r4, r2, lsl #2
        298ea8:	e592e010 	ldr	lr, [r2, #16]
        298eac:	e59d9040 	ldr	r9, [sp, #64]
        298eb0:	e089c109 	add	ip, r9, r9, lsl #2
        298eb4:	e08c9289 	add	r9, ip, r9, lsl #5
        298eb8:	e58d9094 	str	r9, [sp, #148]
        298ebc:	e7959109 	ldr	r9, [r5, r9, lsl #2]
        298ec0:	e069c189 	rsb	ip, r9, r9, lsl #3
        298ec4:	e084c10c 	add	ip, r4, ip, lsl #2
        298ec8:	e58dc090 	str	ip, [sp, #144]
        298ecc:	e59cc010 	ldr	ip, [ip, #16]
        298ed0:	e04ee00c 	sub	lr, lr, ip
        298ed4:	e00c0e9e 	mul	ip, lr, lr
        298ed8:	e5922014 	ldr	r2, [r2, #20]
        298edc:	e59de090 	ldr	lr, [sp, #144]
        298ee0:	e59ee014 	ldr	lr, [lr, #20]
        298ee4:	e042200e 	sub	r2, r2, lr
        298ee8:	e00e0292 	mul	lr, r2, r2
        298eec:	e08c200e 	add	r2, ip, lr
        298ef0:	e1520003 	cmp	r2, r3
        298ef4:	aa00000e 	bge	298f34 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2130>
        298ef8:	e5b10068 	ldr	r0, [r1, #104]!
        298efc:	e3700001 	cmn	r0, #1	; 0x1
        298f00:	0a000009 	beq	298f2c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2128>
        298f04:	e080c100 	add	ip, r0, r0, lsl #2
        298f08:	e08c0280 	add	r0, ip, r0, lsl #5
        298f0c:	e0851100 	add	r1, r5, r0, lsl #2
        298f10:	e5910078 	ldr	r0, [r1, #120]
        298f14:	e240cf4b 	sub	ip, r0, #300	; 0x12c
        298f18:	e33c0001 	teq	ip, #1	; 0x1
        298f1c:	1240ce19 	subne	ip, r0, #400	; 0x190
        298f20:	133c0002 	teqne	ip, #2	; 0x2
        298f24:	1a000396 	bne	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        298f28:	e5b18004 	ldr	r8, [r1, #4]!
        298f2c:	e3a03005 	mov	r3, #5	; 0x5
        298f30:	ea0001a7 	b	2995d4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x27d0>
        298f34:	e59d1094 	ldr	r1, [sp, #148]
        298f38:	e0851101 	add	r1, r5, r1, lsl #2
        298f3c:	e5912078 	ldr	r2, [r1, #120]
        298f40:	e242cf4b 	sub	ip, r2, #300	; 0x12c
        298f44:	e33c0001 	teq	ip, #1	; 0x1
        298f48:	1242ce19 	subne	ip, r2, #400	; 0x190
        298f4c:	133c0001 	teqne	ip, #1	; 0x1
        298f50:	1a00038b 	bne	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        298f54:	e5912048 	ldr	r2, [r1, #72]
        298f58:	e591303c 	ldr	r3, [r1, #60]
        298f5c:	e1530002 	cmp	r3, r2
        298f60:	ca000387 	bgt	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        298f64:	e5d62090 	ldrb	r2, [r6, #144]
        298f68:	e3320000 	teq	r2, #0	; 0x0
        298f6c:	0a000007 	beq	298f90 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x218c>
        298f70:	e597c040 	ldr	ip, [r7, #64]
        298f74:	e5963000 	ldr	r3, [r6]
        298f78:	e0822003 	add	r2, r2, r3
        298f7c:	e0622182 	rsb	r2, r2, r2, lsl #3
        298f80:	e0842102 	add	r2, r4, r2, lsl #2
        298f84:	e5922014 	ldr	r2, [r2, #20]
        298f88:	e15c0002 	cmp	ip, r2
        298f8c:	ca00037c 	bgt	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        298f90:	e58d0028 	str	r0, [sp, #40]
        298f94:	e5910014 	ldr	r0, [r1, #20]
        298f98:	e59d2010 	ldr	r2, [sp, #16]
        298f9c:	e1500002 	cmp	r0, r2
        298fa0:	c59d0010 	ldrgt	r0, [sp, #16]
        298fa4:	e58d0010 	str	r0, [sp, #16]
        298fa8:	e59d2014 	ldr	r2, [sp, #20]
        298fac:	e5910018 	ldr	r0, [r1, #24]
        298fb0:	e1520000 	cmp	r2, r0
        298fb4:	b59d0014 	ldrlt	r0, [sp, #20]
        298fb8:	e58d0014 	str	r0, [sp, #20]
        298fbc:	e59d2018 	ldr	r2, [sp, #24]
        298fc0:	e591001c 	ldr	r0, [r1, #28]
        298fc4:	e1520000 	cmp	r2, r0
        298fc8:	c59d0018 	ldrgt	r0, [sp, #24]
        298fcc:	e58d0018 	str	r0, [sp, #24]
        298fd0:	e59d201c 	ldr	r2, [sp, #28]
        298fd4:	e5b10020 	ldr	r0, [r1, #32]!
        298fd8:	e1520000 	cmp	r2, r0
        298fdc:	c59d001c 	ldrgt	r0, [sp, #28]
        298fe0:	e58d001c 	str	r0, [sp, #28]
        298fe4:	e59d1044 	ldr	r1, [sp, #68]
        298fe8:	e79a0101 	ldr	r0, [sl, r1, lsl #2]
        298fec:	e080c100 	add	ip, r0, r0, lsl #2
        298ff0:	e08c0280 	add	r0, ip, r0, lsl #5
        298ff4:	e0850100 	add	r0, r5, r0, lsl #2
        298ff8:	e58d008c 	str	r0, [sp, #140]
        298ffc:	e5900068 	ldr	r0, [r0, #104]
        299000:	e3700001 	cmn	r0, #1	; 0x1
        299004:	0a000026 	beq	2990a4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x22a0>
        299008:	e0801100 	add	r1, r0, r0, lsl #2
        29900c:	e0811280 	add	r1, r1, r0, lsl #5
        299010:	e0851101 	add	r1, r5, r1, lsl #2
        299014:	e5912068 	ldr	r2, [r1, #104]
        299018:	e3720001 	cmn	r2, #1	; 0x1
        29901c:	1a000358 	bne	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        299020:	e5912078 	ldr	r2, [r1, #120]
        299024:	e242cf4b 	sub	ip, r2, #300	; 0x12c
        299028:	e33c0001 	teq	ip, #1	; 0x1
        29902c:	1242ce19 	subne	ip, r2, #400	; 0x190
        299030:	133c0002 	teqne	ip, #2	; 0x2
        299034:	1a000352 	bne	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        299038:	e591203c 	ldr	r2, [r1, #60]
        29903c:	e5913048 	ldr	r3, [r1, #72]
        299040:	e1520003 	cmp	r2, r3
        299044:	ca00034e 	bgt	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        299048:	e5918004 	ldr	r8, [r1, #4]
        29904c:	e58d0024 	str	r0, [sp, #36]
        299050:	e5910014 	ldr	r0, [r1, #20]
        299054:	e59d2010 	ldr	r2, [sp, #16]
        299058:	e1500002 	cmp	r0, r2
        29905c:	c59d0010 	ldrgt	r0, [sp, #16]
        299060:	e58d0010 	str	r0, [sp, #16]
        299064:	e59d2014 	ldr	r2, [sp, #20]
        299068:	e5910018 	ldr	r0, [r1, #24]
        29906c:	e1520000 	cmp	r2, r0
        299070:	b59d0014 	ldrlt	r0, [sp, #20]
        299074:	e58d0014 	str	r0, [sp, #20]
        299078:	e59d2018 	ldr	r2, [sp, #24]
        29907c:	e591001c 	ldr	r0, [r1, #28]
        299080:	e1520000 	cmp	r2, r0
        299084:	c59d0018 	ldrgt	r0, [sp, #24]
        299088:	e58d0018 	str	r0, [sp, #24]
        29908c:	e59d201c 	ldr	r2, [sp, #28]
        299090:	e5b10020 	ldr	r0, [r1, #32]!
        299094:	e1520000 	cmp	r2, r0
        299098:	c59d001c 	ldrgt	r0, [sp, #28]
        29909c:	e58d001c 	str	r0, [sp, #28]
        2990a0:	ea0000dd 	b	29941c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2618>
        2990a4:	e59d008c 	ldr	r0, [sp, #140]
        2990a8:	e5900088 	ldr	r0, [r0, #136]
        2990ac:	e0600180 	rsb	r0, r0, r0, lsl #3
        2990b0:	e59b1014 	ldr	r1, [fp, #20]
        2990b4:	e0811100 	add	r1, r1, r0, lsl #2
        2990b8:	e58d1088 	str	r1, [sp, #136]
        2990bc:	e5910008 	ldr	r0, [r1, #8]
        2990c0:	e0600180 	rsb	r0, r0, r0, lsl #3
        2990c4:	e0840100 	add	r0, r4, r0, lsl #2
        2990c8:	e58d0084 	str	r0, [sp, #132]
        2990cc:	e5900010 	ldr	r0, [r0, #16]
        2990d0:	e5911004 	ldr	r1, [r1, #4]
        2990d4:	e0611181 	rsb	r1, r1, r1, lsl #3
        2990d8:	e0841101 	add	r1, r4, r1, lsl #2
        2990dc:	e58d1080 	str	r1, [sp, #128]
        2990e0:	e5911010 	ldr	r1, [r1, #16]
        2990e4:	e0400001 	sub	r0, r0, r1
        2990e8:	e58d007c 	str	r0, [sp, #124]
        2990ec:	e58d0038 	str	r0, [sp, #56]
        2990f0:	e59d008c 	ldr	r0, [sp, #140]
        2990f4:	e5900084 	ldr	r0, [r0, #132]
        2990f8:	e0600180 	rsb	r0, r0, r0, lsl #3
        2990fc:	e59b1014 	ldr	r1, [fp, #20]
        299100:	e0811100 	add	r1, r1, r0, lsl #2
        299104:	e58d1078 	str	r1, [sp, #120]
        299108:	e5b10008 	ldr	r0, [r1, #8]!
        29910c:	e0600180 	rsb	r0, r0, r0, lsl #3
        299110:	e0840100 	add	r0, r4, r0, lsl #2
        299114:	e5b01010 	ldr	r1, [r0, #16]!
        299118:	e0690189 	rsb	r0, r9, r9, lsl #3
        29911c:	e0840100 	add	r0, r4, r0, lsl #2
        299120:	e58d0074 	str	r0, [sp, #116]
        299124:	e5900010 	ldr	r0, [r0, #16]
        299128:	e0411000 	sub	r1, r1, r0
        29912c:	e3a00003 	mov	r0, #3	; 0x3
        299130:	eb646602 	bl	1bb2940 <$__rt_sdiv>
        299134:	e59d2038 	ldr	r2, [sp, #56]
        299138:	e59b1038 	ldr	r1, [fp, #56]
        29913c:	e2813001 	add	r3, r1, #1	; 0x1
        299140:	e08a1101 	add	r1, sl, r1, lsl #2
        299144:	e3520000 	cmp	r2, #0	; 0x0
        299148:	e58d106c 	str	r1, [sp, #108]
        29914c:	e58d3070 	str	r3, [sp, #112]
        299150:	a59d2038 	ldrge	r2, [sp, #56]
        299154:	a1520000 	cmpge	r2, r0
        299158:	aa00003a 	bge	299248 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2444>
        29915c:	e59d0088 	ldr	r0, [sp, #136]
        299160:	e5b01018 	ldr	r1, [r0, #24]!
        299164:	e52d1004 	str	r1, [sp, -#4]!
        299168:	e59d008c 	ldr	r0, [sp, #140]
        29916c:	e5b01014 	ldr	r1, [r0, #20]!
        299170:	e3a00009 	mov	r0, #9	; 0x9
        299174:	eb6465f1 	bl	1bb2940 <$__rt_sdiv>
        299178:	e49d1004 	ldr	r1, [sp], #4
        29917c:	e1510000 	cmp	r1, r0
        299180:	ba00000b 	blt	2991b4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x23b0>
        299184:	e59d0084 	ldr	r0, [sp, #132]
        299188:	e5900014 	ldr	r0, [r0, #20]
        29918c:	e59d1080 	ldr	r1, [sp, #128]
        299190:	e5911014 	ldr	r1, [r1, #20]
        299194:	e0402001 	sub	r2, r0, r1
        299198:	e59d008c 	ldr	r0, [sp, #140]
        29919c:	e5901020 	ldr	r1, [r0, #32]
        2991a0:	e5900018 	ldr	r0, [r0, #24]
        2991a4:	e0510000 	subs	r0, r1, r0
        2991a8:	42800003 	addmi	r0, r0, #3	; 0x3
        2991ac:	e1520140 	cmp	r2, r0, asr #2
        2991b0:	aa000024 	bge	299248 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2444>
        2991b4:	e59d3070 	ldr	r3, [sp, #112]
        2991b8:	e59b001c 	ldr	r0, [fp, #28]
        2991bc:	e1530000 	cmp	r3, r0
        2991c0:	aa000014 	bge	299218 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2414>
        2991c4:	e59d106c 	ldr	r1, [sp, #108]
        2991c8:	e5b10004 	ldr	r0, [r1, #4]!
        2991cc:	e080c100 	add	ip, r0, r0, lsl #2
        2991d0:	e08c0280 	add	r0, ip, r0, lsl #5
        2991d4:	e0850100 	add	r0, r5, r0, lsl #2
        2991d8:	e5901014 	ldr	r1, [r0, #20]
        2991dc:	e590301c 	ldr	r3, [r0, #28]
        2991e0:	e043c001 	sub	ip, r3, r1
        2991e4:	e5902018 	ldr	r2, [r0, #24]
        2991e8:	e5903020 	ldr	r3, [r0, #32]
        2991ec:	e0432002 	sub	r2, r3, r2
        2991f0:	e15c0002 	cmp	ip, r2
        2991f4:	da000007 	ble	299218 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2414>
        2991f8:	e5902078 	ldr	r2, [r0, #120]
        2991fc:	e242cf4b 	sub	ip, r2, #300	; 0x12c
        299200:	e33c0001 	teq	ip, #1	; 0x1
        299204:	1a000003 	bne	299218 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2414>
        299208:	e59d208c 	ldr	r2, [sp, #140]
        29920c:	e592201c 	ldr	r2, [r2, #28]
        299210:	e1510002 	cmp	r1, r2
        299214:	b5b08004 	ldrlt	r8, [r0, #4]!
        299218:	e59d0040 	ldr	r0, [sp, #64]
        29921c:	e3700001 	cmn	r0, #1	; 0x1
        299220:	0a000006 	beq	299240 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x243c>
        299224:	e59d0040 	ldr	r0, [sp, #64]
        299228:	e080c100 	add	ip, r0, r0, lsl #2
        29922c:	e08c0280 	add	r0, ip, r0, lsl #5
        299230:	e0850100 	add	r0, r5, r0, lsl #2
        299234:	e5900064 	ldr	r0, [r0, #100]
        299238:	e3700001 	cmn	r0, #1	; 0x1
        29923c:	1a0002fd 	bne	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299240:	e3a03006 	mov	r3, #6	; 0x6
        299244:	ea00011d 	b	2996c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x28bc>
        299248:	e59d0088 	ldr	r0, [sp, #136]
        29924c:	e5900010 	ldr	r0, [r0, #16]
        299250:	e59d1078 	ldr	r1, [sp, #120]
        299254:	e5912010 	ldr	r2, [r1, #16]
        299258:	e0100092 	muls	r0, r2, r0
        29925c:	5a000009 	bpl	299288 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2484>
        299260:	e5910014 	ldr	r0, [r1, #20]
        299264:	e59d2088 	ldr	r2, [sp, #136]
        299268:	e5922014 	ldr	r2, [r2, #20]
        29926c:	e0822182 	add	r2, r2, r2, lsl #3
        299270:	e1500002 	cmp	r0, r2
        299274:	c5911018 	ldrgt	r1, [r1, #24]
        299278:	c59d0088 	ldrgt	r0, [sp, #136]
        29927c:	c5900018 	ldrgt	r0, [r0, #24]
        299280:	c1510100 	cmpgt	r1, r0, lsl #2
        299284:	ca000018 	bgt	2992ec <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x24e8>
        299288:	e59d0088 	ldr	r0, [sp, #136]
        29928c:	e590000c 	ldr	r0, [r0, #12]
        299290:	e3300001 	teq	r0, #1	; 0x1
        299294:	1a00004c 	bne	2993cc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x25c8>
        299298:	e59d007c 	ldr	r0, [sp, #124]
        29929c:	eb5f5948 	bl	1a6f7c4 <$HWRAbs(int)>
        2992a0:	e0801080 	add	r1, r0, r0, lsl #1
        2992a4:	e0811fa1 	add	r1, r1, r1, lsr #31
        2992a8:	e1a010c1 	mov	r1, r1, asr #1
        2992ac:	e52d1004 	str	r1, [sp, -#4]!
        2992b0:	e59d008c 	ldr	r0, [sp, #140]
        2992b4:	e5900008 	ldr	r0, [r0, #8]
        2992b8:	e0600180 	rsb	r0, r0, r0, lsl #3
        2992bc:	e0840100 	add	r0, r4, r0, lsl #2
        2992c0:	e5900014 	ldr	r0, [r0, #20]
        2992c4:	e59d208c 	ldr	r2, [sp, #140]
        2992c8:	e5b21004 	ldr	r1, [r2, #4]!
        2992cc:	e0611181 	rsb	r1, r1, r1, lsl #3
        2992d0:	e0841101 	add	r1, r4, r1, lsl #2
        2992d4:	e5911014 	ldr	r1, [r1, #20]
        2992d8:	e0400001 	sub	r0, r0, r1
        2992dc:	eb5f5938 	bl	1a6f7c4 <$HWRAbs(int)>
        2992e0:	e49d1004 	ldr	r1, [sp], #4
        2992e4:	e1510000 	cmp	r1, r0
        2992e8:	aa000037 	bge	2993cc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x25c8>
        2992ec:	e59d3070 	ldr	r3, [sp, #112]
        2992f0:	e59b001c 	ldr	r0, [fp, #28]
        2992f4:	e1530000 	cmp	r3, r0
        2992f8:	aa000015 	bge	299354 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2550>
        2992fc:	e59d106c 	ldr	r1, [sp, #108]
        299300:	e5b10004 	ldr	r0, [r1, #4]!
        299304:	e080c100 	add	ip, r0, r0, lsl #2
        299308:	e08c0280 	add	r0, ip, r0, lsl #5
        29930c:	e0850100 	add	r0, r5, r0, lsl #2
        299310:	e5902014 	ldr	r2, [r0, #20]
        299314:	e590301c 	ldr	r3, [r0, #28]
        299318:	e043c002 	sub	ip, r3, r2
        29931c:	e5901018 	ldr	r1, [r0, #24]
        299320:	e5903020 	ldr	r3, [r0, #32]
        299324:	e0431001 	sub	r1, r3, r1
        299328:	e15c0081 	cmp	ip, r1, lsl #1
        29932c:	da000026 	ble	2993cc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x25c8>
        299330:	e59d1044 	ldr	r1, [sp, #68]
        299334:	e79a1101 	ldr	r1, [sl, r1, lsl #2]
        299338:	e081c101 	add	ip, r1, r1, lsl #2
        29933c:	e08c1281 	add	r1, ip, r1, lsl #5
        299340:	e0851101 	add	r1, r5, r1, lsl #2
        299344:	e591101c 	ldr	r1, [r1, #28]
        299348:	e1520001 	cmp	r2, r1
        29934c:	aa00001e 	bge	2993cc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x25c8>
        299350:	e5b08004 	ldr	r8, [r0, #4]!
        299354:	e5d60090 	ldrb	r0, [r6, #144]
        299358:	e5961000 	ldr	r1, [r6]
        29935c:	e0802001 	add	r2, r0, r1
        299360:	e0620182 	rsb	r0, r2, r2, lsl #3
        299364:	e0840100 	add	r0, r4, r0, lsl #2
        299368:	e5901010 	ldr	r1, [r0, #16]
        29936c:	e5963004 	ldr	r3, [r6, #4]
        299370:	e1530002 	cmp	r3, r2
        299374:	da000003 	ble	299388 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2584>
        299378:	e596c048 	ldr	ip, [r6, #72]
        29937c:	e590202c 	ldr	r2, [r0, #44]
        299380:	e15c0002 	cmp	ip, r2
        299384:	ba000000 	blt	29938c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2588>
        299388:	e5962048 	ldr	r2, [r6, #72]
        29938c:	e590000c 	ldr	r0, [r0, #12]
        299390:	e5d6c091 	ldrb	ip, [r6, #145]
        299394:	e043300c 	sub	r3, r3, ip
        299398:	e0633183 	rsb	r3, r3, r3, lsl #3
        29939c:	e0843103 	add	r3, r4, r3, lsl #2
        2993a0:	e5933010 	ldr	r3, [r3, #16]
        2993a4:	e59dc074 	ldr	ip, [sp, #116]
        2993a8:	e59cc010 	ldr	ip, [ip, #16]
        2993ac:	e043300c 	sub	r3, r3, ip
        2993b0:	e0421001 	sub	r1, r2, r1
        2993b4:	e3500014 	cmp	r0, #20	; 0x14
        2993b8:	2a000001 	bcs	2993c4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x25c0>
        2993bc:	e1530081 	cmp	r3, r1, lsl #1
        2993c0:	ba000001 	blt	2993cc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x25c8>
        2993c4:	e3a03007 	mov	r3, #7	; 0x7
        2993c8:	ea0000bc 	b	2996c0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x28bc>
        2993cc:	e59d3044 	ldr	r3, [sp, #68]
        2993d0:	e92d0008 	stmdb	sp!, {r3}
        2993d4:	e1a0300a 	mov	r3, sl
        2993d8:	e1a01004 	mov	r1, r4
        2993dc:	e1a00005 	mov	r0, r5
        2993e0:	e59b2014 	ldr	r2, [fp, #20]
        2993e4:	eb000295 	bl	299e40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x303c>
        2993e8:	e28dd004 	add	sp, sp, #4	; 0x4
        2993ec:	e3700001 	cmn	r0, #1	; 0x1
        2993f0:	0a000009 	beq	29941c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2618>
        2993f4:	e59d1044 	ldr	r1, [sp, #68]
        2993f8:	e79a1101 	ldr	r1, [sl, r1, lsl #2]
        2993fc:	e081c101 	add	ip, r1, r1, lsl #2
        299400:	e08c1281 	add	r1, ip, r1, lsl #5
        299404:	e0851101 	add	r1, r5, r1, lsl #2
        299408:	e5911004 	ldr	r1, [r1, #4]
        29940c:	e3a03008 	mov	r3, #8	; 0x8
        299410:	e3a02015 	mov	r2, #21	; 0x15
        299414:	e2822c05 	add	r2, r2, #1280	; 0x500
        299418:	ea0001fc 	b	299c10 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2e0c>
        29941c:	e59d1044 	ldr	r1, [sp, #68]
        299420:	e79a0101 	ldr	r0, [sl, r1, lsl #2]
        299424:	e58d0068 	str	r0, [sp, #104]
        299428:	e0801100 	add	r1, r0, r0, lsl #2
        29942c:	e0811280 	add	r1, r1, r0, lsl #5
        299430:	e58d1064 	str	r1, [sp, #100]
        299434:	e0851101 	add	r1, r5, r1, lsl #2
        299438:	e58d1060 	str	r1, [sp, #96]
        29943c:	e5b10068 	ldr	r0, [r1, #104]!
        299440:	e58d005c 	str	r0, [sp, #92]
        299444:	e3700001 	cmn	r0, #1	; 0x1
        299448:	0a000020 	beq	2994d0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x26cc>
        29944c:	e080c100 	add	ip, r0, r0, lsl #2
        299450:	e08c0280 	add	r0, ip, r0, lsl #5
        299454:	e0850100 	add	r0, r5, r0, lsl #2
        299458:	e5901008 	ldr	r1, [r0, #8]
        29945c:	e3310001 	teq	r1, #1	; 0x1
        299460:	1a00001a 	bne	2994d0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x26cc>
        299464:	e59d1060 	ldr	r1, [sp, #96]
        299468:	e5911084 	ldr	r1, [r1, #132]
        29946c:	e0611181 	rsb	r1, r1, r1, lsl #3
        299470:	e59b2014 	ldr	r2, [fp, #20]
        299474:	e0821101 	add	r1, r2, r1, lsl #2
        299478:	e5911008 	ldr	r1, [r1, #8]
        29947c:	e0611181 	rsb	r1, r1, r1, lsl #3
        299480:	e0841101 	add	r1, r4, r1, lsl #2
        299484:	e5b13010 	ldr	r3, [r1, #16]!
        299488:	e5912004 	ldr	r2, [r1, #4]
        29948c:	e590c048 	ldr	ip, [r0, #72]
        299490:	e043c00c 	sub	ip, r3, ip
        299494:	e0030c9c 	mul	r3, ip, ip
        299498:	e590104c 	ldr	r1, [r0, #76]
        29949c:	e0421001 	sub	r1, r2, r1
        2994a0:	e0020191 	mul	r2, r1, r1
        2994a4:	e0831002 	add	r1, r3, r2
        2994a8:	e58d1020 	str	r1, [sp, #32]
        2994ac:	e5901020 	ldr	r1, [r0, #32]
        2994b0:	e5900018 	ldr	r0, [r0, #24]
        2994b4:	e0410000 	sub	r0, r1, r0
        2994b8:	e0010090 	mul	r1, r0, r0
        2994bc:	e3a00009 	mov	r0, #9	; 0x9
        2994c0:	eb64651e 	bl	1bb2940 <$__rt_sdiv>
        2994c4:	e59d1020 	ldr	r1, [sp, #32]
        2994c8:	e1510000 	cmp	r1, r0
        2994cc:	ba00022c 	blt	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        2994d0:	e59d1060 	ldr	r1, [sp, #96]
        2994d4:	e5b10008 	ldr	r0, [r1, #8]!
        2994d8:	e3300002 	teq	r0, #2	; 0x2
        2994dc:	059d0068 	ldreq	r0, [sp, #104]
        2994e0:	02400001 	subeq	r0, r0, #1	; 0x1
        2994e4:	059d1028 	ldreq	r1, [sp, #40]
        2994e8:	01300001 	teqeq	r0, r1
        2994ec:	059d0068 	ldreq	r0, [sp, #104]
        2994f0:	02800001 	addeq	r0, r0, #1	; 0x1
        2994f4:	059d2024 	ldreq	r2, [sp, #36]
        2994f8:	01300002 	teqeq	r0, r2
        2994fc:	1a000037 	bne	2995e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x27dc>
        299500:	e59d1028 	ldr	r1, [sp, #40]
        299504:	e0810101 	add	r0, r1, r1, lsl #2
        299508:	e0800281 	add	r0, r0, r1, lsl #5
        29950c:	e0850100 	add	r0, r5, r0, lsl #2
        299510:	e5901078 	ldr	r1, [r0, #120]
        299514:	e241ce19 	sub	ip, r1, #400	; 0x190
        299518:	e33c0001 	teq	ip, #1	; 0x1
        29951c:	1a00002f 	bne	2995e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x27dc>
        299520:	e590002c 	ldr	r0, [r0, #44]
        299524:	e0600180 	rsb	r0, r0, r0, lsl #3
        299528:	e0840100 	add	r0, r4, r0, lsl #2
        29952c:	e5b02010 	ldr	r2, [r0, #16]!
        299530:	e0690189 	rsb	r0, r9, r9, lsl #3
        299534:	e0841100 	add	r1, r4, r0, lsl #2
        299538:	e5910010 	ldr	r0, [r1, #16]
        29953c:	e1520000 	cmp	r2, r0
        299540:	aa000026 	bge	2995e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x27dc>
        299544:	e59d2024 	ldr	r2, [sp, #36]
        299548:	e082c102 	add	ip, r2, r2, lsl #2
        29954c:	e08c2282 	add	r2, ip, r2, lsl #5
        299550:	e0852102 	add	r2, r5, r2, lsl #2
        299554:	e5923078 	ldr	r3, [r2, #120]
        299558:	e243ce19 	sub	ip, r3, #400	; 0x190
        29955c:	e33c0002 	teq	ip, #2	; 0x2
        299560:	1a00001e 	bne	2995e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x27dc>
        299564:	e5922028 	ldr	r2, [r2, #40]
        299568:	e0622182 	rsb	r2, r2, r2, lsl #3
        29956c:	e0842102 	add	r2, r4, r2, lsl #2
        299570:	e5b2c010 	ldr	ip, [r2, #16]!
        299574:	e0682188 	rsb	r2, r8, r8, lsl #3
        299578:	e0843102 	add	r3, r4, r2, lsl #2
        29957c:	e5932010 	ldr	r2, [r3, #16]
        299580:	e15c0002 	cmp	ip, r2
        299584:	da000015 	ble	2995e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x27dc>
        299588:	e5911014 	ldr	r1, [r1, #20]
        29958c:	e5933014 	ldr	r3, [r3, #20]
        299590:	e0402002 	sub	r2, r0, r2
        299594:	e0000292 	mul	r0, r2, r2
        299598:	e0411003 	sub	r1, r1, r3
        29959c:	e0020191 	mul	r2, r1, r1
        2995a0:	e0801002 	add	r1, r0, r2
        2995a4:	e58d1020 	str	r1, [sp, #32]
        2995a8:	e59d0060 	ldr	r0, [sp, #96]
        2995ac:	e5901020 	ldr	r1, [r0, #32]
        2995b0:	e5900018 	ldr	r0, [r0, #24]
        2995b4:	e0410000 	sub	r0, r1, r0
        2995b8:	e0010090 	mul	r1, r0, r0
        2995bc:	e3a00009 	mov	r0, #9	; 0x9
        2995c0:	eb6464de 	bl	1bb2940 <$__rt_sdiv>
        2995c4:	e59d1020 	ldr	r1, [sp, #32]
        2995c8:	e1500001 	cmp	r0, r1
        2995cc:	da000003 	ble	2995e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x27dc>
        2995d0:	e3a03009 	mov	r3, #9	; 0x9
        2995d4:	e3a02f47 	mov	r2, #284	; 0x11c
        2995d8:	e2822b01 	add	r2, r2, #1024	; 0x400
        2995dc:	ea000039 	b	2996c8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x28c4>
        2995e0:	e0690189 	rsb	r0, r9, r9, lsl #3
        2995e4:	e0840100 	add	r0, r4, r0, lsl #2
        2995e8:	e5b01014 	ldr	r1, [r0, #20]!
        2995ec:	e59d0060 	ldr	r0, [sp, #96]
        2995f0:	e5900020 	ldr	r0, [r0, #32]
        2995f4:	e1510000 	cmp	r1, r0
        2995f8:	ca0001e1 	bgt	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        2995fc:	e0680188 	rsb	r0, r8, r8, lsl #3
        299600:	e0841100 	add	r1, r4, r0, lsl #2
        299604:	e58d1058 	str	r1, [sp, #88]
        299608:	e5b10014 	ldr	r0, [r1, #20]!
        29960c:	e59d1060 	ldr	r1, [sp, #96]
        299610:	e5911018 	ldr	r1, [r1, #24]
        299614:	e58d1054 	str	r1, [sp, #84]
        299618:	e1500001 	cmp	r0, r1
        29961c:	ba0001d8 	blt	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        299620:	e59d0060 	ldr	r0, [sp, #96]
        299624:	e5900064 	ldr	r0, [r0, #100]
        299628:	e58d0050 	str	r0, [sp, #80]
        29962c:	e3700001 	cmn	r0, #1	; 0x1
        299630:	059d005c 	ldreq	r0, [sp, #92]
        299634:	03700001 	cmneq	r0, #1	; 0x1
        299638:	1a000026 	bne	2996d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x28d4>
        29963c:	e59d0060 	ldr	r0, [sp, #96]
        299640:	e5900030 	ldr	r0, [r0, #48]
        299644:	e1300008 	teq	r0, r8
        299648:	0a000022 	beq	2996d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x28d4>
        29964c:	e2400001 	sub	r0, r0, #1	; 0x1
        299650:	e59d1064 	ldr	r1, [sp, #100]
        299654:	e7952101 	ldr	r2, [r5, r1, lsl #2]
        299658:	e1520000 	cmp	r2, r0
        29965c:	ca000007 	bgt	299680 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x287c>
        299660:	e0601180 	rsb	r1, r0, r0, lsl #3
        299664:	e0841101 	add	r1, r4, r1, lsl #2
        299668:	e5913010 	ldr	r3, [r1, #16]
        29966c:	e591102c 	ldr	r1, [r1, #44]
        299670:	e1530001 	cmp	r3, r1
        299674:	d2400001 	suble	r0, r0, #1	; 0x1
        299678:	d1520000 	cmple	r2, r0
        29967c:	dafffff7 	ble	299660 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x285c>
        299680:	e2800001 	add	r0, r0, #1	; 0x1
        299684:	e59d1058 	ldr	r1, [sp, #88]
        299688:	e5911010 	ldr	r1, [r1, #16]
        29968c:	e0600180 	rsb	r0, r0, r0, lsl #3
        299690:	e0840100 	add	r0, r4, r0, lsl #2
        299694:	e5900010 	ldr	r0, [r0, #16]
        299698:	e0411000 	sub	r1, r1, r0
        29969c:	e52d1004 	str	r1, [sp, -#4]!
        2996a0:	e59d1064 	ldr	r1, [sp, #100]
        2996a4:	e5911034 	ldr	r1, [r1, #52]
        2996a8:	e3a00003 	mov	r0, #3	; 0x3
        2996ac:	eb6464a3 	bl	1bb2940 <$__rt_sdiv>
        2996b0:	e49d1004 	ldr	r1, [sp], #4
        2996b4:	e1510000 	cmp	r1, r0
        2996b8:	aa000006 	bge	2996d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x28d4>
        2996bc:	e3a0300a 	mov	r3, #10	; 0xa
        2996c0:	e3a0201b 	mov	r2, #27	; 0x1b
        2996c4:	e2822c05 	add	r2, r2, #1280	; 0x500
        2996c8:	e1a01008 	mov	r1, r8
        2996cc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2996d0:	e1a03009 	mov	r3, r9
        2996d4:	ea00014f 	b	299c18 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2e14>
        2996d8:	e59d205c 	ldr	r2, [sp, #92]
        2996dc:	e3720001 	cmn	r2, #1	; 0x1
        2996e0:	0a000027 	beq	299784 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2980>
        2996e4:	e59d1064 	ldr	r1, [sp, #100]
        2996e8:	e7950101 	ldr	r0, [r5, r1, lsl #2]
        2996ec:	e0600180 	rsb	r0, r0, r0, lsl #3
        2996f0:	e0840100 	add	r0, r4, r0, lsl #2
        2996f4:	e5901010 	ldr	r1, [r0, #16]
        2996f8:	e5900014 	ldr	r0, [r0, #20]
        2996fc:	e082c102 	add	ip, r2, r2, lsl #2
        299700:	e08c2282 	add	r2, ip, r2, lsl #5
        299704:	e0852102 	add	r2, r5, r2, lsl #2
        299708:	e58d204c 	str	r2, [sp, #76]
        29970c:	e5922004 	ldr	r2, [r2, #4]
        299710:	e0622182 	rsb	r2, r2, r2, lsl #3
        299714:	e0843102 	add	r3, r4, r2, lsl #2
        299718:	e2833010 	add	r3, r3, #16	; 0x10
        29971c:	e893000c 	ldmia	r3, {r2, r3}
        299720:	e0412002 	sub	r2, r1, r2
        299724:	e0010292 	mul	r1, r2, r2
        299728:	e0402003 	sub	r2, r0, r3
        29972c:	e0211292 	mla	r1, r2, r2, r1
        299730:	e58d1020 	str	r1, [sp, #32]
        299734:	e59d1060 	ldr	r1, [sp, #96]
        299738:	e5b10038 	ldr	r0, [r1, #56]!
        29973c:	e58d0048 	str	r0, [sp, #72]
        299740:	e0010090 	mul	r1, r0, r0
        299744:	e3a00009 	mov	r0, #9	; 0x9
        299748:	eb64647c 	bl	1bb2940 <$__rt_sdiv>
        29974c:	e59d1020 	ldr	r1, [sp, #32]
        299750:	e1510100 	cmp	r1, r0, lsl #2
        299754:	ba00018a 	blt	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        299758:	e59d1054 	ldr	r1, [sp, #84]
        29975c:	e52d1004 	str	r1, [sp, -#4]!
        299760:	e3a00003 	mov	r0, #3	; 0x3
        299764:	e59d104c 	ldr	r1, [sp, #76]
        299768:	eb646474 	bl	1bb2940 <$__rt_sdiv>
        29976c:	e49d1004 	ldr	r1, [sp], #4
        299770:	e0810000 	add	r0, r1, r0
        299774:	e59d204c 	ldr	r2, [sp, #76]
        299778:	e5b21018 	ldr	r1, [r2, #24]!
        29977c:	e1500001 	cmp	r0, r1
        299780:	ca00017f 	bgt	299d84 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f80>
        299784:	e59d001c 	ldr	r0, [sp, #28]
        299788:	e59d2014 	ldr	r2, [sp, #20]
        29978c:	e0400002 	sub	r0, r0, r2
        299790:	e59d1010 	ldr	r1, [sp, #16]
        299794:	e59d2018 	ldr	r2, [sp, #24]
        299798:	e0421001 	sub	r1, r2, r1
        29979c:	e1510080 	cmp	r1, r0, lsl #1
        2997a0:	ca0001a4 	bgt	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        2997a4:	e59d0050 	ldr	r0, [sp, #80]
        2997a8:	e3700001 	cmn	r0, #1	; 0x1
        2997ac:	059d005c 	ldreq	r0, [sp, #92]
        2997b0:	03700001 	cmneq	r0, #1	; 0x1
        2997b4:	1a000003 	bne	2997c8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x29c4>
        2997b8:	e0480009 	sub	r0, r8, r9
        2997bc:	e2800001 	add	r0, r0, #1	; 0x1
        2997c0:	e350000a 	cmp	r0, #10	; 0xa
        2997c4:	ca00019b 	bgt	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        2997c8:	e59d0040 	ldr	r0, [sp, #64]
        2997cc:	e3700001 	cmn	r0, #1	; 0x1
        2997d0:	0a000012 	beq	299820 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2a1c>
        2997d4:	e59d0040 	ldr	r0, [sp, #64]
        2997d8:	e080c100 	add	ip, r0, r0, lsl #2
        2997dc:	e08c0280 	add	r0, ip, r0, lsl #5
        2997e0:	e0850100 	add	r0, r5, r0, lsl #2
        2997e4:	e5901008 	ldr	r1, [r0, #8]
        2997e8:	e3310001 	teq	r1, #1	; 0x1
        2997ec:	1a00000b 	bne	299820 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2a1c>
        2997f0:	e59d1060 	ldr	r1, [sp, #96]
        2997f4:	e5b12038 	ldr	r2, [r1, #56]!
        2997f8:	e5901038 	ldr	r1, [r0, #56]
        2997fc:	e1520081 	cmp	r2, r1, lsl #1
        299800:	aa000006 	bge	299820 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2a1c>
        299804:	e590103c 	ldr	r1, [r0, #60]
        299808:	e59d2058 	ldr	r2, [sp, #88]
        29980c:	e5922010 	ldr	r2, [r2, #16]
        299810:	e1510002 	cmp	r1, r2
        299814:	c5d00010 	ldrgtb	r0, [r0, #16]
        299818:	c350000a 	cmpgt	r0, #10	; 0xa
        29981c:	ca000185 	bgt	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299820:	e59d0008 	ldr	r0, [sp, #8]
        299824:	e3300000 	teq	r0, #0	; 0x0
        299828:	1a00008c 	bne	299a60 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c5c>
        29982c:	e3360000 	teq	r6, #0	; 0x0
        299830:	0a00008a 	beq	299a60 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c5c>
        299834:	e24dd00c 	sub	sp, sp, #12	; 0xc
        299838:	e3a00000 	mov	r0, #0	; 0x0
        29983c:	e58d0004 	str	r0, [sp, #4]
        299840:	e58d0000 	str	r0, [sp]
        299844:	e5960000 	ldr	r0, [r6]
        299848:	e2800001 	add	r0, r0, #1	; 0x1
        29984c:	e1a0c000 	mov	ip, r0
        299850:	e5961004 	ldr	r1, [r6, #4]
        299854:	e2413001 	sub	r3, r1, #1	; 0x1
        299858:	e1530000 	cmp	r3, r0
        29985c:	ba00007e 	blt	299a5c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c58>
        299860:	e0601180 	rsb	r1, r0, r0, lsl #3
        299864:	e0841101 	add	r1, r4, r1, lsl #2
        299868:	e1a0a001 	mov	sl, r1
        29986c:	e511200c 	ldr	r2, [r1, -#12]
        299870:	e5911010 	ldr	r1, [r1, #16]
        299874:	e1520001 	cmp	r2, r1
        299878:	b59ae02c 	ldrlt	lr, [sl, #44]
        29987c:	b15e0001 	cmplt	lr, r1
        299880:	b58d0004 	strlt	r0, [sp, #4]
        299884:	ba000071 	blt	299a50 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c4c>
        299888:	e15c0000 	cmp	ip, r0
        29988c:	aa00006f 	bge	299a50 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c4c>
        299890:	e1520001 	cmp	r2, r1
        299894:	c59a202c 	ldrgt	r2, [sl, #44]
        299898:	c1520001 	cmpgt	r2, r1
        29989c:	da00006b 	ble	299a50 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c4c>
        2998a0:	e0600180 	rsb	r0, r0, r0, lsl #3
        2998a4:	e0840100 	add	r0, r4, r0, lsl #2
        2998a8:	e5900010 	ldr	r0, [r0, #16]
        2998ac:	e58d0040 	str	r0, [sp, #64]
        2998b0:	e59a1014 	ldr	r1, [sl, #20]
        2998b4:	e58d103c 	str	r1, [sp, #60]
        2998b8:	e2863048 	add	r3, r6, #72	; 0x48
        2998bc:	e893000c 	ldmia	r3, {r2, r3}
        2998c0:	eb625398 	bl	1b2e728 <$GetDirection__FiN31>
        2998c4:	e58d0008 	str	r0, [sp, #8]
        2998c8:	e350000e 	cmp	r0, #14	; 0xe
        2998cc:	ba00002c 	blt	299984 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2b80>
        2998d0:	e3370000 	teq	r7, #0	; 0x0
        2998d4:	05960034 	ldreq	r0, [r6, #52]
        2998d8:	1596101c 	ldrne	r1, [r6, #28]
        2998dc:	15970014 	ldrne	r0, [r7, #20]
        2998e0:	10410000 	subne	r0, r1, r0
        2998e4:	e5961048 	ldr	r1, [r6, #72]
        2998e8:	e5ba2010 	ldr	r2, [sl, #16]!
        2998ec:	e0411002 	sub	r1, r1, r2
        2998f0:	e1500101 	cmp	r0, r1, lsl #2
        2998f4:	ca000022 	bgt	299984 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2b80>
        2998f8:	e59d0004 	ldr	r0, [sp, #4]
        2998fc:	e3300000 	teq	r0, #0	; 0x0
        299900:	0a000022 	beq	299990 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2b8c>
        299904:	e59d0004 	ldr	r0, [sp, #4]
        299908:	e0600180 	rsb	r0, r0, r0, lsl #3
        29990c:	e0840100 	add	r0, r4, r0, lsl #2
        299910:	e5b0a010 	ldr	sl, [r0, #16]!
        299914:	e5903004 	ldr	r3, [r0, #4]
        299918:	e1a0200a 	mov	r2, sl
        29991c:	e58d3038 	str	r3, [sp, #56]
        299920:	e59d0040 	ldr	r0, [sp, #64]
        299924:	e59d103c 	ldr	r1, [sp, #60]
        299928:	eb62537e 	bl	1b2e728 <$GetDirection__FiN31>
        29992c:	e1a01000 	mov	r1, r0
        299930:	e59d0008 	ldr	r0, [sp, #8]
        299934:	eb625376 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        299938:	e3500002 	cmp	r0, #2	; 0x2
        29993c:	aa000013 	bge	299990 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2b8c>
        299940:	e5960048 	ldr	r0, [r6, #72]
        299944:	e59d1040 	ldr	r1, [sp, #64]
        299948:	e0400001 	sub	r0, r0, r1
        29994c:	e0010090 	mul	r1, r0, r0
        299950:	e596004c 	ldr	r0, [r6, #76]
        299954:	e59d203c 	ldr	r2, [sp, #60]
        299958:	e0402002 	sub	r2, r0, r2
        29995c:	e0201292 	mla	r0, r2, r2, r1
        299960:	e59d1040 	ldr	r1, [sp, #64]
        299964:	e04a2001 	sub	r2, sl, r1
        299968:	e0010292 	mul	r1, r2, r2
        29996c:	e59d203c 	ldr	r2, [sp, #60]
        299970:	e59d3038 	ldr	r3, [sp, #56]
        299974:	e0433002 	sub	r3, r3, r2
        299978:	e0211393 	mla	r1, r3, r3, r1
        29997c:	e1510200 	cmp	r1, r0, lsl #4
        299980:	da000002 	ble	299990 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2b8c>
        299984:	e3a00001 	mov	r0, #1	; 0x1
        299988:	e58d0000 	str	r0, [sp]
        29998c:	ea000002 	b	29999c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2b98>
        299990:	e59d0000 	ldr	r0, [sp]
        299994:	e3300000 	teq	r0, #0	; 0x0
        299998:	0a00002f 	beq	299a5c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c58>
        29999c:	e59d0018 	ldr	r0, [sp, #24]
        2999a0:	e3300000 	teq	r0, #0	; 0x0
        2999a4:	1a000025 	bne	299a40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c3c>
        2999a8:	e59d0004 	ldr	r0, [sp, #4]
        2999ac:	e3300000 	teq	r0, #0	; 0x0
        2999b0:	0a000022 	beq	299a40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c3c>
        2999b4:	e59d0004 	ldr	r0, [sp, #4]
        2999b8:	e0600180 	rsb	r0, r0, r0, lsl #3
        2999bc:	e0841100 	add	r1, r4, r0, lsl #2
        2999c0:	e2811010 	add	r1, r1, #16	; 0x10
        2999c4:	e8910003 	ldmia	r1, {r0, r1}
        2999c8:	e3370000 	teq	r7, #0	; 0x0
        2999cc:	0a000008 	beq	2999f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2bf0>
        2999d0:	e5972078 	ldr	r2, [r7, #120]
        2999d4:	e242ce19 	sub	ip, r2, #400	; 0x190
        2999d8:	e33c0001 	teq	ip, #1	; 0x1
        2999dc:	1242cf4b 	subne	ip, r2, #300	; 0x12c
        2999e0:	133c0001 	teqne	ip, #1	; 0x1
        2999e4:	0287303c 	addeq	r3, r7, #60	; 0x3c
        2999e8:	0893000c 	ldmeqia	r3, {r2, r3}
        2999ec:	0a000002 	beq	2999fc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2bf8>
        2999f0:	ea0000d2 	b	299d40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f3c>
        2999f4:	e286303c 	add	r3, r6, #60	; 0x3c
        2999f8:	e893000c 	ldmia	r3, {r2, r3}
        2999fc:	eb625349 	bl	1b2e728 <$GetDirection__FiN31>
        299a00:	e3500003 	cmp	r0, #3	; 0x3
        299a04:	da00000d 	ble	299a40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c3c>
        299a08:	e3500008 	cmp	r0, #8	; 0x8
        299a0c:	aa00000b 	bge	299a40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c3c>
        299a10:	e3a03000 	mov	r3, #0	; 0x0
        299a14:	e3a0201b 	mov	r2, #27	; 0x1b
        299a18:	e2822c05 	add	r2, r2, #1280	; 0x500
        299a1c:	e1a01008 	mov	r1, r8
        299a20:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        299a24:	e1a03009 	mov	r3, r9
        299a28:	e1a01004 	mov	r1, r4
        299a2c:	e2422007 	sub	r2, r2, #7	; 0x7
        299a30:	e59b0008 	ldr	r0, [fp, #8]
        299a34:	eb625755 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        299a38:	e28dd00c 	add	sp, sp, #12	; 0xc
        299a3c:	ea0000bf 	b	299d40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f3c>
        299a40:	e59d0000 	ldr	r0, [sp]
        299a44:	e3300000 	teq	r0, #0	; 0x0
        299a48:	1a0000bc 	bne	299d40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f3c>
        299a4c:	ea000002 	b	299a5c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2c58>
        299a50:	e2800001 	add	r0, r0, #1	; 0x1
        299a54:	e1530000 	cmp	r3, r0
        299a58:	aaffff80 	bge	299860 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2a5c>
        299a5c:	e28dd00c 	add	sp, sp, #12	; 0xc
        299a60:	e5d60091 	ldrb	r0, [r6, #145]
        299a64:	e3300000 	teq	r0, #0	; 0x0
        299a68:	0a00001b 	beq	299adc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2cd8>
        299a6c:	e59d1004 	ldr	r1, [sp, #4]
        299a70:	e3310000 	teq	r1, #0	; 0x0
        299a74:	1a000018 	bne	299adc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2cd8>
        299a78:	e59d3008 	ldr	r3, [sp, #8]
        299a7c:	e3330000 	teq	r3, #0	; 0x0
        299a80:	0a000018 	beq	299ae8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2ce4>
        299a84:	e59d3008 	ldr	r3, [sp, #8]
        299a88:	e5b31078 	ldr	r1, [r3, #120]!
        299a8c:	e241ce19 	sub	ip, r1, #400	; 0x190
        299a90:	e33c0002 	teq	ip, #2	; 0x2
        299a94:	1a000010 	bne	299adc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2cd8>
        299a98:	e5961004 	ldr	r1, [r6, #4]
        299a9c:	e0411000 	sub	r1, r1, r0
        299aa0:	e0611181 	rsb	r1, r1, r1, lsl #3
        299aa4:	e0841101 	add	r1, r4, r1, lsl #2
        299aa8:	e5b1c010 	ldr	ip, [r1, #16]!
        299aac:	e5912004 	ldr	r2, [r1, #4]
        299ab0:	e59d3008 	ldr	r3, [sp, #8]
        299ab4:	e2833048 	add	r3, r3, #72	; 0x48
        299ab8:	e893000a 	ldmia	r3, {r1, r3}
        299abc:	e04cc001 	sub	ip, ip, r1
        299ac0:	e0010c9c 	mul	r1, ip, ip
        299ac4:	e0423003 	sub	r3, r2, r3
        299ac8:	e0211393 	mla	r1, r3, r3, r1
        299acc:	e59d3008 	ldr	r3, [sp, #8]
        299ad0:	e5b3205c 	ldr	r2, [r3, #92]!
        299ad4:	e1520081 	cmp	r2, r1, lsl #1
        299ad8:	ca0000d6 	bgt	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299adc:	e59d3008 	ldr	r3, [sp, #8]
        299ae0:	e3330000 	teq	r3, #0	; 0x0
        299ae4:	1a00001a 	bne	299b54 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2d50>
        299ae8:	e5d61090 	ldrb	r1, [r6, #144]
        299aec:	e3310000 	teq	r1, #0	; 0x0
        299af0:	0a000017 	beq	299b54 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2d50>
        299af4:	e5962000 	ldr	r2, [r6]
        299af8:	e0811002 	add	r1, r1, r2
        299afc:	e0611181 	rsb	r1, r1, r1, lsl #3
        299b00:	e0841101 	add	r1, r4, r1, lsl #2
        299b04:	e5912010 	ldr	r2, [r1, #16]
        299b08:	e5911014 	ldr	r1, [r1, #20]
        299b0c:	e596c048 	ldr	ip, [r6, #72]
        299b10:	e04ce002 	sub	lr, ip, r2
        299b14:	e00c0e9e 	mul	ip, lr, lr
        299b18:	e596304c 	ldr	r3, [r6, #76]
        299b1c:	e043e001 	sub	lr, r3, r1
        299b20:	e023ce9e 	mla	r3, lr, lr, ip
        299b24:	e596c004 	ldr	ip, [r6, #4]
        299b28:	e04cc000 	sub	ip, ip, r0
        299b2c:	e06cc18c 	rsb	ip, ip, ip, lsl #3
        299b30:	e084e10c 	add	lr, r4, ip, lsl #2
        299b34:	e28ee010 	add	lr, lr, #16	; 0x10
        299b38:	e89e5000 	ldmia	lr, {ip, lr}
        299b3c:	e04cc002 	sub	ip, ip, r2
        299b40:	e0020c9c 	mul	r2, ip, ip
        299b44:	e04ec001 	sub	ip, lr, r1
        299b48:	e0212c9c 	mla	r1, ip, ip, r2
        299b4c:	e1510203 	cmp	r1, r3, lsl #4
        299b50:	ca0000b8 	bgt	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299b54:	e3370000 	teq	r7, #0	; 0x0
        299b58:	159d100c 	ldrne	r1, [sp, #12]
        299b5c:	13310000 	teqne	r1, #0	; 0x0
        299b60:	0a000032 	beq	299c30 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2e2c>
        299b64:	e5971038 	ldr	r1, [r7, #56]
        299b68:	e0812081 	add	r2, r1, r1, lsl #1
        299b6c:	e5961038 	ldr	r1, [r6, #56]
        299b70:	e1520001 	cmp	r2, r1
        299b74:	da00002d 	ble	299c30 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2e2c>
        299b78:	e59d100c 	ldr	r1, [sp, #12]
        299b7c:	e5911064 	ldr	r1, [r1, #100]
        299b80:	e3710001 	cmn	r1, #1	; 0x1
        299b84:	1a000029 	bne	299c30 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2e2c>
        299b88:	e5961004 	ldr	r1, [r6, #4]
        299b8c:	e0410000 	sub	r0, r1, r0
        299b90:	e0600180 	rsb	r0, r0, r0, lsl #3
        299b94:	e0840100 	add	r0, r4, r0, lsl #2
        299b98:	e5900010 	ldr	r0, [r0, #16]
        299b9c:	e59d100c 	ldr	r1, [sp, #12]
        299ba0:	e591103c 	ldr	r1, [r1, #60]
        299ba4:	e1500001 	cmp	r0, r1
        299ba8:	b59d000c 	ldrlt	r0, [sp, #12]
        299bac:	b5d00010 	ldrltb	r0, [r0, #16]
        299bb0:	b350000b 	cmplt	r0, #11	; 0xb
        299bb4:	aa00001d 	bge	299c30 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2e2c>
        299bb8:	e3500005 	cmp	r0, #5	; 0x5
        299bbc:	da00001b 	ble	299c30 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2e2c>
        299bc0:	e5961048 	ldr	r1, [r6, #72]
        299bc4:	e5d60090 	ldrb	r0, [r6, #144]
        299bc8:	e5962000 	ldr	r2, [r6]
        299bcc:	e0800002 	add	r0, r0, r2
        299bd0:	e0600180 	rsb	r0, r0, r0, lsl #3
        299bd4:	e0840100 	add	r0, r4, r0, lsl #2
        299bd8:	e5900010 	ldr	r0, [r0, #16]
        299bdc:	e0410000 	sub	r0, r1, r0
        299be0:	e0802100 	add	r2, r0, r0, lsl #2
        299be4:	e596101c 	ldr	r1, [r6, #28]
        299be8:	e5970014 	ldr	r0, [r7, #20]
        299bec:	e0410000 	sub	r0, r1, r0
        299bf0:	e1520080 	cmp	r2, r0, lsl #1
        299bf4:	aa00000d 	bge	299c30 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2e2c>
        299bf8:	e59d000c 	ldr	r0, [sp, #12]
        299bfc:	e5900000 	ldr	r0, [r0]
        299c00:	e3a03000 	mov	r3, #0	; 0x0
        299c04:	e3a0201d 	mov	r2, #29	; 0x1d
        299c08:	e2822c05 	add	r2, r2, #1280	; 0x500
        299c0c:	e1a01008 	mov	r1, r8
        299c10:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        299c14:	e1a03000 	mov	r3, r0
        299c18:	e1a01004 	mov	r1, r4
        299c1c:	e3a02f45 	mov	r2, #276	; 0x114
        299c20:	e2822b01 	add	r2, r2, #1024	; 0x400
        299c24:	e59b0008 	ldr	r0, [fp, #8]
        299c28:	eb6256d8 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        299c2c:	ea000043 	b	299d40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f3c>
        299c30:	e24dd00c 	sub	sp, sp, #12	; 0xc
        299c34:	e3370000 	teq	r7, #0	; 0x0
        299c38:	e596008c 	ldr	r0, [r6, #140]
        299c3c:	0a000041 	beq	299d48 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f44>
        299c40:	e5971000 	ldr	r1, [r7]
        299c44:	e1390001 	teq	r9, r1
        299c48:	1a00003e 	bne	299d48 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f44>
        299c4c:	e59d1018 	ldr	r1, [sp, #24]
        299c50:	e3310000 	teq	r1, #0	; 0x0
        299c54:	0a00003b 	beq	299d48 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f44>
        299c58:	e59d1018 	ldr	r1, [sp, #24]
        299c5c:	e5911064 	ldr	r1, [r1, #100]
        299c60:	e3710001 	cmn	r1, #1	; 0x1
        299c64:	1a000035 	bne	299d40 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f3c>
        299c68:	e0800080 	add	r0, r0, r0, lsl #1
        299c6c:	e59b1020 	ldr	r1, [fp, #32]
        299c70:	e7910200 	ldr	r0, [r1, r0, lsl #4]
        299c74:	e080c100 	add	ip, r0, r0, lsl #2
        299c78:	e08c0280 	add	r0, ip, r0, lsl #5
        299c7c:	e7951100 	ldr	r1, [r5, r0, lsl #2]
        299c80:	e58d1000 	str	r1, [sp]
        299c84:	e597002c 	ldr	r0, [r7, #44]
        299c88:	e0600180 	rsb	r0, r0, r0, lsl #3
        299c8c:	e0840100 	add	r0, r4, r0, lsl #2
        299c90:	e5b0a010 	ldr	sl, [r0, #16]!
        299c94:	e5961004 	ldr	r1, [r6, #4]
        299c98:	e5d60091 	ldrb	r0, [r6, #145]
        299c9c:	e0411000 	sub	r1, r1, r0
        299ca0:	e0610181 	rsb	r0, r1, r1, lsl #3
        299ca4:	e0840100 	add	r0, r4, r0, lsl #2
        299ca8:	e2412001 	sub	r2, r1, #1	; 0x1
        299cac:	e5905010 	ldr	r5, [r0, #16]
        299cb0:	e5961000 	ldr	r1, [r6]
        299cb4:	e1520001 	cmp	r2, r1
        299cb8:	ba000002 	blt	299cc8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2ec4>
        299cbc:	e510000c 	ldr	r0, [r0, -#12]
        299cc0:	e1500005 	cmp	r0, r5
        299cc4:	c1a05000 	movgt	r5, r0
        299cc8:	e5971018 	ldr	r1, [r7, #24]
        299ccc:	e58d1004 	str	r1, [sp, #4]
        299cd0:	e5972020 	ldr	r2, [r7, #32]
        299cd4:	e045100a 	sub	r1, r5, sl
        299cd8:	e3a00003 	mov	r0, #3	; 0x3
        299cdc:	e58d2008 	str	r2, [sp, #8]
        299ce0:	eb646316 	bl	1bb2940 <$__rt_sdiv>
        299ce4:	e99d0006 	ldmib	sp, {r1, r2}
        299ce8:	e0421001 	sub	r1, r2, r1
        299cec:	e0811fa1 	add	r1, r1, r1, lsr #31
        299cf0:	e1a010c1 	mov	r1, r1, asr #1
        299cf4:	e04a2000 	sub	r2, sl, r0
        299cf8:	e0850000 	add	r0, r5, r0
        299cfc:	e59d3004 	ldr	r3, [sp, #4]
        299d00:	e0433001 	sub	r3, r3, r1
        299d04:	e59dc008 	ldr	ip, [sp, #8]
        299d08:	e08c1001 	add	r1, ip, r1
        299d0c:	e24dd010 	sub	sp, sp, #16	; 0x10
        299d10:	e88d000c 	stmia	sp, {r2, r3}
        299d14:	e1a02009 	mov	r2, r9
        299d18:	e58d0008 	str	r0, [sp, #8]
        299d1c:	e58d100c 	str	r1, [sp, #12]
        299d20:	e1a00004 	mov	r0, r4
        299d24:	e59d3000 	ldr	r3, [sp]
        299d28:	e59d1010 	ldr	r1, [sp, #16]
        299d2c:	e28dd004 	add	sp, sp, #4	; 0x4
        299d30:	ebfffa34 	bl	298608 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1804>
        299d34:	e28dd00c 	add	sp, sp, #12	; 0xc
        299d38:	e3300000 	teq	r0, #0	; 0x0
        299d3c:	1a000001 	bne	299d48 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f44>
        299d40:	e28dd00c 	add	sp, sp, #12	; 0xc
        299d44:	ea00003b 	b	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299d48:	e28dd00c 	add	sp, sp, #12	; 0xc
        299d4c:	e3370000 	teq	r7, #0	; 0x0
        299d50:	0a000007 	beq	299d74 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f70>
        299d54:	e5970000 	ldr	r0, [r7]
        299d58:	e1390000 	teq	r9, r0
        299d5c:	1a000004 	bne	299d74 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x2f70>
        299d60:	e5b70038 	ldr	r0, [r7, #56]!
        299d64:	e0800080 	add	r0, r0, r0, lsl #1
        299d68:	e5b61038 	ldr	r1, [r6, #56]!
        299d6c:	e1500081 	cmp	r0, r1, lsl #1
        299d70:	ca000030 	bgt	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299d74:	e3a0300b 	mov	r3, #11	; 0xb
        299d78:	e3a02016 	mov	r2, #22	; 0x16
        299d7c:	e2822c05 	add	r2, r2, #1280	; 0x500
        299d80:	eafffe50 	b	2996c8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x28c4>
        299d84:	e59d1044 	ldr	r1, [sp, #68]
        299d88:	e79a0101 	ldr	r0, [sl, r1, lsl #2]
        299d8c:	e080c100 	add	ip, r0, r0, lsl #2
        299d90:	e08c0280 	add	r0, ip, r0, lsl #5
        299d94:	e0856100 	add	r6, r5, r0, lsl #2
        299d98:	e5960064 	ldr	r0, [r6, #100]
        299d9c:	e3700001 	cmn	r0, #1	; 0x1
        299da0:	1a000024 	bne	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299da4:	e5960014 	ldr	r0, [r6, #20]
        299da8:	e596101c 	ldr	r1, [r6, #28]
        299dac:	e0417000 	sub	r7, r1, r0
        299db0:	e5960018 	ldr	r0, [r6, #24]
        299db4:	e5961020 	ldr	r1, [r6, #32]
        299db8:	e0410000 	sub	r0, r1, r0
        299dbc:	e0800080 	add	r0, r0, r0, lsl #1
        299dc0:	e1a00080 	mov	r0, r0, lsl #1
        299dc4:	eb6462de 	bl	1bb2944 <$__rt_sdiv10>
        299dc8:	e1570000 	cmp	r7, r0
        299dcc:	aa000019 	bge	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299dd0:	e5960008 	ldr	r0, [r6, #8]
        299dd4:	e3300002 	teq	r0, #2	; 0x2
        299dd8:	1a000016 	bne	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299ddc:	e5b60068 	ldr	r0, [r6, #104]!
        299de0:	e3700001 	cmn	r0, #1	; 0x1
        299de4:	0a000013 	beq	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299de8:	e080c100 	add	ip, r0, r0, lsl #2
        299dec:	e08c0280 	add	r0, ip, r0, lsl #5
        299df0:	e0850100 	add	r0, r5, r0, lsl #2
        299df4:	e5900078 	ldr	r0, [r0, #120]
        299df8:	e240ce19 	sub	ip, r0, #400	; 0x190
        299dfc:	e33c0002 	teq	ip, #2	; 0x2
        299e00:	1a00000c 	bne	299e38 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3034>
        299e04:	e28b3038 	add	r3, fp, #56	; 0x38
        299e08:	e893000c 	ldmia	r3, {r2, r3}
        299e0c:	e92d000c 	stmdb	sp!, {r2, r3}
        299e10:	e28b1038 	add	r1, fp, #56	; 0x38
        299e14:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        299e18:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        299e1c:	e1a0300a 	mov	r3, sl
        299e20:	e92d0008 	stmdb	sp!, {r3}
        299e24:	e1a03005 	mov	r3, r5
        299e28:	e1a02004 	mov	r2, r4
        299e2c:	e99b0003 	ldmib	fp, {r0, r1}
        299e30:	eb0000c6 	bl	29a150 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x334c>
        299e34:	e28dd01c 	add	sp, sp, #28	; 0x1c
        299e38:	e3e00000 	mvn	r0, #0	; 0x0
        299e3c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        299e40:	e1a0c00d 	mov	ip, sp
        299e44:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        299e48:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        299e4c:	e24cb014 	sub	fp, ip, #20	; 0x14
        299e50:	e1a06000 	mov	r6, r0
        299e54:	e1a04001 	mov	r4, r1
        299e58:	e1a05002 	mov	r5, r2
        299e5c:	e24dd020 	sub	sp, sp, #32	; 0x20
        299e60:	e3e00000 	mvn	r0, #0	; 0x0
        299e64:	e58d0010 	str	r0, [sp, #16]
        299e68:	e59b0014 	ldr	r0, [fp, #20]
        299e6c:	e59b3010 	ldr	r3, [fp, #16]
        299e70:	e7930100 	ldr	r0, [r3, r0, lsl #2]
        299e74:	e080c100 	add	ip, r0, r0, lsl #2
        299e78:	e08c0280 	add	r0, ip, r0, lsl #5
        299e7c:	e0861100 	add	r1, r6, r0, lsl #2
        299e80:	e1a08001 	mov	r8, r1
        299e84:	e2811084 	add	r1, r1, #132	; 0x84
        299e88:	e8910003 	ldmia	r1, {r0, r1}
        299e8c:	e0600180 	rsb	r0, r0, r0, lsl #3
        299e90:	e58d1008 	str	r1, [sp, #8]
        299e94:	e0851100 	add	r1, r5, r0, lsl #2
        299e98:	e58d101c 	str	r1, [sp, #28]
        299e9c:	e5910008 	ldr	r0, [r1, #8]
        299ea0:	e5911004 	ldr	r1, [r1, #4]
        299ea4:	e0401001 	sub	r1, r0, r1
        299ea8:	e58d100c 	str	r1, [sp, #12]
        299eac:	e3510002 	cmp	r1, #2	; 0x2
        299eb0:	aa000001 	bge	299ebc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x30b8>
        299eb4:	e3e00000 	mvn	r0, #0	; 0x0
        299eb8:	ea0000a3 	b	29a14c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3348>
        299ebc:	e0600180 	rsb	r0, r0, r0, lsl #3
        299ec0:	e0840100 	add	r0, r4, r0, lsl #2
        299ec4:	e240900c 	sub	r9, r0, #12	; 0xc
        299ec8:	e8990280 	ldmia	r9, {r7, r9}
        299ecc:	e510a028 	ldr	sl, [r0, -#40]
        299ed0:	e5100024 	ldr	r0, [r0, -#36]
        299ed4:	e58d0004 	str	r0, [sp, #4]
        299ed8:	e0400009 	sub	r0, r0, r9
        299edc:	eb5f5638 	bl	1a6f7c4 <$HWRAbs(int)>
        299ee0:	e40d0004 	str	r0, [sp], -#4
        299ee4:	e58d0000 	str	r0, [sp]
        299ee8:	e04a0007 	sub	r0, sl, r7
        299eec:	eb5f5634 	bl	1a6f7c4 <$HWRAbs(int)>
        299ef0:	e49d1004 	ldr	r1, [sp], #4
        299ef4:	e1510080 	cmp	r1, r0, lsl #1
        299ef8:	da000008 	ble	299f20 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x311c>
        299efc:	e5980018 	ldr	r0, [r8, #24]
        299f00:	e5981020 	ldr	r1, [r8, #32]
        299f04:	e0410000 	sub	r0, r1, r0
        299f08:	e1a01080 	mov	r1, r0, lsl #1
        299f0c:	e3a00003 	mov	r0, #3	; 0x3
        299f10:	eb64628a 	bl	1bb2940 <$__rt_sdiv>
        299f14:	e59d1000 	ldr	r1, [sp]
        299f18:	e1500001 	cmp	r0, r1
        299f1c:	ba00001d 	blt	299f98 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3194>
        299f20:	e59d100c 	ldr	r1, [sp, #12]
        299f24:	e3510002 	cmp	r1, #2	; 0x2
        299f28:	daffffe1 	ble	299eb4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x30b0>
        299f2c:	e59d001c 	ldr	r0, [sp, #28]
        299f30:	e5900008 	ldr	r0, [r0, #8]
        299f34:	e0600180 	rsb	r0, r0, r0, lsl #3
        299f38:	e0840100 	add	r0, r4, r0, lsl #2
        299f3c:	e2409028 	sub	r9, r0, #40	; 0x28
        299f40:	e8990280 	ldmia	r9, {r7, r9}
        299f44:	e510a044 	ldr	sl, [r0, -#68]
        299f48:	e5100040 	ldr	r0, [r0, -#64]
        299f4c:	e58d0004 	str	r0, [sp, #4]
        299f50:	e0400009 	sub	r0, r0, r9
        299f54:	eb5f561a 	bl	1a6f7c4 <$HWRAbs(int)>
        299f58:	e40d0004 	str	r0, [sp], -#4
        299f5c:	e58d0000 	str	r0, [sp]
        299f60:	e04a0007 	sub	r0, sl, r7
        299f64:	eb5f5616 	bl	1a6f7c4 <$HWRAbs(int)>
        299f68:	e49d1004 	ldr	r1, [sp], #4
        299f6c:	e1510080 	cmp	r1, r0, lsl #1
        299f70:	daffffcf 	ble	299eb4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x30b0>
        299f74:	e5b81018 	ldr	r1, [r8, #24]!
        299f78:	e5980008 	ldr	r0, [r8, #8]
        299f7c:	e0400001 	sub	r0, r0, r1
        299f80:	e1a01080 	mov	r1, r0, lsl #1
        299f84:	e3a00003 	mov	r0, #3	; 0x3
        299f88:	eb64626c 	bl	1bb2940 <$__rt_sdiv>
        299f8c:	e59d1000 	ldr	r1, [sp]
        299f90:	e1500001 	cmp	r0, r1
        299f94:	aaffffc6 	bge	299eb4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x30b0>
        299f98:	e59d0008 	ldr	r0, [sp, #8]
        299f9c:	e0600180 	rsb	r0, r0, r0, lsl #3
        299fa0:	e0852100 	add	r2, r5, r0, lsl #2
        299fa4:	e5920004 	ldr	r0, [r2, #4]
        299fa8:	e1a01000 	mov	r1, r0
        299fac:	e5922008 	ldr	r2, [r2, #8]
        299fb0:	e1520000 	cmp	r2, r0
        299fb4:	ba00000a 	blt	299fe4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x31e0>
        299fb8:	e0603180 	rsb	r3, r0, r0, lsl #3
        299fbc:	e0843103 	add	r3, r4, r3, lsl #2
        299fc0:	e5b3c010 	ldr	ip, [r3, #16]!
        299fc4:	e0613181 	rsb	r3, r1, r1, lsl #3
        299fc8:	e0843103 	add	r3, r4, r3, lsl #2
        299fcc:	e5933010 	ldr	r3, [r3, #16]
        299fd0:	e15c0003 	cmp	ip, r3
        299fd4:	b1a01000 	movlt	r1, r0
        299fd8:	e2800001 	add	r0, r0, #1	; 0x1
        299fdc:	e1520000 	cmp	r2, r0
        299fe0:	aafffff4 	bge	299fb8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x31b4>
        299fe4:	e0620182 	rsb	r0, r2, r2, lsl #3
        299fe8:	e0840100 	add	r0, r4, r0, lsl #2
        299fec:	e5900010 	ldr	r0, [r0, #16]
        299ff0:	e0611181 	rsb	r1, r1, r1, lsl #3
        299ff4:	e0841101 	add	r1, r4, r1, lsl #2
        299ff8:	e5b18010 	ldr	r8, [r1, #16]!
        299ffc:	e58d8018 	str	r8, [sp, #24]
        29a000:	e0404008 	sub	r4, r0, r8
        29a004:	e1a01004 	mov	r1, r4
        29a008:	e3a00003 	mov	r0, #3	; 0x3
        29a00c:	eb64624b 	bl	1bb2940 <$__rt_sdiv>
        29a010:	e0880000 	add	r0, r8, r0
        29a014:	e1500007 	cmp	r0, r7
        29a018:	aa00004a 	bge	29a148 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3344>
        29a01c:	e1a01084 	mov	r1, r4, lsl #1
        29a020:	e3a00003 	mov	r0, #3	; 0x3
        29a024:	e59d8018 	ldr	r8, [sp, #24]
        29a028:	eb646244 	bl	1bb2940 <$__rt_sdiv>
        29a02c:	e0880000 	add	r0, r8, r0
        29a030:	e1500007 	cmp	r0, r7
        29a034:	da000043 	ble	29a148 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3344>
        29a038:	e59b0014 	ldr	r0, [fp, #20]
        29a03c:	e59b3010 	ldr	r3, [fp, #16]
        29a040:	e7930100 	ldr	r0, [r3, r0, lsl #2]
        29a044:	e080c100 	add	ip, r0, r0, lsl #2
        29a048:	e08c0280 	add	r0, ip, r0, lsl #5
        29a04c:	e0868100 	add	r8, r6, r0, lsl #2
        29a050:	e5980064 	ldr	r0, [r8, #100]
        29a054:	e3700001 	cmn	r0, #1	; 0x1
        29a058:	0a00003a 	beq	29a148 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3344>
        29a05c:	e080c100 	add	ip, r0, r0, lsl #2
        29a060:	e08c0280 	add	r0, ip, r0, lsl #5
        29a064:	e58d0014 	str	r0, [sp, #20]
        29a068:	e0864100 	add	r4, r6, r0, lsl #2
        29a06c:	e5940064 	ldr	r0, [r4, #100]
        29a070:	e3700001 	cmn	r0, #1	; 0x1
        29a074:	1a000033 	bne	29a148 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3344>
        29a078:	e5940078 	ldr	r0, [r4, #120]
        29a07c:	e240cf4b 	sub	ip, r0, #300	; 0x12c
        29a080:	e33c0001 	teq	ip, #1	; 0x1
        29a084:	0a000018 	beq	29a0ec <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x32e8>
        29a088:	e240ce19 	sub	ip, r0, #400	; 0x190
        29a08c:	e33c0001 	teq	ip, #1	; 0x1
        29a090:	1a000009 	bne	29a0bc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x32b8>
        29a094:	e5940084 	ldr	r0, [r4, #132]
        29a098:	e0600180 	rsb	r0, r0, r0, lsl #3
        29a09c:	e0850100 	add	r0, r5, r0, lsl #2
        29a0a0:	e2800010 	add	r0, r0, #16	; 0x10
        29a0a4:	e9b00022 	ldmib	r0!, {r1, r5}
        29a0a8:	e3a00009 	mov	r0, #9	; 0x9
        29a0ac:	eb646223 	bl	1bb2940 <$__rt_sdiv>
        29a0b0:	e1550000 	cmp	r5, r0
        29a0b4:	aa000023 	bge	29a148 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3344>
        29a0b8:	ea00000b 	b	29a0ec <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x32e8>
        29a0bc:	e240ce19 	sub	ip, r0, #400	; 0x190
        29a0c0:	e33c0002 	teq	ip, #2	; 0x2
        29a0c4:	1a00001f 	bne	29a148 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3344>
        29a0c8:	e5940084 	ldr	r0, [r4, #132]
        29a0cc:	e0600180 	rsb	r0, r0, r0, lsl #3
        29a0d0:	e0850100 	add	r0, r5, r0, lsl #2
        29a0d4:	e2800010 	add	r0, r0, #16	; 0x10
        29a0d8:	e9b00022 	ldmib	r0!, {r1, r5}
        29a0dc:	e3a00009 	mov	r0, #9	; 0x9
        29a0e0:	eb646216 	bl	1bb2940 <$__rt_sdiv>
        29a0e4:	e1550000 	cmp	r5, r0
        29a0e8:	aa000016 	bge	29a148 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3344>
        29a0ec:	e5b80068 	ldr	r0, [r8, #104]!
        29a0f0:	e3700001 	cmn	r0, #1	; 0x1
        29a0f4:	1a000013 	bne	29a148 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3344>
        29a0f8:	e2844038 	add	r4, r4, #56	; 0x38
        29a0fc:	e9b4000c 	ldmib	r4!, {r2, r3}
        29a100:	e2841008 	add	r1, r4, #8	; 0x8
        29a104:	e8910003 	ldmia	r1, {r0, r1}
        29a108:	eb625186 	bl	1b2e728 <$GetDirection__FiN31>
        29a10c:	e1a04000 	mov	r4, r0
        29a110:	e1a0000a 	mov	r0, sl
        29a114:	e1a02007 	mov	r2, r7
        29a118:	e1a03009 	mov	r3, r9
        29a11c:	e59d1004 	ldr	r1, [sp, #4]
        29a120:	eb625180 	bl	1b2e728 <$GetDirection__FiN31>
        29a124:	e1a01000 	mov	r1, r0
        29a128:	e1a00004 	mov	r0, r4
        29a12c:	eb625178 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        29a130:	e3500000 	cmp	r0, #0	; 0x0
        29a134:	ba000003 	blt	29a148 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3344>
        29a138:	e3500003 	cmp	r0, #3	; 0x3
        29a13c:	d59d0014 	ldrle	r0, [sp, #20]
        29a140:	d7960100 	ldrle	r0, [r6, r0, lsl #2]
        29a144:	d58d0010 	strle	r0, [sp, #16]
        29a148:	e59d0010 	ldr	r0, [sp, #16]
        29a14c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        29a150:	e1a0c00d 	mov	ip, sp
        29a154:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        29a158:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        29a15c:	e24cb014 	sub	fp, ip, #20	; 0x14
        29a160:	e1a05001 	mov	r5, r1
        29a164:	e1a04003 	mov	r4, r3
        29a168:	e28b2028 	add	r2, fp, #40	; 0x28
        29a16c:	e8920006 	ldmia	r2, {r1, r2}
        29a170:	e24dd030 	sub	sp, sp, #48	; 0x30
        29a174:	e3a03000 	mov	r3, #0	; 0x0
        29a178:	e58d3018 	str	r3, [sp, #24]
        29a17c:	e5903000 	ldr	r3, [r0]
        29a180:	e58d3010 	str	r3, [sp, #16]
        29a184:	e590e004 	ldr	lr, [r0, #4]
        29a188:	e58de00c 	str	lr, [sp, #12]
        29a18c:	e590300c 	ldr	r3, [r0, #12]
        29a190:	e58d3008 	str	r3, [sp, #8]
        29a194:	e5903010 	ldr	r3, [r0, #16]
        29a198:	e58d3004 	str	r3, [sp, #4]
        29a19c:	e5900014 	ldr	r0, [r0, #20]
        29a1a0:	e1310002 	teq	r1, r2
        29a1a4:	e58d0000 	str	r0, [sp]
        29a1a8:	1a0001bc 	bne	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a1ac:	e58d101c 	str	r1, [sp, #28]
        29a1b0:	e59b0014 	ldr	r0, [fp, #20]
        29a1b4:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        29a1b8:	e080c100 	add	ip, r0, r0, lsl #2
        29a1bc:	e08c0280 	add	r0, ip, r0, lsl #5
        29a1c0:	e7949100 	ldr	r9, [r4, r0, lsl #2]
        29a1c4:	e0840100 	add	r0, r4, r0, lsl #2
        29a1c8:	e58d002c 	str	r0, [sp, #44]
        29a1cc:	e5902020 	ldr	r2, [r0, #32]
        29a1d0:	e5907004 	ldr	r7, [r0, #4]
        29a1d4:	e58d2028 	str	r2, [sp, #40]
        29a1d8:	e5900018 	ldr	r0, [r0, #24]
        29a1dc:	e0428000 	sub	r8, r2, r0
        29a1e0:	e58d8024 	str	r8, [sp, #36]
        29a1e4:	e59d0000 	ldr	r0, [sp]
        29a1e8:	e0800fa0 	add	r0, r0, r0, lsr #31
        29a1ec:	e15800c0 	cmp	r8, r0, asr #1
        29a1f0:	da00014e 	ble	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a1f4:	e59d102c 	ldr	r1, [sp, #44]
        29a1f8:	e5b10068 	ldr	r0, [r1, #104]!
        29a1fc:	e1a0a000 	mov	sl, r0
        29a200:	e3700001 	cmn	r0, #1	; 0x1
        29a204:	0a000149 	beq	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a208:	e08a010a 	add	r0, sl, sl, lsl #2
        29a20c:	e080028a 	add	r0, r0, sl, lsl #5
        29a210:	e0846100 	add	r6, r4, r0, lsl #2
        29a214:	e5961078 	ldr	r1, [r6, #120]
        29a218:	e3a00092 	mov	r0, #146	; 0x92
        29a21c:	e2800c01 	add	r0, r0, #256	; 0x100
        29a220:	e58d1020 	str	r1, [sp, #32]
        29a224:	e1310000 	teq	r1, r0
        29a228:	1a00009f 	bne	29a4ac <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x36a8>
        29a22c:	e5960020 	ldr	r0, [r6, #32]
        29a230:	e5961018 	ldr	r1, [r6, #24]
        29a234:	e0401001 	sub	r1, r0, r1
        29a238:	e0680188 	rsb	r0, r8, r8, lsl #3
        29a23c:	e52d1004 	str	r1, [sp, -#4]!
        29a240:	eb6461bf 	bl	1bb2944 <$__rt_sdiv10>
        29a244:	e49d1004 	ldr	r1, [sp], #4
        29a248:	e1510000 	cmp	r1, r0
        29a24c:	aa000096 	bge	29a4ac <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x36a8>
        29a250:	e1a00006 	mov	r0, r6
        29a254:	e5961068 	ldr	r1, [r6, #104]
        29a258:	e3710001 	cmn	r1, #1	; 0x1
        29a25c:	1a000092 	bne	29a4ac <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x36a8>
        29a260:	e5902014 	ldr	r2, [r0, #20]
        29a264:	e59d102c 	ldr	r1, [sp, #44]
        29a268:	e591101c 	ldr	r1, [r1, #28]
        29a26c:	e1520001 	cmp	r2, r1
        29a270:	aa00008d 	bge	29a4ac <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x36a8>
        29a274:	e590104c 	ldr	r1, [r0, #76]
        29a278:	e59d202c 	ldr	r2, [sp, #44]
        29a27c:	e592204c 	ldr	r2, [r2, #76]
        29a280:	e0412002 	sub	r2, r1, r2
        29a284:	e1b01008 	movs	r1, r8
        29a288:	42811003 	addmi	r1, r1, #3	; 0x3
        29a28c:	e1520141 	cmp	r2, r1, asr #2
        29a290:	aa000085 	bge	29a4ac <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x36a8>
        29a294:	e5b07004 	ldr	r7, [r0, #4]!
        29a298:	e1a00005 	mov	r0, r5
        29a29c:	eb625540 	bl	1b2f7a4 <$LO_GetWorkClassID(void *)>
        29a2a0:	e1a06000 	mov	r6, r0
        29a2a4:	e1a00005 	mov	r0, r5
        29a2a8:	e3a010c8 	mov	r1, #200	; 0xc8
        29a2ac:	eb625541 	bl	1b2f7b8 <$LO_SetWorkClass(void *, unsigned int)>
        29a2b0:	e28d1018 	add	r1, sp, #24	; 0x18
        29a2b4:	e1a00005 	mov	r0, r5
        29a2b8:	eb62553c 	bl	1b2f7b0 <$LO_PickFirst(void *, tag_LOWOBJ **)>
        29a2bc:	e3300000 	teq	r0, #0	; 0x0
        29a2c0:	0a00000e 	beq	29a300 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x34fc>
        29a2c4:	e59d0018 	ldr	r0, [sp, #24]
        29a2c8:	e5901008 	ldr	r1, [r0, #8]
        29a2cc:	e1310009 	teq	r1, r9
        29a2d0:	0590000c 	ldreq	r0, [r0, #12]
        29a2d4:	01300007 	teqeq	r0, r7
        29a2d8:	1a000003 	bne	29a2ec <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x34e8>
        29a2dc:	e1a01006 	mov	r1, r6
        29a2e0:	e1a00005 	mov	r0, r5
        29a2e4:	eb625533 	bl	1b2f7b8 <$LO_SetWorkClass(void *, unsigned int)>
        29a2e8:	ea000110 	b	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a2ec:	e28d1018 	add	r1, sp, #24	; 0x18
        29a2f0:	e1a00005 	mov	r0, r5
        29a2f4:	eb62552e 	bl	1b2f7b4 <$LO_PickNext(void *, tag_LOWOBJ **)>
        29a2f8:	e3300000 	teq	r0, #0	; 0x0
        29a2fc:	1afffff0 	bne	29a2c4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x34c0>
        29a300:	e1a01006 	mov	r1, r6
        29a304:	e1a00005 	mov	r0, r5
        29a308:	eb62552a 	bl	1b2f7b8 <$LO_SetWorkClass(void *, unsigned int)>
        29a30c:	e59b0014 	ldr	r0, [fp, #20]
        29a310:	e59d101c 	ldr	r1, [sp, #28]
        29a314:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        29a318:	e080c100 	add	ip, r0, r0, lsl #2
        29a31c:	e08c0280 	add	r0, ip, r0, lsl #5
        29a320:	e0840100 	add	r0, r4, r0, lsl #2
        29a324:	e5901064 	ldr	r1, [r0, #100]
        29a328:	e3710001 	cmn	r1, #1	; 0x1
        29a32c:	0a000010 	beq	29a374 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3570>
        29a330:	e0812101 	add	r2, r1, r1, lsl #2
        29a334:	e0822281 	add	r2, r2, r1, lsl #5
        29a338:	e1a0c002 	mov	ip, r2
        29a33c:	e0842102 	add	r2, r4, r2, lsl #2
        29a340:	e5923018 	ldr	r3, [r2, #24]
        29a344:	e592e020 	ldr	lr, [r2, #32]
        29a348:	e04ee003 	sub	lr, lr, r3
        29a34c:	e0883fa8 	add	r3, r8, r8, lsr #31
        29a350:	e15e00c3 	cmp	lr, r3, asr #1
        29a354:	aa0000f5 	bge	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a358:	e592301c 	ldr	r3, [r2, #28]
        29a35c:	e5922014 	ldr	r2, [r2, #20]
        29a360:	e0432002 	sub	r2, r3, r2
        29a364:	e0883088 	add	r3, r8, r8, lsl #1
        29a368:	e1520003 	cmp	r2, r3
        29a36c:	aa0000ef 	bge	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a370:	e794910c 	ldr	r9, [r4, ip, lsl #2]
        29a374:	e3710001 	cmn	r1, #1	; 0x1
        29a378:	0a000008 	beq	29a3a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x359c>
        29a37c:	e081c101 	add	ip, r1, r1, lsl #2
        29a380:	e08c1281 	add	r1, ip, r1, lsl #5
        29a384:	e0841101 	add	r1, r4, r1, lsl #2
        29a388:	e5911078 	ldr	r1, [r1, #120]
        29a38c:	e241ce19 	sub	ip, r1, #400	; 0x190
        29a390:	e33c0001 	teq	ip, #1	; 0x1
        29a394:	1241cf7d 	subne	ip, r1, #500	; 0x1f4
        29a398:	133c0001 	teqne	ip, #1	; 0x1
        29a39c:	0a0000e3 	beq	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a3a0:	e5908068 	ldr	r8, [r0, #104]
        29a3a4:	e3780001 	cmn	r8, #1	; 0x1
        29a3a8:	0a00002d 	beq	29a464 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3660>
        29a3ac:	e0881108 	add	r1, r8, r8, lsl #2
        29a3b0:	e0811288 	add	r1, r1, r8, lsl #5
        29a3b4:	e0846101 	add	r6, r4, r1, lsl #2
        29a3b8:	e5961068 	ldr	r1, [r6, #104]
        29a3bc:	e1a0a001 	mov	sl, r1
        29a3c0:	e3710001 	cmn	r1, #1	; 0x1
        29a3c4:	0a000017 	beq	29a428 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3624>
        29a3c8:	e081c101 	add	ip, r1, r1, lsl #2
        29a3cc:	e08c1281 	add	r1, ip, r1, lsl #5
        29a3d0:	e0841101 	add	r1, r4, r1, lsl #2
        29a3d4:	e5913020 	ldr	r3, [r1, #32]
        29a3d8:	e5902020 	ldr	r2, [r0, #32]
        29a3dc:	e0433002 	sub	r3, r3, r2
        29a3e0:	e590c018 	ldr	ip, [r0, #24]
        29a3e4:	e052200c 	subs	r2, r2, ip
        29a3e8:	42822003 	addmi	r2, r2, #3	; 0x3
        29a3ec:	e1530142 	cmp	r3, r2, asr #2
        29a3f0:	ca0000ce 	bgt	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a3f4:	e596201c 	ldr	r2, [r6, #28]
        29a3f8:	e5911014 	ldr	r1, [r1, #20]
        29a3fc:	e0421001 	sub	r1, r2, r1
        29a400:	e52d1004 	str	r1, [sp, -#4]!
        29a404:	e5900014 	ldr	r0, [r0, #20]
        29a408:	e0421000 	sub	r1, r2, r0
        29a40c:	e3a00003 	mov	r0, #3	; 0x3
        29a410:	eb64614a 	bl	1bb2940 <$__rt_sdiv>
        29a414:	e49d1004 	ldr	r1, [sp], #4
        29a418:	e1510000 	cmp	r1, r0
        29a41c:	ba0000c3 	blt	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a420:	e37a0001 	cmn	sl, #1	; 0x1
        29a424:	1a000002 	bne	29a434 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3630>
        29a428:	e5960028 	ldr	r0, [r6, #40]
        29a42c:	e1300007 	teq	r0, r7
        29a430:	0a0000be 	beq	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a434:	e3780001 	cmn	r8, #1	; 0x1
        29a438:	0a000009 	beq	29a464 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3660>
        29a43c:	e37a0001 	cmn	sl, #1	; 0x1
        29a440:	1a000007 	bne	29a464 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3660>
        29a444:	e286105c 	add	r1, r6, #92	; 0x5c
        29a448:	e8910003 	ldmia	r1, {r0, r1}
        29a44c:	e3500000 	cmp	r0, #0	; 0x0
        29a450:	b2800003 	addlt	r0, r0, #3	; 0x3
        29a454:	e1510140 	cmp	r1, r0, asr #2
        29a458:	b5d60010 	ldrltb	r0, [r6, #16]
        29a45c:	b3500016 	cmplt	r0, #22	; 0x16
        29a460:	ba0000b2 	blt	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a464:	e59d1008 	ldr	r1, [sp, #8]
        29a468:	e3310000 	teq	r1, #0	; 0x0
        29a46c:	0a00000c 	beq	29a4a4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x36a0>
        29a470:	e59d0004 	ldr	r0, [sp, #4]
        29a474:	e3300000 	teq	r0, #0	; 0x0
        29a478:	1a000009 	bne	29a4a4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x36a0>
        29a47c:	e59d1008 	ldr	r1, [sp, #8]
        29a480:	e591001c 	ldr	r0, [r1, #28]
        29a484:	e5911048 	ldr	r1, [r1, #72]
        29a488:	e0401001 	sub	r1, r0, r1
        29a48c:	e59d2010 	ldr	r2, [sp, #16]
        29a490:	e5922014 	ldr	r2, [r2, #20]
        29a494:	e0500002 	subs	r0, r0, r2
        29a498:	42800003 	addmi	r0, r0, #3	; 0x3
        29a49c:	e1510140 	cmp	r1, r0, asr #2
        29a4a0:	ba0000a2 	blt	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a4a4:	e3a0300c 	mov	r3, #12	; 0xc
        29a4a8:	ea000095 	b	29a704 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3900>
        29a4ac:	e37a0001 	cmn	sl, #1	; 0x1
        29a4b0:	0a00009e 	beq	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a4b4:	e59d1020 	ldr	r1, [sp, #32]
        29a4b8:	e241ce19 	sub	ip, r1, #400	; 0x190
        29a4bc:	e33c0002 	teq	ip, #2	; 0x2
        29a4c0:	1a00009a 	bne	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a4c4:	e5960048 	ldr	r0, [r6, #72]
        29a4c8:	e596103c 	ldr	r1, [r6, #60]
        29a4cc:	e1510000 	cmp	r1, r0
        29a4d0:	aa000096 	bge	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a4d4:	e5960018 	ldr	r0, [r6, #24]
        29a4d8:	e5961020 	ldr	r1, [r6, #32]
        29a4dc:	e041a000 	sub	sl, r1, r0
        29a4e0:	e0680188 	rsb	r0, r8, r8, lsl #3
        29a4e4:	eb646116 	bl	1bb2944 <$__rt_sdiv10>
        29a4e8:	e15a0000 	cmp	sl, r0
        29a4ec:	aa00008f 	bge	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a4f0:	e5960068 	ldr	r0, [r6, #104]
        29a4f4:	e3700001 	cmn	r0, #1	; 0x1
        29a4f8:	0a00008c 	beq	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a4fc:	e080c100 	add	ip, r0, r0, lsl #2
        29a500:	e08c0280 	add	r0, ip, r0, lsl #5
        29a504:	e084a100 	add	sl, r4, r0, lsl #2
        29a508:	e59a0078 	ldr	r0, [sl, #120]
        29a50c:	e240ce19 	sub	ip, r0, #400	; 0x190
        29a510:	e33c0002 	teq	ip, #2	; 0x2
        29a514:	1240cf4b 	subne	ip, r0, #300	; 0x12c
        29a518:	133c0001 	teqne	ip, #1	; 0x1
        29a51c:	1a000083 	bne	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a520:	e59a103c 	ldr	r1, [sl, #60]
        29a524:	e59a2048 	ldr	r2, [sl, #72]
        29a528:	e1510002 	cmp	r1, r2
        29a52c:	da00007f 	ble	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a530:	e240cf4b 	sub	ip, r0, #300	; 0x12c
        29a534:	e33c0001 	teq	ip, #1	; 0x1
        29a538:	1a000026 	bne	29a5d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x37d4>
        29a53c:	e59a0020 	ldr	r0, [sl, #32]
        29a540:	e59a1018 	ldr	r1, [sl, #24]
        29a544:	e0401001 	sub	r1, r0, r1
        29a548:	e59a2014 	ldr	r2, [sl, #20]
        29a54c:	e59a301c 	ldr	r3, [sl, #28]
        29a550:	e0432002 	sub	r2, r3, r2
        29a554:	e0822082 	add	r2, r2, r2, lsl #1
        29a558:	e1510002 	cmp	r1, r2
        29a55c:	da00001d 	ble	29a5d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x37d4>
        29a560:	e59d2028 	ldr	r2, [sp, #40]
        29a564:	e0407002 	sub	r7, r0, r2
        29a568:	e3a00003 	mov	r0, #3	; 0x3
        29a56c:	eb6460f3 	bl	1bb2940 <$__rt_sdiv>
        29a570:	e1570000 	cmp	r7, r0
        29a574:	da000017 	ble	29a5d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x37d4>
        29a578:	e59a0068 	ldr	r0, [sl, #104]
        29a57c:	e3700001 	cmn	r0, #1	; 0x1
        29a580:	e59a7004 	ldr	r7, [sl, #4]
        29a584:	0a00000f 	beq	29a5c8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x37c4>
        29a588:	e080c100 	add	ip, r0, r0, lsl #2
        29a58c:	e08c0280 	add	r0, ip, r0, lsl #5
        29a590:	e0840100 	add	r0, r4, r0, lsl #2
        29a594:	e5901008 	ldr	r1, [r0, #8]
        29a598:	e3310001 	teq	r1, #1	; 0x1
        29a59c:	1a000009 	bne	29a5c8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x37c4>
        29a5a0:	e5901048 	ldr	r1, [r0, #72]
        29a5a4:	e590203c 	ldr	r2, [r0, #60]
        29a5a8:	e1520001 	cmp	r2, r1
        29a5ac:	aa000005 	bge	29a5c8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x37c4>
        29a5b0:	e5900038 	ldr	r0, [r0, #56]
        29a5b4:	e5ba1038 	ldr	r1, [sl, #56]!
        29a5b8:	e3510000 	cmp	r1, #0	; 0x0
        29a5bc:	b2811003 	addlt	r1, r1, #3	; 0x3
        29a5c0:	e1500141 	cmp	r0, r1, asr #2
        29a5c4:	ca000059 	bgt	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a5c8:	e3a0300d 	mov	r3, #13	; 0xd
        29a5cc:	e3a0201d 	mov	r2, #29	; 0x1d
        29a5d0:	e2822c05 	add	r2, r2, #1280	; 0x500
        29a5d4:	ea00004c 	b	29a70c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3908>
        29a5d8:	e59a7004 	ldr	r7, [sl, #4]
        29a5dc:	e59d102c 	ldr	r1, [sp, #44]
        29a5e0:	e5b10064 	ldr	r0, [r1, #100]!
        29a5e4:	e3700001 	cmn	r0, #1	; 0x1
        29a5e8:	0a000011 	beq	29a634 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3830>
        29a5ec:	e0801100 	add	r1, r0, r0, lsl #2
        29a5f0:	e0811280 	add	r1, r1, r0, lsl #5
        29a5f4:	e1a0c001 	mov	ip, r1
        29a5f8:	e0841101 	add	r1, r4, r1, lsl #2
        29a5fc:	e1a03001 	mov	r3, r1
        29a600:	e5912018 	ldr	r2, [r1, #24]
        29a604:	e591e020 	ldr	lr, [r1, #32]
        29a608:	e04ee002 	sub	lr, lr, r2
        29a60c:	e0882fa8 	add	r2, r8, r8, lsr #31
        29a610:	e15e00c2 	cmp	lr, r2, asr #1
        29a614:	aa000045 	bge	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a618:	e591101c 	ldr	r1, [r1, #28]
        29a61c:	e5b32014 	ldr	r2, [r3, #20]!
        29a620:	e0411002 	sub	r1, r1, r2
        29a624:	e0882088 	add	r2, r8, r8, lsl #1
        29a628:	e1510002 	cmp	r1, r2
        29a62c:	aa00003f 	bge	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a630:	e794910c 	ldr	r9, [r4, ip, lsl #2]
        29a634:	e3700001 	cmn	r0, #1	; 0x1
        29a638:	0a000008 	beq	29a660 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x385c>
        29a63c:	e080c100 	add	ip, r0, r0, lsl #2
        29a640:	e08c0280 	add	r0, ip, r0, lsl #5
        29a644:	e0840100 	add	r0, r4, r0, lsl #2
        29a648:	e5900078 	ldr	r0, [r0, #120]
        29a64c:	e240ce19 	sub	ip, r0, #400	; 0x190
        29a650:	e33c0001 	teq	ip, #1	; 0x1
        29a654:	1240cf7d 	subne	ip, r0, #500	; 0x1f4
        29a658:	133c0001 	teqne	ip, #1	; 0x1
        29a65c:	0a000033 	beq	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a660:	e59a0020 	ldr	r0, [sl, #32]
        29a664:	e59d2028 	ldr	r2, [sp, #40]
        29a668:	e0400002 	sub	r0, r0, r2
        29a66c:	e59d1024 	ldr	r1, [sp, #36]
        29a670:	e3510000 	cmp	r1, #0	; 0x0
        29a674:	b2811003 	addlt	r1, r1, #3	; 0x3
        29a678:	e1500141 	cmp	r0, r1, asr #2
        29a67c:	ca00002b 	bgt	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a680:	e596001c 	ldr	r0, [r6, #28]
        29a684:	e5ba1014 	ldr	r1, [sl, #20]!
        29a688:	e0408001 	sub	r8, r0, r1
        29a68c:	e59d102c 	ldr	r1, [sp, #44]
        29a690:	e5911014 	ldr	r1, [r1, #20]
        29a694:	e0401001 	sub	r1, r0, r1
        29a698:	e3a00003 	mov	r0, #3	; 0x3
        29a69c:	eb6460a7 	bl	1bb2940 <$__rt_sdiv>
        29a6a0:	e1580000 	cmp	r8, r0
        29a6a4:	ba000021 	blt	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a6a8:	e5b60004 	ldr	r0, [r6, #4]!
        29a6ac:	e0600180 	rsb	r0, r0, r0, lsl #3
        29a6b0:	e59b100c 	ldr	r1, [fp, #12]
        29a6b4:	e0816100 	add	r6, r1, r0, lsl #2
        29a6b8:	e286a010 	add	sl, r6, #16	; 0x10
        29a6bc:	e89a0500 	ldmia	sl, {r8, sl}
        29a6c0:	e1a0100a 	mov	r1, sl
        29a6c4:	e1a00008 	mov	r0, r8
        29a6c8:	e246300c 	sub	r3, r6, #12	; 0xc
        29a6cc:	e893000c 	ldmia	r3, {r2, r3}
        29a6d0:	eb625014 	bl	1b2e728 <$GetDirection__FiN31>
        29a6d4:	e58d0014 	str	r0, [sp, #20]
        29a6d8:	e1a0100a 	mov	r1, sl
        29a6dc:	e1a00008 	mov	r0, r8
        29a6e0:	e2866028 	add	r6, r6, #40	; 0x28
        29a6e4:	e9b6000c 	ldmib	r6!, {r2, r3}
        29a6e8:	eb62500e 	bl	1b2e728 <$GetDirection__FiN31>
        29a6ec:	e1a01000 	mov	r1, r0
        29a6f0:	e59d0014 	ldr	r0, [sp, #20]
        29a6f4:	eb625006 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        29a6f8:	e3500000 	cmp	r0, #0	; 0x0
        29a6fc:	ca00000b 	bgt	29a730 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x392c>
        29a700:	e3a0300e 	mov	r3, #14	; 0xe
        29a704:	e3a0201a 	mov	r2, #26	; 0x1a
        29a708:	e2822c05 	add	r2, r2, #1280	; 0x500
        29a70c:	e1a01007 	mov	r1, r7
        29a710:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        29a714:	e1a03009 	mov	r3, r9
        29a718:	e1a00005 	mov	r0, r5
        29a71c:	e3a02f45 	mov	r2, #276	; 0x114
        29a720:	e2822b01 	add	r2, r2, #1024	; 0x400
        29a724:	e59b100c 	ldr	r1, [fp, #12]
        29a728:	eb625418 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        29a72c:	e28dd00c 	add	sp, sp, #12	; 0xc
        29a730:	e59b0014 	ldr	r0, [fp, #20]
        29a734:	e59d101c 	ldr	r1, [sp, #28]
        29a738:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        29a73c:	e080c100 	add	ip, r0, r0, lsl #2
        29a740:	e08c0280 	add	r0, ip, r0, lsl #5
        29a744:	e0841100 	add	r1, r4, r0, lsl #2
        29a748:	e5910064 	ldr	r0, [r1, #100]
        29a74c:	e3700001 	cmn	r0, #1	; 0x1
        29a750:	0a000052 	beq	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a754:	e080c100 	add	ip, r0, r0, lsl #2
        29a758:	e08c0280 	add	r0, ip, r0, lsl #5
        29a75c:	e0840100 	add	r0, r4, r0, lsl #2
        29a760:	e5902064 	ldr	r2, [r0, #100]
        29a764:	e3720001 	cmn	r2, #1	; 0x1
        29a768:	1a00004c 	bne	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a76c:	e5902078 	ldr	r2, [r0, #120]
        29a770:	e242cf4b 	sub	ip, r2, #300	; 0x12c
        29a774:	e33c0001 	teq	ip, #1	; 0x1
        29a778:	1242ce19 	subne	ip, r2, #400	; 0x190
        29a77c:	133c0001 	teqne	ip, #1	; 0x1
        29a780:	1a000046 	bne	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a784:	e590203c 	ldr	r2, [r0, #60]
        29a788:	e5900048 	ldr	r0, [r0, #72]
        29a78c:	e1520000 	cmp	r2, r0
        29a790:	aa000042 	bge	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a794:	e5910068 	ldr	r0, [r1, #104]
        29a798:	e3700001 	cmn	r0, #1	; 0x1
        29a79c:	1a00003f 	bne	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a7a0:	e5b10020 	ldr	r0, [r1, #32]!
        29a7a4:	e59b1024 	ldr	r1, [fp, #36]
        29a7a8:	e0400001 	sub	r0, r0, r1
        29a7ac:	eb5f5404 	bl	1a6f7c4 <$HWRAbs(int)>
        29a7b0:	e1a06000 	mov	r6, r0
        29a7b4:	e3a00003 	mov	r0, #3	; 0x3
        29a7b8:	e59d1000 	ldr	r1, [sp]
        29a7bc:	eb64605f 	bl	1bb2940 <$__rt_sdiv>
        29a7c0:	e1560000 	cmp	r6, r0
        29a7c4:	aa000035 	bge	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a7c8:	e59b0014 	ldr	r0, [fp, #20]
        29a7cc:	e59d101c 	ldr	r1, [sp, #28]
        29a7d0:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        29a7d4:	e080c100 	add	ip, r0, r0, lsl #2
        29a7d8:	e08c0280 	add	r0, ip, r0, lsl #5
        29a7dc:	e0840100 	add	r0, r4, r0, lsl #2
        29a7e0:	e5901088 	ldr	r1, [r0, #136]
        29a7e4:	e5902084 	ldr	r2, [r0, #132]
        29a7e8:	e1320001 	teq	r2, r1
        29a7ec:	1a00002b 	bne	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a7f0:	e590105c 	ldr	r1, [r0, #92]
        29a7f4:	e3510000 	cmp	r1, #0	; 0x0
        29a7f8:	b2811003 	addlt	r1, r1, #3	; 0x3
        29a7fc:	e5902060 	ldr	r2, [r0, #96]
        29a800:	e1520141 	cmp	r2, r1, asr #2
        29a804:	da000025 	ble	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a808:	e59d2010 	ldr	r2, [sp, #16]
        29a80c:	e5921000 	ldr	r1, [r2]
        29a810:	e0611181 	rsb	r1, r1, r1, lsl #3
        29a814:	e59b200c 	ldr	r2, [fp, #12]
        29a818:	e0823101 	add	r3, r2, r1, lsl #2
        29a81c:	e5931014 	ldr	r1, [r3, #20]
        29a820:	e5932010 	ldr	r2, [r3, #16]
        29a824:	e593c02c 	ldr	ip, [r3, #44]
        29a828:	e5933030 	ldr	r3, [r3, #48]
        29a82c:	e59de00c 	ldr	lr, [sp, #12]
        29a830:	e59ee004 	ldr	lr, [lr, #4]
        29a834:	e06ee18e 	rsb	lr, lr, lr, lsl #3
        29a838:	e59b600c 	ldr	r6, [fp, #12]
        29a83c:	e086e10e 	add	lr, r6, lr, lsl #2
        29a840:	e24ee00c 	sub	lr, lr, #12	; 0xc
        29a844:	e89e4040 	ldmia	lr, {r6, lr}
        29a848:	e04ee001 	sub	lr, lr, r1
        29a84c:	e04cc002 	sub	ip, ip, r2
        29a850:	e00e0e9c 	mul	lr, ip, lr
        29a854:	e0422006 	sub	r2, r2, r6
        29a858:	e0431001 	sub	r1, r3, r1
        29a85c:	e031e192 	mlas	r1, r2, r1, lr
        29a860:	4a00000e 	bmi	29a8a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3a9c>
        29a864:	e5900064 	ldr	r0, [r0, #100]
        29a868:	e080c100 	add	ip, r0, r0, lsl #2
        29a86c:	e08c0280 	add	r0, ip, r0, lsl #5
        29a870:	e7940100 	ldr	r0, [r4, r0, lsl #2]
        29a874:	e3a0300f 	mov	r3, #15	; 0xf
        29a878:	e3a02016 	mov	r2, #22	; 0x16
        29a87c:	e2822c05 	add	r2, r2, #1280	; 0x500
        29a880:	e1a01007 	mov	r1, r7
        29a884:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        29a888:	e1a03000 	mov	r3, r0
        29a88c:	e1a00005 	mov	r0, r5
        29a890:	e2422002 	sub	r2, r2, #2	; 0x2
        29a894:	e59b100c 	ldr	r1, [fp, #12]
        29a898:	eb6253bc 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        29a89c:	e28dd00c 	add	sp, sp, #12	; 0xc
        29a8a0:	e3e00000 	mvn	r0, #0	; 0x0
        29a8a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        29a8a8:	e1a0c00d 	mov	ip, sp
        29a8ac:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        29a8b0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        29a8b4:	e24cb014 	sub	fp, ip, #20	; 0x14
        29a8b8:	e1a05002 	mov	r5, r2
        29a8bc:	e1a04003 	mov	r4, r3
        29a8c0:	e59b8018 	ldr	r8, [fp, #24]
        29a8c4:	e24dd068 	sub	sp, sp, #104	; 0x68
        29a8c8:	e5901004 	ldr	r1, [r0, #4]
        29a8cc:	e5906000 	ldr	r6, [r0]
        29a8d0:	e58d100c 	str	r1, [sp, #12]
        29a8d4:	e5901008 	ldr	r1, [r0, #8]
        29a8d8:	e58d1008 	str	r1, [sp, #8]
        29a8dc:	e5901010 	ldr	r1, [r0, #16]
        29a8e0:	e590700c 	ldr	r7, [r0, #12]
        29a8e4:	e58d1004 	str	r1, [sp, #4]
        29a8e8:	e5b01014 	ldr	r1, [r0, #20]!
        29a8ec:	e58d1000 	str	r1, [sp]
        29a8f0:	e0811fa1 	add	r1, r1, r1, lsr #31
        29a8f4:	e1a010c1 	mov	r1, r1, asr #1
        29a8f8:	e5960038 	ldr	r0, [r6, #56]
        29a8fc:	e58d1064 	str	r1, [sp, #100]
        29a900:	e1500001 	cmp	r0, r1
        29a904:	da0000a1 	ble	29ab90 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d8c>
        29a908:	e5960008 	ldr	r0, [r6, #8]
        29a90c:	e3300002 	teq	r0, #2	; 0x2
        29a910:	1a00009e 	bne	29ab90 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d8c>
        29a914:	e3360000 	teq	r6, #0	; 0x0
        29a918:	159d000c 	ldrne	r0, [sp, #12]
        29a91c:	13300000 	teqne	r0, #0	; 0x0
        29a920:	0a00009a 	beq	29ab90 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d8c>
        29a924:	e59d000c 	ldr	r0, [sp, #12]
        29a928:	e5900078 	ldr	r0, [r0, #120]
        29a92c:	e240ce19 	sub	ip, r0, #400	; 0x190
        29a930:	e33c0001 	teq	ip, #1	; 0x1
        29a934:	1240cf4b 	subne	ip, r0, #300	; 0x12c
        29a938:	133c0001 	teqne	ip, #1	; 0x1
        29a93c:	1a000093 	bne	29ab90 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d8c>
        29a940:	e59d000c 	ldr	r0, [sp, #12]
        29a944:	e590203c 	ldr	r2, [r0, #60]
        29a948:	e5900048 	ldr	r0, [r0, #72]
        29a94c:	e1520000 	cmp	r2, r0
        29a950:	aa00008e 	bge	29ab90 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d8c>
        29a954:	e3a00000 	mov	r0, #0	; 0x0
        29a958:	e52d0004 	str	r0, [sp, -#4]!
        29a95c:	e5960020 	ldr	r0, [r6, #32]
        29a960:	e5961018 	ldr	r1, [r6, #24]
        29a964:	e0810000 	add	r0, r1, r0
        29a968:	e0800fa0 	add	r0, r0, r0, lsr #31
        29a96c:	e5961058 	ldr	r1, [r6, #88]
        29a970:	e15100c0 	cmp	r1, r0, asr #1
        29a974:	aa000084 	bge	29ab8c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d88>
        29a978:	e1a09001 	mov	r9, r1
        29a97c:	e596a054 	ldr	sl, [r6, #84]
        29a980:	e59d0010 	ldr	r0, [sp, #16]
        29a984:	e5b03040 	ldr	r3, [r0, #64]!
        29a988:	e5960030 	ldr	r0, [r6, #48]
        29a98c:	e0600180 	rsb	r0, r0, r0, lsl #3
        29a990:	e0850100 	add	r0, r5, r0, lsl #2
        29a994:	e590c010 	ldr	ip, [r0, #16]
        29a998:	e58dc034 	str	ip, [sp, #52]
        29a99c:	e5b0e014 	ldr	lr, [r0, #20]!
        29a9a0:	e04a0002 	sub	r0, sl, r2
        29a9a4:	e00c0090 	mul	ip, r0, r0
        29a9a8:	e0491003 	sub	r1, r9, r3
        29a9ac:	e020c191 	mla	r0, r1, r1, ip
        29a9b0:	e58de02c 	str	lr, [sp, #44]
        29a9b4:	e59dc034 	ldr	ip, [sp, #52]
        29a9b8:	e04a100c 	sub	r1, sl, ip
        29a9bc:	e00c0191 	mul	ip, r1, r1
        29a9c0:	e049100e 	sub	r1, r9, lr
        29a9c4:	e00e0191 	mul	lr, r1, r1
        29a9c8:	e08c100e 	add	r1, ip, lr
        29a9cc:	e0800180 	add	r0, r0, r0, lsl #3
        29a9d0:	e58d1018 	str	r1, [sp, #24]
        29a9d4:	e1500001 	cmp	r0, r1
        29a9d8:	ba00006b 	blt	29ab8c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d88>
        29a9dc:	e1a01009 	mov	r1, r9
        29a9e0:	e1a0000a 	mov	r0, sl
        29a9e4:	eb624f4f 	bl	1b2e728 <$GetDirection__FiN31>
        29a9e8:	e58d0014 	str	r0, [sp, #20]
        29a9ec:	e3500008 	cmp	r0, #8	; 0x8
        29a9f0:	8a000065 	bhi	29ab8c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d88>
        29a9f4:	e1a01009 	mov	r1, r9
        29a9f8:	e1a0000a 	mov	r0, sl
        29a9fc:	e59d2034 	ldr	r2, [sp, #52]
        29aa00:	e59d302c 	ldr	r3, [sp, #44]
        29aa04:	eb624f47 	bl	1b2e728 <$GetDirection__FiN31>
        29aa08:	e1a01000 	mov	r1, r0
        29aa0c:	e59d0014 	ldr	r0, [sp, #20]
        29aa10:	eb624f3f 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        29aa14:	e3500002 	cmp	r0, #2	; 0x2
        29aa18:	ba00005b 	blt	29ab8c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d88>
        29aa1c:	e59d0010 	ldr	r0, [sp, #16]
        29aa20:	e5900000 	ldr	r0, [r0]
        29aa24:	e58d0028 	str	r0, [sp, #40]
        29aa28:	e5960004 	ldr	r0, [r6, #4]
        29aa2c:	e58d0024 	str	r0, [sp, #36]
        29aa30:	e59d000c 	ldr	r0, [sp, #12]
        29aa34:	e3500000 	cmp	r0, #0	; 0x0
        29aa38:	1a000008 	bne	29aa60 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3c5c>
        29aa3c:	e3370000 	teq	r7, #0	; 0x0
        29aa40:	1a000007 	bne	29aa64 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3c60>
        29aa44:	e59d0010 	ldr	r0, [sp, #16]
        29aa48:	e5900038 	ldr	r0, [r0, #56]
        29aa4c:	e0800080 	add	r0, r0, r0, lsl #1
        29aa50:	e5961038 	ldr	r1, [r6, #56]
        29aa54:	e1500081 	cmp	r0, r1, lsl #1
        29aa58:	aa00004b 	bge	29ab8c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d88>
        29aa5c:	ea000018 	b	29aac4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3cc0>
        29aa60:	1a00001a 	bne	29aad0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3ccc>
        29aa64:	e3370000 	teq	r7, #0	; 0x0
        29aa68:	0a000018 	beq	29aad0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3ccc>
        29aa6c:	e59d0008 	ldr	r0, [sp, #8]
        29aa70:	e3300000 	teq	r0, #0	; 0x0
        29aa74:	05970078 	ldreq	r0, [r7, #120]
        29aa78:	0240cf4b 	subeq	ip, r0, #300	; 0x12c
        29aa7c:	033c0001 	teqeq	ip, #1	; 0x1
        29aa80:	1a000012 	bne	29aad0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3ccc>
        29aa84:	e597005c 	ldr	r0, [r7, #92]
        29aa88:	e0800180 	add	r0, r0, r0, lsl #3
        29aa8c:	e59d1018 	ldr	r1, [sp, #24]
        29aa90:	e1500001 	cmp	r0, r1
        29aa94:	aa00000d 	bge	29aad0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3ccc>
        29aa98:	e1a03009 	mov	r3, r9
        29aa9c:	e1a0200a 	mov	r2, sl
        29aaa0:	e59d0034 	ldr	r0, [sp, #52]
        29aaa4:	e59d102c 	ldr	r1, [sp, #44]
        29aaa8:	eb624f1e 	bl	1b2e728 <$GetDirection__FiN31>
        29aaac:	e1a01000 	mov	r1, r0
        29aab0:	e5d70010 	ldrb	r0, [r7, #16]
        29aab4:	eb624f16 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        29aab8:	eb5f5341 	bl	1a6f7c4 <$HWRAbs(int)>
        29aabc:	e3500001 	cmp	r0, #1	; 0x1
        29aac0:	ca000031 	bgt	29ab8c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d88>
        29aac4:	e3a00001 	mov	r0, #1	; 0x1
        29aac8:	e58d0000 	str	r0, [sp]
        29aacc:	ea000002 	b	29aadc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3cd8>
        29aad0:	e59d0000 	ldr	r0, [sp]
        29aad4:	e3300000 	teq	r0, #0	; 0x0
        29aad8:	0a00002b 	beq	29ab8c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d88>
        29aadc:	e5960080 	ldr	r0, [r6, #128]
        29aae0:	e59b1020 	ldr	r1, [fp, #32]
        29aae4:	e2411001 	sub	r1, r1, #1	; 0x1
        29aae8:	e1500001 	cmp	r0, r1
        29aaec:	aa00001c 	bge	29ab64 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d60>
        29aaf0:	e0880100 	add	r0, r8, r0, lsl #2
        29aaf4:	e5900004 	ldr	r0, [r0, #4]
        29aaf8:	e080c100 	add	ip, r0, r0, lsl #2
        29aafc:	e08c0280 	add	r0, ip, r0, lsl #5
        29ab00:	e0840100 	add	r0, r4, r0, lsl #2
        29ab04:	e1a09000 	mov	r9, r0
        29ab08:	e5900078 	ldr	r0, [r0, #120]
        29ab0c:	e240cf4b 	sub	ip, r0, #300	; 0x12c
        29ab10:	e33c0001 	teq	ip, #1	; 0x1
        29ab14:	1240ce19 	subne	ip, r0, #400	; 0x190
        29ab18:	133c0001 	teqne	ip, #1	; 0x1
        29ab1c:	1240ce19 	subne	ip, r0, #400	; 0x190
        29ab20:	133c0002 	teqne	ip, #2	; 0x2
        29ab24:	1a00000e 	bne	29ab64 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d60>
        29ab28:	e5990038 	ldr	r0, [r9, #56]
        29ab2c:	e5991034 	ldr	r1, [r9, #52]
        29ab30:	e1510000 	cmp	r1, r0
        29ab34:	da00000a 	ble	29ab64 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d60>
        29ab38:	e5993004 	ldr	r3, [r9, #4]
        29ab3c:	e92d0008 	stmdb	sp!, {r3}
        29ab40:	e5962004 	ldr	r2, [r6, #4]
        29ab44:	e5993000 	ldr	r3, [r9]
        29ab48:	e1a00005 	mov	r0, r5
        29ab4c:	e5961000 	ldr	r1, [r6]
        29ab50:	eb6246af 	bl	1b2c614 <$CheckQIntersec__FP13tag_wapx_typeiN32>
        29ab54:	e28dd004 	add	sp, sp, #4	; 0x4
        29ab58:	e3300000 	teq	r0, #0	; 0x0
        29ab5c:	15990004 	ldrne	r0, [r9, #4]
        29ab60:	158d0024 	strne	r0, [sp, #36]
        29ab64:	e59d0000 	ldr	r0, [sp]
        29ab68:	e3300000 	teq	r0, #0	; 0x0
        29ab6c:	0a000006 	beq	29ab8c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3d88>
        29ab70:	e3a03000 	mov	r3, #0	; 0x0
        29ab74:	e3a0201b 	mov	r2, #27	; 0x1b
        29ab78:	e2822c05 	add	r2, r2, #1280	; 0x500
        29ab7c:	e59d1024 	ldr	r1, [sp, #36]
        29ab80:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        29ab84:	e59d3034 	ldr	r3, [sp, #52]
        29ab88:	ea00034a 	b	29b8b8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4ab4>
        29ab8c:	e28dd004 	add	sp, sp, #4	; 0x4
        29ab90:	e59b0038 	ldr	r0, [fp, #56]
        29ab94:	e59b2034 	ldr	r2, [fp, #52]
        29ab98:	e1320000 	teq	r2, r0
        29ab9c:	1a000394 	bne	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29aba0:	e59b9034 	ldr	r9, [fp, #52]
        29aba4:	e7980109 	ldr	r0, [r8, r9, lsl #2]
        29aba8:	e080c100 	add	ip, r0, r0, lsl #2
        29abac:	e08c0280 	add	r0, ip, r0, lsl #5
        29abb0:	e7941100 	ldr	r1, [r4, r0, lsl #2]
        29abb4:	e0840100 	add	r0, r4, r0, lsl #2
        29abb8:	e58d1024 	str	r1, [sp, #36]
        29abbc:	e5901004 	ldr	r1, [r0, #4]
        29abc0:	e58d1020 	str	r1, [sp, #32]
        29abc4:	e5901020 	ldr	r1, [r0, #32]
        29abc8:	e1a0a001 	mov	sl, r1
        29abcc:	e5900018 	ldr	r0, [r0, #24]
        29abd0:	e0411000 	sub	r1, r1, r0
        29abd4:	e58d101c 	str	r1, [sp, #28]
        29abd8:	e3a00003 	mov	r0, #3	; 0x3
        29abdc:	e59d1000 	ldr	r1, [sp]
        29abe0:	eb645f56 	bl	1bb2940 <$__rt_sdiv>
        29abe4:	e59d101c 	ldr	r1, [sp, #28]
        29abe8:	e1500001 	cmp	r0, r1
        29abec:	ba00000b 	blt	29ac20 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3e1c>
        29abf0:	e59d0064 	ldr	r0, [sp, #100]
        29abf4:	e59d101c 	ldr	r1, [sp, #28]
        29abf8:	e1500001 	cmp	r0, r1
        29abfc:	aa00037c 	bge	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29ac00:	e59b0030 	ldr	r0, [fp, #48]
        29ac04:	e04a0000 	sub	r0, sl, r0
        29ac08:	eb5f52ed 	bl	1a6f7c4 <$HWRAbs(int)>
        29ac0c:	e59d1000 	ldr	r1, [sp]
        29ac10:	e3510000 	cmp	r1, #0	; 0x0
        29ac14:	b2811003 	addlt	r1, r1, #3	; 0x3
        29ac18:	e1500141 	cmp	r0, r1, asr #2
        29ac1c:	aa000374 	bge	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29ac20:	e7980109 	ldr	r0, [r8, r9, lsl #2]
        29ac24:	e080c100 	add	ip, r0, r0, lsl #2
        29ac28:	e08c0280 	add	r0, ip, r0, lsl #5
        29ac2c:	e58d0060 	str	r0, [sp, #96]
        29ac30:	e084a100 	add	sl, r4, r0, lsl #2
        29ac34:	e59a0064 	ldr	r0, [sl, #100]
        29ac38:	e3700001 	cmn	r0, #1	; 0x1
        29ac3c:	059a0068 	ldreq	r0, [sl, #104]
        29ac40:	03700001 	cmneq	r0, #1	; 0x1
        29ac44:	1a00016e 	bne	29b204 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4400>
        29ac48:	e59a0084 	ldr	r0, [sl, #132]
        29ac4c:	e0600180 	rsb	r0, r0, r0, lsl #3
        29ac50:	e59b1014 	ldr	r1, [fp, #20]
        29ac54:	e0811100 	add	r1, r1, r0, lsl #2
        29ac58:	e58d105c 	str	r1, [sp, #92]
        29ac5c:	e5911014 	ldr	r1, [r1, #20]
        29ac60:	e3a00019 	mov	r0, #25	; 0x19
        29ac64:	eb645f35 	bl	1bb2940 <$__rt_sdiv>
        29ac68:	e59d105c 	ldr	r1, [sp, #92]
        29ac6c:	e5911018 	ldr	r1, [r1, #24]
        29ac70:	e1510000 	cmp	r1, r0
        29ac74:	ba00035e 	blt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29ac78:	e2890001 	add	r0, r9, #1	; 0x1
        29ac7c:	e58d0058 	str	r0, [sp, #88]
        29ac80:	e59b2034 	ldr	r2, [fp, #52]
        29ac84:	e0882102 	add	r2, r8, r2, lsl #2
        29ac88:	e59b1020 	ldr	r1, [fp, #32]
        29ac8c:	e1500001 	cmp	r0, r1
        29ac90:	e58d2054 	str	r2, [sp, #84]
        29ac94:	aa00002e 	bge	29ad54 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3f50>
        29ac98:	e59d2054 	ldr	r2, [sp, #84]
        29ac9c:	e5b20004 	ldr	r0, [r2, #4]!
        29aca0:	e080c100 	add	ip, r0, r0, lsl #2
        29aca4:	e08c0280 	add	r0, ip, r0, lsl #5
        29aca8:	e0841100 	add	r1, r4, r0, lsl #2
        29acac:	e58d1050 	str	r1, [sp, #80]
        29acb0:	e5b10078 	ldr	r0, [r1, #120]!
        29acb4:	e240ce19 	sub	ip, r0, #400	; 0x190
        29acb8:	e33c0002 	teq	ip, #2	; 0x2
        29acbc:	1a000024 	bne	29ad54 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3f50>
        29acc0:	e59d1050 	ldr	r1, [sp, #80]
        29acc4:	e5b1001c 	ldr	r0, [r1, #28]!
        29acc8:	e59a1014 	ldr	r1, [sl, #20]
        29accc:	e1500001 	cmp	r0, r1
        29acd0:	da00001f 	ble	29ad54 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3f50>
        29acd4:	e59a0020 	ldr	r0, [sl, #32]
        29acd8:	e59d1050 	ldr	r1, [sp, #80]
        29acdc:	e5911020 	ldr	r1, [r1, #32]
        29ace0:	e0400001 	sub	r0, r0, r1
        29ace4:	e59d101c 	ldr	r1, [sp, #28]
        29ace8:	e3510000 	cmp	r1, #0	; 0x0
        29acec:	b2811003 	addlt	r1, r1, #3	; 0x3
        29acf0:	e1500141 	cmp	r0, r1, asr #2
        29acf4:	da000016 	ble	29ad54 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3f50>
        29acf8:	e59d001c 	ldr	r0, [sp, #28]
        29acfc:	e0010090 	mul	r1, r0, r0
        29ad00:	e3a00019 	mov	r0, #25	; 0x19
        29ad04:	eb645f0d 	bl	1bb2940 <$__rt_sdiv>
        29ad08:	e59a103c 	ldr	r1, [sl, #60]
        29ad0c:	e59d2050 	ldr	r2, [sp, #80]
        29ad10:	e592203c 	ldr	r2, [r2, #60]
        29ad14:	e0411002 	sub	r1, r1, r2
        29ad18:	e0030191 	mul	r3, r1, r1
        29ad1c:	e59a2040 	ldr	r2, [sl, #64]
        29ad20:	e59d1050 	ldr	r1, [sp, #80]
        29ad24:	e5911040 	ldr	r1, [r1, #64]
        29ad28:	e0421001 	sub	r1, r2, r1
        29ad2c:	e0020191 	mul	r2, r1, r1
        29ad30:	e0831002 	add	r1, r3, r2
        29ad34:	e1510000 	cmp	r1, r0
        29ad38:	aa000005 	bge	29ad54 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3f50>
        29ad3c:	e59d1050 	ldr	r1, [sp, #80]
        29ad40:	e5911004 	ldr	r1, [r1, #4]
        29ad44:	e3a03010 	mov	r3, #16	; 0x10
        29ad48:	e3a0201d 	mov	r2, #29	; 0x1d
        29ad4c:	e2822c05 	add	r2, r2, #1280	; 0x500
        29ad50:	ea0001df 	b	29b4d4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46d0>
        29ad54:	e59d0058 	ldr	r0, [sp, #88]
        29ad58:	e59b1020 	ldr	r1, [fp, #32]
        29ad5c:	e1500001 	cmp	r0, r1
        29ad60:	aa000037 	bge	29ae44 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4040>
        29ad64:	e59d2054 	ldr	r2, [sp, #84]
        29ad68:	e5b20004 	ldr	r0, [r2, #4]!
        29ad6c:	e080c100 	add	ip, r0, r0, lsl #2
        29ad70:	e08c0280 	add	r0, ip, r0, lsl #5
        29ad74:	e0840100 	add	r0, r4, r0, lsl #2
        29ad78:	e58d004c 	str	r0, [sp, #76]
        29ad7c:	e5901020 	ldr	r1, [r0, #32]
        29ad80:	e5903018 	ldr	r3, [r0, #24]
        29ad84:	e0411003 	sub	r1, r1, r3
        29ad88:	e590201c 	ldr	r2, [r0, #28]
        29ad8c:	e5900014 	ldr	r0, [r0, #20]
        29ad90:	e0420000 	sub	r0, r2, r0
        29ad94:	e081c081 	add	ip, r1, r1, lsl #1
        29ad98:	e1a0200c 	mov	r2, ip
        29ad9c:	e08ccfac 	add	ip, ip, ip, lsr #31
        29ada0:	e15000cc 	cmp	r0, ip, asr #1
        29ada4:	da000026 	ble	29ae44 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4040>
        29ada8:	e59dc04c 	ldr	ip, [sp, #76]
        29adac:	e59cc068 	ldr	ip, [ip, #104]
        29adb0:	e37c0001 	cmn	ip, #1	; 0x1
        29adb4:	1a000022 	bne	29ae44 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4040>
        29adb8:	e1520000 	cmp	r2, r0
        29adbc:	aa000006 	bge	29addc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3fd8>
        29adc0:	e59a2018 	ldr	r2, [sl, #24]
        29adc4:	e0432002 	sub	r2, r3, r2
        29adc8:	e59a3038 	ldr	r3, [sl, #56]
        29adcc:	e3530000 	cmp	r3, #0	; 0x0
        29add0:	b2833003 	addlt	r3, r3, #3	; 0x3
        29add4:	e1520143 	cmp	r2, r3, asr #2
        29add8:	ca000019 	bgt	29ae44 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4040>
        29addc:	e0020191 	mul	r2, r1, r1
        29ade0:	e0212090 	mla	r1, r0, r0, r2
        29ade4:	e59dc04c 	ldr	ip, [sp, #76]
        29ade8:	e5bc003c 	ldr	r0, [ip, #60]!
        29adec:	e5bc200c 	ldr	r2, [ip, #12]!
        29adf0:	e1500002 	cmp	r0, r2
        29adf4:	b1a02000 	movlt	r2, r0
        29adf8:	e59dc04c 	ldr	ip, [sp, #76]
        29adfc:	a5bc004c 	ldrge	r0, [ip, #76]!
        29ae00:	b5bc0040 	ldrlt	r0, [ip, #64]!
        29ae04:	e59a303c 	ldr	r3, [sl, #60]
        29ae08:	e0422003 	sub	r2, r2, r3
        29ae0c:	e0030292 	mul	r3, r2, r2
        29ae10:	e5ba2040 	ldr	r2, [sl, #64]!
        29ae14:	e0402002 	sub	r2, r0, r2
        29ae18:	e02a3292 	mla	sl, r2, r2, r3
        29ae1c:	e3a00009 	mov	r0, #9	; 0x9
        29ae20:	eb645ec6 	bl	1bb2940 <$__rt_sdiv>
        29ae24:	e150000a 	cmp	r0, sl
        29ae28:	da000005 	ble	29ae44 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4040>
        29ae2c:	e59d004c 	ldr	r0, [sp, #76]
        29ae30:	e3a03011 	mov	r3, #17	; 0x11
        29ae34:	e3a02019 	mov	r2, #25	; 0x19
        29ae38:	e2822c05 	add	r2, r2, #1280	; 0x500
        29ae3c:	e5b01004 	ldr	r1, [r0, #4]!
        29ae40:	ea0001a3 	b	29b4d4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46d0>
        29ae44:	e59d0060 	ldr	r0, [sp, #96]
        29ae48:	e7940100 	ldr	r0, [r4, r0, lsl #2]
        29ae4c:	e2801001 	add	r1, r0, #1	; 0x1
        29ae50:	e59b201c 	ldr	r2, [fp, #28]
        29ae54:	e082c102 	add	ip, r2, r2, lsl #2
        29ae58:	e08c2282 	add	r2, ip, r2, lsl #5
        29ae5c:	e0842102 	add	r2, r4, r2, lsl #2
        29ae60:	e5122090 	ldr	r2, [r2, -#144]
        29ae64:	e1510002 	cmp	r1, r2
        29ae68:	ca00000f 	bgt	29aeac <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x40a8>
        29ae6c:	e0600180 	rsb	r0, r0, r0, lsl #3
        29ae70:	e0853100 	add	r3, r5, r0, lsl #2
        29ae74:	e283102c 	add	r1, r3, #44	; 0x2c
        29ae78:	e8910003 	ldmia	r1, {r0, r1}
        29ae7c:	e2833010 	add	r3, r3, #16	; 0x10
        29ae80:	e893000c 	ldmia	r3, {r2, r3}
        29ae84:	eb624e27 	bl	1b2e728 <$GetDirection__FiN31>
        29ae88:	e3500003 	cmp	r0, #3	; 0x3
        29ae8c:	8a000006 	bhi	29aeac <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x40a8>
        29ae90:	e7980109 	ldr	r0, [r8, r9, lsl #2]
        29ae94:	e080c100 	add	ip, r0, r0, lsl #2
        29ae98:	e08c0280 	add	r0, ip, r0, lsl #5
        29ae9c:	e0840100 	add	r0, r4, r0, lsl #2
        29aea0:	e5900028 	ldr	r0, [r0, #40]
        29aea4:	e59d1020 	ldr	r1, [sp, #32]
        29aea8:	ea0002d1 	b	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29aeac:	e7980109 	ldr	r0, [r8, r9, lsl #2]
        29aeb0:	e080c100 	add	ip, r0, r0, lsl #2
        29aeb4:	e08c0280 	add	r0, ip, r0, lsl #5
        29aeb8:	e084a100 	add	sl, r4, r0, lsl #2
        29aebc:	e59a0084 	ldr	r0, [sl, #132]
        29aec0:	e0600180 	rsb	r0, r0, r0, lsl #3
        29aec4:	e59b1014 	ldr	r1, [fp, #20]
        29aec8:	e0810100 	add	r0, r1, r0, lsl #2
        29aecc:	e9b00006 	ldmib	r0!, {r1, r2}
        29aed0:	e0420001 	sub	r0, r2, r1
        29aed4:	e2800001 	add	r0, r0, #1	; 0x1
        29aed8:	e58d0018 	str	r0, [sp, #24]
        29aedc:	e3500004 	cmp	r0, #4	; 0x4
        29aee0:	ba000070 	blt	29b0a8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x42a4>
        29aee4:	e59d0018 	ldr	r0, [sp, #24]
        29aee8:	e3500014 	cmp	r0, #20	; 0x14
        29aeec:	aa00006d 	bge	29b0a8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x42a4>
        29aef0:	e24dd0b0 	sub	sp, sp, #176	; 0xb0
        29aef4:	e3a06000 	mov	r6, #0	; 0x0
        29aef8:	e1a0300d 	mov	r3, sp
        29aefc:	e1a00005 	mov	r0, r5
        29af00:	eb6245d5 	bl	1b2c65c <$ComposeTrace__FP13tag_wapx_typeiT2P14tag_WORD_TRACE>
        29af04:	e59d20c8 	ldr	r2, [sp, #200]
        29af08:	e1a0000d 	mov	r0, sp
        29af0c:	e3a01001 	mov	r1, #1	; 0x1
        29af10:	eb625e82 	bl	1b32920 <$v_MostFarFromChord__FP14tag_WORD_TRACEiT2>
        29af14:	e1a01000 	mov	r1, r0
        29af18:	e79d0180 	ldr	r0, [sp, r0, lsl #3]
        29af1c:	e1a00840 	mov	r0, r0, asr #16
        29af20:	e08d7181 	add	r7, sp, r1, lsl #3
        29af24:	e5971002 	ldr	r1, [r7, #2]
        29af28:	e1a01841 	mov	r1, r1, asr #16
        29af2c:	e59d2008 	ldr	r2, [sp, #8]
        29af30:	e1a02842 	mov	r2, r2, asr #16
        29af34:	e59d300a 	ldr	r3, [sp, #10]
        29af38:	e1a03843 	mov	r3, r3, asr #16
        29af3c:	eb624df9 	bl	1b2e728 <$GetDirection__FiN31>
        29af40:	e59d1108 	ldr	r1, [sp, #264]
        29af44:	e59b2020 	ldr	r2, [fp, #32]
        29af48:	e1510002 	cmp	r1, r2
        29af4c:	aa00001c 	bge	29afc4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x41c0>
        29af50:	e59d2104 	ldr	r2, [sp, #260]
        29af54:	e5b21004 	ldr	r1, [r2, #4]!
        29af58:	e081c101 	add	ip, r1, r1, lsl #2
        29af5c:	e08c1281 	add	r1, ip, r1, lsl #5
        29af60:	e0841101 	add	r1, r4, r1, lsl #2
        29af64:	e5912014 	ldr	r2, [r1, #20]
        29af68:	e591c01c 	ldr	ip, [r1, #28]
        29af6c:	e04ce002 	sub	lr, ip, r2
        29af70:	e5913018 	ldr	r3, [r1, #24]
        29af74:	e591c020 	ldr	ip, [r1, #32]
        29af78:	e04c3003 	sub	r3, ip, r3
        29af7c:	e15e0003 	cmp	lr, r3
        29af80:	da00000f 	ble	29afc4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x41c0>
        29af84:	e5913078 	ldr	r3, [r1, #120]
        29af88:	e243cf4b 	sub	ip, r3, #300	; 0x12c
        29af8c:	e33c0001 	teq	ip, #1	; 0x1
        29af90:	1a00000b 	bne	29afc4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x41c0>
        29af94:	e7983109 	ldr	r3, [r8, r9, lsl #2]
        29af98:	e083c103 	add	ip, r3, r3, lsl #2
        29af9c:	e08c3283 	add	r3, ip, r3, lsl #5
        29afa0:	e0843103 	add	r3, r4, r3, lsl #2
        29afa4:	e593301c 	ldr	r3, [r3, #28]
        29afa8:	e1520003 	cmp	r2, r3
        29afac:	aa000004 	bge	29afc4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x41c0>
        29afb0:	e5912068 	ldr	r2, [r1, #104]
        29afb4:	e3720001 	cmn	r2, #1	; 0x1
        29afb8:	03a06001 	moveq	r6, #1	; 0x1
        29afbc:	05911004 	ldreq	r1, [r1, #4]
        29afc0:	058d10d0 	streq	r1, [sp, #208]
        29afc4:	e3500005 	cmp	r0, #5	; 0x5
        29afc8:	3a000001 	bcc	29afd4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x41d0>
        29afcc:	e3500006 	cmp	r0, #6	; 0x6
        29afd0:	9a000003 	bls	29afe4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x41e0>
        29afd4:	e3360000 	teq	r6, #0	; 0x0
        29afd8:	0a000005 	beq	29aff4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x41f0>
        29afdc:	e3500002 	cmp	r0, #2	; 0x2
        29afe0:	3a000001 	bcc	29afec <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x41e8>
        29afe4:	e3a03012 	mov	r3, #18	; 0x12
        29afe8:	ea00001b 	b	29b05c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4258>
        29afec:	e3360000 	teq	r6, #0	; 0x0
        29aff0:	1a000024 	bne	29b088 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4284>
        29aff4:	e3500002 	cmp	r0, #2	; 0x2
        29aff8:	3a000022 	bcc	29b088 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4284>
        29affc:	e7980109 	ldr	r0, [r8, r9, lsl #2]
        29b000:	e080c100 	add	ip, r0, r0, lsl #2
        29b004:	e08c0280 	add	r0, ip, r0, lsl #5
        29b008:	e0840100 	add	r0, r4, r0, lsl #2
        29b00c:	e1a02000 	mov	r2, r0
        29b010:	e5901020 	ldr	r1, [r0, #32]
        29b014:	e5900018 	ldr	r0, [r0, #24]
        29b018:	e0411000 	sub	r1, r1, r0
        29b01c:	e597300a 	ldr	r3, [r7, #10]
        29b020:	e1a03843 	mov	r3, r3, asr #16
        29b024:	e597c002 	ldr	ip, [r7, #2]
        29b028:	e043384c 	sub	r3, r3, ip, asr #16
        29b02c:	e1510083 	cmp	r1, r3, lsl #1
        29b030:	aa000014 	bge	29b088 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4284>
        29b034:	e5922028 	ldr	r2, [r2, #40]
        29b038:	e0622182 	rsb	r2, r2, r2, lsl #3
        29b03c:	e0852102 	add	r2, r5, r2, lsl #2
        29b040:	e5922014 	ldr	r2, [r2, #20]
        29b044:	e0426000 	sub	r6, r2, r0
        29b048:	e3a00003 	mov	r0, #3	; 0x3
        29b04c:	eb645e3b 	bl	1bb2940 <$__rt_sdiv>
        29b050:	e1560000 	cmp	r6, r0
        29b054:	aa00000b 	bge	29b088 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4284>
        29b058:	e3a03013 	mov	r3, #19	; 0x13
        29b05c:	e3a0201b 	mov	r2, #27	; 0x1b
        29b060:	e2822c05 	add	r2, r2, #1280	; 0x500
        29b064:	e59d10d0 	ldr	r1, [sp, #208]
        29b068:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        29b06c:	e1a01005 	mov	r1, r5
        29b070:	e59d30e0 	ldr	r3, [sp, #224]
        29b074:	e2422007 	sub	r2, r2, #7	; 0x7
        29b078:	e59b0008 	ldr	r0, [fp, #8]
        29b07c:	eb6251c3 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        29b080:	e28dd00c 	add	sp, sp, #12	; 0xc
        29b084:	ea000005 	b	29b0a0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x429c>
        29b088:	e7980109 	ldr	r0, [r8, r9, lsl #2]
        29b08c:	e080c100 	add	ip, r0, r0, lsl #2
        29b090:	e08c0280 	add	r0, ip, r0, lsl #5
        29b094:	e0840100 	add	r0, r4, r0, lsl #2
        29b098:	e5900028 	ldr	r0, [r0, #40]
        29b09c:	e59d10d0 	ldr	r1, [sp, #208]
        29b0a0:	e28dd0b0 	add	sp, sp, #176	; 0xb0
        29b0a4:	ea000252 	b	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b0a8:	e59d0058 	ldr	r0, [sp, #88]
        29b0ac:	e59b1020 	ldr	r1, [fp, #32]
        29b0b0:	e1500001 	cmp	r0, r1
        29b0b4:	aa000014 	bge	29b10c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4308>
        29b0b8:	e59d2054 	ldr	r2, [sp, #84]
        29b0bc:	e5b20004 	ldr	r0, [r2, #4]!
        29b0c0:	e080c100 	add	ip, r0, r0, lsl #2
        29b0c4:	e08c0280 	add	r0, ip, r0, lsl #5
        29b0c8:	e0840100 	add	r0, r4, r0, lsl #2
        29b0cc:	e5901014 	ldr	r1, [r0, #20]
        29b0d0:	e590301c 	ldr	r3, [r0, #28]
        29b0d4:	e043c001 	sub	ip, r3, r1
        29b0d8:	e5902018 	ldr	r2, [r0, #24]
        29b0dc:	e5903020 	ldr	r3, [r0, #32]
        29b0e0:	e0432002 	sub	r2, r3, r2
        29b0e4:	e15c0002 	cmp	ip, r2
        29b0e8:	da000007 	ble	29b10c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4308>
        29b0ec:	e5902078 	ldr	r2, [r0, #120]
        29b0f0:	e242cf4b 	sub	ip, r2, #300	; 0x12c
        29b0f4:	e33c0001 	teq	ip, #1	; 0x1
        29b0f8:	1a000003 	bne	29b10c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4308>
        29b0fc:	e59a201c 	ldr	r2, [sl, #28]
        29b100:	e1510002 	cmp	r1, r2
        29b104:	b5b01004 	ldrlt	r1, [r0, #4]!
        29b108:	b58d1020 	strlt	r1, [sp, #32]
        29b10c:	e59a0018 	ldr	r0, [sl, #24]
        29b110:	e59a1020 	ldr	r1, [sl, #32]
        29b114:	e0410000 	sub	r0, r1, r0
        29b118:	e2591001 	subs	r1, r9, #1	; 0x1
        29b11c:	4a00001b 	bmi	29b190 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x438c>
        29b120:	e59d2054 	ldr	r2, [sp, #84]
        29b124:	e5321004 	ldr	r1, [r2, -#4]!
        29b128:	e0819101 	add	r9, r1, r1, lsl #2
        29b12c:	e0899281 	add	r9, r9, r1, lsl #5
        29b130:	e0848109 	add	r8, r4, r9, lsl #2
        29b134:	e5981074 	ldr	r1, [r8, #116]
        29b138:	e3310f4b 	teq	r1, #300	; 0x12c
        29b13c:	1a000013 	bne	29b190 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x438c>
        29b140:	e5981038 	ldr	r1, [r8, #56]
        29b144:	e5982034 	ldr	r2, [r8, #52]
        29b148:	e1510002 	cmp	r1, r2
        29b14c:	c1500081 	cmpgt	r0, r1, lsl #1
        29b150:	da00000e 	ble	29b190 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x438c>
        29b154:	e598005c 	ldr	r0, [r8, #92]
        29b158:	e1a01100 	mov	r1, r0, lsl #2
        29b15c:	e3a00009 	mov	r0, #9	; 0x9
        29b160:	eb645df6 	bl	1bb2940 <$__rt_sdiv>
        29b164:	e598103c 	ldr	r1, [r8, #60]
        29b168:	e59a203c 	ldr	r2, [sl, #60]
        29b16c:	e0412002 	sub	r2, r1, r2
        29b170:	e0010292 	mul	r1, r2, r2
        29b174:	e5b82040 	ldr	r2, [r8, #64]!
        29b178:	e5ba3040 	ldr	r3, [sl, #64]!
        29b17c:	e0423003 	sub	r3, r2, r3
        29b180:	e0211393 	mla	r1, r3, r3, r1
        29b184:	e1510000 	cmp	r1, r0
        29b188:	b7941109 	ldrlt	r1, [r4, r9, lsl #2]
        29b18c:	b58d1024 	strlt	r1, [sp, #36]
        29b190:	e3360000 	teq	r6, #0	; 0x0
        29b194:	0a000015 	beq	29b1f0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x43ec>
        29b198:	e59d000c 	ldr	r0, [sp, #12]
        29b19c:	e3300000 	teq	r0, #0	; 0x0
        29b1a0:	03370000 	teqeq	r7, #0	; 0x0
        29b1a4:	1a000011 	bne	29b1f0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x43ec>
        29b1a8:	e286103c 	add	r1, r6, #60	; 0x3c
        29b1ac:	e8910003 	ldmia	r1, {r0, r1}
        29b1b0:	e5964058 	ldr	r4, [r6, #88]
        29b1b4:	e5967054 	ldr	r7, [r6, #84]
        29b1b8:	e5968048 	ldr	r8, [r6, #72]
        29b1bc:	e596604c 	ldr	r6, [r6, #76]
        29b1c0:	e1a03004 	mov	r3, r4
        29b1c4:	e1a02007 	mov	r2, r7
        29b1c8:	eb624d56 	bl	1b2e728 <$GetDirection__FiN31>
        29b1cc:	e1a09000 	mov	r9, r0
        29b1d0:	e1a03006 	mov	r3, r6
        29b1d4:	e1a02008 	mov	r2, r8
        29b1d8:	e1a01004 	mov	r1, r4
        29b1dc:	e1a00007 	mov	r0, r7
        29b1e0:	eb624d50 	bl	1b2e728 <$GetDirection__FiN31>
        29b1e4:	e359000e 	cmp	r9, #14	; 0xe
        29b1e8:	23500007 	cmpcs	r0, #7	; 0x7
        29b1ec:	3a000200 	bcc	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b1f0:	e3a03014 	mov	r3, #20	; 0x14
        29b1f4:	e3a0201b 	mov	r2, #27	; 0x1b
        29b1f8:	e2822c05 	add	r2, r2, #1280	; 0x500
        29b1fc:	e59d1020 	ldr	r1, [sp, #32]
        29b200:	ea0000b3 	b	29b4d4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46d0>
        29b204:	e59a0068 	ldr	r0, [sl, #104]
        29b208:	e3700001 	cmn	r0, #1	; 0x1
        29b20c:	0a0001f8 	beq	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b210:	e080c100 	add	ip, r0, r0, lsl #2
        29b214:	e08c0280 	add	r0, ip, r0, lsl #5
        29b218:	e0840100 	add	r0, r4, r0, lsl #2
        29b21c:	e5901068 	ldr	r1, [r0, #104]
        29b220:	e3710001 	cmn	r1, #1	; 0x1
        29b224:	0a0000ad 	beq	29b4e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46dc>
        29b228:	e5902078 	ldr	r2, [r0, #120]
        29b22c:	e242ce19 	sub	ip, r2, #400	; 0x190
        29b230:	e33c0001 	teq	ip, #1	; 0x1
        29b234:	1242cf4b 	subne	ip, r2, #300	; 0x12c
        29b238:	133c0001 	teqne	ip, #1	; 0x1
        29b23c:	1a0000a7 	bne	29b4e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46dc>
        29b240:	e081c101 	add	ip, r1, r1, lsl #2
        29b244:	e08c1281 	add	r1, ip, r1, lsl #5
        29b248:	e0842101 	add	r2, r4, r1, lsl #2
        29b24c:	e58d2048 	str	r2, [sp, #72]
        29b250:	e5b21078 	ldr	r1, [r2, #120]!
        29b254:	e241cf4b 	sub	ip, r1, #300	; 0x12c
        29b258:	e33c0001 	teq	ip, #1	; 0x1
        29b25c:	1241ce19 	subne	ip, r1, #400	; 0x190
        29b260:	133c0001 	teqne	ip, #1	; 0x1
        29b264:	1241ce19 	subne	ip, r1, #400	; 0x190
        29b268:	133c0002 	teqne	ip, #2	; 0x2
        29b26c:	1241cf7d 	subne	ip, r1, #500	; 0x1f4
        29b270:	133c0002 	teqne	ip, #2	; 0x2
        29b274:	1a000099 	bne	29b4e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46dc>
        29b278:	e5ba2018 	ldr	r2, [sl, #24]!
        29b27c:	e59a1008 	ldr	r1, [sl, #8]
        29b280:	e041a002 	sub	sl, r1, r2
        29b284:	e5901008 	ldr	r1, [r0, #8]
        29b288:	e3310001 	teq	r1, #1	; 0x1
        29b28c:	1a000093 	bne	29b4e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46dc>
        29b290:	e5901020 	ldr	r1, [r0, #32]
        29b294:	e58d1044 	str	r1, [sp, #68]
        29b298:	e5900018 	ldr	r0, [r0, #24]
        29b29c:	e0411000 	sub	r1, r1, r0
        29b2a0:	e52d1004 	str	r1, [sp, -#4]!
        29b2a4:	e1a0108a 	mov	r1, sl, lsl #1
        29b2a8:	e3a00003 	mov	r0, #3	; 0x3
        29b2ac:	eb645da3 	bl	1bb2940 <$__rt_sdiv>
        29b2b0:	e49d1004 	ldr	r1, [sp], #4
        29b2b4:	e1510000 	cmp	r1, r0
        29b2b8:	aa000088 	bge	29b4e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46dc>
        29b2bc:	e28d2044 	add	r2, sp, #68	; 0x44
        29b2c0:	e8920006 	ldmia	r2, {r1, r2}
        29b2c4:	e5b20020 	ldr	r0, [r2, #32]!
        29b2c8:	e0410000 	sub	r0, r1, r0
        29b2cc:	eb5f513c 	bl	1a6f7c4 <$HWRAbs(int)>
        29b2d0:	e1a0100a 	mov	r1, sl
        29b2d4:	e52d0004 	str	r0, [sp, -#4]!
        29b2d8:	e3a00003 	mov	r0, #3	; 0x3
        29b2dc:	eb645d97 	bl	1bb2940 <$__rt_sdiv>
        29b2e0:	e1a01000 	mov	r1, r0
        29b2e4:	e49d0004 	ldr	r0, [sp], #4
        29b2e8:	e1500001 	cmp	r0, r1
        29b2ec:	aa00007b 	bge	29b4e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46dc>
        29b2f0:	e7981109 	ldr	r1, [r8, r9, lsl #2]
        29b2f4:	e0810101 	add	r0, r1, r1, lsl #2
        29b2f8:	e0800281 	add	r0, r0, r1, lsl #5
        29b2fc:	e0840100 	add	r0, r4, r0, lsl #2
        29b300:	e5902014 	ldr	r2, [r0, #20]
        29b304:	e590301c 	ldr	r3, [r0, #28]
        29b308:	e0833002 	add	r3, r3, r2
        29b30c:	e0833fa3 	add	r3, r3, r3, lsr #31
        29b310:	e59d2048 	ldr	r2, [sp, #72]
        29b314:	e592201c 	ldr	r2, [r2, #28]
        29b318:	e15200c3 	cmp	r2, r3, asr #1
        29b31c:	da00006f 	ble	29b4e0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46dc>
        29b320:	e59d2048 	ldr	r2, [sp, #72]
        29b324:	e5b27004 	ldr	r7, [r2, #4]!
        29b328:	e5902064 	ldr	r2, [r0, #100]
        29b32c:	e3720001 	cmn	r2, #1	; 0x1
        29b330:	0a00000e 	beq	29b370 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x456c>
        29b334:	e0823102 	add	r3, r2, r2, lsl #2
        29b338:	e0833282 	add	r3, r3, r2, lsl #5
        29b33c:	e0842103 	add	r2, r4, r3, lsl #2
        29b340:	e592e078 	ldr	lr, [r2, #120]
        29b344:	e24ecf4b 	sub	ip, lr, #300	; 0x12c
        29b348:	e33c0001 	teq	ip, #1	; 0x1
        29b34c:	124ece19 	subne	ip, lr, #400	; 0x190
        29b350:	133c0001 	teqne	ip, #1	; 0x1
        29b354:	1a0001a6 	bne	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b358:	e592c03c 	ldr	ip, [r2, #60]
        29b35c:	e5922048 	ldr	r2, [r2, #72]
        29b360:	e15c0002 	cmp	ip, r2
        29b364:	ca0001a2 	bgt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b368:	e7942103 	ldr	r2, [r4, r3, lsl #2]
        29b36c:	e58d2024 	str	r2, [sp, #36]
        29b370:	e59d2048 	ldr	r2, [sp, #72]
        29b374:	e5922068 	ldr	r2, [r2, #104]
        29b378:	e3720001 	cmn	r2, #1	; 0x1
        29b37c:	0a000010 	beq	29b3c4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x45c0>
        29b380:	e082c102 	add	ip, r2, r2, lsl #2
        29b384:	e08c2282 	add	r2, ip, r2, lsl #5
        29b388:	e0842102 	add	r2, r4, r2, lsl #2
        29b38c:	e5923078 	ldr	r3, [r2, #120]
        29b390:	e243cf4b 	sub	ip, r3, #300	; 0x12c
        29b394:	e33c0001 	teq	ip, #1	; 0x1
        29b398:	1243ce19 	subne	ip, r3, #400	; 0x190
        29b39c:	133c0002 	teqne	ip, #2	; 0x2
        29b3a0:	1a000193 	bne	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b3a4:	e5923068 	ldr	r3, [r2, #104]
        29b3a8:	e3730001 	cmn	r3, #1	; 0x1
        29b3ac:	1a000190 	bne	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b3b0:	e592303c 	ldr	r3, [r2, #60]
        29b3b4:	e592c048 	ldr	ip, [r2, #72]
        29b3b8:	e15c0003 	cmp	ip, r3
        29b3bc:	da00018c 	ble	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b3c0:	e5b27004 	ldr	r7, [r2, #4]!
        29b3c4:	e5903020 	ldr	r3, [r0, #32]
        29b3c8:	e1a08003 	mov	r8, r3
        29b3cc:	e59d2024 	ldr	r2, [sp, #36]
        29b3d0:	e0622182 	rsb	r2, r2, r2, lsl #3
        29b3d4:	e0852102 	add	r2, r5, r2, lsl #2
        29b3d8:	e592e014 	ldr	lr, [r2, #20]
        29b3dc:	e043900e 	sub	r9, r3, lr
        29b3e0:	e590c018 	ldr	ip, [r0, #24]
        29b3e4:	e053300c 	subs	r3, r3, ip
        29b3e8:	42833003 	addmi	r3, r3, #3	; 0x3
        29b3ec:	e1590143 	cmp	r9, r3, asr #2
        29b3f0:	ba00017f 	blt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b3f4:	e0673187 	rsb	r3, r7, r7, lsl #3
        29b3f8:	e0853103 	add	r3, r5, r3, lsl #2
        29b3fc:	e5939010 	ldr	r9, [r3, #16]
        29b400:	e5900030 	ldr	r0, [r0, #48]
        29b404:	e0600180 	rsb	r0, r0, r0, lsl #3
        29b408:	e0850100 	add	r0, r5, r0, lsl #2
        29b40c:	e5900010 	ldr	r0, [r0, #16]
        29b410:	e1590000 	cmp	r9, r0
        29b414:	ba000176 	blt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b418:	e15e0008 	cmp	lr, r8
        29b41c:	ca000174 	bgt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b420:	e5b30014 	ldr	r0, [r3, #20]!
        29b424:	e150000c 	cmp	r0, ip
        29b428:	ba000171 	blt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b42c:	e596008c 	ldr	r0, [r6, #140]
        29b430:	e0800080 	add	r0, r0, r0, lsl #1
        29b434:	e59b303c 	ldr	r3, [fp, #60]
        29b438:	e7930200 	ldr	r0, [r3, r0, lsl #4]
        29b43c:	e0803100 	add	r3, r0, r0, lsl #2
        29b440:	e0833280 	add	r3, r3, r0, lsl #5
        29b444:	e7944103 	ldr	r4, [r4, r3, lsl #2]
        29b448:	e59d3024 	ldr	r3, [sp, #36]
        29b44c:	e1340003 	teq	r4, r3
        29b450:	0a00001b 	beq	29b4c4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x46c0>
        29b454:	e0410000 	sub	r0, r1, r0
        29b458:	e3500003 	cmp	r0, #3	; 0x3
        29b45c:	ca000164 	bgt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b460:	e5920014 	ldr	r0, [r2, #20]
        29b464:	e592c010 	ldr	ip, [r2, #16]
        29b468:	e596e038 	ldr	lr, [r6, #56]
        29b46c:	e35e0000 	cmp	lr, #0	; 0x0
        29b470:	e5961018 	ldr	r1, [r6, #24]
        29b474:	b28ee003 	addlt	lr, lr, #3	; 0x3
        29b478:	e041114e 	sub	r1, r1, lr, asr #2
        29b47c:	e5b6e01c 	ldr	lr, [r6, #28]!
        29b480:	e5922010 	ldr	r2, [r2, #16]
        29b484:	e05e2002 	subs	r2, lr, r2
        29b488:	42822003 	addmi	r2, r2, #3	; 0x3
        29b48c:	e08e2142 	add	r2, lr, r2, asr #2
        29b490:	e24dd010 	sub	sp, sp, #16	; 0x10
        29b494:	e48dc004 	str	ip, [sp], #4
        29b498:	e88d0006 	stmia	sp, {r1, r2}
        29b49c:	e58d0008 	str	r0, [sp, #8]
        29b4a0:	e1a02003 	mov	r2, r3
        29b4a4:	e1a01004 	mov	r1, r4
        29b4a8:	e1a00005 	mov	r0, r5
        29b4ac:	e1a0300c 	mov	r3, ip
        29b4b0:	ebfff454 	bl	298608 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1804>
        29b4b4:	e28dd00c 	add	sp, sp, #12	; 0xc
        29b4b8:	e3300000 	teq	r0, #0	; 0x0
        29b4bc:	0a00014c 	beq	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b4c0:	e58d4024 	str	r4, [sp, #36]
        29b4c4:	e3a03015 	mov	r3, #21	; 0x15
        29b4c8:	e3a02016 	mov	r2, #22	; 0x16
        29b4cc:	e2822c05 	add	r2, r2, #1280	; 0x500
        29b4d0:	e1a01007 	mov	r1, r7
        29b4d4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        29b4d8:	e59d3030 	ldr	r3, [sp, #48]
        29b4dc:	ea00013e 	b	29b9dc <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bd8>
        29b4e0:	e7982109 	ldr	r2, [r8, r9, lsl #2]
        29b4e4:	e58d2040 	str	r2, [sp, #64]
        29b4e8:	e082c102 	add	ip, r2, r2, lsl #2
        29b4ec:	e08c2282 	add	r2, ip, r2, lsl #5
        29b4f0:	e084a102 	add	sl, r4, r2, lsl #2
        29b4f4:	e59a0068 	ldr	r0, [sl, #104]
        29b4f8:	e3700001 	cmn	r0, #1	; 0x1
        29b4fc:	0a00013c 	beq	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b500:	e080c100 	add	ip, r0, r0, lsl #2
        29b504:	e08c0280 	add	r0, ip, r0, lsl #5
        29b508:	e0840100 	add	r0, r4, r0, lsl #2
        29b50c:	e1a01000 	mov	r1, r0
        29b510:	e5903068 	ldr	r3, [r0, #104]
        29b514:	e3730001 	cmn	r3, #1	; 0x1
        29b518:	1a000135 	bne	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b51c:	e5903078 	ldr	r3, [r0, #120]
        29b520:	e58d303c 	str	r3, [sp, #60]
        29b524:	e243cf4b 	sub	ip, r3, #300	; 0x12c
        29b528:	e33c0001 	teq	ip, #1	; 0x1
        29b52c:	159d303c 	ldrne	r3, [sp, #60]
        29b530:	1243ce19 	subne	ip, r3, #400	; 0x190
        29b534:	133c0001 	teqne	ip, #1	; 0x1
        29b538:	159d303c 	ldrne	r3, [sp, #60]
        29b53c:	1243ce19 	subne	ip, r3, #400	; 0x190
        29b540:	133c0002 	teqne	ip, #2	; 0x2
        29b544:	0a00000c 	beq	29b57c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4778>
        29b548:	e59d303c 	ldr	r3, [sp, #60]
        29b54c:	e243cf7d 	sub	ip, r3, #500	; 0x1f4
        29b550:	e33c0002 	teq	ip, #2	; 0x2
        29b554:	1a000126 	bne	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b558:	e5903020 	ldr	r3, [r0, #32]
        29b55c:	e5911018 	ldr	r1, [r1, #24]
        29b560:	e0433001 	sub	r3, r3, r1
        29b564:	e59a1018 	ldr	r1, [sl, #24]
        29b568:	e59ac020 	ldr	ip, [sl, #32]
        29b56c:	e04c1001 	sub	r1, ip, r1
        29b570:	e0811fa1 	add	r1, r1, r1, lsr #31
        29b574:	e15300c1 	cmp	r3, r1, asr #1
        29b578:	aa00011d 	bge	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b57c:	e59a1014 	ldr	r1, [sl, #20]
        29b580:	e59a301c 	ldr	r3, [sl, #28]
        29b584:	e0831001 	add	r1, r3, r1
        29b588:	e0811fa1 	add	r1, r1, r1, lsr #31
        29b58c:	e590301c 	ldr	r3, [r0, #28]
        29b590:	e15300c1 	cmp	r3, r1, asr #1
        29b594:	da000116 	ble	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b598:	e5901048 	ldr	r1, [r0, #72]
        29b59c:	e590303c 	ldr	r3, [r0, #60]
        29b5a0:	e1510003 	cmp	r1, r3
        29b5a4:	c590304c 	ldrgt	r3, [r0, #76]
        29b5a8:	c59a1040 	ldrgt	r1, [sl, #64]
        29b5ac:	c1530001 	cmpgt	r3, r1
        29b5b0:	da00010f 	ble	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b5b4:	e7942102 	ldr	r2, [r4, r2, lsl #2]
        29b5b8:	e58d2024 	str	r2, [sp, #36]
        29b5bc:	e5b0c004 	ldr	ip, [r0, #4]!
        29b5c0:	e58dc020 	str	ip, [sp, #32]
        29b5c4:	e59a0064 	ldr	r0, [sl, #100]
        29b5c8:	e3700001 	cmn	r0, #1	; 0x1
        29b5cc:	0a000010 	beq	29b614 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4810>
        29b5d0:	e0802100 	add	r2, r0, r0, lsl #2
        29b5d4:	e0822280 	add	r2, r2, r0, lsl #5
        29b5d8:	e0841102 	add	r1, r4, r2, lsl #2
        29b5dc:	e5913078 	ldr	r3, [r1, #120]
        29b5e0:	e243cf4b 	sub	ip, r3, #300	; 0x12c
        29b5e4:	e33c0001 	teq	ip, #1	; 0x1
        29b5e8:	1243ce19 	subne	ip, r3, #400	; 0x190
        29b5ec:	133c0001 	teqne	ip, #1	; 0x1
        29b5f0:	1a0000ff 	bne	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b5f4:	e591303c 	ldr	r3, [r1, #60]
        29b5f8:	e5911048 	ldr	r1, [r1, #72]
        29b5fc:	e1530001 	cmp	r3, r1
        29b600:	ca0000fb 	bgt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b604:	e7942102 	ldr	r2, [r4, r2, lsl #2]
        29b608:	e3700001 	cmn	r0, #1	; 0x1
        29b60c:	e58d2024 	str	r2, [sp, #36]
        29b610:	1a000007 	bne	29b634 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4830>
        29b614:	e59a1060 	ldr	r1, [sl, #96]
        29b618:	e52d1004 	str	r1, [sp, -#4]!
        29b61c:	e3a00024 	mov	r0, #36	; 0x24
        29b620:	e59a105c 	ldr	r1, [sl, #92]
        29b624:	eb645cc5 	bl	1bb2940 <$__rt_sdiv>
        29b628:	e49d1004 	ldr	r1, [sp], #4
        29b62c:	e1510000 	cmp	r1, r0
        29b630:	ba0000ef 	blt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b634:	e59a3020 	ldr	r3, [sl, #32]
        29b638:	e59d0024 	ldr	r0, [sp, #36]
        29b63c:	e0600180 	rsb	r0, r0, r0, lsl #3
        29b640:	e0852100 	add	r2, r5, r0, lsl #2
        29b644:	e5920014 	ldr	r0, [r2, #20]
        29b648:	e043e000 	sub	lr, r3, r0
        29b64c:	e59a1018 	ldr	r1, [sl, #24]
        29b650:	e053c001 	subs	ip, r3, r1
        29b654:	428cc003 	addmi	ip, ip, #3	; 0x3
        29b658:	e15e014c 	cmp	lr, ip, asr #2
        29b65c:	ba0000e4 	blt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b660:	e59dc020 	ldr	ip, [sp, #32]
        29b664:	e06cc18c 	rsb	ip, ip, ip, lsl #3
        29b668:	e085c10c 	add	ip, r5, ip, lsl #2
        29b66c:	e58dc038 	str	ip, [sp, #56]
        29b670:	e5bce010 	ldr	lr, [ip, #16]!
        29b674:	e59ac030 	ldr	ip, [sl, #48]
        29b678:	e06cc18c 	rsb	ip, ip, ip, lsl #3
        29b67c:	e085c10c 	add	ip, r5, ip, lsl #2
        29b680:	e59cc010 	ldr	ip, [ip, #16]
        29b684:	e15e000c 	cmp	lr, ip
        29b688:	ba0000d9 	blt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b68c:	e1500003 	cmp	r0, r3
        29b690:	ca0000d7 	bgt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b694:	e59d3038 	ldr	r3, [sp, #56]
        29b698:	e5933014 	ldr	r3, [r3, #20]
        29b69c:	e1530001 	cmp	r3, r1
        29b6a0:	ba0000d3 	blt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b6a4:	e5b21010 	ldr	r1, [r2, #16]!
        29b6a8:	e58d1034 	str	r1, [sp, #52]
        29b6ac:	e041100e 	sub	r1, r1, lr
        29b6b0:	e0020191 	mul	r2, r1, r1
        29b6b4:	e0401003 	sub	r1, r0, r3
        29b6b8:	e0000191 	mul	r0, r1, r1
        29b6bc:	e0821000 	add	r1, r2, r0
        29b6c0:	e58d1014 	str	r1, [sp, #20]
        29b6c4:	e5ba0038 	ldr	r0, [sl, #56]!
        29b6c8:	e0010090 	mul	r1, r0, r0
        29b6cc:	e3a00009 	mov	r0, #9	; 0x9
        29b6d0:	eb645c9a 	bl	1bb2940 <$__rt_sdiv>
        29b6d4:	e59d1014 	ldr	r1, [sp, #20]
        29b6d8:	e1500001 	cmp	r0, r1
        29b6dc:	da000007 	ble	29b700 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x48fc>
        29b6e0:	e59d303c 	ldr	r3, [sp, #60]
        29b6e4:	e243ce19 	sub	ip, r3, #400	; 0x190
        29b6e8:	e33c0001 	teq	ip, #1	; 0x1
        29b6ec:	13a03016 	movne	r3, #22	; 0x16
        29b6f0:	13a02f47 	movne	r2, #284	; 0x11c
        29b6f4:	12822b01 	addne	r2, r2, #1024	; 0x400
        29b6f8:	1a0000b4 	bne	29b9d0 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bcc>
        29b6fc:	ea0000bc 	b	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b700:	e5970078 	ldr	r0, [r7, #120]
        29b704:	e240ce19 	sub	ip, r0, #400	; 0x190
        29b708:	e33c0001 	teq	ip, #1	; 0x1
        29b70c:	1a000008 	bne	29b734 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4930>
        29b710:	e3a00003 	mov	r0, #3	; 0x3
        29b714:	e5961038 	ldr	r1, [r6, #56]
        29b718:	e596a040 	ldr	sl, [r6, #64]
        29b71c:	eb645c87 	bl	1bb2940 <$__rt_sdiv>
        29b720:	e08a0000 	add	r0, sl, r0
        29b724:	e597104c 	ldr	r1, [r7, #76]
        29b728:	e1500001 	cmp	r0, r1
        29b72c:	ca0000b0 	bgt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b730:	ea000004 	b	29b748 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4944>
        29b734:	e240cf4b 	sub	ip, r0, #300	; 0x12c
        29b738:	e33c0001 	teq	ip, #1	; 0x1
        29b73c:	1240ce19 	subne	ip, r0, #400	; 0x190
        29b740:	133c0001 	teqne	ip, #1	; 0x1
        29b744:	1a000063 	bne	29b8d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4ad4>
        29b748:	e597003c 	ldr	r0, [r7, #60]
        29b74c:	e5971048 	ldr	r1, [r7, #72]
        29b750:	e1500001 	cmp	r0, r1
        29b754:	aa00005f 	bge	29b8d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4ad4>
        29b758:	e5960020 	ldr	r0, [r6, #32]
        29b75c:	e5961058 	ldr	r1, [r6, #88]
        29b760:	e0400001 	sub	r0, r0, r1
        29b764:	e0800080 	add	r0, r0, r0, lsl #1
        29b768:	e5961038 	ldr	r1, [r6, #56]
        29b76c:	e1500081 	cmp	r0, r1, lsl #1
        29b770:	c596105c 	ldrgt	r1, [r6, #92]
        29b774:	c597005c 	ldrgt	r0, [r7, #92]
        29b778:	c1510100 	cmpgt	r1, r0, lsl #2
        29b77c:	da000055 	ble	29b8d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4ad4>
        29b780:	e596001c 	ldr	r0, [r6, #28]
        29b784:	e59d1034 	ldr	r1, [sp, #52]
        29b788:	e0401001 	sub	r1, r0, r1
        29b78c:	e5970034 	ldr	r0, [r7, #52]
        29b790:	e1510000 	cmp	r1, r0
        29b794:	da00004f 	ble	29b8d8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4ad4>
        29b798:	e24dd004 	sub	sp, sp, #4	; 0x4
        29b79c:	e596008c 	ldr	r0, [r6, #140]
        29b7a0:	e0800080 	add	r0, r0, r0, lsl #1
        29b7a4:	e59b203c 	ldr	r2, [fp, #60]
        29b7a8:	e7920200 	ldr	r0, [r2, r0, lsl #4]
        29b7ac:	e0802100 	add	r2, r0, r0, lsl #2
        29b7b0:	e0822280 	add	r2, r2, r0, lsl #5
        29b7b4:	e794a102 	ldr	sl, [r4, r2, lsl #2]
        29b7b8:	e59d2028 	ldr	r2, [sp, #40]
        29b7bc:	e58d2000 	str	r2, [sp]
        29b7c0:	e13a0002 	teq	sl, r2
        29b7c4:	0a000020 	beq	29b84c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4a48>
        29b7c8:	e59d2044 	ldr	r2, [sp, #68]
        29b7cc:	e0420000 	sub	r0, r2, r0
        29b7d0:	e3500003 	cmp	r0, #3	; 0x3
        29b7d4:	ca000019 	bgt	29b840 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4a3c>
        29b7d8:	e3a00003 	mov	r0, #3	; 0x3
        29b7dc:	eb645c57 	bl	1bb2940 <$__rt_sdiv>
        29b7e0:	e59d1038 	ldr	r1, [sp, #56]
        29b7e4:	e0413000 	sub	r3, r1, r0
        29b7e8:	e5960038 	ldr	r0, [r6, #56]
        29b7ec:	e0800fa0 	add	r0, r0, r0, lsr #31
        29b7f0:	e5961020 	ldr	r1, [r6, #32]
        29b7f4:	e04100c0 	sub	r0, r1, r0, asr #1
        29b7f8:	e5961038 	ldr	r1, [r6, #56]
        29b7fc:	e3510000 	cmp	r1, #0	; 0x0
        29b800:	e5962018 	ldr	r2, [r6, #24]
        29b804:	b2811003 	addlt	r1, r1, #3	; 0x3
        29b808:	e0422141 	sub	r2, r2, r1, asr #2
        29b80c:	e596101c 	ldr	r1, [r6, #28]
        29b810:	e24dd010 	sub	sp, sp, #16	; 0x10
        29b814:	e48d3004 	str	r3, [sp], #4
        29b818:	e58d2000 	str	r2, [sp]
        29b81c:	e58d1004 	str	r1, [sp, #4]
        29b820:	e58d0008 	str	r0, [sp, #8]
        29b824:	e1a0100a 	mov	r1, sl
        29b828:	e1a00005 	mov	r0, r5
        29b82c:	e59d200c 	ldr	r2, [sp, #12]
        29b830:	ebfff374 	bl	298608 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1804>
        29b834:	e28dd00c 	add	sp, sp, #12	; 0xc
        29b838:	e3300000 	teq	r0, #0	; 0x0
        29b83c:	1a000001 	bne	29b848 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4a44>
        29b840:	e28dd004 	add	sp, sp, #4	; 0x4
        29b844:	ea00006a 	b	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b848:	e58da028 	str	sl, [sp, #40]
        29b84c:	e5961058 	ldr	r1, [r6, #88]
        29b850:	e596a054 	ldr	sl, [r6, #84]
        29b854:	e58d1030 	str	r1, [sp, #48]
        29b858:	e1a0000a 	mov	r0, sl
        29b85c:	e286303c 	add	r3, r6, #60	; 0x3c
        29b860:	e893000c 	ldmia	r3, {r2, r3}
        29b864:	eb624baf 	bl	1b2e728 <$GetDirection__FiN31>
        29b868:	e3500003 	cmp	r0, #3	; 0x3
        29b86c:	9a000018 	bls	29b8d4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4ad0>
        29b870:	e3500008 	cmp	r0, #8	; 0x8
        29b874:	2a000016 	bcs	29b8d4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4ad0>
        29b878:	e2861048 	add	r1, r6, #72	; 0x48
        29b87c:	e8910003 	ldmia	r1, {r0, r1}
        29b880:	e1a0200a 	mov	r2, sl
        29b884:	e59d3030 	ldr	r3, [sp, #48]
        29b888:	eb624ba6 	bl	1b2e728 <$GetDirection__FiN31>
        29b88c:	e1a01000 	mov	r1, r0
        29b890:	e5d70010 	ldrb	r0, [r7, #16]
        29b894:	eb624b9e 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        29b898:	e3500004 	cmp	r0, #4	; 0x4
        29b89c:	aa00000c 	bge	29b8d4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4ad0>
        29b8a0:	e3a03000 	mov	r3, #0	; 0x0
        29b8a4:	e3a0201b 	mov	r2, #27	; 0x1b
        29b8a8:	e2822c05 	add	r2, r2, #1280	; 0x500
        29b8ac:	e59d1024 	ldr	r1, [sp, #36]
        29b8b0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        29b8b4:	e59d3034 	ldr	r3, [sp, #52]
        29b8b8:	e1a01005 	mov	r1, r5
        29b8bc:	e3a02f45 	mov	r2, #276	; 0x114
        29b8c0:	e2822b01 	add	r2, r2, #1024	; 0x400
        29b8c4:	e59b0008 	ldr	r0, [fp, #8]
        29b8c8:	eb624fb0 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        29b8cc:	e28dd00c 	add	sp, sp, #12	; 0xc
        29b8d0:	eaffffda 	b	29b840 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4a3c>
        29b8d4:	e28dd004 	add	sp, sp, #4	; 0x4
        29b8d8:	e596008c 	ldr	r0, [r6, #140]
        29b8dc:	e0800080 	add	r0, r0, r0, lsl #1
        29b8e0:	e59b203c 	ldr	r2, [fp, #60]
        29b8e4:	e7920200 	ldr	r0, [r2, r0, lsl #4]
        29b8e8:	e0801100 	add	r1, r0, r0, lsl #2
        29b8ec:	e0811280 	add	r1, r1, r0, lsl #5
        29b8f0:	e7944101 	ldr	r4, [r4, r1, lsl #2]
        29b8f4:	e59d2024 	ldr	r2, [sp, #36]
        29b8f8:	e1340002 	teq	r4, r2
        29b8fc:	0a00001e 	beq	29b97c <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4b78>
        29b900:	e7981109 	ldr	r1, [r8, r9, lsl #2]
        29b904:	e0410000 	sub	r0, r1, r0
        29b908:	e3500003 	cmp	r0, #3	; 0x3
        29b90c:	ca000038 	bgt	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b910:	e59d0024 	ldr	r0, [sp, #36]
        29b914:	e0600180 	rsb	r0, r0, r0, lsl #3
        29b918:	e0850100 	add	r0, r5, r0, lsl #2
        29b91c:	e1a0c000 	mov	ip, r0
        29b920:	e5b03010 	ldr	r3, [r0, #16]!
        29b924:	e5901004 	ldr	r1, [r0, #4]
        29b928:	e5960038 	ldr	r0, [r6, #56]
        29b92c:	e3500000 	cmp	r0, #0	; 0x0
        29b930:	e596e018 	ldr	lr, [r6, #24]
        29b934:	b2800003 	addlt	r0, r0, #3	; 0x3
        29b938:	e04e0140 	sub	r0, lr, r0, asr #2
        29b93c:	e596e01c 	ldr	lr, [r6, #28]
        29b940:	e59cc010 	ldr	ip, [ip, #16]
        29b944:	e05ec00c 	subs	ip, lr, ip
        29b948:	428cc003 	addmi	ip, ip, #3	; 0x3
        29b94c:	e08ec14c 	add	ip, lr, ip, asr #2
        29b950:	e24dd010 	sub	sp, sp, #16	; 0x10
        29b954:	e48d3004 	str	r3, [sp], #4
        29b958:	e88d1001 	stmia	sp, {r0, ip}
        29b95c:	e58d1008 	str	r1, [sp, #8]
        29b960:	e1a01004 	mov	r1, r4
        29b964:	e1a00005 	mov	r0, r5
        29b968:	ebfff326 	bl	298608 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x1804>
        29b96c:	e28dd00c 	add	sp, sp, #12	; 0xc
        29b970:	e3300000 	teq	r0, #0	; 0x0
        29b974:	0a00001e 	beq	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b978:	e58d4024 	str	r4, [sp, #36]
        29b97c:	e5970078 	ldr	r0, [r7, #120]
        29b980:	e240ce19 	sub	ip, r0, #400	; 0x190
        29b984:	e33c0001 	teq	ip, #1	; 0x1
        29b988:	1a00000d 	bne	29b9c4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bc0>
        29b98c:	e597001c 	ldr	r0, [r7, #28]
        29b990:	e5b6101c 	ldr	r1, [r6, #28]!
        29b994:	e1500001 	cmp	r0, r1
        29b998:	aa000009 	bge	29b9c4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bc0>
        29b99c:	e597002c 	ldr	r0, [r7, #44]
        29b9a0:	e0600180 	rsb	r0, r0, r0, lsl #3
        29b9a4:	e0851100 	add	r1, r5, r0, lsl #2
        29b9a8:	e2811010 	add	r1, r1, #16	; 0x10
        29b9ac:	e8910003 	ldmia	r1, {r0, r1}
        29b9b0:	e2877044 	add	r7, r7, #68	; 0x44
        29b9b4:	e9b7000c 	ldmib	r7!, {r2, r3}
        29b9b8:	eb624b5a 	bl	1b2e728 <$GetDirection__FiN31>
        29b9bc:	e3500013 	cmp	r0, #19	; 0x13
        29b9c0:	8a00000b 	bhi	29b9f4 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4bf0>
        29b9c4:	e3a03017 	mov	r3, #23	; 0x17
        29b9c8:	e3a02016 	mov	r2, #22	; 0x16
        29b9cc:	e2822c05 	add	r2, r2, #1280	; 0x500
        29b9d0:	e59d1020 	ldr	r1, [sp, #32]
        29b9d4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        29b9d8:	e59d3030 	ldr	r3, [sp, #48]
        29b9dc:	e1a01005 	mov	r1, r5
        29b9e0:	e3a02f45 	mov	r2, #276	; 0x114
        29b9e4:	e2822b01 	add	r2, r2, #1024	; 0x400
        29b9e8:	e59b0008 	ldr	r0, [fp, #8]
        29b9ec:	eb624f67 	bl	1b2f790 <$LO_Add__FPvP13tag_wapx_typeUiiT4T3T4>
        29b9f0:	e28dd00c 	add	sp, sp, #12	; 0xc
        29b9f4:	e3e00000 	mvn	r0, #0	; 0x0
        29b9f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        29b9fc:	e1a0c00d 	mov	ip, sp
        29ba00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        29ba04:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        29ba08:	e24cb014 	sub	fp, ip, #20	; 0x14
        29ba0c:	e1a04000 	mov	r4, r0
        29ba10:	e1a0e003 	mov	lr, r3
        29ba14:	e28b6018 	add	r6, fp, #24	; 0x18
        29ba18:	e8960041 	ldmia	r6, {r0, r6}
        29ba1c:	e28b3034 	add	r3, fp, #52	; 0x34
        29ba20:	e893000e 	ldmia	r3, {r1, r2, r3}
        29ba24:	e59b5020 	ldr	r5, [fp, #32]
        29ba28:	e59b7014 	ldr	r7, [fp, #20]
        29ba2c:	e790a101 	ldr	sl, [r0, r1, lsl #2]
        29ba30:	e08a810a 	add	r8, sl, sl, lsl #2
        29ba34:	e088828a 	add	r8, r8, sl, lsl #5
        29ba38:	e08e9108 	add	r9, lr, r8, lsl #2
        29ba3c:	e599c08c 	ldr	ip, [r9, #140]
        29ba40:	e08cc08c 	add	ip, ip, ip, lsl #1
        29ba44:	e083c20c 	add	ip, r3, ip, lsl #4
        29ba48:	e59c8000 	ldr	r8, [ip]
        29ba4c:	e13a0008 	teq	sl, r8
        29ba50:	1a000018 	bne	29bab8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4cb4>
        29ba54:	e59ca004 	ldr	sl, [ip, #4]
        29ba58:	e04a8008 	sub	r8, sl, r8
        29ba5c:	e3580003 	cmp	r8, #3	; 0x3
        29ba60:	aa000014 	bge	29bab8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4cb4>
        29ba64:	e59cc020 	ldr	ip, [ip, #32]
        29ba68:	e5b9801c 	ldr	r8, [r9, #28]!
        29ba6c:	e15c0008 	cmp	ip, r8
        29ba70:	da000010 	ble	29bab8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x4cb4>
        29ba74:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        29ba78:	e28b2034 	add	r2, fp, #52	; 0x34
        29ba7c:	e9321008 	ldmdb	r2!, {r3, ip}
        29ba80:	e92d1008 	stmdb	sp!, {r3, ip}
        29ba84:	e9321008 	ldmdb	r2!, {r3, ip}
        29ba88:	e92d1008 	stmdb	sp!, {r3, ip}
        29ba8c:	e1a03005 	mov	r3, r5
        29ba90:	e1a02006 	mov	r2, r6
        29ba94:	e1a01000 	mov	r1, r0
        29ba98:	e1a00007 	mov	r0, r7
        29ba9c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        29baa0:	e1a0300e 	mov	r3, lr
        29baa4:	e1a00004 	mov	r0, r4
        29baa8:	e28b2008 	add	r2, fp, #8	; 0x8
        29baac:	e8920006 	ldmia	r2, {r1, r2}
        29bab0:	ebfffb7c 	bl	29a8a8 <New_SearchDigit_V(void *, tag_WORD_TRACE *, int, tag_wapx_type *, tag_CHUNK *, brack_type *, int *, tag_wapx_type *, tag_wapx_type *, tag_BOX, tag_STK *, tag_wapx_type *, tag_wapx_type *)+0x3aa4>
        29bab4:	e28dd02c 	add	sp, sp, #44	; 0x2c
        29bab8:	e3e00000 	mvn	r0, #0	; 0x0
        29babc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: NumberAdd__FRC6RefVarT1
 * Address: 002b5018
 */
void globals::NumberAdd() {
    /*
        2b5018:	e1a0c00d 	mov	ip, sp
        2b501c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2b5020:	e24cb004 	sub	fp, ip, #4	; 0x4
        2b5024:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        2b5028:	e1a04001 	mov	r4, r1
        2b502c:	eb64344f 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2b5030:	ee00c180 	mvfd	f4, f0
        2b5034:	e1a00004 	mov	r0, r4
        2b5038:	eb64344c 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2b503c:	ee040180 	adfd	f0, f4, f0
        2b5040:	ed2d8102 	stfd	f0, [sp, -#8]!
        2b5044:	e8bd0003 	ldmia	sp!, {r0, r1}
        2b5048:	ed1bc207 	lfm	f4, 1, [fp, -#28]
        2b504c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2b5050:	ea64409d 	b	1bc52cc <$MakeReal(double)>
    */
}

/**
 * Symbol: NumberSubtract__FRC6RefVarT1
 * Address: 002b6790
 */
void globals::NumberSubtract() {
    /*
        2b6790:	e1a0c00d 	mov	ip, sp
        2b6794:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2b6798:	e24cb004 	sub	fp, ip, #4	; 0x4
        2b679c:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        2b67a0:	e1a04001 	mov	r4, r1
        2b67a4:	eb642e71 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2b67a8:	ee00c180 	mvfd	f4, f0
        2b67ac:	e1a00004 	mov	r0, r4
        2b67b0:	eb642e6e 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2b67b4:	ee240180 	sufd	f0, f4, f0
        2b67b8:	ed2d8102 	stfd	f0, [sp, -#8]!
        2b67bc:	e8bd0003 	ldmia	sp!, {r0, r1}
        2b67c0:	ed1bc207 	lfm	f4, 1, [fp, -#28]
        2b67c4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2b67c8:	ea643abf 	b	1bc52cc <$MakeReal(double)>
    */
}

/**
 * Symbol: NumberMultiply__FRC6RefVarT1
 * Address: 002b872c
 */
void globals::NumberMultiply() {
    /*
        2b872c:	e1a0c00d 	mov	ip, sp
        2b8730:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2b8734:	e24cb004 	sub	fp, ip, #4	; 0x4
        2b8738:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        2b873c:	e1a04001 	mov	r4, r1
        2b8740:	eb64268a 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2b8744:	ee00c180 	mvfd	f4, f0
        2b8748:	e1a00004 	mov	r0, r4
        2b874c:	eb642687 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2b8750:	ee140180 	mufd	f0, f4, f0
        2b8754:	ed2d8102 	stfd	f0, [sp, -#8]!
        2b8758:	e8bd0003 	ldmia	sp!, {r0, r1}
        2b875c:	ed1bc207 	lfm	f4, 1, [fp, -#28]
        2b8760:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2b8764:	ea6432d8 	b	1bc52cc <$MakeReal(double)>
    */
}

/**
 * Symbol: NumberDivide__FRC6RefVarT1
 * Address: 002b8c3c
 */
void globals::NumberDivide() {
    /*
        2b8c3c:	e1a0c00d 	mov	ip, sp
        2b8c40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2b8c44:	e24cb004 	sub	fp, ip, #4	; 0x4
        2b8c48:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        2b8c4c:	e1a04000 	mov	r4, r0
        2b8c50:	e1a00001 	mov	r0, r1
        2b8c54:	eb642545 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2b8c58:	ee00c180 	mvfd	f4, f0
        2b8c5c:	e1a00004 	mov	r0, r4
        2b8c60:	eb642542 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        2b8c64:	ee400184 	dvfd	f0, f0, f4
        2b8c68:	ed2d8102 	stfd	f0, [sp, -#8]!
        2b8c6c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2b8c70:	ed1bc207 	lfm	f4, 1, [fp, -#28]
        2b8c74:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2b8c78:	ea643193 	b	1bc52cc <$MakeReal(double)>
    */
}

/**
 * Symbol: NoteSpecl__FP8low_typeP9SPEC_TYPET2Pss
 * Address: 002bc460
 */
void globals::NoteSpecl() {
    /*
        2bc460:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2bc464:	e59dc014 	ldr	ip, [sp, #20]
        2bc468:	e1a0780c 	mov	r7, ip, lsl #16
        2bc46c:	e1a07847 	mov	r7, r7, asr #16
        2bc470:	e5b0e014 	ldr	lr, [r0, #20]!
        2bc474:	e5936000 	ldr	r6, [r3]
        2bc478:	e1a06846 	mov	r6, r6, asr #16
        2bc47c:	e0860106 	add	r0, r6, r6, lsl #2
        2bc480:	e0822100 	add	r2, r2, r0, lsl #2
        2bc484:	e5d1c000 	ldrb	ip, [r1]
        2bc488:	e5915008 	ldr	r5, [r1, #8]
        2bc48c:	e1a05845 	mov	r5, r5, asr #16
        2bc490:	e591400a 	ldr	r4, [r1, #10]
        2bc494:	e1a04844 	mov	r4, r4, asr #16
        2bc498:	e3a00001 	mov	r0, #1	; 0x1
        2bc49c:	e2477001 	sub	r7, r7, #1	; 0x1
        2bc4a0:	e1570006 	cmp	r7, r6
        2bc4a4:	d3a00000 	movle	r0, #0	; 0x0
        2bc4a8:	d8bd80f0 	ldmleia	sp!, {r4, r5, r6, r7, pc}
        2bc4ac:	e5c2c000 	strb	ip, [r2]
        2bc4b0:	e5d16001 	ldrb	r6, [r1, #1]
        2bc4b4:	e5c26001 	strb	r6, [r2, #1]
        2bc4b8:	e5d16002 	ldrb	r6, [r1, #2]
        2bc4bc:	e5c26002 	strb	r6, [r2, #2]
        2bc4c0:	e5d16003 	ldrb	r6, [r1, #3]
        2bc4c4:	e5c26003 	strb	r6, [r2, #3]
        2bc4c8:	e33c0005 	teq	ip, #5	; 0x5
        2bc4cc:	133c0008 	teqne	ip, #8	; 0x8
        2bc4d0:	133c0007 	teqne	ip, #7	; 0x7
        2bc4d4:	1a000020 	bne	2bc55c <NoteSpecl__FP8low_typeP9SPEC_TYPET2Pss+0xfc>
        2bc4d8:	e591c004 	ldr	ip, [r1, #4]
        2bc4dc:	e1a0c84c 	mov	ip, ip, asr #16
        2bc4e0:	e79ec08c 	ldr	ip, [lr, ip, lsl #1]
        2bc4e4:	e1a0c82c 	mov	ip, ip, lsr #16
        2bc4e8:	e5c2c005 	strb	ip, [r2, #5]
        2bc4ec:	e1a0c44c 	mov	ip, ip, asr #8
        2bc4f0:	e5c2c004 	strb	ip, [r2, #4]
        2bc4f4:	e5911006 	ldr	r1, [r1, #6]
        2bc4f8:	e1a01841 	mov	r1, r1, asr #16
        2bc4fc:	e79e1081 	ldr	r1, [lr, r1, lsl #1]
        2bc500:	e1a01821 	mov	r1, r1, lsr #16
        2bc504:	e5c21007 	strb	r1, [r2, #7]
        2bc508:	e1a01441 	mov	r1, r1, asr #8
        2bc50c:	e5c21006 	strb	r1, [r2, #6]
        2bc510:	e3e0c001 	mvn	ip, #1	; 0x1
        2bc514:	e3e01000 	mvn	r1, #0	; 0x0
        2bc518:	e3750002 	cmn	r5, #2	; 0x2
        2bc51c:	0a000005 	beq	2bc538 <NoteSpecl__FP8low_typeP9SPEC_TYPET2Pss+0xd8>
        2bc520:	e79e5085 	ldr	r5, [lr, r5, lsl #1]
        2bc524:	e1a05825 	mov	r5, r5, lsr #16
        2bc528:	e5c25009 	strb	r5, [r2, #9]
        2bc52c:	e1a05445 	mov	r5, r5, asr #8
        2bc530:	e5c25008 	strb	r5, [r2, #8]
        2bc534:	ea000001 	b	2bc540 <NoteSpecl__FP8low_typeP9SPEC_TYPET2Pss+0xe0>
        2bc538:	e5c2c009 	strb	ip, [r2, #9]
        2bc53c:	e5c21008 	strb	r1, [r2, #8]
        2bc540:	e3740002 	cmn	r4, #2	; 0x2
        2bc544:	05c2c00b 	streqb	ip, [r2, #11]
        2bc548:	179e1084 	ldrne	r1, [lr, r4, lsl #1]
        2bc54c:	11a01821 	movne	r1, r1, lsr #16
        2bc550:	15c2100b 	strneb	r1, [r2, #11]
        2bc554:	11a01441 	movne	r1, r1, asr #8
        2bc558:	ea00000e 	b	2bc598 <NoteSpecl__FP8low_typeP9SPEC_TYPET2Pss+0x138>
        2bc55c:	e591c004 	ldr	ip, [r1, #4]
        2bc560:	e1a0c82c 	mov	ip, ip, lsr #16
        2bc564:	e5c2c005 	strb	ip, [r2, #5]
        2bc568:	e1a0c44c 	mov	ip, ip, asr #8
        2bc56c:	e5c2c004 	strb	ip, [r2, #4]
        2bc570:	e5911006 	ldr	r1, [r1, #6]
        2bc574:	e1a01821 	mov	r1, r1, lsr #16
        2bc578:	e5c21007 	strb	r1, [r2, #7]
        2bc57c:	e1a01441 	mov	r1, r1, asr #8
        2bc580:	e5c21006 	strb	r1, [r2, #6]
        2bc584:	e5c25009 	strb	r5, [r2, #9]
        2bc588:	e1a01445 	mov	r1, r5, asr #8
        2bc58c:	e5c21008 	strb	r1, [r2, #8]
        2bc590:	e5c2400b 	strb	r4, [r2, #11]
        2bc594:	e1a01444 	mov	r1, r4, asr #8
        2bc598:	e5c2100a 	strb	r1, [r2, #10]
        2bc59c:	e5931000 	ldr	r1, [r3]
        2bc5a0:	e1a01821 	mov	r1, r1, lsr #16
        2bc5a4:	e2811001 	add	r1, r1, #1	; 0x1
        2bc5a8:	e5c31001 	strb	r1, [r3, #1]
        2bc5ac:	e1a01441 	mov	r1, r1, asr #8
        2bc5b0:	e5c31000 	strb	r1, [r3]
        2bc5b4:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: NewNSDebugAPI(TInterpreter *)
 * Address: 002d31b4
 */
NewNSDebugAPI(TInterpreter *) {
    /*
        2d31b4:	e1a01000 	mov	r1, r0
        2d31b8:	e3a00000 	mov	r0, #0	; 0x0
        2d31bc:	ea5e1ab7 	b	1a59ca0 <TNSDebugAPI::$__ct(TInterpreter *)>
    */
}

/**
 * Symbol: NTKStackFrameInfo(TNSDebugAPI &, long)
 * Address: 002d31d0
 */
NTKStackFrameInfo(TNSDebugAPI &, long) {
    /*
        2d31d0:	e1a0c00d 	mov	ip, sp
        2d31d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d31d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d31dc:	e1a05000 	mov	r5, r0
        2d31e0:	e1a04001 	mov	r4, r1
        2d31e4:	e24dd010 	sub	sp, sp, #16	; 0x10
        2d31e8:	eb64bbce 	bl	1c02128 <TNSDebugAPI::$Function(long)>
        2d31ec:	eb63bbd6 	bl	1bc214c <$AllocateRefHandle(long)>
        2d31f0:	e1a01004 	mov	r1, r4
        2d31f4:	e58d000c 	str	r0, [sp, #12]
        2d31f8:	e1a00005 	mov	r0, r5
        2d31fc:	eb64bbcd 	bl	1c02138 <TNSDebugAPI::$Receiver(long)>
        2d3200:	eb63bbd1 	bl	1bc214c <$AllocateRefHandle(long)>
        2d3204:	e1a01004 	mov	r1, r4
        2d3208:	e58d0008 	str	r0, [sp, #8]
        2d320c:	e1a00005 	mov	r0, r5
        2d3210:	eb64bbca 	bl	1c02140 <TNSDebugAPI::$Implementor(long)>
        2d3214:	eb63bbcc 	bl	1bc214c <$AllocateRefHandle(long)>
        2d3218:	e58d0004 	str	r0, [sp, #4]
        2d321c:	e59f0050 	ldr	r0, [pc, #50]	; 2d3274 <NTKStackFrameInfo(TNSDebugAPI &, long)+0xa4>
        2d3220:	eb63bbd1 	bl	1bc216c <$Clone(RefVar const &)>
        2d3224:	eb63bbc8 	bl	1bc214c <$AllocateRefHandle(long)>
        2d3228:	e40d0004 	str	r0, [sp], -#4
        2d322c:	e59d0010 	ldr	r0, [sp, #16]
        2d3230:	e5900000 	ldr	r0, [r0]
        2d3234:	e3300002 	teq	r0, #2	; 0x2
        2d3238:	0a000032 	beq	2d3308 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x138>
        2d323c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3240:	e28d0014 	add	r0, sp, #20	; 0x14
        2d3244:	eb5e0605 	bl	1a54a60 <$FunctionDebugName(RefVar const &)>
        2d3248:	eb63bbbf 	bl	1bc214c <$AllocateRefHandle(long)>
        2d324c:	e58d0000 	str	r0, [sp]
        2d3250:	e5900000 	ldr	r0, [r0]
        2d3254:	e59f601c 	ldr	r6, [pc, #1c]	; 2d3278 <NTKStackFrameInfo(TNSDebugAPI &, long)+0xa8>
        2d3258:	e3300002 	teq	r0, #2	; 0x2
        2d325c:	0a000006 	beq	2d327c <NTKStackFrameInfo(TNSDebugAPI &, long)+0xac>
        2d3260:	e1a0200d 	mov	r2, sp
        2d3264:	e1a01006 	mov	r1, r6
        2d3268:	e28d0008 	add	r0, sp, #8	; 0x8
        2d326c:	eb63cc3d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d3270:	ea000021 	b	2d32fc <NTKStackFrameInfo(TNSDebugAPI &, long)+0x12c>
        2d3274:	00681a18 	rsbeq	r1, r8, r8, lsl sl
        2d3278:	006824c8 	rsbeq	r2, r8, r8, asr #9
        2d327c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3280:	e3a00002 	mov	r0, #2	; 0x2
        2d3284:	eb63bbb0 	bl	1bc214c <$AllocateRefHandle(long)>
        2d3288:	e58d0000 	str	r0, [sp]
        2d328c:	e59d0010 	ldr	r0, [sp, #16]
        2d3290:	e5900000 	ldr	r0, [r0]
        2d3294:	e3300002 	teq	r0, #2	; 0x2
        2d3298:	0a000004 	beq	2d32b0 <NTKStackFrameInfo(TNSDebugAPI &, long)+0xe0>
        2d329c:	e28d1018 	add	r1, sp, #24	; 0x18
        2d32a0:	e28d0010 	add	r0, sp, #16	; 0x10
        2d32a4:	eb63c3e4 	bl	1bc423c <$FindSlotName__FRC6RefVarT1>
        2d32a8:	e59d1000 	ldr	r1, [sp]
        2d32ac:	e5810000 	str	r0, [r1]
        2d32b0:	e59d0000 	ldr	r0, [sp]
        2d32b4:	e5900000 	ldr	r0, [r0]
        2d32b8:	e3300002 	teq	r0, #2	; 0x2
        2d32bc:	1a000003 	bne	2d32d0 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x100>
        2d32c0:	e28d0018 	add	r0, sp, #24	; 0x18
        2d32c4:	eb5dbfbd 	bl	1a431c0 <$SearchForObjectName(RefVar const &)>
        2d32c8:	e59d1000 	ldr	r1, [sp]
        2d32cc:	e5810000 	str	r0, [r1]
        2d32d0:	e59d0000 	ldr	r0, [sp]
        2d32d4:	e5900000 	ldr	r0, [r0]
        2d32d8:	e3300002 	teq	r0, #2	; 0x2
        2d32dc:	0a000003 	beq	2d32f0 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x120>
        2d32e0:	e1a0200d 	mov	r2, sp
        2d32e4:	e1a01006 	mov	r1, r6
        2d32e8:	e28d000c 	add	r0, sp, #12	; 0xc
        2d32ec:	eb63cc1d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d32f0:	e59d0000 	ldr	r0, [sp]
        2d32f4:	eb63bfb0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d32f8:	e28dd004 	add	sp, sp, #4	; 0x4
        2d32fc:	e59d0000 	ldr	r0, [sp]
        2d3300:	eb63bfad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d3304:	e28dd004 	add	sp, sp, #4	; 0x4
        2d3308:	e1a01004 	mov	r1, r4
        2d330c:	e1a00005 	mov	r0, r5
        2d3310:	eb64bb86 	bl	1c02130 <TNSDebugAPI::$PC(long)>
        2d3314:	e1a00100 	mov	r0, r0, lsl #2
        2d3318:	eb63bb8b 	bl	1bc214c <$AllocateRefHandle(long)>
        2d331c:	e58d0000 	str	r0, [sp]
        2d3320:	e1a0200d 	mov	r2, sp
        2d3324:	e59f1088 	ldr	r1, [pc, #88]	; 2d33b4 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x1e4>
        2d3328:	e28d0004 	add	r0, sp, #4	; 0x4
        2d332c:	eb63cc0d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d3330:	e59d0000 	ldr	r0, [sp]
        2d3334:	eb63bfa0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d3338:	e59d000c 	ldr	r0, [sp, #12]
        2d333c:	e5900000 	ldr	r0, [r0]
        2d3340:	e59f4070 	ldr	r4, [pc, #70]	; 2d33b8 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x1e8>
        2d3344:	e59f5070 	ldr	r5, [pc, #70]	; 2d33bc <NTKStackFrameInfo(TNSDebugAPI &, long)+0x1ec>
        2d3348:	e3300002 	teq	r0, #2	; 0x2
        2d334c:	0a000030 	beq	2d3414 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x244>
        2d3350:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3354:	e3a00002 	mov	r0, #2	; 0x2
        2d3358:	eb63bb7b 	bl	1bc214c <$AllocateRefHandle(long)>
        2d335c:	e58d0000 	str	r0, [sp]
        2d3360:	e59d0010 	ldr	r0, [sp, #16]
        2d3364:	e5900000 	ldr	r0, [r0]
        2d3368:	e5941000 	ldr	r1, [r4]
        2d336c:	e5911000 	ldr	r1, [r1]
        2d3370:	eb63c3b4 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        2d3374:	e3300000 	teq	r0, #0	; 0x0
        2d3378:	e59d0010 	ldr	r0, [sp, #16]
        2d337c:	e5900000 	ldr	r0, [r0]
        2d3380:	15941000 	ldrne	r1, [r4]
        2d3384:	1a000007 	bne	2d33a8 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x1d8>
        2d3388:	e5951000 	ldr	r1, [r5]
        2d338c:	e5911000 	ldr	r1, [r1]
        2d3390:	eb63c3ac 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        2d3394:	e3300000 	teq	r0, #0	; 0x0
        2d3398:	0a000008 	beq	2d33c0 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x1f0>
        2d339c:	e59d0010 	ldr	r0, [sp, #16]
        2d33a0:	e5900000 	ldr	r0, [r0]
        2d33a4:	e5951000 	ldr	r1, [r5]
        2d33a8:	e5911000 	ldr	r1, [r1]
        2d33ac:	eb63c3ab 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d33b0:	ea000004 	b	2d33c8 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x1f8>
        2d33b4:	00684040 	rsbeq	r4, r8, r0, asr #32
        2d33b8:	00682848 	rsbeq	r2, r8, r8, asr #16
        2d33bc:	00682840 	rsbeq	r2, r8, r0, asr #16
        2d33c0:	e28d0010 	add	r0, sp, #16	; 0x10
        2d33c4:	eb5dbf7d 	bl	1a431c0 <$SearchForObjectName(RefVar const &)>
        2d33c8:	e59d1000 	ldr	r1, [sp]
        2d33cc:	e5810000 	str	r0, [r1]
        2d33d0:	e59d0000 	ldr	r0, [sp]
        2d33d4:	e5900000 	ldr	r0, [r0]
        2d33d8:	e3300002 	teq	r0, #2	; 0x2
        2d33dc:	0a000009 	beq	2d3408 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x238>
        2d33e0:	e3100003 	tst	r0, #3	; 0x3
        2d33e4:	1a000003 	bne	2d33f8 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x228>
        2d33e8:	e1a0000d 	mov	r0, sp
        2d33ec:	ebfc598a 	bl	1e9a1c <GetNameFromDebugHash(RefVar const &)>
        2d33f0:	e59d1000 	ldr	r1, [sp]
        2d33f4:	e5810000 	str	r0, [r1]
        2d33f8:	e1a0200d 	mov	r2, sp
        2d33fc:	e59f1084 	ldr	r1, [pc, #84]	; 2d3488 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x2b8>
        2d3400:	e28d0008 	add	r0, sp, #8	; 0x8
        2d3404:	eb63cbd7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d3408:	e59d0000 	ldr	r0, [sp]
        2d340c:	eb63bf6a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d3410:	e28dd004 	add	sp, sp, #4	; 0x4
        2d3414:	e59d0008 	ldr	r0, [sp, #8]
        2d3418:	e5900000 	ldr	r0, [r0]
        2d341c:	e3300002 	teq	r0, #2	; 0x2
        2d3420:	0a00002e 	beq	2d34e0 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x310>
        2d3424:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3428:	e3a00002 	mov	r0, #2	; 0x2
        2d342c:	eb63bb46 	bl	1bc214c <$AllocateRefHandle(long)>
        2d3430:	e58d0000 	str	r0, [sp]
        2d3434:	e59d000c 	ldr	r0, [sp, #12]
        2d3438:	e5900000 	ldr	r0, [r0]
        2d343c:	e5941000 	ldr	r1, [r4]
        2d3440:	e5911000 	ldr	r1, [r1]
        2d3444:	eb63c37f 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        2d3448:	e3300000 	teq	r0, #0	; 0x0
        2d344c:	e59d000c 	ldr	r0, [sp, #12]
        2d3450:	e5900000 	ldr	r0, [r0]
        2d3454:	15941000 	ldrne	r1, [r4]
        2d3458:	1a000007 	bne	2d347c <NTKStackFrameInfo(TNSDebugAPI &, long)+0x2ac>
        2d345c:	e5951000 	ldr	r1, [r5]
        2d3460:	e5911000 	ldr	r1, [r1]
        2d3464:	eb63c377 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        2d3468:	e3300000 	teq	r0, #0	; 0x0
        2d346c:	0a000006 	beq	2d348c <NTKStackFrameInfo(TNSDebugAPI &, long)+0x2bc>
        2d3470:	e59d000c 	ldr	r0, [sp, #12]
        2d3474:	e5900000 	ldr	r0, [r0]
        2d3478:	e5951000 	ldr	r1, [r5]
        2d347c:	e5911000 	ldr	r1, [r1]
        2d3480:	eb63c376 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d3484:	ea000002 	b	2d3494 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x2c4>
        2d3488:	00684150 	rsbeq	r4, r8, r0, asr r1
        2d348c:	e28d000c 	add	r0, sp, #12	; 0xc
        2d3490:	eb5dbf4a 	bl	1a431c0 <$SearchForObjectName(RefVar const &)>
        2d3494:	e59d1000 	ldr	r1, [sp]
        2d3498:	e5810000 	str	r0, [r1]
        2d349c:	e59d0000 	ldr	r0, [sp]
        2d34a0:	e5900000 	ldr	r0, [r0]
        2d34a4:	e3300002 	teq	r0, #2	; 0x2
        2d34a8:	0a000009 	beq	2d34d4 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x304>
        2d34ac:	e3100003 	tst	r0, #3	; 0x3
        2d34b0:	1a000003 	bne	2d34c4 <NTKStackFrameInfo(TNSDebugAPI &, long)+0x2f4>
        2d34b4:	e1a0000d 	mov	r0, sp
        2d34b8:	ebfc5957 	bl	1e9a1c <GetNameFromDebugHash(RefVar const &)>
        2d34bc:	e59d1000 	ldr	r1, [sp]
        2d34c0:	e5810000 	str	r0, [r1]
        2d34c4:	e1a0200d 	mov	r2, sp
        2d34c8:	e59f103c 	ldr	r1, [pc, #3c]	; 2d350c <NTKStackFrameInfo(TNSDebugAPI &, long)+0x33c>
        2d34cc:	e28d0008 	add	r0, sp, #8	; 0x8
        2d34d0:	eb63cba4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d34d4:	e59d0000 	ldr	r0, [sp]
        2d34d8:	eb63bf37 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d34dc:	e28dd004 	add	sp, sp, #4	; 0x4
        2d34e0:	e59d0004 	ldr	r0, [sp, #4]
        2d34e4:	e5904000 	ldr	r4, [r0]
        2d34e8:	eb63bf33 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d34ec:	e59d0008 	ldr	r0, [sp, #8]
        2d34f0:	eb63bf31 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d34f4:	e59d000c 	ldr	r0, [sp, #12]
        2d34f8:	eb63bf2f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d34fc:	e59d0010 	ldr	r0, [sp, #16]
        2d3500:	eb63bf2d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d3504:	e1a00004 	mov	r0, r4
        2d3508:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2d350c:	00683190 	streqb	r3, [r8], -#16
    */
}

/**
 * Symbol: NTKStackTrace(void *)
 * Address: 002d3510
 */
NTKStackTrace(void *) {
    /*
        2d3510:	e1a0c00d 	mov	ip, sp
        2d3514:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d3518:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d351c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d3520:	e1a01000 	mov	r1, r0
        2d3524:	e28d0004 	add	r0, sp, #4	; 0x4
        2d3528:	eb5e19dc 	bl	1a59ca0 <TNSDebugAPI::$__ct(TInterpreter *)>
        2d352c:	e28d0004 	add	r0, sp, #4	; 0x4
        2d3530:	eb64bafb 	bl	1c02124 <TNSDebugAPI::$NumStackFrames(void)>
        2d3534:	e1a05000 	mov	r5, r0
        2d3538:	e1a01000 	mov	r1, r0
        2d353c:	e59f0074 	ldr	r0, [pc, #74]	; 2d35b8 <NTKStackTrace(void *)+0xa8>
        2d3540:	eb63bafc 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d3544:	eb63bb00 	bl	1bc214c <$AllocateRefHandle(long)>
        2d3548:	e3a04000 	mov	r4, #0	; 0x0
        2d354c:	e2456001 	sub	r6, r5, #1	; 0x1
        2d3550:	e3550000 	cmp	r5, #0	; 0x0
        2d3554:	e58d0000 	str	r0, [sp]
        2d3558:	da00000c 	ble	2d3590 <NTKStackTrace(void *)+0x80>
        2d355c:	e59d0000 	ldr	r0, [sp]
        2d3560:	e1a01004 	mov	r1, r4
        2d3564:	e5907000 	ldr	r7, [r0]
        2d3568:	e28d0004 	add	r0, sp, #4	; 0x4
        2d356c:	eb5e0d66 	bl	1a56b0c <$NTKStackFrameInfo(TNSDebugAPI &, long)>
        2d3570:	e1a02000 	mov	r2, r0
        2d3574:	e1a01006 	mov	r1, r6
        2d3578:	e1a00007 	mov	r0, r7
        2d357c:	eb63cb75 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d3580:	e2844001 	add	r4, r4, #1	; 0x1
        2d3584:	e2466001 	sub	r6, r6, #1	; 0x1
        2d3588:	e1540005 	cmp	r4, r5
        2d358c:	bafffff2 	blt	2d355c <NTKStackTrace(void *)+0x4c>
        2d3590:	e1a0000d 	mov	r0, sp
        2d3594:	eb5fd3a3 	bl	1ac8428 <$NTKSendStackTrace(RefVar const &)>
        2d3598:	e1a04000 	mov	r4, r0
        2d359c:	e59d0000 	ldr	r0, [sp]
        2d35a0:	eb63bf05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d35a4:	e28d0004 	add	r0, sp, #4	; 0x4
        2d35a8:	e3a01000 	mov	r1, #0	; 0x0
        2d35ac:	eb5e19c3 	bl	1a59cc0 <TNSDebugAPI::$__dt(void)>
        2d35b0:	e1a00004 	mov	r0, r4
        2d35b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2d35b8:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: NewProxyEntry__FRC6RefVarT1
 * Address: 002db03c
 */
void globals::NewProxyEntry() {
    /*
        2db03c:	e1a03001 	mov	r3, r1
        2db040:	e3a02000 	mov	r2, #0	; 0x0
        2db044:	e3a01002 	mov	r1, #2	; 0x2
        2db048:	ea5d981f 	b	1a410cc <$MakeFaultBlock(RefVar const &, TStoreWrapper *, unsigned long, TStoreWrapper *)>
    */
}

/**
 * Symbol: NewDecompressor(CompressionType, long (*)(unsigned long, void *, long *, unsigned char *), unsigned long)
 * Address: 002dd170
 */
NewDecompressor(CompressionType, long (*)(unsigned long, void *, long *, unsigned char *), unsigned long) {
    /*
        2dd170:	e1a0c00d 	mov	ip, sp
        2dd174:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2dd178:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd17c:	e1a05001 	mov	r5, r1
        2dd180:	e1a04002 	mov	r4, r2
        2dd184:	e3a06000 	mov	r6, #0	; 0x0
        2dd188:	e3300001 	teq	r0, #1	; 0x1
        2dd18c:	0a000010 	beq	2dd1d4 <NewDecompressor(CompressionType, long (*)(unsigned long, void *, long *, unsigned char *), unsigned long)+0x64>
        2dd190:	e3300002 	teq	r0, #2	; 0x2
        2dd194:	1a00000e 	bne	2dd1d4 <NewDecompressor(CompressionType, long (*)(unsigned long, void *, long *, unsigned char *), unsigned long)+0x64>
        2dd198:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        2dd19c:	e28f0f14 	add	r0, pc, #80	; 0x50
        2dd1a0:	eb63ea79 	bl	1bd7b8c <$NewByName__FPCcT1>
        2dd1a4:	e1b06000 	movs	r6, r0
        2dd1a8:	028f0f17 	addeq	r0, pc, #92	; 0x5c
        2dd1ac:	0b6417fb 	bleq	1be31a0 <$ThrowMsg>
        2dd1b0:	e1a00006 	mov	r0, r6
        2dd1b4:	e3a01000 	mov	r1, #0	; 0x0
        2dd1b8:	eb02b15f 	bl	38973c <TCallbackDecompressor::Init(void *)>
        2dd1bc:	e3300000 	teq	r0, #0	; 0x0
        2dd1c0:	1b5d7f18 	blne	1a3ce28 <$_OSErr(long)>
        2dd1c4:	e3360000 	teq	r6, #0	; 0x0
        2dd1c8:	0a000001 	beq	2dd1d4 <NewDecompressor(CompressionType, long (*)(unsigned long, void *, long *, unsigned char *), unsigned long)+0x64>
        2dd1cc:	e5864014 	str	r4, [r6, #20]
        2dd1d0:	e5865010 	str	r5, [r6, #16]
        2dd1d4:	e1a00006 	mov	r0, r6
        2dd1d8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2dd1dc:	54556e69 	ldrplb	r6, [r5], -#3689
        2dd1e0:	636f6465 	cmnvs	pc, #1694498816	; 0x65000000
        2dd1e4:	4465636f 	strmibt	r6, [r5], -#879
        2dd1e8:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        2dd1ec:	73736f72 	cmnvc	r3, #456	; 0x1c8
        2dd1f0:	00000000 	andeq	r0, r0, r0
        2dd1f4:	5443616c 	strplb	r6, [r3], -#364
        2dd1f8:	6c626163 	stfvse	f6, [r2], -#396
        2dd1fc:	6b446563 	blvs	13f6790 <ROM$$Size+0xcd6b44>
        2dd200:	6f6d7072 	swivs	0x006d7072
        2dd204:	6573736f 	ldrvsb	r7, [r3, -#879]!
        2dd208:	72000000 	andvc	r0, r0, #0	; 0x0
        2dd20c:	436f756c 	cmnmi	pc, #452984832	; 0x1b000000
        2dd210:	646e2774 	strvsbt	r2, [lr], -#1908
        2dd214:	20637265 	rsbcs	r7, r3, r5, ror #4
        2dd218:	61746520 	cmnvs	r4, r0, lsr #10
        2dd21c:	6465636f 	strvsbt	r6, [r5], -#879
        2dd220:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        2dd224:	73736f72 	cmnvc	r3, #456	; 0x1c8
        2dd228:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: nanl
 * Address: 002e2ddc
 */
void globals::nanl() {
    /*
        2e2ddc:	e5d00000 	ldrb	r0, [r0]
        2e2de0:	ee000190 	fltd	f0, r0
        2e2de4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: nanf
 * Address: 002e2de8
 */
void globals::nanf() {
    /*
        2e2de8:	e5d00000 	ldrb	r0, [r0]
        2e2dec:	ee000110 	flts	f0, r0
        2e2df0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NSCall(RefVar const &)
 * Address: 002ef9fc
 */
NSCall(RefVar const &) {
    /*
        2ef9fc:	e1a0c00d 	mov	ip, sp
        2efa00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2efa04:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efa08:	e1a04000 	mov	r4, r0
        2efa0c:	eb63561e 	bl	1bc528c <$IsFunction(RefVar const &)>
        2efa10:	e3300000 	teq	r0, #0	; 0x0
        2efa14:	01a01004 	moveq	r1, r4
        2efa18:	03a000e5 	moveq	r0, #229	; 0xe5
        2efa1c:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efa20:	0b64628d 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efa24:	e1a00004 	mov	r0, r4
        2efa28:	e3a01000 	mov	r1, #0	; 0x0
        2efa2c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2efa30:	ea5d8bc4 	b	1a52948 <$DoCall(RefVar const &, long)>
    */
}

/**
 * Symbol: NSCall__FRC6RefVarT1
 * Address: 002efa34
 */
void globals::NSCall() {
    /*
        2efa34:	e1a0c00d 	mov	ip, sp
        2efa38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2efa3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efa40:	e1a04000 	mov	r4, r0
        2efa44:	e1a05001 	mov	r5, r1
        2efa48:	eb63560f 	bl	1bc528c <$IsFunction(RefVar const &)>
        2efa4c:	e3300000 	teq	r0, #0	; 0x0
        2efa50:	01a01004 	moveq	r1, r4
        2efa54:	03a000e5 	moveq	r0, #229	; 0xe5
        2efa58:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efa5c:	0b64627e 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efa60:	e1a01005 	mov	r1, r5
        2efa64:	e59f0014 	ldr	r0, [pc, #14]	; 2efa80 <NSCall__FRC6RefVarT1+0x4c>
        2efa68:	e5900000 	ldr	r0, [r0]
        2efa6c:	eb640366 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efa70:	e1a00004 	mov	r0, r4
        2efa74:	e3a01001 	mov	r1, #1	; 0x1
        2efa78:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2efa7c:	ea5d8bb1 	b	1a52948 <$DoCall(RefVar const &, long)>
        2efa80:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSCall__FRC6RefVarN21
 * Address: 002efa84
 */
void globals::NSCall() {
    /*
        2efa84:	e1a0c00d 	mov	ip, sp
        2efa88:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2efa8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efa90:	e1a04000 	mov	r4, r0
        2efa94:	e1a06001 	mov	r6, r1
        2efa98:	e1a05002 	mov	r5, r2
        2efa9c:	eb6355fa 	bl	1bc528c <$IsFunction(RefVar const &)>
        2efaa0:	e3300000 	teq	r0, #0	; 0x0
        2efaa4:	01a01004 	moveq	r1, r4
        2efaa8:	03a000e5 	moveq	r0, #229	; 0xe5
        2efaac:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efab0:	0b646269 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efab4:	e1a01006 	mov	r1, r6
        2efab8:	e59f7020 	ldr	r7, [pc, #20]	; 2efae0 <NSCall__FRC6RefVarN21+0x5c>
        2efabc:	e5970000 	ldr	r0, [r7]
        2efac0:	eb640351 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efac4:	e1a01005 	mov	r1, r5
        2efac8:	e5970000 	ldr	r0, [r7]
        2efacc:	eb64034e 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efad0:	e1a00004 	mov	r0, r4
        2efad4:	e3a01002 	mov	r1, #2	; 0x2
        2efad8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2efadc:	ea5d8b99 	b	1a52948 <$DoCall(RefVar const &, long)>
        2efae0:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSCall__FRC6RefVarN31
 * Address: 002efae4
 */
void globals::NSCall() {
    /*
        2efae4:	e1a0c00d 	mov	ip, sp
        2efae8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2efaec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efaf0:	e1a04000 	mov	r4, r0
        2efaf4:	e1a07001 	mov	r7, r1
        2efaf8:	e1a06002 	mov	r6, r2
        2efafc:	e1a05003 	mov	r5, r3
        2efb00:	eb6355e1 	bl	1bc528c <$IsFunction(RefVar const &)>
        2efb04:	e3300000 	teq	r0, #0	; 0x0
        2efb08:	01a01004 	moveq	r1, r4
        2efb0c:	03a000e5 	moveq	r0, #229	; 0xe5
        2efb10:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efb14:	0b646250 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efb18:	e1a01007 	mov	r1, r7
        2efb1c:	e59f802c 	ldr	r8, [pc, #2c]	; 2efb50 <NSCall__FRC6RefVarN31+0x6c>
        2efb20:	e5980000 	ldr	r0, [r8]
        2efb24:	eb640338 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efb28:	e1a01006 	mov	r1, r6
        2efb2c:	e5980000 	ldr	r0, [r8]
        2efb30:	eb640335 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efb34:	e1a01005 	mov	r1, r5
        2efb38:	e5980000 	ldr	r0, [r8]
        2efb3c:	eb640332 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efb40:	e1a00004 	mov	r0, r4
        2efb44:	e3a01003 	mov	r1, #3	; 0x3
        2efb48:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2efb4c:	ea5d8b7d 	b	1a52948 <$DoCall(RefVar const &, long)>
        2efb50:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSCall__FRC6RefVarN41
 * Address: 002efb54
 */
void globals::NSCall() {
    /*
        2efb54:	e1a0c00d 	mov	ip, sp
        2efb58:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2efb5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efb60:	e1a04000 	mov	r4, r0
        2efb64:	e1a07001 	mov	r7, r1
        2efb68:	e1a06002 	mov	r6, r2
        2efb6c:	e1a05003 	mov	r5, r3
        2efb70:	e59b8004 	ldr	r8, [fp, #4]
        2efb74:	eb6355c4 	bl	1bc528c <$IsFunction(RefVar const &)>
        2efb78:	e3300000 	teq	r0, #0	; 0x0
        2efb7c:	01a01004 	moveq	r1, r4
        2efb80:	03a000e5 	moveq	r0, #229	; 0xe5
        2efb84:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efb88:	0b646233 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efb8c:	e1a01007 	mov	r1, r7
        2efb90:	e59f9038 	ldr	r9, [pc, #38]	; 2efbd0 <NSCall__FRC6RefVarN41+0x7c>
        2efb94:	e5990000 	ldr	r0, [r9]
        2efb98:	eb64031b 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efb9c:	e1a01006 	mov	r1, r6
        2efba0:	e5990000 	ldr	r0, [r9]
        2efba4:	eb640318 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efba8:	e1a01005 	mov	r1, r5
        2efbac:	e5990000 	ldr	r0, [r9]
        2efbb0:	eb640315 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efbb4:	e1a01008 	mov	r1, r8
        2efbb8:	e5990000 	ldr	r0, [r9]
        2efbbc:	eb640312 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efbc0:	e1a00004 	mov	r0, r4
        2efbc4:	e3a01004 	mov	r1, #4	; 0x4
        2efbc8:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2efbcc:	ea5d8b5d 	b	1a52948 <$DoCall(RefVar const &, long)>
        2efbd0:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSCall__FRC6RefVarN51
 * Address: 002efbd4
 */
void globals::NSCall() {
    /*
        2efbd4:	e1a0c00d 	mov	ip, sp
        2efbd8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2efbdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efbe0:	e1a04000 	mov	r4, r0
        2efbe4:	e1a07001 	mov	r7, r1
        2efbe8:	e1a06002 	mov	r6, r2
        2efbec:	e1a05003 	mov	r5, r3
        2efbf0:	e59b8008 	ldr	r8, [fp, #8]
        2efbf4:	e59b9004 	ldr	r9, [fp, #4]
        2efbf8:	eb6355a3 	bl	1bc528c <$IsFunction(RefVar const &)>
        2efbfc:	e3300000 	teq	r0, #0	; 0x0
        2efc00:	01a01004 	moveq	r1, r4
        2efc04:	03a000e5 	moveq	r0, #229	; 0xe5
        2efc08:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efc0c:	0b646212 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efc10:	e1a01007 	mov	r1, r7
        2efc14:	e59fa044 	ldr	sl, [pc, #44]	; 2efc60 <NSCall__FRC6RefVarN51+0x8c>
        2efc18:	e59a0000 	ldr	r0, [sl]
        2efc1c:	eb6402fa 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efc20:	e1a01006 	mov	r1, r6
        2efc24:	e59a0000 	ldr	r0, [sl]
        2efc28:	eb6402f7 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efc2c:	e1a01005 	mov	r1, r5
        2efc30:	e59a0000 	ldr	r0, [sl]
        2efc34:	eb6402f4 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efc38:	e1a01009 	mov	r1, r9
        2efc3c:	e59a0000 	ldr	r0, [sl]
        2efc40:	eb6402f1 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efc44:	e1a01008 	mov	r1, r8
        2efc48:	e59a0000 	ldr	r0, [sl]
        2efc4c:	eb6402ee 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efc50:	e1a00004 	mov	r0, r4
        2efc54:	e3a01005 	mov	r1, #5	; 0x5
        2efc58:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2efc5c:	ea5d8b39 	b	1a52948 <$DoCall(RefVar const &, long)>
        2efc60:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSCall__FRC6RefVarN61
 * Address: 002efc64
 */
void globals::NSCall() {
    /*
        2efc64:	e1a0c00d 	mov	ip, sp
        2efc68:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2efc6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efc70:	e1a04000 	mov	r4, r0
        2efc74:	e1a07001 	mov	r7, r1
        2efc78:	e1a06002 	mov	r6, r2
        2efc7c:	e1a05003 	mov	r5, r3
        2efc80:	e59b800c 	ldr	r8, [fp, #12]
        2efc84:	e59b9008 	ldr	r9, [fp, #8]
        2efc88:	e59ba004 	ldr	sl, [fp, #4]
        2efc8c:	eb63557e 	bl	1bc528c <$IsFunction(RefVar const &)>
        2efc90:	e3300000 	teq	r0, #0	; 0x0
        2efc94:	01a01004 	moveq	r1, r4
        2efc98:	03a000e5 	moveq	r0, #229	; 0xe5
        2efc9c:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efca0:	0b6461ed 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efca4:	e1a01007 	mov	r1, r7
        2efca8:	e59f7050 	ldr	r7, [pc, #50]	; 2efd00 <NSCall__FRC6RefVarN61+0x9c>
        2efcac:	e5970000 	ldr	r0, [r7]
        2efcb0:	eb6402d5 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efcb4:	e1a01006 	mov	r1, r6
        2efcb8:	e5970000 	ldr	r0, [r7]
        2efcbc:	eb6402d2 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efcc0:	e1a01005 	mov	r1, r5
        2efcc4:	e5970000 	ldr	r0, [r7]
        2efcc8:	eb6402cf 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efccc:	e1a0100a 	mov	r1, sl
        2efcd0:	e5970000 	ldr	r0, [r7]
        2efcd4:	eb6402cc 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efcd8:	e1a01009 	mov	r1, r9
        2efcdc:	e5970000 	ldr	r0, [r7]
        2efce0:	eb6402c9 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efce4:	e1a01008 	mov	r1, r8
        2efce8:	e5970000 	ldr	r0, [r7]
        2efcec:	eb6402c6 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efcf0:	e1a00004 	mov	r0, r4
        2efcf4:	e3a01006 	mov	r1, #6	; 0x6
        2efcf8:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2efcfc:	ea5d8b11 	b	1a52948 <$DoCall(RefVar const &, long)>
        2efd00:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSCallWithArgArray__FRC6RefVarT1
 * Address: 002efd04
 */
void globals::NSCallWithArgArray() {
    /*
        2efd04:	e1a0c00d 	mov	ip, sp
        2efd08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2efd0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efd10:	e1a04000 	mov	r4, r0
        2efd14:	e1a05001 	mov	r5, r1
        2efd18:	eb63555b 	bl	1bc528c <$IsFunction(RefVar const &)>
        2efd1c:	e3300000 	teq	r0, #0	; 0x0
        2efd20:	01a01004 	moveq	r1, r4
        2efd24:	03a000e5 	moveq	r0, #229	; 0xe5
        2efd28:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efd2c:	0b6461ca 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efd30:	e1a00005 	mov	r0, r5
        2efd34:	eb5d9b82 	bl	1a56b44 <$PushArgArray(RefVar const &)>
        2efd38:	e1a01000 	mov	r1, r0
        2efd3c:	e1a00004 	mov	r0, r4
        2efd40:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2efd44:	ea5d8aff 	b	1a52948 <$DoCall(RefVar const &, long)>
    */
}

/**
 * Symbol: NSSend__FRC6RefVarT1
 * Address: 002efd48
 */
void globals::NSSend() {
    /*
        2efd48:	e1a0c00d 	mov	ip, sp
        2efd4c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2efd50:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efd54:	e1a05000 	mov	r5, r0
        2efd58:	e1a04001 	mov	r4, r1
        2efd5c:	e5910000 	ldr	r0, [r1]
        2efd60:	e5900000 	ldr	r0, [r0]
        2efd64:	eb63554e 	bl	1bc52a4 <$IsSymbol(long)>
        2efd68:	e3300000 	teq	r0, #0	; 0x0
        2efd6c:	01a01004 	moveq	r1, r4
        2efd70:	03a000e6 	moveq	r0, #230	; 0xe6
        2efd74:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efd78:	0b6461b7 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efd7c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2efd80:	e1a01004 	mov	r1, r4
        2efd84:	e1a00005 	mov	r0, r5
        2efd88:	eb64029d 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2efd8c:	eb6348ee 	bl	1bc214c <$AllocateRefHandle(long)>
        2efd90:	e1a02004 	mov	r2, r4
        2efd94:	e58d0000 	str	r0, [sp]
        2efd98:	e1a0100d 	mov	r1, sp
        2efd9c:	e1a00005 	mov	r0, r5
        2efda0:	e3a03000 	mov	r3, #0	; 0x0
        2efda4:	eb5d8ae8 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2efda8:	e1a04000 	mov	r4, r0
        2efdac:	e59d0000 	ldr	r0, [sp]
        2efdb0:	eb634d01 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2efdb4:	e1a00004 	mov	r0, r4
        2efdb8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NSSend__FRC6RefVarN21
 * Address: 002efdbc
 */
void globals::NSSend() {
    /*
        2efdbc:	e1a0c00d 	mov	ip, sp
        2efdc0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2efdc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2efdc8:	e1a05000 	mov	r5, r0
        2efdcc:	e1a04001 	mov	r4, r1
        2efdd0:	e1a06002 	mov	r6, r2
        2efdd4:	e5910000 	ldr	r0, [r1]
        2efdd8:	e5900000 	ldr	r0, [r0]
        2efddc:	eb635530 	bl	1bc52a4 <$IsSymbol(long)>
        2efde0:	e3300000 	teq	r0, #0	; 0x0
        2efde4:	01a01004 	moveq	r1, r4
        2efde8:	03a000e6 	moveq	r0, #230	; 0xe6
        2efdec:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2efdf0:	0b646199 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2efdf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2efdf8:	e1a01004 	mov	r1, r4
        2efdfc:	e1a00005 	mov	r0, r5
        2efe00:	eb64027f 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2efe04:	eb6348d0 	bl	1bc214c <$AllocateRefHandle(long)>
        2efe08:	e1a01006 	mov	r1, r6
        2efe0c:	e58d0000 	str	r0, [sp]
        2efe10:	e59f002c 	ldr	r0, [pc, #2c]	; 2efe44 <NSSend__FRC6RefVarN21+0x88>
        2efe14:	e5900000 	ldr	r0, [r0]
        2efe18:	eb64027b 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2efe1c:	e1a02004 	mov	r2, r4
        2efe20:	e1a0100d 	mov	r1, sp
        2efe24:	e1a00005 	mov	r0, r5
        2efe28:	e3a03001 	mov	r3, #1	; 0x1
        2efe2c:	eb5d8ac6 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2efe30:	e1a04000 	mov	r4, r0
        2efe34:	e59d0000 	ldr	r0, [sp]
        2efe38:	eb634cdf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2efe3c:	e1a00004 	mov	r0, r4
        2efe40:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2efe44:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSend__FRC6RefVarN31
 * Address: 002eff28
 */
void globals::NSSend() {
    /*
        2eff28:	e1a0c00d 	mov	ip, sp
        2eff2c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2eff30:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eff34:	e1a05000 	mov	r5, r0
        2eff38:	e1a04001 	mov	r4, r1
        2eff3c:	e1a07002 	mov	r7, r2
        2eff40:	e1a06003 	mov	r6, r3
        2eff44:	e5910000 	ldr	r0, [r1]
        2eff48:	e5900000 	ldr	r0, [r0]
        2eff4c:	eb6354d4 	bl	1bc52a4 <$IsSymbol(long)>
        2eff50:	e3300000 	teq	r0, #0	; 0x0
        2eff54:	01a01004 	moveq	r1, r4
        2eff58:	03a000e6 	moveq	r0, #230	; 0xe6
        2eff5c:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2eff60:	0b64613d 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2eff64:	e24dd004 	sub	sp, sp, #4	; 0x4
        2eff68:	e1a01004 	mov	r1, r4
        2eff6c:	e1a00005 	mov	r0, r5
        2eff70:	eb640223 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2eff74:	eb634874 	bl	1bc214c <$AllocateRefHandle(long)>
        2eff78:	e1a01007 	mov	r1, r7
        2eff7c:	e58d0000 	str	r0, [sp]
        2eff80:	e59f8038 	ldr	r8, [pc, #38]	; 2effc0 <NSSend__FRC6RefVarN31+0x98>
        2eff84:	e5980000 	ldr	r0, [r8]
        2eff88:	eb64021f 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2eff8c:	e1a01006 	mov	r1, r6
        2eff90:	e5980000 	ldr	r0, [r8]
        2eff94:	eb64021c 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2eff98:	e1a02004 	mov	r2, r4
        2eff9c:	e1a0100d 	mov	r1, sp
        2effa0:	e1a00005 	mov	r0, r5
        2effa4:	e3a03002 	mov	r3, #2	; 0x2
        2effa8:	eb5d8a67 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2effac:	e1a04000 	mov	r4, r0
        2effb0:	e59d0000 	ldr	r0, [sp]
        2effb4:	eb634c80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2effb8:	e1a00004 	mov	r0, r4
        2effbc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2effc0:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSend__FRC6RefVarN41
 * Address: 002effc4
 */
void globals::NSSend() {
    /*
        2effc4:	e1a0c00d 	mov	ip, sp
        2effc8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2effcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2effd0:	e1a05000 	mov	r5, r0
        2effd4:	e1a04001 	mov	r4, r1
        2effd8:	e1a07002 	mov	r7, r2
        2effdc:	e1a06003 	mov	r6, r3
        2effe0:	e59b8004 	ldr	r8, [fp, #4]
        2effe4:	e5910000 	ldr	r0, [r1]
        2effe8:	e5900000 	ldr	r0, [r0]
        2effec:	eb6354ac 	bl	1bc52a4 <$IsSymbol(long)>
        2efff0:	e3300000 	teq	r0, #0	; 0x0
        2efff4:	01a01004 	moveq	r1, r4
        2efff8:	03a000e6 	moveq	r0, #230	; 0xe6
        2efffc:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0000:	0b646115 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0004:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0008:	e1a01004 	mov	r1, r4
        2f000c:	e1a00005 	mov	r0, r5
        2f0010:	eb6401fb 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0014:	eb63484c 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0018:	e1a01007 	mov	r1, r7
        2f001c:	e58d0000 	str	r0, [sp]
        2f0020:	e59f9044 	ldr	r9, [pc, #44]	; 2f006c <NSSend__FRC6RefVarN41+0xa8>
        2f0024:	e5990000 	ldr	r0, [r9]
        2f0028:	eb6401f7 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f002c:	e1a01006 	mov	r1, r6
        2f0030:	e5990000 	ldr	r0, [r9]
        2f0034:	eb6401f4 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0038:	e1a01008 	mov	r1, r8
        2f003c:	e5990000 	ldr	r0, [r9]
        2f0040:	eb6401f1 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0044:	e1a02004 	mov	r2, r4
        2f0048:	e1a0100d 	mov	r1, sp
        2f004c:	e1a00005 	mov	r0, r5
        2f0050:	e3a03003 	mov	r3, #3	; 0x3
        2f0054:	eb5d8a3c 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0058:	e1a04000 	mov	r4, r0
        2f005c:	e59d0000 	ldr	r0, [sp]
        2f0060:	eb634c55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0064:	e1a00004 	mov	r0, r4
        2f0068:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2f006c:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSend__FRC6RefVarN51
 * Address: 002f0070
 */
void globals::NSSend() {
    /*
        2f0070:	e1a0c00d 	mov	ip, sp
        2f0074:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f0078:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f007c:	e1a05000 	mov	r5, r0
        2f0080:	e1a04001 	mov	r4, r1
        2f0084:	e1a07002 	mov	r7, r2
        2f0088:	e1a06003 	mov	r6, r3
        2f008c:	e59b8008 	ldr	r8, [fp, #8]
        2f0090:	e59b9004 	ldr	r9, [fp, #4]
        2f0094:	e5910000 	ldr	r0, [r1]
        2f0098:	e5900000 	ldr	r0, [r0]
        2f009c:	eb635480 	bl	1bc52a4 <$IsSymbol(long)>
        2f00a0:	e3300000 	teq	r0, #0	; 0x0
        2f00a4:	01a01004 	moveq	r1, r4
        2f00a8:	03a000e6 	moveq	r0, #230	; 0xe6
        2f00ac:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f00b0:	0b6460e9 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f00b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f00b8:	e1a01004 	mov	r1, r4
        2f00bc:	e1a00005 	mov	r0, r5
        2f00c0:	eb6401cf 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f00c4:	eb634820 	bl	1bc214c <$AllocateRefHandle(long)>
        2f00c8:	e1a01007 	mov	r1, r7
        2f00cc:	e58d0000 	str	r0, [sp]
        2f00d0:	e59fa050 	ldr	sl, [pc, #50]	; 2f0128 <NSSend__FRC6RefVarN51+0xb8>
        2f00d4:	e59a0000 	ldr	r0, [sl]
        2f00d8:	eb6401cb 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f00dc:	e1a01006 	mov	r1, r6
        2f00e0:	e59a0000 	ldr	r0, [sl]
        2f00e4:	eb6401c8 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f00e8:	e1a01009 	mov	r1, r9
        2f00ec:	e59a0000 	ldr	r0, [sl]
        2f00f0:	eb6401c5 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f00f4:	e1a01008 	mov	r1, r8
        2f00f8:	e59a0000 	ldr	r0, [sl]
        2f00fc:	eb6401c2 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0100:	e1a02004 	mov	r2, r4
        2f0104:	e1a0100d 	mov	r1, sp
        2f0108:	e1a00005 	mov	r0, r5
        2f010c:	e3a03004 	mov	r3, #4	; 0x4
        2f0110:	eb5d8a0d 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0114:	e1a04000 	mov	r4, r0
        2f0118:	e59d0000 	ldr	r0, [sp]
        2f011c:	eb634c26 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0120:	e1a00004 	mov	r0, r4
        2f0124:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f0128:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSend__FRC6RefVarN61
 * Address: 002f012c
 */
void globals::NSSend() {
    /*
        2f012c:	e1a0c00d 	mov	ip, sp
        2f0130:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f0134:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0138:	e1a05000 	mov	r5, r0
        2f013c:	e1a04001 	mov	r4, r1
        2f0140:	e1a07002 	mov	r7, r2
        2f0144:	e1a06003 	mov	r6, r3
        2f0148:	e59b800c 	ldr	r8, [fp, #12]
        2f014c:	e59b9008 	ldr	r9, [fp, #8]
        2f0150:	e59ba004 	ldr	sl, [fp, #4]
        2f0154:	e5910000 	ldr	r0, [r1]
        2f0158:	e5900000 	ldr	r0, [r0]
        2f015c:	eb635450 	bl	1bc52a4 <$IsSymbol(long)>
        2f0160:	e3300000 	teq	r0, #0	; 0x0
        2f0164:	01a01004 	moveq	r1, r4
        2f0168:	03a000e6 	moveq	r0, #230	; 0xe6
        2f016c:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0170:	0b6460b9 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0174:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0178:	e1a01004 	mov	r1, r4
        2f017c:	e1a00005 	mov	r0, r5
        2f0180:	eb64019f 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0184:	eb6347f0 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0188:	e1a01007 	mov	r1, r7
        2f018c:	e58d0000 	str	r0, [sp]
        2f0190:	e59f705c 	ldr	r7, [pc, #5c]	; 2f01f4 <NSSend__FRC6RefVarN61+0xc8>
        2f0194:	e5970000 	ldr	r0, [r7]
        2f0198:	eb64019b 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f019c:	e1a01006 	mov	r1, r6
        2f01a0:	e5970000 	ldr	r0, [r7]
        2f01a4:	eb640198 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f01a8:	e1a0100a 	mov	r1, sl
        2f01ac:	e5970000 	ldr	r0, [r7]
        2f01b0:	eb640195 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f01b4:	e1a01009 	mov	r1, r9
        2f01b8:	e5970000 	ldr	r0, [r7]
        2f01bc:	eb640192 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f01c0:	e1a01008 	mov	r1, r8
        2f01c4:	e5970000 	ldr	r0, [r7]
        2f01c8:	eb64018f 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f01cc:	e1a02004 	mov	r2, r4
        2f01d0:	e1a0100d 	mov	r1, sp
        2f01d4:	e1a00005 	mov	r0, r5
        2f01d8:	e3a03005 	mov	r3, #5	; 0x5
        2f01dc:	eb5d89da 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f01e0:	e1a04000 	mov	r4, r0
        2f01e4:	e59d0000 	ldr	r0, [sp]
        2f01e8:	eb634bf3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f01ec:	e1a00004 	mov	r0, r4
        2f01f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f01f4:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSend__FRC6RefVarN71
 * Address: 002f01f8
 */
void globals::NSSend() {
    /*
        2f01f8:	e1a0c00d 	mov	ip, sp
        2f01fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2f0200:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f0204:	e24cb014 	sub	fp, ip, #20	; 0x14
        2f0208:	e1a05000 	mov	r5, r0
        2f020c:	e1a04001 	mov	r4, r1
        2f0210:	e1a06002 	mov	r6, r2
        2f0214:	e59b7020 	ldr	r7, [fp, #32]
        2f0218:	e59b801c 	ldr	r8, [fp, #28]
        2f021c:	e59b9018 	ldr	r9, [fp, #24]
        2f0220:	e59ba014 	ldr	sl, [fp, #20]
        2f0224:	e5910000 	ldr	r0, [r1]
        2f0228:	e5900000 	ldr	r0, [r0]
        2f022c:	eb63541c 	bl	1bc52a4 <$IsSymbol(long)>
        2f0230:	e3300000 	teq	r0, #0	; 0x0
        2f0234:	01a01004 	moveq	r1, r4
        2f0238:	03a000e6 	moveq	r0, #230	; 0xe6
        2f023c:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0240:	0b646085 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0244:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0248:	e1a01004 	mov	r1, r4
        2f024c:	e1a00005 	mov	r0, r5
        2f0250:	eb64016b 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0254:	eb6347bc 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0258:	e1a01006 	mov	r1, r6
        2f025c:	e58d0000 	str	r0, [sp]
        2f0260:	e59f6068 	ldr	r6, [pc, #68]	; 2f02d0 <NSSend__FRC6RefVarN71+0xd8>
        2f0264:	e5960000 	ldr	r0, [r6]
        2f0268:	eb640167 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f026c:	e59b1010 	ldr	r1, [fp, #16]
        2f0270:	e5960000 	ldr	r0, [r6]
        2f0274:	eb640164 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0278:	e1a0100a 	mov	r1, sl
        2f027c:	e5960000 	ldr	r0, [r6]
        2f0280:	eb640161 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0284:	e1a01009 	mov	r1, r9
        2f0288:	e5960000 	ldr	r0, [r6]
        2f028c:	eb64015e 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0290:	e1a01008 	mov	r1, r8
        2f0294:	e5960000 	ldr	r0, [r6]
        2f0298:	eb64015b 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f029c:	e1a01007 	mov	r1, r7
        2f02a0:	e5960000 	ldr	r0, [r6]
        2f02a4:	eb640158 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f02a8:	e1a02004 	mov	r2, r4
        2f02ac:	e1a0100d 	mov	r1, sp
        2f02b0:	e1a00005 	mov	r0, r5
        2f02b4:	e3a03006 	mov	r3, #6	; 0x6
        2f02b8:	eb5d89a3 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f02bc:	e1a04000 	mov	r4, r0
        2f02c0:	e59d0000 	ldr	r0, [sp]
        2f02c4:	eb634bbc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f02c8:	e1a00004 	mov	r0, r4
        2f02cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f02d0:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendWithArgArray__FRC6RefVarN21
 * Address: 002f02d4
 */
void globals::NSSendWithArgArray() {
    /*
        2f02d4:	e1a0c00d 	mov	ip, sp
        2f02d8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f02dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f02e0:	e1a05000 	mov	r5, r0
        2f02e4:	e1a04001 	mov	r4, r1
        2f02e8:	e1a06002 	mov	r6, r2
        2f02ec:	e5910000 	ldr	r0, [r1]
        2f02f0:	e5900000 	ldr	r0, [r0]
        2f02f4:	eb6353ea 	bl	1bc52a4 <$IsSymbol(long)>
        2f02f8:	e3300000 	teq	r0, #0	; 0x0
        2f02fc:	01a01004 	moveq	r1, r4
        2f0300:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0304:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0308:	0b646053 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f030c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0310:	e1a01004 	mov	r1, r4
        2f0314:	e1a00005 	mov	r0, r5
        2f0318:	eb640139 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f031c:	eb63478a 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0320:	e58d0000 	str	r0, [sp]
        2f0324:	e1a00006 	mov	r0, r6
        2f0328:	eb5d9a05 	bl	1a56b44 <$PushArgArray(RefVar const &)>
        2f032c:	e1a03000 	mov	r3, r0
        2f0330:	e1a02004 	mov	r2, r4
        2f0334:	e1a0100d 	mov	r1, sp
        2f0338:	e1a00005 	mov	r0, r5
        2f033c:	eb5d8982 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0340:	e1a04000 	mov	r4, r0
        2f0344:	e59d0000 	ldr	r0, [sp]
        2f0348:	eb634b9b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f034c:	e1a00004 	mov	r0, r4
        2f0350:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NSSendProto__FRC6RefVarT1
 * Address: 002f0354
 */
void globals::NSSendProto() {
    /*
        2f0354:	e1a0c00d 	mov	ip, sp
        2f0358:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f035c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0360:	e1a05000 	mov	r5, r0
        2f0364:	e1a04001 	mov	r4, r1
        2f0368:	e5910000 	ldr	r0, [r1]
        2f036c:	e5900000 	ldr	r0, [r0]
        2f0370:	eb6353cb 	bl	1bc52a4 <$IsSymbol(long)>
        2f0374:	e3300000 	teq	r0, #0	; 0x0
        2f0378:	01a01004 	moveq	r1, r4
        2f037c:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0380:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0384:	0b646034 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0388:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f038c:	e1a01004 	mov	r1, r4
        2f0390:	e1a00005 	mov	r0, r5
        2f0394:	eb64011b 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f0398:	eb63476b 	bl	1bc214c <$AllocateRefHandle(long)>
        2f039c:	e1a02004 	mov	r2, r4
        2f03a0:	e58d0000 	str	r0, [sp]
        2f03a4:	e1a0100d 	mov	r1, sp
        2f03a8:	e1a00005 	mov	r0, r5
        2f03ac:	e3a03000 	mov	r3, #0	; 0x0
        2f03b0:	eb5d8965 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f03b4:	e1a04000 	mov	r4, r0
        2f03b8:	e59d0000 	ldr	r0, [sp]
        2f03bc:	eb634b7e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f03c0:	e1a00004 	mov	r0, r4
        2f03c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NSSendProto__FRC6RefVarN21
 * Address: 002f03c8
 */
void globals::NSSendProto() {
    /*
        2f03c8:	e1a0c00d 	mov	ip, sp
        2f03cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f03d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f03d4:	e1a05000 	mov	r5, r0
        2f03d8:	e1a04001 	mov	r4, r1
        2f03dc:	e1a06002 	mov	r6, r2
        2f03e0:	e5910000 	ldr	r0, [r1]
        2f03e4:	e5900000 	ldr	r0, [r0]
        2f03e8:	eb6353ad 	bl	1bc52a4 <$IsSymbol(long)>
        2f03ec:	e3300000 	teq	r0, #0	; 0x0
        2f03f0:	01a01004 	moveq	r1, r4
        2f03f4:	03a000e6 	moveq	r0, #230	; 0xe6
        2f03f8:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f03fc:	0b646016 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0400:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0404:	e1a01004 	mov	r1, r4
        2f0408:	e1a00005 	mov	r0, r5
        2f040c:	eb6400fd 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f0410:	eb63474d 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0414:	e1a01006 	mov	r1, r6
        2f0418:	e58d0000 	str	r0, [sp]
        2f041c:	e59f002c 	ldr	r0, [pc, #2c]	; 2f0450 <NSSendProto__FRC6RefVarN21+0x88>
        2f0420:	e5900000 	ldr	r0, [r0]
        2f0424:	eb6400f8 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0428:	e1a02004 	mov	r2, r4
        2f042c:	e1a0100d 	mov	r1, sp
        2f0430:	e1a00005 	mov	r0, r5
        2f0434:	e3a03001 	mov	r3, #1	; 0x1
        2f0438:	eb5d8943 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f043c:	e1a04000 	mov	r4, r0
        2f0440:	e59d0000 	ldr	r0, [sp]
        2f0444:	eb634b5c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0448:	e1a00004 	mov	r0, r4
        2f044c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2f0450:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProto__FRC6RefVarN31
 * Address: 002f0454
 */
void globals::NSSendProto() {
    /*
        2f0454:	e1a0c00d 	mov	ip, sp
        2f0458:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2f045c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0460:	e1a05000 	mov	r5, r0
        2f0464:	e1a04001 	mov	r4, r1
        2f0468:	e1a07002 	mov	r7, r2
        2f046c:	e1a06003 	mov	r6, r3
        2f0470:	e5910000 	ldr	r0, [r1]
        2f0474:	e5900000 	ldr	r0, [r0]
        2f0478:	eb635389 	bl	1bc52a4 <$IsSymbol(long)>
        2f047c:	e3300000 	teq	r0, #0	; 0x0
        2f0480:	01a01004 	moveq	r1, r4
        2f0484:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0488:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f048c:	0b645ff2 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0490:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0494:	e1a01004 	mov	r1, r4
        2f0498:	e1a00005 	mov	r0, r5
        2f049c:	eb6400d9 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f04a0:	eb634729 	bl	1bc214c <$AllocateRefHandle(long)>
        2f04a4:	e1a01007 	mov	r1, r7
        2f04a8:	e58d0000 	str	r0, [sp]
        2f04ac:	e59f8038 	ldr	r8, [pc, #38]	; 2f04ec <NSSendProto__FRC6RefVarN31+0x98>
        2f04b0:	e5980000 	ldr	r0, [r8]
        2f04b4:	eb6400d4 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f04b8:	e1a01006 	mov	r1, r6
        2f04bc:	e5980000 	ldr	r0, [r8]
        2f04c0:	eb6400d1 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f04c4:	e1a02004 	mov	r2, r4
        2f04c8:	e1a0100d 	mov	r1, sp
        2f04cc:	e1a00005 	mov	r0, r5
        2f04d0:	e3a03002 	mov	r3, #2	; 0x2
        2f04d4:	eb5d891c 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f04d8:	e1a04000 	mov	r4, r0
        2f04dc:	e59d0000 	ldr	r0, [sp]
        2f04e0:	eb634b35 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f04e4:	e1a00004 	mov	r0, r4
        2f04e8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2f04ec:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProto__FRC6RefVarN41
 * Address: 002f04f0
 */
void globals::NSSendProto() {
    /*
        2f04f0:	e1a0c00d 	mov	ip, sp
        2f04f4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2f04f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f04fc:	e1a05000 	mov	r5, r0
        2f0500:	e1a04001 	mov	r4, r1
        2f0504:	e1a07002 	mov	r7, r2
        2f0508:	e1a06003 	mov	r6, r3
        2f050c:	e59b8004 	ldr	r8, [fp, #4]
        2f0510:	e5910000 	ldr	r0, [r1]
        2f0514:	e5900000 	ldr	r0, [r0]
        2f0518:	eb635361 	bl	1bc52a4 <$IsSymbol(long)>
        2f051c:	e3300000 	teq	r0, #0	; 0x0
        2f0520:	01a01004 	moveq	r1, r4
        2f0524:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0528:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f052c:	0b645fca 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0530:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0534:	e1a01004 	mov	r1, r4
        2f0538:	e1a00005 	mov	r0, r5
        2f053c:	eb6400b1 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f0540:	eb634701 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0544:	e1a01007 	mov	r1, r7
        2f0548:	e58d0000 	str	r0, [sp]
        2f054c:	e59f9044 	ldr	r9, [pc, #44]	; 2f0598 <NSSendProto__FRC6RefVarN41+0xa8>
        2f0550:	e5990000 	ldr	r0, [r9]
        2f0554:	eb6400ac 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0558:	e1a01006 	mov	r1, r6
        2f055c:	e5990000 	ldr	r0, [r9]
        2f0560:	eb6400a9 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0564:	e1a01008 	mov	r1, r8
        2f0568:	e5990000 	ldr	r0, [r9]
        2f056c:	eb6400a6 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0570:	e1a02004 	mov	r2, r4
        2f0574:	e1a0100d 	mov	r1, sp
        2f0578:	e1a00005 	mov	r0, r5
        2f057c:	e3a03003 	mov	r3, #3	; 0x3
        2f0580:	eb5d88f1 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0584:	e1a04000 	mov	r4, r0
        2f0588:	e59d0000 	ldr	r0, [sp]
        2f058c:	eb634b0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0590:	e1a00004 	mov	r0, r4
        2f0594:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2f0598:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProto__FRC6RefVarN51
 * Address: 002f06e4
 */
void globals::NSSendProto() {
    /*
        2f06e4:	e1a0c00d 	mov	ip, sp
        2f06e8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f06ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f06f0:	e1a05000 	mov	r5, r0
        2f06f4:	e1a04001 	mov	r4, r1
        2f06f8:	e1a07002 	mov	r7, r2
        2f06fc:	e1a06003 	mov	r6, r3
        2f0700:	e59b8008 	ldr	r8, [fp, #8]
        2f0704:	e59b9004 	ldr	r9, [fp, #4]
        2f0708:	e5910000 	ldr	r0, [r1]
        2f070c:	e5900000 	ldr	r0, [r0]
        2f0710:	eb6352e3 	bl	1bc52a4 <$IsSymbol(long)>
        2f0714:	e3300000 	teq	r0, #0	; 0x0
        2f0718:	01a01004 	moveq	r1, r4
        2f071c:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0720:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0724:	0b645f4c 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0728:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f072c:	e1a01004 	mov	r1, r4
        2f0730:	e1a00005 	mov	r0, r5
        2f0734:	eb640033 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f0738:	eb634683 	bl	1bc214c <$AllocateRefHandle(long)>
        2f073c:	e1a01007 	mov	r1, r7
        2f0740:	e58d0000 	str	r0, [sp]
        2f0744:	e59fa050 	ldr	sl, [pc, #50]	; 2f079c <NSSendProto__FRC6RefVarN51+0xb8>
        2f0748:	e59a0000 	ldr	r0, [sl]
        2f074c:	eb64002e 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0750:	e1a01006 	mov	r1, r6
        2f0754:	e59a0000 	ldr	r0, [sl]
        2f0758:	eb64002b 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f075c:	e1a01009 	mov	r1, r9
        2f0760:	e59a0000 	ldr	r0, [sl]
        2f0764:	eb640028 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0768:	e1a01008 	mov	r1, r8
        2f076c:	e59a0000 	ldr	r0, [sl]
        2f0770:	eb640025 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0774:	e1a02004 	mov	r2, r4
        2f0778:	e1a0100d 	mov	r1, sp
        2f077c:	e1a00005 	mov	r0, r5
        2f0780:	e3a03004 	mov	r3, #4	; 0x4
        2f0784:	eb5d8870 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0788:	e1a04000 	mov	r4, r0
        2f078c:	e59d0000 	ldr	r0, [sp]
        2f0790:	eb634a89 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0794:	e1a00004 	mov	r0, r4
        2f0798:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f079c:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProto__FRC6RefVarN61
 * Address: 002f07a0
 */
void globals::NSSendProto() {
    /*
        2f07a0:	e1a0c00d 	mov	ip, sp
        2f07a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f07a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f07ac:	e1a05000 	mov	r5, r0
        2f07b0:	e1a04001 	mov	r4, r1
        2f07b4:	e1a07002 	mov	r7, r2
        2f07b8:	e1a06003 	mov	r6, r3
        2f07bc:	e59b800c 	ldr	r8, [fp, #12]
        2f07c0:	e59b9008 	ldr	r9, [fp, #8]
        2f07c4:	e59ba004 	ldr	sl, [fp, #4]
        2f07c8:	e5910000 	ldr	r0, [r1]
        2f07cc:	e5900000 	ldr	r0, [r0]
        2f07d0:	eb6352b3 	bl	1bc52a4 <$IsSymbol(long)>
        2f07d4:	e3300000 	teq	r0, #0	; 0x0
        2f07d8:	01a01004 	moveq	r1, r4
        2f07dc:	03a000e6 	moveq	r0, #230	; 0xe6
        2f07e0:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f07e4:	0b645f1c 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f07e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f07ec:	e1a01004 	mov	r1, r4
        2f07f0:	e1a00005 	mov	r0, r5
        2f07f4:	eb640003 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f07f8:	eb634653 	bl	1bc214c <$AllocateRefHandle(long)>
        2f07fc:	e1a01007 	mov	r1, r7
        2f0800:	e58d0000 	str	r0, [sp]
        2f0804:	e59f705c 	ldr	r7, [pc, #5c]	; 2f0868 <NSSendProto__FRC6RefVarN61+0xc8>
        2f0808:	e5970000 	ldr	r0, [r7]
        2f080c:	eb63fffe 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0810:	e1a01006 	mov	r1, r6
        2f0814:	e5970000 	ldr	r0, [r7]
        2f0818:	eb63fffb 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f081c:	e1a0100a 	mov	r1, sl
        2f0820:	e5970000 	ldr	r0, [r7]
        2f0824:	eb63fff8 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0828:	e1a01009 	mov	r1, r9
        2f082c:	e5970000 	ldr	r0, [r7]
        2f0830:	eb63fff5 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0834:	e1a01008 	mov	r1, r8
        2f0838:	e5970000 	ldr	r0, [r7]
        2f083c:	eb63fff2 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0840:	e1a02004 	mov	r2, r4
        2f0844:	e1a0100d 	mov	r1, sp
        2f0848:	e1a00005 	mov	r0, r5
        2f084c:	e3a03005 	mov	r3, #5	; 0x5
        2f0850:	eb5d883d 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0854:	e1a04000 	mov	r4, r0
        2f0858:	e59d0000 	ldr	r0, [sp]
        2f085c:	eb634a56 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0860:	e1a00004 	mov	r0, r4
        2f0864:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f0868:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProto__FRC6RefVarN71
 * Address: 002f086c
 */
void globals::NSSendProto() {
    /*
        2f086c:	e1a0c00d 	mov	ip, sp
        2f0870:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2f0874:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f0878:	e24cb014 	sub	fp, ip, #20	; 0x14
        2f087c:	e1a05000 	mov	r5, r0
        2f0880:	e1a04001 	mov	r4, r1
        2f0884:	e1a06002 	mov	r6, r2
        2f0888:	e59b7020 	ldr	r7, [fp, #32]
        2f088c:	e59b801c 	ldr	r8, [fp, #28]
        2f0890:	e59b9018 	ldr	r9, [fp, #24]
        2f0894:	e59ba014 	ldr	sl, [fp, #20]
        2f0898:	e5910000 	ldr	r0, [r1]
        2f089c:	e5900000 	ldr	r0, [r0]
        2f08a0:	eb63527f 	bl	1bc52a4 <$IsSymbol(long)>
        2f08a4:	e3300000 	teq	r0, #0	; 0x0
        2f08a8:	01a01004 	moveq	r1, r4
        2f08ac:	03a000e6 	moveq	r0, #230	; 0xe6
        2f08b0:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f08b4:	0b645ee8 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f08b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f08bc:	e1a01004 	mov	r1, r4
        2f08c0:	e1a00005 	mov	r0, r5
        2f08c4:	eb63ffcf 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f08c8:	eb63461f 	bl	1bc214c <$AllocateRefHandle(long)>
        2f08cc:	e1a01006 	mov	r1, r6
        2f08d0:	e58d0000 	str	r0, [sp]
        2f08d4:	e59f6068 	ldr	r6, [pc, #68]	; 2f0944 <NSSendProto__FRC6RefVarN71+0xd8>
        2f08d8:	e5960000 	ldr	r0, [r6]
        2f08dc:	eb63ffca 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f08e0:	e59b1010 	ldr	r1, [fp, #16]
        2f08e4:	e5960000 	ldr	r0, [r6]
        2f08e8:	eb63ffc7 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f08ec:	e1a0100a 	mov	r1, sl
        2f08f0:	e5960000 	ldr	r0, [r6]
        2f08f4:	eb63ffc4 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f08f8:	e1a01009 	mov	r1, r9
        2f08fc:	e5960000 	ldr	r0, [r6]
        2f0900:	eb63ffc1 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0904:	e1a01008 	mov	r1, r8
        2f0908:	e5960000 	ldr	r0, [r6]
        2f090c:	eb63ffbe 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0910:	e1a01007 	mov	r1, r7
        2f0914:	e5960000 	ldr	r0, [r6]
        2f0918:	eb63ffbb 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f091c:	e1a02004 	mov	r2, r4
        2f0920:	e1a0100d 	mov	r1, sp
        2f0924:	e1a00005 	mov	r0, r5
        2f0928:	e3a03006 	mov	r3, #6	; 0x6
        2f092c:	eb5d8806 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0930:	e1a04000 	mov	r4, r0
        2f0934:	e59d0000 	ldr	r0, [sp]
        2f0938:	eb634a1f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f093c:	e1a00004 	mov	r0, r4
        2f0940:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f0944:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProtoWithArgArray__FRC6RefVarN21
 * Address: 002f0948
 */
void globals::NSSendProtoWithArgArray() {
    /*
        2f0948:	e1a0c00d 	mov	ip, sp
        2f094c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f0950:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0954:	e1a05000 	mov	r5, r0
        2f0958:	e1a04001 	mov	r4, r1
        2f095c:	e1a06002 	mov	r6, r2
        2f0960:	e5910000 	ldr	r0, [r1]
        2f0964:	e5900000 	ldr	r0, [r0]
        2f0968:	eb63524d 	bl	1bc52a4 <$IsSymbol(long)>
        2f096c:	e3300000 	teq	r0, #0	; 0x0
        2f0970:	01a01004 	moveq	r1, r4
        2f0974:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0978:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f097c:	0b645eb6 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0980:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0984:	e1a01004 	mov	r1, r4
        2f0988:	e1a00005 	mov	r0, r5
        2f098c:	eb63ff9d 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f0990:	eb6345ed 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0994:	e58d0000 	str	r0, [sp]
        2f0998:	e1a00006 	mov	r0, r6
        2f099c:	eb5d9868 	bl	1a56b44 <$PushArgArray(RefVar const &)>
        2f09a0:	e1a03000 	mov	r3, r0
        2f09a4:	e1a02004 	mov	r2, r4
        2f09a8:	e1a0100d 	mov	r1, sp
        2f09ac:	e1a00005 	mov	r0, r5
        2f09b0:	eb5d87e5 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f09b4:	e1a04000 	mov	r4, r0
        2f09b8:	e59d0000 	ldr	r0, [sp]
        2f09bc:	eb6349fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f09c0:	e1a00004 	mov	r0, r4
        2f09c4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NSSendIfDefined__FRC6RefVarT1
 * Address: 002f09c8
 */
void globals::NSSendIfDefined() {
    /*
        2f09c8:	e1a0c00d 	mov	ip, sp
        2f09cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f09d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f09d4:	e1a05000 	mov	r5, r0
        2f09d8:	e1a04001 	mov	r4, r1
        2f09dc:	e5910000 	ldr	r0, [r1]
        2f09e0:	e5900000 	ldr	r0, [r0]
        2f09e4:	eb63522e 	bl	1bc52a4 <$IsSymbol(long)>
        2f09e8:	e3300000 	teq	r0, #0	; 0x0
        2f09ec:	01a01004 	moveq	r1, r4
        2f09f0:	03a000e6 	moveq	r0, #230	; 0xe6
        2f09f4:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f09f8:	0b645e97 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f09fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0a00:	e1a01004 	mov	r1, r4
        2f0a04:	e1a00005 	mov	r0, r5
        2f0a08:	eb63ff7d 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0a0c:	eb6345ce 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0a10:	e58d0000 	str	r0, [sp]
        2f0a14:	e5900000 	ldr	r0, [r0]
        2f0a18:	e3300002 	teq	r0, #2	; 0x2
        2f0a1c:	1a000003 	bne	2f0a30 <NSSendIfDefined__FRC6RefVarT1+0x68>
        2f0a20:	e59d0000 	ldr	r0, [sp]
        2f0a24:	eb6349e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0a28:	e3a00002 	mov	r0, #2	; 0x2
        2f0a2c:	ea000008 	b	2f0a54 <NSSendIfDefined__FRC6RefVarT1+0x8c>
        2f0a30:	e1a02004 	mov	r2, r4
        2f0a34:	e1a0100d 	mov	r1, sp
        2f0a38:	e1a00005 	mov	r0, r5
        2f0a3c:	e3a03000 	mov	r3, #0	; 0x0
        2f0a40:	eb5d87c1 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0a44:	e1a04000 	mov	r4, r0
        2f0a48:	e59d0000 	ldr	r0, [sp]
        2f0a4c:	eb6349da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0a50:	e1a00004 	mov	r0, r4
        2f0a54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NSSendIfDefined__FRC6RefVarN21
 * Address: 002f0a58
 */
void globals::NSSendIfDefined() {
    /*
        2f0a58:	e1a0c00d 	mov	ip, sp
        2f0a5c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f0a60:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0a64:	e1a05000 	mov	r5, r0
        2f0a68:	e1a04001 	mov	r4, r1
        2f0a6c:	e1a06002 	mov	r6, r2
        2f0a70:	e5910000 	ldr	r0, [r1]
        2f0a74:	e5900000 	ldr	r0, [r0]
        2f0a78:	eb635209 	bl	1bc52a4 <$IsSymbol(long)>
        2f0a7c:	e3300000 	teq	r0, #0	; 0x0
        2f0a80:	01a01004 	moveq	r1, r4
        2f0a84:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0a88:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0a8c:	0b645e72 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0a90:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0a94:	e1a01004 	mov	r1, r4
        2f0a98:	e1a00005 	mov	r0, r5
        2f0a9c:	eb63ff58 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0aa0:	eb6345a9 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0aa4:	e58d0000 	str	r0, [sp]
        2f0aa8:	e5900000 	ldr	r0, [r0]
        2f0aac:	e3300002 	teq	r0, #2	; 0x2
        2f0ab0:	1a000003 	bne	2f0ac4 <NSSendIfDefined__FRC6RefVarN21+0x6c>
        2f0ab4:	e59d0000 	ldr	r0, [sp]
        2f0ab8:	eb6349bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0abc:	e3a00002 	mov	r0, #2	; 0x2
        2f0ac0:	ea00000c 	b	2f0af8 <NSSendIfDefined__FRC6RefVarN21+0xa0>
        2f0ac4:	e1a01006 	mov	r1, r6
        2f0ac8:	e59f002c 	ldr	r0, [pc, #2c]	; 2f0afc <NSSendIfDefined__FRC6RefVarN21+0xa4>
        2f0acc:	e5900000 	ldr	r0, [r0]
        2f0ad0:	eb63ff4d 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0ad4:	e1a02004 	mov	r2, r4
        2f0ad8:	e1a0100d 	mov	r1, sp
        2f0adc:	e1a00005 	mov	r0, r5
        2f0ae0:	e3a03001 	mov	r3, #1	; 0x1
        2f0ae4:	eb5d8798 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0ae8:	e1a04000 	mov	r4, r0
        2f0aec:	e59d0000 	ldr	r0, [sp]
        2f0af0:	eb6349b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0af4:	e1a00004 	mov	r0, r4
        2f0af8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2f0afc:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendIfDefined__FRC6RefVarN31
 * Address: 002f0b00
 */
void globals::NSSendIfDefined() {
    /*
        2f0b00:	e1a0c00d 	mov	ip, sp
        2f0b04:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2f0b08:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0b0c:	e1a05000 	mov	r5, r0
        2f0b10:	e1a04001 	mov	r4, r1
        2f0b14:	e1a07002 	mov	r7, r2
        2f0b18:	e1a06003 	mov	r6, r3
        2f0b1c:	e5910000 	ldr	r0, [r1]
        2f0b20:	e5900000 	ldr	r0, [r0]
        2f0b24:	eb6351de 	bl	1bc52a4 <$IsSymbol(long)>
        2f0b28:	e3300000 	teq	r0, #0	; 0x0
        2f0b2c:	01a01004 	moveq	r1, r4
        2f0b30:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0b34:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0b38:	0b645e47 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0b3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0b40:	e1a01004 	mov	r1, r4
        2f0b44:	e1a00005 	mov	r0, r5
        2f0b48:	eb63ff2d 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0b4c:	eb63457e 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0b50:	e58d0000 	str	r0, [sp]
        2f0b54:	e5900000 	ldr	r0, [r0]
        2f0b58:	e3300002 	teq	r0, #2	; 0x2
        2f0b5c:	1a000003 	bne	2f0b70 <NSSendIfDefined__FRC6RefVarN31+0x70>
        2f0b60:	e59d0000 	ldr	r0, [sp]
        2f0b64:	eb634994 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0b68:	e3a00002 	mov	r0, #2	; 0x2
        2f0b6c:	ea00000f 	b	2f0bb0 <NSSendIfDefined__FRC6RefVarN31+0xb0>
        2f0b70:	e1a01007 	mov	r1, r7
        2f0b74:	e59f8038 	ldr	r8, [pc, #38]	; 2f0bb4 <NSSendIfDefined__FRC6RefVarN31+0xb4>
        2f0b78:	e5980000 	ldr	r0, [r8]
        2f0b7c:	eb63ff22 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0b80:	e1a01006 	mov	r1, r6
        2f0b84:	e5980000 	ldr	r0, [r8]
        2f0b88:	eb63ff1f 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0b8c:	e1a02004 	mov	r2, r4
        2f0b90:	e1a0100d 	mov	r1, sp
        2f0b94:	e1a00005 	mov	r0, r5
        2f0b98:	e3a03002 	mov	r3, #2	; 0x2
        2f0b9c:	eb5d876a 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0ba0:	e1a04000 	mov	r4, r0
        2f0ba4:	e59d0000 	ldr	r0, [sp]
        2f0ba8:	eb634983 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0bac:	e1a00004 	mov	r0, r4
        2f0bb0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2f0bb4:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendIfDefined__FRC6RefVarN41
 * Address: 002f0bb8
 */
void globals::NSSendIfDefined() {
    /*
        2f0bb8:	e1a0c00d 	mov	ip, sp
        2f0bbc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2f0bc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0bc4:	e1a05000 	mov	r5, r0
        2f0bc8:	e1a04001 	mov	r4, r1
        2f0bcc:	e1a07002 	mov	r7, r2
        2f0bd0:	e1a06003 	mov	r6, r3
        2f0bd4:	e59b8004 	ldr	r8, [fp, #4]
        2f0bd8:	e5910000 	ldr	r0, [r1]
        2f0bdc:	e5900000 	ldr	r0, [r0]
        2f0be0:	eb6351af 	bl	1bc52a4 <$IsSymbol(long)>
        2f0be4:	e3300000 	teq	r0, #0	; 0x0
        2f0be8:	01a01004 	moveq	r1, r4
        2f0bec:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0bf0:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0bf4:	0b645e18 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0bf8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0bfc:	e1a01004 	mov	r1, r4
        2f0c00:	e1a00005 	mov	r0, r5
        2f0c04:	eb63fefe 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0c08:	eb63454f 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0c0c:	e58d0000 	str	r0, [sp]
        2f0c10:	e5900000 	ldr	r0, [r0]
        2f0c14:	e3300002 	teq	r0, #2	; 0x2
        2f0c18:	1a000003 	bne	2f0c2c <NSSendIfDefined__FRC6RefVarN41+0x74>
        2f0c1c:	e59d0000 	ldr	r0, [sp]
        2f0c20:	eb634965 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0c24:	e3a00002 	mov	r0, #2	; 0x2
        2f0c28:	ea000012 	b	2f0c78 <NSSendIfDefined__FRC6RefVarN41+0xc0>
        2f0c2c:	e1a01007 	mov	r1, r7
        2f0c30:	e59f9044 	ldr	r9, [pc, #44]	; 2f0c7c <NSSendIfDefined__FRC6RefVarN41+0xc4>
        2f0c34:	e5990000 	ldr	r0, [r9]
        2f0c38:	eb63fef3 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0c3c:	e1a01006 	mov	r1, r6
        2f0c40:	e5990000 	ldr	r0, [r9]
        2f0c44:	eb63fef0 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0c48:	e1a01008 	mov	r1, r8
        2f0c4c:	e5990000 	ldr	r0, [r9]
        2f0c50:	eb63feed 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0c54:	e1a02004 	mov	r2, r4
        2f0c58:	e1a0100d 	mov	r1, sp
        2f0c5c:	e1a00005 	mov	r0, r5
        2f0c60:	e3a03003 	mov	r3, #3	; 0x3
        2f0c64:	eb5d8738 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0c68:	e1a04000 	mov	r4, r0
        2f0c6c:	e59d0000 	ldr	r0, [sp]
        2f0c70:	eb634951 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0c74:	e1a00004 	mov	r0, r4
        2f0c78:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2f0c7c:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendIfDefined__FRC6RefVarN51
 * Address: 002f0c80
 */
void globals::NSSendIfDefined() {
    /*
        2f0c80:	e1a0c00d 	mov	ip, sp
        2f0c84:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f0c88:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0c8c:	e1a05000 	mov	r5, r0
        2f0c90:	e1a04001 	mov	r4, r1
        2f0c94:	e1a07002 	mov	r7, r2
        2f0c98:	e1a06003 	mov	r6, r3
        2f0c9c:	e59b8008 	ldr	r8, [fp, #8]
        2f0ca0:	e59b9004 	ldr	r9, [fp, #4]
        2f0ca4:	e5910000 	ldr	r0, [r1]
        2f0ca8:	e5900000 	ldr	r0, [r0]
        2f0cac:	eb63517c 	bl	1bc52a4 <$IsSymbol(long)>
        2f0cb0:	e3300000 	teq	r0, #0	; 0x0
        2f0cb4:	01a01004 	moveq	r1, r4
        2f0cb8:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0cbc:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0cc0:	0b645de5 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0cc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0cc8:	e1a01004 	mov	r1, r4
        2f0ccc:	e1a00005 	mov	r0, r5
        2f0cd0:	eb63fecb 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0cd4:	eb63451c 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0cd8:	e58d0000 	str	r0, [sp]
        2f0cdc:	e5900000 	ldr	r0, [r0]
        2f0ce0:	e3300002 	teq	r0, #2	; 0x2
        2f0ce4:	1a000003 	bne	2f0cf8 <NSSendIfDefined__FRC6RefVarN51+0x78>
        2f0ce8:	e59d0000 	ldr	r0, [sp]
        2f0cec:	eb634932 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0cf0:	e3a00002 	mov	r0, #2	; 0x2
        2f0cf4:	ea000015 	b	2f0d50 <NSSendIfDefined__FRC6RefVarN51+0xd0>
        2f0cf8:	e1a01007 	mov	r1, r7
        2f0cfc:	e59fa050 	ldr	sl, [pc, #50]	; 2f0d54 <NSSendIfDefined__FRC6RefVarN51+0xd4>
        2f0d00:	e59a0000 	ldr	r0, [sl]
        2f0d04:	eb63fec0 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0d08:	e1a01006 	mov	r1, r6
        2f0d0c:	e59a0000 	ldr	r0, [sl]
        2f0d10:	eb63febd 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0d14:	e1a01009 	mov	r1, r9
        2f0d18:	e59a0000 	ldr	r0, [sl]
        2f0d1c:	eb63feba 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0d20:	e1a01008 	mov	r1, r8
        2f0d24:	e59a0000 	ldr	r0, [sl]
        2f0d28:	eb63feb7 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0d2c:	e1a02004 	mov	r2, r4
        2f0d30:	e1a0100d 	mov	r1, sp
        2f0d34:	e1a00005 	mov	r0, r5
        2f0d38:	e3a03004 	mov	r3, #4	; 0x4
        2f0d3c:	eb5d8702 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0d40:	e1a04000 	mov	r4, r0
        2f0d44:	e59d0000 	ldr	r0, [sp]
        2f0d48:	eb63491b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0d4c:	e1a00004 	mov	r0, r4
        2f0d50:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f0d54:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendIfDefined__FRC6RefVarN61
 * Address: 002f0d58
 */
void globals::NSSendIfDefined() {
    /*
        2f0d58:	e1a0c00d 	mov	ip, sp
        2f0d5c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f0d60:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0d64:	e1a05000 	mov	r5, r0
        2f0d68:	e1a04001 	mov	r4, r1
        2f0d6c:	e1a07002 	mov	r7, r2
        2f0d70:	e1a06003 	mov	r6, r3
        2f0d74:	e59b800c 	ldr	r8, [fp, #12]
        2f0d78:	e59b9008 	ldr	r9, [fp, #8]
        2f0d7c:	e59ba004 	ldr	sl, [fp, #4]
        2f0d80:	e5910000 	ldr	r0, [r1]
        2f0d84:	e5900000 	ldr	r0, [r0]
        2f0d88:	eb635145 	bl	1bc52a4 <$IsSymbol(long)>
        2f0d8c:	e3300000 	teq	r0, #0	; 0x0
        2f0d90:	01a01004 	moveq	r1, r4
        2f0d94:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0d98:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0d9c:	0b645dae 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0da0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0da4:	e1a01004 	mov	r1, r4
        2f0da8:	e1a00005 	mov	r0, r5
        2f0dac:	eb63fe94 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0db0:	eb6344e5 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0db4:	e58d0000 	str	r0, [sp]
        2f0db8:	e5900000 	ldr	r0, [r0]
        2f0dbc:	e3300002 	teq	r0, #2	; 0x2
        2f0dc0:	1a000003 	bne	2f0dd4 <NSSendIfDefined__FRC6RefVarN61+0x7c>
        2f0dc4:	e59d0000 	ldr	r0, [sp]
        2f0dc8:	eb6348fb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0dcc:	e3a00002 	mov	r0, #2	; 0x2
        2f0dd0:	ea000018 	b	2f0e38 <NSSendIfDefined__FRC6RefVarN61+0xe0>
        2f0dd4:	e1a01007 	mov	r1, r7
        2f0dd8:	e59f705c 	ldr	r7, [pc, #5c]	; 2f0e3c <NSSendIfDefined__FRC6RefVarN61+0xe4>
        2f0ddc:	e5970000 	ldr	r0, [r7]
        2f0de0:	eb63fe89 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0de4:	e1a01006 	mov	r1, r6
        2f0de8:	e5970000 	ldr	r0, [r7]
        2f0dec:	eb63fe86 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0df0:	e1a0100a 	mov	r1, sl
        2f0df4:	e5970000 	ldr	r0, [r7]
        2f0df8:	eb63fe83 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0dfc:	e1a01009 	mov	r1, r9
        2f0e00:	e5970000 	ldr	r0, [r7]
        2f0e04:	eb63fe80 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0e08:	e1a01008 	mov	r1, r8
        2f0e0c:	e5970000 	ldr	r0, [r7]
        2f0e10:	eb63fe7d 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0e14:	e1a02004 	mov	r2, r4
        2f0e18:	e1a0100d 	mov	r1, sp
        2f0e1c:	e1a00005 	mov	r0, r5
        2f0e20:	e3a03005 	mov	r3, #5	; 0x5
        2f0e24:	eb5d86c8 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0e28:	e1a04000 	mov	r4, r0
        2f0e2c:	e59d0000 	ldr	r0, [sp]
        2f0e30:	eb6348e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0e34:	e1a00004 	mov	r0, r4
        2f0e38:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f0e3c:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendIfDefined__FRC6RefVarN71
 * Address: 002f0ec0
 */
void globals::NSSendIfDefined() {
    /*
        2f0ec0:	e1a0c00d 	mov	ip, sp
        2f0ec4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2f0ec8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f0ecc:	e24cb014 	sub	fp, ip, #20	; 0x14
        2f0ed0:	e1a05000 	mov	r5, r0
        2f0ed4:	e1a04001 	mov	r4, r1
        2f0ed8:	e1a06002 	mov	r6, r2
        2f0edc:	e59b7020 	ldr	r7, [fp, #32]
        2f0ee0:	e59b801c 	ldr	r8, [fp, #28]
        2f0ee4:	e59b9018 	ldr	r9, [fp, #24]
        2f0ee8:	e59ba014 	ldr	sl, [fp, #20]
        2f0eec:	e5910000 	ldr	r0, [r1]
        2f0ef0:	e5900000 	ldr	r0, [r0]
        2f0ef4:	eb6350ea 	bl	1bc52a4 <$IsSymbol(long)>
        2f0ef8:	e3300000 	teq	r0, #0	; 0x0
        2f0efc:	01a01004 	moveq	r1, r4
        2f0f00:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0f04:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0f08:	0b645d53 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0f0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0f10:	e1a01004 	mov	r1, r4
        2f0f14:	e1a00005 	mov	r0, r5
        2f0f18:	eb63fe39 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f0f1c:	eb63448a 	bl	1bc214c <$AllocateRefHandle(long)>
        2f0f20:	e58d0000 	str	r0, [sp]
        2f0f24:	e5900000 	ldr	r0, [r0]
        2f0f28:	e3300002 	teq	r0, #2	; 0x2
        2f0f2c:	1a000003 	bne	2f0f40 <NSSendIfDefined__FRC6RefVarN71+0x80>
        2f0f30:	e59d0000 	ldr	r0, [sp]
        2f0f34:	eb6348a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0f38:	e3a00002 	mov	r0, #2	; 0x2
        2f0f3c:	ea00001b 	b	2f0fb0 <NSSendIfDefined__FRC6RefVarN71+0xf0>
        2f0f40:	e1a01006 	mov	r1, r6
        2f0f44:	e59f6068 	ldr	r6, [pc, #68]	; 2f0fb4 <NSSendIfDefined__FRC6RefVarN71+0xf4>
        2f0f48:	e5960000 	ldr	r0, [r6]
        2f0f4c:	eb63fe2e 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0f50:	e59b1010 	ldr	r1, [fp, #16]
        2f0f54:	e5960000 	ldr	r0, [r6]
        2f0f58:	eb63fe2b 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0f5c:	e1a0100a 	mov	r1, sl
        2f0f60:	e5960000 	ldr	r0, [r6]
        2f0f64:	eb63fe28 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0f68:	e1a01009 	mov	r1, r9
        2f0f6c:	e5960000 	ldr	r0, [r6]
        2f0f70:	eb63fe25 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0f74:	e1a01008 	mov	r1, r8
        2f0f78:	e5960000 	ldr	r0, [r6]
        2f0f7c:	eb63fe22 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0f80:	e1a01007 	mov	r1, r7
        2f0f84:	e5960000 	ldr	r0, [r6]
        2f0f88:	eb63fe1f 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f0f8c:	e1a02004 	mov	r2, r4
        2f0f90:	e1a0100d 	mov	r1, sp
        2f0f94:	e1a00005 	mov	r0, r5
        2f0f98:	e3a03006 	mov	r3, #6	; 0x6
        2f0f9c:	eb5d866a 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f0fa0:	e1a04000 	mov	r4, r0
        2f0fa4:	e59d0000 	ldr	r0, [sp]
        2f0fa8:	eb634883 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f0fac:	e1a00004 	mov	r0, r4
        2f0fb0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f0fb4:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendIfDefinedWithArgArray__FRC6RefVarN21
 * Address: 002f0fb8
 */
void globals::NSSendIfDefinedWithArgArray() {
    /*
        2f0fb8:	e1a0c00d 	mov	ip, sp
        2f0fbc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f0fc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f0fc4:	e1a05000 	mov	r5, r0
        2f0fc8:	e1a04001 	mov	r4, r1
        2f0fcc:	e1a06002 	mov	r6, r2
        2f0fd0:	e5910000 	ldr	r0, [r1]
        2f0fd4:	e5900000 	ldr	r0, [r0]
        2f0fd8:	eb6350b1 	bl	1bc52a4 <$IsSymbol(long)>
        2f0fdc:	e3300000 	teq	r0, #0	; 0x0
        2f0fe0:	01a01004 	moveq	r1, r4
        2f0fe4:	03a000e6 	moveq	r0, #230	; 0xe6
        2f0fe8:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f0fec:	0b645d1a 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f0ff0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f0ff4:	e1a01004 	mov	r1, r4
        2f0ff8:	e1a00005 	mov	r0, r5
        2f0ffc:	eb63fe00 	bl	1bf0804 <$FindImplementor__FRC6RefVarT1>
        2f1000:	eb634451 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1004:	e58d0000 	str	r0, [sp]
        2f1008:	e5900000 	ldr	r0, [r0]
        2f100c:	e3300002 	teq	r0, #2	; 0x2
        2f1010:	1a000003 	bne	2f1024 <NSSendIfDefinedWithArgArray__FRC6RefVarN21+0x6c>
        2f1014:	e59d0000 	ldr	r0, [sp]
        2f1018:	eb634867 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f101c:	e3a00002 	mov	r0, #2	; 0x2
        2f1020:	ea00000a 	b	2f1050 <NSSendIfDefinedWithArgArray__FRC6RefVarN21+0x98>
        2f1024:	e1a00006 	mov	r0, r6
        2f1028:	eb5d96c5 	bl	1a56b44 <$PushArgArray(RefVar const &)>
        2f102c:	e1a03000 	mov	r3, r0
        2f1030:	e1a02004 	mov	r2, r4
        2f1034:	e1a0100d 	mov	r1, sp
        2f1038:	e1a00005 	mov	r0, r5
        2f103c:	eb5d8642 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f1040:	e1a04000 	mov	r4, r0
        2f1044:	e59d0000 	ldr	r0, [sp]
        2f1048:	eb63485b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f104c:	e1a00004 	mov	r0, r4
        2f1050:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NSSendProtoIfDefined__FRC6RefVarT1
 * Address: 002f1054
 */
void globals::NSSendProtoIfDefined() {
    /*
        2f1054:	e1a0c00d 	mov	ip, sp
        2f1058:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f105c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f1060:	e1a05000 	mov	r5, r0
        2f1064:	e1a04001 	mov	r4, r1
        2f1068:	e5910000 	ldr	r0, [r1]
        2f106c:	e5900000 	ldr	r0, [r0]
        2f1070:	eb63508b 	bl	1bc52a4 <$IsSymbol(long)>
        2f1074:	e3300000 	teq	r0, #0	; 0x0
        2f1078:	01a01004 	moveq	r1, r4
        2f107c:	03a000e6 	moveq	r0, #230	; 0xe6
        2f1080:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f1084:	0b645cf4 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f1088:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f108c:	e1a01004 	mov	r1, r4
        2f1090:	e1a00005 	mov	r0, r5
        2f1094:	eb63fddb 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f1098:	eb63442b 	bl	1bc214c <$AllocateRefHandle(long)>
        2f109c:	e58d0000 	str	r0, [sp]
        2f10a0:	e5900000 	ldr	r0, [r0]
        2f10a4:	e3300002 	teq	r0, #2	; 0x2
        2f10a8:	1a000003 	bne	2f10bc <NSSendProtoIfDefined__FRC6RefVarT1+0x68>
        2f10ac:	e59d0000 	ldr	r0, [sp]
        2f10b0:	eb634841 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f10b4:	e3a00002 	mov	r0, #2	; 0x2
        2f10b8:	ea000008 	b	2f10e0 <NSSendProtoIfDefined__FRC6RefVarT1+0x8c>
        2f10bc:	e1a02004 	mov	r2, r4
        2f10c0:	e1a0100d 	mov	r1, sp
        2f10c4:	e1a00005 	mov	r0, r5
        2f10c8:	e3a03000 	mov	r3, #0	; 0x0
        2f10cc:	eb5d861e 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f10d0:	e1a04000 	mov	r4, r0
        2f10d4:	e59d0000 	ldr	r0, [sp]
        2f10d8:	eb634837 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f10dc:	e1a00004 	mov	r0, r4
        2f10e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NSSendProtoIfDefined__FRC6RefVarN21
 * Address: 002f10e4
 */
void globals::NSSendProtoIfDefined() {
    /*
        2f10e4:	e1a0c00d 	mov	ip, sp
        2f10e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f10ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f10f0:	e1a05000 	mov	r5, r0
        2f10f4:	e1a04001 	mov	r4, r1
        2f10f8:	e1a06002 	mov	r6, r2
        2f10fc:	e5910000 	ldr	r0, [r1]
        2f1100:	e5900000 	ldr	r0, [r0]
        2f1104:	eb635066 	bl	1bc52a4 <$IsSymbol(long)>
        2f1108:	e3300000 	teq	r0, #0	; 0x0
        2f110c:	01a01004 	moveq	r1, r4
        2f1110:	03a000e6 	moveq	r0, #230	; 0xe6
        2f1114:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f1118:	0b645ccf 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f111c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1120:	e1a01004 	mov	r1, r4
        2f1124:	e1a00005 	mov	r0, r5
        2f1128:	eb63fdb6 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f112c:	eb634406 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1130:	e58d0000 	str	r0, [sp]
        2f1134:	e5900000 	ldr	r0, [r0]
        2f1138:	e3300002 	teq	r0, #2	; 0x2
        2f113c:	1a000003 	bne	2f1150 <NSSendProtoIfDefined__FRC6RefVarN21+0x6c>
        2f1140:	e59d0000 	ldr	r0, [sp]
        2f1144:	eb63481c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1148:	e3a00002 	mov	r0, #2	; 0x2
        2f114c:	ea00000c 	b	2f1184 <NSSendProtoIfDefined__FRC6RefVarN21+0xa0>
        2f1150:	e1a01006 	mov	r1, r6
        2f1154:	e59f002c 	ldr	r0, [pc, #2c]	; 2f1188 <NSSendProtoIfDefined__FRC6RefVarN21+0xa4>
        2f1158:	e5900000 	ldr	r0, [r0]
        2f115c:	eb63fdaa 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1160:	e1a02004 	mov	r2, r4
        2f1164:	e1a0100d 	mov	r1, sp
        2f1168:	e1a00005 	mov	r0, r5
        2f116c:	e3a03001 	mov	r3, #1	; 0x1
        2f1170:	eb5d85f5 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f1174:	e1a04000 	mov	r4, r0
        2f1178:	e59d0000 	ldr	r0, [sp]
        2f117c:	eb63480e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1180:	e1a00004 	mov	r0, r4
        2f1184:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2f1188:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProtoIfDefined__FRC6RefVarN31
 * Address: 002f118c
 */
void globals::NSSendProtoIfDefined() {
    /*
        2f118c:	e1a0c00d 	mov	ip, sp
        2f1190:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2f1194:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f1198:	e1a05000 	mov	r5, r0
        2f119c:	e1a04001 	mov	r4, r1
        2f11a0:	e1a07002 	mov	r7, r2
        2f11a4:	e1a06003 	mov	r6, r3
        2f11a8:	e5910000 	ldr	r0, [r1]
        2f11ac:	e5900000 	ldr	r0, [r0]
        2f11b0:	eb63503b 	bl	1bc52a4 <$IsSymbol(long)>
        2f11b4:	e3300000 	teq	r0, #0	; 0x0
        2f11b8:	01a01004 	moveq	r1, r4
        2f11bc:	03a000e6 	moveq	r0, #230	; 0xe6
        2f11c0:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f11c4:	0b645ca4 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f11c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f11cc:	e1a01004 	mov	r1, r4
        2f11d0:	e1a00005 	mov	r0, r5
        2f11d4:	eb63fd8b 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f11d8:	eb6343db 	bl	1bc214c <$AllocateRefHandle(long)>
        2f11dc:	e58d0000 	str	r0, [sp]
        2f11e0:	e5900000 	ldr	r0, [r0]
        2f11e4:	e3300002 	teq	r0, #2	; 0x2
        2f11e8:	1a000003 	bne	2f11fc <NSSendProtoIfDefined__FRC6RefVarN31+0x70>
        2f11ec:	e59d0000 	ldr	r0, [sp]
        2f11f0:	eb6347f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f11f4:	e3a00002 	mov	r0, #2	; 0x2
        2f11f8:	ea00000f 	b	2f123c <NSSendProtoIfDefined__FRC6RefVarN31+0xb0>
        2f11fc:	e1a01007 	mov	r1, r7
        2f1200:	e59f8038 	ldr	r8, [pc, #38]	; 2f1240 <NSSendProtoIfDefined__FRC6RefVarN31+0xb4>
        2f1204:	e5980000 	ldr	r0, [r8]
        2f1208:	eb63fd7f 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f120c:	e1a01006 	mov	r1, r6
        2f1210:	e5980000 	ldr	r0, [r8]
        2f1214:	eb63fd7c 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1218:	e1a02004 	mov	r2, r4
        2f121c:	e1a0100d 	mov	r1, sp
        2f1220:	e1a00005 	mov	r0, r5
        2f1224:	e3a03002 	mov	r3, #2	; 0x2
        2f1228:	eb5d85c7 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f122c:	e1a04000 	mov	r4, r0
        2f1230:	e59d0000 	ldr	r0, [sp]
        2f1234:	eb6347e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1238:	e1a00004 	mov	r0, r4
        2f123c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2f1240:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProtoIfDefined__FRC6RefVarN41
 * Address: 002f1244
 */
void globals::NSSendProtoIfDefined() {
    /*
        2f1244:	e1a0c00d 	mov	ip, sp
        2f1248:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2f124c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f1250:	e1a05000 	mov	r5, r0
        2f1254:	e1a04001 	mov	r4, r1
        2f1258:	e1a07002 	mov	r7, r2
        2f125c:	e1a06003 	mov	r6, r3
        2f1260:	e59b8004 	ldr	r8, [fp, #4]
        2f1264:	e5910000 	ldr	r0, [r1]
        2f1268:	e5900000 	ldr	r0, [r0]
        2f126c:	eb63500c 	bl	1bc52a4 <$IsSymbol(long)>
        2f1270:	e3300000 	teq	r0, #0	; 0x0
        2f1274:	01a01004 	moveq	r1, r4
        2f1278:	03a000e6 	moveq	r0, #230	; 0xe6
        2f127c:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f1280:	0b645c75 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f1284:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1288:	e1a01004 	mov	r1, r4
        2f128c:	e1a00005 	mov	r0, r5
        2f1290:	eb63fd5c 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f1294:	eb6343ac 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1298:	e58d0000 	str	r0, [sp]
        2f129c:	e5900000 	ldr	r0, [r0]
        2f12a0:	e3300002 	teq	r0, #2	; 0x2
        2f12a4:	1a000003 	bne	2f12b8 <NSSendProtoIfDefined__FRC6RefVarN41+0x74>
        2f12a8:	e59d0000 	ldr	r0, [sp]
        2f12ac:	eb6347c2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f12b0:	e3a00002 	mov	r0, #2	; 0x2
        2f12b4:	ea000012 	b	2f1304 <NSSendProtoIfDefined__FRC6RefVarN41+0xc0>
        2f12b8:	e1a01007 	mov	r1, r7
        2f12bc:	e59f9044 	ldr	r9, [pc, #44]	; 2f1308 <NSSendProtoIfDefined__FRC6RefVarN41+0xc4>
        2f12c0:	e5990000 	ldr	r0, [r9]
        2f12c4:	eb63fd50 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f12c8:	e1a01006 	mov	r1, r6
        2f12cc:	e5990000 	ldr	r0, [r9]
        2f12d0:	eb63fd4d 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f12d4:	e1a01008 	mov	r1, r8
        2f12d8:	e5990000 	ldr	r0, [r9]
        2f12dc:	eb63fd4a 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f12e0:	e1a02004 	mov	r2, r4
        2f12e4:	e1a0100d 	mov	r1, sp
        2f12e8:	e1a00005 	mov	r0, r5
        2f12ec:	e3a03003 	mov	r3, #3	; 0x3
        2f12f0:	eb5d8595 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f12f4:	e1a04000 	mov	r4, r0
        2f12f8:	e59d0000 	ldr	r0, [sp]
        2f12fc:	eb6347ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1300:	e1a00004 	mov	r0, r4
        2f1304:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2f1308:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProtoIfDefined__FRC6RefVarN51
 * Address: 002f130c
 */
void globals::NSSendProtoIfDefined() {
    /*
        2f130c:	e1a0c00d 	mov	ip, sp
        2f1310:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f1314:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f1318:	e1a05000 	mov	r5, r0
        2f131c:	e1a04001 	mov	r4, r1
        2f1320:	e1a07002 	mov	r7, r2
        2f1324:	e1a06003 	mov	r6, r3
        2f1328:	e59b8008 	ldr	r8, [fp, #8]
        2f132c:	e59b9004 	ldr	r9, [fp, #4]
        2f1330:	e5910000 	ldr	r0, [r1]
        2f1334:	e5900000 	ldr	r0, [r0]
        2f1338:	eb634fd9 	bl	1bc52a4 <$IsSymbol(long)>
        2f133c:	e3300000 	teq	r0, #0	; 0x0
        2f1340:	01a01004 	moveq	r1, r4
        2f1344:	03a000e6 	moveq	r0, #230	; 0xe6
        2f1348:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f134c:	0b645c42 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f1350:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1354:	e1a01004 	mov	r1, r4
        2f1358:	e1a00005 	mov	r0, r5
        2f135c:	eb63fd29 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f1360:	eb634379 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1364:	e58d0000 	str	r0, [sp]
        2f1368:	e5900000 	ldr	r0, [r0]
        2f136c:	e3300002 	teq	r0, #2	; 0x2
        2f1370:	1a000003 	bne	2f1384 <NSSendProtoIfDefined__FRC6RefVarN51+0x78>
        2f1374:	e59d0000 	ldr	r0, [sp]
        2f1378:	eb63478f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f137c:	e3a00002 	mov	r0, #2	; 0x2
        2f1380:	ea000015 	b	2f13dc <NSSendProtoIfDefined__FRC6RefVarN51+0xd0>
        2f1384:	e1a01007 	mov	r1, r7
        2f1388:	e59fa050 	ldr	sl, [pc, #50]	; 2f13e0 <NSSendProtoIfDefined__FRC6RefVarN51+0xd4>
        2f138c:	e59a0000 	ldr	r0, [sl]
        2f1390:	eb63fd1d 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1394:	e1a01006 	mov	r1, r6
        2f1398:	e59a0000 	ldr	r0, [sl]
        2f139c:	eb63fd1a 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f13a0:	e1a01009 	mov	r1, r9
        2f13a4:	e59a0000 	ldr	r0, [sl]
        2f13a8:	eb63fd17 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f13ac:	e1a01008 	mov	r1, r8
        2f13b0:	e59a0000 	ldr	r0, [sl]
        2f13b4:	eb63fd14 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f13b8:	e1a02004 	mov	r2, r4
        2f13bc:	e1a0100d 	mov	r1, sp
        2f13c0:	e1a00005 	mov	r0, r5
        2f13c4:	e3a03004 	mov	r3, #4	; 0x4
        2f13c8:	eb5d855f 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f13cc:	e1a04000 	mov	r4, r0
        2f13d0:	e59d0000 	ldr	r0, [sp]
        2f13d4:	eb634778 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f13d8:	e1a00004 	mov	r0, r4
        2f13dc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f13e0:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProtoIfDefined__FRC6RefVarN61
 * Address: 002f13e4
 */
void globals::NSSendProtoIfDefined() {
    /*
        2f13e4:	e1a0c00d 	mov	ip, sp
        2f13e8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f13ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f13f0:	e1a05000 	mov	r5, r0
        2f13f4:	e1a04001 	mov	r4, r1
        2f13f8:	e1a07002 	mov	r7, r2
        2f13fc:	e1a06003 	mov	r6, r3
        2f1400:	e59b800c 	ldr	r8, [fp, #12]
        2f1404:	e59b9008 	ldr	r9, [fp, #8]
        2f1408:	e59ba004 	ldr	sl, [fp, #4]
        2f140c:	e5910000 	ldr	r0, [r1]
        2f1410:	e5900000 	ldr	r0, [r0]
        2f1414:	eb634fa2 	bl	1bc52a4 <$IsSymbol(long)>
        2f1418:	e3300000 	teq	r0, #0	; 0x0
        2f141c:	01a01004 	moveq	r1, r4
        2f1420:	03a000e6 	moveq	r0, #230	; 0xe6
        2f1424:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f1428:	0b645c0b 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f142c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1430:	e1a01004 	mov	r1, r4
        2f1434:	e1a00005 	mov	r0, r5
        2f1438:	eb63fcf2 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f143c:	eb634342 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1440:	e58d0000 	str	r0, [sp]
        2f1444:	e5900000 	ldr	r0, [r0]
        2f1448:	e3300002 	teq	r0, #2	; 0x2
        2f144c:	1a000003 	bne	2f1460 <NSSendProtoIfDefined__FRC6RefVarN61+0x7c>
        2f1450:	e59d0000 	ldr	r0, [sp]
        2f1454:	eb634758 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1458:	e3a00002 	mov	r0, #2	; 0x2
        2f145c:	ea000018 	b	2f14c4 <NSSendProtoIfDefined__FRC6RefVarN61+0xe0>
        2f1460:	e1a01007 	mov	r1, r7
        2f1464:	e59f705c 	ldr	r7, [pc, #5c]	; 2f14c8 <NSSendProtoIfDefined__FRC6RefVarN61+0xe4>
        2f1468:	e5970000 	ldr	r0, [r7]
        2f146c:	eb63fce6 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1470:	e1a01006 	mov	r1, r6
        2f1474:	e5970000 	ldr	r0, [r7]
        2f1478:	eb63fce3 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f147c:	e1a0100a 	mov	r1, sl
        2f1480:	e5970000 	ldr	r0, [r7]
        2f1484:	eb63fce0 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1488:	e1a01009 	mov	r1, r9
        2f148c:	e5970000 	ldr	r0, [r7]
        2f1490:	eb63fcdd 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1494:	e1a01008 	mov	r1, r8
        2f1498:	e5970000 	ldr	r0, [r7]
        2f149c:	eb63fcda 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f14a0:	e1a02004 	mov	r2, r4
        2f14a4:	e1a0100d 	mov	r1, sp
        2f14a8:	e1a00005 	mov	r0, r5
        2f14ac:	e3a03005 	mov	r3, #5	; 0x5
        2f14b0:	eb5d8525 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f14b4:	e1a04000 	mov	r4, r0
        2f14b8:	e59d0000 	ldr	r0, [sp]
        2f14bc:	eb63473e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f14c0:	e1a00004 	mov	r0, r4
        2f14c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f14c8:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProtoIfDefined__FRC6RefVarN71
 * Address: 002f14cc
 */
void globals::NSSendProtoIfDefined() {
    /*
        2f14cc:	e1a0c00d 	mov	ip, sp
        2f14d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2f14d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f14d8:	e24cb014 	sub	fp, ip, #20	; 0x14
        2f14dc:	e1a05000 	mov	r5, r0
        2f14e0:	e1a04001 	mov	r4, r1
        2f14e4:	e1a06002 	mov	r6, r2
        2f14e8:	e59b7020 	ldr	r7, [fp, #32]
        2f14ec:	e59b801c 	ldr	r8, [fp, #28]
        2f14f0:	e59b9018 	ldr	r9, [fp, #24]
        2f14f4:	e59ba014 	ldr	sl, [fp, #20]
        2f14f8:	e5910000 	ldr	r0, [r1]
        2f14fc:	e5900000 	ldr	r0, [r0]
        2f1500:	eb634f67 	bl	1bc52a4 <$IsSymbol(long)>
        2f1504:	e3300000 	teq	r0, #0	; 0x0
        2f1508:	01a01004 	moveq	r1, r4
        2f150c:	03a000e6 	moveq	r0, #230	; 0xe6
        2f1510:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f1514:	0b645bd0 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f1518:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f151c:	e1a01004 	mov	r1, r4
        2f1520:	e1a00005 	mov	r0, r5
        2f1524:	eb63fcb7 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f1528:	eb634307 	bl	1bc214c <$AllocateRefHandle(long)>
        2f152c:	e58d0000 	str	r0, [sp]
        2f1530:	e5900000 	ldr	r0, [r0]
        2f1534:	e3300002 	teq	r0, #2	; 0x2
        2f1538:	1a000003 	bne	2f154c <NSSendProtoIfDefined__FRC6RefVarN71+0x80>
        2f153c:	e59d0000 	ldr	r0, [sp]
        2f1540:	eb63471d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1544:	e3a00002 	mov	r0, #2	; 0x2
        2f1548:	ea00001b 	b	2f15bc <NSSendProtoIfDefined__FRC6RefVarN71+0xf0>
        2f154c:	e1a01006 	mov	r1, r6
        2f1550:	e59f6068 	ldr	r6, [pc, #68]	; 2f15c0 <NSSendProtoIfDefined__FRC6RefVarN71+0xf4>
        2f1554:	e5960000 	ldr	r0, [r6]
        2f1558:	eb63fcab 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f155c:	e59b1010 	ldr	r1, [fp, #16]
        2f1560:	e5960000 	ldr	r0, [r6]
        2f1564:	eb63fca8 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1568:	e1a0100a 	mov	r1, sl
        2f156c:	e5960000 	ldr	r0, [r6]
        2f1570:	eb63fca5 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1574:	e1a01009 	mov	r1, r9
        2f1578:	e5960000 	ldr	r0, [r6]
        2f157c:	eb63fca2 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1580:	e1a01008 	mov	r1, r8
        2f1584:	e5960000 	ldr	r0, [r6]
        2f1588:	eb63fc9f 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f158c:	e1a01007 	mov	r1, r7
        2f1590:	e5960000 	ldr	r0, [r6]
        2f1594:	eb63fc9c 	bl	1bf080c <TInterpreter::$PushValue(RefVar const &)>
        2f1598:	e1a02004 	mov	r2, r4
        2f159c:	e1a0100d 	mov	r1, sp
        2f15a0:	e1a00005 	mov	r0, r5
        2f15a4:	e3a03006 	mov	r3, #6	; 0x6
        2f15a8:	eb5d84e7 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f15ac:	e1a04000 	mov	r4, r0
        2f15b0:	e59d0000 	ldr	r0, [sp]
        2f15b4:	eb634700 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f15b8:	e1a00004 	mov	r0, r4
        2f15bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f15c0:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: NSSendProtoIfDefinedWithArgArray__FRC6RefVarN21
 * Address: 002f15c4
 */
void globals::NSSendProtoIfDefinedWithArgArray() {
    /*
        2f15c4:	e1a0c00d 	mov	ip, sp
        2f15c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f15cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f15d0:	e1a05000 	mov	r5, r0
        2f15d4:	e1a04001 	mov	r4, r1
        2f15d8:	e1a06002 	mov	r6, r2
        2f15dc:	e5910000 	ldr	r0, [r1]
        2f15e0:	e5900000 	ldr	r0, [r0]
        2f15e4:	eb634f2e 	bl	1bc52a4 <$IsSymbol(long)>
        2f15e8:	e3300000 	teq	r0, #0	; 0x0
        2f15ec:	01a01004 	moveq	r1, r4
        2f15f0:	03a000e6 	moveq	r0, #230	; 0xe6
        2f15f4:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2f15f8:	0b645b97 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        2f15fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1600:	e1a01004 	mov	r1, r4
        2f1604:	e1a00005 	mov	r0, r5
        2f1608:	eb63fc7e 	bl	1bf0808 <$FindProtoImplementor__FRC6RefVarT1>
        2f160c:	eb6342ce 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1610:	e58d0000 	str	r0, [sp]
        2f1614:	e5900000 	ldr	r0, [r0]
        2f1618:	e3300002 	teq	r0, #2	; 0x2
        2f161c:	1a000003 	bne	2f1630 <NSSendProtoIfDefinedWithArgArray__FRC6RefVarN21+0x6c>
        2f1620:	e59d0000 	ldr	r0, [sp]
        2f1624:	eb6346e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1628:	e3a00002 	mov	r0, #2	; 0x2
        2f162c:	ea00000a 	b	2f165c <NSSendProtoIfDefinedWithArgArray__FRC6RefVarN21+0x98>
        2f1630:	e1a00006 	mov	r0, r6
        2f1634:	eb5d9542 	bl	1a56b44 <$PushArgArray(RefVar const &)>
        2f1638:	e1a03000 	mov	r3, r0
        2f163c:	e1a02004 	mov	r2, r4
        2f1640:	e1a0100d 	mov	r1, sp
        2f1644:	e1a00005 	mov	r0, r5
        2f1648:	eb5d84bf 	bl	1a5294c <$DoSend__FRC6RefVarN21l>
        2f164c:	e1a04000 	mov	r4, r0
        2f1650:	e59d0000 	ldr	r0, [sp]
        2f1654:	eb6346d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1658:	e1a00004 	mov	r0, r4
        2f165c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NSGetGlobalFn(RefVar const &)
 * Address: 002f16e0
 */
NSGetGlobalFn(RefVar const &) {
    /*
        2f16e0:	e1a0c00d 	mov	ip, sp
        2f16e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f16e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f16ec:	e1a04000 	mov	r4, r0
        2f16f0:	e59f002c 	ldr	r0, [pc, #2c]	; 2f1724 <NSGetGlobalFn(RefVar const &)+0x44>
        2f16f4:	e5900000 	ldr	r0, [r0]
        2f16f8:	e5941000 	ldr	r1, [r4]
        2f16fc:	e5911000 	ldr	r1, [r1]
        2f1700:	eb634ad6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f1704:	e1a05000 	mov	r5, r0
        2f1708:	e3300002 	teq	r0, #2	; 0x2
        2f170c:	01a01004 	moveq	r1, r4
        2f1710:	03a00f56 	moveq	r0, #344	; 0x158
        2f1714:	02400903 	subeq	r0, r0, #49152	; 0xc000
        2f1718:	0b5d4ac6 	bleq	1a44238 <$ThrowExInterpreterWithSymbol(long, RefVar const &)>
        2f171c:	e1a00005 	mov	r0, r5
        2f1720:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2f1724:	0c10544c 	ldceq	4, cr5, [r0], -#304
    */
}

/**
 * Symbol: NSCallGlobalFn(RefVar const &)
 * Address: 002f1728
 */
NSCallGlobalFn(RefVar const &) {
    /*
        2f1728:	e1a0c00d 	mov	ip, sp
        2f172c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2f1730:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f1734:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1738:	eb643a3f 	bl	1c0003c <$NSGetGlobalFn(RefVar const &)>
        2f173c:	eb634282 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1740:	e58d0000 	str	r0, [sp]
        2f1744:	e1a0000d 	mov	r0, sp
        2f1748:	eb643a2c 	bl	1c00000 <$NSCall(RefVar const &)>
        2f174c:	e1a04000 	mov	r4, r0
        2f1750:	e59d0000 	ldr	r0, [sp]
        2f1754:	eb634698 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1758:	e1a00004 	mov	r0, r4
        2f175c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NSCallGlobalFn__FRC6RefVarT1
 * Address: 002f1760
 */
void globals::NSCallGlobalFn() {
    /*
        2f1760:	e1a0c00d 	mov	ip, sp
        2f1764:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2f1768:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f176c:	e1a04001 	mov	r4, r1
        2f1770:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1774:	eb643a30 	bl	1c0003c <$NSGetGlobalFn(RefVar const &)>
        2f1778:	eb634273 	bl	1bc214c <$AllocateRefHandle(long)>
        2f177c:	e58d0000 	str	r0, [sp]
        2f1780:	e1a0000d 	mov	r0, sp
        2f1784:	e1a01004 	mov	r1, r4
        2f1788:	eb643a1d 	bl	1c00004 <$NSCall__FRC6RefVarT1>
        2f178c:	e1a04000 	mov	r4, r0
        2f1790:	e59d0000 	ldr	r0, [sp]
        2f1794:	eb634688 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1798:	e1a00004 	mov	r0, r4
        2f179c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NSCallGlobalFn__FRC6RefVarN21
 * Address: 002f17a0
 */
void globals::NSCallGlobalFn() {
    /*
        2f17a0:	e1a0c00d 	mov	ip, sp
        2f17a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f17a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f17ac:	e1a05001 	mov	r5, r1
        2f17b0:	e1a04002 	mov	r4, r2
        2f17b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f17b8:	eb643a1f 	bl	1c0003c <$NSGetGlobalFn(RefVar const &)>
        2f17bc:	eb634262 	bl	1bc214c <$AllocateRefHandle(long)>
        2f17c0:	e58d0000 	str	r0, [sp]
        2f17c4:	e1a0000d 	mov	r0, sp
        2f17c8:	e1a02004 	mov	r2, r4
        2f17cc:	e1a01005 	mov	r1, r5
        2f17d0:	eb643a0c 	bl	1c00008 <$NSCall__FRC6RefVarN21>
        2f17d4:	e1a04000 	mov	r4, r0
        2f17d8:	e59d0000 	ldr	r0, [sp]
        2f17dc:	eb634676 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f17e0:	e1a00004 	mov	r0, r4
        2f17e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NSCallGlobalFn__FRC6RefVarN31
 * Address: 002f17e8
 */
void globals::NSCallGlobalFn() {
    /*
        2f17e8:	e1a0c00d 	mov	ip, sp
        2f17ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f17f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f17f4:	e1a06001 	mov	r6, r1
        2f17f8:	e1a05002 	mov	r5, r2
        2f17fc:	e1a04003 	mov	r4, r3
        2f1800:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1804:	eb643a0c 	bl	1c0003c <$NSGetGlobalFn(RefVar const &)>
        2f1808:	eb63424f 	bl	1bc214c <$AllocateRefHandle(long)>
        2f180c:	e58d0000 	str	r0, [sp]
        2f1810:	e1a0000d 	mov	r0, sp
        2f1814:	e1a03004 	mov	r3, r4
        2f1818:	e1a02005 	mov	r2, r5
        2f181c:	e1a01006 	mov	r1, r6
        2f1820:	eb6439f9 	bl	1c0000c <$NSCall__FRC6RefVarN31>
        2f1824:	e1a04000 	mov	r4, r0
        2f1828:	e59d0000 	ldr	r0, [sp]
        2f182c:	eb634662 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1830:	e1a00004 	mov	r0, r4
        2f1834:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NSCallGlobalFn__FRC6RefVarN41
 * Address: 002f1838
 */
void globals::NSCallGlobalFn() {
    /*
        2f1838:	e1a0c00d 	mov	ip, sp
        2f183c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f1840:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f1844:	e1a06001 	mov	r6, r1
        2f1848:	e1a05002 	mov	r5, r2
        2f184c:	e1a04003 	mov	r4, r3
        2f1850:	e59b3004 	ldr	r3, [fp, #4]
        2f1854:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1858:	e92d0008 	stmdb	sp!, {r3}
        2f185c:	eb6439f6 	bl	1c0003c <$NSGetGlobalFn(RefVar const &)>
        2f1860:	eb634239 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1864:	e58d0004 	str	r0, [sp, #4]
        2f1868:	e28d0004 	add	r0, sp, #4	; 0x4
        2f186c:	e1a03004 	mov	r3, r4
        2f1870:	e1a02005 	mov	r2, r5
        2f1874:	e1a01006 	mov	r1, r6
        2f1878:	eb6439e4 	bl	1c00010 <$NSCall__FRC6RefVarN41>
        2f187c:	e1a04000 	mov	r4, r0
        2f1880:	e5bd0004 	ldr	r0, [sp, #4]!
        2f1884:	eb63464c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1888:	e1a00004 	mov	r0, r4
        2f188c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NSCallGlobalFn__FRC6RefVarN51
 * Address: 002f1890
 */
void globals::NSCallGlobalFn() {
    /*
        2f1890:	e1a0c00d 	mov	ip, sp
        2f1894:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f1898:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f189c:	e1a06001 	mov	r6, r1
        2f18a0:	e1a05002 	mov	r5, r2
        2f18a4:	e1a04003 	mov	r4, r3
        2f18a8:	e99b000c 	ldmib	fp, {r2, r3}
        2f18ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f18b0:	e92d000c 	stmdb	sp!, {r2, r3}
        2f18b4:	eb6439e0 	bl	1c0003c <$NSGetGlobalFn(RefVar const &)>
        2f18b8:	eb634223 	bl	1bc214c <$AllocateRefHandle(long)>
        2f18bc:	e58d0008 	str	r0, [sp, #8]
        2f18c0:	e28d0008 	add	r0, sp, #8	; 0x8
        2f18c4:	e1a03004 	mov	r3, r4
        2f18c8:	e1a02005 	mov	r2, r5
        2f18cc:	e1a01006 	mov	r1, r6
        2f18d0:	eb6439cf 	bl	1c00014 <$NSCall__FRC6RefVarN51>
        2f18d4:	e1a04000 	mov	r4, r0
        2f18d8:	e5bd0008 	ldr	r0, [sp, #8]!
        2f18dc:	eb634636 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f18e0:	e1a00004 	mov	r0, r4
        2f18e4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NSCallGlobalFn__FRC6RefVarN61
 * Address: 002f18e8
 */
void globals::NSCallGlobalFn() {
    /*
        2f18e8:	e1a0c00d 	mov	ip, sp
        2f18ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f18f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f18f4:	e1a06001 	mov	r6, r1
        2f18f8:	e1a05002 	mov	r5, r2
        2f18fc:	e1a04003 	mov	r4, r3
        2f1900:	e99b000e 	ldmib	fp, {r1, r2, r3}
        2f1904:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1908:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2f190c:	eb6439ca 	bl	1c0003c <$NSGetGlobalFn(RefVar const &)>
        2f1910:	eb63420d 	bl	1bc214c <$AllocateRefHandle(long)>
        2f1914:	e58d000c 	str	r0, [sp, #12]
        2f1918:	e28d000c 	add	r0, sp, #12	; 0xc
        2f191c:	e1a03004 	mov	r3, r4
        2f1920:	e1a02005 	mov	r2, r5
        2f1924:	e1a01006 	mov	r1, r6
        2f1928:	eb6439ba 	bl	1c00018 <$NSCall__FRC6RefVarN61>
        2f192c:	e1a04000 	mov	r4, r0
        2f1930:	e5bd000c 	ldr	r0, [sp, #12]!
        2f1934:	eb634620 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1938:	e1a00004 	mov	r0, r4
        2f193c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NSCallGlobalFnWithArgArray__FRC6RefVarT1
 * Address: 002f1940
 */
void globals::NSCallGlobalFnWithArgArray() {
    /*
        2f1940:	e1a0c00d 	mov	ip, sp
        2f1944:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2f1948:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f194c:	e1a04001 	mov	r4, r1
        2f1950:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f1954:	eb6439b8 	bl	1c0003c <$NSGetGlobalFn(RefVar const &)>
        2f1958:	eb6341fb 	bl	1bc214c <$AllocateRefHandle(long)>
        2f195c:	e58d0000 	str	r0, [sp]
        2f1960:	e1a0000d 	mov	r0, sp
        2f1964:	e1a01004 	mov	r1, r4
        2f1968:	eb634618 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        2f196c:	e1a04000 	mov	r4, r0
        2f1970:	e59d0000 	ldr	r0, [sp]
        2f1974:	eb634610 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f1978:	e1a00004 	mov	r0, r4
        2f197c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NativeEntry(RefVar const &, long, RefHandle **)
 * Address: 002f6558
 */
NativeEntry(RefVar const &, long, RefHandle **) {
    /*
        2f6558:	e1a0c00d 	mov	ip, sp
        2f655c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2f6560:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f6564:	e1a04000 	mov	r4, r0
        2f6568:	e1a06001 	mov	r6, r1
        2f656c:	e1a05002 	mov	r5, r2
        2f6570:	e5900000 	ldr	r0, [r0]
        2f6574:	e5900000 	ldr	r0, [r0]
        2f6578:	e3a09000 	mov	r9, #0	; 0x0
        2f657c:	e1a01009 	mov	r1, r9
        2f6580:	eb633733 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2f6584:	e59f8058 	ldr	r8, [pc, #58]	; 2f65e4 <NativeEntry(RefVar const &, long, RefHandle **)+0x8c>
        2f6588:	e3a0705d 	mov	r7, #93	; 0x5d
        2f658c:	e2477cbf 	sub	r7, r7, #48896	; 0xbf00
        2f6590:	e3a0a002 	mov	sl, #2	; 0x2
        2f6594:	e240ce13 	sub	ip, r0, #304	; 0x130
        2f6598:	e33c0002 	teq	ip, #2	; 0x2
        2f659c:	1a000011 	bne	2f65e8 <NativeEntry(RefVar const &, long, RefHandle **)+0x90>
        2f65a0:	e5940000 	ldr	r0, [r4]
        2f65a4:	e5900000 	ldr	r0, [r0]
        2f65a8:	eb633b51 	bl	1bc52f4 <$ObjectPtr(long)>
        2f65ac:	e5900014 	ldr	r0, [r0, #20]
        2f65b0:	e1360140 	teq	r6, r0, asr #2
        2f65b4:	0a000003 	beq	2f65c8 <NativeEntry(RefVar const &, long, RefHandle **)+0x70>
        2f65b8:	e3a02000 	mov	r2, #0	; 0x0
        2f65bc:	e1a01007 	mov	r1, r7
        2f65c0:	e5980000 	ldr	r0, [r8]
        2f65c4:	eb63b2f4 	bl	1be319c <$Throw>
        2f65c8:	e5950000 	ldr	r0, [r5]
        2f65cc:	e580a000 	str	sl, [r0]
        2f65d0:	e5940000 	ldr	r0, [r4]
        2f65d4:	e5900000 	ldr	r0, [r0]
        2f65d8:	eb633b45 	bl	1bc52f4 <$ObjectPtr(long)>
        2f65dc:	e5900010 	ldr	r0, [r0, #16]
        2f65e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f65e4:	00371300 	eoreqs	r1, r7, r0, lsl #6
        2f65e8:	e240ce23 	sub	ip, r0, #560	; 0x230
        2f65ec:	e33c0002 	teq	ip, #2	; 0x2
        2f65f0:	1a00001b 	bne	2f6664 <NativeEntry(RefVar const &, long, RefHandle **)+0x10c>
        2f65f4:	e5940000 	ldr	r0, [r4]
        2f65f8:	e5900000 	ldr	r0, [r0]
        2f65fc:	eb633b3c 	bl	1bc52f4 <$ObjectPtr(long)>
        2f6600:	e5900014 	ldr	r0, [r0, #20]
        2f6604:	e1360140 	teq	r6, r0, asr #2
        2f6608:	0a000003 	beq	2f661c <NativeEntry(RefVar const &, long, RefHandle **)+0xc4>
        2f660c:	e3a02000 	mov	r2, #0	; 0x0
        2f6610:	e1a01007 	mov	r1, r7
        2f6614:	e5980000 	ldr	r0, [r8]
        2f6618:	eb63b2df 	bl	1be319c <$Throw>
        2f661c:	e5940000 	ldr	r0, [r4]
        2f6620:	e5900000 	ldr	r0, [r0]
        2f6624:	eb633b32 	bl	1bc52f4 <$ObjectPtr(long)>
        2f6628:	e5900018 	ldr	r0, [r0, #24]
        2f662c:	e5951000 	ldr	r1, [r5]
        2f6630:	e5810000 	str	r0, [r1]
        2f6634:	e5940000 	ldr	r0, [r4]
        2f6638:	e5900000 	ldr	r0, [r0]
        2f663c:	eb633b2c 	bl	1bc52f4 <$ObjectPtr(long)>
        2f6640:	e5900010 	ldr	r0, [r0, #16]
        2f6644:	eb632ec4 	bl	1bc215c <$BinaryData(long)>
        2f6648:	e1a05000 	mov	r5, r0
        2f664c:	e5940000 	ldr	r0, [r4]
        2f6650:	e5900000 	ldr	r0, [r0]
        2f6654:	eb633b26 	bl	1bc52f4 <$ObjectPtr(long)>
        2f6658:	e590001c 	ldr	r0, [r0, #28]
        2f665c:	e0850140 	add	r0, r5, r0, asr #2
        2f6660:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f6664:	e59f10c4 	ldr	r1, [pc, #c4]	; 2f6730 <NativeEntry(RefVar const &, long, RefHandle **)+0x1d8>
        2f6668:	e5911000 	ldr	r1, [r1]
        2f666c:	e5911000 	ldr	r1, [r1]
        2f6670:	eb6336ee 	bl	1bc4230 <$EQRef__FlT1>
        2f6674:	e3300000 	teq	r0, #0	; 0x0
        2f6678:	01a00009 	moveq	r0, r9
        2f667c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f6680:	e5940000 	ldr	r0, [r4]
        2f6684:	e5900000 	ldr	r0, [r0]
        2f6688:	e59f10a4 	ldr	r1, [pc, #a4]	; 2f6734 <NativeEntry(RefVar const &, long, RefHandle **)+0x1dc>
        2f668c:	e5911000 	ldr	r1, [r1]
        2f6690:	e5911000 	ldr	r1, [r1]
        2f6694:	eb6336f1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f6698:	e3100003 	tst	r0, #3	; 0x3
        2f669c:	01a00140 	moveq	r0, r0, asr #2
        2f66a0:	0a000000 	beq	2f66a8 <NativeEntry(RefVar const &, long, RefHandle **)+0x150>
        2f66a4:	eb632e9c 	bl	1bc211c <$_RINTError(long)>
        2f66a8:	e1300006 	teq	r0, r6
        2f66ac:	0a000003 	beq	2f66c0 <NativeEntry(RefVar const &, long, RefHandle **)+0x168>
        2f66b0:	e3a02000 	mov	r2, #0	; 0x0
        2f66b4:	e1a01007 	mov	r1, r7
        2f66b8:	e5980000 	ldr	r0, [r8]
        2f66bc:	eb63b2b6 	bl	1be319c <$Throw>
        2f66c0:	e5940000 	ldr	r0, [r4]
        2f66c4:	e5900000 	ldr	r0, [r0]
        2f66c8:	e59f1068 	ldr	r1, [pc, #68]	; 2f6738 <NativeEntry(RefVar const &, long, RefHandle **)+0x1e0>
        2f66cc:	e5911000 	ldr	r1, [r1]
        2f66d0:	e5911000 	ldr	r1, [r1]
        2f66d4:	eb6336e1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f66d8:	e5951000 	ldr	r1, [r5]
        2f66dc:	e5810000 	str	r0, [r1]
        2f66e0:	e5940000 	ldr	r0, [r4]
        2f66e4:	e5900000 	ldr	r0, [r0]
        2f66e8:	e59f104c 	ldr	r1, [pc, #4c]	; 2f673c <NativeEntry(RefVar const &, long, RefHandle **)+0x1e4>
        2f66ec:	e5911000 	ldr	r1, [r1]
        2f66f0:	e5911000 	ldr	r1, [r1]
        2f66f4:	eb6336d9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f66f8:	eb632e97 	bl	1bc215c <$BinaryData(long)>
        2f66fc:	e1a05000 	mov	r5, r0
        2f6700:	e5940000 	ldr	r0, [r4]
        2f6704:	e5900000 	ldr	r0, [r0]
        2f6708:	e59f1030 	ldr	r1, [pc, #30]	; 2f6740 <NativeEntry(RefVar const &, long, RefHandle **)+0x1e8>
        2f670c:	e5911000 	ldr	r1, [r1]
        2f6710:	e5911000 	ldr	r1, [r1]
        2f6714:	eb6336d1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2f6718:	e3100003 	tst	r0, #3	; 0x3
        2f671c:	01a00140 	moveq	r0, r0, asr #2
        2f6720:	0a000000 	beq	2f6728 <NativeEntry(RefVar const &, long, RefHandle **)+0x1d0>
        2f6724:	eb632e7c 	bl	1bc211c <$_RINTError(long)>
        2f6728:	e0800005 	add	r0, r0, r5
        2f672c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2f6730:	006820a8 	rsbeq	r2, r8, r8, lsr #1
        2f6734:	00683ac0 	rsbeq	r3, r8, r0, asr #21
        2f6738:	00682498 	streqb	r2, [r8], -#72
        2f673c:	006824c0 	rsbeq	r2, r8, r0, asr #9
        2f6740:	00683b30 	rsbeq	r3, r8, r0, lsr fp
    */
}

/**
 * Symbol: nobrk_left__FPsiT2
 * Address: 00306024
 */
void globals::nobrk_left() {
    /*
        306024:	ea000000 	b	30602c <nobrk_left__FPsiT2+0x8>
        306028:	e2411001 	sub	r1, r1, #1	; 0x1
        30602c:	e1510002 	cmp	r1, r2
        306030:	ba000003 	blt	306044 <nobrk_left__FPsiT2+0x20>
        306034:	e7903081 	ldr	r3, [r0, r1, lsl #1]
        306038:	e1a03843 	mov	r3, r3, asr #16
        30603c:	e3730001 	cmn	r3, #1	; 0x1
        306040:	0afffff8 	beq	306028 <nobrk_left__FPsiT2+0x4>
        306044:	e1a00001 	mov	r0, r1
        306048:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: nobrk_right__FPsiT2
 * Address: 0030604c
 */
void globals::nobrk_right() {
    /*
        30604c:	ea000000 	b	306054 <nobrk_right__FPsiT2+0x8>
        306050:	e2811001 	add	r1, r1, #1	; 0x1
        306054:	e1510002 	cmp	r1, r2
        306058:	ca000003 	bgt	30606c <nobrk_right__FPsiT2+0x20>
        30605c:	e7903081 	ldr	r3, [r0, r1, lsl #1]
        306060:	e1a03843 	mov	r3, r3, asr #16
        306064:	e3730001 	cmn	r3, #1	; 0x1
        306068:	0afffff8 	beq	306050 <nobrk_right__FPsiT2+0x4>
        30606c:	e1a00001 	mov	r0, r1
        306070:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NewIndex__FPsT1sN23
 * Address: 00307cd0
 */
void globals::NewIndex() {
    /*
        307cd0:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        307cd4:	e1a05802 	mov	r5, r2, lsl #16
        307cd8:	e1a05845 	mov	r5, r5, asr #16
        307cdc:	e1a0c803 	mov	ip, r3, lsl #16
        307ce0:	e1a0c84c 	mov	ip, ip, asr #16
        307ce4:	e59de010 	ldr	lr, [sp, #16]
        307ce8:	e1a0480e 	mov	r4, lr, lsl #16
        307cec:	e1b04844 	movs	r4, r4, asr #16
        307cf0:	e3e0e001 	mvn	lr, #1	; 0x1
        307cf4:	13340001 	teqne	r4, #1	; 0x1
        307cf8:	1a00000f 	bne	307d3c <NewIndex__FPsT1sN23+0x6c>
        307cfc:	e3a03000 	mov	r3, #0	; 0x0
        307d00:	e35c0000 	cmp	ip, #0	; 0x0
        307d04:	da000005 	ble	307d20 <NewIndex__FPsT1sN23+0x50>
        307d08:	e7906083 	ldr	r6, [r0, r3, lsl #1]
        307d0c:	e1a06846 	mov	r6, r6, asr #16
        307d10:	e1560005 	cmp	r6, r5
        307d14:	b2833001 	addlt	r3, r3, #1	; 0x1
        307d18:	b153000c 	cmplt	r3, ip
        307d1c:	bafffff9 	blt	307d08 <NewIndex__FPsT1sN23+0x38>
        307d20:	e153000c 	cmp	r3, ip
        307d24:	aa000004 	bge	307d3c <NewIndex__FPsT1sN23+0x6c>
        307d28:	e7911083 	ldr	r1, [r1, r3, lsl #1]
        307d2c:	e1a01841 	mov	r1, r1, asr #16
        307d30:	e3710001 	cmn	r1, #1	; 0x1
        307d34:	0243e001 	subeq	lr, r3, #1	; 0x1
        307d38:	11a0e003 	movne	lr, r3
        307d3c:	e3340002 	teq	r4, #2	; 0x2
        307d40:	13340001 	teqne	r4, #1	; 0x1
        307d44:	1a000011 	bne	307d90 <NewIndex__FPsT1sN23+0xc0>
        307d48:	e3a02000 	mov	r2, #0	; 0x0
        307d4c:	e35c0000 	cmp	ip, #0	; 0x0
        307d50:	da000006 	ble	307d70 <NewIndex__FPsT1sN23+0xa0>
        307d54:	e7901082 	ldr	r1, [r0, r2, lsl #1]
        307d58:	e1a01841 	mov	r1, r1, asr #16
        307d5c:	e1510005 	cmp	r1, r5
        307d60:	ca000002 	bgt	307d70 <NewIndex__FPsT1sN23+0xa0>
        307d64:	e2822001 	add	r2, r2, #1	; 0x1
        307d68:	e152000c 	cmp	r2, ip
        307d6c:	bafffff8 	blt	307d54 <NewIndex__FPsT1sN23+0x84>
        307d70:	e152000c 	cmp	r2, ip
        307d74:	ba000003 	blt	307d88 <NewIndex__FPsT1sN23+0xb8>
        307d78:	e0800082 	add	r0, r0, r2, lsl #1
        307d7c:	e5100002 	ldr	r0, [r0, -#2]
        307d80:	e1350840 	teq	r5, r0, asr #16
        307d84:	1a000001 	bne	307d90 <NewIndex__FPsT1sN23+0xc0>
        307d88:	e2422001 	sub	r2, r2, #1	; 0x1
        307d8c:	e1a0e002 	mov	lr, r2
        307d90:	e3340001 	teq	r4, #1	; 0x1
        307d94:	1a000002 	bne	307da4 <NewIndex__FPsT1sN23+0xd4>
        307d98:	e37e0002 	cmn	lr, #2	; 0x2
        307d9c:	10830002 	addne	r0, r3, r2
        307da0:	11a0e0c0 	movne	lr, r0, asr #1
        307da4:	e1a0080e 	mov	r0, lr, lsl #16
        307da8:	e1a00840 	mov	r0, r0, asr #16
        307dac:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: NewSPECLElem(low_type *)
 * Address: 0030a668
 */
NewSPECLElem(low_type *) {
    /*
        30a668:	e1a0c00d 	mov	ip, sp
        30a66c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30a670:	e24cb004 	sub	fp, ip, #4	; 0x4
        30a674:	e1a04000 	mov	r4, r0
        30a678:	e5900046 	ldr	r0, [r0, #70]
        30a67c:	e1a00840 	mov	r0, r0, asr #16
        30a680:	e5941044 	ldr	r1, [r4, #68]
        30a684:	e1500841 	cmp	r0, r1, asr #16
        30a688:	a3a00000 	movge	r0, #0	; 0x0
        30a68c:	a91ba810 	ldmgedb	fp, {r4, fp, sp, pc}
        30a690:	e0800100 	add	r0, r0, r0, lsl #2
        30a694:	e5941040 	ldr	r1, [r4, #64]
        30a698:	e0810100 	add	r0, r1, r0, lsl #2
        30a69c:	e3a02014 	mov	r2, #20	; 0x14
        30a6a0:	e3a01000 	mov	r1, #0	; 0x0
        30a6a4:	eb62a8eb 	bl	1bb4a58 <$memset>
        30a6a8:	e5940046 	ldr	r0, [r4, #70]
        30a6ac:	e1a00840 	mov	r0, r0, asr #16
        30a6b0:	e2801001 	add	r1, r0, #1	; 0x1
        30a6b4:	e5c41047 	strb	r1, [r4, #71]
        30a6b8:	e1a01441 	mov	r1, r1, asr #8
        30a6bc:	e5c41046 	strb	r1, [r4, #70]
        30a6c0:	e0800100 	add	r0, r0, r0, lsl #2
        30a6c4:	e5b41040 	ldr	r1, [r4, #64]!
        30a6c8:	e0810100 	add	r0, r1, r0, lsl #2
        30a6cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: NewHeap
 * Address: 00310e24
 */
void globals::NewHeap() {
    /*
        310e24:	e1a0c00d 	mov	ip, sp
        310e28:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        310e2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        310e30:	e1a05000 	mov	r5, r0
        310e34:	e1a04001 	mov	r4, r1
        310e38:	e1a06002 	mov	r6, r2
        310e3c:	eb6340a7 	bl	1be10e0 <$GetCurrentHeap>
        310e40:	e1a08000 	mov	r8, r0
        310e44:	e2857010 	add	r7, r5, #16	; 0x10
        310e48:	e1a01006 	mov	r1, r6
        310e4c:	e1a00005 	mov	r0, r5
        310e50:	e3a02000 	mov	r2, #0	; 0x0
        310e54:	eb633844 	bl	1bdef6c <$FillBytes>
        310e58:	e1a00007 	mov	r0, r7
        310e5c:	eb6344c4 	bl	1be2174 <$SetCurrentHeap>
        310e60:	e1a00005 	mov	r0, r5
        310e64:	e3a01003 	mov	r1, #3	; 0x3
        310e68:	eb619b5d 	bl	1b77be4 <$CreatePrivateBlock>
        310e6c:	e3a000cc 	mov	r0, #204	; 0xcc
        310e70:	e507000c 	str	r0, [r7, -#12]
        310e74:	e28700bc 	add	r0, r7, #188	; 0xbc
        310e78:	e5875000 	str	r5, [r7]
        310e7c:	e59f10b0 	ldr	r1, [pc, #b0]	; 310f34 <NewHeap+0x110>
        310e80:	e5871008 	str	r1, [r7, #8]
        310e84:	e5874028 	str	r4, [r7, #40]
        310e88:	e5876038 	str	r6, [r7, #56]
        310e8c:	e5971038 	ldr	r1, [r7, #56]
        310e90:	e587102c 	str	r1, [r7, #44]
        310e94:	e5871030 	str	r1, [r7, #48]
        310e98:	e597102c 	ldr	r1, [r7, #44]
        310e9c:	e3a06000 	mov	r6, #0	; 0x0
        310ea0:	e5871034 	str	r1, [r7, #52]
        310ea4:	e587603c 	str	r6, [r7, #60]
        310ea8:	e5876018 	str	r6, [r7, #24]
        310eac:	e597402c 	ldr	r4, [r7, #44]
        310eb0:	e0851004 	add	r1, r5, r4
        310eb4:	e5870020 	str	r0, [r7, #32]
        310eb8:	e5871004 	str	r1, [r7, #4]
        310ebc:	e5870024 	str	r0, [r7, #36]
        310ec0:	e5870048 	str	r0, [r7, #72]
        310ec4:	e587700c 	str	r7, [r7, #12]
        310ec8:	e5877098 	str	r7, [r7, #152]
        310ecc:	e587709c 	str	r7, [r7, #156]
        310ed0:	e5877010 	str	r7, [r7, #16]
        310ed4:	e24440dc 	sub	r4, r4, #220	; 0xdc
        310ed8:	e587401c 	str	r4, [r7, #28]
        310edc:	e5876014 	str	r6, [r7, #20]
        310ee0:	e8800050 	stmia	r0, {r4, r6}
        310ee4:	e5806008 	str	r6, [r0, #8]
        310ee8:	e580600c 	str	r6, [r0, #12]
        310eec:	e0800004 	add	r0, r0, r4
        310ef0:	e1a04000 	mov	r4, r0
        310ef4:	e3a01004 	mov	r1, #4	; 0x4
        310ef8:	eb619b39 	bl	1b77be4 <$CreatePrivateBlock>
        310efc:	e5d40000 	ldrb	r0, [r4]
        310f00:	e3800004 	orr	r0, r0, #4	; 0x4
        310f04:	e5c40000 	strb	r0, [r4]
        310f08:	e3a00010 	mov	r0, #16	; 0x10
        310f0c:	e9a40081 	stmib	r4!, {r0, r7}
        310f10:	e3a00040 	mov	r0, #64	; 0x40
        310f14:	e5870040 	str	r0, [r7, #64]
        310f18:	e5876080 	str	r6, [r7, #128]
        310f1c:	e5876064 	str	r6, [r7, #100]
        310f20:	e1a00008 	mov	r0, r8
        310f24:	e5876044 	str	r6, [r7, #68]
        310f28:	eb634491 	bl	1be2174 <$SetCurrentHeap>
        310f2c:	e1a00007 	mov	r0, r7
        310f30:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        310f34:	736b6961 	cmnvc	fp, #1589248	; 0x184000
    */
}

/**
 * Symbol: NewTemporaryBlock
 * Address: 00311058
 */
void globals::NewTemporaryBlock() {
    /*
        311058:	e1a0c00d 	mov	ip, sp
        31105c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        311060:	e24cb004 	sub	fp, ip, #4	; 0x4
        311064:	e1a04000 	mov	r4, r0
        311068:	e3a06000 	mov	r6, #0	; 0x0
        31106c:	eb00071c 	bl	312ce4 <NewWeakBlock>
        311070:	e1b05000 	movs	r5, r0
        311074:	1a000005 	bne	311090 <NewTemporaryBlock+0x38>
        311078:	eb634018 	bl	1be10e0 <$GetCurrentHeap>
        31107c:	e1a06000 	mov	r6, r0
        311080:	eb619ee9 	bl	1b78c2c <$GetFirstHeap>
        311084:	e1a01004 	mov	r1, r4
        311088:	ebffffdb 	bl	310ffc <GetSkiaHeapSemaphore+0x1c>
        31108c:	e1a05000 	mov	r5, r0
        311090:	e5550010 	ldrb	r0, [r5, -#16]
        311094:	e3800008 	orr	r0, r0, #8	; 0x8
        311098:	e5450010 	strb	r0, [r5, -#16]
        31109c:	e555000e 	ldrb	r0, [r5, -#14]
        3110a0:	e2800001 	add	r0, r0, #1	; 0x1
        3110a4:	e545000e 	strb	r0, [r5, -#14]
        3110a8:	e3360000 	teq	r6, #0	; 0x0
        3110ac:	11a00006 	movne	r0, r6
        3110b0:	1b63442f 	blne	1be2174 <$SetCurrentHeap>
        3110b4:	e1a00005 	mov	r0, r5
        3110b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NewBlockLow
 * Address: 00311db4
 */
void globals::NewBlockLow() {
    /*
        311db4:	ea619ba9 	b	1b78c60 <$NewBlock>
    */
}

/**
 * Symbol: NewBlock
 * Address: 00311db8
 */
void globals::NewBlock() {
    /*
        311db8:	e1a0c00d 	mov	ip, sp
        311dbc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        311dc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        311dc4:	e1a05000 	mov	r5, r0
        311dc8:	eb633cc4 	bl	1be10e0 <$GetCurrentHeap>
        311dcc:	e1a04000 	mov	r4, r0
        311dd0:	e2850010 	add	r0, r5, #16	; 0x10
        311dd4:	e2401001 	sub	r1, r0, #1	; 0x1
        311dd8:	e1e01001 	mvn	r1, r1
        311ddc:	e2017003 	and	r7, r1, #3	; 0x3
        311de0:	e0805007 	add	r5, r0, r7
        311de4:	e5940020 	ldr	r0, [r4, #32]
        311de8:	e3a08000 	mov	r8, #0	; 0x0
        311dec:	e5840048 	str	r0, [r4, #72]
        311df0:	ea00000c 	b	311e28 <NewBlock+0x70>
        311df4:	e1a00005 	mov	r0, r5
        311df8:	eb619fa1 	bl	1b79c84 <$SearchFreeList>
        311dfc:	e3300000 	teq	r0, #0	; 0x0
        311e00:	0a000002 	beq	311e10 <NewBlock+0x58>
        311e04:	e5900000 	ldr	r0, [r0]
        311e08:	e1500005 	cmp	r0, r5
        311e0c:	aa000005 	bge	311e28 <NewBlock+0x70>
        311e10:	e1a01005 	mov	r1, r5
        311e14:	e1a00004 	mov	r0, r4
        311e18:	eb633452 	bl	1bdef68 <$ExtendVMHeap>
        311e1c:	e3300000 	teq	r0, #0	; 0x0
        311e20:	01a00008 	moveq	r0, r8
        311e24:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        311e28:	e5946048 	ldr	r6, [r4, #72]
        311e2c:	e3360000 	teq	r6, #0	; 0x0
        311e30:	0affffef 	beq	311df4 <NewBlock+0x3c>
        311e34:	e5960000 	ldr	r0, [r6]
        311e38:	e1500005 	cmp	r0, r5
        311e3c:	baffffec 	blt	311df4 <NewBlock+0x3c>
        311e40:	e5960000 	ldr	r0, [r6]
        311e44:	e0401005 	sub	r1, r0, r5
        311e48:	e3510010 	cmp	r1, #16	; 0x10
        311e4c:	9a000003 	bls	311e60 <NewBlock+0xa8>
        311e50:	e1a01005 	mov	r1, r5
        311e54:	e1a00006 	mov	r0, r6
        311e58:	eb619b7f 	bl	1b78c5c <$MoveFreeBlock>
        311e5c:	ea000004 	b	311e74 <NewBlock+0xbc>
        311e60:	e0871001 	add	r1, r7, r1
        311e64:	e20170ff 	and	r7, r1, #255	; 0xff
        311e68:	e1a05000 	mov	r5, r0
        311e6c:	e1a00006 	mov	r0, r6
        311e70:	eb619b81 	bl	1b78c7c <$RemoveFreeBlock>
        311e74:	e594001c 	ldr	r0, [r4, #28]
        311e78:	e0400005 	sub	r0, r0, r5
        311e7c:	e584001c 	str	r0, [r4, #28]
        311e80:	e5868000 	str	r8, [r6]
        311e84:	e5c67001 	strb	r7, [r6, #1]
        311e88:	e5940068 	ldr	r0, [r4, #104]
        311e8c:	e0800007 	add	r0, r0, r7
        311e90:	e5840068 	str	r0, [r4, #104]
        311e94:	e3c71003 	bic	r1, r7, #3	; 0x3
        311e98:	e594006c 	ldr	r0, [r4, #108]
        311e9c:	e0800001 	add	r0, r0, r1
        311ea0:	e584006c 	str	r0, [r4, #108]
        311ea4:	e5865004 	str	r5, [r6, #4]
        311ea8:	e5c68002 	strb	r8, [r6, #2]
        311eac:	e59f002c 	ldr	r0, [pc, #2c]	; 311ee0 <NewBlock+0x128>
        311eb0:	e5900000 	ldr	r0, [r0]
        311eb4:	e586000c 	str	r0, [r6, #12]
        311eb8:	e594004c 	ldr	r0, [r4, #76]
        311ebc:	e3300000 	teq	r0, #0	; 0x0
        311ec0:	05940020 	ldreq	r0, [r4, #32]
        311ec4:	05840048 	streq	r0, [r4, #72]
        311ec8:	e5b40054 	ldr	r0, [r4, #84]!
        311ecc:	e3300000 	teq	r0, #0	; 0x0
        311ed0:	11a0e00f 	movne	lr, pc
        311ed4:	11a0f000 	movne	pc, r0
        311ed8:	e1a00006 	mov	r0, r6
        311edc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        311ee0:	0c101054 	ldceq	0, cr1, [r0], -#336
    */
}

/**
 * Symbol: NewDirectBlock
 * Address: 00311ee4
 */
void globals::NewDirectBlock() {
    /*
        311ee4:	e1a0c00d 	mov	ip, sp
        311ee8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        311eec:	e24cb004 	sub	fp, ip, #4	; 0x4
        311ef0:	e1a04000 	mov	r4, r0
        311ef4:	eb633c79 	bl	1be10e0 <$GetCurrentHeap>
        311ef8:	e1a05000 	mov	r5, r0
        311efc:	e1a00004 	mov	r0, r4
        311f00:	eb619b57 	bl	1b78c64 <$NewBlockLow>
        311f04:	e1b04000 	movs	r4, r0
        311f08:	03a00000 	moveq	r0, #0	; 0x0
        311f0c:	0a000004 	beq	311f24 <NewDirectBlock+0x40>
        311f10:	e3a00081 	mov	r0, #129	; 0x81
        311f14:	e5c40000 	strb	r0, [r4]
        311f18:	eb633c70 	bl	1be10e0 <$GetCurrentHeap>
        311f1c:	e5840008 	str	r0, [r4, #8]
        311f20:	e2840010 	add	r0, r4, #16	; 0x10
        311f24:	e3a01000 	mov	r1, #0	; 0x0
        311f28:	e5a5105c 	str	r1, [r5, #92]!
        311f2c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NewIndirectBlock
 * Address: 003120bc
 */
void globals::NewIndirectBlock() {
    /*
        3120bc:	e1a0c00d 	mov	ip, sp
        3120c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        3120c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3120c8:	e1a04000 	mov	r4, r0
        3120cc:	eb633c03 	bl	1be10e0 <$GetCurrentHeap>
        3120d0:	e1a06000 	mov	r6, r0
        3120d4:	e5900024 	ldr	r0, [r0, #36]
        3120d8:	e3300000 	teq	r0, #0	; 0x0
        3120dc:	15900008 	ldrne	r0, [r0, #8]
        3120e0:	13300000 	teqne	r0, #0	; 0x0
        3120e4:	11a00006 	movne	r0, r6
        3120e8:	13a01000 	movne	r1, #0	; 0x0
        3120ec:	1b6196bb 	blne	1b77be0 <$CompactHeap>
        3120f0:	e1a00006 	mov	r0, r6
        3120f4:	eb6196b5 	bl	1b77bd0 <$AllocateMasterPointer>
        3120f8:	e1b05000 	movs	r5, r0
        3120fc:	0a000010 	beq	312144 <NewIndirectBlock+0x88>
        312100:	e5960024 	ldr	r0, [r6, #36]
        312104:	e3300000 	teq	r0, #0	; 0x0
        312108:	15860048 	strne	r0, [r6, #72]
        31210c:	e1a00004 	mov	r0, r4
        312110:	eb619ad2 	bl	1b78c60 <$NewBlock>
        312114:	e3300000 	teq	r0, #0	; 0x0
        312118:	0a000005 	beq	312134 <NewIndirectBlock+0x78>
        31211c:	e2801010 	add	r1, r0, #16	; 0x10
        312120:	e8850042 	stmia	r5, {r1, r6}
        312124:	e3a01082 	mov	r1, #130	; 0x82
        312128:	e5c01000 	strb	r1, [r0]
        31212c:	e5a05008 	str	r5, [r0, #8]!
        312130:	ea000003 	b	312144 <NewIndirectBlock+0x88>
        312134:	e1a01005 	mov	r1, r5
        312138:	e1a00006 	mov	r0, r6
        31213c:	eb619ab1 	bl	1b78c08 <$FreeMasterPointer>
        312140:	e3a05000 	mov	r5, #0	; 0x0
        312144:	e1a00005 	mov	r0, r5
        312148:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NewFakeIndirectBlock
 * Address: 0031214c
 */
void globals::NewFakeIndirectBlock() {
    /*
        31214c:	e1a0c00d 	mov	ip, sp
        312150:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        312154:	e24cb004 	sub	fp, ip, #4	; 0x4
        312158:	e1a05000 	mov	r5, r0
        31215c:	e1a04001 	mov	r4, r1
        312160:	eb633bde 	bl	1be10e0 <$GetCurrentHeap>
        312164:	eb619699 	bl	1b77bd0 <$AllocateMasterPointer>
        312168:	e3300000 	teq	r0, #0	; 0x0
        31216c:	03a00000 	moveq	r0, #0	; 0x0
        312170:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        312174:	e3a01001 	mov	r1, #1	; 0x1
        312178:	e1811104 	orr	r1, r1, r4, lsl #2
        31217c:	e5801004 	str	r1, [r0, #4]
        312180:	e5805000 	str	r5, [r0]
        312184:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NewWeakBlock
 * Address: 00312ce4
 */
void globals::NewWeakBlock() {
    /*
        312ce4:	e1a0c00d 	mov	ip, sp
        312ce8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        312cec:	e24cb004 	sub	fp, ip, #4	; 0x4
        312cf0:	e1a04000 	mov	r4, r0
        312cf4:	eb6338f9 	bl	1be10e0 <$GetCurrentHeap>
        312cf8:	e590105c 	ldr	r1, [r0, #92]
        312cfc:	e3811002 	orr	r1, r1, #2	; 0x2
        312d00:	e5a0105c 	str	r1, [r0, #92]!
        312d04:	e1a00004 	mov	r0, r4
        312d08:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        312d0c:	ea6197d5 	b	1b78c68 <$NewDirectBlock>
    */
}

/**
 * Symbol: nan
 * Address: 00318e90
 */
void globals::nan() {
    /*
        318e90:	e3a01102 	mov	r1, #-2147483648	; 0x80000000
        318e94:	e2411702 	sub	r1, r1, #524288	; 0x80000
        318e98:	e52d1008 	str	r1, [sp, -#8]!
        318e9c:	e3a01000 	mov	r1, #0	; 0x0
        318ea0:	e58d1004 	str	r1, [sp, #4]
        318ea4:	e5d00000 	ldrb	r0, [r0]
        318ea8:	e1a00400 	mov	r0, r0, lsl #8
        318eac:	e58d0004 	str	r0, [sp, #4]
        318eb0:	ecbd8102 	ldfd	f0, [sp], #8
        318eb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NANsane
 * Address: 00318eb8
 */
void globals::NANsane() {
    /*
        318eb8:	e21000ff 	ands	r0, r0, #255	; 0xff
        318ebc:	e24dd008 	sub	sp, sp, #8	; 0x8
        318ec0:	e59f201c 	ldr	r2, [pc, #1c]	; 318ee4 <NANsane+0x2c>
        318ec4:	e8921008 	ldmia	r2, {r3, ip}
        318ec8:	e88d1008 	stmia	sp, {r3, ip}
        318ecc:	03a00015 	moveq	r0, #21	; 0x15
        318ed0:	e59d1004 	ldr	r1, [sp, #4]
        318ed4:	e0810800 	add	r0, r1, r0, lsl #16
        318ed8:	e58d0004 	str	r0, [sp, #4]
        318edc:	ecbd8102 	ldfd	f0, [sp], #8
        318ee0:	e1a0f00e 	mov	pc, lr
        318ee4:	00380a8c 	eoreqs	r0, r8, ip, lsl #21
    */
}

/**
 * Symbol: nextafterd
 * Address: 003193c4
 */
void globals::nextafterd() {
    /*
        3193c4:	e1a0c00d 	mov	ip, sp
        3193c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        3193cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3193d0:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        3193d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        3193d8:	ecbdc102 	ldfd	f4, [sp], #8
        3193dc:	ecbdd102 	ldfd	f5, [sp], #8
        3193e0:	e24dd010 	sub	sp, sp, #16	; 0x10
        3193e4:	ed2dc102 	stfd	f4, [sp, -#8]!
        3193e8:	e8bd0003 	ldmia	sp!, {r0, r1}
        3193ec:	eb63a77e 	bl	1c031ec <$__isnand>
        3193f0:	e3300000 	teq	r0, #0	; 0x0
        3193f4:	1a000004 	bne	31940c <nextafterd+0x48>
        3193f8:	ed2dd102 	stfd	f5, [sp, -#8]!
        3193fc:	e8bd0003 	ldmia	sp!, {r0, r1}
        319400:	eb63a779 	bl	1c031ec <$__isnand>
        319404:	e3300000 	teq	r0, #0	; 0x0
        319408:	0a000001 	beq	319414 <nextafterd+0x50>
        31940c:	ee040185 	adfd	f0, f4, f5
        319410:	ea00003c 	b	319508 <nextafterd+0x144>
        319414:	ee94f115 	cmf	f4, f5
        319418:	0e008184 	mvfeqd	f0, f4
        31941c:	0a000039 	beq	319508 <nextafterd+0x144>
        319420:	ed8dc102 	stfd	f4, [sp, #8]
        319424:	ee00e188 	mvfd	f6, #0.0
        319428:	ed8de100 	stfd	f6, [sp]
        31942c:	eed4f118 	cmfe	f4, #0.0
        319430:	1a00000a 	bne	319460 <nextafterd+0x9c>
        319434:	e3a00000 	mov	r0, #0	; 0x0
        319438:	e58d0008 	str	r0, [sp, #8]
        31943c:	e3a00001 	mov	r0, #1	; 0x1
        319440:	e58d000c 	str	r0, [sp, #12]
        319444:	e28d0010 	add	r0, sp, #16	; 0x10
        319448:	e9100003 	ldmdb	r0, {r0, r1}
        31944c:	ed2dd102 	stfd	f5, [sp, -#8]!
        319450:	e8bd000c 	ldmia	sp!, {r2, r3}
        319454:	eb626958 	bl	1bb39bc <$copysign>
        319458:	ed8d8102 	stfd	f0, [sp, #8]
        31945c:	ea000013 	b	3194b0 <nextafterd+0xec>
        319460:	bed4f115 	cmfelt	f4, f5
        319464:	ba000002 	blt	319474 <nextafterd+0xb0>
        319468:	eed4f118 	cmfe	f4, #0.0
        31946c:	ced4f115 	cmfegt	f4, f5
        319470:	da000007 	ble	319494 <nextafterd+0xd0>
        319474:	e59d000c 	ldr	r0, [sp, #12]
        319478:	e2400001 	sub	r0, r0, #1	; 0x1
        31947c:	e58d000c 	str	r0, [sp, #12]
        319480:	e3700001 	cmn	r0, #1	; 0x1
        319484:	059d0008 	ldreq	r0, [sp, #8]
        319488:	02400001 	subeq	r0, r0, #1	; 0x1
        31948c:	0a000006 	beq	3194ac <nextafterd+0xe8>
        319490:	ea000006 	b	3194b0 <nextafterd+0xec>
        319494:	e59d000c 	ldr	r0, [sp, #12]
        319498:	e2900001 	adds	r0, r0, #1	; 0x1
        31949c:	e58d000c 	str	r0, [sp, #12]
        3194a0:	1a000002 	bne	3194b0 <nextafterd+0xec>
        3194a4:	e59d0008 	ldr	r0, [sp, #8]
        3194a8:	e2800001 	add	r0, r0, #1	; 0x1
        3194ac:	e58d0008 	str	r0, [sp, #8]
        3194b0:	e59d0008 	ldr	r0, [sp, #8]
        3194b4:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
        3194b8:	e3c0080f 	bic	r0, r0, #983040	; 0xf0000
        3194bc:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        3194c0:	e3d000ff 	bics	r0, r0, #255	; 0xff
        3194c4:	ee008184 	mvfd	f0, f4
        3194c8:	ee144180 	mufd	f4, f4, f0
        3194cc:	ed9d8102 	ldfd	f0, [sp, #8]
        3194d0:	0e100180 	mufeqd	f0, f0, f0
        3194d4:	0e000184 	adfeqd	f0, f0, f4
        3194d8:	0d8d8100 	stfeqd	f0, [sp]
        3194dc:	0a000004 	beq	3194f4 <nextafterd+0x130>
        3194e0:	ed2d8102 	stfd	f0, [sp, -#8]!
        3194e4:	e8bd0003 	ldmia	sp!, {r0, r1}
        3194e8:	eb63a73e 	bl	1c031e8 <$__isfinited>
        3194ec:	e3300000 	teq	r0, #0	; 0x0
        3194f0:	0d8dc100 	stfeqd	f4, [sp]
        3194f4:	e59d0000 	ldr	r0, [sp]
        3194f8:	e2000102 	and	r0, r0, #-2147483648	; 0x80000000
        3194fc:	e3300102 	teq	r0, #-2147483648	; 0x80000000
        319500:	0d8de102 	stfeqd	f6, [sp, #8]
        319504:	ed9d8102 	ldfd	f0, [sp, #8]
        319508:	ed5bc20c 	lfm	f4, 3, [fp, -#48]
        31950c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: NewIterator(RefVar const &)
 * Address: 0031ac2c
 */
NewIterator(RefVar const &) {
    /*
        31ac2c:	e1a01000 	mov	r1, r0
        31ac30:	e3a02000 	mov	r2, #0	; 0x0
        31ac34:	e3a00000 	mov	r0, #0	; 0x0
        31ac38:	ea62992c 	b	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
    */
}

/**
 * Symbol: NewTObjectIterator(RefVar const &)
 * Address: 0031c994
 */
NewTObjectIterator(RefVar const &) {
    /*
        31c994:	ea62a250 	b	1bc52dc <$NewIterator(RefVar const &)>
    */
}

/**
 * Symbol: NoFaultObjectPtr(long)
 * Address: 0031ddac
 */
NoFaultObjectPtr(long) {
    /*
        31ddac:	e1a0c00d 	mov	ip, sp
        31ddb0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31ddb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        31ddb8:	e2001003 	and	r1, r0, #3	; 0x3
        31ddbc:	e3310001 	teq	r1, #1	; 0x1
        31ddc0:	1a000002 	bne	31ddd0 <NoFaultObjectPtr(long)+0x24>
        31ddc4:	eb5c8872 	bl	1a3ff94 <$ForwardReference(long)>
        31ddc8:	e2400001 	sub	r0, r0, #1	; 0x1
        31ddcc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        31ddd0:	e3310003 	teq	r1, #3	; 0x3
        31ddd4:	13a02000 	movne	r2, #0	; 0x0
        31ddd8:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        31dddc:	1a5ce352 	bne	1a56b2c <$ObjectPtr1__FlT1i>
        31dde0:	091b6800 	ldmeqdb	fp, {fp, sp, lr}
        31dde4:	0a5c94ed 	beq	1a431a0 <$ResolveMagicPtr(long)>
    */
}

/**
 * Symbol: NoTouchObjectPtr(long, int *)
 * Address: 0031de40
 */
NoTouchObjectPtr(long, int *) {
    /*
        31de40:	e1a0c00d 	mov	ip, sp
        31de44:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31de48:	e24cb004 	sub	fp, ip, #4	; 0x4
        31de4c:	e1a05000 	mov	r5, r0
        31de50:	e1a04001 	mov	r4, r1
        31de54:	e3150001 	tst	r5, #1	; 0x1
        31de58:	e3a07000 	mov	r7, #0	; 0x0
        31de5c:	1a000009 	bne	31de88 <NoTouchObjectPtr(long, int *)+0x48>
        31de60:	e24dd004 	sub	sp, sp, #4	; 0x4
        31de64:	e1a00005 	mov	r0, r5
        31de68:	eb6290b7 	bl	1bc214c <$AllocateRefHandle(long)>
        31de6c:	e58d0000 	str	r0, [sp]
        31de70:	e1a0100d 	mov	r1, sp
        31de74:	e3a00fee 	mov	r0, #952	; 0x3b8
        31de78:	e2400903 	sub	r0, r0, #49152	; 0xc000
        31de7c:	eb5c98ec 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31de80:	e59d0000 	ldr	r0, [sp]
        31de84:	ea00005b 	b	31dff8 <NoTouchObjectPtr(long, int *)+0x1b8>
        31de88:	e2050003 	and	r0, r5, #3	; 0x3
        31de8c:	e3300003 	teq	r0, #3	; 0x3
        31de90:	1a00005c 	bne	31e008 <NoTouchObjectPtr(long, int *)+0x1c8>
        31de94:	e1a00125 	mov	r0, r5, lsr #2
        31de98:	e1a02000 	mov	r2, r0
        31de9c:	e1b01640 	movs	r1, r0, asr #12
        31dea0:	e1a00a00 	mov	r0, r0, lsl #20
        31dea4:	e1a00a20 	mov	r0, r0, lsr #20
        31dea8:	e24dd004 	sub	sp, sp, #4	; 0x4
        31deac:	1a000019 	bne	31df18 <NoTouchObjectPtr(long, int *)+0xd8>
        31deb0:	e3a01776 	mov	r1, #30932992	; 0x1d80000
        31deb4:	e5911000 	ldr	r1, [r1]
        31deb8:	e1510000 	cmp	r1, r0
        31debc:	da000046 	ble	31dfdc <NoTouchObjectPtr(long, int *)+0x19c>
        31dec0:	e2800001 	add	r0, r0, #1	; 0x1
        31dec4:	e1a01000 	mov	r1, r0
        31dec8:	e3500000 	cmp	r0, #0	; 0x0
        31decc:	b2411001 	sublt	r1, r1, #1	; 0x1
        31ded0:	b2811b01 	addlt	r1, r1, #1024	; 0x400
        31ded4:	e1a01541 	mov	r1, r1, asr #10
        31ded8:	e1a02000 	mov	r2, r0
        31dedc:	b282201f 	addlt	r2, r2, #31	; 0x1f
        31dee0:	e1b022c2 	movs	r2, r2, asr #5
        31dee4:	42622000 	rsbmi	r2, r2, #0	; 0x0
        31dee8:	e202201f 	and	r2, r2, #31	; 0x1f
        31deec:	42622000 	rsbmi	r2, r2, #0	; 0x0
        31def0:	e3500000 	cmp	r0, #0	; 0x0
        31def4:	b2600000 	rsblt	r0, r0, #0	; 0x0
        31def8:	e1a00b00 	mov	r0, r0, lsl #22
        31defc:	e1a00b20 	mov	r0, r0, lsr #22
        31df00:	b2600000 	rsblt	r0, r0, #0	; 0x0
        31df04:	e1a01881 	mov	r1, r1, lsl #17
        31df08:	e0811602 	add	r1, r1, r2, lsl #12
        31df0c:	e0810100 	add	r0, r1, r0, lsl #2
        31df10:	e2800776 	add	r0, r0, #30932992	; 0x1d80000
        31df14:	ea00000a 	b	31df44 <NoTouchObjectPtr(long, int *)+0x104>
        31df18:	e3310001 	teq	r1, #1	; 0x1
        31df1c:	1a00000c 	bne	31df54 <NoTouchObjectPtr(long, int *)+0x114>
        31df20:	e3300001 	teq	r0, #1	; 0x1
        31df24:	01a01004 	moveq	r1, r4
        31df28:	059f001c 	ldreq	r0, [pc, #1c]	; 31df4c <NoTouchObjectPtr(long, int *)+0x10c>
        31df2c:	05900000 	ldreq	r0, [r0]
        31df30:	0a000026 	beq	31dfd0 <NoTouchObjectPtr(long, int *)+0x190>
        31df34:	e3300002 	teq	r0, #2	; 0x2
        31df38:	1a000027 	bne	31dfdc <NoTouchObjectPtr(long, int *)+0x19c>
        31df3c:	e59f000c 	ldr	r0, [pc, #c]	; 31df50 <NoTouchObjectPtr(long, int *)+0x110>
        31df40:	e5900000 	ldr	r0, [r0]
        31df44:	e5900000 	ldr	r0, [r0]
        31df48:	ea00001f 	b	31dfcc <NoTouchObjectPtr(long, int *)+0x18c>
        31df4c:	0c10180c 	ldceq	8, cr1, [r0], -#48
        31df50:	00680820 	rsbeq	r0, r8, r0, lsr #16
        31df54:	e351000a 	cmp	r1, #10	; 0xa
        31df58:	2a00001f 	bcs	31dfdc <NoTouchObjectPtr(long, int *)+0x19c>
        31df5c:	e3110001 	tst	r1, #1	; 0x1
        31df60:	0a000008 	beq	31df88 <NoTouchObjectPtr(long, int *)+0x148>
        31df64:	e1a010c1 	mov	r1, r1, asr #1
        31df68:	e59f3014 	ldr	r3, [pc, #14]	; 31df84 <NoTouchObjectPtr(long, int *)+0x144>
        31df6c:	e0831181 	add	r1, r3, r1, lsl #3
        31df70:	e5313008 	ldr	r3, [r1, -#8]!
        31df74:	e1500003 	cmp	r0, r3
        31df78:	b5911004 	ldrlt	r1, [r1, #4]
        31df7c:	ba000011 	blt	31dfc8 <NoTouchObjectPtr(long, int *)+0x188>
        31df80:	ea000015 	b	31dfdc <NoTouchObjectPtr(long, int *)+0x19c>
        31df84:	0c107bc4 	ldceq	11, cr7, [r0], -#784
        31df88:	e3e03000 	mvn	r3, #0	; 0x0
        31df8c:	e08310c1 	add	r1, r3, r1, asr #1
        31df90:	e59f3040 	ldr	r3, [pc, #40]	; 31dfd8 <NoTouchObjectPtr(long, int *)+0x198>
        31df94:	e7933101 	ldr	r3, [r3, r1, lsl #2]
        31df98:	e1530000 	cmp	r3, r0
        31df9c:	da00000e 	ble	31dfdc <NoTouchObjectPtr(long, int *)+0x19c>
        31dfa0:	e1a02540 	mov	r2, r0, asr #10
        31dfa4:	e1a032a0 	mov	r3, r0, lsr #5
        31dfa8:	e203301f 	and	r3, r3, #31	; 0x1f
        31dfac:	e1a00b00 	mov	r0, r0, lsl #22
        31dfb0:	e1a00b20 	mov	r0, r0, lsr #22
        31dfb4:	e3a0c8ee 	mov	ip, #15597568	; 0xee0000
        31dfb8:	e28cc401 	add	ip, ip, #16777216	; 0x1000000
        31dfbc:	e08c1a01 	add	r1, ip, r1, lsl #20
        31dfc0:	e0811882 	add	r1, r1, r2, lsl #17
        31dfc4:	e0811603 	add	r1, r1, r3, lsl #12
        31dfc8:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        31dfcc:	e1a01004 	mov	r1, r4
        31dfd0:	eb5ce2d2 	bl	1a56b20 <$NoTouchObjectPtr(long, int *)>
        31dfd4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31dfd8:	0c107be4 	ldceq	11, cr7, [r0], -#912
        31dfdc:	e1a00102 	mov	r0, r2, lsl #2
        31dfe0:	eb629059 	bl	1bc214c <$AllocateRefHandle(long)>
        31dfe4:	e58d0000 	str	r0, [sp]
        31dfe8:	e1a0100d 	mov	r1, sp
        31dfec:	e59f0010 	ldr	r0, [pc, #10]	; 31e004 <NoTouchObjectPtr(long, int *)+0x1c4>
        31dff0:	eb5c988f 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31dff4:	e59d0000 	ldr	r0, [sp]
        31dff8:	eb62946f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31dffc:	e1a00007 	mov	r0, r7
        31e000:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31e004:	ffff43b7 	swinv	0x00ff43b7
        31e008:	eb62f33e 	bl	1bdad08 <$ROMDomainBase(void)>
        31e00c:	e1a06000 	mov	r6, r0
        31e010:	eb62f33e 	bl	1bdad10 <$ROMDomainSize(void)>
        31e014:	e0801006 	add	r1, r0, r6
        31e018:	e2450001 	sub	r0, r5, #1	; 0x1
        31e01c:	e1560000 	cmp	r6, r0
        31e020:	8a000005 	bhi	31e03c <NoTouchObjectPtr(long, int *)+0x1fc>
        31e024:	e1500001 	cmp	r0, r1
        31e028:	2a000003 	bcs	31e03c <NoTouchObjectPtr(long, int *)+0x1fc>
        31e02c:	e3340000 	teq	r4, #0	; 0x0
        31e030:	13a01001 	movne	r1, #1	; 0x1
        31e034:	15841000 	strne	r1, [r4]
        31e038:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31e03c:	e1a01000 	mov	r1, r0
        31e040:	e5902000 	ldr	r2, [r0]
        31e044:	e3120020 	tst	r2, #32	; 0x20
        31e048:	15b15008 	ldrne	r5, [r1, #8]!
        31e04c:	1affff80 	bne	31de54 <NoTouchObjectPtr(long, int *)+0x14>
        31e050:	e3340000 	teq	r4, #0	; 0x0
        31e054:	15847000 	strne	r7, [r4]
        31e058:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NewPackage(CPipe *, RefVar const &, unsigned long *)
 * Address: 0032106c
 */
NewPackage(CPipe *, RefVar const &, unsigned long *) {
    /*
        32106c:	e1a0c00d 	mov	ip, sp
        321070:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        321074:	e24cb004 	sub	fp, ip, #4	; 0x4
        321078:	e1a05001 	mov	r5, r1
        32107c:	e1a04002 	mov	r4, r2
        321080:	e5910000 	ldr	r0, [r1]
        321084:	e5900000 	ldr	r0, [r0]
        321088:	e59f1140 	ldr	r1, [pc, #140]	; 3211d0 <NewPackage(CPipe *, RefVar const &, unsigned long *)+0x164>
        32108c:	e5911000 	ldr	r1, [r1]
        321090:	e5911000 	ldr	r1, [r1]
        321094:	eb628c71 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        321098:	e1a08000 	mov	r8, r0
        32109c:	e5b0907c 	ldr	r9, [r0, #124]!
        3210a0:	e3a00002 	mov	r0, #2	; 0x2
        3210a4:	eb628428 	bl	1bc214c <$AllocateRefHandle(long)>
        3210a8:	e1a0a000 	mov	sl, r0
        3210ac:	e1a00008 	mov	r0, r8
        3210b0:	eb5cbde4 	bl	1a50848 <TStoreWrapper::$LockStore(void)>
        3210b4:	e3300000 	teq	r0, #0	; 0x0
        3210b8:	1b5c6f5a 	blne	1a3ce28 <$_OSErr(long)>
        3210bc:	e3a00000 	mov	r0, #0	; 0x0
        3210c0:	e52d006c 	str	r0, [sp, -#108]!
        3210c4:	e28d0008 	add	r0, sp, #8	; 0x8
        3210c8:	eb624629 	bl	1bb2974 <$setjmp>
        3210cc:	e3300000 	teq	r0, #0	; 0x0
        3210d0:	1a000050 	bne	321218 <NewPackage(CPipe *, RefVar const &, unsigned long *)+0x1ac>
        3210d4:	e1a0000d 	mov	r0, sp
        3210d8:	eb62fbe7 	bl	1be007c <$AddExceptionHandler>
        3210dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        3210e0:	e1a0200d 	mov	r2, sp
        3210e4:	e1a00009 	mov	r0, r9
        3210e8:	e3a01000 	mov	r1, #0	; 0x0
        3210ec:	eb0196ae 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        3210f0:	e1b06000 	movs	r6, r0
        3210f4:	1a000029 	bne	3211a0 <NewPackage(CPipe *, RefVar const &, unsigned long *)+0x134>
        3210f8:	e28f1f35 	add	r1, pc, #212	; 0xd4
        3210fc:	e28f0f3a 	add	r0, pc, #232	; 0xe8
        321100:	eb62daa1 	bl	1bd7b8c <$NewByName__FPCcT1>
        321104:	e1b07000 	movs	r7, r0
        321108:	03a060a8 	moveq	r6, #168	; 0xa8
        32110c:	02466b07 	subeq	r6, r6, #7168	; 0x1c00
        321110:	0a000022 	beq	3211a0 <NewPackage(CPipe *, RefVar const &, unsigned long *)+0x134>
        321114:	e1a00007 	mov	r0, r7
        321118:	e3a01000 	mov	r1, #0	; 0x0
        32111c:	eb01a142 	bl	38962c <TCallbackCompressor::Init(void *)>
        321120:	e1b06000 	movs	r6, r0
        321124:	1a00000b 	bne	321158 <NewPackage(CPipe *, RefVar const &, unsigned long *)+0xec>
        321128:	e1a03007 	mov	r3, r7
        32112c:	e3a02000 	mov	r2, #0	; 0x0
        321130:	e3a01000 	mov	r1, #0	; 0x0
        321134:	e28f0f31 	add	r0, pc, #196	; 0xc4
        321138:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        32113c:	e1a03004 	mov	r3, r4
        321140:	e1a01009 	mov	r1, r9
        321144:	e59d2010 	ldr	r2, [sp, #16]
        321148:	e51b0034 	ldr	r0, [fp, -#52]
        32114c:	ebf90228 	bl	1619f4 <NewPackage(CPipe *, TStore *, unsigned long, unsigned long *, char *, void *, long, TCallbackCompressor *)>
        321150:	e28dd010 	add	sp, sp, #16	; 0x10
        321154:	e1a06000 	mov	r6, r0
        321158:	e1a00007 	mov	r0, r7
        32115c:	eb01a12b 	bl	389610 <TCallbackCompressor::Delete(void)>
        321160:	e24dd004 	sub	sp, sp, #4	; 0x4
        321164:	e3360000 	teq	r6, #0	; 0x0
        321168:	1a00000b 	bne	32119c <NewPackage(CPipe *, RefVar const &, unsigned long *)+0x130>
        32116c:	e5940000 	ldr	r0, [r4]
        321170:	e3300000 	teq	r0, #0	; 0x0
        321174:	0a000008 	beq	32119c <NewPackage(CPipe *, RefVar const &, unsigned long *)+0x130>
        321178:	e59d0004 	ldr	r0, [sp, #4]
        32117c:	e1a00100 	mov	r0, r0, lsl #2
        321180:	eb6283f1 	bl	1bc214c <$AllocateRefHandle(long)>
        321184:	e58d0000 	str	r0, [sp]
        321188:	e1a0100d 	mov	r1, sp
        32118c:	e1a00005 	mov	r0, r5
        321190:	eb5cda8d 	bl	1a57bcc <$StorePackageDirectoryAdd>
        321194:	e59d0000 	ldr	r0, [sp]
        321198:	eb628807 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        32119c:	e28dd004 	add	sp, sp, #4	; 0x4
        3211a0:	e28dd004 	add	sp, sp, #4	; 0x4
        3211a4:	e1a0000d 	mov	r0, sp
        3211a8:	eb62ffc2 	bl	1be10b8 <$ExitHandler>
        3211ac:	e28dd06c 	add	sp, sp, #108	; 0x6c
        3211b0:	e1a00008 	mov	r0, r8
        3211b4:	eb5cc1b3 	bl	1a51888 <TStoreWrapper::$UnlockStore(void)>
        3211b8:	e3300000 	teq	r0, #0	; 0x0
        3211bc:	1b5c6f19 	blne	1a3ce28 <$_OSErr(long)>
        3211c0:	e1a0000a 	mov	r0, sl
        3211c4:	eb6287fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3211c8:	e1a00006 	mov	r0, r6
        3211cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3211d0:	00684868 	rsbeq	r4, r8, r8, ror #16
        3211d4:	544c5a43 	strplb	r5, [ip], -#2627
        3211d8:	616c6c62 	cmnvs	ip, r2, ror #24
        3211dc:	61636b43 	cmnvs	r3, r3, asr #22
        3211e0:	6f6d7072 	swivs	0x006d7072
        3211e4:	6573736f 	ldrvsb	r7, [r3, -#879]!
        3211e8:	72000000 	andvc	r0, r0, #0	; 0x0
        3211ec:	5443616c 	strplb	r6, [r3], -#364
        3211f0:	6c626163 	stfvse	f6, [r2], -#396
        3211f4:	6b436f6d 	blvs	13fcfb0 <ROM$$Size+0xcdd364>
        3211f8:	70726573 	rsbvcs	r6, r2, r3, ror r5
        3211fc:	736f7200 	cmnvc	pc, #0	; 0x0
        321200:	544c5a53 	strplb	r5, [ip], -#2643
        321204:	746f7265 	strvcbt	r7, [pc], #265	; 32120c <NewPackage(CPipe *, RefVar const &, unsigned long *)+0x1a0>
        321208:	4465636f 	strmibt	r6, [r5], -#879
        32120c:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        321210:	73736f72 	cmnvc	r3, #456	; 0x1c8
        321214:	00000000 	andeq	r0, r0, r0
        321218:	e1a00008 	mov	r0, r8
        32121c:	eb5cb96d 	bl	1a4f7d8 <TStoreWrapper::$Abort(void)>
        321220:	e3300000 	teq	r0, #0	; 0x0
        321224:	1b5c6eff 	blne	1a3ce28 <$_OSErr(long)>
        321228:	e1a0000d 	mov	r0, sp
        32122c:	eb6303c8 	bl	1be2154 <$NextHandler>
        321230:	eafffff8 	b	321218 <NewPackage(CPipe *, RefVar const &, unsigned long *)+0x1ac>
    */
}

/**
 * Symbol: NewPackage__FP5CPipeRC6RefVarT2Ul
 * Address: 0032125c
 */
void globals::NewPackage() {
    /*
        32125c:	e1a0c00d 	mov	ip, sp
        321260:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        321264:	e24cb004 	sub	fp, ip, #4	; 0x4
        321268:	e1a07000 	mov	r7, r0
        32126c:	e1a06001 	mov	r6, r1
        321270:	e1a05002 	mov	r5, r2
        321274:	e1a04003 	mov	r4, r3
        321278:	e3a00000 	mov	r0, #0	; 0x0
        32127c:	e52d0004 	str	r0, [sp, -#4]!
        321280:	e3a00002 	mov	r0, #2	; 0x2
        321284:	eb6283b0 	bl	1bc214c <$AllocateRefHandle(long)>
        321288:	e1a08000 	mov	r8, r0
        32128c:	e3a00000 	mov	r0, #0	; 0x0
        321290:	e52d006c 	str	r0, [sp, -#108]!
        321294:	e28d0008 	add	r0, sp, #8	; 0x8
        321298:	eb6245b5 	bl	1bb2974 <$setjmp>
        32129c:	e3300000 	teq	r0, #0	; 0x0
        3212a0:	1a00000b 	bne	3212d4 <NewPackage__FP5CPipeRC6RefVarT2Ul+0x78>
        3212a4:	e1a0000d 	mov	r0, sp
        3212a8:	eb62fb73 	bl	1be007c <$AddExceptionHandler>
        3212ac:	e3a03001 	mov	r3, #1	; 0x1
        3212b0:	e92d0008 	stmdb	sp!, {r3}
        3212b4:	e1a03004 	mov	r3, r4
        3212b8:	e1a02005 	mov	r2, r5
        3212bc:	e1a01006 	mov	r1, r6
        3212c0:	e1a00007 	mov	r0, r7
        3212c4:	eb5cb934 	bl	1a4f79c <$AllocatePackage__FP5CPipeRC6RefVarT2Uli>
        3212c8:	e28dd004 	add	sp, sp, #4	; 0x4
        3212cc:	e5880000 	str	r0, [r8]
        3212d0:	ea000001 	b	3212dc <NewPackage__FP5CPipeRC6RefVarT2Ul+0x80>
        3212d4:	e59d0064 	ldr	r0, [sp, #100]
        3212d8:	e58d006c 	str	r0, [sp, #108]
        3212dc:	e1a0000d 	mov	r0, sp
        3212e0:	eb62ff74 	bl	1be10b8 <$ExitHandler>
        3212e4:	e28dd068 	add	sp, sp, #104	; 0x68
        3212e8:	e59d0004 	ldr	r0, [sp, #4]
        3212ec:	e58d0000 	str	r0, [sp]
        3212f0:	e1a00008 	mov	r0, r8
        3212f4:	eb6287b0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3212f8:	e59d0000 	ldr	r0, [sp]
        3212fc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: NextPath(path *)
 * Address: 00327990
 */
NextPath(path *) {
    /*
        327990:	e5901000 	ldr	r1, [r0]
        327994:	e281201f 	add	r2, r1, #31	; 0x1f
        327998:	e1a022c2 	mov	r2, r2, asr #5
        32799c:	e0800102 	add	r0, r0, r2, lsl #2
        3279a0:	e0800181 	add	r0, r0, r1, lsl #3
        3279a4:	e2800004 	add	r0, r0, #4	; 0x4
        3279a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NextPathSegment(pathWalker *)
 * Address: 00327a74
 */
NextPathSegment(pathWalker *) {
    /*
        327a74:	e1a0c00d 	mov	ip, sp
        327a78:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        327a7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        327a80:	e1a04000 	mov	r4, r0
        327a84:	e590001c 	ldr	r0, [r0, #28]
        327a88:	e3a05000 	mov	r5, #0	; 0x0
        327a8c:	e5941020 	ldr	r1, [r4, #32]
        327a90:	e1500001 	cmp	r0, r1
        327a94:	a1a00005 	movge	r0, r5
        327a98:	a91ba9f0 	ldmgedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        327a9c:	e2840004 	add	r0, r4, #4	; 0x4
        327aa0:	e2847014 	add	r7, r4, #20	; 0x14
        327aa4:	e8975000 	ldmia	r7, {ip, lr}
        327aa8:	e8805000 	stmia	r0, {ip, lr}
        327aac:	e594001c 	ldr	r0, [r4, #28]
        327ab0:	e2806001 	add	r6, r0, #1	; 0x1
        327ab4:	e1a01006 	mov	r1, r6
        327ab8:	e5940024 	ldr	r0, [r4, #36]
        327abc:	eb608ebb 	bl	1b4b5b0 <$OnCurve(long *, long)>
        327ac0:	e31000ff 	tst	r0, #255	; 0xff
        327ac4:	e3a08001 	mov	r8, #1	; 0x1
        327ac8:	0a000009 	beq	327af4 <NextPathSegment(pathWalker *)+0x80>
        327acc:	e5940028 	ldr	r0, [r4, #40]
        327ad0:	e0800186 	add	r0, r0, r6, lsl #3
        327ad4:	e8905000 	ldmia	r0, {ip, lr}
        327ad8:	e8875000 	stmia	r7, {ip, lr}
        327adc:	e1a00008 	mov	r0, r8
        327ae0:	e5848000 	str	r8, [r4]
        327ae4:	e594101c 	ldr	r1, [r4, #28]
        327ae8:	e2811001 	add	r1, r1, #1	; 0x1
        327aec:	e5a4101c 	str	r1, [r4, #28]!
        327af0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        327af4:	e5845000 	str	r5, [r4]
        327af8:	e284000c 	add	r0, r4, #12	; 0xc
        327afc:	e5941028 	ldr	r1, [r4, #40]
        327b00:	e0811186 	add	r1, r1, r6, lsl #3
        327b04:	e8911008 	ldmia	r1, {r3, ip}
        327b08:	e8801008 	stmia	r0, {r3, ip}
        327b0c:	e594001c 	ldr	r0, [r4, #28]
        327b10:	e2805002 	add	r5, r0, #2	; 0x2
        327b14:	e5940020 	ldr	r0, [r4, #32]
        327b18:	e1500005 	cmp	r0, r5
        327b1c:	b3a05000 	movlt	r5, #0	; 0x0
        327b20:	e1a01005 	mov	r1, r5
        327b24:	e5940024 	ldr	r0, [r4, #36]
        327b28:	eb608ea0 	bl	1b4b5b0 <$OnCurve(long *, long)>
        327b2c:	e31000ff 	tst	r0, #255	; 0xff
        327b30:	e5940028 	ldr	r0, [r4, #40]
        327b34:	0a000005 	beq	327b50 <NextPathSegment(pathWalker *)+0xdc>
        327b38:	e0800185 	add	r0, r0, r5, lsl #3
        327b3c:	e8905000 	ldmia	r0, {ip, lr}
        327b40:	e8875000 	stmia	r7, {ip, lr}
        327b44:	e594001c 	ldr	r0, [r4, #28]
        327b48:	e2800002 	add	r0, r0, #2	; 0x2
        327b4c:	ea00000f 	b	327b90 <NextPathSegment(pathWalker *)+0x11c>
        327b50:	e7901186 	ldr	r1, [r0, r6, lsl #3]
        327b54:	e7902185 	ldr	r2, [r0, r5, lsl #3]
        327b58:	e0811002 	add	r1, r1, r2
        327b5c:	e0811fa1 	add	r1, r1, r1, lsr #31
        327b60:	e1a010c1 	mov	r1, r1, asr #1
        327b64:	e5841014 	str	r1, [r4, #20]
        327b68:	e0801186 	add	r1, r0, r6, lsl #3
        327b6c:	e5911004 	ldr	r1, [r1, #4]
        327b70:	e0800185 	add	r0, r0, r5, lsl #3
        327b74:	e5900004 	ldr	r0, [r0, #4]
        327b78:	e0810000 	add	r0, r1, r0
        327b7c:	e0800fa0 	add	r0, r0, r0, lsr #31
        327b80:	e1a000c0 	mov	r0, r0, asr #1
        327b84:	e5840018 	str	r0, [r4, #24]
        327b88:	e594001c 	ldr	r0, [r4, #28]
        327b8c:	e2800001 	add	r0, r0, #1	; 0x1
        327b90:	e5a4001c 	str	r0, [r4, #28]!
        327b94:	e1a00008 	mov	r0, r8
        327b98:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: NoteSDS(_SDS_CONTROL_TYPE *, _SDS_TYPE *)
 * Address: 0032f84c
 */
NoteSDS(_SDS_CONTROL_TYPE *, _SDS_TYPE *) {
    /*
        32f84c:	e92d4010 	stmdb	sp!, {r4, lr}
        32f850:	e5902004 	ldr	r2, [r0, #4]
        32f854:	e1a02842 	mov	r2, r2, asr #16
        32f858:	e5903000 	ldr	r3, [r0]
        32f85c:	e1a03843 	mov	r3, r3, asr #16
        32f860:	e2433001 	sub	r3, r3, #1	; 0x1
        32f864:	e1520003 	cmp	r2, r3
        32f868:	a3a00000 	movge	r0, #0	; 0x0
        32f86c:	a8bd8010 	ldmgeia	sp!, {r4, pc}
        32f870:	e082c082 	add	ip, r2, r2, lsl #1
        32f874:	e08c2182 	add	r2, ip, r2, lsl #3
        32f878:	e5903008 	ldr	r3, [r0, #8]
        32f87c:	e083e102 	add	lr, r3, r2, lsl #2
        32f880:	e1a04001 	mov	r4, r1
        32f884:	e8b4100e 	ldmia	r4!, {r1, r2, r3, ip}
        32f888:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        32f88c:	e8b4100e 	ldmia	r4!, {r1, r2, r3, ip}
        32f890:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        32f894:	e894100c 	ldmia	r4, {r2, r3, ip}
        32f898:	e88e100c 	stmia	lr, {r2, r3, ip}
        32f89c:	e5901004 	ldr	r1, [r0, #4]
        32f8a0:	e1a01821 	mov	r1, r1, lsr #16
        32f8a4:	e2811001 	add	r1, r1, #1	; 0x1
        32f8a8:	e5c01005 	strb	r1, [r0, #5]
        32f8ac:	e1a01441 	mov	r1, r1, asr #8
        32f8b0:	e5c01004 	strb	r1, [r0, #4]
        32f8b4:	e3a00001 	mov	r0, #1	; 0x1
        32f8b8:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: NewRgn(void)
 * Address: 00340ff8
 */
NewRgn(void) {
    /*
        340ff8:	e1a0c00d 	mov	ip, sp
        340ffc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        341000:	e24cb004 	sub	fp, ip, #4	; 0x4
        341004:	e3a0500c 	mov	r5, #12	; 0xc
        341008:	e1a00005 	mov	r0, r5
        34100c:	eb628446 	bl	1be212c <$NewHandle>
        341010:	e1b04000 	movs	r4, r0
        341014:	0a000006 	beq	341034 <NewRgn(void)+0x3c>
        341018:	e5940000 	ldr	r0, [r4]
        34101c:	e5c05001 	strb	r5, [r0, #1]
        341020:	e3a01000 	mov	r1, #0	; 0x0
        341024:	e5c01000 	strb	r1, [r0]
        341028:	e5940000 	ldr	r0, [r4]
        34102c:	e2800004 	add	r0, r0, #4	; 0x4
        341030:	eb604a6b 	bl	1b539e4 <$SetEmptyRect(Rect *)>
        341034:	e1a00004 	mov	r0, r4
        341038:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: nearbyint
 * Address: 00344214
 */
void globals::nearbyint() {
    /*
        344214:	e1a0c00d 	mov	ip, sp
        344218:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        34421c:	e24cb004 	sub	fp, ip, #4	; 0x4
        344220:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        344224:	e92d0003 	stmdb	sp!, {r0, r1}
        344228:	ecbdc102 	ldfd	f4, [sp], #8
        34422c:	e24dd004 	sub	sp, sp, #4	; 0x4
        344230:	e1a0000d 	mov	r0, sp
        344234:	eb61bdee 	bl	1bb39f4 <$feholdexcept>
        344238:	ed2dc102 	stfd	f4, [sp, -#8]!
        34423c:	e8bd0003 	ldmia	sp!, {r0, r1}
        344240:	eb012590 	bl	38d888 <_rint>
        344244:	ee00c180 	mvfd	f4, f0
        344248:	e3a00010 	mov	r0, #16	; 0x10
        34424c:	eb61bde4 	bl	1bb39e4 <$feclearexcept>
        344250:	e1a0000d 	mov	r0, sp
        344254:	eb61c1ec 	bl	1bb4a0c <$feupdateenv>
        344258:	ee008184 	mvfd	f0, f4
        34425c:	ed1bc206 	lfm	f4, 1, [fp, -#24]
        344260:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: NewIndexDesc__FRC6RefVarN21
 * Address: 00349610
 */
void globals::NewIndexDesc() {
    /*
        349610:	e1a0c00d 	mov	ip, sp
        349614:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        349618:	e24cb004 	sub	fp, ip, #4	; 0x4
        34961c:	e1a06000 	mov	r6, r0
        349620:	e1a05001 	mov	r5, r1
        349624:	e1a04002 	mov	r4, r2
        349628:	e24dd004 	sub	sp, sp, #4	; 0x4
        34962c:	e5920000 	ldr	r0, [r2]
        349630:	e5900000 	ldr	r0, [r0]
        349634:	e59f1120 	ldr	r1, [pc, #120]	; 34975c <NewIndexDesc__FRC6RefVarN21+0x14c>
        349638:	e5911000 	ldr	r1, [r1]
        34963c:	e5911000 	ldr	r1, [r1]
        349640:	eb61eb06 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        349644:	eb61e2c0 	bl	1bc214c <$AllocateRefHandle(long)>
        349648:	e58d0000 	str	r0, [sp]
        34964c:	e1a0100d 	mov	r1, sp
        349650:	e1a00006 	mov	r0, r6
        349654:	e3a02000 	mov	r2, #0	; 0x0
        349658:	eb5c0bea 	bl	1a4c608 <$IndexPathToIndexDesc__FRC6RefVarT1Pl>
        34965c:	e59f70fc 	ldr	r7, [pc, #fc]	; 349760 <NewIndexDesc__FRC6RefVarN21+0x150>
        349660:	e3300002 	teq	r0, #2	; 0x2
        349664:	0a000003 	beq	349678 <NewIndexDesc__FRC6RefVarN21+0x68>
        349668:	e59f10f4 	ldr	r1, [pc, #f4]	; 349764 <NewIndexDesc__FRC6RefVarN21+0x154>
        34966c:	e3a02000 	mov	r2, #0	; 0x0
        349670:	e5970000 	ldr	r0, [r7]
        349674:	eb6266c8 	bl	1be319c <$Throw>
        349678:	e24dd004 	sub	sp, sp, #4	; 0x4
        34967c:	e5940000 	ldr	r0, [r4]
        349680:	e5900000 	ldr	r0, [r0]
        349684:	e59f10dc 	ldr	r1, [pc, #dc]	; 349768 <NewIndexDesc__FRC6RefVarN21+0x158>
        349688:	e5911000 	ldr	r1, [r1]
        34968c:	e5911000 	ldr	r1, [r1]
        349690:	eb61eaf2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        349694:	eb61e2ac 	bl	1bc214c <$AllocateRefHandle(long)>
        349698:	e58d0000 	str	r0, [sp]
        34969c:	e5940000 	ldr	r0, [r4]
        3496a0:	e5900000 	ldr	r0, [r0]
        3496a4:	e59f10c0 	ldr	r1, [pc, #c0]	; 34976c <NewIndexDesc__FRC6RefVarN21+0x15c>
        3496a8:	e5911000 	ldr	r1, [r1]
        3496ac:	e5911000 	ldr	r1, [r1]
        3496b0:	eb61eaea 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3496b4:	eb61e2a4 	bl	1bc214c <$AllocateRefHandle(long)>
        3496b8:	e1a08000 	mov	r8, r0
        3496bc:	e3a09000 	mov	r9, #0	; 0x0
        3496c0:	e5900000 	ldr	r0, [r0]
        3496c4:	e59f10a4 	ldr	r1, [pc, #a4]	; 349770 <NewIndexDesc__FRC6RefVarN21+0x160>
        3496c8:	e5911000 	ldr	r1, [r1]
        3496cc:	e5911000 	ldr	r1, [r1]
        3496d0:	eb61ead6 	bl	1bc4230 <$EQRef__FlT1>
        3496d4:	e3300000 	teq	r0, #0	; 0x0
        3496d8:	0a000026 	beq	349778 <NewIndexDesc__FRC6RefVarN21+0x168>
        3496dc:	e3a09001 	mov	r9, #1	; 0x1
        3496e0:	e28d0004 	add	r0, sp, #4	; 0x4
        3496e4:	eb61e29f 	bl	1bc2168 <$ClassOf(RefVar const &)>
        3496e8:	e59f1084 	ldr	r1, [pc, #84]	; 349774 <NewIndexDesc__FRC6RefVarN21+0x164>
        3496ec:	e5911000 	ldr	r1, [r1]
        3496f0:	e5911000 	ldr	r1, [r1]
        3496f4:	eb61eacd 	bl	1bc4230 <$EQRef__FlT1>
        3496f8:	e31000ff 	tst	r0, #255	; 0xff
        3496fc:	0a000003 	beq	349710 <NewIndexDesc__FRC6RefVarN21+0x100>
        349700:	e1a0000d 	mov	r0, sp
        349704:	eb62a8a0 	bl	1bf398c <$IsArray(RefVar const &)>
        349708:	e3300000 	teq	r0, #0	; 0x0
        34970c:	1a000004 	bne	349724 <NewIndexDesc__FRC6RefVarN21+0x114>
        349710:	e3a01e46 	mov	r1, #1120	; 0x460
        349714:	e2411903 	sub	r1, r1, #49152	; 0xc000
        349718:	e3a02000 	mov	r2, #0	; 0x0
        34971c:	e5970000 	ldr	r0, [r7]
        349720:	eb62669d 	bl	1be319c <$Throw>
        349724:	e59d0004 	ldr	r0, [sp, #4]
        349728:	e5900000 	ldr	r0, [r0]
        34972c:	eb61eede 	bl	1bc52ac <$Length(long)>
        349730:	e1a0a000 	mov	sl, r0
        349734:	e59d0000 	ldr	r0, [sp]
        349738:	e5900000 	ldr	r0, [r0]
        34973c:	eb61eeda 	bl	1bc52ac <$Length(long)>
        349740:	e130000a 	teq	r0, sl
        349744:	1a000001 	bne	349750 <NewIndexDesc__FRC6RefVarN21+0x140>
        349748:	e35a0006 	cmp	sl, #6	; 0x6
        34974c:	da000015 	ble	3497a8 <NewIndexDesc__FRC6RefVarN21+0x198>
        349750:	e3a01e46 	mov	r1, #1120	; 0x460
        349754:	e2411903 	sub	r1, r1, #49152	; 0xc000
        349758:	ea00000f 	b	34979c <NewIndexDesc__FRC6RefVarN21+0x18c>
        34975c:	00683d70 	rsbeq	r3, r8, r0, ror sp
        349760:	003712fc 	ldreqsh	r1, [r7], -ip
        349764:	ffff446b 	swinv	0x00ff446b
        349768:	00684cb0 	streqh	r4, [r8], -#192
        34976c:	00684910 	rsbeq	r4, r8, r0, lsl r9
        349770:	00683998 	streqb	r3, [r8], -#152
        349774:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        349778:	e5980000 	ldr	r0, [r8]
        34977c:	e59f11a0 	ldr	r1, [pc, #1a0]	; 349924 <NewIndexDesc__FRC6RefVarN21+0x314>
        349780:	e5911000 	ldr	r1, [r1]
        349784:	e5911000 	ldr	r1, [r1]
        349788:	eb61eaa8 	bl	1bc4230 <$EQRef__FlT1>
        34978c:	e3300000 	teq	r0, #0	; 0x0
        349790:	1a000004 	bne	3497a8 <NewIndexDesc__FRC6RefVarN21+0x198>
        349794:	e3a01074 	mov	r1, #116	; 0x74
        349798:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        34979c:	e3a02000 	mov	r2, #0	; 0x0
        3497a0:	e5970000 	ldr	r0, [r7]
        3497a4:	eb62667c 	bl	1be319c <$Throw>
        3497a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        3497ac:	e1a00004 	mov	r0, r4
        3497b0:	eb61fb2a 	bl	1bc8460 <$TotalClone(RefVar const &)>
        3497b4:	eb61e264 	bl	1bc214c <$AllocateRefHandle(long)>
        3497b8:	e58d0000 	str	r0, [sp]
        3497bc:	e59d0004 	ldr	r0, [sp, #4]
        3497c0:	e5900000 	ldr	r0, [r0]
        3497c4:	e59f415c 	ldr	r4, [pc, #15c]	; 349928 <NewIndexDesc__FRC6RefVarN21+0x318>
        3497c8:	e5941000 	ldr	r1, [r4]
        3497cc:	e5911000 	ldr	r1, [r1]
        3497d0:	eb61ea96 	bl	1bc4230 <$EQRef__FlT1>
        3497d4:	e3300000 	teq	r0, #0	; 0x0
        3497d8:	0a00001b 	beq	34984c <NewIndexDesc__FRC6RefVarN21+0x23c>
        3497dc:	e1a00006 	mov	r0, r6
        3497e0:	eb5c0784 	bl	1a4b5f8 <$GetTagsIndexDesc(RefVar const &)>
        3497e4:	e3300002 	teq	r0, #2	; 0x2
        3497e8:	0a000003 	beq	3497fc <NewIndexDesc__FRC6RefVarN21+0x1ec>
        3497ec:	e51f1090 	ldr	r1, [pc, #ffffff70]	; 349764 <NewIndexDesc__FRC6RefVarN21+0x154>
        3497f0:	e3a02000 	mov	r2, #0	; 0x0
        3497f4:	e5970000 	ldr	r0, [r7]
        3497f8:	eb626667 	bl	1be319c <$Throw>
        3497fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        349800:	e59d0004 	ldr	r0, [sp, #4]
        349804:	e5900000 	ldr	r0, [r0]
        349808:	e5941000 	ldr	r1, [r4]
        34980c:	e5911000 	ldr	r1, [r1]
        349810:	eb61ea92 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        349814:	e3300002 	teq	r0, #2	; 0x2
        349818:	1a00000a 	bne	349848 <NewIndexDesc__FRC6RefVarN21+0x238>
        34981c:	e51f00b0 	ldr	r0, [pc, #ffffff50]	; 349774 <NewIndexDesc__FRC6RefVarN21+0x164>
        349820:	e3a01000 	mov	r1, #0	; 0x0
        349824:	eb61e243 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        349828:	eb61e247 	bl	1bc214c <$AllocateRefHandle(long)>
        34982c:	e58d0000 	str	r0, [sp]
        349830:	e1a0200d 	mov	r2, sp
        349834:	e59f10ec 	ldr	r1, [pc, #ec]	; 349928 <NewIndexDesc__FRC6RefVarN21+0x318>
        349838:	e28d0004 	add	r0, sp, #4	; 0x4
        34983c:	eb61f2c9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        349840:	e59d0000 	ldr	r0, [sp]
        349844:	eb61e65c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        349848:	e28dd004 	add	sp, sp, #4	; 0x4
        34984c:	e59d0004 	ldr	r0, [sp, #4]
        349850:	e5900000 	ldr	r0, [r0]
        349854:	e59f10d0 	ldr	r1, [pc, #d0]	; 34992c <NewIndexDesc__FRC6RefVarN21+0x31c>
        349858:	e5911000 	ldr	r1, [r1]
        34985c:	e5911000 	ldr	r1, [r1]
        349860:	eb61ea72 	bl	1bc4230 <$EQRef__FlT1>
        349864:	e21040ff 	ands	r4, r0, #255	; 0xff
        349868:	e24dd004 	sub	sp, sp, #4	; 0x4
        34986c:	1a00000e 	bne	3498ac <NewIndexDesc__FRC6RefVarN21+0x29c>
        349870:	e3390000 	teq	r9, #0	; 0x0
        349874:	0a00003f 	beq	349978 <NewIndexDesc__FRC6RefVarN21+0x368>
        349878:	e3a00002 	mov	r0, #2	; 0x2
        34987c:	eb61e232 	bl	1bc214c <$AllocateRefHandle(long)>
        349880:	e58d0000 	str	r0, [sp]
        349884:	e1a0000d 	mov	r0, sp
        349888:	e59f209c 	ldr	r2, [pc, #9c]	; 34992c <NewIndexDesc__FRC6RefVarN21+0x31c>
        34988c:	e28d1008 	add	r1, sp, #8	; 0x8
        349890:	eb5c5186 	bl	1a5deb0 <$FSetContains>
        349894:	e3100003 	tst	r0, #3	; 0x3
        349898:	13a00000 	movne	r0, #0	; 0x0
        34989c:	03a00001 	moveq	r0, #1	; 0x1
        3498a0:	e20040ff 	and	r4, r0, #255	; 0xff
        3498a4:	e59d0000 	ldr	r0, [sp]
        3498a8:	eb61e643 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3498ac:	e3340000 	teq	r4, #0	; 0x0
        3498b0:	0a000030 	beq	349978 <NewIndexDesc__FRC6RefVarN21+0x368>
        3498b4:	e59d0004 	ldr	r0, [sp, #4]
        3498b8:	e5900000 	ldr	r0, [r0]
        3498bc:	e59f106c 	ldr	r1, [pc, #6c]	; 349930 <NewIndexDesc__FRC6RefVarN21+0x320>
        3498c0:	e5911000 	ldr	r1, [r1]
        3498c4:	e5911000 	ldr	r1, [r1]
        3498c8:	eb61ea64 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3498cc:	eb61e21e 	bl	1bc214c <$AllocateRefHandle(long)>
        3498d0:	e1a06000 	mov	r6, r0
        3498d4:	e5900000 	ldr	r0, [r0]
        3498d8:	e59f7050 	ldr	r7, [pc, #50]	; 349930 <NewIndexDesc__FRC6RefVarN21+0x320>
        3498dc:	e3300002 	teq	r0, #2	; 0x2
        3498e0:	1a000014 	bne	349938 <NewIndexDesc__FRC6RefVarN21+0x328>
        3498e4:	e59f0048 	ldr	r0, [pc, #48]	; 349934 <NewIndexDesc__FRC6RefVarN21+0x324>
        3498e8:	e5b0403c 	ldr	r4, [r0, #60]!
        3498ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        3498f0:	e3340000 	teq	r4, #0	; 0x0
        3498f4:	0a000008 	beq	34991c <NewIndexDesc__FRC6RefVarN21+0x30c>
        3498f8:	e1a00104 	mov	r0, r4, lsl #2
        3498fc:	eb61e212 	bl	1bc214c <$AllocateRefHandle(long)>
        349900:	e58d0000 	str	r0, [sp]
        349904:	e1a0200d 	mov	r2, sp
        349908:	e1a01007 	mov	r1, r7
        34990c:	e28d0008 	add	r0, sp, #8	; 0x8
        349910:	eb61f294 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        349914:	e59d0000 	ldr	r0, [sp]
        349918:	eb61e627 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34991c:	e28dd004 	add	sp, sp, #4	; 0x4
        349920:	ea00000e 	b	349960 <NewIndexDesc__FRC6RefVarN21+0x350>
        349924:	006846c8 	rsbeq	r4, r8, r8, asr #13
        349928:	00684a48 	rsbeq	r4, r8, r8, asr #20
        34992c:	006848d0 	ldreqd	r4, [r8], -#128
        349930:	00684708 	rsbeq	r4, r8, r8, lsl #14
        349934:	0c107800 	ldceq	8, cr7, [r0]
        349938:	e3100003 	tst	r0, #3	; 0x3
        34993c:	01a00140 	moveq	r0, r0, asr #2
        349940:	0a000000 	beq	349948 <NewIndexDesc__FRC6RefVarN21+0x338>
        349944:	eb61e1f4 	bl	1bc211c <$_RINTError(long)>
        349948:	e1b04000 	movs	r4, r0
        34994c:	1a000003 	bne	349960 <NewIndexDesc__FRC6RefVarN21+0x350>
        349950:	e1a01007 	mov	r1, r7
        349954:	e28d0004 	add	r0, sp, #4	; 0x4
        349958:	eb61f271 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
        34995c:	ea000003 	b	349970 <NewIndexDesc__FRC6RefVarN21+0x360>
        349960:	e3340000 	teq	r4, #0	; 0x0
        349964:	11a01004 	movne	r1, r4
        349968:	11a00005 	movne	r0, r5
        34996c:	1b5c0f60 	blne	1a4d6f4 <$StoreSaveSortTable(RefVar const &, long)>
        349970:	e1a00006 	mov	r0, r6
        349974:	eb61e610 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        349978:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        34997c:	e1a0100d 	mov	r1, sp
        349980:	e28d0020 	add	r0, sp, #32	; 0x20
        349984:	eb5c0b26 	bl	1a4c624 <$IndexDescToIndexInfo(RefVar const &, IndexInfo *)>
        349988:	e24dd004 	sub	sp, sp, #4	; 0x4
        34998c:	e5950000 	ldr	r0, [r5]
        349990:	e5900000 	ldr	r0, [r0]
        349994:	e59f1060 	ldr	r1, [pc, #60]	; 3499fc <NewIndexDesc__FRC6RefVarN21+0x3ec>
        349998:	e5911000 	ldr	r1, [r1]
        34999c:	e5911000 	ldr	r1, [r1]
        3499a0:	eb61ea2e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3499a4:	e28d1004 	add	r1, sp, #4	; 0x4
        3499a8:	eb5c02e7 	bl	1a4a54c <$Create__10TSoupIndexSFP13TStoreWrapperP9IndexInfo>
        3499ac:	e1a00100 	mov	r0, r0, lsl #2
        3499b0:	eb61e1e5 	bl	1bc214c <$AllocateRefHandle(long)>
        3499b4:	e58d0000 	str	r0, [sp]
        3499b8:	e1a0200d 	mov	r2, sp
        3499bc:	e59f103c 	ldr	r1, [pc, #3c]	; 349a00 <NewIndexDesc__FRC6RefVarN21+0x3f0>
        3499c0:	e28d0024 	add	r0, sp, #36	; 0x24
        3499c4:	eb61f267 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3499c8:	e59d0000 	ldr	r0, [sp]
        3499cc:	eb61e5fa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3499d0:	e59d0024 	ldr	r0, [sp, #36]
        3499d4:	e5904000 	ldr	r4, [r0]
        3499d8:	eb61e5f7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3499dc:	e1a00008 	mov	r0, r8
        3499e0:	eb61e5f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3499e4:	e59d0028 	ldr	r0, [sp, #40]
        3499e8:	eb61e5f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3499ec:	e59d002c 	ldr	r0, [sp, #44]
        3499f0:	eb61e5f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3499f4:	e1a00004 	mov	r0, r4
        3499f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3499fc:	00684868 	rsbeq	r4, r8, r8, ror #16
        349a00:	006831c0 	rsbeq	r3, r8, r0, asr #3
    */
}

/**
 * Symbol: NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *)
 * Address: 0035bfc4
 */
NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *) {
    /*
        35bfc4:	e1a0c00d 	mov	ip, sp
        35bfc8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        35bfcc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        35bfd0:	e24cb014 	sub	fp, ip, #20	; 0x14
        35bfd4:	e1a07000 	mov	r7, r0
        35bfd8:	e1a06001 	mov	r6, r1
        35bfdc:	e1a05002 	mov	r5, r2
        35bfe0:	e1a04003 	mov	r4, r3
        35bfe4:	e3a00050 	mov	r0, #80	; 0x50
        35bfe8:	e59ba01c 	ldr	sl, [fp, #28]
        35bfec:	eb62184e 	bl	1be212c <$NewHandle>
        35bff0:	e1b09000 	movs	r9, r0
        35bff4:	0a00000e 	beq	35c034 <NewText(void *, long, StyleRecord **, short *, FPoint, TextOptions *)+0x70>
        35bff8:	e3a01050 	mov	r1, #80	; 0x50
        35bffc:	e5998000 	ldr	r8, [r9]
        35c000:	e1a00008 	mov	r0, r8
        35c004:	eb621004 	bl	1be001c <$ZeroBytes>
        35c008:	e588400c 	str	r4, [r8, #12]
        35c00c:	e5885008 	str	r5, [r8, #8]
        35c010:	e5886004 	str	r6, [r8, #4]
        35c014:	e5887000 	str	r7, [r8]
        35c018:	e2880010 	add	r0, r8, #16	; 0x10
        35c01c:	e28b1014 	add	r1, fp, #20	; 0x14
        35c020:	e8915000 	ldmia	r1, {ip, lr}
        35c024:	e8805000 	stmia	r0, {ip, lr}
        35c028:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
        35c02c:	e5a8a018 	str	sl, [r8, #24]!
        35c030:	e5880004 	str	r0, [r8, #4]
        35c034:	e1a00009 	mov	r0, r9
        35c038:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: numConnectRanges
 * Address: 0036dbec
 */
void globals::numConnectRanges() {
    /*
        36dbec:	00080008 	andeq	r0, r8, r8
        36dbf0:	00080008 	andeq	r0, r8, r8
        36dbf4:	00080008 	andeq	r0, r8, r8
        36dbf8:	00080008 	andeq	r0, r8, r8
        36dbfc:	00080008 	andeq	r0, r8, r8
        36dc00:	00080008 	andeq	r0, r8, r8
        36dc04:	00080008 	andeq	r0, r8, r8
        36dc08:	00080008 	andeq	r0, r8, r8
        36dc0c:	00080008 	andeq	r0, r8, r8
        36dc10:	00080008 	andeq	r0, r8, r8
        36dc14:	00080008 	andeq	r0, r8, r8
        36dc18:	00080008 	andeq	r0, r8, r8
        36dc1c:	00080008 	andeq	r0, r8, r8
        36dc20:	00080008 	andeq	r0, r8, r8
        36dc24:	00080008 	andeq	r0, r8, r8
        36dc28:	00080008 	andeq	r0, r8, r8
        36dc2c:	00080008 	andeq	r0, r8, r8
        36dc30:	00080008 	andeq	r0, r8, r8
        36dc34:	00080008 	andeq	r0, r8, r8
        36dc38:	00080008 	andeq	r0, r8, r8
        36dc3c:	00080008 	andeq	r0, r8, r8
        36dc40:	00080008 	andeq	r0, r8, r8
        36dc44:	00080008 	andeq	r0, r8, r8
        36dc48:	00080008 	andeq	r0, r8, r8
        36dc4c:	00080007 	andeq	r0, r8, r7
        36dc50:	00070007 	andeq	r0, r7, r7
        36dc54:	00070007 	andeq	r0, r7, r7
        36dc58:	00070007 	andeq	r0, r7, r7
        36dc5c:	00070007 	andeq	r0, r7, r7
        36dc60:	00070007 	andeq	r0, r7, r7
        36dc64:	00070007 	andeq	r0, r7, r7
        36dc68:	00070008 	andeq	r0, r7, r8
        36dc6c:	00080008 	andeq	r0, r8, r8
        36dc70:	00080008 	andeq	r0, r8, r8
        36dc74:	00080008 	andeq	r0, r8, r8
        36dc78:	00080008 	andeq	r0, r8, r8
        36dc7c:	00080008 	andeq	r0, r8, r8
        36dc80:	00080008 	andeq	r0, r8, r8
        36dc84:	00080006 	andeq	r0, r8, r6
        36dc88:	00060006 	andeq	r0, r6, r6
        36dc8c:	00060006 	andeq	r0, r6, r6
        36dc90:	00060006 	andeq	r0, r6, r6
        36dc94:	00060006 	andeq	r0, r6, r6
        36dc98:	00060006 	andeq	r0, r6, r6
        36dc9c:	00060006 	andeq	r0, r6, r6
        36dca0:	00060008 	andeq	r0, r6, r8
        36dca4:	00080008 	andeq	r0, r8, r8
        36dca8:	00080008 	andeq	r0, r8, r8
        36dcac:	00080008 	andeq	r0, r8, r8
        36dcb0:	00080008 	andeq	r0, r8, r8
        36dcb4:	00080008 	andeq	r0, r8, r8
        36dcb8:	00080008 	andeq	r0, r8, r8
        36dcbc:	0008000a 	andeq	r0, r8, sl
        36dcc0:	000a000a 	andeq	r0, sl, sl
        36dcc4:	000a000a 	andeq	r0, sl, sl
        36dcc8:	000a000a 	andeq	r0, sl, sl
        36dccc:	000a000a 	andeq	r0, sl, sl
        36dcd0:	000a000a 	andeq	r0, sl, sl
        36dcd4:	000a000a 	andeq	r0, sl, sl
        36dcd8:	000a000a 	andeq	r0, sl, sl
        36dcdc:	000a000a 	andeq	r0, sl, sl
        36dce0:	000a000a 	andeq	r0, sl, sl
        36dce4:	000a000a 	andeq	r0, sl, sl
        36dce8:	000a000a 	andeq	r0, sl, sl
        36dcec:	000a000a 	andeq	r0, sl, sl
        36dcf0:	00010001 	andeq	r0, r1, r1
        36dcf4:	00010001 	andeq	r0, r1, r1
        36dcf8:	00010001 	andeq	r0, r1, r1
        36dcfc:	00010001 	andeq	r0, r1, r1
        36dd00:	0001000e 	andeq	r0, r1, lr
        36dd04:	000e000e 	andeq	r0, lr, lr
        36dd08:	000e000e 	andeq	r0, lr, lr
        36dd0c:	000e000e 	andeq	r0, lr, lr
        36dd10:	000e000e 	andeq	r0, lr, lr
        36dd14:	00010001 	andeq	r0, r1, r1
        36dd18:	00010001 	andeq	r0, r1, r1
        36dd1c:	00010001 	andeq	r0, r1, r1
        36dd20:	00010001 	andeq	r0, r1, r1
        36dd24:	00010001 	andeq	r0, r1, r1
        36dd28:	00010001 	andeq	r0, r1, r1
        36dd2c:	00010001 	andeq	r0, r1, r1
        36dd30:	00010001 	andeq	r0, r1, r1
        36dd34:	00010001 	andeq	r0, r1, r1
        36dd38:	00010001 	andeq	r0, r1, r1
        36dd3c:	00010001 	andeq	r0, r1, r1
        36dd40:	00010001 	andeq	r0, r1, r1
        36dd44:	00010001 	andeq	r0, r1, r1
        36dd48:	00010001 	andeq	r0, r1, r1
        36dd4c:	00010001 	andeq	r0, r1, r1
        36dd50:	00010001 	andeq	r0, r1, r1
        36dd54:	00010001 	andeq	r0, r1, r1
        36dd58:	00010001 	andeq	r0, r1, r1
        36dd5c:	00010001 	andeq	r0, r1, r1
        36dd60:	00010001 	andeq	r0, r1, r1
        36dd64:	00010001 	andeq	r0, r1, r1
        36dd68:	00010001 	andeq	r0, r1, r1
        36dd6c:	00010001 	andeq	r0, r1, r1
        36dd70:	00010001 	andeq	r0, r1, r1
        36dd74:	00010001 	andeq	r0, r1, r1
        36dd78:	00010001 	andeq	r0, r1, r1
        36dd7c:	00010001 	andeq	r0, r1, r1
        36dd80:	00010001 	andeq	r0, r1, r1
        36dd84:	00010001 	andeq	r0, r1, r1
        36dd88:	00010001 	andeq	r0, r1, r1
        36dd8c:	00010001 	andeq	r0, r1, r1
        36dd90:	00010001 	andeq	r0, r1, r1
        36dd94:	00010001 	andeq	r0, r1, r1
        36dd98:	00010001 	andeq	r0, r1, r1
        36dd9c:	00010001 	andeq	r0, r1, r1
        36dda0:	00010001 	andeq	r0, r1, r1
        36dda4:	00010001 	andeq	r0, r1, r1
        36dda8:	00010001 	andeq	r0, r1, r1
        36ddac:	00010001 	andeq	r0, r1, r1
        36ddb0:	00010001 	andeq	r0, r1, r1
        36ddb4:	00010001 	andeq	r0, r1, r1
        36ddb8:	00010001 	andeq	r0, r1, r1
        36ddbc:	00010001 	andeq	r0, r1, r1
        36ddc0:	00010001 	andeq	r0, r1, r1
        36ddc4:	00010001 	andeq	r0, r1, r1
        36ddc8:	00010001 	andeq	r0, r1, r1
        36ddcc:	00010001 	andeq	r0, r1, r1
        36ddd0:	00010001 	andeq	r0, r1, r1
        36ddd4:	00010001 	andeq	r0, r1, r1
        36ddd8:	00010001 	andeq	r0, r1, r1
        36dddc:	00010001 	andeq	r0, r1, r1
        36dde0:	00010001 	andeq	r0, r1, r1
        36dde4:	00010001 	andeq	r0, r1, r1
        36dde8:	00010001 	andeq	r0, r1, r1
        36ddec:	00010001 	andeq	r0, r1, r1
        36ddf0:	00010001 	andeq	r0, r1, r1
        36ddf4:	00010001 	andeq	r0, r1, r1
        36ddf8:	00010001 	andeq	r0, r1, r1
        36ddfc:	00010001 	andeq	r0, r1, r1
        36de00:	00010001 	andeq	r0, r1, r1
        36de04:	00010001 	andeq	r0, r1, r1
        36de08:	00010001 	andeq	r0, r1, r1
        36de0c:	00010001 	andeq	r0, r1, r1
        36de10:	00010001 	andeq	r0, r1, r1
        36de14:	00010001 	andeq	r0, r1, r1
        36de18:	00010001 	andeq	r0, r1, r1
        36de1c:	00010001 	andeq	r0, r1, r1
        36de20:	00010001 	andeq	r0, r1, r1
        36de24:	00010001 	andeq	r0, r1, r1
        36de28:	00010001 	andeq	r0, r1, r1
        36de2c:	00010001 	andeq	r0, r1, r1
        36de30:	00010001 	andeq	r0, r1, r1
        36de34:	00010001 	andeq	r0, r1, r1
        36de38:	00010001 	andeq	r0, r1, r1
        36de3c:	00010001 	andeq	r0, r1, r1
        36de40:	00010001 	andeq	r0, r1, r1
        36de44:	00010001 	andeq	r0, r1, r1
        36de48:	00010001 	andeq	r0, r1, r1
        36de4c:	00010001 	andeq	r0, r1, r1
        36de50:	00010001 	andeq	r0, r1, r1
        36de54:	00010001 	andeq	r0, r1, r1
        36de58:	00010001 	andeq	r0, r1, r1
        36de5c:	00010001 	andeq	r0, r1, r1
        36de60:	00010001 	andeq	r0, r1, r1
        36de64:	00010001 	andeq	r0, r1, r1
        36de68:	00010001 	andeq	r0, r1, r1
        36de6c:	00010001 	andeq	r0, r1, r1
        36de70:	00010001 	andeq	r0, r1, r1
        36de74:	00010001 	andeq	r0, r1, r1
        36de78:	00010001 	andeq	r0, r1, r1
        36de7c:	00010001 	andeq	r0, r1, r1
        36de80:	00010001 	andeq	r0, r1, r1
        36de84:	00010001 	andeq	r0, r1, r1
        36de88:	00010001 	andeq	r0, r1, r1
        36de8c:	00010001 	andeq	r0, r1, r1
        36de90:	00010001 	andeq	r0, r1, r1
        36de94:	00010001 	andeq	r0, r1, r1
        36de98:	00010001 	andeq	r0, r1, r1
        36de9c:	00010001 	andeq	r0, r1, r1
        36dea0:	00010001 	andeq	r0, r1, r1
        36dea4:	00010001 	andeq	r0, r1, r1
        36dea8:	00010001 	andeq	r0, r1, r1
        36deac:	00010001 	andeq	r0, r1, r1
        36deb0:	00010001 	andeq	r0, r1, r1
        36deb4:	00010001 	andeq	r0, r1, r1
        36deb8:	00010001 	andeq	r0, r1, r1
        36debc:	00010001 	andeq	r0, r1, r1
        36dec0:	00010001 	andeq	r0, r1, r1
        36dec4:	00020002 	andeq	r0, r2, r2
        36dec8:	00020002 	andeq	r0, r2, r2
        36decc:	00020002 	andeq	r0, r2, r2
        36ded0:	00020002 	andeq	r0, r2, r2
        36ded4:	00020002 	andeq	r0, r2, r2
        36ded8:	00020002 	andeq	r0, r2, r2
        36dedc:	00020002 	andeq	r0, r2, r2
        36dee0:	00020002 	andeq	r0, r2, r2
        36dee4:	00020002 	andeq	r0, r2, r2
        36dee8:	00020002 	andeq	r0, r2, r2
        36deec:	00020002 	andeq	r0, r2, r2
        36def0:	00020002 	andeq	r0, r2, r2
        36def4:	00020002 	andeq	r0, r2, r2
        36def8:	00020002 	andeq	r0, r2, r2
        36defc:	00020002 	andeq	r0, r2, r2
        36df00:	00020002 	andeq	r0, r2, r2
        36df04:	00020002 	andeq	r0, r2, r2
        36df08:	00020002 	andeq	r0, r2, r2
        36df0c:	00020002 	andeq	r0, r2, r2
        36df10:	00020002 	andeq	r0, r2, r2
        36df14:	00020002 	andeq	r0, r2, r2
        36df18:	00020002 	andeq	r0, r2, r2
        36df1c:	00020002 	andeq	r0, r2, r2
        36df20:	00020002 	andeq	r0, r2, r2
        36df24:	00020002 	andeq	r0, r2, r2
        36df28:	00020002 	andeq	r0, r2, r2
        36df2c:	00020002 	andeq	r0, r2, r2
        36df30:	00020002 	andeq	r0, r2, r2
        36df34:	00020002 	andeq	r0, r2, r2
        36df38:	00020002 	andeq	r0, r2, r2
        36df3c:	00020002 	andeq	r0, r2, r2
        36df40:	00020002 	andeq	r0, r2, r2
        36df44:	00020002 	andeq	r0, r2, r2
        36df48:	00020002 	andeq	r0, r2, r2
        36df4c:	00020002 	andeq	r0, r2, r2
        36df50:	00020002 	andeq	r0, r2, r2
        36df54:	00020002 	andeq	r0, r2, r2
        36df58:	00020002 	andeq	r0, r2, r2
        36df5c:	00020002 	andeq	r0, r2, r2
        36df60:	00020002 	andeq	r0, r2, r2
        36df64:	00020002 	andeq	r0, r2, r2
        36df68:	00020002 	andeq	r0, r2, r2
        36df6c:	00020002 	andeq	r0, r2, r2
        36df70:	00020002 	andeq	r0, r2, r2
        36df74:	00020002 	andeq	r0, r2, r2
        36df78:	00020002 	andeq	r0, r2, r2
        36df7c:	00020002 	andeq	r0, r2, r2
        36df80:	00020002 	andeq	r0, r2, r2
        36df84:	00020002 	andeq	r0, r2, r2
        36df88:	00020002 	andeq	r0, r2, r2
        36df8c:	00020002 	andeq	r0, r2, r2
        36df90:	00020002 	andeq	r0, r2, r2
        36df94:	00020002 	andeq	r0, r2, r2
        36df98:	00020002 	andeq	r0, r2, r2
        36df9c:	00020002 	andeq	r0, r2, r2
        36dfa0:	00020002 	andeq	r0, r2, r2
        36dfa4:	00020002 	andeq	r0, r2, r2
        36dfa8:	00020002 	andeq	r0, r2, r2
        36dfac:	00020002 	andeq	r0, r2, r2
        36dfb0:	00020002 	andeq	r0, r2, r2
        36dfb4:	00010001 	andeq	r0, r1, r1
        36dfb8:	00010001 	andeq	r0, r1, r1
        36dfbc:	00010001 	andeq	r0, r1, r1
        36dfc0:	00010001 	andeq	r0, r1, r1
        36dfc4:	00010001 	andeq	r0, r1, r1
        36dfc8:	00010001 	andeq	r0, r1, r1
        36dfcc:	00010001 	andeq	r0, r1, r1
        36dfd0:	00010001 	andeq	r0, r1, r1
        36dfd4:	00010001 	andeq	r0, r1, r1
        36dfd8:	00010001 	andeq	r0, r1, r1
        36dfdc:	00010001 	andeq	r0, r1, r1
        36dfe0:	00010001 	andeq	r0, r1, r1
        36dfe4:	00010001 	andeq	r0, r1, r1
        36dfe8:	00010001 	andeq	r0, r1, r1
        36dfec:	00010001 	andeq	r0, r1, r1
        36dff0:	00010001 	andeq	r0, r1, r1
        36dff4:	00010001 	andeq	r0, r1, r1
        36dff8:	00010001 	andeq	r0, r1, r1
        36dffc:	00010001 	andeq	r0, r1, r1
        36e000:	00010001 	andeq	r0, r1, r1
        36e004:	00010001 	andeq	r0, r1, r1
        36e008:	00010001 	andeq	r0, r1, r1
        36e00c:	00010001 	andeq	r0, r1, r1
        36e010:	00010001 	andeq	r0, r1, r1
        36e014:	00010001 	andeq	r0, r1, r1
        36e018:	00010001 	andeq	r0, r1, r1
        36e01c:	00010001 	andeq	r0, r1, r1
        36e020:	00010001 	andeq	r0, r1, r1
        36e024:	00010001 	andeq	r0, r1, r1
        36e028:	00010001 	andeq	r0, r1, r1
        36e02c:	00010001 	andeq	r0, r1, r1
        36e030:	00010001 	andeq	r0, r1, r1
        36e034:	00010001 	andeq	r0, r1, r1
        36e038:	00010001 	andeq	r0, r1, r1
        36e03c:	00010001 	andeq	r0, r1, r1
        36e040:	00010001 	andeq	r0, r1, r1
        36e044:	00010001 	andeq	r0, r1, r1
        36e048:	00010001 	andeq	r0, r1, r1
        36e04c:	00010001 	andeq	r0, r1, r1
        36e050:	00010001 	andeq	r0, r1, r1
        36e054:	00010001 	andeq	r0, r1, r1
        36e058:	00010001 	andeq	r0, r1, r1
        36e05c:	00010001 	andeq	r0, r1, r1
        36e060:	00010001 	andeq	r0, r1, r1
        36e064:	00010001 	andeq	r0, r1, r1
        36e068:	00010001 	andeq	r0, r1, r1
        36e06c:	00010001 	andeq	r0, r1, r1
        36e070:	00010001 	andeq	r0, r1, r1
        36e074:	00010001 	andeq	r0, r1, r1
        36e078:	00010001 	andeq	r0, r1, r1
        36e07c:	00010001 	andeq	r0, r1, r1
        36e080:	00010001 	andeq	r0, r1, r1
        36e084:	00010001 	andeq	r0, r1, r1
        36e088:	00010001 	andeq	r0, r1, r1
        36e08c:	00010001 	andeq	r0, r1, r1
        36e090:	00010001 	andeq	r0, r1, r1
        36e094:	00010001 	andeq	r0, r1, r1
        36e098:	00010001 	andeq	r0, r1, r1
        36e09c:	00010001 	andeq	r0, r1, r1
        36e0a0:	00010001 	andeq	r0, r1, r1
        36e0a4:	00010001 	andeq	r0, r1, r1
        36e0a8:	00010001 	andeq	r0, r1, r1
        36e0ac:	00010001 	andeq	r0, r1, r1
        36e0b0:	00010001 	andeq	r0, r1, r1
        36e0b4:	00010001 	andeq	r0, r1, r1
        36e0b8:	00010001 	andeq	r0, r1, r1
        36e0bc:	00010001 	andeq	r0, r1, r1
    */
}

/**
 * Symbol: NetPatternImageT
 * Address: 00374004
 */
void globals::NetPatternImageT() {
    /*
        374004:	00132004 	andeqs	r2, r3, r4
        374008:	00000028 	andeq	r0, r0, r8, lsr #32
        37400c:	01b718b0 	ldreqh	r1, [r7, r0]!
        374010:	01b70838 	moveqs	r0, r8, lsr r8
        374014:	01b70840 	moveqs	r0, r0, asr #16
        374018:	01b70844 	moveqs	r0, r4, asr #16
        37401c:	01b7083c 	moveqs	r0, ip, lsr r8
        374020:	01b718a8 	moveqs	r1, r8, lsr #17
        374024:	01b718a4 	moveqs	r1, r4, lsr #17
    */
}

/**
 * Symbol: NetPatternMultiT
 * Address: 00374028
 */
void globals::NetPatternMultiT() {
    /*
        374028:	00132518 	andeqs	r2, r3, r8, lsl r5
        37402c:	00000010 	andeq	r0, r0, r0, lsl r0
        374030:	01b718c4 	moveqs	r1, r4, asr #17
        374034:	01b70850 	moveqs	r0, r0, asr r8
        374038:	01b70858 	moveqs	r0, r8, asr r8
        37403c:	01b7085c 	moveqs	r0, ip, asr r8
        374040:	01b70854 	moveqs	r0, r4, asr r8
        374044:	01b718bc 	ldreqh	r1, [r7, ip]!
        374048:	01b718b8 	ldreqh	r1, [r7, r8]!
    */
}

/**
 * Symbol: NetPatternAspectNormT
 * Address: 0037404c
 */
void globals::NetPatternAspectNormT() {
    /*
        37404c:	00132990 	muleqs	r3, r0, r9
        374050:	00000014 	andeq	r0, r0, r4, lsl r0
        374054:	01b71884 	moveqs	r1, r4, lsl #17
        374058:	01b70860 	moveqs	r0, r0, ror #16
        37405c:	01b7081c 	moveqs	r0, ip, lsl r8
        374060:	01b70868 	moveqs	r0, r8, ror #16
        374064:	01b70864 	moveqs	r0, r4, ror #16
        374068:	01b718d0 	ldreqsb	r1, [r7, r0]!
        37406c:	01b718cc 	moveqs	r1, ip, asr #17
    */
}

/**
 * Symbol: NetPatternHeightT
 * Address: 00374070
 */
void globals::NetPatternHeightT() {
    /*
        374070:	001329a8 	andeqs	r2, r3, r8, lsr #19
        374074:	00000014 	andeq	r0, r0, r4, lsl r0
        374078:	01b718a0 	moveqs	r1, r0, lsr #17
        37407c:	01b70860 	moveqs	r0, r0, ror #16
        374080:	01b70834 	moveqs	r0, r4, lsr r8
        374084:	01b70868 	moveqs	r0, r8, ror #16
        374088:	01b70864 	moveqs	r0, r4, ror #16
        37408c:	01b718d0 	ldreqsb	r1, [r7, r0]!
        374090:	01b718cc 	moveqs	r1, ip, asr #17
    */
}

/**
 * Symbol: NetPatternCapHeightT
 * Address: 00374094
 */
void globals::NetPatternCapHeightT() {
    /*
        374094:	001329b8 	ldreqh	r2, [r3], -r8
        374098:	00000014 	andeq	r0, r0, r4, lsl r0
        37409c:	01b7188c 	moveqs	r1, ip, lsl #17
        3740a0:	01b70860 	moveqs	r0, r0, ror #16
        3740a4:	01b70824 	moveqs	r0, r4, lsr #16
        3740a8:	01b70868 	moveqs	r0, r8, ror #16
        3740ac:	01b70864 	moveqs	r0, r4, ror #16
        3740b0:	01b718d0 	ldreqsb	r1, [r7, r0]!
        3740b4:	01b718cc 	moveqs	r1, ip, asr #17
    */
}

/**
 * Symbol: NetPatternBaseT
 * Address: 003740b8
 */
void globals::NetPatternBaseT() {
    /*
        3740b8:	001329c8 	andeqs	r2, r3, r8, asr #19
        3740bc:	00000014 	andeq	r0, r0, r4, lsl r0
        3740c0:	01b71888 	moveqs	r1, r8, lsl #17
        3740c4:	01b70860 	moveqs	r0, r0, ror #16
        3740c8:	01b70820 	moveqs	r0, r0, lsr #16
        3740cc:	01b70868 	moveqs	r0, r8, ror #16
        3740d0:	01b70864 	moveqs	r0, r4, ror #16
        3740d4:	01b718d0 	ldreqsb	r1, [r7, r0]!
        3740d8:	01b718cc 	moveqs	r1, ip, asr #17
    */
}

/**
 * Symbol: NetPatternCountT
 * Address: 003740dc
 */
void globals::NetPatternCountT() {
    /*
        3740dc:	001329d4 	ldreqsb	r2, [r3], -r4
        3740e0:	00000014 	andeq	r0, r0, r4, lsl r0
        3740e4:	01b71890 	ldreqb	r1, [r7, r0]!
        3740e8:	01b70860 	moveqs	r0, r0, ror #16
        3740ec:	01b70828 	moveqs	r0, r8, lsr #16
        3740f0:	01b70868 	moveqs	r0, r8, ror #16
        3740f4:	01b70864 	moveqs	r0, r4, ror #16
        3740f8:	01b718d0 	ldreqsb	r1, [r7, r0]!
        3740fc:	01b718cc 	moveqs	r1, ip, asr #17
    */
}

/**
 * Symbol: NetPatternStrokePUDT
 * Address: 00374100
 */
void globals::NetPatternStrokePUDT() {
    /*
        374100:	001330a0 	andeqs	r3, r3, r0, lsr #1
        374104:	00000018 	andeq	r0, r0, r8, lsl r0
        374108:	01b718e8 	moveqs	r1, r8, ror #17
        37410c:	01b70874 	moveqs	r0, r4, ror r8
        374110:	01b7087c 	moveqs	r0, ip, ror r8
        374114:	01b71880 	moveqs	r1, r0, lsl #17
        374118:	01b70878 	moveqs	r0, r8, ror r8
        37411c:	01b718e0 	moveqs	r1, r0, ror #17
        374120:	01b718dc 	ldreqsb	r1, [r7, ip]!
        374124:	30313131 	eorccs	r3, r1, r1, lsr r1
        374128:	31303030 	teqcc	r0, r0, lsr r0
        37412c:	30303031 	eorccs	r3, r0, r1, lsr r0
        374130:	30303030 	eorccs	r3, r0, r0, lsr r0
        374134:	00000000 	andeq	r0, r0, r0
        374138:	01040000 	tsteq	r4, r0
        37413c:	00145fe8 	andeqs	r5, r4, r8, ror #31
        374140:	00145ff0 	ldreqsh	r5, [r4], -r0
        374144:	00145ffc 	ldreqsh	r5, [r4], -ip
        374148:	00146014 	andeqs	r6, r4, r4, lsl r0
    */
}

/**
 * Symbol: nbcut0
 * Address: 003745f0
 */
void globals::nbcut0() {
    /*
        3745f0:	000a0000 	andeq	r0, sl, r0
    */
}

/**
 * Symbol: nbcut1
 * Address: 003745f4
 */
void globals::nbcut1() {
    /*
        3745f4:	005f0000 	subeqs	r0, pc, r0
    */
}

/**
 * Symbol: nbcut2
 * Address: 003745f8
 */
void globals::nbcut2() {
    /*
        3745f8:	00020000 	andeq	r0, r2, r0
    */
}

/**
 * Symbol: num_charset
 * Address: 00375088
 */
void globals::num_charset() {
    /*
        375088:	30313233 	eorccs	r3, r1, r3, lsr r2
        37508c:	34353637 	ldrcct	r3, [r5], -#1591
        375090:	38390000 	ldmccda	r9!, {}
    */
}

/**
 * Symbol: NonCheckLetter
 * Address: 00376840
 */
void globals::NonCheckLetter() {
    /*
        376840:	46664b6b 	strmibt	r4, [r6], -fp, ror #22
        376844:	54740000 	ldrplbt	r0, [r4]
    */
}

/**
 * Symbol: NonCheckChars
 * Address: 003768c4
 */
void globals::NonCheckChars() {
    /*
        3768c4:	6c4c7454 	mcrrvs	4, 5, r7, ip, cr4
        3768c8:	66460000 	strvsb	r0, [r6], -r0
    */
}

