#include "include/TFIQTimer.h"

/**
 * Symbol: TFIQTimer::SetFIQTimer(FIQTimer *, unsigned long, unsigned long)
 * Address: 000b1acc
 */
TFIQTimer::SetFIQTimer(FIQTimer *, unsigned long, unsigned long) {
    /*
         b1acc:	e1a0c00d 	mov	ip, sp
         b1ad0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b1ad4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1ad8:	e1a04000 	mov	r4, r0
         b1adc:	e1a06001 	mov	r6, r1
         b1ae0:	e1a05002 	mov	r5, r2
         b1ae4:	e1a07003 	mov	r7, r3
         b1ae8:	e35200b4 	cmp	r2, #180	; 0xb4
         b1aec:	33a050b4 	movcc	r5, #180	; 0xb4
         b1af0:	e5d40059 	ldrb	r0, [r4, #89]	; fField89
         b1af4:	e3300000 	teq	r0, #0	; 0x0
         b1af8:	0a000005 	beq	b1b14 <TFIQTimer::SetFIQTimer(FIQTimer *, unsigned long, unsigned long)+0x48>
         b1afc:	e594005c 	ldr	r0, [r4, #92]	; fField92
         b1b00:	eb6d2cd6 	bl	1bfce60 <$DisableInterrupt>
         b1b04:	e3a00000 	mov	r0, #0	; 0x0
         b1b08:	e5c40059 	strb	r0, [r4, #89]	; fField89
         b1b0c:	e1a00004 	mov	r0, r4
         b1b10:	eb659c59 	bl	1a18c7c <TFIQTimer::$ServiceFIQTimers(void)>
         b1b14:	e3a00001 	mov	r0, #1	; 0x1
         b1b18:	e5a67008 	str	r7, [r6, #8]!
         b1b1c:	e5865004 	str	r5, [r6, #4]	; fField4
         b1b20:	e5860008 	str	r0, [r6, #8]
         b1b24:	e5d4005a 	ldrb	r0, [r4, #90]	; fField90
         b1b28:	e3300000 	teq	r0, #0	; 0x0
         b1b2c:	01a00004 	moveq	r0, r4
         b1b30:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b1b34:	0a65a059 	beq	1a19ca0 <TFIQTimer::$SetFIQTimerForShortestDelay(void)>
         b1b38:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFIQTimer::ResetFIQTimer(FIQTimer *)
 * Address: 000b1b3c
 */
TFIQTimer::ResetFIQTimer(FIQTimer *) {
    /*
         b1b3c:	e3a00000 	mov	r0, #0	; 0x0
         b1b40:	e5a10010 	str	r0, [r1, #16]!
         b1b44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFIQTimer::InitFIQTimer(FIQTimer *)
 * Address: 000b1b48
 */
TFIQTimer::InitFIQTimer(FIQTimer *) {
    /*
         b1b48:	e3a00000 	mov	r0, #0	; 0x0
         b1b4c:	e5810000 	str	r0, [r1]
         b1b50:	e5810004 	str	r0, [r1, #4]	; fField4
         b1b54:	e5810008 	str	r0, [r1, #8]
         b1b58:	e581000c 	str	r0, [r1, #12]
         b1b5c:	e5a10010 	str	r0, [r1, #16]!
         b1b60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFIQTimer::InitializeFIQTimers(void)
 * Address: 000b1b64
 */
TFIQTimer::InitializeFIQTimers(void) {
    /*
         b1b64:	e1a0c00d 	mov	ip, sp
         b1b68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b1b6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1b70:	e1a04000 	mov	r4, r0
         b1b74:	e3a05000 	mov	r5, #0	; 0x0
         b1b78:	e0850105 	add	r0, r5, r5, lsl #2
         b1b7c:	e0840100 	add	r0, r4, r0, lsl #2
         b1b80:	e2801008 	add	r1, r0, #8	; 0x8
         b1b84:	e1a00004 	mov	r0, r4
         b1b88:	eb658785 	bl	1a139a4 <TFIQTimer::$InitFIQTimer(FIQTimer *)>
         b1b8c:	e2855001 	add	r5, r5, #1	; 0x1
         b1b90:	e3550004 	cmp	r5, #4	; 0x4
         b1b94:	bafffff7 	blt	b1b78 <TFIQTimer::InitializeFIQTimers(void)+0x14>
         b1b98:	e3a00000 	mov	r0, #0	; 0x0
         b1b9c:	e5c40059 	strb	r0, [r4, #89]	; fField89
         b1ba0:	e5c4005a 	strb	r0, [r4, #90]	; fField90
         b1ba4:	e5840000 	str	r0, [r4]
         b1ba8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFIQTimer::DecrementFIQTimers(unsigned long)
 * Address: 000b1bac
 */
TFIQTimer::DecrementFIQTimers(unsigned long) {
    /*
         b1bac:	e92d4030 	stmdb	sp!, {r4, r5, lr}
         b1bb0:	e3a0c000 	mov	ip, #0	; 0x0
         b1bb4:	e28140b4 	add	r4, r1, #180	; 0xb4
         b1bb8:	e3a03000 	mov	r3, #0	; 0x0
         b1bbc:	e3a05000 	mov	r5, #0	; 0x0
         b1bc0:	e0832103 	add	r2, r3, r3, lsl #2
         b1bc4:	e0802102 	add	r2, r0, r2, lsl #2
         b1bc8:	e592e008 	ldr	lr, [r2, #8]
         b1bcc:	e33e0000 	teq	lr, #0	; 0x0
         b1bd0:	0a000008 	beq	b1bf8 <TFIQTimer::DecrementFIQTimers(unsigned long)+0x4c>
         b1bd4:	e592e018 	ldr	lr, [r2, #24]
         b1bd8:	e33e0001 	teq	lr, #1	; 0x1
         b1bdc:	1a000005 	bne	b1bf8 <TFIQTimer::DecrementFIQTimers(unsigned long)+0x4c>
         b1be0:	e592e014 	ldr	lr, [r2, #20]
         b1be4:	e15e0004 	cmp	lr, r4
         b1be8:	204ee001 	subcs	lr, lr, r1
         b1bec:	25a2e014 	strcs	lr, [r2, #20]!
         b1bf0:	35825014 	strcc	r5, [r2, #20]
         b1bf4:	3282c008 	addcc	ip, r2, #8	; 0x8
         b1bf8:	e2833001 	add	r3, r3, #1	; 0x1
         b1bfc:	e3530004 	cmp	r3, #4	; 0x4
         b1c00:	baffffee 	blt	b1bc0 <TFIQTimer::DecrementFIQTimers(unsigned long)+0x14>
         b1c04:	e1a0000c 	mov	r0, ip
         b1c08:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: TFIQTimer::SetFIQTimerForShortestDelay(void)
 * Address: 000b1c0c
 */
TFIQTimer::SetFIQTimerForShortestDelay(void) {
    /*
         b1c0c:	e1a0c00d 	mov	ip, sp
         b1c10:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b1c14:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1c18:	e1a04000 	mov	r4, r0
         b1c1c:	e3a02000 	mov	r2, #0	; 0x0
         b1c20:	e3e05000 	mvn	r5, #0	; 0x0
         b1c24:	e3a00000 	mov	r0, #0	; 0x0
         b1c28:	e0801100 	add	r1, r0, r0, lsl #2
         b1c2c:	e0841101 	add	r1, r4, r1, lsl #2
         b1c30:	e5913008 	ldr	r3, [r1, #8]
         b1c34:	e3330000 	teq	r3, #0	; 0x0
         b1c38:	0a000006 	beq	b1c58 <TFIQTimer::SetFIQTimerForShortestDelay(void)+0x4c>
         b1c3c:	e5913018 	ldr	r3, [r1, #24]
         b1c40:	e3330001 	teq	r3, #1	; 0x1
         b1c44:	1a000003 	bne	b1c58 <TFIQTimer::SetFIQTimerForShortestDelay(void)+0x4c>
         b1c48:	e5913014 	ldr	r3, [r1, #20]
         b1c4c:	e1530005 	cmp	r3, r5
         b1c50:	31a05003 	movcc	r5, r3
         b1c54:	32812008 	addcc	r2, r1, #8	; 0x8
         b1c58:	e2800001 	add	r0, r0, #1	; 0x1
         b1c5c:	e3500004 	cmp	r0, #4	; 0x4
         b1c60:	bafffff0 	blt	b1c28 <TFIQTimer::SetFIQTimerForShortestDelay(void)+0x1c>
         b1c64:	e3320000 	teq	r2, #0	; 0x0
         b1c68:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         b1c6c:	e3a08a82 	mov	r8, #532480	; 0x82000
         b1c70:	e28886f1 	add	r8, r8, #252706816	; 0xf100000
         b1c74:	e5947004 	ldr	r7, [r4, #4]	; fField4
         b1c78:	e5970000 	ldr	r0, [r7]
         b1c7c:	e5840000 	str	r0, [r4]
         b1c80:	e0806005 	add	r6, r0, r5
         b1c84:	e5886000 	str	r6, [r8]
         b1c88:	e594005c 	ldr	r0, [r4, #92]	; fField92
         b1c8c:	eb6d6220 	bl	1c0a514 <$QuickEnableInterrupt>
         b1c90:	e5970000 	ldr	r0, [r7]
         b1c94:	e0460000 	sub	r0, r6, r0
         b1c98:	e1500005 	cmp	r0, r5
         b1c9c:	8afffff5 	bhi	b1c78 <TFIQTimer::SetFIQTimerForShortestDelay(void)+0x6c>
         b1ca0:	e3a00001 	mov	r0, #1	; 0x1
         b1ca4:	e5c40059 	strb	r0, [r4, #89]	; fField89
         b1ca8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFIQTimer::ServiceFIQTimers(void)
 * Address: 000b1cac
 */
TFIQTimer::ServiceFIQTimers(void) {
    /*
         b1cac:	e1a0c00d 	mov	ip, sp
         b1cb0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b1cb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1cb8:	e1a04000 	mov	r4, r0
         b1cbc:	e3a00001 	mov	r0, #1	; 0x1
         b1cc0:	e5c4005a 	strb	r0, [r4, #90]	; fField90
         b1cc4:	e3a06000 	mov	r6, #0	; 0x0
         b1cc8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         b1ccc:	e5900000 	ldr	r0, [r0]
         b1cd0:	e5941000 	ldr	r1, [r4]
         b1cd4:	e0401001 	sub	r1, r0, r1
         b1cd8:	e5840000 	str	r0, [r4]
         b1cdc:	e1a00004 	mov	r0, r4
         b1ce0:	eb6572a0 	bl	1a0e768 <TFIQTimer::$DecrementFIQTimers(unsigned long)>
         b1ce4:	e1b05000 	movs	r5, r0
         b1ce8:	0a000003 	beq	b1cfc <TFIQTimer::ServiceFIQTimers(void)+0x50>
         b1cec:	e5856010 	str	r6, [r5, #16]
         b1cf0:	e9950003 	ldmib	r5, {r0, r1}
         b1cf4:	e1a0e00f 	mov	lr, pc
         b1cf8:	e595f000 	ldr	pc, [r5]
         b1cfc:	e3350000 	teq	r5, #0	; 0x0
         b1d00:	1afffff0 	bne	b1cc8 <TFIQTimer::ServiceFIQTimers(void)+0x1c>
         b1d04:	e5c4605a 	strb	r6, [r4, #90]	; fField90
         b1d08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFIQTimer::FIQTimerInterrupt(void)
 * Address: 000b1d0c
 */
TFIQTimer::FIQTimerInterrupt(void) {
    /*
         b1d0c:	e1a0c00d 	mov	ip, sp
         b1d10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b1d14:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1d18:	e1a04000 	mov	r4, r0
         b1d1c:	e590005c 	ldr	r0, [r0, #92]	; fField92
         b1d20:	eb6d2c4e 	bl	1bfce60 <$DisableInterrupt>
         b1d24:	e3a00000 	mov	r0, #0	; 0x0
         b1d28:	e5c40059 	strb	r0, [r4, #89]	; fField89
         b1d2c:	e1a00004 	mov	r0, r4
         b1d30:	eb659bd1 	bl	1a18c7c <TFIQTimer::$ServiceFIQTimers(void)>
         b1d34:	e1a00004 	mov	r0, r4
         b1d38:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b1d3c:	ea659fd7 	b	1a19ca0 <TFIQTimer::$SetFIQTimerForShortestDelay(void)>
    */
}

/**
 * Symbol: TFIQTimer::__ct(unsigned long *)
 * Address: 000b1d90
 */
TFIQTimer::TFIQTimer(unsigned long *) {
    /*
         b1d90:	e1a0c00d 	mov	ip, sp
         b1d94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b1d98:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1d9c:	e1b04000 	movs	r4, r0
         b1da0:	e1a05001 	mov	r5, r1
         b1da4:	1a000003 	bne	b1db8 <TFIQTimer::__ct(unsigned long *)+0x28>
         b1da8:	e3a00060 	mov	r0, #96	; 0x60
         b1dac:	eb6c7261 	bl	1bce738 <$__nw(unsigned int)>
         b1db0:	e1b04000 	movs	r4, r0
         b1db4:	0a000004 	beq	b1dcc <TFIQTimer::__ct(unsigned long *)+0x3c>
         b1db8:	e5845004 	str	r5, [r4, #4]	; fField4
         b1dbc:	e1a00004 	mov	r0, r4
         b1dc0:	eb6586fb 	bl	1a139b4 <TFIQTimer::$InitializeFIQTimers(void)>
         b1dc4:	e3a00000 	mov	r0, #0	; 0x0
         b1dc8:	e5c40058 	strb	r0, [r4, #88]	; fField88
         b1dcc:	e1a00004 	mov	r0, r4
         b1dd0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFIQTimer::Init(void)
 * Address: 000b1dd4
 */
TFIQTimer::Init(void) {
    /*
         b1dd4:	e1a0c00d 	mov	ip, sp
         b1dd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b1ddc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1de0:	e1a04000 	mov	r4, r0
         b1de4:	e2801060 	add	r1, r0, #96	; 0x60
         b1de8:	e3a02001 	mov	r2, #1	; 0x1
         b1dec:	eb6c9358 	bl	1bd6b54 <$LockHeapRange>
         b1df0:	e3300000 	teq	r0, #0	; 0x0
         b1df4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         b1df8:	e3a03001 	mov	r3, #1	; 0x1
         b1dfc:	e92d0008 	stmdb	sp!, {r3}
         b1e00:	e284005c 	add	r0, r4, #92	; 0x5c
         b1e04:	e59f3048 	ldr	r3, [pc, #48]	; b1e54 <TFIQTimer::Init(void)+0x80>
         b1e08:	e1a02004 	mov	r2, r4
         b1e0c:	e3a01008 	mov	r1, #8	; 0x8
         b1e10:	eb6d61c1 	bl	1c0a51c <$RegisterInterrupt(InterruptObject **, unsigned long, void *, long (*)(void *), void *)>
         b1e14:	e28dd004 	add	sp, sp, #4	; 0x4
         b1e18:	e594005c 	ldr	r0, [r4, #92]	; fField92
         b1e1c:	e3300000 	teq	r0, #0	; 0x0
         b1e20:	03a000e9 	moveq	r0, #233	; 0xe9
         b1e24:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         b1e28:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b1e2c:	e3a05001 	mov	r5, #1	; 0x1
         b1e30:	e1a01005 	mov	r1, r5
         b1e34:	e1a02005 	mov	r2, r5
         b1e38:	e594005c 	ldr	r0, [r4, #92]	; fField92
         b1e3c:	eb6d5dad 	bl	1c094f8 <$ChangeInterruptPriority(InterruptObject *, InterruptPriority)>
         b1e40:	e3300000 	teq	r0, #0	; 0x0
         b1e44:	059f100c 	ldreq	r1, [pc, #c]	; b1e58 <TFIQTimer::Init(void)+0x84>
         b1e48:	05814000 	streq	r4, [r1]
         b1e4c:	05c45058 	streqb	r5, [r4, #88]	; fField88
         b1e50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         b1e54:	01a1083c 	moveq	r0, ip, lsr r8
         b1e58:	0c100d28 	ldceq	13, cr0, [r0], -#160
    */
}

/**
 * Symbol: TFIQTimer::AcquireFIQTimer(void (*)(void *, unsigned long), void *)
 * Address: 000b1e5c
 */
TFIQTimer::AcquireFIQTimer(void (*)(void *, unsigned long), void *) {
    /*
         b1e5c:	e92d4000 	stmdb	sp!, {lr}
         b1e60:	e3a0c000 	mov	ip, #0	; 0x0
         b1e64:	e3a03000 	mov	r3, #0	; 0x0
         b1e68:	e083e103 	add	lr, r3, r3, lsl #2
         b1e6c:	e080e10e 	add	lr, r0, lr, lsl #2
         b1e70:	e59ee008 	ldr	lr, [lr, #8]
         b1e74:	e33e0000 	teq	lr, #0	; 0x0
         b1e78:	1a000005 	bne	b1e94 <TFIQTimer::AcquireFIQTimer(void (*)(void *, unsigned long), void *)+0x38>
         b1e7c:	e0833103 	add	r3, r3, r3, lsl #2
         b1e80:	e0800103 	add	r0, r0, r3, lsl #2
         b1e84:	e280c008 	add	ip, r0, #8	; 0x8
         b1e88:	e2800004 	add	r0, r0, #4	; 0x4
         b1e8c:	e9a00006 	stmib	r0!, {r1, r2}
         b1e90:	ea000002 	b	b1ea0 <TFIQTimer::AcquireFIQTimer(void (*)(void *, unsigned long), void *)+0x44>
         b1e94:	e2833001 	add	r3, r3, #1	; 0x1
         b1e98:	e3530004 	cmp	r3, #4	; 0x4
         b1e9c:	bafffff1 	blt	b1e68 <TFIQTimer::AcquireFIQTimer(void (*)(void *, unsigned long), void *)+0xc>
         b1ea0:	e1a0000c 	mov	r0, ip
         b1ea4:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TFIQTimer::ReleaseFIQTimer(FIQTimer *)
 * Address: 000b1ea8
 */
TFIQTimer::ReleaseFIQTimer(FIQTimer *) {
    /*
         b1ea8:	e3a02000 	mov	r2, #0	; 0x0
         b1eac:	e0823102 	add	r3, r2, r2, lsl #2
         b1eb0:	e0803103 	add	r3, r0, r3, lsl #2
         b1eb4:	e2833008 	add	r3, r3, #8	; 0x8
         b1eb8:	e1330001 	teq	r3, r1
         b1ebc:	0a6586b8 	beq	1a139a4 <TFIQTimer::$InitFIQTimer(FIQTimer *)>
         b1ec0:	e2822001 	add	r2, r2, #1	; 0x1
         b1ec4:	e3520004 	cmp	r2, #4	; 0x4
         b1ec8:	bafffff7 	blt	b1eac <TFIQTimer::ReleaseFIQTimer(FIQTimer *)+0x4>
         b1ecc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFIQTimer::ReleaseFIQTimers(void *)
 * Address: 000b1ed0
 */
TFIQTimer::ReleaseFIQTimers(void *) {
    /*
         b1ed0:	e1a0c00d 	mov	ip, sp
         b1ed4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b1ed8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1edc:	e1a04000 	mov	r4, r0
         b1ee0:	e1a05001 	mov	r5, r1
         b1ee4:	e3a06000 	mov	r6, #0	; 0x0
         b1ee8:	e0860106 	add	r0, r6, r6, lsl #2
         b1eec:	e0840100 	add	r0, r4, r0, lsl #2
         b1ef0:	e590100c 	ldr	r1, [r0, #12]
         b1ef4:	e1310005 	teq	r1, r5
         b1ef8:	02801008 	addeq	r1, r0, #8	; 0x8
         b1efc:	01a00004 	moveq	r0, r4
         b1f00:	0b6586a7 	bleq	1a139a4 <TFIQTimer::$InitFIQTimer(FIQTimer *)>
         b1f04:	e2866001 	add	r6, r6, #1	; 0x1
         b1f08:	e3560004 	cmp	r6, #4	; 0x4
         b1f0c:	bafffff5 	blt	b1ee8 <TFIQTimer::ReleaseFIQTimers(void *)+0x18>
         b1f10:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

