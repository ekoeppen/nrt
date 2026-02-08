#include "include/TBIOInterface.h"

/**
 * Symbol: TBIOInterface::MapFunctionToBit(unsigned char, unsigned char *)
 * Address: 0026b134
 */
TBIOInterface::MapFunctionToBit(unsigned char, unsigned char *) {
    /*
        26b134:	e20110ff 	and	r1, r1, #255	; 0xff
        26b138:	e3e03000 	mvn	r3, #0	; 0x0
        26b13c:	e3510020 	cmp	r1, #32	; 0x20
        26b140:	ba00000b 	blt	26b174 <TBIOInterface::MapFunctionToBit(unsigned char, unsigned char *)+0x40>
        26b144:	e3510030 	cmp	r1, #48	; 0x30
        26b148:	aa000009 	bge	26b174 <TBIOInterface::MapFunctionToBit(unsigned char, unsigned char *)+0x40>
        26b14c:	e2411020 	sub	r1, r1, #32	; 0x20
        26b150:	e20110ff 	and	r1, r1, #255	; 0xff
        26b154:	e0811181 	add	r1, r1, r1, lsl #3
        26b158:	e5900000 	ldr	r0, [r0]
        26b15c:	e0800101 	add	r0, r0, r1, lsl #2
        26b160:	e590100c 	ldr	r1, [r0, #12]	; fField12
        26b164:	e3310000 	teq	r1, #0	; 0x0
        26b168:	15900008 	ldrne	r0, [r0, #8]	; fField8
        26b16c:	15c20000 	strneb	r0, [r2]
        26b170:	13a03000 	movne	r3, #0	; 0x0
        26b174:	e1a00003 	mov	r0, r3
        26b178:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TBIOInterface::MapFunctionToBitMask(unsigned char, unsigned long *)
 * Address: 0026b17c
 */
TBIOInterface::MapFunctionToBitMask(unsigned char, unsigned long *) {
    /*
        26b17c:	e20110ff 	and	r1, r1, #255	; 0xff
        26b180:	e3e03000 	mvn	r3, #0	; 0x0
        26b184:	e3510020 	cmp	r1, #32	; 0x20
        26b188:	ba00000a 	blt	26b1b8 <TBIOInterface::MapFunctionToBitMask(unsigned char, unsigned long *)+0x3c>
        26b18c:	e3510030 	cmp	r1, #48	; 0x30
        26b190:	aa000008 	bge	26b1b8 <TBIOInterface::MapFunctionToBitMask(unsigned char, unsigned long *)+0x3c>
        26b194:	e2411020 	sub	r1, r1, #32	; 0x20
        26b198:	e20110ff 	and	r1, r1, #255	; 0xff
        26b19c:	e0811181 	add	r1, r1, r1, lsl #3
        26b1a0:	e5900000 	ldr	r0, [r0]
        26b1a4:	e0800101 	add	r0, r0, r1, lsl #2
        26b1a8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        26b1ac:	e5820000 	str	r0, [r2]
        26b1b0:	e3300000 	teq	r0, #0	; 0x0
        26b1b4:	13a03000 	movne	r3, #0	; 0x0
        26b1b8:	e1a00003 	mov	r0, r3
        26b1bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TBIOInterface::GetInterruptFlags(KeynesIntObject *)
 * Address: 0026b1c0
 */
TBIOInterface::GetInterruptFlags(KeynesIntObject *) {
    /*
        26b1c0:	e5d10008 	ldrb	r0, [r1, #8]	; fField8
        26b1c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TBIOInterface::UpdateInterruptFlags(KeynesIntObject *, unsigned long)
 * Address: 0026b1c8
 */
TBIOInterface::UpdateInterruptFlags(KeynesIntObject *, unsigned long) {
    /*
        26b1c8:	e1a0c00d 	mov	ip, sp
        26b1cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26b1d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b1d4:	e1a04000 	mov	r4, r0
        26b1d8:	e1a05002 	mov	r5, r2
        26b1dc:	e5c12008 	strb	r2, [r1, #8]	; fField8
        26b1e0:	e591600a 	ldr	r6, [r1, #10]
        26b1e4:	e1a06826 	mov	r6, r6, lsr #16
        26b1e8:	eb049e34 	bl	392ac0 <EnterAtomic>
        26b1ec:	e3a03011 	mov	r3, #17	; 0x11
        26b1f0:	e92d0008 	stmdb	sp!, {r3}
        26b1f4:	e2053001 	and	r3, r5, #1	; 0x1
        26b1f8:	e284104c 	add	r1, r4, #76	; 0x4c
        26b1fc:	e1a02006 	mov	r2, r6
        26b200:	e1a00004 	mov	r0, r4
        26b204:	eb600927 	bl	1a6d6a8 <TBIOInterface::$UpdateKeynesBit(unsigned long *, unsigned long, unsigned long, int)>
        26b208:	e28dd004 	add	sp, sp, #4	; 0x4
        26b20c:	e3a03012 	mov	r3, #18	; 0x12
        26b210:	e92d0008 	stmdb	sp!, {r3}
        26b214:	e2053002 	and	r3, r5, #2	; 0x2
        26b218:	e2841050 	add	r1, r4, #80	; 0x50
        26b21c:	e1a02006 	mov	r2, r6
        26b220:	e1a00004 	mov	r0, r4
        26b224:	eb60091f 	bl	1a6d6a8 <TBIOInterface::$UpdateKeynesBit(unsigned long *, unsigned long, unsigned long, int)>
        26b228:	e28dd004 	add	sp, sp, #4	; 0x4
        26b22c:	e3a03014 	mov	r3, #20	; 0x14
        26b230:	e92d0008 	stmdb	sp!, {r3}
        26b234:	e2053008 	and	r3, r5, #8	; 0x8
        26b238:	e2841054 	add	r1, r4, #84	; 0x54
        26b23c:	e1a02006 	mov	r2, r6
        26b240:	e1a00004 	mov	r0, r4
        26b244:	eb600917 	bl	1a6d6a8 <TBIOInterface::$UpdateKeynesBit(unsigned long *, unsigned long, unsigned long, int)>
        26b248:	e28dd004 	add	sp, sp, #4	; 0x4
        26b24c:	e3a03013 	mov	r3, #19	; 0x13
        26b250:	e92d0008 	stmdb	sp!, {r3}
        26b254:	e2053004 	and	r3, r5, #4	; 0x4
        26b258:	e2841048 	add	r1, r4, #72	; 0x48
        26b25c:	e1a02006 	mov	r2, r6
        26b260:	e1a00004 	mov	r0, r4
        26b264:	eb60090f 	bl	1a6d6a8 <TBIOInterface::$UpdateKeynesBit(unsigned long *, unsigned long, unsigned long, int)>
        26b268:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        26b26c:	ea049e2a 	b	392b1c <ExitAtomic>
    */
}

/**
 * Symbol: TBIOInterface::UpdateKeynesBit(unsigned long *, unsigned long, unsigned long, int)
 * Address: 0026b270
 */
TBIOInterface::UpdateKeynesBit(unsigned long *, unsigned long, unsigned long, int) {
    /*
        26b270:	e1a0c00d 	mov	ip, sp
        26b274:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26b278:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b27c:	e1a04001 	mov	r4, r1
        26b280:	e59b1004 	ldr	r1, [fp, #4]	; fField4
        26b284:	e594c000 	ldr	ip, [r4]
        26b288:	e3330000 	teq	r3, #0	; 0x0
        26b28c:	01cc5002 	biceq	r5, ip, r2
        26b290:	118c5002 	orrne	r5, ip, r2
        26b294:	e135000c 	teq	r5, ip
        26b298:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        26b29c:	e1a02005 	mov	r2, r5
        26b2a0:	eb60090a 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b2a4:	e5845000 	str	r5, [r4]
        26b2a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::MainKeynesInterrupt(void)
 * Address: 0026b2ac
 */
TBIOInterface::MainKeynesInterrupt(void) {
    /*
        26b2ac:	e1a0c00d 	mov	ip, sp
        26b2b0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        26b2b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b2b8:	e1a04000 	mov	r4, r0
        26b2bc:	e3a0100f 	mov	r1, #15	; 0xf
        26b2c0:	eb6008fe 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
        26b2c4:	e5941048 	ldr	r1, [r4, #72]	; fField72
        26b2c8:	e0105001 	ands	r5, r0, r1
        26b2cc:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        26b2d0:	e3a09001 	mov	r9, #1	; 0x1
        26b2d4:	e2848048 	add	r8, r4, #72	; 0x48
        26b2d8:	e1a02005 	mov	r2, r5
        26b2dc:	e1a00004 	mov	r0, r4
        26b2e0:	e3a01010 	mov	r1, #16	; 0x10
        26b2e4:	eb6008f9 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b2e8:	e3a06006 	mov	r6, #6	; 0x6
        26b2ec:	e1a07619 	mov	r7, r9, lsl r6
        26b2f0:	e1170005 	tst	r7, r5
        26b2f4:	0a000013 	beq	26b348 <TBIOInterface::MainKeynesInterrupt(void)+0x9c>
        26b2f8:	e2460006 	sub	r0, r6, #6	; 0x6
        26b2fc:	e0800080 	add	r0, r0, r0, lsl #1
        26b300:	e0840100 	add	r0, r4, r0, lsl #2
        26b304:	e5901058 	ldr	r1, [r0, #88]
        26b308:	e3310000 	teq	r1, #0	; 0x0
        26b30c:	0a000005 	beq	26b328 <TBIOInterface::MainKeynesInterrupt(void)+0x7c>
        26b310:	e590005c 	ldr	r0, [r0, #92]
        26b314:	e1a0e00f 	mov	lr, pc
        26b318:	e1a0f001 	mov	pc, r1
        26b31c:	e1d55007 	bics	r5, r5, r7
        26b320:	0a00000b 	beq	26b354 <TBIOInterface::MainKeynesInterrupt(void)+0xa8>
        26b324:	ea000007 	b	26b348 <TBIOInterface::MainKeynesInterrupt(void)+0x9c>
        26b328:	e3a03013 	mov	r3, #19	; 0x13
        26b32c:	e92d0008 	stmdb	sp!, {r3}
        26b330:	e1a01008 	mov	r1, r8
        26b334:	e1a02006 	mov	r2, r6
        26b338:	e1a00004 	mov	r0, r4
        26b33c:	e3a03000 	mov	r3, #0	; 0x0
        26b340:	eb6008d8 	bl	1a6d6a8 <TBIOInterface::$UpdateKeynesBit(unsigned long *, unsigned long, unsigned long, int)>
        26b344:	e28dd004 	add	sp, sp, #4	; 0x4
        26b348:	e2866001 	add	r6, r6, #1	; 0x1
        26b34c:	e3560010 	cmp	r6, #16	; 0x10
        26b350:	3affffe5 	bcc	26b2ec <TBIOInterface::MainKeynesInterrupt(void)+0x40>
        26b354:	e1a00004 	mov	r0, r4
        26b358:	e3a0100f 	mov	r1, #15	; 0xf
        26b35c:	eb6008d7 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
        26b360:	e5941048 	ldr	r1, [r4, #72]	; fField72
        26b364:	e0105001 	ands	r5, r0, r1
        26b368:	1affffda 	bne	26b2d8 <TBIOInterface::MainKeynesInterrupt(void)+0x2c>
        26b36c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::WriteDIOPins(unsigned char, unsigned char, unsigned char *)
 * Address: 0026b370
 */
TBIOInterface::WriteDIOPins(unsigned char, unsigned char, unsigned char *) {
    /*
        26b370:	e1a0c00d 	mov	ip, sp
        26b374:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26b378:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b37c:	e1a04000 	mov	r4, r0
        26b380:	e1a05003 	mov	r5, r3
        26b384:	e20110ff 	and	r1, r1, #255	; 0xff
        26b388:	e20260ff 	and	r6, r2, #255	; 0xff
        26b38c:	e24dd004 	sub	sp, sp, #4	; 0x4
        26b390:	e1a0200d 	mov	r2, sp
        26b394:	eb6008bb 	bl	1a6d688 <TBIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26b398:	e1a07000 	mov	r7, r0
        26b39c:	e3700001 	cmn	r0, #1	; 0x1
        26b3a0:	1a000001 	bne	26b3ac <TBIOInterface::WriteDIOPins(unsigned char, unsigned char, unsigned char *)+0x3c>
        26b3a4:	e1a00007 	mov	r0, r7
        26b3a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        26b3ac:	eb049dc3 	bl	392ac0 <EnterAtomic>
        26b3b0:	e1a00004 	mov	r0, r4
        26b3b4:	e3a0100e 	mov	r1, #14	; 0xe
        26b3b8:	eb6008c2 	bl	1a6d6c8 <TBIOInterface::$BIOReadCommand(int)>
        26b3bc:	e1a00004 	mov	r0, r4
        26b3c0:	eb6008c1 	bl	1a6d6cc <TBIOInterface::$BIOReadCommandData(void)>
        26b3c4:	e1a00800 	mov	r0, r0, lsl #16
        26b3c8:	e1a00820 	mov	r0, r0, lsr #16
        26b3cc:	e3360000 	teq	r6, #0	; 0x0
        26b3d0:	e59d1000 	ldr	r1, [sp]
        26b3d4:	01c06001 	biceq	r6, r0, r1
        26b3d8:	11806001 	orrne	r6, r0, r1
        26b3dc:	e1360000 	teq	r6, r0
        26b3e0:	03a00000 	moveq	r0, #0	; 0x0
        26b3e4:	0a000004 	beq	26b3fc <TBIOInterface::WriteDIOPins(unsigned char, unsigned char, unsigned char *)+0x8c>
        26b3e8:	e1a02006 	mov	r2, r6
        26b3ec:	e1a00004 	mov	r0, r4
        26b3f0:	e3a0100e 	mov	r1, #14	; 0xe
        26b3f4:	eb6008b5 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b3f8:	e3a00001 	mov	r0, #1	; 0x1
        26b3fc:	e5c50000 	strb	r0, [r5]
        26b400:	e5a46038 	str	r6, [r4, #56]!	; fField56
        26b404:	eb049dc4 	bl	392b1c <ExitAtomic>
        26b408:	eaffffe5 	b	26b3a4 <TBIOInterface::WriteDIOPins(unsigned char, unsigned char, unsigned char *)+0x34>
    */
}

/**
 * Symbol: TBIOInterface::WriteDIODir(unsigned char, unsigned char, unsigned char *)
 * Address: 0026b40c
 */
TBIOInterface::WriteDIODir(unsigned char, unsigned char, unsigned char *) {
    /*
        26b40c:	e1a0c00d 	mov	ip, sp
        26b410:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26b414:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b418:	e1a04000 	mov	r4, r0
        26b41c:	e1a05003 	mov	r5, r3
        26b420:	e20110ff 	and	r1, r1, #255	; 0xff
        26b424:	e20260ff 	and	r6, r2, #255	; 0xff
        26b428:	e24dd004 	sub	sp, sp, #4	; 0x4
        26b42c:	e1a0200d 	mov	r2, sp
        26b430:	eb600894 	bl	1a6d688 <TBIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26b434:	e1a07000 	mov	r7, r0
        26b438:	e3700001 	cmn	r0, #1	; 0x1
        26b43c:	1a000001 	bne	26b448 <TBIOInterface::WriteDIODir(unsigned char, unsigned char, unsigned char *)+0x3c>
        26b440:	e1a00007 	mov	r0, r7
        26b444:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        26b448:	eb049d9c 	bl	392ac0 <EnterAtomic>
        26b44c:	e1a00004 	mov	r0, r4
        26b450:	e3a0100c 	mov	r1, #12	; 0xc
        26b454:	eb60089b 	bl	1a6d6c8 <TBIOInterface::$BIOReadCommand(int)>
        26b458:	e1a00004 	mov	r0, r4
        26b45c:	eb60089a 	bl	1a6d6cc <TBIOInterface::$BIOReadCommandData(void)>
        26b460:	e1a00800 	mov	r0, r0, lsl #16
        26b464:	e1a00820 	mov	r0, r0, lsr #16
        26b468:	e3360000 	teq	r6, #0	; 0x0
        26b46c:	e59d1000 	ldr	r1, [sp]
        26b470:	01c06001 	biceq	r6, r0, r1
        26b474:	11806001 	orrne	r6, r0, r1
        26b478:	e1360000 	teq	r6, r0
        26b47c:	03a00000 	moveq	r0, #0	; 0x0
        26b480:	0a000004 	beq	26b498 <TBIOInterface::WriteDIODir(unsigned char, unsigned char, unsigned char *)+0x8c>
        26b484:	e1a02006 	mov	r2, r6
        26b488:	e1a00004 	mov	r0, r4
        26b48c:	e3a0100c 	mov	r1, #12	; 0xc
        26b490:	eb60088e 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b494:	e3a00001 	mov	r0, #1	; 0x1
        26b498:	e5c50000 	strb	r0, [r5]
        26b49c:	e5a4603c 	str	r6, [r4, #60]!	; fField60
        26b4a0:	eb049d9d 	bl	392b1c <ExitAtomic>
        26b4a4:	eaffffe5 	b	26b440 <TBIOInterface::WriteDIODir(unsigned char, unsigned char, unsigned char *)+0x34>
    */
}

/**
 * Symbol: TBIOInterface::WriteDIOPullup(unsigned char, unsigned char, unsigned char *)
 * Address: 0026b4a8
 */
TBIOInterface::WriteDIOPullup(unsigned char, unsigned char, unsigned char *) {
    /*
        26b4a8:	e1a0c00d 	mov	ip, sp
        26b4ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26b4b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b4b4:	e1a04000 	mov	r4, r0
        26b4b8:	e1a05003 	mov	r5, r3
        26b4bc:	e20110ff 	and	r1, r1, #255	; 0xff
        26b4c0:	e20260ff 	and	r6, r2, #255	; 0xff
        26b4c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        26b4c8:	e1a0200d 	mov	r2, sp
        26b4cc:	eb60086d 	bl	1a6d688 <TBIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26b4d0:	e1a07000 	mov	r7, r0
        26b4d4:	e3700001 	cmn	r0, #1	; 0x1
        26b4d8:	1a000001 	bne	26b4e4 <TBIOInterface::WriteDIOPullup(unsigned char, unsigned char, unsigned char *)+0x3c>
        26b4dc:	e1a00007 	mov	r0, r7
        26b4e0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        26b4e4:	eb049d75 	bl	392ac0 <EnterAtomic>
        26b4e8:	e1a00004 	mov	r0, r4
        26b4ec:	e3a0100d 	mov	r1, #13	; 0xd
        26b4f0:	eb600874 	bl	1a6d6c8 <TBIOInterface::$BIOReadCommand(int)>
        26b4f4:	e1a00004 	mov	r0, r4
        26b4f8:	eb600873 	bl	1a6d6cc <TBIOInterface::$BIOReadCommandData(void)>
        26b4fc:	e1a00800 	mov	r0, r0, lsl #16
        26b500:	e1a00820 	mov	r0, r0, lsr #16
        26b504:	e3360000 	teq	r6, #0	; 0x0
        26b508:	e59d1000 	ldr	r1, [sp]
        26b50c:	01c06001 	biceq	r6, r0, r1
        26b510:	11806001 	orrne	r6, r0, r1
        26b514:	e1360000 	teq	r6, r0
        26b518:	03a00000 	moveq	r0, #0	; 0x0
        26b51c:	0a000004 	beq	26b534 <TBIOInterface::WriteDIOPullup(unsigned char, unsigned char, unsigned char *)+0x8c>
        26b520:	e1a02006 	mov	r2, r6
        26b524:	e1a00004 	mov	r0, r4
        26b528:	e3a0100d 	mov	r1, #13	; 0xd
        26b52c:	eb600867 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b530:	e3a00001 	mov	r0, #1	; 0x1
        26b534:	e5c50000 	strb	r0, [r5]
        26b538:	e5a46040 	str	r6, [r4, #64]!	; fField64
        26b53c:	eb049d76 	bl	392b1c <ExitAtomic>
        26b540:	eaffffe5 	b	26b4dc <TBIOInterface::WriteDIOPullup(unsigned char, unsigned char, unsigned char *)+0x34>
    */
}

/**
 * Symbol: TBIOInterface::ReadDIOPins(unsigned char, unsigned long *)
 * Address: 0026b544
 */
TBIOInterface::ReadDIOPins(unsigned char, unsigned long *) {
    /*
        26b544:	e1a0c00d 	mov	ip, sp
        26b548:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26b54c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b550:	e1a04000 	mov	r4, r0
        26b554:	e1a05002 	mov	r5, r2
        26b558:	e20110ff 	and	r1, r1, #255	; 0xff
        26b55c:	e24dd004 	sub	sp, sp, #4	; 0x4
        26b560:	e1a0200d 	mov	r2, sp
        26b564:	eb600847 	bl	1a6d688 <TBIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26b568:	e1a06000 	mov	r6, r0
        26b56c:	e3700001 	cmn	r0, #1	; 0x1
        26b570:	0a00000e 	beq	26b5b0 <TBIOInterface::ReadDIOPins(unsigned char, unsigned long *)+0x6c>
        26b574:	eb049d51 	bl	392ac0 <EnterAtomic>
        26b578:	e1a00004 	mov	r0, r4
        26b57c:	e3a0100e 	mov	r1, #14	; 0xe
        26b580:	eb600850 	bl	1a6d6c8 <TBIOInterface::$BIOReadCommand(int)>
        26b584:	e1a00004 	mov	r0, r4
        26b588:	eb60084f 	bl	1a6d6cc <TBIOInterface::$BIOReadCommandData(void)>
        26b58c:	e1a00800 	mov	r0, r0, lsl #16
        26b590:	e1a00820 	mov	r0, r0, lsr #16
        26b594:	e5850000 	str	r0, [r5]
        26b598:	e5a40038 	str	r0, [r4, #56]!	; fField56
        26b59c:	e5951000 	ldr	r1, [r5]
        26b5a0:	e59d0000 	ldr	r0, [sp]
        26b5a4:	e0010000 	and	r0, r1, r0
        26b5a8:	e5850000 	str	r0, [r5]
        26b5ac:	eb049d5a 	bl	392b1c <ExitAtomic>
        26b5b0:	e1a00006 	mov	r0, r6
        26b5b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::BIOReadRegister(int)
 * Address: 0026b5b8
 */
TBIOInterface::BIOReadRegister(int) {
    /*
        26b5b8:	e1a0c00d 	mov	ip, sp
        26b5bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26b5c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b5c4:	e1a04000 	mov	r4, r0
        26b5c8:	e1a05001 	mov	r5, r1
        26b5cc:	eb049d3b 	bl	392ac0 <EnterAtomic>
        26b5d0:	e1a01005 	mov	r1, r5
        26b5d4:	e1a00004 	mov	r0, r4
        26b5d8:	eb60083a 	bl	1a6d6c8 <TBIOInterface::$BIOReadCommand(int)>
        26b5dc:	e1a00004 	mov	r0, r4
        26b5e0:	eb600839 	bl	1a6d6cc <TBIOInterface::$BIOReadCommandData(void)>
        26b5e4:	e1a04800 	mov	r4, r0, lsl #16
        26b5e8:	e1a04824 	mov	r4, r4, lsr #16
        26b5ec:	eb049d4a 	bl	392b1c <ExitAtomic>
        26b5f0:	e1a00004 	mov	r0, r4
        26b5f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::BIOUnSafeReadRegister(int)
 * Address: 0026b5f8
 */
TBIOInterface::BIOUnSafeReadRegister(int) {
    /*
        26b5f8:	e1a0c00d 	mov	ip, sp
        26b5fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26b600:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b604:	e1a04000 	mov	r4, r0
        26b608:	eb60082e 	bl	1a6d6c8 <TBIOInterface::$BIOReadCommand(int)>
        26b60c:	e1a00004 	mov	r0, r4
        26b610:	eb60082d 	bl	1a6d6cc <TBIOInterface::$BIOReadCommandData(void)>
        26b614:	e1a00800 	mov	r0, r0, lsl #16
        26b618:	e1a00820 	mov	r0, r0, lsr #16
        26b61c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::Init(void)
 * Address: 0026b620
 */
TBIOInterface::Init(void) {
    /*
        26b620:	e1a0c00d 	mov	ip, sp
        26b624:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26b628:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b62c:	e1a04000 	mov	r4, r0
        26b630:	e24dd004 	sub	sp, sp, #4	; 0x4
        26b634:	e59f0238 	ldr	r0, [pc, #238]	; 26b874 <TBIOInterface::Init(void)+0x254>
        26b638:	e5804000 	str	r4, [r0]
        26b63c:	e294002c 	adds	r0, r4, #44	; 0x2c
        26b640:	1b664a21 	blne	1bfdecc <TDelayTimer::$__ct(void)>
        26b644:	e3a0a000 	mov	sl, #0	; 0x0
        26b648:	e584a044 	str	sl, [r4, #68]	; fField68
        26b64c:	e3a01000 	mov	r1, #0	; 0x0
        26b650:	e3a03001 	mov	r3, #1	; 0x1
        26b654:	e584a048 	str	sl, [r4, #72]	; fField72
        26b658:	e2812006 	add	r2, r1, #6	; 0x6
        26b65c:	e0810081 	add	r0, r1, r1, lsl #1
        26b660:	e0840100 	add	r0, r4, r0, lsl #2
        26b664:	e580a058 	str	sl, [r0, #88]
        26b668:	e580a05c 	str	sl, [r0, #92]
        26b66c:	e5c0a060 	strb	sl, [r0, #96]
        26b670:	e5c02061 	strb	r2, [r0, #97]
        26b674:	e1a02213 	mov	r2, r3, lsl r2
        26b678:	e5c02063 	strb	r2, [r0, #99]
        26b67c:	e1a02422 	mov	r2, r2, lsr #8
        26b680:	e5c02062 	strb	r2, [r0, #98]
        26b684:	e2811001 	add	r1, r1, #1	; 0x1
        26b688:	e351000a 	cmp	r1, #10	; 0xa
        26b68c:	bafffff1 	blt	26b658 <TBIOInterface::Init(void)+0x38>
        26b690:	e3a00912 	mov	r0, #294912	; 0x48000
        26b694:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26b698:	e5840004 	str	r0, [r4, #4]	; fField4
        26b69c:	e2400902 	sub	r0, r0, #32768	; 0x8000
        26b6a0:	e5840008 	str	r0, [r4, #8]	; fField8
        26b6a4:	e59f01cc 	ldr	r0, [pc, #1cc]	; 26b878 <TBIOInterface::Init(void)+0x258>
        26b6a8:	e584000c 	str	r0, [r4, #12]	; fField12
        26b6ac:	e2800b01 	add	r0, r0, #1024	; 0x400
        26b6b0:	e5840010 	str	r0, [r4, #16]	; fField16
        26b6b4:	e3a00805 	mov	r0, #327680	; 0x50000
        26b6b8:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26b6bc:	e5840014 	str	r0, [r4, #20]	; fField20
        26b6c0:	e2400a06 	sub	r0, r0, #24576	; 0x6000
        26b6c4:	e5840018 	str	r0, [r4, #24]	; fField24
        26b6c8:	e59f01ac 	ldr	r0, [pc, #1ac]	; 26b87c <TBIOInterface::Init(void)+0x25c>
        26b6cc:	e584001c 	str	r0, [r4, #28]	; fField28
        26b6d0:	e2400b01 	sub	r0, r0, #1024	; 0x400
        26b6d4:	e5840020 	str	r0, [r4, #32]	; fField32
        26b6d8:	e59f01a0 	ldr	r0, [pc, #1a0]	; 26b880 <TBIOInterface::Init(void)+0x260>
        26b6dc:	e5840024 	str	r0, [r4, #36]	; fField36
        26b6e0:	e2800b02 	add	r0, r0, #2048	; 0x800
        26b6e4:	e5840028 	str	r0, [r4, #40]	; fField40
        26b6e8:	e3a0001c 	mov	r0, #28	; 0x1c
        26b6ec:	eb667fbf 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
        26b6f0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        26b6f4:	e580a000 	str	sl, [r0]
        26b6f8:	e1a00004 	mov	r0, r4
        26b6fc:	e3a0204e 	mov	r2, #78	; 0x4e
        26b700:	e3a0100b 	mov	r1, #11	; 0xb
        26b704:	eb6007f1 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b708:	e1a0100d 	mov	r1, sp
        26b70c:	e59f0170 	ldr	r0, [pc, #170]	; 26b884 <TBIOInterface::Init(void)+0x264>
        26b710:	eb66565e 	bl	1c01090 <$GetLastRExConfigEntry>
        26b714:	e5840000 	str	r0, [r4]
        26b718:	e1a03000 	mov	r3, r0
        26b71c:	e3a0e000 	mov	lr, #0	; 0x0
        26b720:	e1a0500e 	mov	r5, lr
        26b724:	e1a0600e 	mov	r6, lr
        26b728:	e1a0700e 	mov	r7, lr
        26b72c:	e1a0800e 	mov	r8, lr
        26b730:	e1a0900e 	mov	r9, lr
        26b734:	e3a02000 	mov	r2, #0	; 0x0
        26b738:	e0820182 	add	r0, r2, r2, lsl #3
        26b73c:	e0830100 	add	r0, r3, r0, lsl #2
        26b740:	e590100c 	ldr	r1, [r0, #12]	; fField12
        26b744:	e3310000 	teq	r1, #0	; 0x0
        26b748:	0a00001d 	beq	26b7c4 <TBIOInterface::Init(void)+0x1a4>
        26b74c:	e590c010 	ldr	ip, [r0, #16]	; fField16
        26b750:	e33c0000 	teq	ip, #0	; 0x0
        26b754:	118ec001 	orrne	ip, lr, r1
        26b758:	11a0e80c 	movne	lr, ip, lsl #16
        26b75c:	11a0e82e 	movne	lr, lr, lsr #16
        26b760:	e590c014 	ldr	ip, [r0, #20]	; fField20
        26b764:	e33c0000 	teq	ip, #0	; 0x0
        26b768:	1189c001 	orrne	ip, r9, r1
        26b76c:	11a0980c 	movne	r9, ip, lsl #16
        26b770:	11a09829 	movne	r9, r9, lsr #16
        26b774:	e590c024 	ldr	ip, [r0, #36]	; fField36
        26b778:	e33c0000 	teq	ip, #0	; 0x0
        26b77c:	1188c001 	orrne	ip, r8, r1
        26b780:	11a0880c 	movne	r8, ip, lsl #16
        26b784:	11a08828 	movne	r8, r8, lsr #16
        26b788:	e590c01c 	ldr	ip, [r0, #28]	; fField28
        26b78c:	e33c0000 	teq	ip, #0	; 0x0
        26b790:	1187c001 	orrne	ip, r7, r1
        26b794:	11a0780c 	movne	r7, ip, lsl #16
        26b798:	11a07827 	movne	r7, r7, lsr #16
        26b79c:	e590c020 	ldr	ip, [r0, #32]	; fField32
        26b7a0:	e33c0000 	teq	ip, #0	; 0x0
        26b7a4:	1186c001 	orrne	ip, r6, r1
        26b7a8:	11a0680c 	movne	r6, ip, lsl #16
        26b7ac:	11a06826 	movne	r6, r6, lsr #16
        26b7b0:	e5900018 	ldr	r0, [r0, #24]	; fField24
        26b7b4:	e3300000 	teq	r0, #0	; 0x0
        26b7b8:	11850001 	orrne	r0, r5, r1
        26b7bc:	11a05800 	movne	r5, r0, lsl #16
        26b7c0:	11a05825 	movne	r5, r5, lsr #16
        26b7c4:	e2822001 	add	r2, r2, #1	; 0x1
        26b7c8:	e3520010 	cmp	r2, #16	; 0x10
        26b7cc:	baffffd9 	blt	26b738 <TBIOInterface::Init(void)+0x118>
        26b7d0:	e1a0200e 	mov	r2, lr
        26b7d4:	e1a00004 	mov	r0, r4
        26b7d8:	e3a0100c 	mov	r1, #12	; 0xc
        26b7dc:	eb6007bb 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b7e0:	e1a00004 	mov	r0, r4
        26b7e4:	e3a0100c 	mov	r1, #12	; 0xc
        26b7e8:	eb6007b4 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
        26b7ec:	e1a02008 	mov	r2, r8
        26b7f0:	e584003c 	str	r0, [r4, #60]	; fField60
        26b7f4:	e1a00004 	mov	r0, r4
        26b7f8:	e3a0100e 	mov	r1, #14	; 0xe
        26b7fc:	eb6007b3 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b800:	e1a00004 	mov	r0, r4
        26b804:	e3a0100e 	mov	r1, #14	; 0xe
        26b808:	eb6007ac 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
        26b80c:	e1a02009 	mov	r2, r9
        26b810:	e5840038 	str	r0, [r4, #56]	; fField56
        26b814:	e1a00004 	mov	r0, r4
        26b818:	e3a0100d 	mov	r1, #13	; 0xd
        26b81c:	eb6007ab 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b820:	e1a00004 	mov	r0, r4
        26b824:	e3a0100d 	mov	r1, #13	; 0xd
        26b828:	eb6007a4 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
        26b82c:	e1a02007 	mov	r2, r7
        26b830:	e5840040 	str	r0, [r4, #64]	; fField64
        26b834:	e1a00004 	mov	r0, r4
        26b838:	e3a01011 	mov	r1, #17	; 0x11
        26b83c:	eb6007a3 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b840:	e1a02006 	mov	r2, r6
        26b844:	e584704c 	str	r7, [r4, #76]	; fField76
        26b848:	e1a00004 	mov	r0, r4
        26b84c:	e3a01012 	mov	r1, #18	; 0x12
        26b850:	eb60079e 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b854:	e1a02005 	mov	r2, r5
        26b858:	e5846050 	str	r6, [r4, #80]	; fField80
        26b85c:	e1a00004 	mov	r0, r4
        26b860:	e3a01014 	mov	r1, #20	; 0x14
        26b864:	eb600799 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26b868:	e1a0000a 	mov	r0, sl
        26b86c:	e5a45054 	str	r5, [r4, #84]!	; fField84
        26b870:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        26b874:	0c100f68 	ldceq	15, cr0, [r0], -#416
        26b878:	0f048800 	swieq	0x00048800
        26b87c:	0f04a800 	swieq	0x0004a800
        26b880:	0f04ac00 	swieq	0x0004ac00
        26b884:	64696f20 	strvsbt	r6, [r9], -#3872
    */
}

/**
 * Symbol: TBIOInterface::BIOReadCommand(int)
 * Address: 0026b888
 */
TBIOInterface::BIOReadCommand(int) {
    /*
        26b888:	e1a0c00d 	mov	ip, sp
        26b88c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26b890:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b894:	e3a04000 	mov	r4, #0	; 0x0
        26b898:	e3a02805 	mov	r2, #327680	; 0x50000
        26b89c:	e282240f 	add	r2, r2, #251658240	; 0xf000000
        26b8a0:	e0825501 	add	r5, r2, r1, lsl #10
        26b8a4:	e3a03e19 	mov	r3, #400	; 0x190
        26b8a8:	e3a02000 	mov	r2, #0	; 0x0
        26b8ac:	e3a01a01 	mov	r1, #4096	; 0x1000
        26b8b0:	eb60078a 	bl	1a6d6e0 <TBIOInterface::$WaitBIOStatus(unsigned long, unsigned long, unsigned long)>
        26b8b4:	e3300000 	teq	r0, #0	; 0x0
        26b8b8:	15950000 	ldrne	r0, [r5]
        26b8bc:	13a04001 	movne	r4, #1	; 0x1
        26b8c0:	e1a00004 	mov	r0, r4
        26b8c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::BIOReadCommandData(void)
 * Address: 0026b8c8
 */
TBIOInterface::BIOReadCommandData(void) {
    /*
        26b8c8:	e1a0c00d 	mov	ip, sp
        26b8cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26b8d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b8d4:	e1a04000 	mov	r4, r0
        26b8d8:	e59f5028 	ldr	r5, [pc, #28]	; 26b908 <TBIOInterface::BIOReadCommandData(void)+0x40>	; fField28
        26b8dc:	e3a03e19 	mov	r3, #400	; 0x190
        26b8e0:	e3a02080 	mov	r2, #128	; 0x80
        26b8e4:	e3a01080 	mov	r1, #128	; 0x80
        26b8e8:	eb60077c 	bl	1a6d6e0 <TBIOInterface::$WaitBIOStatus(unsigned long, unsigned long, unsigned long)>
        26b8ec:	e3300000 	teq	r0, #0	; 0x0
        26b8f0:	15b40010 	ldrne	r0, [r4, #16]!	; fField16
        26b8f4:	15900000 	ldrne	r0, [r0]
        26b8f8:	11a05800 	movne	r5, r0, lsl #16
        26b8fc:	11a05825 	movne	r5, r5, lsr #16
        26b900:	e1a00005 	mov	r0, r5
        26b904:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        26b908:	feedface 	cdp2	10, 14, cr15, cr13, cr14, {6}
    */
}

/**
 * Symbol: TBIOInterface::BIOWriteCommand(int, unsigned long)
 * Address: 0026b90c
 */
TBIOInterface::BIOWriteCommand(int, unsigned long) {
    /*
        26b90c:	e1a0c00d 	mov	ip, sp
        26b910:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26b914:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b918:	e1a05000 	mov	r5, r0
        26b91c:	e1a04002 	mov	r4, r2
        26b920:	e3a06000 	mov	r6, #0	; 0x0
        26b924:	e3a00805 	mov	r0, #327680	; 0x50000
        26b928:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26b92c:	e0807501 	add	r7, r0, r1, lsl #10
        26b930:	eb049c62 	bl	392ac0 <EnterAtomic>
        26b934:	e1a00005 	mov	r0, r5
        26b938:	e3a03e19 	mov	r3, #400	; 0x190
        26b93c:	e3a02000 	mov	r2, #0	; 0x0
        26b940:	e3a01a01 	mov	r1, #4096	; 0x1000
        26b944:	eb600765 	bl	1a6d6e0 <TBIOInterface::$WaitBIOStatus(unsigned long, unsigned long, unsigned long)>
        26b948:	e3300000 	teq	r0, #0	; 0x0
        26b94c:	15874000 	strne	r4, [r7]
        26b950:	13a06001 	movne	r6, #1	; 0x1
        26b954:	eb049c70 	bl	392b1c <ExitAtomic>
        26b958:	e1a00006 	mov	r0, r6
        26b95c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::BIOUnSafeWriteCommand(int, unsigned long)
 * Address: 0026b960
 */
TBIOInterface::BIOUnSafeWriteCommand(int, unsigned long) {
    /*
        26b960:	e1a0c00d 	mov	ip, sp
        26b964:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26b968:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b96c:	e1a04002 	mov	r4, r2
        26b970:	e3a05000 	mov	r5, #0	; 0x0
        26b974:	e3a02805 	mov	r2, #327680	; 0x50000
        26b978:	e282240f 	add	r2, r2, #251658240	; 0xf000000
        26b97c:	e0826501 	add	r6, r2, r1, lsl #10
        26b980:	e3a03e19 	mov	r3, #400	; 0x190
        26b984:	e3a02000 	mov	r2, #0	; 0x0
        26b988:	e3a01a01 	mov	r1, #4096	; 0x1000
        26b98c:	eb600753 	bl	1a6d6e0 <TBIOInterface::$WaitBIOStatus(unsigned long, unsigned long, unsigned long)>
        26b990:	e3300000 	teq	r0, #0	; 0x0
        26b994:	15864000 	strne	r4, [r6]
        26b998:	13a05001 	movne	r5, #1	; 0x1
        26b99c:	e1a00005 	mov	r0, r5
        26b9a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::BIOFIFOWriteCommand(int, unsigned long)
 * Address: 0026b9a4
 */
TBIOInterface::BIOFIFOWriteCommand(int, unsigned long) {
    /*
        26b9a4:	e1a0c00d 	mov	ip, sp
        26b9a8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26b9ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        26b9b0:	e1a05000 	mov	r5, r0
        26b9b4:	e1a04002 	mov	r4, r2
        26b9b8:	e3a06000 	mov	r6, #0	; 0x0
        26b9bc:	e3a007c1 	mov	r0, #50593792	; 0x3040000
        26b9c0:	e2800303 	add	r0, r0, #201326592	; 0xc000000
        26b9c4:	e0807501 	add	r7, r0, r1, lsl #10
        26b9c8:	eb049c3c 	bl	392ac0 <EnterAtomic>
        26b9cc:	e1a00005 	mov	r0, r5
        26b9d0:	e3a03efa 	mov	r3, #4000	; 0xfa0
        26b9d4:	e3a02000 	mov	r2, #0	; 0x0
        26b9d8:	e3a01002 	mov	r1, #2	; 0x2
        26b9dc:	eb60073f 	bl	1a6d6e0 <TBIOInterface::$WaitBIOStatus(unsigned long, unsigned long, unsigned long)>
        26b9e0:	e3300000 	teq	r0, #0	; 0x0
        26b9e4:	15874000 	strne	r4, [r7]
        26b9e8:	13a06001 	movne	r6, #1	; 0x1
        26b9ec:	eb049c4a 	bl	392b1c <ExitAtomic>
        26b9f0:	e1a00006 	mov	r0, r6
        26b9f4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::ReadBIOStatus(unsigned long)
 * Address: 0026b9f8
 */
TBIOInterface::ReadBIOStatus(unsigned long) {
    /*
        26b9f8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        26b9fc:	e5900000 	ldr	r0, [r0]
        26ba00:	e0000001 	and	r0, r0, r1
        26ba04:	e1a00980 	mov	r0, r0, lsl #19
        26ba08:	e1a009a0 	mov	r0, r0, lsr #19
        26ba0c:	e1300001 	teq	r0, r1
        26ba10:	13a00000 	movne	r0, #0	; 0x0
        26ba14:	03a00001 	moveq	r0, #1	; 0x1
        26ba18:	e20000ff 	and	r0, r0, #255	; 0xff
        26ba1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TBIOInterface::WaitBIOStatus(unsigned long, unsigned long, unsigned long)
 * Address: 0026ba20
 */
TBIOInterface::WaitBIOStatus(unsigned long, unsigned long, unsigned long) {
    /*
        26ba20:	e1a0c00d 	mov	ip, sp
        26ba24:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        26ba28:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ba2c:	e1a04000 	mov	r4, r0
        26ba30:	e1a06001 	mov	r6, r1
        26ba34:	e1a05002 	mov	r5, r2
        26ba38:	e1a01003 	mov	r1, r3
        26ba3c:	e3a07000 	mov	r7, #0	; 0x0
        26ba40:	e3a08001 	mov	r8, #1	; 0x1
        26ba44:	e280002c 	add	r0, r0, #44	; 0x2c
        26ba48:	e1a09000 	mov	r9, r0
        26ba4c:	eb664923 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
        26ba50:	ea000002 	b	26ba60 <TBIOInterface::WaitBIOStatus(unsigned long, unsigned long, unsigned long)+0x40>
        26ba54:	e1a00009 	mov	r0, r9
        26ba58:	eb664922 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
        26ba5c:	e1a07000 	mov	r7, r0
        26ba60:	e5940004 	ldr	r0, [r4, #4]	; fField4
        26ba64:	e5900000 	ldr	r0, [r0]
        26ba68:	e0000006 	and	r0, r0, r6
        26ba6c:	e1a00980 	mov	r0, r0, lsl #19
        26ba70:	e03509a0 	eors	r0, r5, r0, lsr #19
        26ba74:	0a000001 	beq	26ba80 <TBIOInterface::WaitBIOStatus(unsigned long, unsigned long, unsigned long)+0x60>
        26ba78:	e3370000 	teq	r7, #0	; 0x0
        26ba7c:	0afffff4 	beq	26ba54 <TBIOInterface::WaitBIOStatus(unsigned long, unsigned long, unsigned long)+0x34>
        26ba80:	e3370000 	teq	r7, #0	; 0x0
        26ba84:	0a000007 	beq	26baa8 <TBIOInterface::WaitBIOStatus(unsigned long, unsigned long, unsigned long)+0x88>
        26ba88:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        26ba8c:	e5900000 	ldr	r0, [r0]
        26ba90:	e0000006 	and	r0, r0, r6
        26ba94:	e1a00980 	mov	r0, r0, lsl #19
        26ba98:	e03509a0 	eors	r0, r5, r0, lsr #19
        26ba9c:	13a00000 	movne	r0, #0	; 0x0
        26baa0:	03a00001 	moveq	r0, #1	; 0x1
        26baa4:	e20080ff 	and	r8, r0, #255	; 0xff
        26baa8:	e1a00008 	mov	r0, r8
        26baac:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::SoftReset(void)
 * Address: 0026bab0
 */
TBIOInterface::SoftReset(void) {
    /*
        26bab0:	e1a0c00d 	mov	ip, sp
        26bab4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26bab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        26babc:	e1a04000 	mov	r4, r0
        26bac0:	e59f001c 	ldr	r0, [pc, #1c]	; 26bae4 <TBIOInterface::SoftReset(void)+0x34>
        26bac4:	e5d00000 	ldrb	r0, [r0]
        26bac8:	e3300000 	teq	r0, #0	; 0x0
        26bacc:	0a000005 	beq	26bae8 <TBIOInterface::SoftReset(void)+0x38>
        26bad0:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        26bad4:	e5901000 	ldr	r1, [r0]
        26bad8:	e3c1100c 	bic	r1, r1, #12	; 0xc
        26badc:	e5801000 	str	r1, [r0]
        26bae0:	ea00000c 	b	26bb18 <TBIOInterface::SoftReset(void)+0x68>
        26bae4:	0c100e80 	ldceq	14, cr0, [r0], -#512
        26bae8:	e1a00004 	mov	r0, r4
        26baec:	e3a02000 	mov	r2, #0	; 0x0
        26baf0:	e3a01002 	mov	r1, #2	; 0x2
        26baf4:	eb6006f5 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26baf8:	e1a00004 	mov	r0, r4
        26bafc:	e3a02000 	mov	r2, #0	; 0x0
        26bb00:	e3a01002 	mov	r1, #2	; 0x2
        26bb04:	eb6006f1 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26bb08:	e1a00004 	mov	r0, r4
        26bb0c:	e3a02000 	mov	r2, #0	; 0x0
        26bb10:	e3a01002 	mov	r1, #2	; 0x2
        26bb14:	eb6006ed 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26bb18:	e3a00000 	mov	r0, #0	; 0x0
        26bb1c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)
 * Address: 0026bb20
 */
TBIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long) {
    /*
        26bb20:	e1a0c00d 	mov	ip, sp
        26bb24:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        26bb28:	e24cb004 	sub	fp, ip, #4	; 0x4
        26bb2c:	e1a04000 	mov	r4, r0
        26bb30:	e1a06002 	mov	r6, r2
        26bb34:	e1a05003 	mov	r5, r3
        26bb38:	e20110ff 	and	r1, r1, #255	; 0xff
        26bb3c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        26bb40:	e24dd004 	sub	sp, sp, #4	; 0x4
        26bb44:	e3510020 	cmp	r1, #32	; 0x20
        26bb48:	ba000005 	blt	26bb64 <TBIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0x44>
        26bb4c:	e1a0200d 	mov	r2, sp
        26bb50:	e1a00004 	mov	r0, r4
        26bb54:	eb6006ca 	bl	1a6d684 <TBIOInterface::$MapFunctionToBit(unsigned char, unsigned char *)>
        26bb58:	e3700001 	cmn	r0, #1	; 0x1
        26bb5c:	1a000001 	bne	26bb68 <TBIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0x48>
        26bb60:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        26bb64:	e5cd1000 	strb	r1, [sp]
        26bb68:	e5dd0000 	ldrb	r0, [sp]
        26bb6c:	e2400006 	sub	r0, r0, #6	; 0x6
        26bb70:	e20000ff 	and	r0, r0, #255	; 0xff
        26bb74:	e0800080 	add	r0, r0, r0, lsl #1
        26bb78:	e0840100 	add	r0, r4, r0, lsl #2
        26bb7c:	e2807058 	add	r7, r0, #88	; 0x58
        26bb80:	e8870060 	stmia	r7, {r5, r6}
        26bb84:	eb049bcd 	bl	392ac0 <EnterAtomic>
        26bb88:	e1a02008 	mov	r2, r8
        26bb8c:	e1a01007 	mov	r1, r7
        26bb90:	e1a00004 	mov	r0, r4
        26bb94:	eb6006c2 	bl	1a6d6a4 <TBIOInterface::$UpdateInterruptFlags(KeynesIntObject *, unsigned long)>
        26bb98:	e1a01007 	mov	r1, r7
        26bb9c:	e1a00004 	mov	r0, r4
        26bba0:	eb6006bc 	bl	1a6d698 <TBIOInterface::$ClearInterrupt(KeynesIntObject *)>
        26bba4:	eb049bdc 	bl	392b1c <ExitAtomic>
        26bba8:	e5940044 	ldr	r0, [r4, #68]	; fField68
        26bbac:	e3300000 	teq	r0, #0	; 0x0
        26bbb0:	1a000010 	bne	26bbf8 <TBIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0xd8>
        26bbb4:	e1a00004 	mov	r0, r4
        26bbb8:	e3a0100f 	mov	r1, #15	; 0xf
        26bbbc:	eb6006bf 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
        26bbc0:	e1a02000 	mov	r2, r0
        26bbc4:	e1a00004 	mov	r0, r4
        26bbc8:	e3a01010 	mov	r1, #16	; 0x10
        26bbcc:	eb6006bf 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26bbd0:	e59f2028 	ldr	r2, [pc, #28]	; 26bc00 <TBIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0xe0>	; fField28
        26bbd4:	e1a01004 	mov	r1, r4
        26bbd8:	e3a03001 	mov	r3, #1	; 0x1
        26bbdc:	e2833b01 	add	r3, r3, #1024	; 0x400
        26bbe0:	e3a00902 	mov	r0, #32768	; 0x8000
        26bbe4:	eb65b420 	bl	1bd8c6c <$RegisterInterrupt(unsigned long, void *, long (*)(void *), void *)>
        26bbe8:	e5840044 	str	r0, [r4, #68]	; fField68
        26bbec:	eb66449a 	bl	1bfce5c <$ClearInterrupt>
        26bbf0:	e5b40044 	ldr	r0, [r4, #68]!	; fField68
        26bbf4:	eb667a46 	bl	1c0a514 <$QuickEnableInterrupt>
        26bbf8:	e1a00007 	mov	r0, r7
        26bbfc:	eaffffd7 	b	26bb60 <TBIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0x40>
        26bc00:	01a6d6ac 	moveq	sp, ip, lsr #13
    */
}

/**
 * Symbol: TBIOInterface::DeregisterInterrupt(KeynesIntObject *)
 * Address: 0026bc04
 */
TBIOInterface::DeregisterInterrupt(KeynesIntObject *) {
    /*
        26bc04:	e1a0c00d 	mov	ip, sp
        26bc08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26bc0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26bc10:	e1a05000 	mov	r5, r0
        26bc14:	e1a04001 	mov	r4, r1
        26bc18:	eb049ba8 	bl	392ac0 <EnterAtomic>
        26bc1c:	e1a01004 	mov	r1, r4
        26bc20:	e1a00005 	mov	r0, r5
        26bc24:	e3a02000 	mov	r2, #0	; 0x0
        26bc28:	eb60069d 	bl	1a6d6a4 <TBIOInterface::$UpdateInterruptFlags(KeynesIntObject *, unsigned long)>
        26bc2c:	eb049bba 	bl	392b1c <ExitAtomic>
        26bc30:	e3a00000 	mov	r0, #0	; 0x0
        26bc34:	e5840000 	str	r0, [r4]
        26bc38:	e5a40004 	str	r0, [r4, #4]!	; fField4
        26bc3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::ClearInterrupt(KeynesIntObject *)
 * Address: 0026bc40
 */
TBIOInterface::ClearInterrupt(KeynesIntObject *) {
    /*
        26bc40:	e591200a 	ldr	r2, [r1, #10]
        26bc44:	e1a02822 	mov	r2, r2, lsr #16
        26bc48:	e3a01010 	mov	r1, #16	; 0x10
        26bc4c:	ea60069f 	b	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
    */
}

/**
 * Symbol: TBIOInterface::EnableInterrupt(KeynesIntObject *)
 * Address: 0026bc50
 */
TBIOInterface::EnableInterrupt(KeynesIntObject *) {
    /*
        26bc50:	e1a0c00d 	mov	ip, sp
        26bc54:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26bc58:	e24cb004 	sub	fp, ip, #4	; 0x4
        26bc5c:	e3a03013 	mov	r3, #19	; 0x13
        26bc60:	e92d0008 	stmdb	sp!, {r3}
        26bc64:	e591200a 	ldr	r2, [r1, #10]
        26bc68:	e1a02822 	mov	r2, r2, lsr #16
        26bc6c:	e2801048 	add	r1, r0, #72	; 0x48
        26bc70:	e3a03001 	mov	r3, #1	; 0x1
        26bc74:	eb60068b 	bl	1a6d6a8 <TBIOInterface::$UpdateKeynesBit(unsigned long *, unsigned long, unsigned long, int)>
        26bc78:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::DisableInterrupt(KeynesIntObject *)
 * Address: 0026bc7c
 */
TBIOInterface::DisableInterrupt(KeynesIntObject *) {
    /*
        26bc7c:	e1a0c00d 	mov	ip, sp
        26bc80:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26bc84:	e24cb004 	sub	fp, ip, #4	; 0x4
        26bc88:	e3a03013 	mov	r3, #19	; 0x13
        26bc8c:	e92d0008 	stmdb	sp!, {r3}
        26bc90:	e591200a 	ldr	r2, [r1, #10]
        26bc94:	e1a02822 	mov	r2, r2, lsr #16
        26bc98:	e2801048 	add	r1, r0, #72	; 0x48
        26bc9c:	e3a03000 	mov	r3, #0	; 0x0
        26bca0:	eb600680 	bl	1a6d6a8 <TBIOInterface::$UpdateKeynesBit(unsigned long *, unsigned long, unsigned long, int)>
        26bca4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TBIOInterface::SetInterruptFlags(KeynesIntObject *, unsigned long)
 * Address: 0026bca8
 */
TBIOInterface::SetInterruptFlags(KeynesIntObject *, unsigned long) {
    /*
        26bca8:	ea60067d 	b	1a6d6a4 <TBIOInterface::$UpdateInterruptFlags(KeynesIntObject *, unsigned long)>
    */
}

