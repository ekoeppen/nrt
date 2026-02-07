#include "include/TNewtCardEventHandler.h"

/**
 * Symbol: TNewtCardEventHandler::Init(unsigned long, unsigned long)
 * Address: 0030c140
 */
TNewtCardEventHandler::Init(unsigned long, unsigned long) {
    /*
        30c140:	e1a0c00d 	mov	ip, sp
        30c144:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30c148:	e24cb004 	sub	fp, ip, #4	; 0x4
        30c14c:	e1a04000 	mov	r4, r0
        30c150:	eb6374d6 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        30c154:	e3300000 	teq	r0, #0	; 0x0
        30c158:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        30c15c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        30c160:	e28d000c 	add	r0, sp, #12	; 0xc
        30c164:	eb630547 	bl	1bcd688 <TUNameServer::$__ct(void)>
        30c168:	e59f0054 	ldr	r0, [pc, #54]	; 30c1c4 <TNewtCardEventHandler::Init(unsigned long, unsigned long)+0x84>
        30c16c:	e40d0004 	str	r0, [sp], -#4
        30c170:	e3a00000 	mov	r0, #0	; 0x0
        30c174:	e5cd0008 	strb	r0, [sp, #8]
        30c178:	e28d300c 	add	r3, sp, #12	; 0xc
        30c17c:	e92d0008 	stmdb	sp!, {r3}
        30c180:	e28d3004 	add	r3, sp, #4	; 0x4
        30c184:	e28d1008 	add	r1, sp, #8	; 0x8
        30c188:	e28d0014 	add	r0, sp, #20	; 0x14
        30c18c:	e28f2f0d 	add	r2, pc, #52	; 0x34
        30c190:	eb632a71 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        30c194:	e28dd004 	add	sp, sp, #4	; 0x4
        30c198:	e1b05000 	movs	r5, r0
        30c19c:	1a000003 	bne	30c1b0 <TNewtCardEventHandler::Init(unsigned long, unsigned long)+0x70>
        30c1a0:	e3a00000 	mov	r0, #0	; 0x0
        30c1a4:	e59d1000 	ldr	r1, [sp]
        30c1a8:	eb630547 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        30c1ac:	e5a40014 	str	r0, [r4, #20]!	; fField20
        30c1b0:	e28d0010 	add	r0, sp, #16	; 0x10
        30c1b4:	e3a01000 	mov	r1, #0	; 0x0
        30c1b8:	eb630951 	bl	1bce704 <TUNameServer::$__dt(void)>
        30c1bc:	e1a00005 	mov	r0, r5
        30c1c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        30c1c4:	63647376 	cmnvs	r4, #-671088639	; 0xd8000001
        30c1c8:	5455506f 	ldrplb	r5, [r5], -#111
        30c1cc:	72740000 	rsbvcs	r0, r4, #0	; 0x0
    */
}

/**
 * Symbol: TNewtCardEventHandler::ReadyToAcceptCardEvents(void)
 * Address: 0030c1d0
 */
TNewtCardEventHandler::ReadyToAcceptCardEvents(void) {
    /*
        30c1d0:	e1a0c00d 	mov	ip, sp
        30c1d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30c1d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        30c1dc:	e1a04000 	mov	r4, r0
        30c1e0:	e24dd0b8 	sub	sp, sp, #184	; 0xb8
        30c1e4:	e1a0000d 	mov	r0, sp
        30c1e8:	eb630121 	bl	1bcc674 <TCardMessage::$__ct(void)>
        30c1ec:	e1a0300d 	mov	r3, sp
        30c1f0:	e92d0008 	stmdb	sp!, {r3}
        30c1f4:	eb631df6 	bl	1bd39d4 <$GetGlobals>
        30c1f8:	eb63708f 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        30c1fc:	e5903000 	ldr	r3, [r0]
        30c200:	e1a00004 	mov	r0, r4
        30c204:	e3a02000 	mov	r2, #0	; 0x0
        30c208:	e3a01064 	mov	r1, #100	; 0x64
        30c20c:	eb5edbde 	bl	1ac318c <TNewtCardEventHandler::$SendServer(unsigned long, unsigned long, unsigned long, TCardMessage *)>
        30c210:	e28dd004 	add	sp, sp, #4	; 0x4
        30c214:	e1a0000d 	mov	r0, sp
        30c218:	e3a01000 	mov	r1, #0	; 0x0
        30c21c:	eb630535 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
        30c220:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNewtCardEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0030c224
 */
TNewtCardEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        30c224:	e1a0c00d 	mov	ip, sp
        30c228:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        30c22c:	e24cb004 	sub	fp, ip, #4	; 0x4
        30c230:	e1a01003 	mov	r1, r3
        30c234:	eb5e2e53 	bl	1a97b88 <TNewtCardEventHandler::$HandleCardEvent(TCardMessage *)>
        30c238:	e3300000 	teq	r0, #0	; 0x0
        30c23c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        30c240:	eb631de3 	bl	1bd39d4 <$GetGlobals>
        30c244:	e3a010b8 	mov	r1, #184	; 0xb8
        30c248:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        30c24c:	ea636833 	b	1be6320 <TAppWorld::$AESetReply(unsigned long)>
    */
}

/**
 * Symbol: TNewtCardEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0030c250
 */
TNewtCardEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        30c250:	e1a01003 	mov	r1, r3
        30c254:	ea5e2e4b 	b	1a97b88 <TNewtCardEventHandler::$HandleCardEvent(TCardMessage *)>
    */
}

/**
 * Symbol: TNewtCardEventHandler::SendAyncServer(TCardAsyncMsg *, unsigned long)
 * Address: 0030c258
 */
TNewtCardEventHandler::SendAyncServer(TCardAsyncMsg *, unsigned long) {
    /*
        30c258:	e1a0c00d 	mov	ip, sp
        30c25c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        30c260:	e24cb004 	sub	fp, ip, #4	; 0x4
        30c264:	e1a0c001 	mov	ip, r1
        30c268:	e3320000 	teq	r2, #0	; 0x0
        30c26c:	0a000008 	beq	30c294 <TNewtCardEventHandler::SendAyncServer(TCardAsyncMsg *, unsigned long)+0x3c>
        30c270:	e3a03000 	mov	r3, #0	; 0x0
        30c274:	e92d0008 	stmdb	sp!, {r3}
        30c278:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
        30c27c:	e59f000c 	ldr	r0, [pc, #c]	; 30c290 <TNewtCardEventHandler::SendAyncServer(TCardAsyncMsg *, unsigned long)+0x38>
        30c280:	e5902000 	ldr	r2, [r0]
        30c284:	e1a0000c 	mov	r0, ip
        30c288:	eb60b265 	bl	1b38c24 <TCardAsyncMsg::$SendRPC(TUPort *, TUPort *, unsigned long, TTime *)>
        30c28c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        30c290:	0c1054a8 	ldceq	4, cr5, [r0], -#672
        30c294:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
        30c298:	e1a0000c 	mov	r0, ip
        30c29c:	e3a03000 	mov	r3, #0	; 0x0
        30c2a0:	e3a02000 	mov	r2, #0	; 0x0
        30c2a4:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        30c2a8:	ea60b25a 	b	1b38c18 <TCardAsyncMsg::$Send(TUPort *, unsigned long, TTime *)>
    */
}

/**
 * Symbol: TNewtCardEventHandler::SendServer(unsigned long, unsigned long, unsigned long, TCardMessage *)
 * Address: 0030c2ac
 */
TNewtCardEventHandler::SendServer(unsigned long, unsigned long, unsigned long, TCardMessage *) {
    /*
        30c2ac:	e1a0c00d 	mov	ip, sp
        30c2b0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        30c2b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        30c2b8:	e1a07000 	mov	r7, r0
        30c2bc:	e1a06001 	mov	r6, r1
        30c2c0:	e1a05002 	mov	r5, r2
        30c2c4:	e1a04003 	mov	r4, r3
        30c2c8:	e59b8004 	ldr	r8, [fp, #4]
        30c2cc:	e24dd0bc 	sub	sp, sp, #188	; 0xbc
        30c2d0:	e1a0000d 	mov	r0, sp
        30c2d4:	eb6300e6 	bl	1bcc674 <TCardMessage::$__ct(void)>
        30c2d8:	e1a03004 	mov	r3, r4
        30c2dc:	e1a02005 	mov	r2, r5
        30c2e0:	e1a01006 	mov	r1, r6
        30c2e4:	e1a0000d 	mov	r0, sp
        30c2e8:	eb632a1f 	bl	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
        30c2ec:	e1a00008 	mov	r0, r8
        30c2f0:	e3a010b8 	mov	r1, #184	; 0xb8
        30c2f4:	e3a02000 	mov	r2, #0	; 0x0
        30c2f8:	e3a0e000 	mov	lr, #0	; 0x0
        30c2fc:	e3a04000 	mov	r4, #0	; 0x0
        30c300:	e3a03000 	mov	r3, #0	; 0x0
        30c304:	e5b7c014 	ldr	ip, [r7, #20]!	; fField20
        30c308:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        30c30c:	e1a03004 	mov	r3, r4
        30c310:	e1a0100e 	mov	r1, lr
        30c314:	e3a000b8 	mov	r0, #184	; 0xb8
        30c318:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        30c31c:	e28d3020 	add	r3, sp, #32	; 0x20
        30c320:	e92d0008 	stmdb	sp!, {r3}
        30c324:	e28d30dc 	add	r3, sp, #220	; 0xdc
        30c328:	e1a0000c 	mov	r0, ip
        30c32c:	e3a02002 	mov	r2, #2	; 0x2
        30c330:	e3a01001 	mov	r1, #1	; 0x1
        30c334:	eb633a84 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        30c338:	e28dd024 	add	sp, sp, #36	; 0x24
        30c33c:	e1a04000 	mov	r4, r0
        30c340:	e1a0000d 	mov	r0, sp
        30c344:	e3a01000 	mov	r1, #0	; 0x0
        30c348:	eb6304ea 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
        30c34c:	e1a00004 	mov	r0, r4
        30c350:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewtCardEventHandler::ReplyServer(TCardMessage *, unsigned long, unsigned long, unsigned long)
 * Address: 0030c354
 */
TNewtCardEventHandler::ReplyServer(TCardMessage *, unsigned long, unsigned long, unsigned long) {
    /*
        30c354:	e1a00002 	mov	r0, r2
        30c358:	e1a02003 	mov	r2, r3
        30c35c:	e1a0c000 	mov	ip, r0
        30c360:	e1a00001 	mov	r0, r1
        30c364:	e1a0100c 	mov	r1, ip
        30c368:	e59d3000 	ldr	r3, [sp]
        30c36c:	ea6329fe 	b	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TNewtCardEventHandler::HandleCardEvent(TCardMessage *)
 * Address: 0030c3d0
 */
TNewtCardEventHandler::HandleCardEvent(TCardMessage *) {
    /*
        30c3d0:	e1a0c00d 	mov	ip, sp
        30c3d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        30c3d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        30c3dc:	e1a05000 	mov	r5, r0
        30c3e0:	e1a04001 	mov	r4, r1
        30c3e4:	e3a0a002 	mov	sl, #2	; 0x2
        30c3e8:	e3a06000 	mov	r6, #0	; 0x0
        30c3ec:	e52d606c 	str	r6, [sp, -#108]!
        30c3f0:	e28d0008 	add	r0, sp, #8	; 0x8
        30c3f4:	eb62995e 	bl	1bb2974 <$setjmp>
        30c3f8:	e3300000 	teq	r0, #0	; 0x0
        30c3fc:	e1a0000d 	mov	r0, sp
        30c400:	1a000065 	bne	30c59c <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x1cc>
        30c404:	eb634f1c 	bl	1be007c <$AddExceptionHandler>
        30c408:	e5941008 	ldr	r1, [r4, #8]
        30c40c:	e59f00b4 	ldr	r0, [pc, #b4]	; 30c4c8 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0xf8>
        30c410:	e3310003 	teq	r1, #3	; 0x3
        30c414:	0a00002d 	beq	30c4d0 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x100>
        30c418:	e3310033 	teq	r1, #51	; 0x33
        30c41c:	05941010 	ldreq	r1, [r4, #16]
        30c420:	059f00a4 	ldreq	r0, [pc, #a4]	; 30c4cc <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0xfc>
        30c424:	0a00003b 	beq	30c518 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x148>
        30c428:	e3310069 	teq	r1, #105	; 0x69
        30c42c:	0a000032 	beq	30c4fc <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x12c>
        30c430:	e331006f 	teq	r1, #111	; 0x6f
        30c434:	1a00004f 	bne	30c578 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x1a8>
        30c438:	e1a08004 	mov	r8, r4
        30c43c:	e3a01000 	mov	r1, #0	; 0x0
        30c440:	e5947020 	ldr	r7, [r4, #32]
        30c444:	e3a06000 	mov	r6, #0	; 0x0
        30c448:	e52d106c 	str	r1, [sp, -#108]!
        30c44c:	e28d0008 	add	r0, sp, #8	; 0x8
        30c450:	eb629947 	bl	1bb2974 <$setjmp>
        30c454:	e3300000 	teq	r0, #0	; 0x0
        30c458:	1a000031 	bne	30c524 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x154>
        30c45c:	e1a0000d 	mov	r0, sp
        30c460:	eb634f05 	bl	1be007c <$AddExceptionHandler>
        30c464:	e24dd004 	sub	sp, sp, #4	; 0x4
        30c468:	e3a00001 	mov	r0, #1	; 0x1
        30c46c:	eb5e3e4a 	bl	1a9bd9c <$MakeArray(long)>
        30c470:	eb62d735 	bl	1bc214c <$AllocateRefHandle(long)>
        30c474:	e58d0000 	str	r0, [sp]
        30c478:	e598000c 	ldr	r0, [r8, #12]
        30c47c:	e1a00100 	mov	r0, r0, lsl #2
        30c480:	eb62d731 	bl	1bc214c <$AllocateRefHandle(long)>
        30c484:	e1a09000 	mov	r9, r0
        30c488:	e5902000 	ldr	r2, [r0]
        30c48c:	e59d0000 	ldr	r0, [sp]
        30c490:	e5900000 	ldr	r0, [r0]
        30c494:	e3a01000 	mov	r1, #0	; 0x0
        30c498:	eb62e7ae 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        30c49c:	e1a00009 	mov	r0, r9
        30c4a0:	eb62db45 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30c4a4:	e1a0100d 	mov	r1, sp
        30c4a8:	e1a00007 	mov	r0, r7
        30c4ac:	eb62db47 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        30c4b0:	e59d0000 	ldr	r0, [sp]
        30c4b4:	eb62db40 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30c4b8:	e28dd004 	add	sp, sp, #4	; 0x4
        30c4bc:	e1a0000d 	mov	r0, sp
        30c4c0:	eb6352fc 	bl	1be10b8 <$ExitHandler>
        30c4c4:	ea000017 	b	30c528 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x158>
        30c4c8:	006847f8 	streqd	r4, [r8], -#120
        30c4cc:	00682318 	rsbeq	r2, r8, r8, lsl r3
        30c4d0:	e594200c 	ldr	r2, [r4, #12]
        30c4d4:	e282cd7d 	add	ip, r2, #8000	; 0x1f40
        30c4d8:	e37c0001 	cmn	ip, #1	; 0x1
        30c4dc:	1a000001 	bne	30c4e8 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x118>
        30c4e0:	e5941010 	ldr	r1, [r4, #16]
        30c4e4:	ea00000b 	b	30c518 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x148>
        30c4e8:	e5941010 	ldr	r1, [r4, #16]
        30c4ec:	e59f0004 	ldr	r0, [pc, #4]	; 30c4f8 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x128>
        30c4f0:	ebffff9e 	bl	30c370 <CardEventPrompt(RefVar const &, unsigned long, long)>
        30c4f4:	ea00001f 	b	30c578 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x1a8>
        30c4f8:	006838b8 	streqh	r3, [r8], -#136
        30c4fc:	e594100c 	ldr	r1, [r4, #12]
        30c500:	e3110001 	tst	r1, #1	; 0x1
        30c504:	0afffff5 	beq	30c4e0 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x110>
        30c508:	e3110002 	tst	r1, #2	; 0x2
        30c50c:	1a000019 	bne	30c578 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x1a8>
        30c510:	e5941010 	ldr	r1, [r4, #16]
        30c514:	e59f0004 	ldr	r0, [pc, #4]	; 30c520 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x150>
        30c518:	eb5f0460 	bl	1acd6a0 <$CardEventPrompt(RefVar const &, unsigned long)>
        30c51c:	ea000015 	b	30c578 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x1a8>
        30c520:	006847f0 	streqd	r4, [r8], -#112
        30c524:	e3a06001 	mov	r6, #1	; 0x1
        30c528:	e3370000 	teq	r7, #0	; 0x0
        30c52c:	0a000003 	beq	30c540 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x170>
        30c530:	e5970000 	ldr	r0, [r7]
        30c534:	eb62db20 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30c538:	e1a00007 	mov	r0, r7
        30c53c:	eb630467 	bl	1bcd6e0 <$__dl(void *)>
        30c540:	e3380000 	teq	r8, #0	; 0x0
        30c544:	0a000007 	beq	30c568 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x198>
        30c548:	e28800bc 	add	r0, r8, #188	; 0xbc
        30c54c:	e3a01000 	mov	r1, #0	; 0x0
        30c550:	eb63086e 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        30c554:	e1a00008 	mov	r0, r8
        30c558:	e3a01000 	mov	r1, #0	; 0x0
        30c55c:	eb630465 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
        30c560:	e1a00008 	mov	r0, r8
        30c564:	eb63045d 	bl	1bcd6e0 <$__dl(void *)>
        30c568:	e3360000 	teq	r6, #0	; 0x0
        30c56c:	11a0000d 	movne	r0, sp
        30c570:	1b6356f7 	blne	1be2154 <$NextHandler>
        30c574:	e28dd06c 	add	sp, sp, #108	; 0x6c
        30c578:	e3a03000 	mov	r3, #0	; 0x0
        30c57c:	e92d0008 	stmdb	sp!, {r3}
        30c580:	e1a0200a 	mov	r2, sl
        30c584:	e5943010 	ldr	r3, [r4, #16]
        30c588:	e1a01004 	mov	r1, r4
        30c58c:	e1a00005 	mov	r0, r5
        30c590:	eb5e4eaa 	bl	1aa0040 <TNewtCardEventHandler::$ReplyServer(TCardMessage *, unsigned long, unsigned long, unsigned long)>
        30c594:	e28dd004 	add	sp, sp, #4	; 0x4
        30c598:	ea000006 	b	30c5b8 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x1e8>
        30c59c:	e2800060 	add	r0, r0, #96	; 0x60
        30c5a0:	e1a04000 	mov	r4, r0
        30c5a4:	eb639cfa 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        30c5a8:	e1a01004 	mov	r1, r4
        30c5ac:	e59f0014 	ldr	r0, [pc, #14]	; 30c5c8 <TNewtCardEventHandler::HandleCardEvent(TCardMessage *)+0x1f8>
        30c5b0:	e5900000 	ldr	r0, [r0]
        30c5b4:	eb01f64e 	bl	389ef4 <POutTranslator::ExceptionNotify(Exception *)>
        30c5b8:	e1a0000d 	mov	r0, sp
        30c5bc:	eb6352bd 	bl	1be10b8 <$ExitHandler>
        30c5c0:	e3a00002 	mov	r0, #2	; 0x2
        30c5c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        30c5c8:	0c101820 	ldceq	8, cr1, [r0], -#128
    */
}

