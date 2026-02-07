#include "include/TTimerEngine.h"

/**
 * Symbol: TTimerEngine::Remove(TSharedMemMsg *)
 * Address: 00255c20
 */
TTimerEngine::Remove(TSharedMemMsg *) {
    /*
        255c20:	e1a0c00d 	mov	ip, sp
        255c24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        255c28:	e24cb004 	sub	fp, ip, #4	; 0x4
        255c2c:	e1a04000 	mov	r4, r0
        255c30:	e1a05001 	mov	r5, r1
        255c34:	eb04f3a1 	bl	392ac0 <EnterAtomic>
        255c38:	e1a01005 	mov	r1, r5
        255c3c:	e59f003c 	ldr	r0, [pc, #3c]	; 255c80 <TTimerEngine::Remove(TSharedMemMsg *)+0x60>
        255c40:	e5900000 	ldr	r0, [r0]
        255c44:	eb661025 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        255c48:	e3300000 	teq	r0, #0	; 0x0
        255c4c:	1a000012 	bne	255c9c <TTimerEngine::Remove(TSharedMemMsg *)+0x7c>
        255c50:	e1a00004 	mov	r0, r4
        255c54:	eb6607e5 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        255c58:	e1300005 	teq	r0, r5
        255c5c:	1a00000b 	bne	255c90 <TTimerEngine::Remove(TSharedMemMsg *)+0x70>
        255c60:	e1a00004 	mov	r0, r4
        255c64:	eb661018 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        255c68:	e1a00004 	mov	r0, r4
        255c6c:	eb6607df 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        255c70:	e3300000 	teq	r0, #0	; 0x0
        255c74:	1a000002 	bne	255c84 <TTimerEngine::Remove(TSharedMemMsg *)+0x64>
        255c78:	eb627b7c 	bl	1af4a70 <$ClearAlarmAtomic(void)>
        255c7c:	ea000006 	b	255c9c <TTimerEngine::Remove(TSharedMemMsg *)+0x7c>
        255c80:	0c101048 	ldceq	0, cr1, [r0], -#288
        255c84:	e1a00004 	mov	r0, r4
        255c88:	eb62773e 	bl	1af3988 <TTimerEngine::$Alarm(void)>
        255c8c:	ea000002 	b	255c9c <TTimerEngine::Remove(TSharedMemMsg *)+0x7c>
        255c90:	e1a01005 	mov	r1, r5
        255c94:	e1a00004 	mov	r0, r4
        255c98:	eb661010 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        255c9c:	e595003c 	ldr	r0, [r5, #60]
        255ca0:	e3c00c06 	bic	r0, r0, #1536	; 0x600
        255ca4:	e5a5003c 	str	r0, [r5, #60]!
        255ca8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        255cac:	ea04f39a 	b	392b1c <ExitAtomic>
    */
}

/**
 * Symbol: TTimerEngine::Alarm(void)
 * Address: 00255cb0
 */
TTimerEngine::Alarm(void) {
    /*
        255cb0:	e1a0c00d 	mov	ip, sp
        255cb4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        255cb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        255cbc:	e1a04000 	mov	r4, r0
        255cc0:	e24dd008 	sub	sp, sp, #8	; 0x8
        255cc4:	eb04f37d 	bl	392ac0 <EnterAtomic>
        255cc8:	e1a00004 	mov	r0, r4
        255ccc:	eb6607c7 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        255cd0:	e1b05000 	movs	r5, r0
        255cd4:	1a000001 	bne	255ce0 <TTimerEngine::Alarm(void)+0x30>
        255cd8:	eb627b64 	bl	1af4a70 <$ClearAlarmAtomic(void)>
        255cdc:	ea000018 	b	255d44 <TTimerEngine::Alarm(void)+0x94>
        255ce0:	e1a0000d 	mov	r0, sp
        255ce4:	eb628ff6 	bl	1af9cc4 <$GetClock>
        255ce8:	e2851028 	add	r1, r5, #40	; 0x28
        255cec:	e1a0000d 	mov	r0, sp
        255cf0:	eb662ce4 	bl	1be1088 <$CompCompare>
        255cf4:	e3500000 	cmp	r0, #0	; 0x0
        255cf8:	ba000009 	blt	255d24 <TTimerEngine::Alarm(void)+0x74>
        255cfc:	e1a00004 	mov	r0, r4
        255d00:	eb660ff1 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        255d04:	e595003c 	ldr	r0, [r5, #60]
        255d08:	e2001c06 	and	r1, r0, #1536	; 0x600
        255d0c:	e3310c06 	teq	r1, #1536	; 0x600
        255d10:	03c00c06 	biceq	r0, r0, #1536	; 0x600
        255d14:	0585003c 	streq	r0, [r5, #60]
        255d18:	e59500a0 	ldr	r0, [r5, #160]
        255d1c:	e1a0e00f 	mov	lr, pc
        255d20:	e595f0a4 	ldr	pc, [r5, #164]
        255d24:	e1a00004 	mov	r0, r4
        255d28:	eb6607b0 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        255d2c:	e1b05000 	movs	r5, r0
        255d30:	0a000003 	beq	255d44 <TTimerEngine::Alarm(void)+0x94>
        255d34:	e2850028 	add	r0, r5, #40	; 0x28
        255d38:	eb62bd67 	bl	1b052dc <$SetAlarmAtomic(TTime &)>
        255d3c:	e3300000 	teq	r0, #0	; 0x0
        255d40:	0affffe6 	beq	255ce0 <TTimerEngine::Alarm(void)+0x30>
        255d44:	eb04f374 	bl	392b1c <ExitAtomic>
        255d48:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTimerEngine::Start(void)
 * Address: 00255ee8
 */
TTimerEngine::Start(void) {
    /*
        255ee8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTimerEngine::__ct(void)
 * Address: 00255eec
 */
TTimerEngine::TTimerEngine(void) {
    /*
        255eec:	e1a0c00d 	mov	ip, sp
        255ef0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        255ef4:	e24cb004 	sub	fp, ip, #4	; 0x4
        255ef8:	e1b04000 	movs	r4, r0
        255efc:	1a000003 	bne	255f10 <TTimerEngine::__ct(void)+0x24>
        255f00:	e3a00014 	mov	r0, #20	; 0x14
        255f04:	eb65e20b 	bl	1bce738 <$__nw(unsigned int)>
        255f08:	e1b04000 	movs	r4, r0
        255f0c:	0a000002 	beq	255f1c <TTimerEngine::__ct(void)+0x30>
        255f10:	e1a00004 	mov	r0, r4
        255f14:	e3a01030 	mov	r1, #48	; 0x30
        255f18:	eb65dde7 	bl	1bcd6bc <TDoubleQContainer::$__ct(char *)>
        255f1c:	e1a00004 	mov	r0, r4
        255f20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TTimerEngine::Init(void)
 * Address: 00255f24
 */
TTimerEngine::Init(void) {
    /*
        255f24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTimerEngine::QueueTimer(TSharedMemMsg *, unsigned long, void *, void (*)(void *))
 * Address: 00255f28
 */
TTimerEngine::QueueTimer(TSharedMemMsg *, unsigned long, void *, void (*)(void *)) {
    /*
        255f28:	e1a0c00d 	mov	ip, sp
        255f2c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        255f30:	e24cb004 	sub	fp, ip, #4	; 0x4
        255f34:	e1a05000 	mov	r5, r0
        255f38:	e1a04001 	mov	r4, r1
        255f3c:	e1a07002 	mov	r7, r2
        255f40:	e1a06003 	mov	r6, r3
        255f44:	e59b9004 	ldr	r9, [fp, #4]
        255f48:	eb65e627 	bl	1bcf7ec <TDoubleQContainer::$CheckBeforeAdd(void *)>
        255f4c:	e24dd010 	sub	sp, sp, #16	; 0x10
        255f50:	e594003c 	ldr	r0, [r4, #60]
        255f54:	e3100c06 	tst	r0, #1536	; 0x600
        255f58:	e3a08000 	mov	r8, #0	; 0x0
        255f5c:	11a00008 	movne	r0, r8
        255f60:	1a000024 	bne	255ff8 <TTimerEngine::QueueTimer(TSharedMemMsg *, unsigned long, void *, void (*)(void *))+0xd0>
        255f64:	e28440a0 	add	r4, r4, #160	; 0xa0
        255f68:	e8840240 	stmia	r4, {r6, r9}
        255f6c:	e24440a0 	sub	r4, r4, #160	; 0xa0
        255f70:	e2846028 	add	r6, r4, #40	; 0x28
        255f74:	e1a0000d 	mov	r0, sp
        255f78:	eb628f51 	bl	1af9cc4 <$GetClock>
        255f7c:	e58d700c 	str	r7, [sp, #12]
        255f80:	e58d8008 	str	r8, [sp, #8]
        255f84:	e24dd008 	sub	sp, sp, #8	; 0x8
        255f88:	e28d0010 	add	r0, sp, #16	; 0x10
        255f8c:	e8905000 	ldmia	r0, {ip, lr}
        255f90:	e88d5000 	stmia	sp, {ip, lr}
        255f94:	e1a0100d 	mov	r1, sp
        255f98:	e28d0008 	add	r0, sp, #8	; 0x8
        255f9c:	eb662c38 	bl	1be1084 <$CompAdd>
        255fa0:	e1b00006 	movs	r0, r6
        255fa4:	1a000003 	bne	255fb8 <TTimerEngine::QueueTimer(TSharedMemMsg *, unsigned long, void *, void (*)(void *))+0x90>
        255fa8:	e3a00008 	mov	r0, #8	; 0x8
        255fac:	eb65e1e1 	bl	1bce738 <$__nw(unsigned int)>
        255fb0:	e3300000 	teq	r0, #0	; 0x0
        255fb4:	0a000001 	beq	255fc0 <TTimerEngine::QueueTimer(TSharedMemMsg *, unsigned long, void *, void (*)(void *))+0x98>
        255fb8:	e89d1008 	ldmia	sp, {r3, ip}
        255fbc:	e8801008 	stmia	r0, {r3, ip}
        255fc0:	e28dd008 	add	sp, sp, #8	; 0x8
        255fc4:	eb04f2bd 	bl	392ac0 <EnterAtomic>
        255fc8:	e594003c 	ldr	r0, [r4, #60]
        255fcc:	e3800c06 	orr	r0, r0, #1536	; 0x600
        255fd0:	e584003c 	str	r0, [r4, #60]
        255fd4:	e1a01004 	mov	r1, r4
        255fd8:	e1a00005 	mov	r0, r5
        255fdc:	eb62b04a 	bl	1b0210c <TTimerEngine::$Queue(TSharedMemMsg *)>
        255fe0:	e1b05000 	movs	r5, r0
        255fe4:	0594003c 	ldreq	r0, [r4, #60]
        255fe8:	03c00c06 	biceq	r0, r0, #1536	; 0x600
        255fec:	05a4003c 	streq	r0, [r4, #60]!
        255ff0:	eb04f2c9 	bl	392b1c <ExitAtomic>
        255ff4:	e1a00005 	mov	r0, r5
        255ff8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TTimerEngine::QueueTimeout(TSharedMemMsg *)
 * Address: 00255ffc
 */
TTimerEngine::QueueTimeout(TSharedMemMsg *) {
    /*
        255ffc:	e1a0c00d 	mov	ip, sp
        256000:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        256004:	e24cb004 	sub	fp, ip, #4	; 0x4
        256008:	e1a05000 	mov	r5, r0
        25600c:	e1a04001 	mov	r4, r1
        256010:	e24dd010 	sub	sp, sp, #16	; 0x10
        256014:	e3a07000 	mov	r7, #0	; 0x0
        256018:	e5910024 	ldr	r0, [r1, #36]
        25601c:	e3700001 	cmn	r0, #1	; 0x1
        256020:	01a00007 	moveq	r0, r7
        256024:	0a000025 	beq	2560c0 <TTimerEngine::QueueTimeout(TSharedMemMsg *)+0xc4>
        256028:	e58440a0 	str	r4, [r4, #160]
        25602c:	e59f0090 	ldr	r0, [pc, #90]	; 2560c4 <TTimerEngine::QueueTimeout(TSharedMemMsg *)+0xc8>
        256030:	e58400a4 	str	r0, [r4, #164]
        256034:	e2846028 	add	r6, r4, #40	; 0x28
        256038:	e1a0000d 	mov	r0, sp
        25603c:	eb628f20 	bl	1af9cc4 <$GetClock>
        256040:	e5940024 	ldr	r0, [r4, #36]
        256044:	e58d000c 	str	r0, [sp, #12]
        256048:	e58d7008 	str	r7, [sp, #8]
        25604c:	e24dd008 	sub	sp, sp, #8	; 0x8
        256050:	e28d0010 	add	r0, sp, #16	; 0x10
        256054:	e8905000 	ldmia	r0, {ip, lr}
        256058:	e88d5000 	stmia	sp, {ip, lr}
        25605c:	e1a0100d 	mov	r1, sp
        256060:	e28d0008 	add	r0, sp, #8	; 0x8
        256064:	eb662c06 	bl	1be1084 <$CompAdd>
        256068:	e1b00006 	movs	r0, r6
        25606c:	1a000003 	bne	256080 <TTimerEngine::QueueTimeout(TSharedMemMsg *)+0x84>
        256070:	e3a00008 	mov	r0, #8	; 0x8
        256074:	eb65e1af 	bl	1bce738 <$__nw(unsigned int)>
        256078:	e3300000 	teq	r0, #0	; 0x0
        25607c:	0a000001 	beq	256088 <TTimerEngine::QueueTimeout(TSharedMemMsg *)+0x8c>
        256080:	e89d1008 	ldmia	sp, {r3, ip}
        256084:	e8801008 	stmia	r0, {r3, ip}
        256088:	e28dd008 	add	sp, sp, #8	; 0x8
        25608c:	eb04f28b 	bl	392ac0 <EnterAtomic>
        256090:	e594003c 	ldr	r0, [r4, #60]
        256094:	e3800b01 	orr	r0, r0, #1024	; 0x400
        256098:	e584003c 	str	r0, [r4, #60]
        25609c:	e1a01004 	mov	r1, r4
        2560a0:	e1a00005 	mov	r0, r5
        2560a4:	eb62b018 	bl	1b0210c <TTimerEngine::$Queue(TSharedMemMsg *)>
        2560a8:	e1b05000 	movs	r5, r0
        2560ac:	0594003c 	ldreq	r0, [r4, #60]
        2560b0:	03c00c06 	biceq	r0, r0, #1536	; 0x600
        2560b4:	05a4003c 	streq	r0, [r4, #60]!
        2560b8:	eb04f297 	bl	392b1c <ExitAtomic>
        2560bc:	e1a00005 	mov	r0, r5
        2560c0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2560c4:	01b0211c 	moveqs	r2, ip, lsl r1
    */
}

/**
 * Symbol: TTimerEngine::QueueDelay(TSharedMemMsg *)
 * Address: 002560c8
 */
TTimerEngine::QueueDelay(TSharedMemMsg *) {
    /*
        2560c8:	e1a0c00d 	mov	ip, sp
        2560cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2560d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2560d4:	e1a05000 	mov	r5, r0
        2560d8:	e1a04001 	mov	r4, r1
        2560dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2560e0:	e2810028 	add	r0, r1, #40	; 0x28
        2560e4:	e3a06000 	mov	r6, #0	; 0x0
        2560e8:	e58d6004 	str	r6, [sp, #4]
        2560ec:	e58d6000 	str	r6, [sp]
        2560f0:	e1a0100d 	mov	r1, sp
        2560f4:	eb662be3 	bl	1be1088 <$CompCompare>
        2560f8:	e3300000 	teq	r0, #0	; 0x0
        2560fc:	01a00006 	moveq	r0, r6
        256100:	0a00000f 	beq	256144 <TTimerEngine::QueueDelay(TSharedMemMsg *)+0x7c>
        256104:	e58440a0 	str	r4, [r4, #160]
        256108:	e59f0038 	ldr	r0, [pc, #38]	; 256148 <TTimerEngine::QueueDelay(TSharedMemMsg *)+0x80>
        25610c:	e58400a4 	str	r0, [r4, #164]
        256110:	eb04f26a 	bl	392ac0 <EnterAtomic>
        256114:	e594003c 	ldr	r0, [r4, #60]
        256118:	e3800c02 	orr	r0, r0, #512	; 0x200
        25611c:	e584003c 	str	r0, [r4, #60]
        256120:	e1a01004 	mov	r1, r4
        256124:	e1a00005 	mov	r0, r5
        256128:	eb62aff7 	bl	1b0210c <TTimerEngine::$Queue(TSharedMemMsg *)>
        25612c:	e1b05000 	movs	r5, r0
        256130:	0594003c 	ldreq	r0, [r4, #60]
        256134:	03c00c06 	biceq	r0, r0, #1536	; 0x600
        256138:	05a4003c 	streq	r0, [r4, #60]!
        25613c:	eb04f276 	bl	392b1c <ExitAtomic>
        256140:	e1a00005 	mov	r0, r5
        256144:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        256148:	01b0211c 	moveqs	r2, ip, lsl r1
    */
}

/**
 * Symbol: TTimerEngine::Queue(TSharedMemMsg *)
 * Address: 0025614c
 */
TTimerEngine::Queue(TSharedMemMsg *) {
    /*
        25614c:	e1a0c00d 	mov	ip, sp
        256150:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        256154:	e24cb004 	sub	fp, ip, #4	; 0x4
        256158:	e1a04000 	mov	r4, r0
        25615c:	e1a05001 	mov	r5, r1
        256160:	e3a08001 	mov	r8, #1	; 0x1
        256164:	eb04f255 	bl	392ac0 <EnterAtomic>
        256168:	e1a00004 	mov	r0, r4
        25616c:	eb66069f 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        256170:	e1b06000 	movs	r6, r0
        256174:	e2857028 	add	r7, r5, #40	; 0x28
        256178:	1a000004 	bne	256190 <TTimerEngine::Queue(TSharedMemMsg *)+0x44>
        25617c:	e1a00007 	mov	r0, r7
        256180:	eb62bc55 	bl	1b052dc <$SetAlarmAtomic(TTime &)>
        256184:	e1b08000 	movs	r8, r0
        256188:	1a000010 	bne	2561d0 <TTimerEngine::Queue(TSharedMemMsg *)+0x84>
        25618c:	ea00000c 	b	2561c4 <TTimerEngine::Queue(TSharedMemMsg *)+0x78>
        256190:	e1a00007 	mov	r0, r7
        256194:	e2861028 	add	r1, r6, #40	; 0x28
        256198:	eb662bba 	bl	1be1088 <$CompCompare>
        25619c:	e3500000 	cmp	r0, #0	; 0x0
        2561a0:	aa000013 	bge	2561f4 <TTimerEngine::Queue(TSharedMemMsg *)+0xa8>
        2561a4:	e1a00004 	mov	r0, r4
        2561a8:	eb660690 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        2561ac:	e1300006 	teq	r0, r6
        2561b0:	1a00000a 	bne	2561e0 <TTimerEngine::Queue(TSharedMemMsg *)+0x94>
        2561b4:	e1a00007 	mov	r0, r7
        2561b8:	eb62bc47 	bl	1b052dc <$SetAlarmAtomic(TTime &)>
        2561bc:	e1b08000 	movs	r8, r0
        2561c0:	1a000002 	bne	2561d0 <TTimerEngine::Queue(TSharedMemMsg *)+0x84>
        2561c4:	e1a00004 	mov	r0, r4
        2561c8:	eb6275ee 	bl	1af3988 <TTimerEngine::$Alarm(void)>
        2561cc:	ea000010 	b	256214 <TTimerEngine::Queue(TSharedMemMsg *)+0xc8>
        2561d0:	e1a01005 	mov	r1, r5
        2561d4:	e1a00004 	mov	r0, r4
        2561d8:	eb65e56a 	bl	1bcf788 <TDoubleQContainer::$AddToFront(void *)>
        2561dc:	ea00000c 	b	256214 <TTimerEngine::Queue(TSharedMemMsg *)+0xc8>
        2561e0:	e1a02005 	mov	r2, r5
        2561e4:	e1a01006 	mov	r1, r6
        2561e8:	e1a00004 	mov	r0, r4
        2561ec:	eb65e15e 	bl	1bce76c <TDoubleQContainer::$AddBefore(void *, void *)>
        2561f0:	ea000007 	b	256214 <TTimerEngine::Queue(TSharedMemMsg *)+0xc8>
        2561f4:	e1a01006 	mov	r1, r6
        2561f8:	e1a00004 	mov	r0, r4
        2561fc:	eb65f5fb 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        256200:	e1b06000 	movs	r6, r0
        256204:	1affffe1 	bne	256190 <TTimerEngine::Queue(TSharedMemMsg *)+0x44>
        256208:	e1a01005 	mov	r1, r5
        25620c:	e1a00004 	mov	r0, r4
        256210:	eb65e153 	bl	1bce764 <TDoubleQContainer::$Add(void *)>
        256214:	eb04f240 	bl	392b1c <ExitAtomic>
        256218:	e1a00008 	mov	r0, r8
        25621c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

