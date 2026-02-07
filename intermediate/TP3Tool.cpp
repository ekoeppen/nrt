#include "include/TP3Tool.h"

/**
 * Symbol: TP3Tool::SendNextOutput(void)
 * Address: 0014f060
 */
TP3Tool::SendNextOutput(void) {
    /*
        14f060:	e1a0c00d 	mov	ip, sp
        14f064:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14f068:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f06c:	e1a04000 	mov	r4, r0
        14f070:	e2845a01 	add	r5, r4, #4096	; 0x1000
        14f074:	e5d50e22 	ldrb	r0, [r5, #3618]	; fField3618
        14f078:	e3300000 	teq	r0, #0	; 0x0
        14f07c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        14f080:	e5940018 	ldr	r0, [r4, #24]	; fField24
        14f084:	e3100302 	tst	r0, #134217728	; 0x8000000
        14f088:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        14f08c:	e5d50e21 	ldrb	r0, [r5, #3617]	; fField3617
        14f090:	e3300000 	teq	r0, #0	; 0x0
        14f094:	0a000007 	beq	14f0b8 <TP3Tool::SendNextOutput(void)+0x58>
        14f098:	e2441f76 	sub	r1, r4, #472	; 0x1d8
        14f09c:	e2811a02 	add	r1, r1, #8192	; 0x2000
        14f0a0:	e1a00004 	mov	r0, r4
        14f0a4:	eb6326f1 	bl	1a18c70 <TP3Tool::$SendPacket(TP3Packet *)>
        14f0a8:	e3300000 	teq	r0, #0	; 0x0
        14f0ac:	05c50e21 	streqb	r0, [r5, #3617]	; fField3617
        14f0b0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        14f0b4:	ea00001b 	b	14f128 <TP3Tool::SendNextOutput(void)+0xc8>
        14f0b8:	e5950dfc 	ldr	r0, [r5, #3580]	; fField3580
        14f0bc:	e3300000 	teq	r0, #0	; 0x0
        14f0c0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        14f0c4:	e5950df4 	ldr	r0, [r5, #3572]	; fField3572
        14f0c8:	e080c100 	add	ip, r0, r0, lsl #2
        14f0cc:	e08c0180 	add	r0, ip, r0, lsl #3
        14f0d0:	e0840200 	add	r0, r4, r0, lsl #4
        14f0d4:	e28010f0 	add	r1, r0, #240	; 0xf0
        14f0d8:	e2811a01 	add	r1, r1, #4096	; 0x1000
        14f0dc:	e1a00004 	mov	r0, r4
        14f0e0:	eb6326e2 	bl	1a18c70 <TP3Tool::$SendPacket(TP3Packet *)>
        14f0e4:	e3300000 	teq	r0, #0	; 0x0
        14f0e8:	1a00000e 	bne	14f128 <TP3Tool::SendNextOutput(void)+0xc8>
        14f0ec:	e5950df4 	ldr	r0, [r5, #3572]	; fField3572
        14f0f0:	e2800001 	add	r0, r0, #1	; 0x1
        14f0f4:	e200000f 	and	r0, r0, #15	; 0xf
        14f0f8:	e5850df4 	str	r0, [r5, #3572]	; fField3572
        14f0fc:	e5950dfc 	ldr	r0, [r5, #3580]	; fField3580
        14f100:	e2400001 	sub	r0, r0, #1	; 0x1
        14f104:	e5850dfc 	str	r0, [r5, #3580]	; fField3580
        14f108:	e5950e00 	ldr	r0, [r5, #3584]
        14f10c:	e2800001 	add	r0, r0, #1	; 0x1
        14f110:	e5850e00 	str	r0, [r5, #3584]
        14f114:	e1a00004 	mov	r0, r4
        14f118:	eb6326c1 	bl	1a18c24 <TP3Tool::$ResetHeartBeat(void)>
        14f11c:	e3a00004 	mov	r0, #4	; 0x4
        14f120:	e5a500ec 	str	r0, [r5, #236]!	; fField236
        14f124:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14f128:	eaffffd0 	b	14f070 <TP3Tool::SendNextOutput(void)+0x10>
    */
}

/**
 * Symbol: TP3Tool::SendInitPacket(void)
 * Address: 0014f12c
 */
TP3Tool::SendInitPacket(void) {
    /*
        14f12c:	e1a0c00d 	mov	ip, sp
        14f130:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14f134:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f138:	e1a04000 	mov	r4, r0
        14f13c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14f140:	e28d0004 	add	r0, sp, #4	; 0x4
        14f144:	ebfbeae1 	bl	49cd0 <TCRC16::Reset(void)>
        14f148:	e1a00004 	mov	r0, r4
        14f14c:	eb63121c 	bl	1a139c4 <TP3Tool::$InitState(void)>
        14f150:	e2845a01 	add	r5, r4, #4096	; 0x1000
        14f154:	e5950e0c 	ldr	r0, [r5, #3596]
        14f158:	e5850e04 	str	r0, [r5, #3588]
        14f15c:	e2801001 	add	r1, r0, #1	; 0x1
        14f160:	e5851e0c 	str	r1, [r5, #3596]
        14f164:	e351007f 	cmp	r1, #127	; 0x7f
        14f168:	c3a01010 	movgt	r1, #16	; 0x10
        14f16c:	c5851e0c 	strgt	r1, [r5, #3596]
        14f170:	e3a0105a 	mov	r1, #90	; 0x5a
        14f174:	e5c51e78 	strb	r1, [r5, #3704]
        14f178:	e5951e10 	ldr	r1, [r5, #3600]
        14f17c:	e5c51e7d 	strb	r1, [r5, #3709]
        14f180:	e5c50e7e 	strb	r0, [r5, #3710]
        14f184:	e3a000a3 	mov	r0, #163	; 0xa3
        14f188:	e5c50e7f 	strb	r0, [r5, #3711]
        14f18c:	e5950f04 	ldr	r0, [r5, #3844]
        14f190:	e1a01420 	mov	r1, r0, lsr #8
        14f194:	e5c51e80 	strb	r1, [r5, #3712]
        14f198:	e5c50e81 	strb	r0, [r5, #3713]
        14f19c:	e3a02023 	mov	r2, #35	; 0x23
        14f1a0:	e2841082 	add	r1, r4, #130	; 0x82
        14f1a4:	e2811c1e 	add	r1, r1, #7680	; 0x1e00
        14f1a8:	e59f0094 	ldr	r0, [pc, #94]	; 14f244 <TP3Tool::SendInitPacket(void)+0x118>
        14f1ac:	eb6a3f68 	bl	1bdef54 <$BlockMove>
        14f1b0:	e3a0000d 	mov	r0, #13	; 0xd
        14f1b4:	e2841023 	add	r1, r4, #35	; 0x23
        14f1b8:	e2811a01 	add	r1, r1, #4096	; 0x1000
        14f1bc:	e5c10e80 	strb	r0, [r1, #3712]
        14f1c0:	e3a00026 	mov	r0, #38	; 0x26
        14f1c4:	e3a01000 	mov	r1, #0	; 0x0
        14f1c8:	e5c51e7b 	strb	r1, [r5, #3707]
        14f1cc:	e3a01026 	mov	r1, #38	; 0x26
        14f1d0:	e5c51e7c 	strb	r1, [r5, #3708]
        14f1d4:	e5850e74 	str	r0, [r5, #3700]
        14f1d8:	e28d0004 	add	r0, sp, #4	; 0x4
        14f1dc:	ebfbeabb 	bl	49cd0 <TCRC16::Reset(void)>
        14f1e0:	e3a02028 	mov	r2, #40	; 0x28
        14f1e4:	e284107b 	add	r1, r4, #123	; 0x7b
        14f1e8:	e2811c1e 	add	r1, r1, #7680	; 0x1e00
        14f1ec:	e28d0004 	add	r0, sp, #4	; 0x4
        14f1f0:	ebfbeaf6 	bl	49dd0 <TCRC16::ComputeCRC(unsigned char *, unsigned long)>
        14f1f4:	e28d0004 	add	r0, sp, #4	; 0x4
        14f1f8:	ebfbeb0c 	bl	49e30 <TCRC16::Get(void)>
        14f1fc:	e5900000 	ldr	r0, [r0]
        14f200:	e58d0000 	str	r0, [sp]
        14f204:	e5dd0000 	ldrb	r0, [sp]
        14f208:	e5c50e79 	strb	r0, [r5, #3705]
        14f20c:	e5dd0001 	ldrb	r0, [sp, #1]
        14f210:	e5c50e7a 	strb	r0, [r5, #3706]
        14f214:	e2441f76 	sub	r1, r4, #472	; 0x1d8
        14f218:	e2811a02 	add	r1, r1, #8192	; 0x2000
        14f21c:	e1a00004 	mov	r0, r4
        14f220:	eb632692 	bl	1a18c70 <TP3Tool::$SendPacket(TP3Packet *)>
        14f224:	e1a00004 	mov	r0, r4
        14f228:	eb6315fc 	bl	1a14a20 <TP3Tool::$KillTimer(void)>
        14f22c:	e1a00004 	mov	r0, r4
        14f230:	e3a039e1 	mov	r3, #3686400	; 0x384000
        14f234:	e3a02003 	mov	r2, #3	; 0x3
        14f238:	e3a01002 	mov	r1, #2	; 0x2
        14f23c:	eb631e3b 	bl	1a16b30 <TP3Tool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
        14f240:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14f244:	003741bc 	ldreqh	r4, [r7], -ip
    */
}

/**
 * Symbol: TP3Tool::SendPacket(TP3Packet *)
 * Address: 0014f248
 */
TP3Tool::SendPacket(TP3Packet *) {
    /*
        14f248:	e1a0c00d 	mov	ip, sp
        14f24c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14f250:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f254:	e1a05000 	mov	r5, r0
        14f258:	e1a04001 	mov	r4, r1
        14f25c:	e2810004 	add	r0, r1, #4	; 0x4
        14f260:	e1a06000 	mov	r6, r0
        14f264:	e5901000 	ldr	r1, [r0]
        14f268:	e1a0e00f 	mov	lr, pc
        14f26c:	e281f028 	add	pc, r1, #40	; 0x28
        14f270:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        14f274:	e2801006 	add	r1, r0, #6	; 0x6
        14f278:	e2611080 	rsb	r1, r1, #128	; 0x80
        14f27c:	e1a00006 	mov	r0, r6
        14f280:	e3a02001 	mov	r2, #1	; 0x1
        14f284:	e5963000 	ldr	r3, [r6]
        14f288:	e1a0e00f 	mov	lr, pc
        14f28c:	e283f034 	add	pc, r3, #52	; 0x34
        14f290:	e1a01006 	mov	r1, r6
        14f294:	e1a00005 	mov	r0, r5
        14f298:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        14f29c:	ea631e21 	b	1a16b28 <TP3Tool::$PostPutBytes(CBufferList *)>
    */
}

/**
 * Symbol: TP3Tool::SendSystemPacket(unsigned char, unsigned char)
 * Address: 0014f2a0
 */
TP3Tool::SendSystemPacket(unsigned char, unsigned char) {
    /*
        14f2a0:	e1a0c00d 	mov	ip, sp
        14f2a4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        14f2a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f2ac:	e1a04000 	mov	r4, r0
        14f2b0:	e20170ff 	and	r7, r1, #255	; 0xff
        14f2b4:	e20280ff 	and	r8, r2, #255	; 0xff
        14f2b8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14f2bc:	e28d0004 	add	r0, sp, #4	; 0x4
        14f2c0:	ebfbea82 	bl	49cd0 <TCRC16::Reset(void)>
        14f2c4:	e2845a01 	add	r5, r4, #4096	; 0x1000
        14f2c8:	e3a09001 	mov	r9, #1	; 0x1
        14f2cc:	e3370024 	teq	r7, #36	; 0x24
        14f2d0:	0a000005 	beq	14f2ec <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x4c>
        14f2d4:	e3370025 	teq	r7, #37	; 0x25
        14f2d8:	0a000007 	beq	14f2fc <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x5c>
        14f2dc:	e3370026 	teq	r7, #38	; 0x26
        14f2e0:	1a00000b 	bne	14f314 <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x74>
        14f2e4:	e3a00000 	mov	r0, #0	; 0x0
        14f2e8:	e5c50e20 	strb	r0, [r5, #3616]	; fField3616
        14f2ec:	e5950dfc 	ldr	r0, [r5, #3580]	; fField3580
        14f2f0:	e3300000 	teq	r0, #0	; 0x0
        14f2f4:	1a00003c 	bne	14f3ec <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x14c>
        14f2f8:	ea000005 	b	14f314 <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x74>
        14f2fc:	e3380001 	teq	r8, #1	; 0x1
        14f300:	0a000002 	beq	14f310 <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x70>
        14f304:	e5d50e20 	ldrb	r0, [r5, #3616]	; fField3616
        14f308:	e3300001 	teq	r0, #1	; 0x1
        14f30c:	0a000036 	beq	14f3ec <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x14c>
        14f310:	e5c59e20 	strb	r9, [r5, #3616]	; fField3616
        14f314:	e3a06003 	mov	r6, #3	; 0x3
        14f318:	e3a0005a 	mov	r0, #90	; 0x5a
        14f31c:	e5c50e78 	strb	r0, [r5, #3704]
        14f320:	e5950e10 	ldr	r0, [r5, #3600]
        14f324:	e5c50e7d 	strb	r0, [r5, #3709]
        14f328:	e5950e08 	ldr	r0, [r5, #3592]
        14f32c:	e5c50e7e 	strb	r0, [r5, #3710]
        14f330:	e3870080 	orr	r0, r7, #128	; 0x80
        14f334:	e5c50e7f 	strb	r0, [r5, #3711]
        14f338:	e3a0000d 	mov	r0, #13	; 0xd
        14f33c:	e3380000 	teq	r8, #0	; 0x0
        14f340:	05c50e80 	streqb	r0, [r5, #3712]
        14f344:	15c58e80 	strneb	r8, [r5, #3712]
        14f348:	15c50e81 	strneb	r0, [r5, #3713]
        14f34c:	13a06004 	movne	r6, #4	; 0x4
        14f350:	e1a00446 	mov	r0, r6, asr #8
        14f354:	e5c50e7b 	strb	r0, [r5, #3707]
        14f358:	e5c56e7c 	strb	r6, [r5, #3708]
        14f35c:	e28d0004 	add	r0, sp, #4	; 0x4
        14f360:	e5856e74 	str	r6, [r5, #3700]
        14f364:	ebfbea59 	bl	49cd0 <TCRC16::Reset(void)>
        14f368:	e2862002 	add	r2, r6, #2	; 0x2
        14f36c:	e284107b 	add	r1, r4, #123	; 0x7b
        14f370:	e2811c1e 	add	r1, r1, #7680	; 0x1e00
        14f374:	e28d0004 	add	r0, sp, #4	; 0x4
        14f378:	ebfbea94 	bl	49dd0 <TCRC16::ComputeCRC(unsigned char *, unsigned long)>
        14f37c:	e28d0004 	add	r0, sp, #4	; 0x4
        14f380:	ebfbeaaa 	bl	49e30 <TCRC16::Get(void)>
        14f384:	e5900000 	ldr	r0, [r0]
        14f388:	e58d0000 	str	r0, [sp]
        14f38c:	e5dd0000 	ldrb	r0, [sp]
        14f390:	e5c50e79 	strb	r0, [r5, #3705]
        14f394:	e5dd0001 	ldrb	r0, [sp, #1]
        14f398:	e5c50e7a 	strb	r0, [r5, #3706]
        14f39c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        14f3a0:	e3100302 	tst	r0, #134217728	; 0x8000000
        14f3a4:	15c59e21 	strneb	r9, [r5, #3617]	; fField3617
        14f3a8:	1a00000f 	bne	14f3ec <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x14c>
        14f3ac:	e2441f76 	sub	r1, r4, #472	; 0x1d8
        14f3b0:	e2811a02 	add	r1, r1, #8192	; 0x2000
        14f3b4:	e1a00004 	mov	r0, r4
        14f3b8:	eb63262c 	bl	1a18c70 <TP3Tool::$SendPacket(TP3Packet *)>
        14f3bc:	e3300000 	teq	r0, #0	; 0x0
        14f3c0:	0a000003 	beq	14f3d4 <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x134>
        14f3c4:	e5c59e21 	strb	r9, [r5, #3617]	; fField3617
        14f3c8:	e1a00004 	mov	r0, r4
        14f3cc:	eb632626 	bl	1a18c6c <TP3Tool::$SendNextOutput(void)>
        14f3d0:	ea000005 	b	14f3ec <TP3Tool::SendSystemPacket(unsigned char, unsigned char)+0x14c>
        14f3d4:	e3370025 	teq	r7, #37	; 0x25
        14f3d8:	13370026 	teqne	r7, #38	; 0x26
        14f3dc:	11a00004 	movne	r0, r4
        14f3e0:	1b63260f 	blne	1a18c24 <TP3Tool::$ResetHeartBeat(void)>
        14f3e4:	e3a00004 	mov	r0, #4	; 0x4
        14f3e8:	e5a500ec 	str	r0, [r5, #236]!	; fField236
        14f3ec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::GetSizeOf(void)
 * Address: 0014f3f0
 */
TP3Tool::GetSizeOf(void) {
    /*
        14f3f0:	e3a00fc2 	mov	r0, #776	; 0x308
        14f3f4:	e2800b07 	add	r0, r0, #7168	; 0x1c00
        14f3f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TP3Tool::Init(void)
 * Address: 0014f3fc
 */
TP3Tool::Init(void) {
    /*
        14f3fc:	e1a0c00d 	mov	ip, sp
        14f400:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14f404:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f408:	e1a04000 	mov	r4, r0
        14f40c:	eb63116c 	bl	1a139c4 <TP3Tool::$InitState(void)>
        14f410:	e3a0000a 	mov	r0, #10	; 0xa
        14f414:	e2841a01 	add	r1, r4, #4096	; 0x1000
        14f418:	e3a06000 	mov	r6, #0	; 0x0
        14f41c:	e5a10e18 	str	r0, [r1, #3608]!
        14f420:	e5846274 	str	r6, [r4, #628]	; fField628
        14f424:	e2841fa5 	add	r1, r4, #660	; 0x294
        14f428:	e1a00004 	mov	r0, r4
        14f42c:	e3a02003 	mov	r2, #3	; 0x3
        14f430:	eb69c2f4 	bl	1bc0008 <TCommTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
        14f434:	e1b05000 	movs	r5, r0
        14f438:	1a00006c 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f43c:	e2841fb5 	add	r1, r4, #724	; 0x2d4
        14f440:	e1a00004 	mov	r0, r4
        14f444:	e3a02002 	mov	r2, #2	; 0x2
        14f448:	eb69c2ee 	bl	1bc0008 <TCommTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
        14f44c:	e1b05000 	movs	r5, r0
        14f450:	1a000066 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f454:	e2841fe7 	add	r1, r4, #924	; 0x39c
        14f458:	e1a00004 	mov	r0, r4
        14f45c:	e3a02000 	mov	r2, #0	; 0x0
        14f460:	eb69c2e8 	bl	1bc0008 <TCommTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
        14f464:	e1b05000 	movs	r5, r0
        14f468:	1a000060 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f46c:	e2841fd1 	add	r1, r4, #836	; 0x344
        14f470:	e1a00004 	mov	r0, r4
        14f474:	e3a02001 	mov	r2, #1	; 0x1
        14f478:	eb69c2e2 	bl	1bc0008 <TCommTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
        14f47c:	e1b05000 	movs	r5, r0
        14f480:	1a00005a 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f484:	e2840ff1 	add	r0, r4, #964	; 0x3c4
        14f488:	e3a01001 	mov	r1, #1	; 0x1
        14f48c:	eb6a1980 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        14f490:	e1b05000 	movs	r5, r0
        14f494:	1a000055 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f498:	e584628c 	str	r6, [r4, #652]	; fField652
        14f49c:	e5846290 	str	r6, [r4, #656]	; fField656
        14f4a0:	e58462cc 	str	r6, [r4, #716]	; fField716
        14f4a4:	e58462d0 	str	r6, [r4, #720]	; fField720
        14f4a8:	e3a06000 	mov	r6, #0	; 0x0
        14f4ac:	e0860106 	add	r0, r6, r6, lsl #2
        14f4b0:	e0800186 	add	r0, r0, r6, lsl #3
        14f4b4:	e0847200 	add	r7, r4, r0, lsl #4
        14f4b8:	e2870e3e 	add	r0, r7, #992	; 0x3e0
        14f4bc:	e1a08000 	mov	r8, r0
        14f4c0:	e3a01000 	mov	r1, #0	; 0x0
        14f4c4:	eb6a67f0 	bl	1be948c <CBufferList::$Init(unsigned char)>
        14f4c8:	e1b05000 	movs	r5, r0
        14f4cc:	1a000047 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f4d0:	e3e03000 	mvn	r3, #0	; 0x0
        14f4d4:	e3a02000 	mov	r2, #0	; 0x0
        14f4d8:	e92d000c 	stmdb	sp!, {r2, r3}
        14f4dc:	e287102c 	add	r1, r7, #44	; 0x2c
        14f4e0:	e2811b01 	add	r1, r1, #1024	; 0x400
        14f4e4:	e2870b01 	add	r0, r7, #1024	; 0x400
        14f4e8:	e1a07000 	mov	r7, r0
        14f4ec:	e3a03000 	mov	r3, #0	; 0x0
        14f4f0:	e3a02080 	mov	r2, #128	; 0x80
        14f4f4:	eb6a67ec 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        14f4f8:	e28dd008 	add	sp, sp, #8	; 0x8
        14f4fc:	e1b05000 	movs	r5, r0
        14f500:	1a00003a 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f504:	e1a01007 	mov	r1, r7
        14f508:	e1a00008 	mov	r0, r8
        14f50c:	eb6a6bfc 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        14f510:	e2866001 	add	r6, r6, #1	; 0x1
        14f514:	e3560010 	cmp	r6, #16	; 0x10
        14f518:	baffffe3 	blt	14f4ac <TP3Tool::Init(void)+0xb0>
        14f51c:	e3a06000 	mov	r6, #0	; 0x0
        14f520:	e0860106 	add	r0, r6, r6, lsl #2
        14f524:	e0800186 	add	r0, r0, r6, lsl #3
        14f528:	e0847200 	add	r7, r4, r0, lsl #4
        14f52c:	e28700f4 	add	r0, r7, #244	; 0xf4
        14f530:	e2800a01 	add	r0, r0, #4096	; 0x1000
        14f534:	e1a08000 	mov	r8, r0
        14f538:	e3a01000 	mov	r1, #0	; 0x0
        14f53c:	eb6a67d2 	bl	1be948c <CBufferList::$Init(unsigned char)>
        14f540:	e1b05000 	movs	r5, r0
        14f544:	1a000029 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f548:	e3e03000 	mvn	r3, #0	; 0x0
        14f54c:	e3a02000 	mov	r2, #0	; 0x0
        14f550:	e92d000c 	stmdb	sp!, {r2, r3}
        14f554:	e2871d45 	add	r1, r7, #4416	; 0x1140
        14f558:	e2870f45 	add	r0, r7, #276	; 0x114
        14f55c:	e2800a01 	add	r0, r0, #4096	; 0x1000
        14f560:	e1a07000 	mov	r7, r0
        14f564:	e3a03000 	mov	r3, #0	; 0x0
        14f568:	e3a02080 	mov	r2, #128	; 0x80
        14f56c:	eb6a67ce 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        14f570:	e28dd008 	add	sp, sp, #8	; 0x8
        14f574:	e1b05000 	movs	r5, r0
        14f578:	1a00001c 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f57c:	e1a01007 	mov	r1, r7
        14f580:	e1a00008 	mov	r0, r8
        14f584:	eb6a6bde 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        14f588:	e2866001 	add	r6, r6, #1	; 0x1
        14f58c:	e3560010 	cmp	r6, #16	; 0x10
        14f590:	baffffe2 	blt	14f520 <TP3Tool::Init(void)+0x124>
        14f594:	e2440f75 	sub	r0, r4, #468	; 0x1d4
        14f598:	e2800a02 	add	r0, r0, #8192	; 0x2000
        14f59c:	e1a06000 	mov	r6, r0
        14f5a0:	e3a01000 	mov	r1, #0	; 0x0
        14f5a4:	eb6a67b8 	bl	1be948c <CBufferList::$Init(unsigned char)>
        14f5a8:	e1b05000 	movs	r5, r0
        14f5ac:	1a00000f 	bne	14f5f0 <TP3Tool::Init(void)+0x1f4>
        14f5b0:	e3e03000 	mvn	r3, #0	; 0x0
        14f5b4:	e3a02000 	mov	r2, #0	; 0x0
        14f5b8:	e92d000c 	stmdb	sp!, {r2, r3}
        14f5bc:	e2441f62 	sub	r1, r4, #392	; 0x188
        14f5c0:	e2811a02 	add	r1, r1, #8192	; 0x2000
        14f5c4:	e2440f6d 	sub	r0, r4, #436	; 0x1b4
        14f5c8:	e2800a02 	add	r0, r0, #8192	; 0x2000
        14f5cc:	e1a04000 	mov	r4, r0
        14f5d0:	e3a03000 	mov	r3, #0	; 0x0
        14f5d4:	e3a02080 	mov	r2, #128	; 0x80
        14f5d8:	eb6a67b3 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        14f5dc:	e28dd008 	add	sp, sp, #8	; 0x8
        14f5e0:	e1b05000 	movs	r5, r0
        14f5e4:	01a01004 	moveq	r1, r4
        14f5e8:	01a00006 	moveq	r0, r6
        14f5ec:	0b6a6bc4 	bleq	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        14f5f0:	e1a00005 	mov	r0, r5
        14f5f4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 0014f5f8
 */
TP3Tool::HandleRequest(TUMsgToken &, unsigned long) {
    /*
        14f5f8:	e590204c 	ldr	r2, [r0, #76]	; fField76
        14f5fc:	e3320004 	teq	r2, #4	; 0x4
        14f600:	13a0207e 	movne	r2, #126	; 0x7e
        14f604:	12422c3f 	subne	r2, r2, #16128	; 0x3f00
        14f608:	1a69b61a 	bne	1bbce78 <TCommTool::$CompleteRequest(TUMsgToken &, long)>
        14f60c:	0a6331ec 	beq	1a1bdc4 <TP3Tool::$TimerComplete(void)>
    */
}

/**
 * Symbol: TP3Tool::OpenStart(TOptionArray *)
 * Address: 0014f610
 */
TP3Tool::OpenStart(TOptionArray *) {
    /*
        14f610:	e1a0c00d 	mov	ip, sp
        14f614:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14f618:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f61c:	e1a05000 	mov	r5, r0
        14f620:	e1a04001 	mov	r4, r1
        14f624:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14f628:	eb69c281 	bl	1bc0034 <TCommTool::$OpenStart(TOptionArray *)>
        14f62c:	e1b06000 	movs	r6, r0
        14f630:	1a000006 	bne	14f650 <TP3Tool::OpenStart(TOptionArray *)+0x40>
        14f634:	e1a0100d 	mov	r1, sp
        14f638:	e1a00004 	mov	r0, r4
        14f63c:	eb69a160 	bl	1bb7bc4 <$CMStartServiceInternal(TOptionArray *, TServiceInfo *)>
        14f640:	e1b06000 	movs	r6, r0
        14f644:	02850f9b 	addeq	r0, r5, #620	; 0x26c
        14f648:	059d1004 	ldreq	r1, [sp, #4]
        14f64c:	0b6a047d 	bleq	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        14f650:	e1a00006 	mov	r0, r6
        14f654:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::CloseComplete(long)
 * Address: 0014f658
 */
TP3Tool::CloseComplete(long) {
    /*
        14f658:	e1a0c00d 	mov	ip, sp
        14f65c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14f660:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f664:	e1a05000 	mov	r5, r0
        14f668:	e1a04001 	mov	r4, r1
        14f66c:	e24dd020 	sub	sp, sp, #32	; 0x20
        14f670:	e28d0010 	add	r0, sp, #16	; 0x10
        14f674:	eb6a804e 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        14f678:	e28d0004 	add	r0, sp, #4	; 0x4
        14f67c:	eb6a8053 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
        14f680:	e3a00002 	mov	r0, #2	; 0x2
        14f684:	e285cf9b 	add	ip, r5, #620	; 0x26c
        14f688:	e58d000c 	str	r0, [sp, #12]	; fField12
        14f68c:	e28d0010 	add	r0, sp, #16	; 0x10
        14f690:	e3a01010 	mov	r1, #16	; 0x10
        14f694:	e3a02000 	mov	r2, #0	; 0x0
        14f698:	e3a0e004 	mov	lr, #4	; 0x4
        14f69c:	e3a06000 	mov	r6, #0	; 0x0
        14f6a0:	e3a03000 	mov	r3, #0	; 0x0
        14f6a4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14f6a8:	e1a03006 	mov	r3, r6
        14f6ac:	e1a0100e 	mov	r1, lr
        14f6b0:	e3a0000c 	mov	r0, #12	; 0xc
        14f6b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14f6b8:	e28d3024 	add	r3, sp, #36	; 0x24
        14f6bc:	e92d0008 	stmdb	sp!, {r3}
        14f6c0:	e28d3024 	add	r3, sp, #36	; 0x24
        14f6c4:	e1a0000c 	mov	r0, ip
        14f6c8:	e3a02002 	mov	r2, #2	; 0x2
        14f6cc:	e3a01001 	mov	r1, #1	; 0x1
        14f6d0:	eb6a2d9d 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        14f6d4:	e28dd024 	add	sp, sp, #36	; 0x24
        14f6d8:	e3340000 	teq	r4, #0	; 0x0
        14f6dc:	01a01000 	moveq	r1, r0
        14f6e0:	11a01004 	movne	r1, r4
        14f6e4:	e1a00005 	mov	r0, r5
        14f6e8:	eb69b5df 	bl	1bbce6c <TCommTool::$CloseComplete(long)>
        14f6ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::HandleReply(unsigned long, unsigned long)
 * Address: 0014f6f0
 */
TP3Tool::HandleReply(unsigned long, unsigned long) {
    /*
        14f6f0:	e1a03000 	mov	r3, r0
        14f6f4:	e3310001 	teq	r1, #1	; 0x1
        14f6f8:	01a00003 	moveq	r0, r3
        14f6fc:	0a6314d8 	beq	1a14a64 <TP3Tool::$ModemCommandComplete(void)>
        14f700:	e3310002 	teq	r1, #2	; 0x2
        14f704:	01a00003 	moveq	r0, r3
        14f708:	0a630455 	beq	1a10864 <TP3Tool::$GetBytesComplete(void)>
        14f70c:	e3310003 	teq	r1, #3	; 0x3
        14f710:	01a00003 	moveq	r0, r3
        14f714:	0a631d13 	beq	1a16b68 <TP3Tool::$PutBytesComplete(void)>
        14f718:	e3310005 	teq	r1, #5	; 0x5
        14f71c:	e1a00003 	mov	r0, r3
        14f720:	05931000 	ldreq	r1, [r3]
        14f724:	0281ff46 	addeq	pc, r1, #280	; 0x118
        14f728:	1a69c232 	bne	1bbfff8 <TCommTool::$HandleReply(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TP3Tool::__ct(unsigned long)
 * Address: 0014f72c
 */
TP3Tool::TP3Tool(unsigned long) {
    /*
        14f72c:	e1a0c00d 	mov	ip, sp
        14f730:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14f734:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f738:	e1b04000 	movs	r4, r0
        14f73c:	e1a05001 	mov	r5, r1
        14f740:	1a000004 	bne	14f758 <TP3Tool::__ct(unsigned long)+0x2c>
        14f744:	e3a00fc2 	mov	r0, #776	; 0x308
        14f748:	e2800b07 	add	r0, r0, #7168	; 0x1c00
        14f74c:	eb69fbf9 	bl	1bce738 <$__nw(unsigned int)>
        14f750:	e1b04000 	movs	r4, r0
        14f754:	0a000033 	beq	14f828 <TP3Tool::__ct(unsigned long)+0xfc>
        14f758:	e1a01005 	mov	r1, r5
        14f75c:	e1a00004 	mov	r0, r4
        14f760:	eb69b5b7 	bl	1bbce44 <TCommTool::$__ct(unsigned long)>
        14f764:	e3a00000 	mov	r0, #0	; 0x0
        14f768:	e5c40270 	strb	r0, [r4, #624]
        14f76c:	e584026c 	str	r0, [r4, #620]
        14f770:	e2840f9e 	add	r0, r4, #632	; 0x278
        14f774:	eb6a8016 	bl	1bef7d4 <TCommToolPutRequest::$__ct(void)>
        14f778:	e2840fa5 	add	r0, r4, #660	; 0x294
        14f77c:	eb69f7ca 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        14f780:	e2840fa9 	add	r0, r4, #676	; 0x2a4
        14f784:	eb6a800b 	bl	1bef7b8 <TCommToolPutReply::$__ct(void)>
        14f788:	e2840fae 	add	r0, r4, #696	; 0x2b8
        14f78c:	eb6a8011 	bl	1bef7d8 <TCommToolGetRequest::$__ct(void)>
        14f790:	e2840fb5 	add	r0, r4, #724	; 0x2d4
        14f794:	eb69f7c4 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        14f798:	e2840fb9 	add	r0, r4, #740	; 0x2e4
        14f79c:	eb6a8006 	bl	1bef7bc <TCommToolGetReply::$__ct(void)>
        14f7a0:	e2840fbf 	add	r0, r4, #764	; 0x2fc
        14f7a4:	eb6a800f 	bl	1bef7e8 <TCommToolBindRequest::$__ct(void)>
        14f7a8:	e2840fc7 	add	r0, r4, #796	; 0x31c
        14f7ac:	eb6a800b 	bl	1bef7e0 <TCommToolConnectRequest::$__ct(void)>
        14f7b0:	e2840fd1 	add	r0, r4, #836	; 0x344
        14f7b4:	eb69f7bc 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        14f7b8:	e2840fd5 	add	r0, r4, #852	; 0x354
        14f7bc:	eb6377c8 	bl	1a2d6e4 <TClassOneModemCmdReply::$__ct(void)>
        14f7c0:	e2840e39 	add	r0, r4, #912	; 0x390
        14f7c4:	eb6a800a 	bl	1bef7f4 <TCommToolKillRequest::$__ct(void)>
        14f7c8:	e2840fe7 	add	r0, r4, #924	; 0x39c
        14f7cc:	eb69f7b6 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        14f7d0:	e2840feb 	add	r0, r4, #940	; 0x3ac
        14f7d4:	eb6a7ff6 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        14f7d8:	e2840ff1 	add	r0, r4, #964	; 0x3c4
        14f7dc:	eb69f7b2 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        14f7e0:	e28410dc 	add	r1, r4, #220	; 0xdc
        14f7e4:	e2811a01 	add	r1, r1, #4096	; 0x1000
        14f7e8:	e2840ff7 	add	r0, r4, #988	; 0x3dc
        14f7ec:	e59f303c 	ldr	r3, [pc, #3c]	; 14f830 <TP3Tool::__ct(unsigned long)+0x104>
        14f7f0:	e3a020d0 	mov	r2, #208	; 0xd0
        14f7f4:	eb62d6a2 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
        14f7f8:	e2841edf 	add	r1, r4, #3568	; 0xdf0
        14f7fc:	e2811a01 	add	r1, r1, #4096	; 0x1000
        14f800:	e28400f0 	add	r0, r4, #240	; 0xf0
        14f804:	e2800a01 	add	r0, r0, #4096	; 0x1000
        14f808:	e59f3024 	ldr	r3, [pc, #24]	; 14f834 <TP3Tool::__ct(unsigned long)+0x108>	; fField24
        14f80c:	e3a020d0 	mov	r2, #208	; 0xd0
        14f810:	eb62d69b 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
        14f814:	e2440f76 	sub	r0, r4, #472	; 0x1d8
        14f818:	e2800a02 	add	r0, r0, #8192	; 0x2000
        14f81c:	eb62eb39 	bl	1a0a508 <TP3Packet::$__ct(void)>
        14f820:	e59f0010 	ldr	r0, [pc, #10]	; 14f838 <TP3Tool::__ct(unsigned long)+0x10c>
        14f824:	e5840000 	str	r0, [r4]
        14f828:	e1a00004 	mov	r0, r4
        14f82c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14f830:	0038acbc 	ldreqh	sl, [r8], -ip
        14f834:	0038ad78 	eoreqs	sl, r8, r8, ror sp
        14f838:	0001fc94 	muleq	r1, r4, ip
    */
}

/**
 * Symbol: TP3Tool::PutBytes(CBufferList *)
 * Address: 0014f83c
 */
TP3Tool::PutBytes(CBufferList *) {
    /*
        14f83c:	e1a0c00d 	mov	ip, sp
        14f840:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14f844:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f848:	e1a04000 	mov	r4, r0
        14f84c:	e1a05001 	mov	r5, r1
        14f850:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14f854:	e28d0004 	add	r0, sp, #4	; 0x4
        14f858:	ebfbe91c 	bl	49cd0 <TCRC16::Reset(void)>
        14f85c:	e2847a01 	add	r7, r4, #4096	; 0x1000
        14f860:	e5d70e24 	ldrb	r0, [r7, #3620]	; fField3620
        14f864:	e3300000 	teq	r0, #0	; 0x0
        14f868:	0a000008 	beq	14f890 <TP3Tool::PutBytes(CBufferList *)+0x54>
        14f86c:	e1a01005 	mov	r1, r5
        14f870:	e1a00004 	mov	r0, r4
        14f874:	eb631cab 	bl	1a16b28 <TP3Tool::$PostPutBytes(CBufferList *)>
        14f878:	e3300000 	teq	r0, #0	; 0x0
        14f87c:	11a01000 	movne	r1, r0
        14f880:	11a00004 	movne	r0, r4
        14f884:	13a02000 	movne	r2, #0	; 0x0
        14f888:	1a00005d 	bne	14fa04 <TP3Tool::PutBytes(CBufferList *)+0x1c8>
        14f88c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14f890:	e5970e00 	ldr	r0, [r7, #3584]
        14f894:	e5971dfc 	ldr	r1, [r7, #3580]	; fField3580
        14f898:	e0810000 	add	r0, r1, r0
        14f89c:	e3500010 	cmp	r0, #16	; 0x10
        14f8a0:	a1a00004 	movge	r0, r4
        14f8a4:	a3a02000 	movge	r2, #0	; 0x0
        14f8a8:	a3e01e41 	mvnge	r1, #1040	; 0x410
        14f8ac:	a2411a0a 	subge	r1, r1, #40960	; 0xa000
        14f8b0:	aa000053 	bge	14fa04 <TP3Tool::PutBytes(CBufferList *)+0x1c8>
        14f8b4:	e5d70e22 	ldrb	r0, [r7, #3618]	; fField3618
        14f8b8:	e3300000 	teq	r0, #0	; 0x0
        14f8bc:	01a00004 	moveq	r0, r4
        14f8c0:	03a02000 	moveq	r2, #0	; 0x0
        14f8c4:	03e0100f 	mvneq	r1, #15	; 0xf
        14f8c8:	02411b29 	subeq	r1, r1, #41984	; 0xa400
        14f8cc:	0a00004c 	beq	14fa04 <TP3Tool::PutBytes(CBufferList *)+0x1c8>
        14f8d0:	e5970df8 	ldr	r0, [r7, #3576]	; fField3576
        14f8d4:	e080c100 	add	ip, r0, r0, lsl #2
        14f8d8:	e08c0180 	add	r0, ip, r0, lsl #3
        14f8dc:	e0840200 	add	r0, r4, r0, lsl #4
        14f8e0:	e28060f0 	add	r6, r0, #240	; 0xf0
        14f8e4:	e2866a01 	add	r6, r6, #4096	; 0x1000
        14f8e8:	e1a00005 	mov	r0, r5
        14f8ec:	e5951000 	ldr	r1, [r5]
        14f8f0:	e1a0e00f 	mov	lr, pc
        14f8f4:	e281f02c 	add	pc, r1, #44	; 0x2c
        14f8f8:	e586004c 	str	r0, [r6, #76]	; fField76
        14f8fc:	e1a02000 	mov	r2, r0
        14f900:	e2861058 	add	r1, r6, #88	; 0x58
        14f904:	e1a00005 	mov	r0, r5
        14f908:	e5953000 	ldr	r3, [r5]
        14f90c:	e1a0e00f 	mov	lr, pc
        14f910:	e283f014 	add	pc, r3, #20	; 0x14
        14f914:	e1a05000 	mov	r5, r0
        14f918:	e596004c 	ldr	r0, [r6, #76]	; fField76
        14f91c:	e1300005 	teq	r0, r5
        14f920:	11a00004 	movne	r0, r4
        14f924:	13a02000 	movne	r2, #0	; 0x0
        14f928:	13e01014 	mvnne	r1, #20	; 0x14
        14f92c:	12411b29 	subne	r1, r1, #41984	; 0xa400
        14f930:	1a000033 	bne	14fa04 <TP3Tool::PutBytes(CBufferList *)+0x1c8>
        14f934:	e3a00001 	mov	r0, #1	; 0x1
        14f938:	e5c60000 	strb	r0, [r6]
        14f93c:	e5970e10 	ldr	r0, [r7, #3600]
        14f940:	e2800001 	add	r0, r0, #1	; 0x1
        14f944:	e5870e10 	str	r0, [r7, #3600]
        14f948:	e350007f 	cmp	r0, #127	; 0x7f
        14f94c:	c3a00010 	movgt	r0, #16	; 0x10
        14f950:	c5870e10 	strgt	r0, [r7, #3600]
        14f954:	e3a0000d 	mov	r0, #13	; 0xd
        14f958:	e0861005 	add	r1, r6, r5
        14f95c:	e5c10058 	strb	r0, [r1, #88]
        14f960:	e596004c 	ldr	r0, [r6, #76]	; fField76
        14f964:	e2800003 	add	r0, r0, #3	; 0x3
        14f968:	e3a0105a 	mov	r1, #90	; 0x5a
        14f96c:	e586004c 	str	r0, [r6, #76]	; fField76
        14f970:	e5c61050 	strb	r1, [r6, #80]
        14f974:	e1a01440 	mov	r1, r0, asr #8
        14f978:	e5c61053 	strb	r1, [r6, #83]
        14f97c:	e5c60054 	strb	r0, [r6, #84]
        14f980:	e5970e10 	ldr	r0, [r7, #3600]
        14f984:	e5c60055 	strb	r0, [r6, #85]
        14f988:	e5970e08 	ldr	r0, [r7, #3592]
        14f98c:	e5c60056 	strb	r0, [r6, #86]
        14f990:	e3a000a0 	mov	r0, #160	; 0xa0
        14f994:	e5c60057 	strb	r0, [r6, #87]
        14f998:	e28d0004 	add	r0, sp, #4	; 0x4
        14f99c:	ebfbe8cb 	bl	49cd0 <TCRC16::Reset(void)>
        14f9a0:	e596004c 	ldr	r0, [r6, #76]	; fField76
        14f9a4:	e2802002 	add	r2, r0, #2	; 0x2
        14f9a8:	e2861053 	add	r1, r6, #83	; 0x53
        14f9ac:	e28d0004 	add	r0, sp, #4	; 0x4
        14f9b0:	ebfbe906 	bl	49dd0 <TCRC16::ComputeCRC(unsigned char *, unsigned long)>
        14f9b4:	e28d0004 	add	r0, sp, #4	; 0x4
        14f9b8:	ebfbe91c 	bl	49e30 <TCRC16::Get(void)>
        14f9bc:	e5900000 	ldr	r0, [r0]
        14f9c0:	e58d0000 	str	r0, [sp]
        14f9c4:	e5dd0000 	ldrb	r0, [sp]
        14f9c8:	e5c60051 	strb	r0, [r6, #81]
        14f9cc:	e5dd0001 	ldrb	r0, [sp, #1]
        14f9d0:	e5c60052 	strb	r0, [r6, #82]
        14f9d4:	e5970df8 	ldr	r0, [r7, #3576]	; fField3576
        14f9d8:	e2800001 	add	r0, r0, #1	; 0x1
        14f9dc:	e200000f 	and	r0, r0, #15	; 0xf
        14f9e0:	e5870df8 	str	r0, [r7, #3576]	; fField3576
        14f9e4:	e5970dfc 	ldr	r0, [r7, #3580]	; fField3580
        14f9e8:	e2800001 	add	r0, r0, #1	; 0x1
        14f9ec:	e5a70dfc 	str	r0, [r7, #3580]!	; fField3580
        14f9f0:	e1a00004 	mov	r0, r4
        14f9f4:	eb63249c 	bl	1a18c6c <TP3Tool::$SendNextOutput(void)>
        14f9f8:	e1a02005 	mov	r2, r5
        14f9fc:	e1a00004 	mov	r0, r4
        14fa00:	e3a01000 	mov	r1, #0	; 0x0
        14fa04:	e5943000 	ldr	r3, [r4]
        14fa08:	e1a0e00f 	mov	lr, pc
        14fa0c:	e283f0d4 	add	pc, r3, #212	; 0xd4
        14fa10:	eaffff9d 	b	14f88c <TP3Tool::PutBytes(CBufferList *)+0x50>
    */
}

/**
 * Symbol: TP3Tool::PutFramedBytes(CBufferList *, unsigned char)
 * Address: 0014fa14
 */
TP3Tool::PutFramedBytes(CBufferList *, unsigned char) {
    /*
        14fa14:	e3a02000 	mov	r2, #0	; 0x0
        14fa18:	e3a0107e 	mov	r1, #126	; 0x7e
        14fa1c:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
        14fa20:	e5903000 	ldr	r3, [r0]
        14fa24:	e283f0d4 	add	pc, r3, #212	; 0xd4
    */
}

/**
 * Symbol: TP3Tool::KillPut(void)
 * Address: 0014fa28
 */
TP3Tool::KillPut(void) {
    /*
        14fa28:	e3a01000 	mov	r1, #0	; 0x0
        14fa2c:	e5902000 	ldr	r2, [r0]
        14fa30:	e282f0dc 	add	pc, r2, #220	; 0xdc
    */
}

/**
 * Symbol: TP3Tool::GetBytes(CBufferList *)
 * Address: 0014fa34
 */
TP3Tool::GetBytes(CBufferList *) {
    /*
        14fa34:	e1a0c00d 	mov	ip, sp
        14fa38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14fa3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14fa40:	e1a04000 	mov	r4, r0
        14fa44:	e2800a01 	add	r0, r0, #4096	; 0x1000
        14fa48:	e5d02e24 	ldrb	r2, [r0, #3620]	; fField3620
        14fa4c:	e3320000 	teq	r2, #0	; 0x0
        14fa50:	05a010e8 	streq	r1, [r0, #232]!	; fField232
        14fa54:	01a00004 	moveq	r0, r4
        14fa58:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        14fa5c:	0a62ff4a 	beq	1a0f78c <TP3Tool::$DeliverInput(void)>
        14fa60:	e1a00004 	mov	r0, r4
        14fa64:	eb631c2d 	bl	1a16b20 <TP3Tool::$PostGetBytes(CBufferList *)>
        14fa68:	e3300000 	teq	r0, #0	; 0x0
        14fa6c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        14fa70:	e1a01000 	mov	r1, r0
        14fa74:	e1a00004 	mov	r0, r4
        14fa78:	e3a03000 	mov	r3, #0	; 0x0
        14fa7c:	e3a02000 	mov	r2, #0	; 0x0
        14fa80:	e594c000 	ldr	ip, [r4]
        14fa84:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        14fa88:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TP3Tool::GetFramedBytes(CBufferList *)
 * Address: 0014fa8c
 */
TP3Tool::GetFramedBytes(CBufferList *) {
    /*
        14fa8c:	e3a03000 	mov	r3, #0	; 0x0
        14fa90:	e3a02000 	mov	r2, #0	; 0x0
        14fa94:	e3a0107e 	mov	r1, #126	; 0x7e
        14fa98:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
        14fa9c:	e590c000 	ldr	ip, [r0]
        14faa0:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TP3Tool::KillGet(void)
 * Address: 0014faa4
 */
TP3Tool::KillGet(void) {
    /*
        14faa4:	e1a02000 	mov	r2, r0
        14faa8:	e3a00000 	mov	r0, #0	; 0x0
        14faac:	e2821a01 	add	r1, r2, #4096	; 0x1000
        14fab0:	e5a100e8 	str	r0, [r1, #232]!	; fField232
        14fab4:	e1a00002 	mov	r0, r2
        14fab8:	e3a01000 	mov	r1, #0	; 0x0
        14fabc:	e5922000 	ldr	r2, [r2]
        14fac0:	e282f0f4 	add	pc, r2, #244	; 0xf4
    */
}

/**
 * Symbol: TP3Tool::ModemCommandComplete(void)
 * Address: 0014fac4
 */
TP3Tool::ModemCommandComplete(void) {
    /*
        14fac4:	e1a02000 	mov	r2, r0
        14fac8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        14facc:	e3c00202 	bic	r0, r0, #536870912	; 0x20000000
        14fad0:	e5820018 	str	r0, [r2, #24]	; fField24
        14fad4:	e2820a01 	add	r0, r2, #4096	; 0x1000
        14fad8:	e5900efc 	ldr	r0, [r0, #3836]	; fField3836
        14fadc:	e3300003 	teq	r0, #3	; 0x3
        14fae0:	01a00002 	moveq	r0, r2
        14fae4:	0a6313df 	beq	1a14a68 <TP3Tool::$ModemConnectComplete(void)>
        14fae8:	e3300006 	teq	r0, #6	; 0x6
        14faec:	0a00000d 	beq	14fb28 <TP3Tool::ModemCommandComplete(void)+0x64>
        14faf0:	e3300008 	teq	r0, #8	; 0x8
        14faf4:	0a000006 	beq	14fb14 <TP3Tool::ModemCommandComplete(void)+0x50>
        14faf8:	e3300009 	teq	r0, #9	; 0x9
        14fafc:	11a0f00e 	movne	pc, lr
        14fb00:	e592135c 	ldr	r1, [r2, #860]	; fField860
        14fb04:	e1a00002 	mov	r0, r2
        14fb08:	e5922000 	ldr	r2, [r2]
        14fb0c:	e2822080 	add	r2, r2, #128	; 0x80
        14fb10:	ea000003 	b	14fb24 <TP3Tool::ModemCommandComplete(void)+0x60>
        14fb14:	e592135c 	ldr	r1, [r2, #860]	; fField860
        14fb18:	e1a00002 	mov	r0, r2
        14fb1c:	e5922000 	ldr	r2, [r2]
        14fb20:	e2822078 	add	r2, r2, #120	; 0x78
        14fb24:	e282f000 	add	pc, r2, #0	; 0x0
        14fb28:	e592035c 	ldr	r0, [r2, #860]	; fField860
        14fb2c:	e280cdfa 	add	ip, r0, #16000	; 0x3e80
        14fb30:	e37c0005 	cmn	ip, #5	; 0x5
        14fb34:	01a0f00e 	moveq	pc, lr
        14fb38:	e1a00002 	mov	r0, r2
        14fb3c:	e5921000 	ldr	r1, [r2]
        14fb40:	e281ff46 	add	pc, r1, #280	; 0x118
    */
}

/**
 * Symbol: TP3Tool::ModemConnectComplete(void)
 * Address: 0014fb44
 */
TP3Tool::ModemConnectComplete(void) {
    /*
        14fb44:	e590135c 	ldr	r1, [r0, #860]	; fField860
        14fb48:	e3310000 	teq	r1, #0	; 0x0
        14fb4c:	1a69c54f 	bne	1bc1090 <TCommTool::$StartAbort(long)>
        14fb50:	e1a02000 	mov	r2, r0
        14fb54:	e5900018 	ldr	r0, [r0, #24]	; fField24
        14fb58:	e3800402 	orr	r0, r0, #33554432	; 0x2000000
        14fb5c:	e5820018 	str	r0, [r2, #24]	; fField24
        14fb60:	e2820a01 	add	r0, r2, #4096	; 0x1000
        14fb64:	e5d00e24 	ldrb	r0, [r0, #3620]	; fField3620
        14fb68:	e3300000 	teq	r0, #0	; 0x0
        14fb6c:	01a0f00e 	moveq	pc, lr
        14fb70:	e1a00002 	mov	r0, r2
        14fb74:	e3a01000 	mov	r1, #0	; 0x0
        14fb78:	e5922000 	ldr	r2, [r2]
        14fb7c:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TP3Tool::ConnectStart(void)
 * Address: 0014fb80
 */
TP3Tool::ConnectStart(void) {
    /*
        14fb80:	e3a01000 	mov	r1, #0	; 0x0
        14fb84:	e2802a01 	add	r2, r0, #4096	; 0x1000
        14fb88:	e5c21e25 	strb	r1, [r2, #3621]
        14fb8c:	e5c01340 	strb	r1, [r0, #832]	; fField832
        14fb90:	e5902184 	ldr	r2, [r0, #388]	; fField388
        14fb94:	e5801334 	str	r1, [r0, #820]	; fField820
        14fb98:	e5802330 	str	r2, [r0, #816]	; fField816
        14fb9c:	ea62fadc 	b	1a0e714 <TP3Tool::$CnctPostConnect(long)>
    */
}

/**
 * Symbol: TP3Tool::CnctPostConnect(long)
 * Address: 0014fba0
 */
TP3Tool::CnctPostConnect(long) {
    /*
        14fba0:	e1a0c00d 	mov	ip, sp
        14fba4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14fba8:	e24cb004 	sub	fp, ip, #4	; 0x4
        14fbac:	e1a04000 	mov	r4, r0
        14fbb0:	e3310000 	teq	r1, #0	; 0x0
        14fbb4:	1a000020 	bne	14fc3c <TP3Tool::CnctPostConnect(long)+0x9c>
        14fbb8:	e3a01001 	mov	r1, #1	; 0x1
        14fbbc:	e2840a01 	add	r0, r4, #4096	; 0x1000
        14fbc0:	e5c01e23 	strb	r1, [r0, #3619]	; fField3619
        14fbc4:	e3a01003 	mov	r1, #3	; 0x3
        14fbc8:	e5a01efc 	str	r1, [r0, #3836]!	; fField3836
        14fbcc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        14fbd0:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
        14fbd4:	e5840018 	str	r0, [r4, #24]	; fField24
        14fbd8:	e284ef9b 	add	lr, r4, #620	; 0x26c
        14fbdc:	e284cfd1 	add	ip, r4, #836	; 0x344
        14fbe0:	e2845fc7 	add	r5, r4, #796	; 0x31c
        14fbe4:	e2840fd5 	add	r0, r4, #852	; 0x354
        14fbe8:	e3a0103c 	mov	r1, #60	; 0x3c
        14fbec:	e3a02000 	mov	r2, #0	; 0x0
        14fbf0:	e3a03000 	mov	r3, #0	; 0x0
        14fbf4:	e3a06004 	mov	r6, #4	; 0x4
        14fbf8:	e3a07000 	mov	r7, #0	; 0x0
        14fbfc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14fc00:	e1a03007 	mov	r3, r7
        14fc04:	e3a02001 	mov	r2, #1	; 0x1
        14fc08:	e1a01006 	mov	r1, r6
        14fc0c:	e3a00028 	mov	r0, #40	; 0x28
        14fc10:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14fc14:	e1a03005 	mov	r3, r5
        14fc18:	e92d0008 	stmdb	sp!, {r3}
        14fc1c:	e1a0000e 	mov	r0, lr
        14fc20:	e3a03000 	mov	r3, #0	; 0x0
        14fc24:	e49c1008 	ldr	r1, [ip], #8	; fField8
        14fc28:	e59c2000 	ldr	r2, [ip]
        14fc2c:	eb6a2c46 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        14fc30:	e28dd024 	add	sp, sp, #36	; 0x24
        14fc34:	e1b01000 	movs	r1, r0
        14fc38:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14fc3c:	e1a00004 	mov	r0, r4
        14fc40:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        14fc44:	ea69c511 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TP3Tool::__dt(void)
 * Address: 0014fc48
 */
TP3Tool::~TP3Tool(void) {
    /*
        14fc48:	e1a0c00d 	mov	ip, sp
        14fc4c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14fc50:	e24cb004 	sub	fp, ip, #4	; 0x4
        14fc54:	e1a04000 	mov	r4, r0
        14fc58:	e1a05001 	mov	r5, r1
        14fc5c:	e59f00ac 	ldr	r0, [pc, #ac]	; 14fd10 <TP3Tool::__dt(void)+0xc8>
        14fc60:	e5840000 	str	r0, [r4]
        14fc64:	e2440f76 	sub	r0, r4, #472	; 0x1d8
        14fc68:	e2800a02 	add	r0, r0, #8192	; 0x2000
        14fc6c:	e3a01000 	mov	r1, #0	; 0x0
        14fc70:	eb62ea2f 	bl	1a0a534 <TP3Packet::$__dt(void)>
        14fc74:	e2841020 	add	r1, r4, #32	; 0x20
        14fc78:	e2811a01 	add	r1, r1, #4096	; 0x1000
        14fc7c:	e2840ed2 	add	r0, r4, #3360	; 0xd20
        14fc80:	e2800a01 	add	r0, r0, #4096	; 0x1000
        14fc84:	e59f3088 	ldr	r3, [pc, #88]	; 14fd14 <TP3Tool::__dt(void)+0xcc>
        14fc88:	e3e020cf 	mvn	r2, #207	; 0xcf
        14fc8c:	eb62d57d 	bl	1a05288 <$__vc__FPvT1iPFPvi_v>
        14fc90:	e2841fc3 	add	r1, r4, #780	; 0x30c
        14fc94:	e284000c 	add	r0, r4, #12	; 0xc
        14fc98:	e2800a01 	add	r0, r0, #4096	; 0x1000
        14fc9c:	e59f3074 	ldr	r3, [pc, #74]	; 14fd18 <TP3Tool::__dt(void)+0xd0>
        14fca0:	e3e020cf 	mvn	r2, #207	; 0xcf
        14fca4:	eb62d577 	bl	1a05288 <$__vc__FPvT1iPFPvi_v>
        14fca8:	e2840ff1 	add	r0, r4, #964	; 0x3c4
        14fcac:	e3a01000 	mov	r1, #0	; 0x0
        14fcb0:	eb69fa96 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        14fcb4:	e2840fe7 	add	r0, r4, #924	; 0x39c
        14fcb8:	e3a01000 	mov	r1, #0	; 0x0
        14fcbc:	eb69fa93 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        14fcc0:	e2840fd1 	add	r0, r4, #836	; 0x344
        14fcc4:	e3a01000 	mov	r1, #0	; 0x0
        14fcc8:	eb69fa90 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        14fccc:	e2840fb5 	add	r0, r4, #724	; 0x2d4
        14fcd0:	e3a01000 	mov	r1, #0	; 0x0
        14fcd4:	eb69fa8d 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        14fcd8:	e2840fa5 	add	r0, r4, #660	; 0x294
        14fcdc:	e3a01000 	mov	r1, #0	; 0x0
        14fce0:	eb69fa8a 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        14fce4:	e2840f9b 	add	r0, r4, #620	; 0x26c
        14fce8:	e3a01000 	mov	r1, #0	; 0x0
        14fcec:	eb69fa8c 	bl	1bce724 <TUObject::$__dt(void)>
        14fcf0:	e1a00004 	mov	r0, r4
        14fcf4:	e3a01000 	mov	r1, #0	; 0x0
        14fcf8:	eb69b452 	bl	1bbce48 <TCommTool::$__dt(void)>
        14fcfc:	e3150001 	tst	r5, #1	; 0x1
        14fd00:	11a00004 	movne	r0, r4
        14fd04:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        14fd08:	1a69f674 	bne	1bcd6e0 <$__dl(void *)>
        14fd0c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14fd10:	0001fc94 	muleq	r1, r4, ip
        14fd14:	0038b4f4 	ldreqsh	fp, [r8], -r4
        14fd18:	0038b250 	eoreqs	fp, r8, r0, asr r2
    */
}

/**
 * Symbol: TP3Tool::BindStart(void)
 * Address: 0014fd1c
 */
TP3Tool::BindStart(void) {
    /*
        14fd1c:	e1a0c00d 	mov	ip, sp
        14fd20:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14fd24:	e24cb004 	sub	fp, ip, #4	; 0x4
        14fd28:	e1a04000 	mov	r4, r0
        14fd2c:	e5900184 	ldr	r0, [r0, #388]	; fField388
        14fd30:	e3a0e000 	mov	lr, #0	; 0x0
        14fd34:	e5840314 	str	r0, [r4, #788]	; fField788
        14fd38:	e5c4e310 	strb	lr, [r4, #784]	; fField784
        14fd3c:	e3a05008 	mov	r5, #8	; 0x8
        14fd40:	e3a00001 	mov	r0, #1	; 0x1
        14fd44:	e5845304 	str	r5, [r4, #772]	; fField772
        14fd48:	e5c40311 	strb	r0, [r4, #785]	; fField785
        14fd4c:	e2846f9b 	add	r6, r4, #620	; 0x26c
        14fd50:	e284cfd1 	add	ip, r4, #836	; 0x344
        14fd54:	e2847fbf 	add	r7, r4, #764	; 0x2fc
        14fd58:	e2840fd5 	add	r0, r4, #852	; 0x354
        14fd5c:	e3a0103c 	mov	r1, #60	; 0x3c
        14fd60:	e3a02000 	mov	r2, #0	; 0x0
        14fd64:	e3a03000 	mov	r3, #0	; 0x0
        14fd68:	e3a08004 	mov	r8, #4	; 0x4
        14fd6c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14fd70:	e1a0300e 	mov	r3, lr
        14fd74:	e3a02001 	mov	r2, #1	; 0x1
        14fd78:	e1a01008 	mov	r1, r8
        14fd7c:	e3a00020 	mov	r0, #32	; 0x20
        14fd80:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14fd84:	e1a03007 	mov	r3, r7
        14fd88:	e92d0008 	stmdb	sp!, {r3}
        14fd8c:	e1a00006 	mov	r0, r6
        14fd90:	e3a03000 	mov	r3, #0	; 0x0
        14fd94:	e49c1008 	ldr	r1, [ip], #8	; fField8
        14fd98:	e59c2000 	ldr	r2, [ip]
        14fd9c:	eb6a2bea 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        14fda0:	e28dd024 	add	sp, sp, #36	; 0x24
        14fda4:	e1b01000 	movs	r1, r0
        14fda8:	1a000005 	bne	14fdc4 <TP3Tool::BindStart(void)+0xa8>
        14fdac:	e2840a01 	add	r0, r4, #4096	; 0x1000
        14fdb0:	e5a05efc 	str	r5, [r0, #3836]!	; fField3836
        14fdb4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        14fdb8:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
        14fdbc:	e5a40018 	str	r0, [r4, #24]!	; fField24
        14fdc0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        14fdc4:	e1a00004 	mov	r0, r4
        14fdc8:	e5942000 	ldr	r2, [r4]
        14fdcc:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        14fdd0:	e282f078 	add	pc, r2, #120	; 0x78
    */
}

/**
 * Symbol: TP3Tool::UnbindStart(void)
 * Address: 0014fdd4
 */
TP3Tool::UnbindStart(void) {
    /*
        14fdd4:	e1a0c00d 	mov	ip, sp
        14fdd8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14fddc:	e24cb004 	sub	fp, ip, #4	; 0x4
        14fde0:	e1a04000 	mov	r4, r0
        14fde4:	e5900184 	ldr	r0, [r0, #388]	; fField388
        14fde8:	e3a0e000 	mov	lr, #0	; 0x0
        14fdec:	e5840314 	str	r0, [r4, #788]	; fField788
        14fdf0:	e5c4e310 	strb	lr, [r4, #784]	; fField784
        14fdf4:	e3a05009 	mov	r5, #9	; 0x9
        14fdf8:	e3a00001 	mov	r0, #1	; 0x1
        14fdfc:	e5845304 	str	r5, [r4, #772]	; fField772
        14fe00:	e5c40311 	strb	r0, [r4, #785]	; fField785
        14fe04:	e2846f9b 	add	r6, r4, #620	; 0x26c
        14fe08:	e284cfd1 	add	ip, r4, #836	; 0x344
        14fe0c:	e2847fbf 	add	r7, r4, #764	; 0x2fc
        14fe10:	e2840fd5 	add	r0, r4, #852	; 0x354
        14fe14:	e3a0103c 	mov	r1, #60	; 0x3c
        14fe18:	e3a02000 	mov	r2, #0	; 0x0
        14fe1c:	e3a03000 	mov	r3, #0	; 0x0
        14fe20:	e3a08004 	mov	r8, #4	; 0x4
        14fe24:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14fe28:	e1a0300e 	mov	r3, lr
        14fe2c:	e3a02001 	mov	r2, #1	; 0x1
        14fe30:	e1a01008 	mov	r1, r8
        14fe34:	e3a00020 	mov	r0, #32	; 0x20
        14fe38:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14fe3c:	e1a03007 	mov	r3, r7
        14fe40:	e92d0008 	stmdb	sp!, {r3}
        14fe44:	e1a00006 	mov	r0, r6
        14fe48:	e3a03000 	mov	r3, #0	; 0x0
        14fe4c:	e49c1008 	ldr	r1, [ip], #8	; fField8
        14fe50:	e59c2000 	ldr	r2, [ip]
        14fe54:	eb6a2bbc 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        14fe58:	e28dd024 	add	sp, sp, #36	; 0x24
        14fe5c:	e1b01000 	movs	r1, r0
        14fe60:	1a000005 	bne	14fe7c <TP3Tool::UnbindStart(void)+0xa8>
        14fe64:	e2840a01 	add	r0, r4, #4096	; 0x1000
        14fe68:	e5a05efc 	str	r5, [r0, #3836]!	; fField3836
        14fe6c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        14fe70:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
        14fe74:	e5a40018 	str	r0, [r4, #24]!	; fField24
        14fe78:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        14fe7c:	e1a00004 	mov	r0, r4
        14fe80:	e5942000 	ldr	r2, [r4]
        14fe84:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        14fe88:	e282f080 	add	pc, r2, #128	; 0x80
    */
}

/**
 * Symbol: TP3Tool::PostGetBytes(CBufferList *)
 * Address: 0014fe8c
 */
TP3Tool::PostGetBytes(CBufferList *) {
    /*
        14fe8c:	e1a0c00d 	mov	ip, sp
        14fe90:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14fe94:	e24cb004 	sub	fp, ip, #4	; 0x4
        14fe98:	e1a04000 	mov	r4, r0
        14fe9c:	e5a012c0 	str	r1, [r0, #704]!
        14fea0:	e2800d35 	add	r0, r0, #3392	; 0xd40
        14fea4:	e5d00e24 	ldrb	r0, [r0, #3620]	; fField3620
        14fea8:	e3a0e000 	mov	lr, #0	; 0x0
        14feac:	e3300000 	teq	r0, #0	; 0x0
        14feb0:	0a000007 	beq	14fed4 <TP3Tool::PostGetBytes(CBufferList *)+0x48>
        14feb4:	e284004c 	add	r0, r4, #76	; 0x4c
        14feb8:	e590100c 	ldr	r1, [r0, #12]	; fField12
        14febc:	e58412c4 	str	r1, [r4, #708]	; fField708
        14fec0:	e5d01010 	ldrb	r1, [r0, #16]	; fField16
        14fec4:	e5c412c8 	strb	r1, [r4, #712]	; fField712
        14fec8:	e5d00011 	ldrb	r0, [r0, #17]
        14fecc:	e5c402c9 	strb	r0, [r4, #713]	; fField713
        14fed0:	ea000002 	b	14fee0 <TP3Tool::PostGetBytes(CBufferList *)+0x54>
        14fed4:	e584e2c4 	str	lr, [r4, #708]	; fField708
        14fed8:	e5c4e2c8 	strb	lr, [r4, #712]	; fField712
        14fedc:	e5c4e2c9 	strb	lr, [r4, #713]	; fField713
        14fee0:	e2845f9b 	add	r5, r4, #620	; 0x26c
        14fee4:	e284cfb5 	add	ip, r4, #724	; 0x2d4
        14fee8:	e2846fae 	add	r6, r4, #696	; 0x2b8
        14feec:	e2840fb9 	add	r0, r4, #740	; 0x2e4
        14fef0:	e3a01018 	mov	r1, #24	; 0x18
        14fef4:	e3a02000 	mov	r2, #0	; 0x0
        14fef8:	e3a03000 	mov	r3, #0	; 0x0
        14fefc:	e3a07001 	mov	r7, #1	; 0x1
        14ff00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14ff04:	e1a0300e 	mov	r3, lr
        14ff08:	e3a02001 	mov	r2, #1	; 0x1
        14ff0c:	e1a01007 	mov	r1, r7
        14ff10:	e3a0001c 	mov	r0, #28	; 0x1c
        14ff14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14ff18:	e1a03006 	mov	r3, r6
        14ff1c:	e92d0008 	stmdb	sp!, {r3}
        14ff20:	e1a00005 	mov	r0, r5
        14ff24:	e3a03000 	mov	r3, #0	; 0x0
        14ff28:	e49c1008 	ldr	r1, [ip], #8	; fField8
        14ff2c:	e59c2000 	ldr	r2, [ip]
        14ff30:	eb6a2b85 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        14ff34:	e28dd024 	add	sp, sp, #36	; 0x24
        14ff38:	e3300000 	teq	r0, #0	; 0x0
        14ff3c:	05941018 	ldreq	r1, [r4, #24]	; fField24
        14ff40:	03811201 	orreq	r1, r1, #268435456	; 0x10000000
        14ff44:	05a41018 	streq	r1, [r4, #24]!	; fField24
        14ff48:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::GetBytesComplete(void)
 * Address: 0014ff4c
 */
TP3Tool::GetBytesComplete(void) {
    /*
        14ff4c:	e1a0c00d 	mov	ip, sp
        14ff50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14ff54:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ff58:	e1a04000 	mov	r4, r0
        14ff5c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14ff60:	e28d0004 	add	r0, sp, #4	; 0x4
        14ff64:	ebfbe759 	bl	49cd0 <TCRC16::Reset(void)>
        14ff68:	e5940018 	ldr	r0, [r4, #24]	; fField24
        14ff6c:	e3c00201 	bic	r0, r0, #268435456	; 0x10000000
        14ff70:	e5840018 	str	r0, [r4, #24]	; fField24
        14ff74:	e2840a01 	add	r0, r4, #4096	; 0x1000
        14ff78:	e5d01e24 	ldrb	r1, [r0, #3620]	; fField3620
        14ff7c:	e3310000 	teq	r1, #0	; 0x0
        14ff80:	0a000007 	beq	14ffa4 <TP3Tool::GetBytesComplete(void)+0x58>
        14ff84:	e59412ec 	ldr	r1, [r4, #748]	; fField748
        14ff88:	e59432f8 	ldr	r3, [r4, #760]	; fField760
        14ff8c:	e1a00004 	mov	r0, r4
        14ff90:	e3a02001 	mov	r2, #1	; 0x1
        14ff94:	e594c000 	ldr	ip, [r4]
        14ff98:	e1a0e00f 	mov	lr, pc
        14ff9c:	e28cf0ec 	add	pc, ip, #236	; 0xec
        14ffa0:	ea000049 	b	1500cc <TP3Tool::GetBytesComplete(void)+0x180>
        14ffa4:	e59412ec 	ldr	r1, [r4, #748]	; fField748
        14ffa8:	e3310000 	teq	r1, #0	; 0x0
        14ffac:	0a00000a 	beq	14ffdc <TP3Tool::GetBytesComplete(void)+0x90>
        14ffb0:	e281cc46 	add	ip, r1, #17920	; 0x4600
        14ffb4:	e37c0053 	cmn	ip, #83	; 0x53
        14ffb8:	0a000004 	beq	14ffd0 <TP3Tool::GetBytesComplete(void)+0x84>
        14ffbc:	e281cdfa 	add	ip, r1, #16000	; 0x3e80
        14ffc0:	e37c0005 	cmn	ip, #5	; 0x5
        14ffc4:	11a00004 	movne	r0, r4
        14ffc8:	1a00002a 	bne	150078 <TP3Tool::GetBytesComplete(void)+0x12c>
        14ffcc:	ea00003e 	b	1500cc <TP3Tool::GetBytesComplete(void)+0x180>
        14ffd0:	e1a00004 	mov	r0, r4
        14ffd4:	eb631f02 	bl	1a17be4 <TP3Tool::$ReadSync(void)>
        14ffd8:	ea00003b 	b	1500cc <TP3Tool::GetBytesComplete(void)+0x180>
        14ffdc:	e59010e0 	ldr	r1, [r0, #224]	; fField224
        14ffe0:	e081c101 	add	ip, r1, r1, lsl #2
        14ffe4:	e08c1181 	add	r1, ip, r1, lsl #3
        14ffe8:	e0841201 	add	r1, r4, r1, lsl #4
        14ffec:	e2815ff7 	add	r5, r1, #988	; 0x3dc
        14fff0:	e5900e1c 	ldr	r0, [r0, #3612]	; fField3612
        14fff4:	e3300001 	teq	r0, #1	; 0x1
        14fff8:	0a000020 	beq	150080 <TP3Tool::GetBytesComplete(void)+0x134>
        14fffc:	e3300002 	teq	r0, #2	; 0x2
        150000:	0a000024 	beq	150098 <TP3Tool::GetBytesComplete(void)+0x14c>
        150004:	e3300003 	teq	r0, #3	; 0x3
        150008:	1a00002f 	bne	1500cc <TP3Tool::GetBytesComplete(void)+0x180>
        15000c:	e28d0004 	add	r0, sp, #4	; 0x4
        150010:	ebfbe72e 	bl	49cd0 <TCRC16::Reset(void)>
        150014:	e595004c 	ldr	r0, [r5, #76]	; fField76
        150018:	e2802002 	add	r2, r0, #2	; 0x2
        15001c:	e2851053 	add	r1, r5, #83	; 0x53
        150020:	e28d0004 	add	r0, sp, #4	; 0x4
        150024:	ebfbe769 	bl	49dd0 <TCRC16::ComputeCRC(unsigned char *, unsigned long)>
        150028:	e28d0004 	add	r0, sp, #4	; 0x4
        15002c:	ebfbe77f 	bl	49e30 <TCRC16::Get(void)>
        150030:	e5900000 	ldr	r0, [r0]
        150034:	e58d0000 	str	r0, [sp]
        150038:	e5d51051 	ldrb	r1, [r5, #81]
        15003c:	e5dd0000 	ldrb	r0, [sp]
        150040:	e1310000 	teq	r1, r0
        150044:	05dd0001 	ldreqb	r0, [sp, #1]
        150048:	05d51052 	ldreqb	r1, [r5, #82]
        15004c:	01300001 	teqeq	r0, r1
        150050:	11a00004 	movne	r0, r4
        150054:	13a02001 	movne	r2, #1	; 0x1
        150058:	1a000017 	bne	1500bc <TP3Tool::GetBytesComplete(void)+0x170>
        15005c:	e5d50057 	ldrb	r0, [r5, #87]
        150060:	e2000080 	and	r0, r0, #128	; 0x80
        150064:	e3300080 	teq	r0, #128	; 0x80
        150068:	1a000018 	bne	1500d0 <TP3Tool::GetBytesComplete(void)+0x184>
        15006c:	e1a00004 	mov	r0, r4
        150070:	e3e01011 	mvn	r1, #17	; 0x11
        150074:	e2411b29 	sub	r1, r1, #41984	; 0xa400
        150078:	eb69c404 	bl	1bc1090 <TCommTool::$StartAbort(long)>
        15007c:	ea000012 	b	1500cc <TP3Tool::GetBytesComplete(void)+0x180>
        150080:	e5d50050 	ldrb	r0, [r5, #80]
        150084:	e330005a 	teq	r0, #90	; 0x5a
        150088:	1affffd0 	bne	14ffd0 <TP3Tool::GetBytesComplete(void)+0x84>
        15008c:	e1a00004 	mov	r0, r4
        150090:	eb631ed2 	bl	1a17be0 <TP3Tool::$ReadHeader(void)>
        150094:	ea00000c 	b	1500cc <TP3Tool::GetBytesComplete(void)+0x180>
        150098:	e5d51054 	ldrb	r1, [r5, #84]
        15009c:	e5d50053 	ldrb	r0, [r5, #83]
        1500a0:	e0810400 	add	r0, r1, r0, lsl #8
        1500a4:	e585004c 	str	r0, [r5, #76]	; fField76
        1500a8:	e5b5004c 	ldr	r0, [r5, #76]!	; fField76
        1500ac:	e350007a 	cmp	r0, #122	; 0x7a
        1500b0:	e1a00004 	mov	r0, r4
        1500b4:	da000003 	ble	1500c8 <TP3Tool::GetBytesComplete(void)+0x17c>
        1500b8:	e3a02003 	mov	r2, #3	; 0x3
        1500bc:	e3a01025 	mov	r1, #37	; 0x25
        1500c0:	eb6322eb 	bl	1a18c74 <TP3Tool::$SendSystemPacket(unsigned char, unsigned char)>
        1500c4:	eaffffc1 	b	14ffd0 <TP3Tool::GetBytesComplete(void)+0x84>
        1500c8:	eb631ec3 	bl	1a17bdc <TP3Tool::$ReadBody(void)>
        1500cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1500d0:	e5d51056 	ldrb	r1, [r5, #86]
        1500d4:	e1a00004 	mov	r0, r4
        1500d8:	eb62f988 	bl	1a0e700 <TP3Tool::$ClearPacketsWaitingOnAck(int)>
        1500dc:	e1a00004 	mov	r0, r4
        1500e0:	eb630a10 	bl	1a12928 <TP3Tool::$HandlePacket(void)>
        1500e4:	eaffffb9 	b	14ffd0 <TP3Tool::GetBytesComplete(void)+0x84>
    */
}

/**
 * Symbol: TP3Tool::ReadSync(void)
 * Address: 001500e8
 */
TP3Tool::ReadSync(void) {
    /*
        1500e8:	e1a0c00d 	mov	ip, sp
        1500ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1500f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1500f4:	e1a04000 	mov	r4, r0
        1500f8:	e3a00001 	mov	r0, #1	; 0x1
        1500fc:	e2845a01 	add	r5, r4, #4096	; 0x1000
        150100:	e5850e1c 	str	r0, [r5, #3612]	; fField3612
        150104:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        150108:	e080c100 	add	ip, r0, r0, lsl #2
        15010c:	e08c0180 	add	r0, ip, r0, lsl #3
        150110:	e0840200 	add	r0, r4, r0, lsl #4
        150114:	e5b013e0 	ldr	r1, [r0, #992]!
        150118:	e1a0e00f 	mov	lr, pc
        15011c:	e281f028 	add	pc, r1, #40	; 0x28
        150120:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        150124:	e080c100 	add	ip, r0, r0, lsl #2
        150128:	e08c0180 	add	r0, ip, r0, lsl #3
        15012c:	e0840200 	add	r0, r4, r0, lsl #4
        150130:	e3a02001 	mov	r2, #1	; 0x1
        150134:	e3a0107f 	mov	r1, #127	; 0x7f
        150138:	e5b033e0 	ldr	r3, [r0, #992]!
        15013c:	e1a0e00f 	mov	lr, pc
        150140:	e283f034 	add	pc, r3, #52	; 0x34
        150144:	e5b500e0 	ldr	r0, [r5, #224]!	; fField224
        150148:	e080c100 	add	ip, r0, r0, lsl #2
        15014c:	e08c0180 	add	r0, ip, r0, lsl #3
        150150:	e0840200 	add	r0, r4, r0, lsl #4
        150154:	e2801e3e 	add	r1, r0, #992	; 0x3e0
        150158:	e1a00004 	mov	r0, r4
        15015c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        150160:	ea631a6e 	b	1a16b20 <TP3Tool::$PostGetBytes(CBufferList *)>
    */
}

/**
 * Symbol: TP3Tool::ReadHeader(void)
 * Address: 00150164
 */
TP3Tool::ReadHeader(void) {
    /*
        150164:	e1a0c00d 	mov	ip, sp
        150168:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15016c:	e24cb004 	sub	fp, ip, #4	; 0x4
        150170:	e1a04000 	mov	r4, r0
        150174:	e3a00002 	mov	r0, #2	; 0x2
        150178:	e2845a01 	add	r5, r4, #4096	; 0x1000
        15017c:	e5850e1c 	str	r0, [r5, #3612]	; fField3612
        150180:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        150184:	e080c100 	add	ip, r0, r0, lsl #2
        150188:	e08c0180 	add	r0, ip, r0, lsl #3
        15018c:	e0840200 	add	r0, r4, r0, lsl #4
        150190:	e5b013e0 	ldr	r1, [r0, #992]!
        150194:	e1a0e00f 	mov	lr, pc
        150198:	e281f028 	add	pc, r1, #40	; 0x28
        15019c:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        1501a0:	e080c100 	add	ip, r0, r0, lsl #2
        1501a4:	e08c0180 	add	r0, ip, r0, lsl #3
        1501a8:	e0840200 	add	r0, r4, r0, lsl #4
        1501ac:	e3e02000 	mvn	r2, #0	; 0x0
        1501b0:	e3a01001 	mov	r1, #1	; 0x1
        1501b4:	e5b033e0 	ldr	r3, [r0, #992]!
        1501b8:	e1a0e00f 	mov	lr, pc
        1501bc:	e283f034 	add	pc, r3, #52	; 0x34
        1501c0:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        1501c4:	e080c100 	add	ip, r0, r0, lsl #2
        1501c8:	e08c0180 	add	r0, ip, r0, lsl #3
        1501cc:	e0840200 	add	r0, r4, r0, lsl #4
        1501d0:	e3a02001 	mov	r2, #1	; 0x1
        1501d4:	e3a0107b 	mov	r1, #123	; 0x7b
        1501d8:	e5b033e0 	ldr	r3, [r0, #992]!
        1501dc:	e1a0e00f 	mov	lr, pc
        1501e0:	e283f034 	add	pc, r3, #52	; 0x34
        1501e4:	e5b500e0 	ldr	r0, [r5, #224]!	; fField224
        1501e8:	e080c100 	add	ip, r0, r0, lsl #2
        1501ec:	e08c0180 	add	r0, ip, r0, lsl #3
        1501f0:	e0840200 	add	r0, r4, r0, lsl #4
        1501f4:	e2801e3e 	add	r1, r0, #992	; 0x3e0
        1501f8:	e1a00004 	mov	r0, r4
        1501fc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        150200:	ea631a46 	b	1a16b20 <TP3Tool::$PostGetBytes(CBufferList *)>
    */
}

/**
 * Symbol: TP3Tool::ReadBody(void)
 * Address: 00150204
 */
TP3Tool::ReadBody(void) {
    /*
        150204:	e1a0c00d 	mov	ip, sp
        150208:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15020c:	e24cb004 	sub	fp, ip, #4	; 0x4
        150210:	e1a04000 	mov	r4, r0
        150214:	e3a00003 	mov	r0, #3	; 0x3
        150218:	e2845a01 	add	r5, r4, #4096	; 0x1000
        15021c:	e5850e1c 	str	r0, [r5, #3612]	; fField3612
        150220:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        150224:	e080c100 	add	ip, r0, r0, lsl #2
        150228:	e08c0180 	add	r0, ip, r0, lsl #3
        15022c:	e0840200 	add	r0, r4, r0, lsl #4
        150230:	e5b013e0 	ldr	r1, [r0, #992]!
        150234:	e1a0e00f 	mov	lr, pc
        150238:	e281f028 	add	pc, r1, #40	; 0x28
        15023c:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        150240:	e080c100 	add	ip, r0, r0, lsl #2
        150244:	e08c0180 	add	r0, ip, r0, lsl #3
        150248:	e0840200 	add	r0, r4, r0, lsl #4
        15024c:	e3e02000 	mvn	r2, #0	; 0x0
        150250:	e3a01005 	mov	r1, #5	; 0x5
        150254:	e5b033e0 	ldr	r3, [r0, #992]!
        150258:	e1a0e00f 	mov	lr, pc
        15025c:	e283f034 	add	pc, r3, #52	; 0x34
        150260:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        150264:	e080c100 	add	ip, r0, r0, lsl #2
        150268:	e08c0180 	add	r0, ip, r0, lsl #3
        15026c:	e0840200 	add	r0, r4, r0, lsl #4
        150270:	e2803e3e 	add	r3, r0, #992	; 0x3e0
        150274:	e5900428 	ldr	r0, [r0, #1064]
        150278:	e260107b 	rsb	r1, r0, #123	; 0x7b
        15027c:	e1a00003 	mov	r0, r3
        150280:	e3a02001 	mov	r2, #1	; 0x1
        150284:	e5933000 	ldr	r3, [r3]
        150288:	e1a0e00f 	mov	lr, pc
        15028c:	e283f034 	add	pc, r3, #52	; 0x34
        150290:	e5b500e0 	ldr	r0, [r5, #224]!	; fField224
        150294:	e080c100 	add	ip, r0, r0, lsl #2
        150298:	e08c0180 	add	r0, ip, r0, lsl #3
        15029c:	e0840200 	add	r0, r4, r0, lsl #4
        1502a0:	e2801e3e 	add	r1, r0, #992	; 0x3e0
        1502a4:	e1a00004 	mov	r0, r4
        1502a8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1502ac:	ea631a1b 	b	1a16b20 <TP3Tool::$PostGetBytes(CBufferList *)>
    */
}

/**
 * Symbol: TP3Tool::HandlePacket(void)
 * Address: 001502b0
 */
TP3Tool::HandlePacket(void) {
    /*
        1502b0:	e1a0c00d 	mov	ip, sp
        1502b4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1502b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1502bc:	e1a04000 	mov	r4, r0
        1502c0:	e2805a01 	add	r5, r0, #4096	; 0x1000
        1502c4:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        1502c8:	e080c100 	add	ip, r0, r0, lsl #2
        1502cc:	e08c0180 	add	r0, ip, r0, lsl #3
        1502d0:	e0840200 	add	r0, r4, r0, lsl #4
        1502d4:	e2806ff7 	add	r6, r0, #988	; 0x3dc
        1502d8:	e1a00004 	mov	r0, r4
        1502dc:	eb632250 	bl	1a18c24 <TP3Tool::$ResetHeartBeat(void)>
        1502e0:	e5d60057 	ldrb	r0, [r6, #87]
        1502e4:	e2402020 	sub	r2, r0, #32	; 0x20
        1502e8:	e3a00000 	mov	r0, #0	; 0x0
        1502ec:	e3a01001 	mov	r1, #1	; 0x1
        1502f0:	e352000b 	cmp	r2, #11	; 0xb
        1502f4:	908ff102 	addls	pc, pc, r2, lsl #2
        1502f8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1502fc:	ea00000b 	b	150330 <TP3Tool::HandlePacket(void)+0x80>
        150300:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        150304:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        150308:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        15030c:	ea00002f 	b	1503d0 <TP3Tool::HandlePacket(void)+0x120>
        150310:	ea000052 	b	150460 <TP3Tool::HandlePacket(void)+0x1b0>
        150314:	ea000060 	b	15049c <TP3Tool::HandlePacket(void)+0x1ec>
        150318:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        15031c:	ea000067 	b	1504c0 <TP3Tool::HandlePacket(void)+0x210>
        150320:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        150324:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        150328:	e5a510ec 	str	r1, [r5, #236]!	; fField236
        15032c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        150330:	e5d52e20 	ldrb	r2, [r5, #3616]	; fField3616
        150334:	e3320000 	teq	r2, #0	; 0x0
        150338:	0a000004 	beq	150350 <TP3Tool::HandlePacket(void)+0xa0>
        15033c:	e5d62055 	ldrb	r2, [r6, #85]
        150340:	e5953e0c 	ldr	r3, [r5, #3596]
        150344:	e1320003 	teq	r2, r3
        150348:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        15034c:	e5c50e20 	strb	r0, [r5, #3616]	; fField3616
        150350:	e5d62055 	ldrb	r2, [r6, #85]
        150354:	e5950e0c 	ldr	r0, [r5, #3596]
        150358:	e1320000 	teq	r2, r0
        15035c:	1a000017 	bne	1503c0 <TP3Tool::HandlePacket(void)+0x110>
        150360:	e59520e4 	ldr	r2, [r5, #228]	; fField228
        150364:	e3320010 	teq	r2, #16	; 0x10
        150368:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        15036c:	e5850e04 	str	r0, [r5, #3588]
        150370:	e2800001 	add	r0, r0, #1	; 0x1
        150374:	e5850e0c 	str	r0, [r5, #3596]
        150378:	e350007f 	cmp	r0, #127	; 0x7f
        15037c:	c3a00010 	movgt	r0, #16	; 0x10
        150380:	c5850e0c 	strgt	r0, [r5, #3596]
        150384:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        150388:	e080c100 	add	ip, r0, r0, lsl #2
        15038c:	e08c0180 	add	r0, ip, r0, lsl #3
        150390:	e0840200 	add	r0, r4, r0, lsl #4
        150394:	e5c013dc 	strb	r1, [r0, #988]
        150398:	e59500e0 	ldr	r0, [r5, #224]	; fField224
        15039c:	e2800001 	add	r0, r0, #1	; 0x1
        1503a0:	e200000f 	and	r0, r0, #15	; 0xf
        1503a4:	e58500e0 	str	r0, [r5, #224]	; fField224
        1503a8:	e59500e4 	ldr	r0, [r5, #228]	; fField228
        1503ac:	e2800001 	add	r0, r0, #1	; 0x1
        1503b0:	e5a500e4 	str	r0, [r5, #228]!	; fField228
        1503b4:	e1a00004 	mov	r0, r4
        1503b8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1503bc:	ea62fcf2 	b	1a0f78c <TP3Tool::$DeliverInput(void)>
        1503c0:	e1a00004 	mov	r0, r4
        1503c4:	e3a02002 	mov	r2, #2	; 0x2
        1503c8:	e3a01025 	mov	r1, #37	; 0x25
        1503cc:	ea00004a 	b	1504fc <TP3Tool::HandlePacket(void)+0x24c>
        1503d0:	e5d52e22 	ldrb	r2, [r5, #3618]	; fField3618
        1503d4:	e3320000 	teq	r2, #0	; 0x0
        1503d8:	1a00001a 	bne	150448 <TP3Tool::HandlePacket(void)+0x198>
        1503dc:	e1a06001 	mov	r6, r1
        1503e0:	e5c51e22 	strb	r1, [r5, #3618]	; fField3618
        1503e4:	e5d51e25 	ldrb	r1, [r5, #3621]
        1503e8:	e3310000 	teq	r1, #0	; 0x0
        1503ec:	0a000010 	beq	150434 <TP3Tool::HandlePacket(void)+0x184>
        1503f0:	e5c50e25 	strb	r0, [r5, #3621]
        1503f4:	e24dd024 	sub	sp, sp, #36	; 0x24
        1503f8:	e1a0000d 	mov	r0, sp
        1503fc:	eb6a7cf1 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
        150400:	e58d6010 	str	r6, [sp, #16]	; fField16
        150404:	e59f0024 	ldr	r0, [pc, #24]	; 150430 <TP3Tool::HandlePacket(void)+0x180>	; fField24
        150408:	e58d001c 	str	r0, [sp, #28]
        15040c:	e5940204 	ldr	r0, [r4, #516]	; fField516
        150410:	e58d0020 	str	r0, [sp, #32]
        150414:	e1a0100d 	mov	r1, sp
        150418:	e1a00004 	mov	r0, r4
        15041c:	e3a02000 	mov	r2, #0	; 0x0
        150420:	e5943000 	ldr	r3, [r4]
        150424:	e1a0e00f 	mov	lr, pc
        150428:	e283f03c 	add	pc, r3, #60	; 0x3c
        15042c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        150430:	70332020 	eorvcs	r2, r3, r0, lsr #32
        150434:	e1a00004 	mov	r0, r4
        150438:	e3a01000 	mov	r1, #0	; 0x0
        15043c:	e5942000 	ldr	r2, [r4]
        150440:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        150444:	e282f054 	add	pc, r2, #84	; 0x54
        150448:	e5d61055 	ldrb	r1, [r6, #85]
        15044c:	e5952e04 	ldr	r2, [r5, #3588]
        150450:	e1310002 	teq	r1, r2
        150454:	1affffd9 	bne	1503c0 <TP3Tool::HandlePacket(void)+0x110>
        150458:	e5c50e20 	strb	r0, [r5, #3616]	; fField3616
        15045c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        150460:	e5d51e22 	ldrb	r1, [r5, #3618]	; fField3618
        150464:	e3310000 	teq	r1, #0	; 0x0
        150468:	01a00004 	moveq	r0, r4
        15046c:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
        150470:	0a6321fb 	beq	1a18c64 <TP3Tool::$SendInitPacket(void)>
        150474:	e5951df0 	ldr	r1, [r5, #3568]	; fField3568
        150478:	e5851df4 	str	r1, [r5, #3572]	; fField3572
        15047c:	e2852c0e 	add	r2, r5, #3584	; 0xe00
        150480:	e8120006 	ldmda	r2, {r1, r2}
        150484:	e0811002 	add	r1, r1, r2
        150488:	e5a51dfc 	str	r1, [r5, #3580]!	; fField3580
        15048c:	e5850004 	str	r0, [r5, #4]
        150490:	e1a00004 	mov	r0, r4
        150494:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        150498:	ea6321f3 	b	1a18c6c <TP3Tool::$SendNextOutput(void)>
        15049c:	e5c50e20 	strb	r0, [r5, #3616]	; fField3616
        1504a0:	e5d60055 	ldrb	r0, [r6, #85]
        1504a4:	e5b51e04 	ldr	r1, [r5, #3588]!
        1504a8:	e1300001 	teq	r0, r1
        1504ac:	1affffc3 	bne	1503c0 <TP3Tool::HandlePacket(void)+0x110>
        1504b0:	e1a00004 	mov	r0, r4
        1504b4:	e3a02000 	mov	r2, #0	; 0x0
        1504b8:	e3a01024 	mov	r1, #36	; 0x24
        1504bc:	ea00000e 	b	1504fc <TP3Tool::HandlePacket(void)+0x24c>
        1504c0:	e5850df0 	str	r0, [r5, #3568]	; fField3568
        1504c4:	e5850df4 	str	r0, [r5, #3572]	; fField3572
        1504c8:	e5850df8 	str	r0, [r5, #3576]	; fField3576
        1504cc:	e5850dfc 	str	r0, [r5, #3580]	; fField3580
        1504d0:	e5850e00 	str	r0, [r5, #3584]
        1504d4:	e5851e1c 	str	r1, [r5, #3612]	; fField3612
        1504d8:	e5c50e20 	strb	r0, [r5, #3616]	; fField3616
        1504dc:	e5c50e21 	strb	r0, [r5, #3617]	; fField3617
        1504e0:	e5d60055 	ldrb	r0, [r6, #85]
        1504e4:	e5850e0c 	str	r0, [r5, #3596]
        1504e8:	e5d60056 	ldrb	r0, [r6, #86]
        1504ec:	e5a50e10 	str	r0, [r5, #3600]!
        1504f0:	e1a00004 	mov	r0, r4
        1504f4:	e3a02000 	mov	r2, #0	; 0x0
        1504f8:	e3a01029 	mov	r1, #41	; 0x29
        1504fc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        150500:	ea6321db 	b	1a18c74 <TP3Tool::$SendSystemPacket(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TP3Tool::PostPutBytes(CBufferList *)
 * Address: 00150504
 */
TP3Tool::PostPutBytes(CBufferList *) {
    /*
        150504:	e1a0c00d 	mov	ip, sp
        150508:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15050c:	e24cb004 	sub	fp, ip, #4	; 0x4
        150510:	e1a04000 	mov	r4, r0
        150514:	e5a01280 	str	r1, [r0, #640]!
        150518:	e2800d36 	add	r0, r0, #3456	; 0xd80
        15051c:	e5d00e24 	ldrb	r0, [r0, #3620]	; fField3620
        150520:	e3a0e000 	mov	lr, #0	; 0x0
        150524:	e3300000 	teq	r0, #0	; 0x0
        150528:	0a000005 	beq	150544 <TP3Tool::PostPutBytes(CBufferList *)+0x40>
        15052c:	e284004c 	add	r0, r4, #76	; 0x4c
        150530:	e5d01011 	ldrb	r1, [r0, #17]
        150534:	e5c41289 	strb	r1, [r4, #649]	; fField649
        150538:	e5d00012 	ldrb	r0, [r0, #18]
        15053c:	e5c4028a 	strb	r0, [r4, #650]	; fField650
        150540:	ea000001 	b	15054c <TP3Tool::PostPutBytes(CBufferList *)+0x48>
        150544:	e5c4e289 	strb	lr, [r4, #649]	; fField649
        150548:	e5c4e28a 	strb	lr, [r4, #650]	; fField650
        15054c:	e2845f9b 	add	r5, r4, #620	; 0x26c
        150550:	e284cfa5 	add	ip, r4, #660	; 0x294
        150554:	e2846f9e 	add	r6, r4, #632	; 0x278
        150558:	e2840fa9 	add	r0, r4, #676	; 0x2a4
        15055c:	e3a01014 	mov	r1, #20	; 0x14
        150560:	e3a02000 	mov	r2, #0	; 0x0
        150564:	e3a03000 	mov	r3, #0	; 0x0
        150568:	e3a07002 	mov	r7, #2	; 0x2
        15056c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        150570:	e1a0300e 	mov	r3, lr
        150574:	e3a02001 	mov	r2, #1	; 0x1
        150578:	e1a01007 	mov	r1, r7
        15057c:	e3a0001c 	mov	r0, #28	; 0x1c
        150580:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        150584:	e1a03006 	mov	r3, r6
        150588:	e92d0008 	stmdb	sp!, {r3}
        15058c:	e1a00005 	mov	r0, r5
        150590:	e3a03000 	mov	r3, #0	; 0x0
        150594:	e49c1008 	ldr	r1, [ip], #8	; fField8
        150598:	e59c2000 	ldr	r2, [ip]
        15059c:	eb6a29ea 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1505a0:	e28dd024 	add	sp, sp, #36	; 0x24
        1505a4:	e3300000 	teq	r0, #0	; 0x0
        1505a8:	05941018 	ldreq	r1, [r4, #24]	; fField24
        1505ac:	03811302 	orreq	r1, r1, #134217728	; 0x8000000
        1505b0:	05a41018 	streq	r1, [r4, #24]!	; fField24
        1505b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::PutBytesComplete(void)
 * Address: 001505b8
 */
TP3Tool::PutBytesComplete(void) {
    /*
        1505b8:	e1a03000 	mov	r3, r0
        1505bc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1505c0:	e3c00302 	bic	r0, r0, #134217728	; 0x8000000
        1505c4:	e5830018 	str	r0, [r3, #24]	; fField24
        1505c8:	e2830a01 	add	r0, r3, #4096	; 0x1000
        1505cc:	e5d00e24 	ldrb	r0, [r0, #3620]	; fField3620
        1505d0:	e3300000 	teq	r0, #0	; 0x0
        1505d4:	0a000004 	beq	1505ec <TP3Tool::PutBytesComplete(void)+0x34>
        1505d8:	e59312ac 	ldr	r1, [r3, #684]
        1505dc:	e59322b4 	ldr	r2, [r3, #692]
        1505e0:	e1a00003 	mov	r0, r3
        1505e4:	e5933000 	ldr	r3, [r3]
        1505e8:	e283f0d4 	add	pc, r3, #212	; 0xd4
        1505ec:	e59312ac 	ldr	r1, [r3, #684]
        1505f0:	e3310000 	teq	r1, #0	; 0x0
        1505f4:	01a00003 	moveq	r0, r3
        1505f8:	0a63219b 	beq	1a18c6c <TP3Tool::$SendNextOutput(void)>
        1505fc:	e281cdfa 	add	ip, r1, #16000	; 0x3e80
        150600:	e37c0005 	cmn	ip, #5	; 0x5
        150604:	11a00003 	movne	r0, r3
        150608:	1a69c2a0 	bne	1bc1090 <TCommTool::$StartAbort(long)>
        15060c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TP3Tool::TaskConstructor(void)
 * Address: 00150610
 */
TP3Tool::TaskConstructor(void) {
    /*
        150610:	e1a0c00d 	mov	ip, sp
        150614:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        150618:	e24cb004 	sub	fp, ip, #4	; 0x4
        15061c:	e1a04000 	mov	r4, r0
        150620:	eb69c29d 	bl	1bc109c <TCommTool::$TaskConstructor(void)>
        150624:	e1b05000 	movs	r5, r0
        150628:	1a00000e 	bne	150668 <TP3Tool::TaskConstructor(void)+0x58>
        15062c:	e1a00004 	mov	r0, r4
        150630:	e5941000 	ldr	r1, [r4]
        150634:	e1a0e00f 	mov	lr, pc
        150638:	e281ff4a 	add	pc, r1, #296	; 0x128
        15063c:	e1b05000 	movs	r5, r0
        150640:	1a000004 	bne	150658 <TP3Tool::TaskConstructor(void)+0x48>
        150644:	e3a00e11 	mov	r0, #272	; 0x110
        150648:	e2841a01 	add	r1, r4, #4096	; 0x1000
        15064c:	e5a10f04 	str	r0, [r1, #3844]!
        150650:	e3a00000 	mov	r0, #0	; 0x0
        150654:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        150658:	e1a00004 	mov	r0, r4
        15065c:	e5941000 	ldr	r1, [r4]
        150660:	e1a0e00f 	mov	lr, pc
        150664:	e281f00c 	add	pc, r1, #12	; 0xc
        150668:	e1a00005 	mov	r0, r5
        15066c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::CancelModemCmds(void)
 * Address: 00150670
 */
TP3Tool::CancelModemCmds(void) {
    /*
        150670:	e3a03202 	mov	r3, #536870912	; 0x20000000
        150674:	e3a02007 	mov	r2, #7	; 0x7
        150678:	e3a01005 	mov	r1, #5	; 0x5
        15067c:	ea630cdd 	b	1a139f8 <TP3Tool::$KillModemRequest(unsigned long, CommToolRequestType, unsigned long)>
    */
}

/**
 * Symbol: TP3Tool::KillModemRequest(unsigned long, CommToolRequestType, unsigned long)
 * Address: 00150680
 */
TP3Tool::KillModemRequest(unsigned long, CommToolRequestType, unsigned long) {
    /*
        150680:	e1a0c00d 	mov	ip, sp
        150684:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        150688:	e24cb004 	sub	fp, ip, #4	; 0x4
        15068c:	e1a04000 	mov	r4, r0
        150690:	e1a07002 	mov	r7, r2
        150694:	e1a05003 	mov	r5, r3
        150698:	e2800fe7 	add	r0, r0, #924	; 0x39c
        15069c:	e1a06000 	mov	r6, r0
        1506a0:	eb6a31da 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        1506a4:	e3300000 	teq	r0, #0	; 0x0
        1506a8:	1a00001a 	bne	150718 <TP3Tool::KillModemRequest(unsigned long, CommToolRequestType, unsigned long)+0x98>
        1506ac:	e5847398 	str	r7, [r4, #920]	; fField920
        1506b0:	e284ef9b 	add	lr, r4, #620	; 0x26c
        1506b4:	e1a0c006 	mov	ip, r6
        1506b8:	e2848e39 	add	r8, r4, #912	; 0x390
        1506bc:	e2840feb 	add	r0, r4, #940	; 0x3ac
        1506c0:	e3a01010 	mov	r1, #16	; 0x10
        1506c4:	e3a02000 	mov	r2, #0	; 0x0
        1506c8:	e3a03000 	mov	r3, #0	; 0x0
        1506cc:	e3a07010 	mov	r7, #16	; 0x10
        1506d0:	e3a06000 	mov	r6, #0	; 0x0
        1506d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1506d8:	e1a03006 	mov	r3, r6
        1506dc:	e3a02001 	mov	r2, #1	; 0x1
        1506e0:	e1a01007 	mov	r1, r7
        1506e4:	e3a0000c 	mov	r0, #12	; 0xc
        1506e8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1506ec:	e1a03008 	mov	r3, r8
        1506f0:	e92d0008 	stmdb	sp!, {r3}
        1506f4:	e1a0000e 	mov	r0, lr
        1506f8:	e3a03000 	mov	r3, #0	; 0x0
        1506fc:	e49c1008 	ldr	r1, [ip], #8	; fField8
        150700:	e59c2000 	ldr	r2, [ip]
        150704:	eb6a2990 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        150708:	e28dd024 	add	sp, sp, #36	; 0x24
        15070c:	e3300000 	teq	r0, #0	; 0x0
        150710:	01a00006 	moveq	r0, r6
        150714:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        150718:	e5940018 	ldr	r0, [r4, #24]	; fField24
        15071c:	e0000005 	and	r0, r0, r5
        150720:	e5a40018 	str	r0, [r4, #24]!	; fField24
        150724:	e3a00001 	mov	r0, #1	; 0x1
        150728:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::HangUp(void)
 * Address: 0015072c
 */
TP3Tool::HangUp(void) {
    /*
        15072c:	e1a0c00d 	mov	ip, sp
        150730:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        150734:	e24cb004 	sub	fp, ip, #4	; 0x4
        150738:	e3a01006 	mov	r1, #6	; 0x6
        15073c:	e2802a01 	add	r2, r0, #4096	; 0x1000
        150740:	e5a21efc 	str	r1, [r2, #3836]!	; fField3836
        150744:	e5902018 	ldr	r2, [r0, #24]	; fField24
        150748:	e3c22402 	bic	r2, r2, #33554432	; 0x2000000
        15074c:	e3a04000 	mov	r4, #0	; 0x0
        150750:	e5801324 	str	r1, [r0, #804]	; fField804
        150754:	e5802018 	str	r2, [r0, #24]	; fField24
        150758:	e5804330 	str	r4, [r0, #816]	; fField816
        15075c:	e5804334 	str	r4, [r0, #820]	; fField820
        150760:	e280ef9b 	add	lr, r0, #620	; 0x26c
        150764:	e280cfd1 	add	ip, r0, #836	; 0x344
        150768:	e2805fc7 	add	r5, r0, #796	; 0x31c
        15076c:	e2800fd5 	add	r0, r0, #852	; 0x354
        150770:	e3a0103c 	mov	r1, #60	; 0x3c
        150774:	e3a02000 	mov	r2, #0	; 0x0
        150778:	e3a03000 	mov	r3, #0	; 0x0
        15077c:	e3a06004 	mov	r6, #4	; 0x4
        150780:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        150784:	e1a03004 	mov	r3, r4
        150788:	e3a02001 	mov	r2, #1	; 0x1
        15078c:	e1a01006 	mov	r1, r6
        150790:	e3a00028 	mov	r0, #40	; 0x28
        150794:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        150798:	e1a03005 	mov	r3, r5
        15079c:	e92d0008 	stmdb	sp!, {r3}
        1507a0:	e1a0000e 	mov	r0, lr
        1507a4:	e3a03000 	mov	r3, #0	; 0x0
        1507a8:	e49c1008 	ldr	r1, [ip], #8	; fField8
        1507ac:	e59c2000 	ldr	r2, [ip]
        1507b0:	eb6a2965 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1507b4:	e28dd024 	add	sp, sp, #36	; 0x24
        1507b8:	e3300000 	teq	r0, #0	; 0x0
        1507bc:	01a00004 	moveq	r0, r4
        1507c0:	13a00001 	movne	r0, #1	; 0x1
        1507c4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))
 * Address: 001507c8
 */
TP3Tool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *)) {
    /*
        1507c8:	e3310000 	teq	r1, #0	; 0x0
        1507cc:	03a00101 	moveq	r0, #1073741824	; 0x40000000
        1507d0:	05820000 	streq	r0, [r2]
        1507d4:	059f0034 	ldreq	r0, [pc, #34]	; 150810 <TP3Tool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x48>
        1507d8:	0a00000a 	beq	150808 <TP3Tool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x40>
        1507dc:	e3310001 	teq	r1, #1	; 0x1
        1507e0:	03a00202 	moveq	r0, #536870912	; 0x20000000
        1507e4:	05820000 	streq	r0, [r2]
        1507e8:	059f0024 	ldreq	r0, [pc, #24]	; 150814 <TP3Tool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x4c>	; fField24
        1507ec:	0a000005 	beq	150808 <TP3Tool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x40>
        1507f0:	e3310002 	teq	r1, #2	; 0x2
        1507f4:	03a00402 	moveq	r0, #33554432	; 0x2000000
        1507f8:	05820000 	streq	r0, [r2]
        1507fc:	059f0014 	ldreq	r0, [pc, #14]	; 150818 <TP3Tool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x50>
        150800:	13a00000 	movne	r0, #0	; 0x0
        150804:	15820000 	strne	r0, [r2]
        150808:	e5830000 	str	r0, [r3]
        15080c:	e1a0f00e 	mov	pc, lr
        150810:	01a0d6b8 	streqh	sp, [r0, r8]!
        150814:	01a0d6ac 	moveq	sp, ip, lsr #13
        150818:	01a12960 	moveq	r2, r0, ror #18
    */
}

/**
 * Symbol: TP3Tool::TerminateComplete(void)
 * Address: 0015081c
 */
TP3Tool::TerminateComplete(void) {
    /*
        15081c:	ea69c221 	b	1bc10a8 <TCommTool::$TerminateComplete(void)>
    */
}

/**
 * Symbol: TP3Tool::PostTimer(unsigned long, unsigned long, TimeUnits)
 * Address: 00150820
 */
TP3Tool::PostTimer(unsigned long, unsigned long, TimeUnits) {
    /*
        150820:	e1a0c00d 	mov	ip, sp
        150824:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        150828:	e24cb004 	sub	fp, ip, #4	; 0x4
        15082c:	e1a04000 	mov	r4, r0
        150830:	e1a00001 	mov	r0, r1
        150834:	e1a01002 	mov	r1, r2
        150838:	e1a02003 	mov	r2, r3
        15083c:	e24dd010 	sub	sp, sp, #16	; 0x10
        150840:	e3a06004 	mov	r6, #4	; 0x4
        150844:	e58403c0 	str	r0, [r4, #960]	; fField960
        150848:	e58463bc 	str	r6, [r4, #956]	; fField956
        15084c:	e2845ff5 	add	r5, r4, #980	; 0x3d4
        150850:	e1a07005 	mov	r7, r5
        150854:	e28d0008 	add	r0, sp, #8	; 0x8
        150858:	eb69f39a 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
        15085c:	e1a0000d 	mov	r0, sp
        150860:	eb6a0c5c 	bl	1bd39d8 <$GetGlobalTime>
        150864:	e24dd008 	sub	sp, sp, #8	; 0x8
        150868:	e28d1008 	add	r1, sp, #8	; 0x8
        15086c:	e8915000 	ldmia	r1, {ip, lr}
        150870:	e88d5000 	stmia	sp, {ip, lr}
        150874:	e1a0100d 	mov	r1, sp
        150878:	e28d0010 	add	r0, sp, #16	; 0x10
        15087c:	eb6a4200 	bl	1be1084 <$CompAdd>
        150880:	e1b00007 	movs	r0, r7
        150884:	1a000003 	bne	150898 <TP3Tool::PostTimer(unsigned long, unsigned long, TimeUnits)+0x78>
        150888:	e3a00008 	mov	r0, #8	; 0x8
        15088c:	eb69f7a9 	bl	1bce738 <$__nw(unsigned int)>
        150890:	e3300000 	teq	r0, #0	; 0x0
        150894:	0a000001 	beq	1508a0 <TP3Tool::PostTimer(unsigned long, unsigned long, TimeUnits)+0x80>
        150898:	e89d1008 	ldmia	sp, {r3, ip}
        15089c:	e8801008 	stmia	r0, {r3, ip}
        1508a0:	e28dd008 	add	sp, sp, #8	; 0x8
        1508a4:	e284c08c 	add	ip, r4, #140	; 0x8c
        1508a8:	e284eff1 	add	lr, r4, #964	; 0x3c4
        1508ac:	e2847fef 	add	r7, r4, #956	; 0x3bc
        1508b0:	e3a02000 	mov	r2, #0	; 0x0
        1508b4:	e1a03005 	mov	r3, r5
        1508b8:	e3a05000 	mov	r5, #0	; 0x0
        1508bc:	e3a01000 	mov	r1, #0	; 0x0
        1508c0:	e3a00001 	mov	r0, #1	; 0x1
        1508c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1508c8:	e1a03005 	mov	r3, r5
        1508cc:	e1a02006 	mov	r2, r6
        1508d0:	e92d000c 	stmdb	sp!, {r2, r3}
        1508d4:	e1a03007 	mov	r3, r7
        1508d8:	e1a0000c 	mov	r0, ip
        1508dc:	e3a02000 	mov	r2, #0	; 0x0
        1508e0:	e59e1000 	ldr	r1, [lr]
        1508e4:	eb6a2917 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        1508e8:	e28dd018 	add	sp, sp, #24	; 0x18
        1508ec:	e3300000 	teq	r0, #0	; 0x0
        1508f0:	05941018 	ldreq	r1, [r4, #24]	; fField24
        1508f4:	03811101 	orreq	r1, r1, #1073741824	; 0x40000000
        1508f8:	05a41018 	streq	r1, [r4, #24]!	; fField24
        1508fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::TimerComplete(void)
 * Address: 00150900
 */
TP3Tool::TimerComplete(void) {
    /*
        150900:	e1a0c00d 	mov	ip, sp
        150904:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        150908:	e24cb004 	sub	fp, ip, #4	; 0x4
        15090c:	e1a04000 	mov	r4, r0
        150910:	e5900018 	ldr	r0, [r0, #24]	; fField24
        150914:	e3c00101 	bic	r0, r0, #1073741824	; 0x40000000
        150918:	e5840018 	str	r0, [r4, #24]	; fField24
        15091c:	e59413c0 	ldr	r1, [r4, #960]	; fField960
        150920:	e2840a01 	add	r0, r4, #4096	; 0x1000
        150924:	e3310001 	teq	r1, #1	; 0x1
        150928:	0a00000c 	beq	150960 <TP3Tool::TimerComplete(void)+0x60>
        15092c:	e3310002 	teq	r1, #2	; 0x2
        150930:	05d01e22 	ldreqb	r1, [r0, #3618]	; fField3618
        150934:	03310000 	teqeq	r1, #0	; 0x0
        150938:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        15093c:	e5901e18 	ldr	r1, [r0, #3608]
        150940:	e2511001 	subs	r1, r1, #1	; 0x1
        150944:	e5a01e18 	str	r1, [r0, #3608]!
        150948:	e1a00004 	mov	r0, r4
        15094c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        150950:	1a6320c3 	bne	1a18c64 <TP3Tool::$SendInitPacket(void)>
        150954:	e3e01013 	mvn	r1, #19	; 0x13
        150958:	e2411b29 	sub	r1, r1, #41984	; 0xa400
        15095c:	ea000009 	b	150988 <TP3Tool::TimerComplete(void)+0x88>
        150960:	e5901e00 	ldr	r1, [r0, #3584]
        150964:	e3310000 	teq	r1, #0	; 0x0
        150968:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        15096c:	e5901e14 	ldr	r1, [r0, #3604]
        150970:	e2511001 	subs	r1, r1, #1	; 0x1
        150974:	e5a01e14 	str	r1, [r0, #3604]!
        150978:	e1a00004 	mov	r0, r4
        15097c:	1a000003 	bne	150990 <TP3Tool::TimerComplete(void)+0x90>
        150980:	e3e01012 	mvn	r1, #18	; 0x12
        150984:	e2411b29 	sub	r1, r1, #41984	; 0xa400
        150988:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        15098c:	ea69c1bf 	b	1bc1090 <TCommTool::$StartAbort(long)>
        150990:	e3a02000 	mov	r2, #0	; 0x0
        150994:	e3a01026 	mov	r1, #38	; 0x26
        150998:	eb6320b5 	bl	1a18c74 <TP3Tool::$SendSystemPacket(unsigned char, unsigned char)>
        15099c:	e1a00004 	mov	r0, r4
        1509a0:	e3a039e1 	mov	r3, #3686400	; 0x384000
        1509a4:	e3a0200a 	mov	r2, #10	; 0xa
        1509a8:	e3a01001 	mov	r1, #1	; 0x1
        1509ac:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1509b0:	ea63185e 	b	1a16b30 <TP3Tool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
    */
}

/**
 * Symbol: TP3Tool::KillTimer(void)
 * Address: 001509b4
 */
TP3Tool::KillTimer(void) {
    /*
        1509b4:	e5901018 	ldr	r1, [r0, #24]	; fField24
        1509b8:	e3110101 	tst	r1, #1073741824	; 0x40000000
        1509bc:	01a0f00e 	moveq	pc, lr
        1509c0:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
        1509c4:	e5a01018 	str	r1, [r0, #24]!	; fField24
        1509c8:	e2800feb 	add	r0, r0, #940	; 0x3ac
        1509cc:	ea69f75e 	b	1bce74c <TUAsyncMessage::$Abort(void)>
    */
}

/**
 * Symbol: TP3Tool::CancelTimer(void)
 * Address: 001509d0
 */
TP3Tool::CancelTimer(void) {
    /*
        1509d0:	e1a0c00d 	mov	ip, sp
        1509d4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1509d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1509dc:	eb63100f 	bl	1a14a20 <TP3Tool::$KillTimer(void)>
        1509e0:	e3a00001 	mov	r0, #1	; 0x1
        1509e4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::ResetHeartBeat(void)
 * Address: 001509e8
 */
TP3Tool::ResetHeartBeat(void) {
    /*
        1509e8:	e1a0c00d 	mov	ip, sp
        1509ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1509f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1509f4:	e1a04000 	mov	r4, r0
        1509f8:	eb631008 	bl	1a14a20 <TP3Tool::$KillTimer(void)>
        1509fc:	e2845a01 	add	r5, r4, #4096	; 0x1000
        150a00:	e5950e00 	ldr	r0, [r5, #3584]
        150a04:	e3300000 	teq	r0, #0	; 0x0
        150a08:	0a000004 	beq	150a20 <TP3Tool::ResetHeartBeat(void)+0x38>
        150a0c:	e1a00004 	mov	r0, r4
        150a10:	e3a039e1 	mov	r3, #3686400	; 0x384000
        150a14:	e3a0200a 	mov	r2, #10	; 0xa
        150a18:	e3a01001 	mov	r1, #1	; 0x1
        150a1c:	eb631843 	bl	1a16b30 <TP3Tool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
        150a20:	e3a0000a 	mov	r0, #10	; 0xa
        150a24:	e5a50e14 	str	r0, [r5, #3604]!
        150a28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::TaskDestructor(void)
 * Address: 00150a2c
 */
TP3Tool::TaskDestructor(void) {
    /*
        150a2c:	ea69c19b 	b	1bc10a0 <TCommTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TP3Tool::ForwardOptions(void)
 * Address: 00150a30
 */
TP3Tool::ForwardOptions(void) {
    /*
        150a30:	e2800f9b 	add	r0, r0, #620	; 0x26c
        150a34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00150a38
 */
TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        150a38:	e1a0c00d 	mov	ip, sp
        150a3c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        150a40:	e24cb004 	sub	fp, ip, #4	; 0x4
        150a44:	e1a05000 	mov	r5, r0
        150a48:	e1a04001 	mov	r4, r1
        150a4c:	e3a07000 	mov	r7, #0	; 0x0
        150a50:	e2806a01 	add	r6, r0, #4096	; 0x1000
        150a54:	e59fc038 	ldr	ip, [pc, #38]	; 150a94 <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x5c>
        150a58:	e132000c 	teq	r2, ip
        150a5c:	0a00000e 	beq	150a9c <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x64>
        150a60:	e59fc030 	ldr	ip, [pc, #30]	; 150a98 <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x60>
        150a64:	e132000c 	teq	r2, ip
        150a68:	1a000027 	bne	150b0c <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xd4>
        150a6c:	e3330c01 	teq	r3, #256	; 0x100
        150a70:	13330c02 	teqne	r3, #512	; 0x200
        150a74:	05b4000c 	ldreq	r0, [r4, #12]!	; fField12
        150a78:	05a60f04 	streq	r0, [r6, #3844]!
        150a7c:	0a000026 	beq	150b1c <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe4>
        150a80:	e3330c03 	teq	r3, #768	; 0x300
        150a84:	15b60f04 	ldrne	r0, [r6, #3844]!
        150a88:	03a00e11 	moveq	r0, #272	; 0x110
        150a8c:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        150a90:	ea000021 	b	150b1c <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe4>
        150a94:	70336e6f 	eorvcs	r6, r3, pc, ror #28
        150a98:	70337672 	eorvcs	r7, r3, r2, ror r6
        150a9c:	e3330c01 	teq	r3, #256	; 0x100
        150aa0:	13330c02 	teqne	r3, #512	; 0x200
        150aa4:	1a000013 	bne	150af8 <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xc0>
        150aa8:	e5d60e24 	ldrb	r0, [r6, #3620]	; fField3620
        150aac:	e3300000 	teq	r0, #0	; 0x0
        150ab0:	0a00000d 	beq	150aec <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xb4>
        150ab4:	e5d60e22 	ldrb	r0, [r6, #3618]	; fField3618
        150ab8:	e3300000 	teq	r0, #0	; 0x0
        150abc:	1a00000a 	bne	150aec <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xb4>
        150ac0:	e1a00005 	mov	r0, r5
        150ac4:	eb630fd5 	bl	1a14a20 <TP3Tool::$KillTimer(void)>
        150ac8:	e1a00005 	mov	r0, r5
        150acc:	e3a039e1 	mov	r3, #3686400	; 0x384000
        150ad0:	e3a02001 	mov	r2, #1	; 0x1
        150ad4:	e3a01002 	mov	r1, #2	; 0x2
        150ad8:	eb631814 	bl	1a16b30 <TP3Tool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
        150adc:	e1a00005 	mov	r0, r5
        150ae0:	eb631c3f 	bl	1a17be4 <TP3Tool::$ReadSync(void)>
        150ae4:	e3a00001 	mov	r0, #1	; 0x1
        150ae8:	e5c60e25 	strb	r0, [r6, #3621]
        150aec:	e5d4000c 	ldrb	r0, [r4, #12]	; fField12
        150af0:	e5c60e24 	strb	r0, [r6, #3620]	; fField3620
        150af4:	ea000008 	b	150b1c <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe4>
        150af8:	e3330c03 	teq	r3, #768	; 0x300
        150afc:	15d60e24 	ldrneb	r0, [r6, #3620]	; fField3620
        150b00:	03a00000 	moveq	r0, #0	; 0x0
        150b04:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        150b08:	ea000003 	b	150b1c <TP3Tool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xe4>
        150b0c:	e1a01004 	mov	r1, r4
        150b10:	e1a00005 	mov	r0, r5
        150b14:	eb63667f 	bl	1a2a518 <TCommTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
        150b18:	e1a07000 	mov	r7, r0
        150b1c:	e1a00007 	mov	r0, r7
        150b20:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Tool::GetToolName(void)
 * Address: 00150b24
 */
TP3Tool::GetToolName(void) {
    /*
        150b24:	e28f0f00 	add	r0, pc, #0	; 0x0
        150b28:	e1a0f00e 	mov	pc, lr
        150b2c:	50332054 	eorpls	r2, r3, r4, asr r0
        150b30:	6f6f6c00 	swivs	0x006f6c00
    */
}

/**
 * Symbol: TP3Tool::DeliverInput(void)
 * Address: 00150b34
 */
TP3Tool::DeliverInput(void) {
    /*
        150b34:	e1a0c00d 	mov	ip, sp
        150b38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        150b3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        150b40:	e1a04000 	mov	r4, r0
        150b44:	e2805a01 	add	r5, r0, #4096	; 0x1000
        150b48:	e59530e8 	ldr	r3, [r5, #232]	; fField232
        150b4c:	e3330000 	teq	r3, #0	; 0x0
        150b50:	159500e4 	ldrne	r0, [r5, #228]	; fField228
        150b54:	13300000 	teqne	r0, #0	; 0x0
        150b58:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        150b5c:	e59500dc 	ldr	r0, [r5, #220]	; fField220
        150b60:	e080c100 	add	ip, r0, r0, lsl #2
        150b64:	e08c0180 	add	r0, ip, r0, lsl #3
        150b68:	e0840200 	add	r0, r4, r0, lsl #4
        150b6c:	e5901428 	ldr	r1, [r0, #1064]
        150b70:	e2416003 	sub	r6, r1, #3	; 0x3
        150b74:	e2801034 	add	r1, r0, #52	; 0x34
        150b78:	e2811b01 	add	r1, r1, #1024	; 0x400
        150b7c:	e1a02006 	mov	r2, r6
        150b80:	e1a00003 	mov	r0, r3
        150b84:	e5933000 	ldr	r3, [r3]
        150b88:	e1a0e00f 	mov	lr, pc
        150b8c:	e283f020 	add	pc, r3, #32	; 0x20
        150b90:	e3a00000 	mov	r0, #0	; 0x0
        150b94:	e58500e8 	str	r0, [r5, #232]	; fField232
        150b98:	e59510dc 	ldr	r1, [r5, #220]	; fField220
        150b9c:	e081c101 	add	ip, r1, r1, lsl #2
        150ba0:	e08c1181 	add	r1, ip, r1, lsl #3
        150ba4:	e0841201 	add	r1, r4, r1, lsl #4
        150ba8:	e5c103dc 	strb	r0, [r1, #988]
        150bac:	e59500dc 	ldr	r0, [r5, #220]	; fField220
        150bb0:	e0801100 	add	r1, r0, r0, lsl #2
        150bb4:	e0811180 	add	r1, r1, r0, lsl #3
        150bb8:	e0841201 	add	r1, r4, r1, lsl #4
        150bbc:	e5d11431 	ldrb	r1, [r1, #1073]
        150bc0:	e2800001 	add	r0, r0, #1	; 0x1
        150bc4:	e200000f 	and	r0, r0, #15	; 0xf
        150bc8:	e58500dc 	str	r0, [r5, #220]	; fField220
        150bcc:	e5851e08 	str	r1, [r5, #3592]
        150bd0:	e59500e4 	ldr	r0, [r5, #228]	; fField228
        150bd4:	e2400001 	sub	r0, r0, #1	; 0x1
        150bd8:	e1a03006 	mov	r3, r6
        150bdc:	e58500e4 	str	r0, [r5, #228]	; fField228
        150be0:	e1a00004 	mov	r0, r4
        150be4:	e3a02001 	mov	r2, #1	; 0x1
        150be8:	e3a01000 	mov	r1, #0	; 0x0
        150bec:	e594c000 	ldr	ip, [r4]
        150bf0:	e1a0e00f 	mov	lr, pc
        150bf4:	e28cf0ec 	add	pc, ip, #236	; 0xec
        150bf8:	e59500ec 	ldr	r0, [r5, #236]	; fField236
        150bfc:	e2500001 	subs	r0, r0, #1	; 0x1
        150c00:	e5a500ec 	str	r0, [r5, #236]!	; fField236
        150c04:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        150c08:	e1a00004 	mov	r0, r4
        150c0c:	e3a02000 	mov	r2, #0	; 0x0
        150c10:	e3a01024 	mov	r1, #36	; 0x24
        150c14:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        150c18:	ea632015 	b	1a18c74 <TP3Tool::$SendSystemPacket(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TP3Tool::InitState(void)
 * Address: 00150c1c
 */
TP3Tool::InitState(void) {
    /*
        150c1c:	e3a01000 	mov	r1, #0	; 0x0
        150c20:	e2800a01 	add	r0, r0, #4096	; 0x1000
        150c24:	e58010dc 	str	r1, [r0, #220]	; fField220
        150c28:	e58010e0 	str	r1, [r0, #224]	; fField224
        150c2c:	e58010e4 	str	r1, [r0, #228]	; fField228
        150c30:	e58010e8 	str	r1, [r0, #232]	; fField232
        150c34:	e5801df0 	str	r1, [r0, #3568]	; fField3568
        150c38:	e5801df4 	str	r1, [r0, #3572]	; fField3572
        150c3c:	e5801df8 	str	r1, [r0, #3576]	; fField3576
        150c40:	e5801dfc 	str	r1, [r0, #3580]	; fField3580
        150c44:	e3a0207f 	mov	r2, #127	; 0x7f
        150c48:	e2800c0e 	add	r0, r0, #3584	; 0xe00
        150c4c:	e8800006 	stmia	r0, {r1, r2}
        150c50:	e580200c 	str	r2, [r0, #12]	; fField12
        150c54:	e5802010 	str	r2, [r0, #16]	; fField16
        150c58:	e5802008 	str	r2, [r0, #8]	; fField8
        150c5c:	e2400c0e 	sub	r0, r0, #3584	; 0xe00
        150c60:	e3a02001 	mov	r2, #1	; 0x1
        150c64:	e5802e1c 	str	r2, [r0, #3612]	; fField3612
        150c68:	e5c01e20 	strb	r1, [r0, #3616]	; fField3616
        150c6c:	e5c01e21 	strb	r1, [r0, #3617]	; fField3617
        150c70:	e5c01e22 	strb	r1, [r0, #3618]	; fField3618
        150c74:	e5c01e23 	strb	r1, [r0, #3619]	; fField3619
        150c78:	e5c01e24 	strb	r1, [r0, #3620]	; fField3620
        150c7c:	e3a01004 	mov	r1, #4	; 0x4
        150c80:	e5a010ec 	str	r1, [r0, #236]!	; fField236
        150c84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TP3Tool::ClearPacketsWaitingOnAck(int)
 * Address: 00150c88
 */
TP3Tool::ClearPacketsWaitingOnAck(int) {
    /*
        150c88:	e92d4010 	stmdb	sp!, {r4, lr}
        150c8c:	e2803a01 	add	r3, r0, #4096	; 0x1000
        150c90:	e593ce00 	ldr	ip, [r3, #3584]
        150c94:	e24ce001 	sub	lr, ip, #1	; 0x1
        150c98:	e33c0000 	teq	ip, #0	; 0x0
        150c9c:	e5932df0 	ldr	r2, [r3, #3568]	; fField3568
        150ca0:	08bd8010 	ldmeqia	sp!, {r4, pc}
        150ca4:	e0824102 	add	r4, r2, r2, lsl #2
        150ca8:	e0844182 	add	r4, r4, r2, lsl #3
        150cac:	e080c204 	add	ip, r0, r4, lsl #4
        150cb0:	e28cc0f0 	add	ip, ip, #240	; 0xf0
        150cb4:	e28cca01 	add	ip, ip, #4096	; 0x1000
        150cb8:	e2822001 	add	r2, r2, #1	; 0x1
        150cbc:	e202200f 	and	r2, r2, #15	; 0xf
        150cc0:	e5dcc055 	ldrb	ip, [ip, #85]
        150cc4:	e13c0001 	teq	ip, r1
        150cc8:	05a32df0 	streq	r2, [r3, #3568]!	; fField3568
        150ccc:	05a3e010 	streq	lr, [r3, #16]!	; fField16
        150cd0:	08bd8010 	ldmeqia	sp!, {r4, pc}
        150cd4:	e1b0c00e 	movs	ip, lr
        150cd8:	e24ee001 	sub	lr, lr, #1	; 0x1
        150cdc:	1afffff0 	bne	150ca4 <TP3Tool::ClearPacketsWaitingOnAck(int)+0x1c>
        150ce0:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

