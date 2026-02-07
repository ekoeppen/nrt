#include "include/TIRQTimer.h"

/**
 * Symbol: TIRQTimer::InitIRQTimer(IRQTimer *)
 * Address: 000e8ac4
 */
TIRQTimer::InitIRQTimer(IRQTimer *) {
    /*
         e8ac4:	e3a00000 	mov	r0, #0	; 0x0
         e8ac8:	e5810008 	str	r0, [r1, #8]	; fField8
         e8acc:	e581000c 	str	r0, [r1, #12]
         e8ad0:	e5810010 	str	r0, [r1, #16]
         e8ad4:	e5810014 	str	r0, [r1, #20]
         e8ad8:	e5810004 	str	r0, [r1, #4]	; fField4
         e8adc:	e5810000 	str	r0, [r1]
         e8ae0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIRQTimer::InitializeIRQTimers(void)
 * Address: 000e8ae4
 */
TIRQTimer::InitializeIRQTimers(void) {
    /*
         e8ae4:	e1a0c00d 	mov	ip, sp
         e8ae8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         e8aec:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8af0:	e1a04000 	mov	r4, r0
         e8af4:	e3a05000 	mov	r5, #0	; 0x0
         e8af8:	e0850085 	add	r0, r5, r5, lsl #1
         e8afc:	e0840180 	add	r0, r4, r0, lsl #3
         e8b00:	e280100c 	add	r1, r0, #12	; 0xc
         e8b04:	e1a00004 	mov	r0, r4
         e8b08:	eb66068e 	bl	1a6a548 <TIRQTimer::$InitIRQTimer(IRQTimer *)>
         e8b0c:	e2855001 	add	r5, r5, #1	; 0x1
         e8b10:	e3550008 	cmp	r5, #8	; 0x8
         e8b14:	bafffff7 	blt	e8af8 <TIRQTimer::InitializeIRQTimers(void)+0x14>
         e8b18:	e3a00000 	mov	r0, #0	; 0x0
         e8b1c:	e5c400cd 	strb	r0, [r4, #205]	; fField205
         e8b20:	e5c400ce 	strb	r0, [r4, #206]	; fField206
         e8b24:	e5840000 	str	r0, [r4]
         e8b28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIRQTimer::DecrementIRQTimers(unsigned long)
 * Address: 000e8b2c
 */
TIRQTimer::DecrementIRQTimers(unsigned long) {
    /*
         e8b2c:	e92d4030 	stmdb	sp!, {r4, r5, lr}
         e8b30:	e3a0c000 	mov	ip, #0	; 0x0
         e8b34:	e28140b9 	add	r4, r1, #185	; 0xb9
         e8b38:	e3a03000 	mov	r3, #0	; 0x0
         e8b3c:	e3a05000 	mov	r5, #0	; 0x0
         e8b40:	e0832083 	add	r2, r3, r3, lsl #1
         e8b44:	e0802182 	add	r2, r0, r2, lsl #3
         e8b48:	e592e00c 	ldr	lr, [r2, #12]
         e8b4c:	e33e0001 	teq	lr, #1	; 0x1
         e8b50:	1a000005 	bne	e8b6c <TIRQTimer::DecrementIRQTimers(unsigned long)+0x40>
         e8b54:	e592e010 	ldr	lr, [r2, #16]
         e8b58:	e15e0004 	cmp	lr, r4
         e8b5c:	204ee001 	subcs	lr, lr, r1
         e8b60:	25a2e010 	strcs	lr, [r2, #16]!
         e8b64:	35825010 	strcc	r5, [r2, #16]
         e8b68:	3282c00c 	addcc	ip, r2, #12	; 0xc
         e8b6c:	e2833001 	add	r3, r3, #1	; 0x1
         e8b70:	e3530008 	cmp	r3, #8	; 0x8
         e8b74:	bafffff1 	blt	e8b40 <TIRQTimer::DecrementIRQTimers(unsigned long)+0x14>
         e8b78:	e1a0000c 	mov	r0, ip
         e8b7c:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: TIRQTimer::SetIRQTimerForShortestDelay(void)
 * Address: 000e8b80
 */
TIRQTimer::SetIRQTimerForShortestDelay(void) {
    /*
         e8b80:	e1a0c00d 	mov	ip, sp
         e8b84:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         e8b88:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8b8c:	e1a04000 	mov	r4, r0
         e8b90:	e3a02000 	mov	r2, #0	; 0x0
         e8b94:	e3e05000 	mvn	r5, #0	; 0x0
         e8b98:	e3a00000 	mov	r0, #0	; 0x0
         e8b9c:	e0801080 	add	r1, r0, r0, lsl #1
         e8ba0:	e0841181 	add	r1, r4, r1, lsl #3
         e8ba4:	e591300c 	ldr	r3, [r1, #12]
         e8ba8:	e3330001 	teq	r3, #1	; 0x1
         e8bac:	1a000003 	bne	e8bc0 <TIRQTimer::SetIRQTimerForShortestDelay(void)+0x40>
         e8bb0:	e5913010 	ldr	r3, [r1, #16]
         e8bb4:	e1530005 	cmp	r3, r5
         e8bb8:	31a05003 	movcc	r5, r3
         e8bbc:	3281200c 	addcc	r2, r1, #12	; 0xc
         e8bc0:	e2800001 	add	r0, r0, #1	; 0x1
         e8bc4:	e3500008 	cmp	r0, #8	; 0x8
         e8bc8:	bafffff3 	blt	e8b9c <TIRQTimer::SetIRQTimerForShortestDelay(void)+0x1c>
         e8bcc:	e3320000 	teq	r2, #0	; 0x0
         e8bd0:	0a00000f 	beq	e8c14 <TIRQTimer::SetIRQTimerForShortestDelay(void)+0x94>
         e8bd4:	e59f7034 	ldr	r7, [pc, #34]	; e8c10 <TIRQTimer::SetIRQTimerForShortestDelay(void)+0x90>
         e8bd8:	e5970000 	ldr	r0, [r7]
         e8bdc:	e5840000 	str	r0, [r4]
         e8be0:	e0806005 	add	r6, r0, r5
         e8be4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         e8be8:	e5806000 	str	r6, [r0]
         e8bec:	e59400d4 	ldr	r0, [r4, #212]	; fField212
         e8bf0:	eb6c8647 	bl	1c0a514 <$QuickEnableInterrupt>
         e8bf4:	e5970000 	ldr	r0, [r7]
         e8bf8:	e0460000 	sub	r0, r6, r0
         e8bfc:	e1500005 	cmp	r0, r5
         e8c00:	8afffff4 	bhi	e8bd8 <TIRQTimer::SetIRQTimerForShortestDelay(void)+0x58>
         e8c04:	e3a00001 	mov	r0, #1	; 0x1
         e8c08:	e5c400cd 	strb	r0, [r4, #205]	; fField205
         e8c0c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         e8c10:	0f181800 	swieq	0x00181800
         e8c14:	e59400d4 	ldr	r0, [r4, #212]	; fField212
         e8c18:	eb6c5090 	bl	1bfce60 <$DisableInterrupt>
         e8c1c:	e5b400d4 	ldr	r0, [r4, #212]!	; fField212
         e8c20:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         e8c24:	ea6c508c 	b	1bfce5c <$ClearInterrupt>
    */
}

/**
 * Symbol: TIRQTimer::ServiceIRQTimers(void)
 * Address: 000e8c28
 */
TIRQTimer::ServiceIRQTimers(void) {
    /*
         e8c28:	e1a0c00d 	mov	ip, sp
         e8c2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         e8c30:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8c34:	e1a04000 	mov	r4, r0
         e8c38:	e3a00001 	mov	r0, #1	; 0x1
         e8c3c:	e5c400ce 	strb	r0, [r4, #206]	; fField206
         e8c40:	e59f6058 	ldr	r6, [pc, #58]	; e8ca0 <TIRQTimer::ServiceIRQTimers(void)+0x78>
         e8c44:	e3a07000 	mov	r7, #0	; 0x0
         e8c48:	e5960000 	ldr	r0, [r6]
         e8c4c:	e5941000 	ldr	r1, [r4]
         e8c50:	e0401001 	sub	r1, r0, r1
         e8c54:	e5840000 	str	r0, [r4]
         e8c58:	e1a00004 	mov	r0, r4
         e8c5c:	eb66063b 	bl	1a6a550 <TIRQTimer::$DecrementIRQTimers(unsigned long)>
         e8c60:	e1b05000 	movs	r5, r0
         e8c64:	0a000009 	beq	e8c90 <TIRQTimer::ServiceIRQTimers(void)+0x68>
         e8c68:	e5857000 	str	r7, [r5]
         e8c6c:	e5960000 	ldr	r0, [r6]
         e8c70:	e5941000 	ldr	r1, [r4]
         e8c74:	e0400001 	sub	r0, r0, r1
         e8c78:	e5840004 	str	r0, [r4, #4]	; fField4
         e8c7c:	e2851010 	add	r1, r5, #16	; 0x10
         e8c80:	e8910003 	ldmia	r1, {r0, r1}
         e8c84:	e1a0e00f 	mov	lr, pc
         e8c88:	e595f00c 	ldr	pc, [r5, #12]
         e8c8c:	e5847004 	str	r7, [r4, #4]	; fField4
         e8c90:	e3350000 	teq	r5, #0	; 0x0
         e8c94:	1affffeb 	bne	e8c48 <TIRQTimer::ServiceIRQTimers(void)+0x20>
         e8c98:	e5c470ce 	strb	r7, [r4, #206]	; fField206
         e8c9c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         e8ca0:	0f181800 	swieq	0x00181800
    */
}

/**
 * Symbol: TIRQTimer::IRQTimerInterrupt(void)
 * Address: 000e8ca4
 */
TIRQTimer::IRQTimerInterrupt(void) {
    /*
         e8ca4:	e1a0c00d 	mov	ip, sp
         e8ca8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         e8cac:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8cb0:	e1a04000 	mov	r4, r0
         e8cb4:	e3a00000 	mov	r0, #0	; 0x0
         e8cb8:	e5c400cd 	strb	r0, [r4, #205]	; fField205
         e8cbc:	e1a00004 	mov	r0, r4
         e8cc0:	eb660624 	bl	1a6a558 <TIRQTimer::$ServiceIRQTimers(void)>
         e8cc4:	e1a00004 	mov	r0, r4
         e8cc8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         e8ccc:	ea660620 	b	1a6a554 <TIRQTimer::$SetIRQTimerForShortestDelay(void)>
    */
}

/**
 * Symbol: TIRQTimer::__ct(unsigned long *, unsigned long)
 * Address: 000e8cd0
 */
TIRQTimer::TIRQTimer(unsigned long *, unsigned long) {
    /*
         e8cd0:	e1a0c00d 	mov	ip, sp
         e8cd4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         e8cd8:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8cdc:	e1b04000 	movs	r4, r0
         e8ce0:	e1a06001 	mov	r6, r1
         e8ce4:	e1a05002 	mov	r5, r2
         e8ce8:	1a000003 	bne	e8cfc <TIRQTimer::__ct(unsigned long *, unsigned long)+0x2c>
         e8cec:	e3a000d8 	mov	r0, #216	; 0xd8
         e8cf0:	eb6b9690 	bl	1bce738 <$__nw(unsigned int)>
         e8cf4:	e1b04000 	movs	r4, r0
         e8cf8:	0a000006 	beq	e8d18 <TIRQTimer::__ct(unsigned long *, unsigned long)+0x48>
         e8cfc:	e58450d0 	str	r5, [r4, #208]	; fField208
         e8d00:	e5846008 	str	r6, [r4, #8]	; fField8
         e8d04:	e1a00004 	mov	r0, r4
         e8d08:	eb66060f 	bl	1a6a54c <TIRQTimer::$InitializeIRQTimers(void)>
         e8d0c:	e3a00000 	mov	r0, #0	; 0x0
         e8d10:	e5c400cc 	strb	r0, [r4, #204]	; fField204
         e8d14:	e5840004 	str	r0, [r4, #4]	; fField4
         e8d18:	e1a00004 	mov	r0, r4
         e8d1c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIRQTimer::Init(void)
 * Address: 000e8d20
 */
TIRQTimer::Init(void) {
    /*
         e8d20:	e1a0c00d 	mov	ip, sp
         e8d24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         e8d28:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8d2c:	e1a04000 	mov	r4, r0
         e8d30:	e28010d8 	add	r1, r0, #216	; 0xd8
         e8d34:	e3a02000 	mov	r2, #0	; 0x0
         e8d38:	eb6bb785 	bl	1bd6b54 <$LockHeapRange>
         e8d3c:	e3300000 	teq	r0, #0	; 0x0
         e8d40:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         e8d44:	e3a03001 	mov	r3, #1	; 0x1
         e8d48:	e92d0008 	stmdb	sp!, {r3}
         e8d4c:	e59410d0 	ldr	r1, [r4, #208]	; fField208
         e8d50:	e28400d4 	add	r0, r4, #212	; 0xd4
         e8d54:	e59f3048 	ldr	r3, [pc, #48]	; e8da4 <TIRQTimer::Init(void)+0x84>
         e8d58:	e1a02004 	mov	r2, r4
         e8d5c:	eb6c85ee 	bl	1c0a51c <$RegisterInterrupt(InterruptObject **, unsigned long, void *, long (*)(void *), void *)>
         e8d60:	e28dd004 	add	sp, sp, #4	; 0x4
         e8d64:	e59400d4 	ldr	r0, [r4, #212]	; fField212
         e8d68:	e3300000 	teq	r0, #0	; 0x0
         e8d6c:	03a000e9 	moveq	r0, #233	; 0xe9
         e8d70:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         e8d74:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         e8d78:	e3a01000 	mov	r1, #0	; 0x0
         e8d7c:	e3a02002 	mov	r2, #2	; 0x2
         e8d80:	e59400d4 	ldr	r0, [r4, #212]	; fField212
         e8d84:	eb6c81db 	bl	1c094f8 <$ChangeInterruptPriority(InterruptObject *, InterruptPriority)>
         e8d88:	e3300000 	teq	r0, #0	; 0x0
         e8d8c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         e8d90:	e59f1010 	ldr	r1, [pc, #10]	; e8da8 <TIRQTimer::Init(void)+0x88>
         e8d94:	e5814000 	str	r4, [r1]
         e8d98:	e3a01001 	mov	r1, #1	; 0x1
         e8d9c:	e5c410cc 	strb	r1, [r4, #204]	; fField204
         e8da0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         e8da4:	01a6a55c 	moveq	sl, ip, asr r5
         e8da8:	0c100f74 	ldceq	15, cr0, [r0], -#464
    */
}

/**
 * Symbol: TIRQTimer::AcquireIRQTimer(void (*)(void *, unsigned long), void *)
 * Address: 000e8dac
 */
TIRQTimer::AcquireIRQTimer(void (*)(void *, unsigned long), void *) {
    /*
         e8dac:	e1a0c00d 	mov	ip, sp
         e8db0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         e8db4:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8db8:	e1a04000 	mov	r4, r0
         e8dbc:	e1a06001 	mov	r6, r1
         e8dc0:	e1a05002 	mov	r5, r2
         e8dc4:	e3a08000 	mov	r8, #0	; 0x0
         e8dc8:	e3a07000 	mov	r7, #0	; 0x0
         e8dcc:	e0870087 	add	r0, r7, r7, lsl #1
         e8dd0:	e0840180 	add	r0, r4, r0, lsl #3
         e8dd4:	e2800014 	add	r0, r0, #20	; 0x14
         e8dd8:	e3a01001 	mov	r1, #1	; 0x1
         e8ddc:	eb0b1508 	bl	3ae204 <Swap>
         e8de0:	e3300000 	teq	r0, #0	; 0x0
         e8de4:	1a000005 	bne	e8e00 <TIRQTimer::AcquireIRQTimer(void (*)(void *, unsigned long), void *)+0x54>
         e8de8:	e0870087 	add	r0, r7, r7, lsl #1
         e8dec:	e0840180 	add	r0, r4, r0, lsl #3
         e8df0:	e280800c 	add	r8, r0, #12	; 0xc
         e8df4:	e5a06018 	str	r6, [r0, #24]!
         e8df8:	e5805004 	str	r5, [r0, #4]	; fField4
         e8dfc:	ea000002 	b	e8e0c <TIRQTimer::AcquireIRQTimer(void (*)(void *, unsigned long), void *)+0x60>
         e8e00:	e2877001 	add	r7, r7, #1	; 0x1
         e8e04:	e3570008 	cmp	r7, #8	; 0x8
         e8e08:	baffffef 	blt	e8dcc <TIRQTimer::AcquireIRQTimer(void (*)(void *, unsigned long), void *)+0x20>
         e8e0c:	e1a00008 	mov	r0, r8
         e8e10:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIRQTimer::ReleaseIRQTimer(IRQTimer *)
 * Address: 000e8e14
 */
TIRQTimer::ReleaseIRQTimer(IRQTimer *) {
    /*
         e8e14:	e3a02000 	mov	r2, #0	; 0x0
         e8e18:	e0823082 	add	r3, r2, r2, lsl #1
         e8e1c:	e0803183 	add	r3, r0, r3, lsl #3
         e8e20:	e283300c 	add	r3, r3, #12	; 0xc
         e8e24:	e1330001 	teq	r3, r1
         e8e28:	0a6605c6 	beq	1a6a548 <TIRQTimer::$InitIRQTimer(IRQTimer *)>
         e8e2c:	e2822001 	add	r2, r2, #1	; 0x1
         e8e30:	e3520008 	cmp	r2, #8	; 0x8
         e8e34:	bafffff7 	blt	e8e18 <TIRQTimer::ReleaseIRQTimer(IRQTimer *)+0x4>
         e8e38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIRQTimer::ReleaseIRQTimers(void *)
 * Address: 000e8e3c
 */
TIRQTimer::ReleaseIRQTimers(void *) {
    /*
         e8e3c:	e1a0c00d 	mov	ip, sp
         e8e40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         e8e44:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8e48:	e1a04000 	mov	r4, r0
         e8e4c:	e1a05001 	mov	r5, r1
         e8e50:	e3a06000 	mov	r6, #0	; 0x0
         e8e54:	e0860086 	add	r0, r6, r6, lsl #1
         e8e58:	e0840180 	add	r0, r4, r0, lsl #3
         e8e5c:	e590101c 	ldr	r1, [r0, #28]
         e8e60:	e1310005 	teq	r1, r5
         e8e64:	0280100c 	addeq	r1, r0, #12	; 0xc
         e8e68:	01a00004 	moveq	r0, r4
         e8e6c:	0b6605b5 	bleq	1a6a548 <TIRQTimer::$InitIRQTimer(IRQTimer *)>
         e8e70:	e2866001 	add	r6, r6, #1	; 0x1
         e8e74:	e3560008 	cmp	r6, #8	; 0x8
         e8e78:	bafffff5 	blt	e8e54 <TIRQTimer::ReleaseIRQTimers(void *)+0x18>
         e8e7c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIRQTimer::SetIRQTimer(IRQTimer *, unsigned long, unsigned long)
 * Address: 000e8e80
 */
TIRQTimer::SetIRQTimer(IRQTimer *, unsigned long, unsigned long) {
    /*
         e8e80:	e1a0c00d 	mov	ip, sp
         e8e84:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         e8e88:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8e8c:	e1a04000 	mov	r4, r0
         e8e90:	e1a06001 	mov	r6, r1
         e8e94:	e1a05002 	mov	r5, r2
         e8e98:	e1a07003 	mov	r7, r3
         e8e9c:	e59f006c 	ldr	r0, [pc, #6c]	; e8f10 <TIRQTimer::SetIRQTimer(IRQTimer *, unsigned long, unsigned long)+0x90>
         e8ea0:	e5908000 	ldr	r8, [r0]
         e8ea4:	e35500b9 	cmp	r5, #185	; 0xb9
         e8ea8:	33a050b9 	movcc	r5, #185	; 0xb9
         e8eac:	e5d400cd 	ldrb	r0, [r4, #205]	; fField205
         e8eb0:	e3300000 	teq	r0, #0	; 0x0
         e8eb4:	0a000005 	beq	e8ed0 <TIRQTimer::SetIRQTimer(IRQTimer *, unsigned long, unsigned long)+0x50>
         e8eb8:	e59400d4 	ldr	r0, [r4, #212]	; fField212
         e8ebc:	eb6c4fe7 	bl	1bfce60 <$DisableInterrupt>
         e8ec0:	e3a00000 	mov	r0, #0	; 0x0
         e8ec4:	e5c400cd 	strb	r0, [r4, #205]	; fField205
         e8ec8:	e1a00004 	mov	r0, r4
         e8ecc:	eb6605a1 	bl	1a6a558 <TIRQTimer::$ServiceIRQTimers(void)>
         e8ed0:	e5d400ce 	ldrb	r0, [r4, #206]	; fField206
         e8ed4:	e3300000 	teq	r0, #0	; 0x0
         e8ed8:	0a000003 	beq	e8eec <TIRQTimer::SetIRQTimer(IRQTimer *, unsigned long, unsigned long)+0x6c>
         e8edc:	e8940003 	ldmia	r4, {r0, r1}
         e8ee0:	e0810000 	add	r0, r1, r0
         e8ee4:	e0480000 	sub	r0, r8, r0
         e8ee8:	e0805005 	add	r5, r0, r5
         e8eec:	e3a00001 	mov	r0, #1	; 0x1
         e8ef0:	e8a60021 	stmia	r6!, {r0, r5}
         e8ef4:	e5a6700c 	str	r7, [r6, #12]!
         e8ef8:	e5d400ce 	ldrb	r0, [r4, #206]	; fField206
         e8efc:	e3300000 	teq	r0, #0	; 0x0
         e8f00:	01a00004 	moveq	r0, r4
         e8f04:	091b69f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         e8f08:	0a660591 	beq	1a6a554 <TIRQTimer::$SetIRQTimerForShortestDelay(void)>
         e8f0c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         e8f10:	0f181800 	swieq	0x00181800
    */
}

/**
 * Symbol: TIRQTimer::ResetIRQTimer(IRQTimer *)
 * Address: 000e8f14
 */
TIRQTimer::ResetIRQTimer(IRQTimer *) {
    /*
         e8f14:	e3a00000 	mov	r0, #0	; 0x0
         e8f18:	e5810000 	str	r0, [r1]
         e8f1c:	e1a0f00e 	mov	pc, lr
    */
}

