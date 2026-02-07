#include "include/TNewtTestScriptEventHandler.h"

/**
 * Symbol: TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00229288
 */
TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        229288:	e1a0c00d 	mov	ip, sp
        22928c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        229290:	e24cb004 	sub	fp, ip, #4	; 0x4
        229294:	e1a04000 	mov	r4, r0
        229298:	e1a0a001 	mov	sl, r1
        22929c:	e1a05003 	mov	r5, r3
        2292a0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2292a4:	e3a00002 	mov	r0, #2	; 0x2
        2292a8:	eb6663a7 	bl	1bc214c <$AllocateRefHandle(long)>
        2292ac:	e3a08000 	mov	r8, #0	; 0x0
        2292b0:	e1a09005 	mov	r9, r5
        2292b4:	e58d0004 	str	r0, [sp, #4]
        2292b8:	e59f01e8 	ldr	r0, [pc, #1e8]	; 2294a8 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x220>
        2292bc:	eb67193a 	bl	1bef7ac <$SetPort(GrafPort *)>
        2292c0:	e58d0000 	str	r0, [sp]
        2292c4:	e2857074 	add	r7, r5, #116	; 0x74
        2292c8:	e2856014 	add	r6, r5, #20	; 0x14
        2292cc:	e5990008 	ldr	r0, [r9, #8]
        2292d0:	e59f51d4 	ldr	r5, [pc, #1d4]	; 2294ac <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x224>
        2292d4:	e3500007 	cmp	r0, #7	; 0x7
        2292d8:	908ff100 	addls	pc, pc, r0, lsl #2
        2292dc:	ea0001cb 	b	229a10 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x788>
        2292e0:	ea0001ca 	b	229a10 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x788>
        2292e4:	ea00007b 	b	2294d8 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x250>
        2292e8:	ea0000c0 	b	2295f0 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x368>
        2292ec:	ea0000ae 	b	2295ac <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x324>
        2292f0:	ea0001c6 	b	229a10 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x788>
        2292f4:	ea00019c 	b	22996c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x6e4>
        2292f8:	ea0001b2 	b	2299c8 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x740>
        2292fc:	e24ddf8d 	sub	sp, sp, #564	; 0x234
        229300:	e28f0f6a 	add	r0, pc, #424	; 0x1a8
        229304:	eb666fdd 	bl	1bc5280 <$Intern(char *)>
        229308:	eb66638f 	bl	1bc214c <$AllocateRefHandle(long)>
        22930c:	e58d0000 	str	r0, [sp]
        229310:	e1a0000d 	mov	r0, sp
        229314:	e3a01003 	mov	r1, #3	; 0x3
        229318:	eb666386 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        22931c:	eb66638a 	bl	1bc214c <$AllocateRefHandle(long)>
        229320:	e58d0220 	str	r0, [sp, #544]
        229324:	e59d0000 	ldr	r0, [sp]
        229328:	eb6667a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22932c:	e3a00002 	mov	r0, #2	; 0x2
        229330:	eb666385 	bl	1bc214c <$AllocateRefHandle(long)>
        229334:	e1a08000 	mov	r8, r0
        229338:	e2840018 	add	r0, r4, #24	; 0x18
        22933c:	e1a09000 	mov	r9, r0
        229340:	e89a500c 	ldmia	sl, {r2, r3, ip, lr}
        229344:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        229348:	e1a00006 	mov	r0, r6
        22934c:	e28d1008 	add	r1, sp, #8	; 0x8
        229350:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        229354:	e3a02001 	mov	r2, #1	; 0x1
        229358:	eb66f809 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        22935c:	e28d3f82 	add	r3, sp, #520	; 0x208
        229360:	e92d0008 	stmdb	sp!, {r3}
        229364:	e1a00007 	mov	r0, r7
        229368:	e28d3f87 	add	r3, sp, #540	; 0x21c
        22936c:	e28d2e22 	add	r2, sp, #544	; 0x220
        229370:	e28f1f50 	add	r1, pc, #320	; 0x140
        229374:	eb6631c9 	bl	1bb5aa0 <$sscanf>
        229378:	e28dd004 	add	sp, sp, #4	; 0x4
        22937c:	e28d0008 	add	r0, sp, #8	; 0x8
        229380:	eb666fd3 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        229384:	eb666370 	bl	1bc214c <$AllocateRefHandle(long)>
        229388:	e1a06000 	mov	r6, r0
        22938c:	e5902000 	ldr	r2, [r0]
        229390:	e59d0220 	ldr	r0, [sp, #544]
        229394:	e5900000 	ldr	r0, [r0]
        229398:	e3a01000 	mov	r1, #0	; 0x0
        22939c:	eb6673ed 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2293a0:	e1a00006 	mov	r0, r6
        2293a4:	eb666784 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2293a8:	e3a07000 	mov	r7, #0	; 0x0
        2293ac:	e59d021c 	ldr	r0, [sp, #540]
        2293b0:	e1a00100 	mov	r0, r0, lsl #2
        2293b4:	eb666364 	bl	1bc214c <$AllocateRefHandle(long)>
        2293b8:	e1a06000 	mov	r6, r0
        2293bc:	e5902000 	ldr	r2, [r0]
        2293c0:	e59d0220 	ldr	r0, [sp, #544]
        2293c4:	e5900000 	ldr	r0, [r0]
        2293c8:	e3a01001 	mov	r1, #1	; 0x1
        2293cc:	eb6673e1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2293d0:	e1a00006 	mov	r0, r6
        2293d4:	eb666778 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2293d8:	e59d0218 	ldr	r0, [sp, #536]
        2293dc:	e1a00100 	mov	r0, r0, lsl #2
        2293e0:	eb666359 	bl	1bc214c <$AllocateRefHandle(long)>
        2293e4:	e1a06000 	mov	r6, r0
        2293e8:	e5902000 	ldr	r2, [r0]
        2293ec:	e59d0220 	ldr	r0, [sp, #544]
        2293f0:	e5900000 	ldr	r0, [r0]
        2293f4:	e3a01002 	mov	r1, #2	; 0x2
        2293f8:	eb6673d6 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2293fc:	e1a00006 	mov	r0, r6
        229400:	eb66676d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229404:	e28f0f2e 	add	r0, pc, #184	; 0xb8
        229408:	eb666f9c 	bl	1bc5280 <$Intern(char *)>
        22940c:	eb66634e 	bl	1bc214c <$AllocateRefHandle(long)>
        229410:	e58d0004 	str	r0, [sp, #4]
        229414:	e28d1004 	add	r1, sp, #4	; 0x4
        229418:	e28d2e22 	add	r2, sp, #544	; 0x220
        22941c:	e5b50008 	ldr	r0, [r5, #8]!
        229420:	eb66676b 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        229424:	e5880000 	str	r0, [r8]
        229428:	e59d0004 	ldr	r0, [sp, #4]
        22942c:	eb666762 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229430:	e5980000 	ldr	r0, [r8]
        229434:	e3300002 	teq	r0, #2	; 0x2
        229438:	03e00000 	mvneq	r0, #0	; 0x0
        22943c:	058d020c 	streq	r0, [sp, #524]
        229440:	0a00000d 	beq	22947c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f4>
        229444:	e58d720c 	str	r7, [sp, #524]
        229448:	e5980000 	ldr	r0, [r8]
        22944c:	eb666f96 	bl	1bc52ac <$Length(long)>
        229450:	e58d0210 	str	r0, [sp, #528]
        229454:	e2800014 	add	r0, r0, #20	; 0x14
        229458:	eb66e338 	bl	1be2140 <$NewPtr>
        22945c:	e1b05000 	movs	r5, r0
        229460:	0a000005 	beq	22947c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f4>
        229464:	e5980000 	ldr	r0, [r8]
        229468:	eb66633b 	bl	1bc215c <$BinaryData(long)>
        22946c:	e1a01005 	mov	r1, r5
        229470:	e59d2210 	ldr	r2, [sp, #528]
        229474:	eb66d6b6 	bl	1bdef54 <$BlockMove>
        229478:	e58d5214 	str	r5, [sp, #532]
        22947c:	e1a00009 	mov	r0, r9
        229480:	e28d1f83 	add	r1, sp, #524	; 0x20c
        229484:	e3a03000 	mov	r3, #0	; 0x0
        229488:	e3a0200c 	mov	r2, #12	; 0xc
        22948c:	eb66c216 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        229490:	e1a00008 	mov	r0, r8
        229494:	eb666748 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229498:	e59d0220 	ldr	r0, [sp, #544]
        22949c:	eb666746 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2294a0:	e28ddf89 	add	sp, sp, #548	; 0x224
        2294a4:	ea000158 	b	229a0c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x784>
        2294a8:	0c1067cc 	ldceq	7, cr6, [r0], -#816
        2294ac:	0c104d48 	ldceq	13, cr4, [r0], -#288
        2294b0:	61727261 	cmnvs	r2, r1, ror #4
        2294b4:	79000000 	stmvcdb	r0, {}
        2294b8:	25642025 	strcsb	r2, [r4, -#37]!	; fField37
        2294bc:	64202564 	strvst	r2, [r0], -#1380
        2294c0:	00000000 	andeq	r0, r0, r0
        2294c4:	74657374 	strvcbt	r7, [r5], -#884
        2294c8:	4d677252 	sfmmi	f7, 2, [r7, -#328]!
        2294cc:	65616444 	strvsb	r6, [r1, -#1092]!
        2294d0:	61746146 	cmnvs	r4, r6, asr #2
        2294d4:	696c6500 	stmvsdb	ip!, {r8, sl, sp, lr}^
        2294d8:	e5b98010 	ldr	r8, [r9, #16]!
        2294dc:	e24dd010 	sub	sp, sp, #16	; 0x10
        2294e0:	e3380000 	teq	r8, #0	; 0x0
        2294e4:	0a000148 	beq	229a0c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x784>
        2294e8:	e1a01006 	mov	r1, r6
        2294ec:	e1a09006 	mov	r9, r6
        2294f0:	e5950000 	ldr	r0, [r5]
        2294f4:	eb66316c 	bl	1bb5aac <$strcpy>
        2294f8:	e1a01007 	mov	r1, r7
        2294fc:	e5950000 	ldr	r0, [r5]
        229500:	e2800060 	add	r0, r0, #96	; 0x60
        229504:	eb663168 	bl	1bb5aac <$strcpy>
        229508:	e1a02009 	mov	r2, r9
        22950c:	e3a01002 	mov	r1, #2	; 0x2
        229510:	e5950000 	ldr	r0, [r5]
        229514:	eb65630c 	bl	1b8214c <TAgentReporter::$AgentReportStatus(long, char *)>
        229518:	e24dd008 	sub	sp, sp, #8	; 0x8
        22951c:	e1a00008 	mov	r0, r8
        229520:	eb666f6a 	bl	1bc52d0 <$MakeString(char const *)>
        229524:	eb666308 	bl	1bc214c <$AllocateRefHandle(long)>
        229528:	e58d0000 	str	r0, [sp]
        22952c:	e1a0000d 	mov	r0, sp
        229530:	eb666f71 	bl	1bc52fc <$ParseString(RefVar const &)>
        229534:	eb666304 	bl	1bc214c <$AllocateRefHandle(long)>
        229538:	e58d0004 	str	r0, [sp, #4]
        22953c:	e59d0000 	ldr	r0, [sp]
        229540:	eb66671d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229544:	e24dd004 	sub	sp, sp, #4	; 0x4
        229548:	e59d0008 	ldr	r0, [sp, #8]
        22954c:	e5900000 	ldr	r0, [r0]
        229550:	e3300002 	teq	r0, #2	; 0x2
        229554:	0a000008 	beq	22957c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2f4>
        229558:	e59f0048 	ldr	r0, [pc, #48]	; 2295a8 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x320>
        22955c:	e5900000 	ldr	r0, [r0]
        229560:	eb6662f9 	bl	1bc214c <$AllocateRefHandle(long)>
        229564:	e58d0000 	str	r0, [sp]
        229568:	e1a0100d 	mov	r1, sp
        22956c:	e28d0008 	add	r0, sp, #8	; 0x8
        229570:	eb666f43 	bl	1bc5284 <$InterpretBlock__FRC6RefVarT1>
        229574:	e59d0000 	ldr	r0, [sp]
        229578:	eb66670f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22957c:	e1a00008 	mov	r0, r8
        229580:	eb66decb 	bl	1be10b4 <$DisposPtr>
        229584:	e1a02006 	mov	r2, r6
        229588:	e3a01004 	mov	r1, #4	; 0x4
        22958c:	e5950000 	ldr	r0, [r5]
        229590:	eb6562ed 	bl	1b8214c <TAgentReporter::$AgentReportStatus(long, char *)>
        229594:	e28dd004 	add	sp, sp, #4	; 0x4
        229598:	e59d0004 	ldr	r0, [sp, #4]
        22959c:	eb666706 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2295a0:	e28dd008 	add	sp, sp, #8	; 0x8
        2295a4:	ea000118 	b	229a0c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x784>
        2295a8:	0c10180c 	ldceq	8, cr1, [r0], -#48
        2295ac:	e24dd010 	sub	sp, sp, #16	; 0x10
        2295b0:	e1a01006 	mov	r1, r6
        2295b4:	e5950000 	ldr	r0, [r5]
        2295b8:	eb66313b 	bl	1bb5aac <$strcpy>
        2295bc:	e1a01007 	mov	r1, r7
        2295c0:	e5950000 	ldr	r0, [r5]
        2295c4:	e2800060 	add	r0, r0, #96	; 0x60
        2295c8:	eb663137 	bl	1bb5aac <$strcpy>
        2295cc:	e5950000 	ldr	r0, [r5]
        2295d0:	e2801060 	add	r1, r0, #96	; 0x60
        2295d4:	e5b90010 	ldr	r0, [r9, #16]!
        2295d8:	eb625a72 	bl	1abffa8 <$DoNewtCTestCase(TClassInfo *, char *)>
        2295dc:	e1a02006 	mov	r2, r6
        2295e0:	e3a01009 	mov	r1, #9	; 0x9
        2295e4:	e5950000 	ldr	r0, [r5]
        2295e8:	eb6562d7 	bl	1b8214c <TAgentReporter::$AgentReportStatus(long, char *)>
        2295ec:	ea000106 	b	229a0c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x784>
        2295f0:	e24ddf45 	sub	sp, sp, #276	; 0x114
        2295f4:	e3a0a002 	mov	sl, #2	; 0x2
        2295f8:	e1a0900a 	mov	r9, sl
        2295fc:	e1a0000a 	mov	r0, sl
        229600:	eb6662d1 	bl	1bc214c <$AllocateRefHandle(long)>
        229604:	e58d0100 	str	r0, [sp, #256]
        229608:	e1a00009 	mov	r0, r9
        22960c:	eb6662ce 	bl	1bc214c <$AllocateRefHandle(long)>
        229610:	e1a09000 	mov	r9, r0
        229614:	e1a01006 	mov	r1, r6
        229618:	e58d611c 	str	r6, [sp, #284]
        22961c:	e5950000 	ldr	r0, [r5]
        229620:	eb663121 	bl	1bb5aac <$strcpy>
        229624:	e1a01007 	mov	r1, r7
        229628:	e5950000 	ldr	r0, [r5]
        22962c:	e2800060 	add	r0, r0, #96	; 0x60
        229630:	eb66311d 	bl	1bb5aac <$strcpy>
        229634:	e1a02006 	mov	r2, r6
        229638:	e3a01002 	mov	r1, #2	; 0x2
        22963c:	e5950000 	ldr	r0, [r5]
        229640:	eb6562c1 	bl	1b8214c <TAgentReporter::$AgentReportStatus(long, char *)>
        229644:	e5950010 	ldr	r0, [r5, #16]
        229648:	e590003c 	ldr	r0, [r0, #60]
        22964c:	e3300000 	teq	r0, #0	; 0x0
        229650:	0a0000b8 	beq	229938 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x6b0>
        229654:	e5900000 	ldr	r0, [r0]
        229658:	e5901000 	ldr	r1, [r0]
        22965c:	e59d0100 	ldr	r0, [sp, #256]
        229660:	e5801000 	str	r1, [r0]
        229664:	e28f0f14 	add	r0, pc, #80	; 0x50
        229668:	eb666f04 	bl	1bc5280 <$Intern(char *)>
        22966c:	eb6662b6 	bl	1bc214c <$AllocateRefHandle(long)>
        229670:	e1a06000 	mov	r6, r0
        229674:	e5901000 	ldr	r1, [r0]
        229678:	e59d0100 	ldr	r0, [sp, #256]
        22967c:	e5900000 	ldr	r0, [r0]
        229680:	eb666af6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        229684:	e5890000 	str	r0, [r9]
        229688:	e1a00006 	mov	r0, r6
        22968c:	eb6666ca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229690:	e3a06001 	mov	r6, #1	; 0x1
        229694:	e5c56014 	strb	r6, [r5, #20]
        229698:	e5990000 	ldr	r0, [r9]
        22969c:	e3300002 	teq	r0, #2	; 0x2
        2296a0:	1a00000f 	bne	2296e4 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x45c>
        2296a4:	e5950000 	ldr	r0, [r5]
        2296a8:	e24f2f7c 	sub	r2, pc, #496	; 0x1f0
        2296ac:	e28f1f05 	add	r1, pc, #20	; 0x14
        2296b0:	e3a03000 	mov	r3, #0	; 0x0
        2296b4:	eb6562a3 	bl	1b82148 <TAgentReporter::$AgentReportError(char *, char *, long)>
        2296b8:	ea000090 	b	229900 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x678>
        2296bc:	74657374 	strvcbt	r7, [r5], -#884
        2296c0:	73637269 	cmnvc	r3, #-1879048186	; 0x90000006
        2296c4:	70740000 	rsbvcs	r0, r4, r0
        2296c8:	43616e6e 	cmnmi	r1, #1760	; 0x6e0
        2296cc:	6f742066 	swivs	0x00742066
        2296d0:	696e6420 	stmvsdb	lr!, {r5, sl, sp, lr}^
        2296d4:	74657374 	strvcbt	r7, [r5], -#884
        2296d8:	73637269 	cmnvc	r3, #-1879048186	; 0x90000006
        2296dc:	70742073 	rsbvcs	r2, r4, r3, ror r0
        2296e0:	6c6f7400 	stcvsl	4, cr7, [pc]
        2296e4:	e3a07000 	mov	r7, #0	; 0x0
        2296e8:	e52d706c 	str	r7, [sp, -#108]!
        2296ec:	e24dd008 	sub	sp, sp, #8	; 0x8
        2296f0:	e28d0010 	add	r0, sp, #16	; 0x10
        2296f4:	eb66249e 	bl	1bb2974 <$setjmp>
        2296f8:	e3300000 	teq	r0, #0	; 0x0
        2296fc:	1a000015 	bne	229758 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x4d0>
        229700:	e28d0008 	add	r0, sp, #8	; 0x8
        229704:	eb66da5c 	bl	1be007c <$AddExceptionHandler>
        229708:	e1a0000a 	mov	r0, sl
        22970c:	eb66628e 	bl	1bc214c <$AllocateRefHandle(long)>
        229710:	e58d0000 	str	r0, [sp]
        229714:	e1a0600d 	mov	r6, sp
        229718:	e28f0f0b 	add	r0, pc, #44	; 0x2c
        22971c:	eb666ed7 	bl	1bc5280 <$Intern(char *)>
        229720:	eb666289 	bl	1bc214c <$AllocateRefHandle(long)>
        229724:	e58d0004 	str	r0, [sp, #4]
        229728:	e28d1004 	add	r1, sp, #4	; 0x4
        22972c:	e28d0f5d 	add	r0, sp, #372	; 0x174
        229730:	e1a02006 	mov	r2, r6
        229734:	eb6666a6 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        229738:	e59d0000 	ldr	r0, [sp]
        22973c:	eb66669e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229740:	e59d0004 	ldr	r0, [sp, #4]
        229744:	eb66669c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229748:	ea000069 	b	2298f4 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x66c>
        22974c:	74657374 	strvcbt	r7, [r5], -#884
        229750:	53637269 	cmnpl	r3, #-1879048186	; 0x90000006
        229754:	70740000 	rsbvcs	r0, r4, r0
        229758:	e59d0068 	ldr	r0, [sp, #104]
        22975c:	e59f10fc 	ldr	r1, [pc, #fc]	; 229860 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x5d8>
        229760:	e5911000 	ldr	r1, [r1]
        229764:	eb66e68a 	bl	1be3194 <$Subexception>
        229768:	e3300000 	teq	r0, #0	; 0x0
        22976c:	0a00005e 	beq	2298ec <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x664>
        229770:	e5c56014 	strb	r6, [r5, #20]
        229774:	e5cd7074 	strb	r7, [sp, #116]
        229778:	e59d0068 	ldr	r0, [sp, #104]
        22977c:	e59f10e0 	ldr	r1, [pc, #e0]	; 229864 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x5dc>
        229780:	e5911000 	ldr	r1, [r1]
        229784:	eb66e682 	bl	1be3194 <$Subexception>
        229788:	e3300000 	teq	r0, #0	; 0x0
        22978c:	0a000049 	beq	2298b8 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x630>
        229790:	e24dd004 	sub	sp, sp, #4	; 0x4
        229794:	e59d0070 	ldr	r0, [sp, #112]
        229798:	e5900000 	ldr	r0, [r0]
        22979c:	e5900000 	ldr	r0, [r0]
        2297a0:	eb666269 	bl	1bc214c <$AllocateRefHandle(long)>
        2297a4:	e58d0000 	str	r0, [sp]
        2297a8:	e1a0000d 	mov	r0, sp
        2297ac:	eb672877 	bl	1bf3990 <$IsFrame(RefVar const &)>
        2297b0:	e3300000 	teq	r0, #0	; 0x0
        2297b4:	0a000038 	beq	22989c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x614>
        2297b8:	e28f0f2a 	add	r0, pc, #168	; 0xa8
        2297bc:	eb666eaf 	bl	1bc5280 <$Intern(char *)>
        2297c0:	eb666261 	bl	1bc214c <$AllocateRefHandle(long)>
        2297c4:	e1a06000 	mov	r6, r0
        2297c8:	e5901000 	ldr	r1, [r0]
        2297cc:	e59d0000 	ldr	r0, [sp]
        2297d0:	e5900000 	ldr	r0, [r0]
        2297d4:	eb666aa1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2297d8:	eb66625b 	bl	1bc214c <$AllocateRefHandle(long)>
        2297dc:	e1a0a000 	mov	sl, r0
        2297e0:	e1a00006 	mov	r0, r6
        2297e4:	eb666674 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2297e8:	e59a0000 	ldr	r0, [sl]
        2297ec:	e2001003 	and	r1, r0, #3	; 0x3
        2297f0:	e3510000 	cmp	r1, #0	; 0x0
        2297f4:	1a000003 	bne	229808 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x580>
        2297f8:	01a00140 	moveq	r0, r0, asr #2
        2297fc:	0a000000 	beq	229804 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x57c>
        229800:	eb666245 	bl	1bc211c <$_RINTError(long)>
        229804:	e1a08000 	mov	r8, r0
        229808:	e28f0f19 	add	r0, pc, #100	; 0x64
        22980c:	eb666e9b 	bl	1bc5280 <$Intern(char *)>
        229810:	eb66624d 	bl	1bc214c <$AllocateRefHandle(long)>
        229814:	e1a07000 	mov	r7, r0
        229818:	e5901000 	ldr	r1, [r0]
        22981c:	e59d0000 	ldr	r0, [sp]
        229820:	e5900000 	ldr	r0, [r0]
        229824:	eb666a8d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        229828:	eb666247 	bl	1bc214c <$AllocateRefHandle(long)>
        22982c:	e1a06000 	mov	r6, r0
        229830:	e1a00007 	mov	r0, r7
        229834:	eb666660 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229838:	e5960000 	ldr	r0, [r6]
        22983c:	eb666e98 	bl	1bc52a4 <$IsSymbol(long)>
        229840:	e3300000 	teq	r0, #0	; 0x0
        229844:	0a00000c 	beq	22987c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x5f4>
        229848:	e5960000 	ldr	r0, [r6]
        22984c:	eb667b01 	bl	1bc8458 <$SymbolName(long)>
        229850:	e1a01000 	mov	r1, r0
        229854:	e28d0078 	add	r0, sp, #120	; 0x78
        229858:	eb663093 	bl	1bb5aac <$strcpy>
        22985c:	ea00000a 	b	22988c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x604>
        229860:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        229864:	00380880 	eoreqs	r0, r8, r0, lsl #17
        229868:	6572726f 	ldrvsb	r7, [r2, -#623]!
        22986c:	72636f64 	rsbvc	r6, r3, #400	; 0x190
        229870:	65000000 	strvs	r0, [r0]
        229874:	73796d62 	cmnvc	r9, #6272	; 0x1880
        229878:	6f6c0000 	swivs	0x006c0000
        22987c:	e28d0078 	add	r0, sp, #120	; 0x78
        229880:	e28f1f09 	add	r1, pc, #36	; 0x24
        229884:	e3a0200a 	mov	r2, #10	; 0xa
        229888:	eb662c70 	bl	1bb4a50 <$memcpy>
        22988c:	e1a00006 	mov	r0, r6
        229890:	eb666649 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229894:	e1a0000a 	mov	r0, sl
        229898:	eb666647 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22989c:	e59d0000 	ldr	r0, [sp]
        2298a0:	eb666645 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2298a4:	e28dd004 	add	sp, sp, #4	; 0x4
        2298a8:	ea000003 	b	2298bc <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x634>
        2298ac:	28756e6b 	ldmcsda	r5!, {r0, r1, r3, r5, r6, r9, sl, fp, sp, lr}^
        2298b0:	6e6f776e 	cdpvs	7, 6, cr7, cr15, cr14, {3}
        2298b4:	29000000 	stmcsdb	r0, {}
        2298b8:	e59d806c 	ldr	r8, [sp, #108]
        2298bc:	e1a03008 	mov	r3, r8
        2298c0:	e28d2074 	add	r2, sp, #116	; 0x74
        2298c4:	e5950000 	ldr	r0, [r5]
        2298c8:	e28f1f01 	add	r1, pc, #4	; 0x4
        2298cc:	eb65621d 	bl	1b82148 <TAgentReporter::$AgentReportError(char *, char *, long)>
        2298d0:	ea000007 	b	2298f4 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x66c>
        2298d4:	54657374 	strplbt	r7, [r5], -#884
        2298d8:	20736372 	rsbcss	r6, r3, r2, ror r3
        2298dc:	69707420 	ldmvsdb	r0!, {r5, sl, ip, sp, lr}^
        2298e0:	6661696c 	strvsbt	r6, [r1], -ip, ror #18
        2298e4:	65642121 	strvsb	r2, [r4, -#289]!	; fField289
        2298e8:	20000000 	andcs	r0, r0, r0
        2298ec:	e28d0008 	add	r0, sp, #8	; 0x8
        2298f0:	eb66e217 	bl	1be2154 <$NextHandler>
        2298f4:	e28d0008 	add	r0, sp, #8	; 0x8
        2298f8:	eb66ddee 	bl	1be10b8 <$ExitHandler>
        2298fc:	e28dd074 	add	sp, sp, #116	; 0x74
        229900:	e5d50014 	ldrb	r0, [r5, #20]
        229904:	e3300000 	teq	r0, #0	; 0x0
        229908:	0a00000a 	beq	229938 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x6b0>
        22990c:	e5950010 	ldr	r0, [r5, #16]
        229910:	e5b0603c 	ldr	r6, [r0, #60]!
        229914:	e3360000 	teq	r6, #0	; 0x0
        229918:	0a000003 	beq	22992c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x6a4>
        22991c:	e5960000 	ldr	r0, [r6]
        229920:	eb666625 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229924:	e1a00006 	mov	r0, r6
        229928:	eb668f6c 	bl	1bcd6e0 <$__dl(void *)>
        22992c:	e3a07000 	mov	r7, #0	; 0x0
        229930:	e5950010 	ldr	r0, [r5, #16]
        229934:	e5a0703c 	str	r7, [r0, #60]!
        229938:	e5d50014 	ldrb	r0, [r5, #20]
        22993c:	e3300000 	teq	r0, #0	; 0x0
        229940:	0a000003 	beq	229954 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x6cc>
        229944:	e59d211c 	ldr	r2, [sp, #284]
        229948:	e3a01004 	mov	r1, #4	; 0x4
        22994c:	e5950000 	ldr	r0, [r5]
        229950:	eb6561fd 	bl	1b8214c <TAgentReporter::$AgentReportStatus(long, char *)>
        229954:	e1a00009 	mov	r0, r9
        229958:	eb666617 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22995c:	e59d0100 	ldr	r0, [sp, #256]
        229960:	eb666615 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229964:	e28ddf41 	add	sp, sp, #260	; 0x104
        229968:	ea000027 	b	229a0c <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x784>
        22996c:	e24dd010 	sub	sp, sp, #16	; 0x10
        229970:	e3a00002 	mov	r0, #2	; 0x2
        229974:	eb6661f4 	bl	1bc214c <$AllocateRefHandle(long)>
        229978:	e58d0000 	str	r0, [sp]
        22997c:	e1a0600d 	mov	r6, sp
        229980:	e28f0f0a 	add	r0, pc, #40	; 0x28
        229984:	eb666e3d 	bl	1bc5280 <$Intern(char *)>
        229988:	eb6661ef 	bl	1bc214c <$AllocateRefHandle(long)>
        22998c:	e58d0004 	str	r0, [sp, #4]
        229990:	e28d1004 	add	r1, sp, #4	; 0x4
        229994:	e1a02006 	mov	r2, r6
        229998:	e5b50008 	ldr	r0, [r5, #8]!
        22999c:	eb66660c 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        2299a0:	e59d0000 	ldr	r0, [sp]
        2299a4:	eb666604 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2299a8:	e59d0004 	ldr	r0, [sp, #4]
        2299ac:	ea000015 	b	229a08 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x780>
        2299b0:	74657374 	strvcbt	r7, [r5], -#884
        2299b4:	4d677243 	sfmmi	f7, 2, [r7, -#268]!
        2299b8:	61736544 	cmnvs	r3, r4, asr #10
        2299bc:	6f6e6553 	swivs	0x006e6553
        2299c0:	63726970 	cmnvs	r2, #1835008	; 0x1c0000
        2299c4:	74000000 	strvc	r0, [r0]
        2299c8:	e24dd010 	sub	sp, sp, #16	; 0x10
        2299cc:	e3a00002 	mov	r0, #2	; 0x2
        2299d0:	eb6661dd 	bl	1bc214c <$AllocateRefHandle(long)>
        2299d4:	e58d0008 	str	r0, [sp, #8]
        2299d8:	e28d6008 	add	r6, sp, #8	; 0x8
        2299dc:	e28f0f12 	add	r0, pc, #72	; 0x48
        2299e0:	eb666e26 	bl	1bc5280 <$Intern(char *)>
        2299e4:	eb6661d8 	bl	1bc214c <$AllocateRefHandle(long)>
        2299e8:	e58d000c 	str	r0, [sp, #12]
        2299ec:	e28d100c 	add	r1, sp, #12	; 0xc
        2299f0:	e1a02006 	mov	r2, r6
        2299f4:	e5b50008 	ldr	r0, [r5, #8]!
        2299f8:	eb6665f5 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        2299fc:	e59d0008 	ldr	r0, [sp, #8]
        229a00:	eb6665ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229a04:	e59d000c 	ldr	r0, [sp, #12]
        229a08:	eb6665eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229a0c:	e28dd010 	add	sp, sp, #16	; 0x10
        229a10:	e1a00004 	mov	r0, r4
        229a14:	eb66f66c 	bl	1be73cc <TAEventHandler::$DeferReply(void)>
        229a18:	e59d0000 	ldr	r0, [sp]
        229a1c:	eb671762 	bl	1bef7ac <$SetPort(GrafPort *)>
        229a20:	e59d0004 	ldr	r0, [sp, #4]
        229a24:	eb6665e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        229a28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        229a2c:	74657374 	strvcbt	r7, [r5], -#884
        229a30:	4d677246 	sfmmi	f7, 2, [r7, -#280]!
        229a34:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        229a38:	446f6e65 	strmibt	r6, [pc], #e65	; 229a40 <TNewtTestScriptEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x7b8>
        229a3c:	53637269 	cmnpl	r3, #-1879048186	; 0x90000006
        229a40:	70740000 	rsbvcs	r0, r4, r0
    */
}

/**
 * Symbol: TNewtTestScriptEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00229a44
 */
TNewtTestScriptEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        229a44:	e1a0f00e 	mov	pc, lr
    */
}

