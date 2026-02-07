#include "include/TKeyboardTool.h"

/**
 * Symbol: TKeyboardTool::__ct(unsigned long)
 * Address: 000fa1a0
 */
TKeyboardTool::TKeyboardTool(unsigned long) {
    /*
         fa1a0:	e1a0c00d 	mov	ip, sp
         fa1a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fa1a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa1ac:	e1b04000 	movs	r4, r0
         fa1b0:	e1a05001 	mov	r5, r1
         fa1b4:	1a000004 	bne	fa1cc <TKeyboardTool::__ct(unsigned long)+0x2c>
         fa1b8:	e3a00f4f 	mov	r0, #316	; 0x13c
         fa1bc:	e2800b01 	add	r0, r0, #1024	; 0x400
         fa1c0:	eb6b515c 	bl	1bce738 <$__nw(unsigned int)>
         fa1c4:	e1b04000 	movs	r4, r0
         fa1c8:	0a00000b 	beq	fa1fc <TKeyboardTool::__ct(unsigned long)+0x5c>
         fa1cc:	e1a01005 	mov	r1, r5
         fa1d0:	e1a00004 	mov	r0, r4
         fa1d4:	eb643cbe 	bl	1a094d4 <TAsyncSerTool::$__ct(unsigned long)>
         fa1d8:	e2840e4b 	add	r0, r4, #1200	; 0x4b0
         fa1dc:	eb6ba815 	bl	1be4238 <TAEvent::$__ct(void)>
         fa1e0:	e28400dc 	add	r0, r4, #220	; 0xdc
         fa1e4:	e2800b01 	add	r0, r0, #1024	; 0x400
         fa1e8:	eb6b4d2f 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         fa1ec:	e2840e52 	add	r0, r4, #1312	; 0x520
         fa1f0:	eb64d143 	bl	1a2e704 <TCMOKeyboardConfig::$__ct(void)>
         fa1f4:	e59f0008 	ldr	r0, [pc, #8]	; fa204 <TKeyboardTool::__ct(unsigned long)+0x64>	; fField8
         fa1f8:	e5840000 	str	r0, [r4]
         fa1fc:	e1a00004 	mov	r0, r4
         fa200:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         fa204:	0001cbf8 	streqd	ip, [r1], -r8
    */
}

/**
 * Symbol: TKeyboardTool::TaskConstructor(void)
 * Address: 000fa208
 */
TKeyboardTool::TaskConstructor(void) {
    /*
         fa208:	e1a0c00d 	mov	ip, sp
         fa20c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         fa210:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa214:	e1a04000 	mov	r4, r0
         fa218:	e3a06000 	mov	r6, #0	; 0x0
         fa21c:	e5806534 	str	r6, [r0, #1332]	; fField1332
         fa220:	e5806538 	str	r6, [r0, #1336]	; fField1336
         fa224:	e580651c 	str	r6, [r0, #1308]	; fField1308
         fa228:	e590026c 	ldr	r0, [r0, #620]	; fField620
         fa22c:	e3800003 	orr	r0, r0, #3	; 0x3
         fa230:	e584026c 	str	r0, [r4, #620]	; fField620
         fa234:	e1a00004 	mov	r0, r4
         fa238:	eb6482cb 	bl	1a1ad6c <TAsyncSerTool::$TaskConstructor(void)>
         fa23c:	e1b05000 	movs	r5, r0
         fa240:	1a00002e 	bne	fa300 <TKeyboardTool::TaskConstructor(void)+0xf8>
         fa244:	e3a00c01 	mov	r0, #256	; 0x100
         fa248:	e58403e4 	str	r0, [r4, #996]	; fField996
         fa24c:	e3a00010 	mov	r0, #16	; 0x10
         fa250:	e58403e0 	str	r0, [r4, #992]	; fField992
         fa254:	e5c464ec 	strb	r6, [r4, #1260]	; fField1260
         fa258:	e3a05001 	mov	r5, #1	; 0x1
         fa25c:	e3a000c8 	mov	r0, #200	; 0xc8
         fa260:	e5840504 	str	r0, [r4, #1284]	; fField1284
         fa264:	e3a00f96 	mov	r0, #600	; 0x258
         fa268:	e2844e51 	add	r4, r4, #1296	; 0x510
         fa26c:	e9040041 	stmdb	r4, {r0, r6}
         fa270:	e5845008 	str	r5, [r4, #8]	; fField8
         fa274:	e2444e51 	sub	r4, r4, #1296	; 0x510
         fa278:	e5c464ed 	strb	r6, [r4, #1261]	; fField1261
         fa27c:	e5c464ee 	strb	r6, [r4, #1262]	; fField1262
         fa280:	e59f1080 	ldr	r1, [pc, #80]	; fa308 <TKeyboardTool::TaskConstructor(void)+0x100>
         fa284:	e58414fc 	str	r1, [r4, #1276]	; fField1276
         fa288:	e28400f4 	add	r0, r4, #244	; 0xf4
         fa28c:	e2800b01 	add	r0, r0, #1024	; 0x400
         fa290:	eb6b8efe 	bl	1bdde90 <$TimeFromNow>
         fa294:	e5c45480 	strb	r5, [r4, #1152]	; fField1152
         fa298:	e5c45481 	strb	r5, [r4, #1153]	; fField1153
         fa29c:	e1a00004 	mov	r0, r4
         fa2a0:	e3a01000 	mov	r1, #0	; 0x0
         fa2a4:	e5942000 	ldr	r2, [r4]
         fa2a8:	e1a0e00f 	mov	lr, pc
         fa2ac:	e282ff6b 	add	pc, r2, #428	; 0x1ac
         fa2b0:	e2842e4b 	add	r2, r4, #1200	; 0x4b0
         fa2b4:	e28410dc 	add	r1, r4, #220	; 0xdc
         fa2b8:	e2811b01 	add	r1, r1, #1024	; 0x400
         fa2bc:	e1a00004 	mov	r0, r4
         fa2c0:	eb6b1750 	bl	1bc0008 <TCommTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
         fa2c4:	e1b05000 	movs	r5, r0
         fa2c8:	1a00000c 	bne	fa300 <TKeyboardTool::TaskConstructor(void)+0xf8>
         fa2cc:	e28f0f0e 	add	r0, pc, #56	; 0x38
         fa2d0:	e3a01000 	mov	r1, #0	; 0x0
         fa2d4:	eb6b762c 	bl	1bd7b8c <$NewByName__FPCcT1>
         fa2d8:	e5840534 	str	r0, [r4, #1332]	; fField1332
         fa2dc:	e1b01000 	movs	r1, r0
         fa2e0:	0a000006 	beq	fa300 <TKeyboardTool::TaskConstructor(void)+0xf8>
         fa2e4:	e1a00001 	mov	r0, r1
         fa2e8:	eb0a2780 	bl	3840f0 <TKybdExtension::Init(void)>
         fa2ec:	e3300000 	teq	r0, #0	; 0x0
         fa2f0:	1a000002 	bne	fa300 <TKeyboardTool::TaskConstructor(void)+0xf8>
         fa2f4:	e5940534 	ldr	r0, [r4, #1332]	; fField1332
         fa2f8:	eb0a277f 	bl	3840fc <TKybdExtension::GetFeatures(void)>
         fa2fc:	e5a40538 	str	r0, [r4, #1336]!	; fField1336
         fa300:	e1a00005 	mov	r0, r5
         fa304:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         fa308:	00464e0c 	subeq	r4, r6, ip, lsl #28
         fa30c:	544b7962 	strplb	r7, [fp], -#2402
         fa310:	64457874 	strvsb	r7, [r5], -#2164
         fa314:	656e7369 	strvsb	r7, [lr, -#873]!
         fa318:	6f6e0000 	swivs	0x006e0000
    */
}

/**
 * Symbol: TKeyboardTool::PowerOffEvent(unsigned long)
 * Address: 000fa31c
 */
TKeyboardTool::PowerOffEvent(unsigned long) {
    /*
         fa31c:	e5d0252c 	ldrb	r2, [r0, #1324]	; fField1324
         fa320:	e3320000 	teq	r2, #0	; 0x0
         fa324:	0a649740 	beq	1a2002c <TSerTool::$PowerOffEvent(unsigned long)>
         fa328:	1a649b6a 	bne	1a210d8 <TKeyboardTool::$ShutDownKeyboard(void)>
    */
}

/**
 * Symbol: TKeyboardTool::TurnOnSerChip(void)
 * Address: 000fa32c
 */
TKeyboardTool::TurnOnSerChip(void) {
    /*
         fa32c:	e1a0c00d 	mov	ip, sp
         fa330:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         fa334:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa338:	e1a04000 	mov	r4, r0
         fa33c:	e5d0052d 	ldrb	r0, [r0, #1325]
         fa340:	e3300000 	teq	r0, #0	; 0x0
         fa344:	15940464 	ldrne	r0, [r4, #1124]	; fField1124
         fa348:	1380000c 	orrne	r0, r0, #12	; 0xc
         fa34c:	15840464 	strne	r0, [r4, #1124]	; fField1124
         fa350:	e5d4052f 	ldrb	r0, [r4, #1327]	; fField1327
         fa354:	e3300000 	teq	r0, #0	; 0x0
         fa358:	15940464 	ldrne	r0, [r4, #1124]	; fField1124
         fa35c:	13800010 	orrne	r0, r0, #16	; 0x10
         fa360:	15840464 	strne	r0, [r4, #1124]	; fField1124
         fa364:	e1a00004 	mov	r0, r4
         fa368:	eb645934 	bl	1a10840 <TAsyncSerTool::$FlushInputBytes(void)>
         fa36c:	e3a06101 	mov	r6, #1073741824	; 0x40000000
         fa370:	e5d4052f 	ldrb	r0, [r4, #1327]	; fField1327
         fa374:	e3300000 	teq	r0, #0	; 0x0
         fa378:	13a06141 	movne	r6, #1073741840	; 0x40000010
         fa37c:	e1a00004 	mov	r0, r4
         fa380:	eb649f6c 	bl	1a22138 <TAsyncSerTool::$TurnOnSerChip(void)>
         fa384:	e1b05000 	movs	r5, r0
         fa388:	1a000030 	bne	fa450 <TKeyboardTool::TurnOnSerChip(void)+0x124>
         fa38c:	eb0a61ff 	bl	392b90 <EnterFIQAtomic>
         fa390:	e1a00004 	mov	r0, r4
         fa394:	e3a01001 	mov	r1, #1	; 0x1
         fa398:	eb647e42 	bl	1a19ca8 <TSerTool::$SetHSKo(unsigned char)>
         fa39c:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         fa3a0:	e1800006 	orr	r0, r0, r6
         fa3a4:	e5840498 	str	r0, [r4, #1176]	; fField1176
         fa3a8:	eb0a6200 	bl	392bb0 <ExitFIQAtomic>
         fa3ac:	e5d4052e 	ldrb	r0, [r4, #1326]	; fField1326
         fa3b0:	e3a06001 	mov	r6, #1	; 0x1
         fa3b4:	e3300000 	teq	r0, #0	; 0x0
         fa3b8:	1a00001e 	bne	fa438 <TKeyboardTool::TurnOnSerChip(void)+0x10c>
         fa3bc:	e59f0060 	ldr	r0, [pc, #60]	; fa424 <TKeyboardTool::TurnOnSerChip(void)+0xf8>
         fa3c0:	eb6b8a99 	bl	1bdce2c <$Sleep(unsigned long)>
         fa3c4:	e24dd008 	sub	sp, sp, #8	; 0x8
         fa3c8:	e3a0108e 	mov	r1, #142	; 0x8e
         fa3cc:	e5940304 	ldr	r0, [r4, #772]	; fField772
         fa3d0:	eb0a29e5 	bl	384b6c <TSerialChip::PutByte(unsigned char)>
         fa3d4:	e3a00ffb 	mov	r0, #1004	; 0x3ec
         fa3d8:	e2800bb3 	add	r0, r0, #183296	; 0x2cc00
         fa3dc:	eb6b8a92 	bl	1bdce2c <$Sleep(unsigned long)>
         fa3e0:	e2840feb 	add	r0, r4, #940	; 0x3ac
         fa3e4:	e1a0200d 	mov	r2, sp
         fa3e8:	e28d1004 	add	r1, sp, #4	; 0x4
         fa3ec:	eb6c2fde 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         fa3f0:	e1a05000 	mov	r5, r0
         fa3f4:	e3a00000 	mov	r0, #0	; 0x0
         fa3f8:	e5c404f1 	strb	r0, [r4, #1265]	; fField1265
         fa3fc:	e5d40530 	ldrb	r0, [r4, #1328]
         fa400:	e3300000 	teq	r0, #0	; 0x0
         fa404:	0a000007 	beq	fa428 <TKeyboardTool::TurnOnSerChip(void)+0xfc>
         fa408:	e3350000 	teq	r5, #0	; 0x0
         fa40c:	05dd0004 	ldreqb	r0, [sp, #4]
         fa410:	03300071 	teqeq	r0, #113	; 0x71
         fa414:	1584651c 	strne	r6, [r4, #1308]	; fField1308
         fa418:	11a00004 	movne	r0, r4
         fa41c:	1b649b2d 	blne	1a210d8 <TKeyboardTool::$ShutDownKeyboard(void)>
         fa420:	ea000001 	b	fa42c <TKeyboardTool::TurnOnSerChip(void)+0x100>
         fa424:	00167f60 	andeqs	r7, r6, r0, ror #30
         fa428:	e3a05000 	mov	r5, #0	; 0x0
         fa42c:	e28dd008 	add	sp, sp, #8	; 0x8
         fa430:	e3350000 	teq	r5, #0	; 0x0
         fa434:	1a000005 	bne	fa450 <TKeyboardTool::TurnOnSerChip(void)+0x124>
         fa438:	e1a00004 	mov	r0, r4
         fa43c:	e3a03000 	mov	r3, #0	; 0x0
         fa440:	e3a02001 	mov	r2, #1	; 0x1
         fa444:	e3a01021 	mov	r1, #33	; 0x21
         fa448:	eb649b15 	bl	1a210a4 <TKeyboardTool::$SendKeyEvent(long, unsigned char, TTime *)>
         fa44c:	e5a4651c 	str	r6, [r4, #1308]!	; fField1308
         fa450:	e1a00005 	mov	r0, r5
         fa454:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardTool::HandleReply(unsigned long, unsigned long)
 * Address: 000fa458
 */
TKeyboardTool::HandleReply(unsigned long, unsigned long) {
    /*
         fa458:	e1a0c00d 	mov	ip, sp
         fa45c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fa460:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa464:	e1a04000 	mov	r4, r0
         fa468:	e2800e4b 	add	r0, r0, #1200	; 0x4b0
         fa46c:	e1300001 	teq	r0, r1
         fa470:	11a00004 	movne	r0, r4
         fa474:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         fa478:	1a6b16de 	bne	1bbfff8 <TCommTool::$HandleReply(unsigned long, unsigned long)>
         fa47c:	e3a05000 	mov	r5, #0	; 0x0
         fa480:	e5c454ec 	strb	r5, [r4, #1260]	; fField1260
         fa484:	e59414bc 	ldr	r1, [r4, #1212]	; fField1212
         fa488:	e3310024 	teq	r1, #36	; 0x24
         fa48c:	1a000018 	bne	fa4f4 <TKeyboardTool::HandleReply(unsigned long, unsigned long)+0x9c>
         fa490:	e5901010 	ldr	r1, [r0, #16]
         fa494:	e3a02066 	mov	r2, #102	; 0x66
         fa498:	e2822c0e 	add	r2, r2, #3584	; 0xe00
         fa49c:	e0020291 	mul	r2, r1, r2
         fa4a0:	e5842504 	str	r2, [r4, #1284]	; fField1284
         fa4a4:	e5901014 	ldr	r1, [r0, #20]
         fa4a8:	e3a0c066 	mov	ip, #102	; 0x66
         fa4ac:	e28ccc0e 	add	ip, ip, #3584	; 0xe00
         fa4b0:	e001019c 	mul	r1, ip, r1
         fa4b4:	e5841508 	str	r1, [r4, #1288]	; fField1288
         fa4b8:	e590001c 	ldr	r0, [r0, #28]
         fa4bc:	e3a03066 	mov	r3, #102	; 0x66
         fa4c0:	e2833c0e 	add	r3, r3, #3584	; 0xe00
         fa4c4:	e0030390 	mul	r3, r0, r3
         fa4c8:	e584350c 	str	r3, [r4, #1292]	; fField1292
         fa4cc:	e59404c8 	ldr	r0, [r4, #1224]	; fField1224
         fa4d0:	e3500010 	cmp	r0, #16	; 0x10
         fa4d4:	83a00010 	movhi	r0, #16	; 0x10
         fa4d8:	8a000001 	bhi	fa4e4 <TKeyboardTool::HandleReply(unsigned long, unsigned long)+0x8c>
         fa4dc:	e3500001 	cmp	r0, #1	; 0x1
         fa4e0:	33a00001 	movcc	r0, #1	; 0x1
         fa4e4:	e5840518 	str	r0, [r4, #1304]	; fField1304
         fa4e8:	e5940534 	ldr	r0, [r4, #1332]	; fField1332
         fa4ec:	e3300000 	teq	r0, #0	; 0x0
         fa4f0:	1b0a2704 	blne	384108 <TKybdExtension::SetRepeatParams(unsigned long, unsigned long, unsigned long)>
         fa4f4:	e594051c 	ldr	r0, [r4, #1308]	; fField1308
         fa4f8:	e3300003 	teq	r0, #3	; 0x3
         fa4fc:	1a000005 	bne	fa518 <TKeyboardTool::HandleReply(unsigned long, unsigned long)+0xc0>
         fa500:	e3a00004 	mov	r0, #4	; 0x4
         fa504:	e584051c 	str	r0, [r4, #1308]	; fField1308
         fa508:	e1a00004 	mov	r0, r4
         fa50c:	e5941000 	ldr	r1, [r4]
         fa510:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         fa514:	e281f048 	add	pc, r1, #72	; 0x48
         fa518:	e3300002 	teq	r0, #2	; 0x2
         fa51c:	e1a00004 	mov	r0, r4
         fa520:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         fa524:	0a649aeb 	beq	1a210d8 <TKeyboardTool::$ShutDownKeyboard(void)>
         fa528:	eb649ada 	bl	1a21098 <TKeyboardTool::$SendAvailableKeys(void)>
         fa52c:	e5d404ee 	ldrb	r0, [r4, #1262]	; fField1262
         fa530:	e3300000 	teq	r0, #0	; 0x0
         fa534:	0a00000f 	beq	fa578 <TKeyboardTool::HandleReply(unsigned long, unsigned long)+0x120>
         fa538:	e5d404ec 	ldrb	r0, [r4, #1260]	; fField1260
         fa53c:	e3300000 	teq	r0, #0	; 0x0
         fa540:	1a00000c 	bne	fa578 <TKeyboardTool::HandleReply(unsigned long, unsigned long)+0x120>
         fa544:	e5d404f0 	ldrb	r0, [r4, #1264]	; fField1264
         fa548:	e3300000 	teq	r0, #0	; 0x0
         fa54c:	0a000009 	beq	fa578 <TKeyboardTool::HandleReply(unsigned long, unsigned long)+0x120>
         fa550:	e3a00001 	mov	r0, #1	; 0x1
         fa554:	e58404c8 	str	r0, [r4, #1224]	; fField1224
         fa558:	e2843e51 	add	r3, r4, #1296	; 0x510
         fa55c:	e5d424ef 	ldrb	r2, [r4, #1263]	; fField1263
         fa560:	e1a00004 	mov	r0, r4
         fa564:	e3a01023 	mov	r1, #35	; 0x23
         fa568:	eb649acd 	bl	1a210a4 <TKeyboardTool::$SendKeyEvent(long, unsigned char, TTime *)>
         fa56c:	e5d404ec 	ldrb	r0, [r4, #1260]	; fField1260
         fa570:	e5c404ed 	strb	r0, [r4, #1261]	; fField1261
         fa574:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         fa578:	e5c454ed 	strb	r5, [r4, #1261]	; fField1261
         fa57c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardTool::ShutDownKeyboard(void)
 * Address: 000fa580
 */
TKeyboardTool::ShutDownKeyboard(void) {
    /*
         fa580:	e1a0c00d 	mov	ip, sp
         fa584:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fa588:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa58c:	e1a04000 	mov	r4, r0
         fa590:	e590051c 	ldr	r0, [r0, #1308]	; fField1308
         fa594:	e3300001 	teq	r0, #1	; 0x1
         fa598:	1a000003 	bne	fa5ac <TKeyboardTool::ShutDownKeyboard(void)+0x2c>
         fa59c:	e1a00004 	mov	r0, r4
         fa5a0:	eb6b1686 	bl	1bbffc0 <TCommTool::$Disconnect(void)>
         fa5a4:	e1a00004 	mov	r0, r4
         fa5a8:	eb6b1ac0 	bl	1bc10b0 <TCommTool::$Unbind(void)>
         fa5ac:	e5d404ec 	ldrb	r0, [r4, #1260]	; fField1260
         fa5b0:	e3300000 	teq	r0, #0	; 0x0
         fa5b4:	0a000003 	beq	fa5c8 <TKeyboardTool::ShutDownKeyboard(void)+0x48>
         fa5b8:	e5d404ed 	ldrb	r0, [r4, #1261]	; fField1261
         fa5bc:	e3300000 	teq	r0, #0	; 0x0
         fa5c0:	03a00002 	moveq	r0, #2	; 0x2
         fa5c4:	0a000007 	beq	fa5e8 <TKeyboardTool::ShutDownKeyboard(void)+0x68>
         fa5c8:	e1a00004 	mov	r0, r4
         fa5cc:	eb64925d 	bl	1a1ef48 <TKeyboardTool::$CancelAutoKey(void)>
         fa5d0:	e1a00004 	mov	r0, r4
         fa5d4:	e3a03000 	mov	r3, #0	; 0x0
         fa5d8:	e3a02000 	mov	r2, #0	; 0x0
         fa5dc:	e3a01021 	mov	r1, #33	; 0x21
         fa5e0:	eb649aaf 	bl	1a210a4 <TKeyboardTool::$SendKeyEvent(long, unsigned char, TTime *)>
         fa5e4:	e3a00003 	mov	r0, #3	; 0x3
         fa5e8:	e5a4051c 	str	r0, [r4, #1308]!	; fField1308
         fa5ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardTool::SendKeyEvent(long, unsigned char, TTime *)
 * Address: 000fa5f0
 */
TKeyboardTool::SendKeyEvent(long, unsigned char, TTime *) {
    /*
         fa5f0:	e1a0c00d 	mov	ip, sp
         fa5f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         fa5f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa5fc:	e1a04000 	mov	r4, r0
         fa600:	e1a05001 	mov	r5, r1
         fa604:	e20260ff 	and	r6, r2, #255	; 0xff
         fa608:	e59f0104 	ldr	r0, [pc, #104]	; fa714 <TKeyboardTool::SendKeyEvent(long, unsigned char, TTime *)+0x124>
         fa60c:	e58404b0 	str	r0, [r4, #1200]	; fField1200
         fa610:	e59f0100 	ldr	r0, [pc, #100]	; fa718 <TKeyboardTool::SendKeyEvent(long, unsigned char, TTime *)+0x128>
         fa614:	e58404b4 	str	r0, [r4, #1204]	; fField1204
         fa618:	e59f00fc 	ldr	r0, [pc, #fc]	; fa71c <TKeyboardTool::SendKeyEvent(long, unsigned char, TTime *)+0x12c>
         fa61c:	e2844d13 	add	r4, r4, #1216	; 0x4c0
         fa620:	e9040003 	stmdb	r4, {r0, r1}
         fa624:	e2444d13 	sub	r4, r4, #1216	; 0x4c0
         fa628:	e331001f 	teq	r1, #31	; 0x1f
         fa62c:	13350020 	teqne	r5, #32	; 0x20
         fa630:	1a000003 	bne	fa644 <TKeyboardTool::SendKeyEvent(long, unsigned char, TTime *)+0x54>
         fa634:	e59404c8 	ldr	r0, [r4, #1224]	; fField1224
         fa638:	e3500001 	cmp	r0, #1	; 0x1
         fa63c:	83a00022 	movhi	r0, #34	; 0x22
         fa640:	858404bc 	strhi	r0, [r4, #1212]	; fField1212
         fa644:	e3a08001 	mov	r8, #1	; 0x1
         fa648:	e58464c4 	str	r6, [r4, #1220]	; fField1220
         fa64c:	e58484c0 	str	r8, [r4, #1216]	; fField1216
         fa650:	e59f00c8 	ldr	r0, [pc, #c8]	; fa720 <TKeyboardTool::SendKeyEvent(long, unsigned char, TTime *)+0x130>
         fa654:	e590e000 	ldr	lr, [r0]
         fa658:	e33e0000 	teq	lr, #0	; 0x0
         fa65c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         fa660:	e284c0dc 	add	ip, r4, #220	; 0xdc
         fa664:	e28ccb01 	add	ip, ip, #1024	; 0x400
         fa668:	e2840e4b 	add	r0, r4, #1200	; 0x4b0
         fa66c:	e1a09000 	mov	r9, r0
         fa670:	e3a0102c 	mov	r1, #44	; 0x2c
         fa674:	e3a02000 	mov	r2, #0	; 0x0
         fa678:	e3a0a000 	mov	sl, #0	; 0x0
         fa67c:	e3a07000 	mov	r7, #0	; 0x0
         fa680:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         fa684:	e1a03007 	mov	r3, r7
         fa688:	e3a02001 	mov	r2, #1	; 0x1
         fa68c:	e1a0100a 	mov	r1, sl
         fa690:	e3a0002c 	mov	r0, #44	; 0x2c
         fa694:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         fa698:	e1a03009 	mov	r3, r9
         fa69c:	e92d0008 	stmdb	sp!, {r3}
         fa6a0:	e1a0000e 	mov	r0, lr
         fa6a4:	e3a03000 	mov	r3, #0	; 0x0
         fa6a8:	e49c1008 	ldr	r1, [ip], #8	; fField8
         fa6ac:	e59c2000 	ldr	r2, [ip]
         fa6b0:	eb6b81a5 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         fa6b4:	e28dd024 	add	sp, sp, #36	; 0x24
         fa6b8:	e3300000 	teq	r0, #0	; 0x0
         fa6bc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         fa6c0:	e5c484ec 	strb	r8, [r4, #1260]	; fField1260
         fa6c4:	e335001f 	teq	r5, #31	; 0x1f
         fa6c8:	05c474ee 	streqb	r7, [r4, #1262]	; fField1262
         fa6cc:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         fa6d0:	e3350020 	teq	r5, #32	; 0x20
         fa6d4:	13350023 	teqne	r5, #35	; 0x23
         fa6d8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         fa6dc:	e5c484ee 	strb	r8, [r4, #1262]	; fField1262
         fa6e0:	e5c464ef 	strb	r6, [r4, #1263]	; fField1263
         fa6e4:	e3350020 	teq	r5, #32	; 0x20
         fa6e8:	15940500 	ldrne	r0, [r4, #1280]	; fField1280
         fa6ec:	12800001 	addne	r0, r0, #1	; 0x1
         fa6f0:	15840500 	strne	r0, [r4, #1280]	; fField1280
         fa6f4:	05847500 	streq	r7, [r4, #1280]	; fField1280
         fa6f8:	e2843e51 	add	r3, r4, #1296	; 0x510
         fa6fc:	e1a01006 	mov	r1, r6
         fa700:	e5942500 	ldr	r2, [r4, #1280]	; fField1280
         fa704:	e1a00004 	mov	r0, r4
         fa708:	eb64cbf9 	bl	1a2d6f4 <TKeyboardTool::$IsRepeatable(unsigned char, unsigned long, TTime *)>
         fa70c:	e5c404f0 	strb	r0, [r4, #1264]	; fField1264
         fa710:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         fa714:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         fa718:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
         fa71c:	6b657962 	blvs	1a58cac <TCompiler::$WalkForPath(RefVar const &, long &)+0x30>
         fa720:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

/**
 * Symbol: TKeyboardTool::CancelAutoKey(void)
 * Address: 000fa724
 */
TKeyboardTool::CancelAutoKey(void) {
    /*
         fa724:	e1a0c00d 	mov	ip, sp
         fa728:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fa72c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa730:	e1a04000 	mov	r4, r0
         fa734:	e5d004ed 	ldrb	r0, [r0, #1261]	; fField1261
         fa738:	e3300000 	teq	r0, #0	; 0x0
         fa73c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         fa740:	e28400dc 	add	r0, r4, #220	; 0xdc
         fa744:	e2800b01 	add	r0, r0, #1024	; 0x400
         fa748:	eb6b4fff 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
         fa74c:	e3a00000 	mov	r0, #0	; 0x0
         fa750:	e5c404ed 	strb	r0, [r4, #1261]	; fField1261
         fa754:	e5c404ec 	strb	r0, [r4, #1260]	; fField1260
         fa758:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardTool::SendAvailableKeys(void)
 * Address: 000fa75c
 */
TKeyboardTool::SendAvailableKeys(void) {
    /*
         fa75c:	e1a0c00d 	mov	ip, sp
         fa760:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         fa764:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa768:	e1a04000 	mov	r4, r0
         fa76c:	e24dd008 	sub	sp, sp, #8	; 0x8
         fa770:	e5d004ec 	ldrb	r0, [r0, #1260]	; fField1260
         fa774:	e3300000 	teq	r0, #0	; 0x0
         fa778:	0a000002 	beq	fa788 <TKeyboardTool::SendAvailableKeys(void)+0x2c>
         fa77c:	e5d404ed 	ldrb	r0, [r4, #1261]	; fField1261
         fa780:	e3300000 	teq	r0, #0	; 0x0
         fa784:	0a00004d 	beq	fa8c0 <TKeyboardTool::SendAvailableKeys(void)+0x164>
         fa788:	e3a05000 	mov	r5, #0	; 0x0
         fa78c:	e3a0a000 	mov	sl, #0	; 0x0
         fa790:	e56da004 	strb	sl, [sp, -#4]!
         fa794:	e3a06001 	mov	r6, #1	; 0x1
         fa798:	e5949518 	ldr	r9, [r4, #1304]	; fField1304
         fa79c:	e2847feb 	add	r7, r4, #940	; 0x3ac
         fa7a0:	e24dd008 	sub	sp, sp, #8	; 0x8
         fa7a4:	e5cd6004 	strb	r6, [sp, #4]
         fa7a8:	e5cda000 	strb	sl, [sp]
         fa7ac:	e1a00007 	mov	r0, r7
         fa7b0:	e28d200c 	add	r2, sp, #12	; 0xc
         fa7b4:	e28d1010 	add	r1, sp, #16	; 0x10
         fa7b8:	eb6c4fdb 	bl	1c0e72c <TCircleBuf::$PeekNextByte(unsigned char *, unsigned long *)>
         fa7bc:	e3300002 	teq	r0, #2	; 0x2
         fa7c0:	028dd008 	addeq	sp, sp, #8	; 0x8
         fa7c4:	0a00002e 	beq	fa884 <TKeyboardTool::SendAvailableKeys(void)+0x128>
         fa7c8:	e3300000 	teq	r0, #0	; 0x0
         fa7cc:	1a00001d 	bne	fa848 <TKeyboardTool::SendAvailableKeys(void)+0xec>
         fa7d0:	e5dd0010 	ldrb	r0, [sp, #16]
         fa7d4:	e200807f 	and	r8, r0, #127	; 0x7f
         fa7d8:	e3580037 	cmp	r8, #55	; 0x37
         fa7dc:	ba000001 	blt	fa7e8 <TKeyboardTool::SendAvailableKeys(void)+0x8c>
         fa7e0:	e358003e 	cmp	r8, #62	; 0x3e
         fa7e4:	d5cd6008 	strleb	r6, [sp, #8]	; fField8
         fa7e8:	e5940534 	ldr	r0, [r4, #1332]	; fField1332
         fa7ec:	e3300000 	teq	r0, #0	; 0x0
         fa7f0:	0a000006 	beq	fa810 <TKeyboardTool::SendAvailableKeys(void)+0xb4>
         fa7f4:	e28d3004 	add	r3, sp, #4	; 0x4
         fa7f8:	e92d0008 	stmdb	sp!, {r3}
         fa7fc:	e28d3004 	add	r3, sp, #4	; 0x4
         fa800:	e28d200c 	add	r2, sp, #12	; 0xc
         fa804:	e28d1014 	add	r1, sp, #20	; 0x14
         fa808:	eb0a2644 	bl	384120 <TKybdExtension::TranslateKey(unsigned char *, unsigned char *, unsigned char *, unsigned char *)>
         fa80c:	e28dd004 	add	sp, sp, #4	; 0x4
         fa810:	e338007f 	teq	r8, #127	; 0x7f
         fa814:	1a000004 	bne	fa82c <TKeyboardTool::SendAvailableKeys(void)+0xd0>
         fa818:	e5dd0010 	ldrb	r0, [sp, #16]
         fa81c:	e33000ff 	teq	r0, #255	; 0xff
         fa820:	13a0006f 	movne	r0, #111	; 0x6f
         fa824:	03a000ef 	moveq	r0, #239	; 0xef
         fa828:	e5cd0010 	strb	r0, [sp, #16]
         fa82c:	e5dd0000 	ldrb	r0, [sp]
         fa830:	e3300000 	teq	r0, #0	; 0x0
         fa834:	1a000003 	bne	fa848 <TKeyboardTool::SendAvailableKeys(void)+0xec>
         fa838:	e5dd0010 	ldrb	r0, [sp, #16]
         fa83c:	e0841005 	add	r1, r4, r5
         fa840:	e5c104cc 	strb	r0, [r1, #1228]
         fa844:	e2855001 	add	r5, r5, #1	; 0x1
         fa848:	e5dd0004 	ldrb	r0, [sp, #4]
         fa84c:	e3300000 	teq	r0, #0	; 0x0
         fa850:	0a000005 	beq	fa86c <TKeyboardTool::SendAvailableKeys(void)+0x110>
         fa854:	e24dd004 	sub	sp, sp, #4	; 0x4
         fa858:	e1a00007 	mov	r0, r7
         fa85c:	e28d2010 	add	r2, sp, #16	; 0x10
         fa860:	e1a0100d 	mov	r1, sp
         fa864:	eb6c2ec0 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         fa868:	e28dd004 	add	sp, sp, #4	; 0x4
         fa86c:	e28dd008 	add	sp, sp, #8	; 0x8
         fa870:	e1550009 	cmp	r5, r9
         fa874:	2a000002 	bcs	fa884 <TKeyboardTool::SendAvailableKeys(void)+0x128>
         fa878:	e5dd0000 	ldrb	r0, [sp]
         fa87c:	e3300000 	teq	r0, #0	; 0x0
         fa880:	0affffc6 	beq	fa7a0 <TKeyboardTool::SendAvailableKeys(void)+0x44>
         fa884:	e3550000 	cmp	r5, #0	; 0x0
         fa888:	da00000b 	ble	fa8bc <TKeyboardTool::SendAvailableKeys(void)+0x160>
         fa88c:	e1a00004 	mov	r0, r4
         fa890:	eb6491ac 	bl	1a1ef48 <TKeyboardTool::$CancelAutoKey(void)>
         fa894:	e58454c8 	str	r5, [r4, #1224]	; fField1224
         fa898:	e5dd0008 	ldrb	r0, [sp, #8]	; fField8
         fa89c:	e3100080 	tst	r0, #128	; 0x80
         fa8a0:	03a0101f 	moveq	r1, #31	; 0x1f
         fa8a4:	13a01020 	movne	r1, #32	; 0x20
         fa8a8:	e5dd0008 	ldrb	r0, [sp, #8]	; fField8
         fa8ac:	e200207f 	and	r2, r0, #127	; 0x7f
         fa8b0:	e1a00004 	mov	r0, r4
         fa8b4:	e3a03000 	mov	r3, #0	; 0x0
         fa8b8:	eb6499f9 	bl	1a210a4 <TKeyboardTool::$SendKeyEvent(long, unsigned char, TTime *)>
         fa8bc:	e28dd004 	add	sp, sp, #4	; 0x4
         fa8c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)
 * Address: 000fa8c4
 */
TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *) {
    /*
         fa8c4:	e1a0c00d 	mov	ip, sp
         fa8c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fa8cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa8d0:	e1a04003 	mov	r4, r3
         fa8d4:	e20110ff 	and	r1, r1, #255	; 0xff
         fa8d8:	e24dd008 	sub	sp, sp, #8	; 0x8
         fa8dc:	e3a03001 	mov	r3, #1	; 0x1
         fa8e0:	e5cd3004 	strb	r3, [sp, #4]
         fa8e4:	e3a03000 	mov	r3, #0	; 0x0
         fa8e8:	e3310037 	teq	r1, #55	; 0x37
         fa8ec:	e58d3000 	str	r3, [sp]
         fa8f0:	1a000005 	bne	fa90c <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0x48>
         fa8f4:	e3320000 	teq	r2, #0	; 0x0
         fa8f8:	1a00000a 	bne	fa928 <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0x64>
         fa8fc:	e590c50c 	ldr	ip, [r0, #1292]	; fField1292
         fa900:	e33c0000 	teq	ip, #0	; 0x0
         fa904:	1a00000d 	bne	fa940 <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0x7c>
         fa908:	ea000006 	b	fa928 <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0x64>
         fa90c:	e590c504 	ldr	ip, [r0, #1284]	; fField1284
         fa910:	e33c0000 	teq	ip, #0	; 0x0
         fa914:	0a00000a 	beq	fa944 <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0x80>
         fa918:	e3510038 	cmp	r1, #56	; 0x38
         fa91c:	ba000003 	blt	fa930 <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0x6c>
         fa920:	e351003e 	cmp	r1, #62	; 0x3e
         fa924:	ca000001 	bgt	fa930 <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0x6c>
         fa928:	e5cd3004 	strb	r3, [sp, #4]
         fa92c:	ea000004 	b	fa944 <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0x80>
         fa930:	e3320000 	teq	r2, #0	; 0x0
         fa934:	05903508 	ldreq	r3, [r0, #1288]	; fField1288
         fa938:	058d3000 	streq	r3, [sp]
         fa93c:	0a000000 	beq	fa944 <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0x80>
         fa940:	e58dc000 	str	ip, [sp]
         fa944:	e5900534 	ldr	r0, [r0, #1332]	; fField1332
         fa948:	e3300000 	teq	r0, #0	; 0x0
         fa94c:	0a000004 	beq	fa964 <TKeyboardTool::IsRepeatable(unsigned char, unsigned long, TTime *)+0xa0>
         fa950:	e1a0300d 	mov	r3, sp
         fa954:	e92d0008 	stmdb	sp!, {r3}
         fa958:	e28d3008 	add	r3, sp, #8	; 0x8
         fa95c:	eb0a25f2 	bl	38412c <TKybdExtension::IsRepeatable(unsigned char, unsigned long, unsigned char *, unsigned long *)>
         fa960:	e28dd004 	add	sp, sp, #4	; 0x4
         fa964:	e5dd0004 	ldrb	r0, [sp, #4]
         fa968:	e3300000 	teq	r0, #0	; 0x0
         fa96c:	11a00004 	movne	r0, r4
         fa970:	159d1000 	ldrne	r1, [sp]
         fa974:	1b6b8d45 	blne	1bdde90 <$TimeFromNow>
         fa978:	e5dd0004 	ldrb	r0, [sp, #4]
         fa97c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardTool::DataInObserver(unsigned char)
 * Address: 000fa980
 */
TKeyboardTool::DataInObserver(unsigned char) {
    /*
         fa980:	e1a0c00d 	mov	ip, sp
         fa984:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         fa988:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa98c:	e1a04000 	mov	r4, r0
         fa990:	e1a07001 	mov	r7, r1
         fa994:	e20150ff 	and	r5, r1, #255	; 0xff
         fa998:	e5d0052d 	ldrb	r0, [r0, #1325]
         fa99c:	e3a06001 	mov	r6, #1	; 0x1
         fa9a0:	e3300000 	teq	r0, #0	; 0x0
         fa9a4:	0a000002 	beq	fa9b4 <TKeyboardTool::DataInObserver(unsigned char)+0x34>
         fa9a8:	e5d4037c 	ldrb	r0, [r4, #892]	; fField892
         fa9ac:	e3100008 	tst	r0, #8	; 0x8
         fa9b0:	0a000007 	beq	fa9d4 <TKeyboardTool::DataInObserver(unsigned char)+0x54>
         fa9b4:	e5940538 	ldr	r0, [r4, #1336]	; fField1336
         fa9b8:	e3100004 	tst	r0, #4	; 0x4
         fa9bc:	0a000006 	beq	fa9dc <TKeyboardTool::DataInObserver(unsigned char)+0x5c>
         fa9c0:	e1a01005 	mov	r1, r5
         fa9c4:	e5940534 	ldr	r0, [r4, #1332]	; fField1332
         fa9c8:	eb0a25da 	bl	384138 <TKybdExtension::DataInFilter(unsigned char)>
         fa9cc:	e3300000 	teq	r0, #0	; 0x0
         fa9d0:	0a000001 	beq	fa9dc <TKeyboardTool::DataInObserver(unsigned char)+0x5c>
         fa9d4:	e1a00006 	mov	r0, r6
         fa9d8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         fa9dc:	e5940538 	ldr	r0, [r4, #1336]	; fField1336
         fa9e0:	e3100001 	tst	r0, #1	; 0x1
         fa9e4:	e207807f 	and	r8, r7, #127	; 0x7f
         fa9e8:	e3a09000 	mov	r9, #0	; 0x0
         fa9ec:	1a00001c 	bne	faa64 <TKeyboardTool::DataInObserver(unsigned char)+0xe4>
         fa9f0:	e28470f4 	add	r7, r4, #244	; 0xf4
         fa9f4:	e2877b01 	add	r7, r7, #1024	; 0x400
         fa9f8:	e338007f 	teq	r8, #127	; 0x7f
         fa9fc:	1a000014 	bne	faa54 <TKeyboardTool::DataInObserver(unsigned char)+0xd4>
         faa00:	e24dd008 	sub	sp, sp, #8	; 0x8
         faa04:	e1a0000d 	mov	r0, sp
         faa08:	eb6b63f2 	bl	1bd39d8 <$GetGlobalTime>
         faa0c:	e1a01007 	mov	r1, r7
         faa10:	e1a0000d 	mov	r0, sp
         faa14:	eb6b999b 	bl	1be1088 <$CompCompare>
         faa18:	e3500000 	cmp	r0, #0	; 0x0
         faa1c:	aa000001 	bge	faa28 <TKeyboardTool::DataInObserver(unsigned char)+0xa8>
         faa20:	e1a00006 	mov	r0, r6
         faa24:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         faa28:	e33500ff 	teq	r5, #255	; 0xff
         faa2c:	05c464f1 	streqb	r6, [r4, #1265]	; fField1265
         faa30:	0a000004 	beq	faa48 <TKeyboardTool::DataInObserver(unsigned char)+0xc8>
         faa34:	e5d404f1 	ldrb	r0, [r4, #1265]	; fField1265
         faa38:	e3300000 	teq	r0, #0	; 0x0
         faa3c:	15c494f1 	strneb	r9, [r4, #1265]	; fField1265
         faa40:	159f0008 	ldrne	r0, [pc, #8]	; faa50 <TKeyboardTool::DataInObserver(unsigned char)+0xd0>	; fField8
         faa44:	1b6c4f41 	blne	1c0e750 <$SendPowerSwitchEvent(unsigned long)>
         faa48:	e28dd008 	add	sp, sp, #8	; 0x8
         faa4c:	ea000004 	b	faa64 <TKeyboardTool::DataInObserver(unsigned char)+0xe4>
         faa50:	706f7772 	rsbvc	r7, pc, r2, ror r7
         faa54:	e3150080 	tst	r5, #128	; 0x80
         faa58:	11a00007 	movne	r0, r7
         faa5c:	159414fc 	ldrne	r1, [r4, #1276]	; fField1276
         faa60:	1b6b8d0a 	blne	1bdde90 <$TimeFromNow>
         faa64:	e5b40538 	ldr	r0, [r4, #1336]!	; fField1336
         faa68:	e3100002 	tst	r0, #2	; 0x2
         faa6c:	03380067 	teqeq	r8, #103	; 0x67
         faa70:	033500e7 	teqeq	r5, #231	; 0xe7
         faa74:	059f0008 	ldreq	r0, [pc, #8]	; faa84 <TKeyboardTool::DataInObserver(unsigned char)+0x104>	; fField8
         faa78:	0b6c4f34 	bleq	1c0e750 <$SendPowerSwitchEvent(unsigned long)>
         faa7c:	e1a00009 	mov	r0, r9
         faa80:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         faa84:	626b6c74 	rsbvs	r6, fp, #29696	; 0x7400
    */
}

/**
 * Symbol: TKeyboardTool::TaskDestructor(void)
 * Address: 000faa88
 */
TKeyboardTool::TaskDestructor(void) {
    /*
         faa88:	e1a0c00d 	mov	ip, sp
         faa8c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         faa90:	e24cb004 	sub	fp, ip, #4	; 0x4
         faa94:	e1a04000 	mov	r4, r0
         faa98:	eb6484bb 	bl	1a1bd8c <TAsyncSerTool::$TaskDestructor(void)>
         faa9c:	e5b40534 	ldr	r0, [r4, #1332]!	; fField1332
         faaa0:	e3300000 	teq	r0, #0	; 0x0
         faaa4:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         faaa8:	1a0a2589 	bne	3840d4 <TKybdExtension::Delete(void)>
         faaac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardTool::GetToolName(void)
 * Address: 000faab0
 */
TKeyboardTool::GetToolName(void) {
    /*
         faab0:	e28f0f00 	add	r0, pc, #0	; 0x0
         faab4:	e1a0f00e 	mov	pc, lr
         faab8:	4b657962 	blmi	1a59048 <TCompiler::$WalkForPath(RefVar const &, long &)+0x3cc>
         faabc:	6f617264 	swivs	0x00617264
         faac0:	20546f6f 	subcss	r6, r4, pc, ror #30
         faac4:	6c000000 	stcvs	0, cr0, [r0]
    */
}

/**
 * Symbol: TKeyboardTool::GetSizeOf(void)
 * Address: 000faac8
 */
TKeyboardTool::GetSizeOf(void) {
    /*
         faac8:	e3a00f4f 	mov	r0, #316	; 0x13c
         faacc:	e2800b01 	add	r0, r0, #1024	; 0x400
         faad0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TKeyboardTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 000faad4
 */
TKeyboardTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         faad4:	e1a0c00d 	mov	ip, sp
         faad8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         faadc:	e24cb004 	sub	fp, ip, #4	; 0x4
         faae0:	e1a05000 	mov	r5, r0
         faae4:	e1a04001 	mov	r4, r1
         faae8:	e3a06000 	mov	r6, #0	; 0x0
         faaec:	e59fc04c 	ldr	ip, [pc, #4c]	; fab40 <TKeyboardTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6c>
         faaf0:	e132000c 	teq	r2, ip
         faaf4:	11a01004 	movne	r1, r4
         faaf8:	11a00005 	movne	r0, r5
         faafc:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         fab00:	1a649552 	bne	1a20050 <TAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         fab04:	e2850e52 	add	r0, r5, #1312	; 0x520
         fab08:	e3330c01 	teq	r3, #256	; 0x100
         fab0c:	13330c02 	teqne	r3, #512	; 0x200
         fab10:	1a00000b 	bne	fab44 <TKeyboardTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x70>
         fab14:	e1a01004 	mov	r1, r4
         fab18:	eb6af42c 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         fab1c:	e5950534 	ldr	r0, [r5, #1332]	; fField1332
         fab20:	e3300000 	teq	r0, #0	; 0x0
         fab24:	0a000013 	beq	fab78 <TKeyboardTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa4>
         fab28:	e5d5152e 	ldrb	r1, [r5, #1326]	; fField1326
         fab2c:	e3310000 	teq	r1, #0	; 0x0
         fab30:	03a01002 	moveq	r1, #2	; 0x2
         fab34:	13a01001 	movne	r1, #1	; 0x1
         fab38:	eb0a2575 	bl	384114 <TKybdExtension::SetKeyboardType(unsigned long)>
         fab3c:	ea00000d 	b	fab78 <TKeyboardTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa4>
         fab40:	6b626366 	blvs	19938e0 <ROM$$Size+0x1273c94>
         fab44:	e3330c03 	teq	r3, #768	; 0x300
         fab48:	1a000007 	bne	fab6c <TKeyboardTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x98>
         fab4c:	e24dd014 	sub	sp, sp, #20	; 0x14
         fab50:	e1a0000d 	mov	r0, sp
         fab54:	eb64ceea 	bl	1a2e704 <TCMOKeyboardConfig::$__ct(void)>
         fab58:	e1a0100d 	mov	r1, sp
         fab5c:	e1a00004 	mov	r0, r4
         fab60:	eb6af41a 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         fab64:	e28dd014 	add	sp, sp, #20	; 0x14
         fab68:	ea000002 	b	fab78 <TKeyboardTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa4>
         fab6c:	e1a01000 	mov	r1, r0
         fab70:	e1a00004 	mov	r0, r4
         fab74:	eb6af415 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         fab78:	e1a00006 	mov	r0, r6
         fab7c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardTool::TxDataSent(void)
 * Address: 000fab80
 */
TKeyboardTool::TxDataSent(void) {
    /*
         fab80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TKeyboardTool::RxDataAvailable(void)
 * Address: 000fab84
 */
TKeyboardTool::RxDataAvailable(void) {
    /*
         fab84:	e1a0c00d 	mov	ip, sp
         fab88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fab8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fab90:	e1a04000 	mov	r4, r0
         fab94:	eb649d5c 	bl	1a2210c <TAsyncSerTool::$SyncInputBuffer(void)>
         fab98:	e1a00004 	mov	r0, r4
         fab9c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         faba0:	ea64993c 	b	1a21098 <TKeyboardTool::$SendAvailableKeys(void)>
    */
}

/**
 * Symbol: TKeyboardTool::SerialEvents(unsigned long)
 * Address: 000faba4
 */
TKeyboardTool::SerialEvents(unsigned long) {
    /*
         faba4:	e1a0c00d 	mov	ip, sp
         faba8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fabac:	e24cb004 	sub	fp, ip, #4	; 0x4
         fabb0:	e1a04000 	mov	r4, r0
         fabb4:	e5d0052f 	ldrb	r0, [r0, #1327]	; fField1327
         fabb8:	e3300000 	teq	r0, #0	; 0x0
         fabbc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         fabc0:	e1a00004 	mov	r0, r4
         fabc4:	eb645f69 	bl	1a12970 <TAsyncSerTool::$HSKiOn(void)>
         fabc8:	e3300000 	teq	r0, #0	; 0x0
         fabcc:	01a00004 	moveq	r0, r4
         fabd0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         fabd4:	0a64993f 	beq	1a210d8 <TKeyboardTool::$ShutDownKeyboard(void)>
         fabd8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardTool::PowerOnEvent(unsigned long)
 * Address: 000fabdc
 */
TKeyboardTool::PowerOnEvent(unsigned long) {
    /*
         fabdc:	e1a02000 	mov	r2, r0
         fabe0:	e3a00000 	mov	r0, #0	; 0x0
         fabe4:	e5c204ee 	strb	r0, [r2, #1262]	; fField1262
         fabe8:	e5d2052c 	ldrb	r0, [r2, #1324]	; fField1324
         fabec:	e3300000 	teq	r0, #0	; 0x0
         fabf0:	01a00002 	moveq	r0, r2
         fabf4:	0a646fcf 	beq	1a16b38 <TSerTool::$PowerOnEvent(unsigned long)>
         fabf8:	e592051c 	ldr	r0, [r2, #1308]	; fField1308
         fabfc:	e3300001 	teq	r0, #1	; 0x1
         fac00:	11a0f00e 	movne	pc, lr
         fac04:	e1a00002 	mov	r0, r2
         fac08:	e5921000 	ldr	r1, [r2]
         fac0c:	e281f048 	add	pc, r1, #72	; 0x48
    */
}

