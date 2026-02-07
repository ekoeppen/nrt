#include "DDKIncludes/Communications/PCECallBack.h"

/**
 * Symbol: TConnectionEnd::__ct(void)
 * Address: 00071230
 */
TConnectionEnd::TConnectionEnd(void) {
    /*
         71230:	e1a0c00d 	mov	ip, sp
         71234:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         71238:	e24cb004 	sub	fp, ip, #4	; 0x4
         7123c:	e1b04000 	movs	r4, r0
         71240:	1a000003 	bne	71254 <TConnectionEnd::__ct(void)+0x24>
         71244:	e3a00f82 	mov	r0, #520	; 0x208
         71248:	eb6d753a 	bl	1bce738 <$__nw(unsigned int)>
         7124c:	e1b04000 	movs	r4, r0
         71250:	0a000030 	beq	71318 <TConnectionEnd::__ct(void)+0xe8>
         71254:	e3a05000 	mov	r5, #0	; 0x0
         71258:	e5c4500c 	strb	r5, [r4, #12]
         7125c:	e5845008 	str	r5, [r4, #8]	; fField8
         71260:	e2840010 	add	r0, r4, #16	; 0x10
         71264:	eb6d7110 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         71268:	e284002c 	add	r0, r4, #44	; 0x2c
         7126c:	eb6d2ada 	bl	1bbbddc <TCMOCTConnectInfo::$__ct(void)>
         71270:	e28410ec 	add	r1, r4, #236	; 0xec
         71274:	e2840044 	add	r0, r4, #68	; 0x44
         71278:	e59f30a0 	ldr	r3, [pc, #a0]	; 71320 <TConnectionEnd::__ct(void)+0xf0>
         7127c:	e3a02018 	mov	r2, #24	; 0x18
         71280:	eb664fff 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         71284:	e28400f8 	add	r0, r4, #248	; 0xf8
         71288:	eb6d1620 	bl	1bb6b10 <TCMOTransportInfo::$__ct(void)>
         7128c:	e2840f4a 	add	r0, r4, #296	; 0x128
         71290:	eb6e3b57 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
         71294:	e2840d05 	add	r0, r4, #320	; 0x140
         71298:	eb6e3b55 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
         7129c:	e2840f56 	add	r0, r4, #344	; 0x158
         712a0:	eb6e3b53 	bl	1bffff4 <TCommToolOptionInfo::$__ct(void)>
         712a4:	e2840f62 	add	r0, r4, #392	; 0x188
         712a8:	eb6df946 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
         712ac:	e2840e1d 	add	r0, r4, #464	; 0x1d0
         712b0:	eb6dcbdc 	bl	1be4228 <CShadowBufferSegment::$__ct(void)>
         712b4:	e2840f7b 	add	r0, r4, #492	; 0x1ec
         712b8:	eb6dcbda 	bl	1be4228 <CShadowBufferSegment::$__ct(void)>
         712bc:	e5845000 	str	r5, [r4]
         712c0:	e3e00000 	mvn	r0, #0	; 0x0
         712c4:	e58401b8 	str	r0, [r4, #440]	; fField440
         712c8:	e5845004 	str	r5, [r4, #4]	; TConnectionEnd
         712cc:	e5c451b0 	strb	r5, [r4, #432]	; fField432
         712d0:	e5c451b1 	strb	r5, [r4, #433]
         712d4:	e5c451b2 	strb	r5, [r4, #434]	; fField434
         712d8:	e5845020 	str	r5, [r4, #32]	; fField32
         712dc:	e58451c8 	str	r5, [r4, #456]	; fField456
         712e0:	e58451cc 	str	r5, [r4, #460]	; fField460
         712e4:	e5845124 	str	r5, [r4, #292]	; fField292
         712e8:	e5c45180 	strb	r5, [r4, #384]	; fField384
         712ec:	e5c45181 	strb	r5, [r4, #385]	; fField385
         712f0:	e5c45182 	strb	r5, [r4, #386]
         712f4:	e58451bc 	str	r5, [r4, #444]	; fField444
         712f8:	e58451c0 	str	r5, [r4, #448]	; fField448
         712fc:	e3a00002 	mov	r0, #2	; 0x2
         71300:	e584012c 	str	r0, [r4, #300]	; fField300
         71304:	e58451c4 	str	r5, [r4, #452]	; fField452
         71308:	e3a00001 	mov	r0, #1	; 0x1
         7130c:	e584015c 	str	r0, [r4, #348]	; fField348
         71310:	e5845144 	str	r5, [r4, #324]	; fField324
         71314:	e58450ec 	str	r5, [r4, #236]	; fField236
         71318:	e1a00004 	mov	r0, r4
         7131c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         71320:	01a094ec 	moveq	r9, ip, ror #9
    */
}

/**
 * Symbol: TConnectionEnd::__dt(void)
 * Address: 00071324
 */
TConnectionEnd::~TConnectionEnd(void) {
    /*
         71324:	e1a0c00d 	mov	ip, sp
         71328:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7132c:	e24cb004 	sub	fp, ip, #4	; 0x4
         71330:	e1a04000 	mov	r4, r0
         71334:	e1a05001 	mov	r5, r1
         71338:	e59001c8 	ldr	r0, [r0, #456]	; fField456
         7133c:	e3300000 	teq	r0, #0	; 0x0
         71340:	0a000002 	beq	71350 <TConnectionEnd::__dt(void)+0x2c>
         71344:	e3a01001 	mov	r1, #1	; 0x1
         71348:	e1a0e00f 	mov	lr, pc
         7134c:	e590f000 	ldr	pc, [r0]
         71350:	e59401cc 	ldr	r0, [r4, #460]	; fField460
         71354:	e3300000 	teq	r0, #0	; 0x0
         71358:	0a000002 	beq	71368 <TConnectionEnd::__dt(void)+0x44>
         7135c:	e3a01001 	mov	r1, #1	; 0x1
         71360:	e1a0e00f 	mov	lr, pc
         71364:	e590f000 	ldr	pc, [r0]
         71368:	e2840f7b 	add	r0, r4, #492	; 0x1ec
         7136c:	e3a01000 	mov	r1, #0	; 0x0
         71370:	eb6dcfc2 	bl	1be5280 <CShadowBufferSegment::$__dt(void)>
         71374:	e2840e1d 	add	r0, r4, #464	; 0x1d0
         71378:	e3a01000 	mov	r1, #0	; 0x0
         7137c:	eb6dcfbf 	bl	1be5280 <CShadowBufferSegment::$__dt(void)>
         71380:	e2840010 	add	r0, r4, #16	; 0x10
         71384:	e3a01000 	mov	r1, #0	; 0x0
         71388:	eb6d74e0 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         7138c:	e2840008 	add	r0, r4, #8	; 0x8
         71390:	e3a01000 	mov	r1, #0	; 0x0
         71394:	eb6d74e2 	bl	1bce724 <TUObject::$__dt(void)>
         71398:	e3150001 	tst	r5, #1	; 0x1
         7139c:	11a00004 	movne	r0, r4
         713a0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         713a4:	1a6d70cd 	bne	1bcd6e0 <$__dl(void *)>
         713a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::HandleReply(unsigned long, unsigned long)
 * Address: 000713ac
 */
void					TConnectionEnd::HandleReply(ULong userRefCon, ULong msgType) {
    /*
         713ac:	e241cc4e 	sub	ip, r1, #19968	; 0x4e00
         713b0:	e33c0020 	teq	ip, #32	; 0x20
         713b4:	11a0f00e 	movne	pc, lr
         713b8:	e5901128 	ldr	r1, [r0, #296]	; fField296
         713bc:	e3c11002 	bic	r1, r1, #2	; 0x2
         713c0:	e5801128 	str	r1, [r0, #296]	; fField296
         713c4:	e2802f4a 	add	r2, r0, #296	; 0x128
         713c8:	e59011c4 	ldr	r1, [r0, #452]	; fField452
         713cc:	e5911008 	ldr	r1, [r1, #8]	; fField8
         713d0:	ea66e453 	b	1a2a524 <TConnectionEnd::$ProcessOptionsComplete(long, TCommToolOptionInfo *)>
    */
}

/**
 * Symbol: TConnectionEnd::HandleRequest(unsigned char *, unsigned long, TUMsgToken &, unsigned long)
 * Address: 000713d4
 */
void					TConnectionEnd::HandleRequest(UChar* request, ULong requestSize, TUMsgToken& msgToken, ULong msgType) {
    /*
         713d4:	e1a00003 	mov	r0, r3
         713d8:	e3a030ea 	mov	r3, #234	; 0xea
         713dc:	e2433b0a 	sub	r3, r3, #10240	; 0x2800
         713e0:	e3a02000 	mov	r2, #0	; 0x0
         713e4:	e3a01000 	mov	r1, #0	; 0x0
         713e8:	ea6da23f 	b	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
    */
}

/**
 * Symbol: TConnectionEnd::PrepGetRequest(void)
 * Address: 000713ec
 */
TConnectionEnd::PrepGetRequest(void) {
    /*
         713ec:	e1a0c00d 	mov	ip, sp
         713f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         713f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         713f8:	e1a04000 	mov	r4, r0
         713fc:	e59f20dc 	ldr	r2, [pc, #dc]	; 714e0 <TConnectionEnd::PrepGetRequest(void)+0xf4>
         71400:	e5900020 	ldr	r0, [r0, #32]	; fField32
         71404:	e3100002 	tst	r0, #2	; 0x2
         71408:	0a000030 	beq	714d0 <TConnectionEnd::PrepGetRequest(void)+0xe4>
         7140c:	e3a02f5b 	mov	r2, #364	; 0x16c
         71410:	e2422901 	sub	r2, r2, #16384	; 0x4000
         71414:	e3100008 	tst	r0, #8	; 0x8
         71418:	1a00002c 	bne	714d0 <TConnectionEnd::PrepGetRequest(void)+0xe4>
         7141c:	e5940004 	ldr	r0, [r4, #4]	; TConnectionEnd
         71420:	e2805024 	add	r5, r0, #36	; 0x24
         71424:	e5d50012 	ldrb	r0, [r5, #18]
         71428:	e3300000 	teq	r0, #0	; 0x0
         7142c:	0a00000c 	beq	71464 <TConnectionEnd::PrepGetRequest(void)+0x78>
         71430:	e2840e1d 	add	r0, r4, #464	; 0x1d0
         71434:	e3e03000 	mvn	r3, #0	; 0x0
         71438:	e3a02000 	mov	r2, #0	; 0x0
         7143c:	e5951008 	ldr	r1, [r5, #8]	; fField8
         71440:	eb6de01f 	bl	1be94c4 <CShadowBufferSegment::$Init(unsigned long, long, long)>
         71444:	e1b02000 	movs	r2, r0
         71448:	1a000020 	bne	714d0 <TConnectionEnd::PrepGetRequest(void)+0xe4>
         7144c:	e59401c8 	ldr	r0, [r4, #456]	; fField456
         71450:	e5901000 	ldr	r1, [r0]
         71454:	e1a0e00f 	mov	lr, pc
         71458:	e281f028 	add	pc, r1, #40	; 0x28
         7145c:	e59401c8 	ldr	r0, [r4, #456]	; fField456
         71460:	e5850008 	str	r0, [r5, #8]	; fField8
         71464:	e5940048 	ldr	r0, [r4, #72]	; fField72
         71468:	e330001c 	teq	r0, #28	; 0x1c
         7146c:	1a00000b 	bne	714a0 <TConnectionEnd::PrepGetRequest(void)+0xb4>
         71470:	e3a00000 	mov	r0, #0	; 0x0
         71474:	e5840140 	str	r0, [r4, #320]	; fField320
         71478:	e5d51012 	ldrb	r1, [r5, #18]
         7147c:	e3310000 	teq	r1, #0	; 0x0
         71480:	0a000003 	beq	71494 <TConnectionEnd::PrepGetRequest(void)+0xa8>
         71484:	e3a01020 	mov	r1, #32	; 0x20
         71488:	e5841140 	str	r1, [r4, #320]	; fField320
         7148c:	e5951018 	ldr	r1, [r5, #24]
         71490:	e5841148 	str	r1, [r4, #328]	; fField328
         71494:	e5840144 	str	r0, [r4, #324]	; fField324
         71498:	e5950014 	ldr	r0, [r5, #20]
         7149c:	e584014c 	str	r0, [r4, #332]	; fField332
         714a0:	e5950008 	ldr	r0, [r5, #8]	; fField8
         714a4:	e5840178 	str	r0, [r4, #376]	; fField376
         714a8:	e5d50010 	ldrb	r0, [r5, #16]
         714ac:	e5c40176 	strb	r0, [r4, #374]	; fField374
         714b0:	e5d50011 	ldrb	r0, [r5, #17]
         714b4:	e5c40177 	strb	r0, [r4, #375]	; fField375
         714b8:	e5b5000c 	ldr	r0, [r5, #12]!
         714bc:	e584017c 	str	r0, [r4, #380]	; fField380
         714c0:	e2841d05 	add	r1, r4, #320	; 0x140
         714c4:	e1a00004 	mov	r0, r4
         714c8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         714cc:	ea66e418 	b	1a2a534 <TConnectionEnd::$ProcessOptions(TCommToolOptionInfo *)>
         714d0:	e1a00004 	mov	r0, r4
         714d4:	e3a01000 	mov	r1, #0	; 0x0
         714d8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         714dc:	ea66cf6b 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         714e0:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TConnectionEnd::GetOptionsComplete(long)
 * Address: 000714e4
 */
TConnectionEnd::GetOptionsComplete(long) {
    /*
         714e4:	e3310000 	teq	r1, #0	; 0x0
         714e8:	13a03000 	movne	r3, #0	; 0x0
         714ec:	13a02000 	movne	r2, #0	; 0x0
         714f0:	1a66d397 	bne	1a26354 <TConnectionEnd::$GetComplete(long, unsigned char, unsigned long)>
         714f4:	e5d01177 	ldrb	r1, [r0, #375]	; fField375
         714f8:	e3310000 	teq	r1, #0	; 0x0
         714fc:	15901178 	ldrne	r1, [r0, #376]	; fField376
         71500:	15900000 	ldrne	r0, [r0]
         71504:	1a0c48de 	bne	383884 <PConnectionEnd::GetFramedBytesStart(CBufferList *)>
         71508:	e5d01176 	ldrb	r1, [r0, #374]	; fField374
         7150c:	e3310000 	teq	r1, #0	; 0x0
         71510:	05901178 	ldreq	r1, [r0, #376]	; fField376
         71514:	05900000 	ldreq	r0, [r0]
         71518:	0a0c48d6 	beq	383878 <PConnectionEnd::GetBytesStart(CBufferList *)>
         7151c:	e2802f5e 	add	r2, r0, #376	; 0x178
         71520:	e8920006 	ldmia	r2, {r1, r2}
         71524:	e5900000 	ldr	r0, [r0]
         71528:	ea0c48d8 	b	383890 <PConnectionEnd::GetBytesImmediateStart(CBufferList *, long)>
    */
}

/**
 * Symbol: TConnectionEnd::GetComplete(long, unsigned char, unsigned long)
 * Address: 0007152c
 */
void					TConnectionEnd::GetComplete(NewtonErr result, Boolean endOfFrame = false, ULong getBytesCount = 0) {
    /*
         7152c:	e1a0c00d 	mov	ip, sp
         71530:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         71534:	e24cb004 	sub	fp, ip, #4	; 0x4
         71538:	e1a05000 	mov	r5, r0
         7153c:	e1a04001 	mov	r4, r1
         71540:	e1a06003 	mov	r6, r3
         71544:	e20270ff 	and	r7, r2, #255	; 0xff
         71548:	e24dd018 	sub	sp, sp, #24	; 0x18
         7154c:	e1a0000d 	mov	r0, sp
         71550:	eb6df899 	bl	1bef7bc <TCommToolGetReply::$__ct(void)>
         71554:	e3370000 	teq	r7, #0	; 0x0
         71558:	e58d6014 	str	r6, [sp, #20]
         7155c:	13a00001 	movne	r0, #1	; 0x1
         71560:	15cd0010 	strneb	r0, [sp, #16]
         71564:	e2852d05 	add	r2, r5, #320	; 0x140
         71568:	e1a01004 	mov	r1, r4
         7156c:	e1a00005 	mov	r0, r5
         71570:	eb66e3e9 	bl	1a2a51c <TConnectionEnd::$ProcessOptionsCleanUp(long, TCommToolOptionInfo *)>
         71574:	e1a04000 	mov	r4, r0
         71578:	e1a0300d 	mov	r3, sp
         7157c:	e1a02000 	mov	r2, r0
         71580:	e1a00005 	mov	r0, r5
         71584:	e3a01000 	mov	r1, #0	; 0x0
         71588:	eb66cf41 	bl	1a25294 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         7158c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::KillGetComplete(long)
 * Address: 00071590
 */
void					TConnectionEnd::KillGetComplete(NewtonErr result) {
    /*
         71590:	e1a0c00d 	mov	ip, sp
         71594:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         71598:	e24cb004 	sub	fp, ip, #4	; 0x4
         7159c:	e1a04000 	mov	r4, r0
         715a0:	e1a05001 	mov	r5, r1
         715a4:	e24dd018 	sub	sp, sp, #24	; 0x18
         715a8:	e1a0000d 	mov	r0, sp
         715ac:	eb6df882 	bl	1bef7bc <TCommToolGetReply::$__ct(void)>
         715b0:	e1a0300d 	mov	r3, sp
         715b4:	e1a00004 	mov	r0, r4
         715b8:	e59f2018 	ldr	r2, [pc, #18]	; 715d8 <TConnectionEnd::KillGetComplete(long)+0x48>
         715bc:	e3a01000 	mov	r1, #0	; 0x0
         715c0:	eb66cf33 	bl	1a25294 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         715c4:	e1a02005 	mov	r2, r5
         715c8:	e1a00004 	mov	r0, r4
         715cc:	e3a01001 	mov	r1, #1	; 0x1
         715d0:	eb66d789 	bl	1a273fc <TConnectionEnd::$KillRequestComplete(CommToolRequestType, long)>
         715d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         715d8:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TConnectionEnd::PrepPutRequest(void)
 * Address: 000715dc
 */
TConnectionEnd::PrepPutRequest(void) {
    /*
         715dc:	e1a0c00d 	mov	ip, sp
         715e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         715e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         715e8:	e1a04000 	mov	r4, r0
         715ec:	e59f20e0 	ldr	r2, [pc, #e0]	; 716d4 <TConnectionEnd::PrepPutRequest(void)+0xf8>
         715f0:	e5900020 	ldr	r0, [r0, #32]	; fField32
         715f4:	e3100002 	tst	r0, #2	; 0x2
         715f8:	0a000031 	beq	716c4 <TConnectionEnd::PrepPutRequest(void)+0xe8>
         715fc:	e3a02f5b 	mov	r2, #364	; 0x16c
         71600:	e2422901 	sub	r2, r2, #16384	; 0x4000
         71604:	e3100008 	tst	r0, #8	; 0x8
         71608:	1a00002d 	bne	716c4 <TConnectionEnd::PrepPutRequest(void)+0xe8>
         7160c:	e5940004 	ldr	r0, [r4, #4]	; TConnectionEnd
         71610:	e2805024 	add	r5, r0, #36	; 0x24
         71614:	e5d50010 	ldrb	r0, [r5, #16]
         71618:	e3300000 	teq	r0, #0	; 0x0
         7161c:	0a00000e 	beq	7165c <TConnectionEnd::PrepPutRequest(void)+0x80>
         71620:	e2840f7b 	add	r0, r4, #492	; 0x1ec
         71624:	e3a02000 	mov	r2, #0	; 0x0
         71628:	e2853008 	add	r3, r5, #8	; 0x8
         7162c:	e893000a 	ldmia	r3, {r1, r3}
         71630:	eb6ddfa3 	bl	1be94c4 <CShadowBufferSegment::$Init(unsigned long, long, long)>
         71634:	e1b02000 	movs	r2, r0
         71638:	1a000021 	bne	716c4 <TConnectionEnd::PrepPutRequest(void)+0xe8>
         7163c:	e3e02000 	mvn	r2, #0	; 0x0
         71640:	e3a01000 	mov	r1, #0	; 0x0
         71644:	e59401cc 	ldr	r0, [r4, #460]	; fField460
         71648:	e5903000 	ldr	r3, [r0]
         7164c:	e1a0e00f 	mov	lr, pc
         71650:	e283f038 	add	pc, r3, #56	; 0x38
         71654:	e59401cc 	ldr	r0, [r4, #460]	; fField460
         71658:	e5850008 	str	r0, [r5, #8]	; fField8
         7165c:	e5940060 	ldr	r0, [r4, #96]	; fField96
         71660:	e330001c 	teq	r0, #28	; 0x1c
         71664:	1a00000c 	bne	7169c <TConnectionEnd::PrepPutRequest(void)+0xc0>
         71668:	e3a00000 	mov	r0, #0	; 0x0
         7166c:	e5840158 	str	r0, [r4, #344]	; fField344
         71670:	e5d50010 	ldrb	r0, [r5, #16]
         71674:	e3300000 	teq	r0, #0	; 0x0
         71678:	0a000003 	beq	7168c <TConnectionEnd::PrepPutRequest(void)+0xb0>
         7167c:	e3a00020 	mov	r0, #32	; 0x20
         71680:	e5840158 	str	r0, [r4, #344]	; fField344
         71684:	e5950018 	ldr	r0, [r5, #24]
         71688:	e5840160 	str	r0, [r4, #352]	; fField352
         7168c:	e3a00001 	mov	r0, #1	; 0x1
         71690:	e584015c 	str	r0, [r4, #348]	; fField348
         71694:	e5950014 	ldr	r0, [r5, #20]
         71698:	e5840164 	str	r0, [r4, #356]	; fField356
         7169c:	e5950008 	ldr	r0, [r5, #8]	; fField8
         716a0:	e5840170 	str	r0, [r4, #368]	; fField368
         716a4:	e5d50011 	ldrb	r0, [r5, #17]
         716a8:	e5c40174 	strb	r0, [r4, #372]	; fField372
         716ac:	e5d50012 	ldrb	r0, [r5, #18]
         716b0:	e5c40175 	strb	r0, [r4, #373]	; fField373
         716b4:	e2841f56 	add	r1, r4, #344	; 0x158
         716b8:	e1a00004 	mov	r0, r4
         716bc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         716c0:	ea66e39b 	b	1a2a534 <TConnectionEnd::$ProcessOptions(TCommToolOptionInfo *)>
         716c4:	e1a00004 	mov	r0, r4
         716c8:	e3a01001 	mov	r1, #1	; 0x1
         716cc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         716d0:	ea66ceee 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         716d4:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TConnectionEnd::PutOptionsComplete(long)
 * Address: 000716d8
 */
TConnectionEnd::PutOptionsComplete(long) {
    /*
         716d8:	e3310000 	teq	r1, #0	; 0x0
         716dc:	13a02000 	movne	r2, #0	; 0x0
         716e0:	1a66e3a1 	bne	1a2a56c <TConnectionEnd::$PutComplete(long, unsigned long)>
         716e4:	e5d01174 	ldrb	r1, [r0, #372]	; fField372
         716e8:	e3310000 	teq	r1, #0	; 0x0
         716ec:	05901170 	ldreq	r1, [r0, #368]	; fField368
         716f0:	05900000 	ldreq	r0, [r0]
         716f4:	0a0c4856 	beq	383854 <PConnectionEnd::PutBytesStart(CBufferList *)>
         716f8:	e5d02175 	ldrb	r2, [r0, #373]	; fField373
         716fc:	e5901170 	ldr	r1, [r0, #368]	; fField368
         71700:	e5900000 	ldr	r0, [r0]
         71704:	ea0c4855 	b	383860 <PConnectionEnd::PutFramedBytesStart(CBufferList *, unsigned char)>
    */
}

/**
 * Symbol: TConnectionEnd::PutComplete(long, unsigned long)
 * Address: 00071708
 */
void					TConnectionEnd::PutComplete(NewtonErr result, ULong putBytesCount) {
    /*
         71708:	e1a0c00d 	mov	ip, sp
         7170c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         71710:	e24cb004 	sub	fp, ip, #4	; 0x4
         71714:	e1a04000 	mov	r4, r0
         71718:	e1a05001 	mov	r5, r1
         7171c:	e1a06002 	mov	r6, r2
         71720:	e24dd014 	sub	sp, sp, #20	; 0x14
         71724:	e1a0000d 	mov	r0, sp
         71728:	eb6df822 	bl	1bef7b8 <TCommToolPutReply::$__ct(void)>
         7172c:	e2842f56 	add	r2, r4, #344	; 0x158
         71730:	e1a01005 	mov	r1, r5
         71734:	e1a00004 	mov	r0, r4
         71738:	e58d6010 	str	r6, [sp, #16]
         7173c:	eb66e376 	bl	1a2a51c <TConnectionEnd::$ProcessOptionsCleanUp(long, TCommToolOptionInfo *)>
         71740:	e1a05000 	mov	r5, r0
         71744:	e1a0300d 	mov	r3, sp
         71748:	e1a02000 	mov	r2, r0
         7174c:	e1a00004 	mov	r0, r4
         71750:	e3a01001 	mov	r1, #1	; 0x1
         71754:	eb66cece 	bl	1a25294 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         71758:	e5940020 	ldr	r0, [r4, #32]	; fField32
         7175c:	e3100008 	tst	r0, #8	; 0x8
         71760:	15940000 	ldrne	r0, [r4]
         71764:	1b66e78d 	blne	1a2b5a0 <PConnectionEnd::$ReleaseStart(void)>
         71768:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::KillPutComplete(long)
 * Address: 0007176c
 */
void					TConnectionEnd::KillPutComplete(NewtonErr result) {
    /*
         7176c:	e1a0c00d 	mov	ip, sp
         71770:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         71774:	e24cb004 	sub	fp, ip, #4	; 0x4
         71778:	e1a04000 	mov	r4, r0
         7177c:	e1a05001 	mov	r5, r1
         71780:	e59f2018 	ldr	r2, [pc, #18]	; 717a0 <TConnectionEnd::KillPutComplete(long)+0x34>
         71784:	e3a01001 	mov	r1, #1	; 0x1
         71788:	eb66cec0 	bl	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         7178c:	e1a02005 	mov	r2, r5
         71790:	e1a00004 	mov	r0, r4
         71794:	e3a01002 	mov	r1, #2	; 0x2
         71798:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         7179c:	ea66d716 	b	1a273fc <TConnectionEnd::$KillRequestComplete(CommToolRequestType, long)>
         717a0:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TConnectionEnd::Init(TMuxTool *, PMuxTool *, PConnectionEnd *, unsigned long)
 * Address: 000717a4
 */
void					TConnectionEnd::Init(TConnectionEnd* cePtr) {
    /*
         717a4:	e1a0c00d 	mov	ip, sp
         717a8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         717ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         717b0:	e1a04000 	mov	r4, r0
         717b4:	e1a05002 	mov	r5, r2
         717b8:	e59b9004 	ldr	r9, [fp, #4]	; TConnectionEnd
         717bc:	e4803004 	str	r3, [r0], #4	; TConnectionEnd
         717c0:	e4801004 	str	r1, [r0], #4	; TConnectionEnd
         717c4:	e1a08000 	mov	r8, r0
         717c8:	eb6d90bc 	bl	1bd5ac0 <TUPort::$Init(void)>
         717cc:	e3300000 	teq	r0, #0	; 0x0
         717d0:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         717d4:	e2840010 	add	r0, r4, #16	; 0x10
         717d8:	e1a07000 	mov	r7, r0
         717dc:	e3a01000 	mov	r1, #0	; 0x0
         717e0:	eb6d90ab 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         717e4:	e3300000 	teq	r0, #0	; 0x0
         717e8:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         717ec:	e5940004 	ldr	r0, [r4, #4]	; TConnectionEnd
         717f0:	e5b0108c 	ldr	r1, [r0, #140]!	; fField140
         717f4:	e1a00007 	mov	r0, r7
         717f8:	eb6da964 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         717fc:	e3300000 	teq	r0, #0	; 0x0
         71800:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         71804:	e3a00000 	mov	r0, #0	; 0x0
         71808:	eb6dc66c 	bl	1be31c0 <CBufferList::$__ct(void)>
         7180c:	e58401c8 	str	r0, [r4, #456]	; fField456
         71810:	e3300000 	teq	r0, #0	; 0x0
         71814:	0a000018 	beq	7187c <TConnectionEnd::Init(TMuxTool *, PMuxTool *, PConnectionEnd *, unsigned long)+0xd8>
         71818:	e3a00000 	mov	r0, #0	; 0x0
         7181c:	eb6dc667 	bl	1be31c0 <CBufferList::$__ct(void)>
         71820:	e58401cc 	str	r0, [r4, #460]	; fField460
         71824:	e3300000 	teq	r0, #0	; 0x0
         71828:	0a000013 	beq	7187c <TConnectionEnd::Init(TMuxTool *, PMuxTool *, PConnectionEnd *, unsigned long)+0xd8>
         7182c:	e3a01000 	mov	r1, #0	; 0x0
         71830:	e59401c8 	ldr	r0, [r4, #456]	; fField456
         71834:	eb6ddf14 	bl	1be948c <CBufferList::$Init(unsigned char)>
         71838:	e3300000 	teq	r0, #0	; 0x0
         7183c:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         71840:	e3a01000 	mov	r1, #0	; 0x0
         71844:	e59401cc 	ldr	r0, [r4, #460]	; fField460
         71848:	eb6ddf0f 	bl	1be948c <CBufferList::$Init(unsigned char)>
         7184c:	e3300000 	teq	r0, #0	; 0x0
         71850:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         71854:	e2841e1d 	add	r1, r4, #464	; 0x1d0
         71858:	e59401c8 	ldr	r0, [r4, #456]	; fField456
         7185c:	eb6ddf1f 	bl	1be94e0 <CBufferList::$Insert(CBuffer *)>
         71860:	e2841f7b 	add	r1, r4, #492	; 0x1ec
         71864:	e59401cc 	ldr	r0, [r4, #460]	; fField460
         71868:	eb6ddf1c 	bl	1be94e0 <CBufferList::$Insert(CBuffer *)>
         7186c:	eb66ca75 	bl	1a24248 <$ClassInfo__18PCECallBackWrapperSFv>
         71870:	eb6d94c1 	bl	1bd6b7c <TClassInfo::$New( const(void))>
         71874:	e1b06000 	movs	r6, r0
         71878:	1a000001 	bne	71884 <TConnectionEnd::Init(TMuxTool *, PMuxTool *, PConnectionEnd *, unsigned long)+0xe0>
         7187c:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         71880:	ea6dc226 	b	1be2120 <$MemError>
         71884:	e1a01004 	mov	r1, r4
         71888:	e1a00006 	mov	r0, r6
         7188c:	eb66d6d0 	bl	1a273d4 <PCECallBackWrapper::$Init(TConnectionEnd *)>
         71890:	e1a03009 	mov	r3, r9
         71894:	e1a02006 	mov	r2, r6
         71898:	e1a01005 	mov	r1, r5
         7189c:	e5940000 	ldr	r0, [r4]
         718a0:	eb0c47c7 	bl	3837c4 <PConnectionEnd::Init(PMuxTool *, PCECallBack *, unsigned long)>
         718a4:	e3300000 	teq	r0, #0	; 0x0
         718a8:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         718ac:	e3a03000 	mov	r3, #0	; 0x0
         718b0:	e92d0008 	stmdb	sp!, {r3}
         718b4:	e1a01007 	mov	r1, r7
         718b8:	e1a00008 	mov	r0, r8
         718bc:	e3e03000 	mvn	r3, #0	; 0x0
         718c0:	e3a02000 	mov	r2, #0	; 0x0
         718c4:	eb6d9cda 	bl	1bd8c34 <TUPort::$Receive(TUAsyncMessage *, unsigned long, unsigned long, unsigned char)>
         718c8:	e28dd004 	add	sp, sp, #4	; 0x4
         718cc:	e3300000 	teq	r0, #0	; 0x0
         718d0:	03a01001 	moveq	r1, #1	; 0x1
         718d4:	05c411b2 	streqb	r1, [r4, #434]	; fField434
         718d8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::PrepControlRequest(void)
 * Address: 000718dc
 */
TConnectionEnd::PrepControlRequest(void) {
    /*
         718dc:	e5901004 	ldr	r1, [r0, #4]	; TConnectionEnd
         718e0:	e591102c 	ldr	r1, [r1, #44]
         718e4:	ea66ce7f 	b	1a252e8 <TConnectionEnd::$DoControl(unsigned long)>
    */
}

/**
 * Symbol: TConnectionEnd::PrepKillRequest(void)
 * Address: 000718e8
 */
TConnectionEnd::PrepKillRequest(void) {
    /*
         718e8:	e1a0c00d 	mov	ip, sp
         718ec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         718f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         718f4:	e1a04000 	mov	r4, r0
         718f8:	e24dd004 	sub	sp, sp, #4	; 0x4
         718fc:	e5900004 	ldr	r0, [r0, #4]	; TConnectionEnd
         71900:	e590002c 	ldr	r0, [r0, #44]
         71904:	e3a06000 	mov	r6, #0	; 0x0
         71908:	e5840124 	str	r0, [r4, #292]	; fField292
         7190c:	e3100001 	tst	r0, #1	; 0x1
         71910:	e58461ac 	str	r6, [r4, #428]	; fField428
         71914:	e59f51a4 	ldr	r5, [pc, #1a4]	; 71ac0 <TConnectionEnd::PrepKillRequest(void)+0x1d8>
         71918:	0a00000d 	beq	71954 <TConnectionEnd::PrepKillRequest(void)+0x6c>
         7191c:	e1a00004 	mov	r0, r4
         71920:	e1a02005 	mov	r2, r5
         71924:	e3a01001 	mov	r1, #1	; 0x1
         71928:	eb66d278 	bl	1a26310 <TConnectionEnd::$FlushChannel(CommToolRequestType, long)>
         7192c:	e3300000 	teq	r0, #0	; 0x0
         71930:	1a000063 	bne	71ac4 <TConnectionEnd::PrepKillRequest(void)+0x1dc>
         71934:	e5d40044 	ldrb	r0, [r4, #68]	; fField68
         71938:	e3300000 	teq	r0, #0	; 0x0
         7193c:	05940124 	ldreq	r0, [r4, #292]	; fField292
         71940:	03c00001 	biceq	r0, r0, #1	; 0x1
         71944:	05840124 	streq	r0, [r4, #292]	; fField292
         71948:	0a000001 	beq	71954 <TConnectionEnd::PrepKillRequest(void)+0x6c>
         7194c:	e5940000 	ldr	r0, [r4]
         71950:	eb0c47d1 	bl	38389c <PConnectionEnd::KillGetStart(void)>
         71954:	e5940124 	ldr	r0, [r4, #292]	; fField292
         71958:	e3100002 	tst	r0, #2	; 0x2
         7195c:	0a00000d 	beq	71998 <TConnectionEnd::PrepKillRequest(void)+0xb0>
         71960:	e1a00004 	mov	r0, r4
         71964:	e1a02005 	mov	r2, r5
         71968:	e3a01002 	mov	r1, #2	; 0x2
         7196c:	eb66d267 	bl	1a26310 <TConnectionEnd::$FlushChannel(CommToolRequestType, long)>
         71970:	e3300000 	teq	r0, #0	; 0x0
         71974:	1a000052 	bne	71ac4 <TConnectionEnd::PrepKillRequest(void)+0x1dc>
         71978:	e5d4005c 	ldrb	r0, [r4, #92]	; fField92
         7197c:	e3300000 	teq	r0, #0	; 0x0
         71980:	05940124 	ldreq	r0, [r4, #292]	; fField292
         71984:	03c00002 	biceq	r0, r0, #2	; 0x2
         71988:	05840124 	streq	r0, [r4, #292]	; fField292
         7198c:	0a000001 	beq	71998 <TConnectionEnd::PrepKillRequest(void)+0xb0>
         71990:	e5940000 	ldr	r0, [r4]
         71994:	eb0c47b4 	bl	38386c <PConnectionEnd::KillPutStart(void)>
         71998:	e5940124 	ldr	r0, [r4, #292]	; fField292
         7199c:	e3100004 	tst	r0, #4	; 0x4
         719a0:	0a00002f 	beq	71a64 <TConnectionEnd::PrepKillRequest(void)+0x17c>
         719a4:	e1a00004 	mov	r0, r4
         719a8:	e1a02005 	mov	r2, r5
         719ac:	e3a01004 	mov	r1, #4	; 0x4
         719b0:	eb66d256 	bl	1a26310 <TConnectionEnd::$FlushChannel(CommToolRequestType, long)>
         719b4:	e3300000 	teq	r0, #0	; 0x0
         719b8:	1a000041 	bne	71ac4 <TConnectionEnd::PrepKillRequest(void)+0x1dc>
         719bc:	e5d40074 	ldrb	r0, [r4, #116]	; fField116
         719c0:	e3300000 	teq	r0, #0	; 0x0
         719c4:	05940124 	ldreq	r0, [r4, #292]	; fField292
         719c8:	03c00004 	biceq	r0, r0, #4	; 0x4
         719cc:	05840124 	streq	r0, [r4, #292]	; fField292
         719d0:	0a000023 	beq	71a64 <TConnectionEnd::PrepKillRequest(void)+0x17c>
         719d4:	e5940000 	ldr	r0, [r4]
         719d8:	eb66d24e 	bl	1a26318 <PConnectionEnd::$ForwardOptions(void)>
         719dc:	e1b07000 	movs	r7, r0
         719e0:	15940128 	ldrne	r0, [r4, #296]	; fField296
         719e4:	12001001 	andne	r1, r0, #1	; 0x1
         719e8:	13310000 	teqne	r1, #0	; 0x0
         719ec:	12000008 	andne	r0, r0, #8	; 0x8
         719f0:	13300000 	teqne	r0, #0	; 0x0
         719f4:	0a000018 	beq	71a5c <TConnectionEnd::PrepKillRequest(void)+0x174>
         719f8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         719fc:	e28d0010 	add	r0, sp, #16	; 0x10
         71a00:	eb6df77b 	bl	1bef7f4 <TCommToolKillRequest::$__ct(void)>
         71a04:	e1a0000d 	mov	r0, sp
         71a08:	eb6df769 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         71a0c:	e1a0000d 	mov	r0, sp
         71a10:	e3a01010 	mov	r1, #16	; 0x10
         71a14:	e3a02000 	mov	r2, #0	; 0x0
         71a18:	e3a0c010 	mov	ip, #16	; 0x10
         71a1c:	e3a03000 	mov	r3, #0	; 0x0
         71a20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         71a24:	e1a03006 	mov	r3, r6
         71a28:	e1a0100c 	mov	r1, ip
         71a2c:	e3a0000c 	mov	r0, #12	; 0xc
         71a30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         71a34:	e28d3030 	add	r3, sp, #48	; 0x30
         71a38:	e92d0008 	stmdb	sp!, {r3}
         71a3c:	e28d3040 	add	r3, sp, #64	; 0x40
         71a40:	e1a00007 	mov	r0, r7
         71a44:	e3a02002 	mov	r2, #2	; 0x2
         71a48:	e3a01001 	mov	r1, #1	; 0x1
         71a4c:	eb6da4be 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         71a50:	e3300000 	teq	r0, #0	; 0x0
         71a54:	e28dd040 	add	sp, sp, #64	; 0x40
         71a58:	1a000019 	bne	71ac4 <TConnectionEnd::PrepKillRequest(void)+0x1dc>
         71a5c:	e1a00004 	mov	r0, r4
         71a60:	eb66ce22 	bl	1a252f0 <TConnectionEnd::$DoKillControl(void)>
         71a64:	e5940124 	ldr	r0, [r4, #292]	; fField292
         71a68:	e3100008 	tst	r0, #8	; 0x8
         71a6c:	0a00000d 	beq	71aa8 <TConnectionEnd::PrepKillRequest(void)+0x1c0>
         71a70:	e1a00004 	mov	r0, r4
         71a74:	e1a02005 	mov	r2, r5
         71a78:	e3a01008 	mov	r1, #8	; 0x8
         71a7c:	eb66d223 	bl	1a26310 <TConnectionEnd::$FlushChannel(CommToolRequestType, long)>
         71a80:	e3300000 	teq	r0, #0	; 0x0
         71a84:	1a00000e 	bne	71ac4 <TConnectionEnd::PrepKillRequest(void)+0x1dc>
         71a88:	e5d4008c 	ldrb	r0, [r4, #140]	; fField140
         71a8c:	e3300000 	teq	r0, #0	; 0x0
         71a90:	05940124 	ldreq	r0, [r4, #292]	; fField292
         71a94:	03c00008 	biceq	r0, r0, #8	; 0x8
         71a98:	05840124 	streq	r0, [r4, #292]	; fField292
         71a9c:	0a000001 	beq	71aa8 <TConnectionEnd::PrepKillRequest(void)+0x1c0>
         71aa0:	e5940000 	ldr	r0, [r4]
         71aa4:	eb0c478b 	bl	3838d8 <PConnectionEnd::KillGetCommEventStart(void)>
         71aa8:	e5940124 	ldr	r0, [r4, #292]	; fField292
         71aac:	e3300000 	teq	r0, #0	; 0x0
         71ab0:	01a00004 	moveq	r0, r4
         71ab4:	03a02000 	moveq	r2, #0	; 0x0
         71ab8:	0a000003 	beq	71acc <TConnectionEnd::PrepKillRequest(void)+0x1e4>
         71abc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         71ac0:	ffffc17b 	swinv	0x00ffc17b
         71ac4:	e1a02000 	mov	r2, r0
         71ac8:	e1a00004 	mov	r0, r4
         71acc:	e3a01004 	mov	r1, #4	; 0x4
         71ad0:	eb66cdee 	bl	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         71ad4:	eafffff8 	b	71abc <TConnectionEnd::PrepKillRequest(void)+0x1d4>
    */
}

/**
 * Symbol: TConnectionEnd::KillRequestComplete(CommToolRequestType, long)
 * Address: 00071ad8
 */
TConnectionEnd::KillRequestComplete(CommToolRequestType, long) {
    /*
         71ad8:	e5903124 	ldr	r3, [r0, #292]	; fField292
         71adc:	e1c31001 	bic	r1, r3, r1
         71ae0:	e3320000 	teq	r2, #0	; 0x0
         71ae4:	e5801124 	str	r1, [r0, #292]	; fField292
         71ae8:	0a000002 	beq	71af8 <TConnectionEnd::KillRequestComplete(CommToolRequestType, long)+0x20>
         71aec:	e59031ac 	ldr	r3, [r0, #428]	; fField428
         71af0:	e3330000 	teq	r3, #0	; 0x0
         71af4:	058021ac 	streq	r2, [r0, #428]	; fField428
         71af8:	e3310000 	teq	r1, #0	; 0x0
         71afc:	03a01004 	moveq	r1, #4	; 0x4
         71b00:	059021ac 	ldreq	r2, [r0, #428]	; fField428
         71b04:	0a66cde1 	beq	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         71b08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TConnectionEnd::PrepResArbRequest(void)
 * Address: 00071b0c
 */
TConnectionEnd::PrepResArbRequest(void) {
    /*
         71b0c:	e5901004 	ldr	r1, [r0, #4]	; TConnectionEnd
         71b10:	e2811024 	add	r1, r1, #36	; 0x24
         71b14:	e5912008 	ldr	r2, [r1, #8]	; fField8
         71b18:	e3320001 	teq	r2, #1	; 0x1
         71b1c:	0281200c 	addeq	r2, r1, #12	; 0xc
         71b20:	08920006 	ldmeqia	r2, {r1, r2}
         71b24:	0a66e6ac 	beq	1a2b5dc <TConnectionEnd::$ResArbRelease(unsigned char *, unsigned char *)>
         71b28:	e3320002 	teq	r2, #2	; 0x2
         71b2c:	11a0f00e 	movne	pc, lr
         71b30:	e281200c 	add	r2, r1, #12	; 0xc
         71b34:	e8920006 	ldmia	r2, {r1, r2}
         71b38:	e5900000 	ldr	r0, [r0]
         71b3c:	ea0c4777 	b	383920 <PConnectionEnd::ResArbClaimNotification(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TConnectionEnd::DoControl(unsigned long)
 * Address: 00071b40
 */
TConnectionEnd::DoControl(unsigned long) {
    /*
         71b40:	e5801184 	str	r1, [r0, #388]	; fField388
         71b44:	e2411002 	sub	r1, r1, #2	; 0x2
         71b48:	e3510008 	cmp	r1, #8	; 0x8
         71b4c:	908ff101 	addls	pc, pc, r1, lsl #2
         71b50:	ea000012 	b	71ba0 <TConnectionEnd::DoControl(unsigned long)+0x60>
         71b54:	ea000009 	b	71b80 <TConnectionEnd::DoControl(unsigned long)+0x40>
         71b58:	ea000009 	b	71b84 <TConnectionEnd::DoControl(unsigned long)+0x44>
         71b5c:	ea000009 	b	71b88 <TConnectionEnd::DoControl(unsigned long)+0x48>
         71b60:	ea000009 	b	71b8c <TConnectionEnd::DoControl(unsigned long)+0x4c>
         71b64:	ea000009 	b	71b90 <TConnectionEnd::DoControl(unsigned long)+0x50>
         71b68:	ea000009 	b	71b94 <TConnectionEnd::DoControl(unsigned long)+0x54>
         71b6c:	ea000009 	b	71b98 <TConnectionEnd::DoControl(unsigned long)+0x58>
         71b70:	ea000009 	b	71b9c <TConnectionEnd::DoControl(unsigned long)+0x5c>
         71b74:	e5901004 	ldr	r1, [r0, #4]	; TConnectionEnd
         71b78:	e2811024 	add	r1, r1, #36	; 0x24
         71b7c:	ea66da32 	b	1a2844c <TConnectionEnd::$OptionMgmt(TCommToolOptionMgmtRequest *)>
         71b80:	ea66cdc1 	b	1a2528c <TConnectionEnd::$Close(void)>
         71b84:	ea66cdcd 	b	1a252c0 <TConnectionEnd::$Connect(void)>
         71b88:	ea66da22 	b	1a28418 <TConnectionEnd::$Listen(void)>
         71b8c:	ea66c58a 	b	1a231bc <TConnectionEnd::$Accept(void)>
         71b90:	ea66cdd1 	b	1a252dc <TConnectionEnd::$Disconnect(void)>
         71b94:	ea66e682 	b	1a2b5a4 <TConnectionEnd::$Release(void)>
         71b98:	ea66c99d 	b	1a24214 <TConnectionEnd::$Bind(void)>
         71b9c:	ea66eaaf 	b	1a2c660 <TConnectionEnd::$Unbind(void)>
         71ba0:	e3a0207e 	mov	r2, #126	; 0x7e
         71ba4:	e2422c3f 	sub	r2, r2, #16128	; 0x3f00
         71ba8:	e3a01002 	mov	r1, #2	; 0x2
         71bac:	ea66cdb7 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::DoStatus(unsigned long)
 * Address: 00071bb0
 */
TConnectionEnd::DoStatus(unsigned long) {
    /*
         71bb0:	e3a0207e 	mov	r2, #126	; 0x7e
         71bb4:	e2422c3f 	sub	r2, r2, #16128	; 0x3f00
         71bb8:	e3a01005 	mov	r1, #5	; 0x5
         71bbc:	ea66cdb3 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::DoKillControl(void)
 * Address: 00071bc0
 */
TConnectionEnd::DoKillControl(void) {
    /*
         71bc0:	e5901020 	ldr	r1, [r0, #32]	; fField32
         71bc4:	e3110001 	tst	r1, #1	; 0x1
         71bc8:	02011008 	andeq	r1, r1, #8	; 0x8
         71bcc:	03310000 	teqeq	r1, #0	; 0x0
         71bd0:	05900000 	ldreq	r0, [r0]
         71bd4:	0a0c473c 	beq	3838cc <PConnectionEnd::KillControlStart(void)>
         71bd8:	e5901028 	ldr	r1, [r0, #40]	; fField40
         71bdc:	e3310000 	teq	r1, #0	; 0x0
         71be0:	03a01002 	moveq	r1, #2	; 0x2
         71be4:	05801028 	streq	r1, [r0, #40]	; fField40
         71be8:	e59f1000 	ldr	r1, [pc, #0]	; 71bf0 <TConnectionEnd::DoKillControl(void)+0x30>
         71bec:	ea66ea85 	b	1a2c608 <TConnectionEnd::$StartAbort(long)>
         71bf0:	ffffc173 	swinv	0x00ffc173
    */
}

/**
 * Symbol: TConnectionEnd::KillControlComplete(long)
 * Address: 00071bf4
 */
void					TConnectionEnd::KillControlComplete(NewtonErr result) {
    /*
         71bf4:	e1a02001 	mov	r2, r1
         71bf8:	e3a01004 	mov	r1, #4	; 0x4
         71bfc:	ea66d5fe 	b	1a273fc <TConnectionEnd::$KillRequestComplete(CommToolRequestType, long)>
    */
}

/**
 * Symbol: TConnectionEnd::GetCommEvent(void)
 * Address: 00071c00
 */
void					TConnectionEnd::GetCommEvent() {
    /*
         71c00:	e1a0c00d 	mov	ip, sp
         71c04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         71c08:	e24cb004 	sub	fp, ip, #4	; 0x4
         71c0c:	e1a04000 	mov	r4, r0
         71c10:	e5900190 	ldr	r0, [r0, #400]	; fField400
         71c14:	e3a05e17 	mov	r5, #368	; 0x170
         71c18:	e2455901 	sub	r5, r5, #16384	; 0x4000
         71c1c:	e1300005 	teq	r0, r5
         71c20:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         71c24:	e2841f62 	add	r1, r4, #392	; 0x188
         71c28:	e1a00004 	mov	r0, r4
         71c2c:	e3a02000 	mov	r2, #0	; 0x0
         71c30:	eb66de17 	bl	1a29494 <TConnectionEnd::$PostCommEvent(TCommToolGetEventReply &, long)>
         71c34:	e5a45190 	str	r5, [r4, #400]!	; fField400
         71c38:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::KillGetCommEventComplete(long)
 * Address: 00071c3c
 */
void					TConnectionEnd::KillGetCommEventComplete(NewtonErr result) {
    /*
         71c3c:	e1a0c00d 	mov	ip, sp
         71c40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         71c44:	e24cb004 	sub	fp, ip, #4	; 0x4
         71c48:	e1a04000 	mov	r4, r0
         71c4c:	e5d0008c 	ldrb	r0, [r0, #140]	; fField140
         71c50:	e3300000 	teq	r0, #0	; 0x0
         71c54:	0a00000d 	beq	71c90 <TConnectionEnd::KillGetCommEventComplete(long)+0x54>
         71c58:	e24dd024 	sub	sp, sp, #36	; 0x24
         71c5c:	e1a0000d 	mov	r0, sp
         71c60:	eb6df6d8 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
         71c64:	e1a0300d 	mov	r3, sp
         71c68:	e1a00004 	mov	r0, r4
         71c6c:	e59f2018 	ldr	r2, [pc, #18]	; 71c8c <TConnectionEnd::KillGetCommEventComplete(long)+0x50>
         71c70:	e3a01003 	mov	r1, #3	; 0x3
         71c74:	eb66cd86 	bl	1a25294 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         71c78:	e1a00004 	mov	r0, r4
         71c7c:	e3a02000 	mov	r2, #0	; 0x0
         71c80:	e3a01008 	mov	r1, #8	; 0x8
         71c84:	eb66d5dc 	bl	1a273fc <TConnectionEnd::$KillRequestComplete(CommToolRequestType, long)>
         71c88:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         71c8c:	ffffc17b 	swinv	0x00ffc17b
         71c90:	e1a02001 	mov	r2, r1
         71c94:	e1a00004 	mov	r0, r4
         71c98:	e3a01008 	mov	r1, #8	; 0x8
         71c9c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         71ca0:	ea66d5d5 	b	1a273fc <TConnectionEnd::$KillRequestComplete(CommToolRequestType, long)>
    */
}

/**
 * Symbol: TConnectionEnd::OpenStart(void)
 * Address: 00071ca4
 */
TConnectionEnd::OpenStart(void) {
    /*
         71ca4:	e92d4000 	stmdb	sp!, {lr}
         71ca8:	e2801f4a 	add	r1, r0, #296	; 0x128
         71cac:	e5902004 	ldr	r2, [r0, #4]	; TConnectionEnd
         71cb0:	e2822074 	add	r2, r2, #116	; 0x74
         71cb4:	e1a0e001 	mov	lr, r1
         71cb8:	e8b21008 	ldmia	r2!, {r3, ip}
         71cbc:	e8ae1008 	stmia	lr!, {r3, ip}
         71cc0:	e8b21008 	ldmia	r2!, {r3, ip}
         71cc4:	e8ae1008 	stmia	lr!, {r3, ip}
         71cc8:	e8921008 	ldmia	r2, {r3, ip}
         71ccc:	e88e1008 	stmia	lr, {r3, ip}
         71cd0:	e3a02001 	mov	r2, #1	; 0x1
         71cd4:	e5802184 	str	r2, [r0, #388]	; fField388
         71cd8:	e8bd4000 	ldmia	sp!, {lr}
         71cdc:	ea66e214 	b	1a2a534 <TConnectionEnd::$ProcessOptions(TCommToolOptionInfo *)>
    */
}

/**
 * Symbol: TConnectionEnd::PostCommEvent(TCommToolGetEventReply &, long)
 * Address: 00071ce0
 */
NewtonErr				TConnectionEnd::PostCommEvent(TCommToolGetEventReply& theEvent, NewtonErr result) {
    /*
         71ce0:	e1a0c00d 	mov	ip, sp
         71ce4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         71ce8:	e24cb004 	sub	fp, ip, #4	; 0x4
         71cec:	e3a04000 	mov	r4, #0	; 0x0
         71cf0:	e5d0308c 	ldrb	r3, [r0, #140]	; fField140
         71cf4:	e3330000 	teq	r3, #0	; 0x0
         71cf8:	0a000003 	beq	71d0c <TConnectionEnd::PostCommEvent(TCommToolGetEventReply &, long)+0x2c>
         71cfc:	e1a03001 	mov	r3, r1
         71d00:	e3a01003 	mov	r1, #3	; 0x3
         71d04:	eb66cd62 	bl	1a25294 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         71d08:	ea000001 	b	71d14 <TConnectionEnd::PostCommEvent(TCommToolGetEventReply &, long)+0x34>
         71d0c:	e3a04071 	mov	r4, #113	; 0x71
         71d10:	e2444c3f 	sub	r4, r4, #16128	; 0x3f00
         71d14:	e1a00004 	mov	r0, r4
         71d18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::ImportConnectPB(TCommToolConnectRequest *)
 * Address: 00071d1c
 */
TConnectionEnd::ImportConnectPB(TCommToolConnectRequest *) {
    /*
         71d1c:	e1a0c00d 	mov	ip, sp
         71d20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         71d24:	e24cb004 	sub	fp, ip, #4	; 0x4
         71d28:	e1a04000 	mov	r4, r0
         71d2c:	e1a05001 	mov	r5, r1
         71d30:	e3a00000 	mov	r0, #0	; 0x0
         71d34:	e5911020 	ldr	r1, [r1, #32]	; fField32
         71d38:	e58410f0 	str	r1, [r4, #240]	; fField240
         71d3c:	e5d51024 	ldrb	r1, [r5, #36]	; fField36
         71d40:	e5c410f4 	strb	r1, [r4, #244]	; fField244
         71d44:	e3310000 	teq	r1, #0	; 0x0
         71d48:	05b5101c 	ldreq	r1, [r5, #28]!
         71d4c:	05a410ec 	streq	r1, [r4, #236]!	; fField236
         71d50:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         71d54:	e595101c 	ldr	r1, [r5, #28]
         71d58:	e3310000 	teq	r1, #0	; 0x0
         71d5c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         71d60:	e3a00000 	mov	r0, #0	; 0x0
         71d64:	eb6dc92f 	bl	1be4228 <CShadowBufferSegment::$__ct(void)>
         71d68:	e1a06000 	mov	r6, r0
         71d6c:	e59400ec 	ldr	r0, [r4, #236]	; fField236
         71d70:	e3300000 	teq	r0, #0	; 0x0
         71d74:	03a000e9 	moveq	r0, #233	; 0xe9
         71d78:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         71d7c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         71d80:	e1a00006 	mov	r0, r6
         71d84:	e3e03000 	mvn	r3, #0	; 0x0
         71d88:	e3a02000 	mov	r2, #0	; 0x0
         71d8c:	e5b5101c 	ldr	r1, [r5, #28]!
         71d90:	eb6dddcb 	bl	1be94c4 <CShadowBufferSegment::$Init(unsigned long, long, long)>
         71d94:	e3300000 	teq	r0, #0	; 0x0
         71d98:	05a460ec 	streq	r6, [r4, #236]!	; fField236
         71d9c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::CopyBackConnectPB(long)
 * Address: 00071da0
 */
TConnectionEnd::CopyBackConnectPB(long) {
    /*
         71da0:	e1a0c00d 	mov	ip, sp
         71da4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         71da8:	e24cb004 	sub	fp, ip, #4	; 0x4
         71dac:	e1a04000 	mov	r4, r0
         71db0:	e1a05001 	mov	r5, r1
         71db4:	e5d000f4 	ldrb	r0, [r0, #244]	; fField244
         71db8:	e3300000 	teq	r0, #0	; 0x0
         71dbc:	159400ec 	ldrne	r0, [r4, #236]	; fField236
         71dc0:	13300000 	teqne	r0, #0	; 0x0
         71dc4:	0a000002 	beq	71dd4 <TConnectionEnd::CopyBackConnectPB(long)+0x34>
         71dc8:	e3a01001 	mov	r1, #1	; 0x1
         71dcc:	e1a0e00f 	mov	lr, pc
         71dd0:	e590f000 	ldr	pc, [r0]
         71dd4:	e3a00000 	mov	r0, #0	; 0x0
         71dd8:	e58400ec 	str	r0, [r4, #236]	; fField236
         71ddc:	e2842f4a 	add	r2, r4, #296	; 0x128
         71de0:	e1a01005 	mov	r1, r5
         71de4:	e1a00004 	mov	r0, r4
         71de8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         71dec:	ea66e1ca 	b	1a2a51c <TConnectionEnd::$ProcessOptionsCleanUp(long, TCommToolOptionInfo *)>
    */
}

/**
 * Symbol: TConnectionEnd::ConnectCheck(void)
 * Address: 00071df0
 */
TConnectionEnd::ConnectCheck(void) {
    /*
         71df0:	e3a02f5e 	mov	r2, #376	; 0x178
         71df4:	e2422901 	sub	r2, r2, #16384	; 0x4000
         71df8:	e5901020 	ldr	r1, [r0, #32]	; fField32
         71dfc:	e3110003 	tst	r1, #3	; 0x3
         71e00:	1a000006 	bne	71e20 <TConnectionEnd::ConnectCheck(void)+0x30>
         71e04:	e3a02000 	mov	r2, #0	; 0x0
         71e08:	e3811001 	orr	r1, r1, #1	; 0x1
         71e0c:	e5801020 	str	r1, [r0, #32]	; fField32
         71e10:	e3a01000 	mov	r1, #0	; 0x0
         71e14:	e5801028 	str	r1, [r0, #40]	; fField40
         71e18:	e5801024 	str	r1, [r0, #36]	; fField36
         71e1c:	e5a01190 	str	r1, [r0, #400]!	; fField400
         71e20:	e1a00002 	mov	r0, r2
         71e24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TConnectionEnd::Connect(void)
 * Address: 00071e28
 */
TConnectionEnd::Connect(void) {
    /*
         71e28:	e1a0c00d 	mov	ip, sp
         71e2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         71e30:	e24cb004 	sub	fp, ip, #4	; 0x4
         71e34:	e1a04000 	mov	r4, r0
         71e38:	e5900004 	ldr	r0, [r0, #4]	; TConnectionEnd
         71e3c:	e2805024 	add	r5, r0, #36	; 0x24
         71e40:	e1a00004 	mov	r0, r4
         71e44:	eb66cd15 	bl	1a252a0 <TConnectionEnd::$ConnectCheck(void)>
         71e48:	e3300000 	teq	r0, #0	; 0x0
         71e4c:	1a00000d 	bne	71e88 <TConnectionEnd::Connect(void)+0x60>
         71e50:	e1a01005 	mov	r1, r5
         71e54:	e1a00004 	mov	r0, r4
         71e58:	eb66d557 	bl	1a273bc <TConnectionEnd::$ImportConnectPB(TCommToolConnectRequest *)>
         71e5c:	e3300000 	teq	r0, #0	; 0x0
         71e60:	11a01000 	movne	r1, r0
         71e64:	11a00004 	movne	r0, r4
         71e68:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         71e6c:	1a66cd0d 	bne	1a252a8 <TConnectionEnd::$ConnectComplete(long)>
         71e70:	e2853014 	add	r3, r5, #20	; 0x14
         71e74:	e893000c 	ldmia	r3, {r2, r3}
         71e78:	e5d51024 	ldrb	r1, [r5, #36]	; fField36
         71e7c:	e1a00004 	mov	r0, r4
         71e80:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         71e84:	ea66dd91 	b	1a294d0 <TConnectionEnd::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
         71e88:	e1a02000 	mov	r2, r0
         71e8c:	e1a00004 	mov	r0, r4
         71e90:	e3a01002 	mov	r1, #2	; 0x2
         71e94:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         71e98:	ea66ccfc 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::ConnectOptionsComplete(long)
 * Address: 00071e9c
 */
TConnectionEnd::ConnectOptionsComplete(long) {
    /*
         71e9c:	e3310000 	teq	r1, #0	; 0x0
         71ea0:	05900000 	ldreq	r0, [r0]
         71ea4:	0a66cd04 	beq	1a252bc <PConnectionEnd::$ConnectStart(void)>
         71ea8:	1a66ccfe 	bne	1a252a8 <TConnectionEnd::$ConnectComplete(long)>
    */
}

/**
 * Symbol: TConnectionEnd::ConnectComplete(long)
 * Address: 00071eac
 */
void					TConnectionEnd::ConnectComplete(NewtonErr result) {
    /*
         71eac:	e1a0c00d 	mov	ip, sp
         71eb0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         71eb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         71eb8:	e1a04000 	mov	r4, r0
         71ebc:	e1b05001 	movs	r5, r1
         71ec0:	e5900020 	ldr	r0, [r0, #32]	; fField32
         71ec4:	e3c00001 	bic	r0, r0, #1	; 0x1
         71ec8:	e5840020 	str	r0, [r4, #32]	; fField32
         71ecc:	03800002 	orreq	r0, r0, #2	; 0x2
         71ed0:	05840020 	streq	r0, [r4, #32]	; fField32
         71ed4:	e5940134 	ldr	r0, [r4, #308]	; fField308
         71ed8:	e3300000 	teq	r0, #0	; 0x0
         71edc:	0a000014 	beq	71f34 <TConnectionEnd::ConnectComplete(long)+0x88>
         71ee0:	e3350000 	teq	r5, #0	; 0x0
         71ee4:	1a000012 	bne	71f34 <TConnectionEnd::ConnectComplete(long)+0x88>
         71ee8:	e594013c 	ldr	r0, [r4, #316]	; fField316
         71eec:	e59f107c 	ldr	r1, [pc, #7c]	; 71f70 <TConnectionEnd::ConnectComplete(long)+0xc4>
         71ef0:	eb6d1b47 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         71ef4:	e1b06000 	movs	r6, r0
         71ef8:	0a00000d 	beq	71f34 <TConnectionEnd::ConnectComplete(long)+0x88>
         71efc:	e5960008 	ldr	r0, [r6, #8]	; fField8
         71f00:	e2001cff 	and	r1, r0, #65280	; 0xff00
         71f04:	e3310b01 	teq	r1, #1024	; 0x400
         71f08:	138000ff 	orrne	r0, r0, #255	; 0xff
         71f0c:	1a000004 	bne	71f24 <TConnectionEnd::ConnectComplete(long)+0x78>
         71f10:	e284102c 	add	r1, r4, #44	; 0x2c
         71f14:	e1a00006 	mov	r0, r6
         71f18:	eb6d172c 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         71f1c:	e5960008 	ldr	r0, [r6, #8]	; fField8
         71f20:	e3c000ff 	bic	r0, r0, #255	; 0xff
         71f24:	e5860008 	str	r0, [r6, #8]	; fField8
         71f28:	e5960008 	ldr	r0, [r6, #8]	; fField8
         71f2c:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         71f30:	e5a60008 	str	r0, [r6, #8]!	; fField8
         71f34:	e24dd014 	sub	sp, sp, #20	; 0x14
         71f38:	e1a0000d 	mov	r0, sp
         71f3c:	eb6df61f 	bl	1bef7c0 <TCommToolConnectReply::$__ct(void)>
         71f40:	e59400f0 	ldr	r0, [r4, #240]	; fField240
         71f44:	e1a01005 	mov	r1, r5
         71f48:	e58d0010 	str	r0, [sp, #16]
         71f4c:	e1a00004 	mov	r0, r4
         71f50:	eb66ccdb 	bl	1a252c4 <TConnectionEnd::$CopyBackConnectPB(long)>
         71f54:	e1a05000 	mov	r5, r0
         71f58:	e1a0300d 	mov	r3, sp
         71f5c:	e1a02000 	mov	r2, r0
         71f60:	e1a00004 	mov	r0, r4
         71f64:	e3a01002 	mov	r1, #2	; 0x2
         71f68:	eb66ccc9 	bl	1a25294 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         71f6c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         71f70:	63746369 	cmnvs	r4, #-1543503871	; 0xa4000001
    */
}

/**
 * Symbol: TConnectionEnd::Listen(void)
 * Address: 00071f74
 */
TConnectionEnd::Listen(void) {
    /*
         71f74:	e1a0c00d 	mov	ip, sp
         71f78:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         71f7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         71f80:	e1a04000 	mov	r4, r0
         71f84:	e5900004 	ldr	r0, [r0, #4]	; TConnectionEnd
         71f88:	e2805024 	add	r5, r0, #36	; 0x24
         71f8c:	e1a00004 	mov	r0, r4
         71f90:	eb66ccc2 	bl	1a252a0 <TConnectionEnd::$ConnectCheck(void)>
         71f94:	e3300000 	teq	r0, #0	; 0x0
         71f98:	1a000010 	bne	71fe0 <TConnectionEnd::Listen(void)+0x6c>
         71f9c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         71fa0:	e3800040 	orr	r0, r0, #64	; 0x40
         71fa4:	e1a01005 	mov	r1, r5
         71fa8:	e5840020 	str	r0, [r4, #32]	; fField32
         71fac:	e1a00004 	mov	r0, r4
         71fb0:	eb66d501 	bl	1a273bc <TConnectionEnd::$ImportConnectPB(TCommToolConnectRequest *)>
         71fb4:	e3300000 	teq	r0, #0	; 0x0
         71fb8:	11a01000 	movne	r1, r0
         71fbc:	11a00004 	movne	r0, r4
         71fc0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         71fc4:	1a66d90e 	bne	1a28404 <TConnectionEnd::$ListenComplete(long)>
         71fc8:	e2853014 	add	r3, r5, #20	; 0x14
         71fcc:	e893000c 	ldmia	r3, {r2, r3}
         71fd0:	e5d51024 	ldrb	r1, [r5, #36]	; fField36
         71fd4:	e1a00004 	mov	r0, r4
         71fd8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         71fdc:	ea66dd3b 	b	1a294d0 <TConnectionEnd::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
         71fe0:	e1a02000 	mov	r2, r0
         71fe4:	e1a00004 	mov	r0, r4
         71fe8:	e3a01002 	mov	r1, #2	; 0x2
         71fec:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         71ff0:	ea66cca6 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::ListenOptionsComplete(long)
 * Address: 00071ff4
 */
TConnectionEnd::ListenOptionsComplete(long) {
    /*
         71ff4:	e3310000 	teq	r1, #0	; 0x0
         71ff8:	05900000 	ldreq	r0, [r0]
         71ffc:	0a0c4608 	beq	383824 <PConnectionEnd::ListenStart(void)>
         72000:	1a66d8ff 	bne	1a28404 <TConnectionEnd::$ListenComplete(long)>
    */
}

/**
 * Symbol: TConnectionEnd::ListenComplete(long)
 * Address: 00072004
 */
void					TConnectionEnd::ListenComplete(NewtonErr result) {
    /*
         72004:	e1a0c00d 	mov	ip, sp
         72008:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7200c:	e24cb004 	sub	fp, ip, #4	; 0x4
         72010:	e1a04000 	mov	r4, r0
         72014:	e1a05001 	mov	r5, r1
         72018:	e24dd014 	sub	sp, sp, #20	; 0x14
         7201c:	e1a0000d 	mov	r0, sp
         72020:	eb6df5e6 	bl	1bef7c0 <TCommToolConnectReply::$__ct(void)>
         72024:	e3350000 	teq	r5, #0	; 0x0
         72028:	15940020 	ldrne	r0, [r4, #32]	; fField32
         7202c:	13c00040 	bicne	r0, r0, #64	; 0x40
         72030:	15840020 	strne	r0, [r4, #32]	; fField32
         72034:	e59400f0 	ldr	r0, [r4, #240]	; fField240
         72038:	e1a01005 	mov	r1, r5
         7203c:	e58d0010 	str	r0, [sp, #16]
         72040:	e1a00004 	mov	r0, r4
         72044:	eb66cc9e 	bl	1a252c4 <TConnectionEnd::$CopyBackConnectPB(long)>
         72048:	e1a05000 	mov	r5, r0
         7204c:	e1a0300d 	mov	r3, sp
         72050:	e1a02000 	mov	r2, r0
         72054:	e1a00004 	mov	r0, r4
         72058:	e3a01002 	mov	r1, #2	; 0x2
         7205c:	eb66cc8c 	bl	1a25294 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)>
         72060:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::OpenOptionsComplete(long)
 * Address: 00072064
 */
TConnectionEnd::OpenOptionsComplete(long) {
    /*
         72064:	e3310000 	teq	r1, #0	; 0x0
         72068:	1a66d8ec 	bne	1a28420 <TConnectionEnd::$OpenComplete(long)>
         7206c:	05900000 	ldreq	r0, [r0]
         72070:	0a0c45dc 	beq	3837e8 <PConnectionEnd::OpenStart(void)>
    */
}

/**
 * Symbol: TConnectionEnd::Accept(void)
 * Address: 00072074
 */
TConnectionEnd::Accept(void) {
    /*
         72074:	e1a0c00d 	mov	ip, sp
         72078:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7207c:	e24cb004 	sub	fp, ip, #4	; 0x4
         72080:	e1a04000 	mov	r4, r0
         72084:	e5900004 	ldr	r0, [r0, #4]	; TConnectionEnd
         72088:	e2805024 	add	r5, r0, #36	; 0x24
         7208c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         72090:	e3100040 	tst	r0, #64	; 0x40
         72094:	0a00000d 	beq	720d0 <TConnectionEnd::Accept(void)+0x5c>
         72098:	e1a01005 	mov	r1, r5
         7209c:	e1a00004 	mov	r0, r4
         720a0:	eb66d4c5 	bl	1a273bc <TConnectionEnd::$ImportConnectPB(TCommToolConnectRequest *)>
         720a4:	e3300000 	teq	r0, #0	; 0x0
         720a8:	11a01000 	movne	r1, r0
         720ac:	11a00004 	movne	r0, r4
         720b0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         720b4:	1a66c439 	bne	1a231a0 <TConnectionEnd::$AcceptComplete(long)>
         720b8:	e2853014 	add	r3, r5, #20	; 0x14
         720bc:	e893000c 	ldmia	r3, {r2, r3}
         720c0:	e5d51024 	ldrb	r1, [r5, #36]	; fField36
         720c4:	e1a00004 	mov	r0, r4
         720c8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         720cc:	ea66dcff 	b	1a294d0 <TConnectionEnd::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
         720d0:	e1a00004 	mov	r0, r4
         720d4:	e59f2008 	ldr	r2, [pc, #8]	; 720e4 <TConnectionEnd::Accept(void)+0x70>	; fField8
         720d8:	e3a01002 	mov	r1, #2	; 0x2
         720dc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         720e0:	ea66cc6a 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         720e4:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TConnectionEnd::AcceptOptionsComplete(long)
 * Address: 000720e8
 */
TConnectionEnd::AcceptOptionsComplete(long) {
    /*
         720e8:	e3310000 	teq	r1, #0	; 0x0
         720ec:	05900000 	ldreq	r0, [r0]
         720f0:	0a66c42f 	beq	1a231b4 <PConnectionEnd::$AcceptStart(void)>
         720f4:	1a66c429 	bne	1a231a0 <TConnectionEnd::$AcceptComplete(long)>
    */
}

/**
 * Symbol: TConnectionEnd::AcceptComplete(long)
 * Address: 000720f8
 */
void					TConnectionEnd::AcceptComplete(NewtonErr result) {
    /*
         720f8:	e5902020 	ldr	r2, [r0, #32]	; fField32
         720fc:	e3c22040 	bic	r2, r2, #64	; 0x40
         72100:	e5802020 	str	r2, [r0, #32]	; fField32
         72104:	ea66cc67 	b	1a252a8 <TConnectionEnd::$ConnectComplete(long)>
    */
}

/**
 * Symbol: TConnectionEnd::Disconnect(void)
 * Address: 00072108
 */
TConnectionEnd::Disconnect(void) {
    /*
         72108:	e59f202c 	ldr	r2, [pc, #2c]	; 7213c <TConnectionEnd::Disconnect(void)+0x34>
         7210c:	e5901020 	ldr	r1, [r0, #32]	; fField32
         72110:	e3110003 	tst	r1, #3	; 0x3
         72114:	01a01002 	moveq	r1, r2
         72118:	0a66cc6e 	beq	1a252d8 <TConnectionEnd::$DisconnectComplete(long)>
         7211c:	e3811020 	orr	r1, r1, #32	; 0x20
         72120:	e5801020 	str	r1, [r0, #32]	; fField32
         72124:	e5901028 	ldr	r1, [r0, #40]	; fField40
         72128:	e3310000 	teq	r1, #0	; 0x0
         7212c:	03a01002 	moveq	r1, #2	; 0x2
         72130:	05801028 	streq	r1, [r0, #40]	; fField40
         72134:	e59f1004 	ldr	r1, [pc, #4]	; 72140 <TConnectionEnd::Disconnect(void)+0x38>	; TConnectionEnd
         72138:	ea66e932 	b	1a2c608 <TConnectionEnd::$StartAbort(long)>
         7213c:	ffffc177 	swinv	0x00ffc177
         72140:	ffffc173 	swinv	0x00ffc173
    */
}

/**
 * Symbol: TConnectionEnd::DisconnectComplete(long)
 * Address: 00072144
 */
TConnectionEnd::DisconnectComplete(long) {
    /*
         72144:	e5902020 	ldr	r2, [r0, #32]	; fField32
         72148:	e3c22020 	bic	r2, r2, #32	; 0x20
         7214c:	e5802020 	str	r2, [r0, #32]	; fField32
         72150:	e1a02001 	mov	r2, r1
         72154:	e3a01002 	mov	r1, #2	; 0x2
         72158:	ea66cc4c 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::Release(void)
 * Address: 0007215c
 */
TConnectionEnd::Release(void) {
    /*
         7215c:	e59f2034 	ldr	r2, [pc, #34]	; 72198 <TConnectionEnd::Release(void)+0x3c>
         72160:	e5901020 	ldr	r1, [r0, #32]	; fField32
         72164:	e3110003 	tst	r1, #3	; 0x3
         72168:	03a01002 	moveq	r1, #2	; 0x2
         7216c:	0a66cc47 	beq	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         72170:	e3110080 	tst	r1, #128	; 0x80
         72174:	11a0f00e 	movne	pc, lr
         72178:	e3811008 	orr	r1, r1, #8	; 0x8
         7217c:	e5801020 	str	r1, [r0, #32]	; fField32
         72180:	e5901028 	ldr	r1, [r0, #40]	; fField40
         72184:	e3310000 	teq	r1, #0	; 0x0
         72188:	03a01003 	moveq	r1, #3	; 0x3
         7218c:	05801028 	streq	r1, [r0, #40]	; fField40
         72190:	e5900000 	ldr	r0, [r0]
         72194:	ea66e501 	b	1a2b5a0 <PConnectionEnd::$ReleaseStart(void)>
         72198:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TConnectionEnd::ReleaseComplete(long)
 * Address: 0007219c
 */
TConnectionEnd::ReleaseComplete(long) {
    /*
         7219c:	e5902020 	ldr	r2, [r0, #32]	; fField32
         721a0:	e3c22008 	bic	r2, r2, #8	; 0x8
         721a4:	e5802020 	str	r2, [r0, #32]	; fField32
         721a8:	e1a02001 	mov	r2, r1
         721ac:	e3a01002 	mov	r1, #2	; 0x2
         721b0:	ea66cc36 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::Bind(void)
 * Address: 000721b4
 */
TConnectionEnd::Bind(void) {
    /*
         721b4:	e92d4000 	stmdb	sp!, {lr}
         721b8:	e3a01f5e 	mov	r1, #376	; 0x178
         721bc:	e2411901 	sub	r1, r1, #16384	; 0x4000
         721c0:	e3a02000 	mov	r2, #0	; 0x0
         721c4:	e3a03000 	mov	r3, #0	; 0x0
         721c8:	e590c020 	ldr	ip, [r0, #32]	; fField32
         721cc:	e31c0003 	tst	ip, #3	; 0x3
         721d0:	1a00000e 	bne	72210 <TConnectionEnd::Bind(void)+0x5c>
         721d4:	e31c0c01 	tst	ip, #256	; 0x100
         721d8:	1a00000a 	bne	72208 <TConnectionEnd::Bind(void)+0x54>
         721dc:	e5901078 	ldr	r1, [r0, #120]	; fField120
         721e0:	e3310020 	teq	r1, #32	; 0x20
         721e4:	1a000003 	bne	721f8 <TConnectionEnd::Bind(void)+0x44>
         721e8:	e5901004 	ldr	r1, [r0, #4]	; TConnectionEnd
         721ec:	e2811024 	add	r1, r1, #36	; 0x24
         721f0:	e2811014 	add	r1, r1, #20	; 0x14
         721f4:	e9b1000c 	ldmib	r1!, {r2, r3}
         721f8:	e5901004 	ldr	r1, [r0, #4]	; TConnectionEnd
         721fc:	e5d11038 	ldrb	r1, [r1, #56]
         72200:	e8bd4000 	ldmia	sp!, {lr}
         72204:	ea66dcb1 	b	1a294d0 <TConnectionEnd::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
         72208:	e3a0106e 	mov	r1, #110	; 0x6e
         7220c:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
         72210:	e1a02001 	mov	r2, r1
         72214:	e3a01002 	mov	r1, #2	; 0x2
         72218:	e8bd4000 	ldmia	sp!, {lr}
         7221c:	ea66cc1b 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::BindOptionsComplete(long)
 * Address: 00072220
 */
TConnectionEnd::BindOptionsComplete(long) {
    /*
         72220:	e3310000 	teq	r1, #0	; 0x0
         72224:	05900000 	ldreq	r0, [r0]
         72228:	0a66c3f3 	beq	1a231fc <PConnectionEnd::$BindStart(void)>
         7222c:	1a66c3ea 	bne	1a231dc <TConnectionEnd::$BindComplete(long)>
    */
}

/**
 * Symbol: TConnectionEnd::BindComplete(long)
 * Address: 00072230
 */
void					TConnectionEnd::BindComplete(NewtonErr result) {
    /*
         72230:	e1a0c00d 	mov	ip, sp
         72234:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         72238:	e24cb004 	sub	fp, ip, #4	; 0x4
         7223c:	e1a04000 	mov	r4, r0
         72240:	e2802f4a 	add	r2, r0, #296	; 0x128
         72244:	eb66e0b4 	bl	1a2a51c <TConnectionEnd::$ProcessOptionsCleanUp(long, TCommToolOptionInfo *)>
         72248:	e1b01000 	movs	r1, r0
         7224c:	05940020 	ldreq	r0, [r4, #32]	; fField32
         72250:	03800c01 	orreq	r0, r0, #256	; 0x100
         72254:	05840020 	streq	r0, [r4, #32]	; fField32
         72258:	e1a02001 	mov	r2, r1
         7225c:	e1a00004 	mov	r0, r4
         72260:	e3a01002 	mov	r1, #2	; 0x2
         72264:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         72268:	ea66cc08 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::OpenComplete(long)
 * Address: 0007226c
 */
void					TConnectionEnd::OpenComplete(NewtonErr result) {
    /*
         7226c:	e5903008 	ldr	r3, [r0, #8]	; fField8
         72270:	e590c004 	ldr	ip, [r0, #4]	; TConnectionEnd
         72274:	e1a02000 	mov	r2, r0
         72278:	e1a0000c 	mov	r0, ip
         7227c:	ea66d868 	b	1a28424 <TMuxTool::$OpenConnectionEndComplete(long, TConnectionEnd *, unsigned long)>
    */
}

/**
 * Symbol: TConnectionEnd::Unbind(void)
 * Address: 00072280
 */
TConnectionEnd::Unbind(void) {
    /*
         72280:	e5901020 	ldr	r1, [r0, #32]	; fField32
         72284:	e3110003 	tst	r1, #3	; 0x3
         72288:	13a01f5e 	movne	r1, #376	; 0x178
         7228c:	12411901 	subne	r1, r1, #16384	; 0x4000
         72290:	1a000003 	bne	722a4 <TConnectionEnd::Unbind(void)+0x24>
         72294:	e3110c01 	tst	r1, #256	; 0x100
         72298:	15900000 	ldrne	r0, [r0]
         7229c:	1a0c455a 	bne	38380c <PConnectionEnd::UnbindStart(void)>
         722a0:	e3a01000 	mov	r1, #0	; 0x0
         722a4:	ea66e8e5 	b	1a2c640 <TConnectionEnd::$UnbindComplete(long)>
    */
}

/**
 * Symbol: TConnectionEnd::UnbindComplete(long)
 * Address: 000722a8
 */
void					TConnectionEnd::UnbindComplete(NewtonErr result) {
    /*
         722a8:	e3310000 	teq	r1, #0	; 0x0
         722ac:	05902020 	ldreq	r2, [r0, #32]	; fField32
         722b0:	03c22c01 	biceq	r2, r2, #256	; 0x100
         722b4:	05802020 	streq	r2, [r0, #32]	; fField32
         722b8:	e1a02001 	mov	r2, r1
         722bc:	e3a01002 	mov	r1, #2	; 0x2
         722c0:	ea66cbf2 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::ResArbRelease(unsigned char *, unsigned char *)
 * Address: 000722c4
 */
TConnectionEnd::ResArbRelease(unsigned char *, unsigned char *) {
    /*
         722c4:	e5d03180 	ldrb	r3, [r0, #384]	; fField384
         722c8:	e3330000 	teq	r3, #0	; 0x0
         722cc:	15d03181 	ldrneb	r3, [r0, #385]	; fField385
         722d0:	13330000 	teqne	r3, #0	; 0x0
         722d4:	03a010a2 	moveq	r1, #162	; 0xa2
         722d8:	02411b0a 	subeq	r1, r1, #10240	; 0x2800
         722dc:	0a66e4b8 	beq	1a2b5c4 <TConnectionEnd::$ResArbReleaseComplete(long)>
         722e0:	15900000 	ldrne	r0, [r0]
         722e4:	1a0c458a 	bne	383914 <PConnectionEnd::ResArbReleaseStart(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TConnectionEnd::ResArbReleaseComplete(long)
 * Address: 000722e8
 */
void					TConnectionEnd::ResArbReleaseComplete(NewtonErr result) {
    /*
         722e8:	e1a02001 	mov	r2, r1
         722ec:	e3a01006 	mov	r1, #6	; 0x6
         722f0:	ea66cbe6 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::OptionMgmt(TCommToolOptionMgmtRequest *)
 * Address: 000722f4
 */
TConnectionEnd::OptionMgmt(TCommToolOptionMgmtRequest *) {
    /*
         722f4:	e5912014 	ldr	r2, [r1, #20]
         722f8:	e3320c05 	teq	r2, #1280	; 0x500
         722fc:	13a0207e 	movne	r2, #126	; 0x7e
         72300:	12422c3f 	subne	r2, r2, #16128	; 0x3f00
         72304:	13a01002 	movne	r1, #2	; 0x2
         72308:	1a66cbe0 	bne	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         7230c:	e281300c 	add	r3, r1, #12	; 0xc
         72310:	e893000c 	ldmia	r3, {r2, r3}
         72314:	e5d11018 	ldrb	r1, [r1, #24]
         72318:	ea66dc6c 	b	1a294d0 <TConnectionEnd::$ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)>
    */
}

/**
 * Symbol: TConnectionEnd::OptionMgmtComplete(long)
 * Address: 0007231c
 */
TConnectionEnd::OptionMgmtComplete(long) {
    /*
         7231c:	e1a0c00d 	mov	ip, sp
         72320:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         72324:	e24cb004 	sub	fp, ip, #4	; 0x4
         72328:	e1a04000 	mov	r4, r0
         7232c:	e2802f4a 	add	r2, r0, #296	; 0x128
         72330:	eb66e079 	bl	1a2a51c <TConnectionEnd::$ProcessOptionsCleanUp(long, TCommToolOptionInfo *)>
         72334:	e1a02000 	mov	r2, r0
         72338:	e1a00004 	mov	r0, r4
         7233c:	e3a01002 	mov	r1, #2	; 0x2
         72340:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         72344:	ea66cbd1 	b	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
    */
}

/**
 * Symbol: TConnectionEnd::ProcessControlOptions(unsigned char, TOptionArray *, unsigned long)
 * Address: 00072348
 */
TConnectionEnd::ProcessControlOptions(unsigned char, TOptionArray *, unsigned long) {
    /*
         72348:	e31100ff 	tst	r1, #255	; 0xff
         7234c:	e3a0c000 	mov	ip, #0	; 0x0
         72350:	e580c128 	str	ip, [r0, #296]	; fField296
         72354:	13a01020 	movne	r1, #32	; 0x20
         72358:	15801128 	strne	r1, [r0, #296]	; fField296
         7235c:	15803130 	strne	r3, [r0, #304]	; fField304
         72360:	e3a01002 	mov	r1, #2	; 0x2
         72364:	e580112c 	str	r1, [r0, #300]	; fField300
         72368:	e5802134 	str	r2, [r0, #308]	; fField308
         7236c:	e2801f4a 	add	r1, r0, #296	; 0x128
         72370:	ea66e06f 	b	1a2a534 <TConnectionEnd::$ProcessOptions(TCommToolOptionInfo *)>
    */
}

/**
 * Symbol: TConnectionEnd::ProcessOptions(TCommToolOptionInfo *)
 * Address: 00072374
 */
TConnectionEnd::ProcessOptions(TCommToolOptionInfo *) {
    /*
         72374:	e1a0c00d 	mov	ip, sp
         72378:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         7237c:	e24cb004 	sub	fp, ip, #4	; 0x4
         72380:	e1a05000 	mov	r5, r0
         72384:	e1a04001 	mov	r4, r1
         72388:	e3a070e9 	mov	r7, #233	; 0xe9
         7238c:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         72390:	e1a06007 	mov	r6, r7
         72394:	e591800c 	ldr	r8, [r1, #12]
         72398:	e3380000 	teq	r8, #0	; 0x0
         7239c:	01a02004 	moveq	r2, r4
         723a0:	01a00005 	moveq	r0, r5
         723a4:	03a01000 	moveq	r1, #0	; 0x0
         723a8:	0a000019 	beq	72414 <TConnectionEnd::ProcessOptions(TCommToolOptionInfo *)+0xa0>
         723ac:	e5940000 	ldr	r0, [r4]
         723b0:	e3100020 	tst	r0, #32	; 0x20
         723b4:	0a00000c 	beq	723ec <TConnectionEnd::ProcessOptions(TCommToolOptionInfo *)+0x78>
         723b8:	e3a00000 	mov	r0, #0	; 0x0
         723bc:	eb6d0dc8 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         723c0:	e584000c 	str	r0, [r4, #12]
         723c4:	e3300000 	teq	r0, #0	; 0x0
         723c8:	0a00000e 	beq	72408 <TConnectionEnd::ProcessOptions(TCommToolOptionInfo *)+0x94>
         723cc:	e5941000 	ldr	r1, [r4]
         723d0:	e3811004 	orr	r1, r1, #4	; 0x4
         723d4:	e5841000 	str	r1, [r4]
         723d8:	e1a01008 	mov	r1, r8
         723dc:	e5942008 	ldr	r2, [r4, #8]	; fField8
         723e0:	eb6d1a24 	bl	1bb8c78 <TOptionArray::$Init(unsigned long, unsigned long)>
         723e4:	e1b06000 	movs	r6, r0
         723e8:	1a000006 	bne	72408 <TConnectionEnd::ProcessOptions(TCommToolOptionInfo *)+0x94>
         723ec:	e3a00000 	mov	r0, #0	; 0x0
         723f0:	e594100c 	ldr	r1, [r4, #12]
         723f4:	eb6d0dbf 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         723f8:	e5840014 	str	r0, [r4, #20]
         723fc:	e3300000 	teq	r0, #0	; 0x0
         72400:	1a000005 	bne	7241c <TConnectionEnd::ProcessOptions(TCommToolOptionInfo *)+0xa8>
         72404:	e1a06007 	mov	r6, r7
         72408:	e1a02004 	mov	r2, r4
         7240c:	e1a01006 	mov	r1, r6
         72410:	e1a00005 	mov	r0, r5
         72414:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         72418:	ea66e041 	b	1a2a524 <TConnectionEnd::$ProcessOptionsComplete(long, TCommToolOptionInfo *)>
         7241c:	e5940000 	ldr	r0, [r4]
         72420:	e3800001 	orr	r0, r0, #1	; 0x1
         72424:	e5840000 	str	r0, [r4]
         72428:	e1a01004 	mov	r1, r4
         7242c:	e1a00005 	mov	r0, r5
         72430:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         72434:	ea66e03c 	b	1a2a52c <TConnectionEnd::$ProcessOptionsContinue(TCommToolOptionInfo *)>
    */
}

/**
 * Symbol: TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)
 * Address: 00072438
 */
TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *) {
    /*
         72438:	e1a0c00d 	mov	ip, sp
         7243c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         72440:	e24cb004 	sub	fp, ip, #4	; 0x4
         72444:	e1a05000 	mov	r5, r0
         72448:	e1a04001 	mov	r4, r1
         7244c:	e3a06000 	mov	r6, #0	; 0x0
         72450:	e3a09000 	mov	r9, #0	; 0x0
         72454:	e59fa114 	ldr	sl, [pc, #114]	; 72570 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x138>
         72458:	e5940014 	ldr	r0, [r4, #20]
         7245c:	eb6d15e0 	bl	1bb7be4 <TOptionIterator::$CurrentOption(void)>
         72460:	e5840010 	str	r0, [r4, #16]
         72464:	e3300000 	teq	r0, #0	; 0x0
         72468:	0a00001a 	beq	724d8 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0xa0>
         7246c:	e5940014 	ldr	r0, [r4, #20]
         72470:	eb6d1e15 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
         72474:	e5940010 	ldr	r0, [r4, #16]
         72478:	e1a01000 	mov	r1, r0
         7247c:	e5908000 	ldr	r8, [r0]
         72480:	e5900008 	ldr	r0, [r0, #8]	; fField8
         72484:	e2007cff 	and	r7, r0, #65280	; 0xff00
         72488:	e2002102 	and	r2, r0, #-2147483648	; 0x80000000
         7248c:	e3320102 	teq	r2, #-2147483648	; 0x80000000
         72490:	1200243f 	andne	r2, r0, #1056964608	; 0x3f000000
         72494:	13320301 	teqne	r2, #67108864	; 0x4000000
         72498:	0a000064 	beq	72630 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1f8>
         7249c:	e138000a 	teq	r8, sl
         724a0:	1a000011 	bne	724ec <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0xb4>
         724a4:	e591300c 	ldr	r3, [r1, #12]
         724a8:	e59521b4 	ldr	r2, [r5, #436]	; fField436
         724ac:	e1330002 	teq	r3, r2
         724b0:	03800102 	orreq	r0, r0, #-2147483648	; 0x80000000
         724b4:	05a10008 	streq	r0, [r1, #8]!	; fField8
         724b8:	0a00005c 	beq	72630 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1f8>
         724bc:	e5940014 	ldr	r0, [r4, #20]
         724c0:	eb6d1dfe 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         724c4:	e3300000 	teq	r0, #0	; 0x0
         724c8:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         724cc:	e5940000 	ldr	r0, [r4]
         724d0:	e3800002 	orr	r0, r0, #2	; 0x2
         724d4:	e5840000 	str	r0, [r4]
         724d8:	e1a02004 	mov	r2, r4
         724dc:	e1a00005 	mov	r0, r5
         724e0:	e3a01000 	mov	r1, #0	; 0x0
         724e4:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         724e8:	ea66e00d 	b	1a2a524 <TConnectionEnd::$ProcessOptionsComplete(long, TCommToolOptionInfo *)>
         724ec:	e3320402 	teq	r2, #33554432	; 0x2000000
         724f0:	1a000004 	bne	72508 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0xd0>
         724f4:	e591000c 	ldr	r0, [r1, #12]
         724f8:	e59521b4 	ldr	r2, [r5, #436]	; fField436
         724fc:	e1300002 	teq	r0, r2
         72500:	13e06005 	mvnne	r6, #5	; 0x5
         72504:	1a000041 	bne	72610 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1d8>
         72508:	e3370c01 	teq	r7, #256	; 0x100
         7250c:	13370c02 	teqne	r7, #512	; 0x200
         72510:	13370c03 	teqne	r7, #768	; 0x300
         72514:	13370b01 	teqne	r7, #1024	; 0x400
         72518:	13e06004 	mvnne	r6, #4	; 0x4
         7251c:	1a000032 	bne	725ec <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1b4>
         72520:	e5940004 	ldr	r0, [r4, #4]	; TConnectionEnd
         72524:	e3300000 	teq	r0, #0	; 0x0
         72528:	0a000011 	beq	72574 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x13c>
         7252c:	e3300001 	teq	r0, #1	; 0x1
         72530:	0a00001c 	beq	725a8 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x170>
         72534:	e3300002 	teq	r0, #2	; 0x2
         72538:	1a000027 	bne	725dc <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1a4>
         7253c:	e1a03007 	mov	r3, r7
         72540:	e1a02008 	mov	r2, r8
         72544:	e5950000 	ldr	r0, [r5]
         72548:	eb0c44e8 	bl	3838f0 <PConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         7254c:	e1a06000 	mov	r6, r0
         72550:	e3700006 	cmn	r0, #6	; 0x6
         72554:	1a000020 	bne	725dc <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1a4>
         72558:	e1a03007 	mov	r3, r7
         7255c:	e1a02008 	mov	r2, r8
         72560:	e1a00005 	mov	r0, r5
         72564:	e5941010 	ldr	r1, [r4, #16]
         72568:	eb66dfe6 	bl	1a2a508 <TConnectionEnd::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         7256c:	ea000019 	b	725d8 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1a0>
         72570:	6374736f 	cmnvs	r4, #-1140850687	; 0xbc000001
         72574:	e1a03007 	mov	r3, r7
         72578:	e1a02008 	mov	r2, r8
         7257c:	e5950000 	ldr	r0, [r5]
         72580:	eb0c44e0 	bl	383908 <PConnectionEnd::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)>
         72584:	e1a06000 	mov	r6, r0
         72588:	e3700006 	cmn	r0, #6	; 0x6
         7258c:	1a000012 	bne	725dc <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1a4>
         72590:	e1a03007 	mov	r3, r7
         72594:	e1a02008 	mov	r2, r8
         72598:	e1a00005 	mov	r0, r5
         7259c:	e5941010 	ldr	r1, [r4, #16]
         725a0:	eb66dbd0 	bl	1a294e8 <TConnectionEnd::$ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)>
         725a4:	ea00000b 	b	725d8 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1a0>
         725a8:	e1a03007 	mov	r3, r7
         725ac:	e1a02008 	mov	r2, r8
         725b0:	e5950000 	ldr	r0, [r5]
         725b4:	eb0c44d0 	bl	3838fc <PConnectionEnd::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)>
         725b8:	e1a06000 	mov	r6, r0
         725bc:	e3700006 	cmn	r0, #6	; 0x6
         725c0:	1a000005 	bne	725dc <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1a4>
         725c4:	e1a03007 	mov	r3, r7
         725c8:	e1a02008 	mov	r2, r8
         725cc:	e1a00005 	mov	r0, r5
         725d0:	e5941010 	ldr	r1, [r4, #16]
         725d4:	eb66dfdc 	bl	1a2a54c <TConnectionEnd::$ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)>
         725d8:	e1a06000 	mov	r6, r0
         725dc:	e3360001 	teq	r6, #1	; 0x1
         725e0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         725e4:	e3760006 	cmn	r6, #6	; 0x6
         725e8:	0a000008 	beq	72610 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1d8>
         725ec:	e5940010 	ldr	r0, [r4, #16]
         725f0:	e5901008 	ldr	r1, [r0, #8]	; fField8
         725f4:	e3c110ff 	bic	r1, r1, #255	; 0xff
         725f8:	e20620ff 	and	r2, r6, #255	; 0xff
         725fc:	e1811002 	orr	r1, r1, r2
         72600:	e5a01008 	str	r1, [r0, #8]!	; fField8
         72604:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
         72608:	e5940010 	ldr	r0, [r4, #16]
         7260c:	ea000006 	b	7262c <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x1f4>
         72610:	e5940000 	ldr	r0, [r4]
         72614:	e3800002 	orr	r0, r0, #2	; 0x2
         72618:	e5840000 	str	r0, [r4]
         7261c:	e5940010 	ldr	r0, [r4, #16]
         72620:	e5901008 	ldr	r1, [r0, #8]	; fField8
         72624:	e3c110ff 	bic	r1, r1, #255	; 0xff
         72628:	e38110fc 	orr	r1, r1, #252	; 0xfc
         7262c:	e5a01008 	str	r1, [r0, #8]!	; fField8
         72630:	e3390000 	teq	r9, #0	; 0x0
         72634:	0affff87 	beq	72458 <TConnectionEnd::ProcessOptionsContinue(TCommToolOptionInfo *)+0x20>
         72638:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)
 * Address: 0007263c
 */
TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *) {
    /*
         7263c:	e1a0c00d 	mov	ip, sp
         72640:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         72644:	e24cb004 	sub	fp, ip, #4	; 0x4
         72648:	e1a04000 	mov	r4, r0
         7264c:	e1a08001 	mov	r8, r1
         72650:	e1a05002 	mov	r5, r2
         72654:	e3a06000 	mov	r6, #0	; 0x0
         72658:	e3380000 	teq	r8, #0	; 0x0
         7265c:	0a000004 	beq	72674 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x38>
         72660:	e1a02005 	mov	r2, r5
         72664:	e1a01008 	mov	r1, r8
         72668:	e1a00004 	mov	r0, r4
         7266c:	eb66dfaa 	bl	1a2a51c <TConnectionEnd::$ProcessOptionsCleanUp(long, TCommToolOptionInfo *)>
         72670:	ea000050 	b	727b8 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x17c>
         72674:	e5950000 	ldr	r0, [r5]
         72678:	e3100002 	tst	r0, #2	; 0x2
         7267c:	0a00004d 	beq	727b8 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x17c>
         72680:	e5950004 	ldr	r0, [r5, #4]	; TConnectionEnd
         72684:	e3300002 	teq	r0, #2	; 0x2
         72688:	1a00004a 	bne	727b8 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x17c>
         7268c:	e5940184 	ldr	r0, [r4, #388]	; fField388
         72690:	e3300001 	teq	r0, #1	; 0x1
         72694:	0a000047 	beq	727b8 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x17c>
         72698:	e5940000 	ldr	r0, [r4]
         7269c:	eb66cf1d 	bl	1a26318 <PConnectionEnd::$ForwardOptions(void)>
         726a0:	e1b07000 	movs	r7, r0
         726a4:	0a000041 	beq	727b0 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x174>
         726a8:	e5950000 	ldr	r0, [r5]
         726ac:	e3100010 	tst	r0, #16	; 0x10
         726b0:	e3a06000 	mov	r6, #0	; 0x0
         726b4:	1a000022 	bne	72744 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x108>
         726b8:	e3a080e9 	mov	r8, #233	; 0xe9
         726bc:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
         726c0:	e3a00000 	mov	r0, #0	; 0x0
         726c4:	eb6df448 	bl	1bef7ec <TCommToolOptionMgmtRequest::$__ct(void)>
         726c8:	e58401bc 	str	r0, [r4, #444]	; fField444
         726cc:	e3300000 	teq	r0, #0	; 0x0
         726d0:	0a00006b 	beq	72884 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x248>
         726d4:	e3a00000 	mov	r0, #0	; 0x0
         726d8:	eb6df435 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         726dc:	e58401c4 	str	r0, [r4, #452]	; fField452
         726e0:	e3300000 	teq	r0, #0	; 0x0
         726e4:	0a000066 	beq	72884 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x248>
         726e8:	e3a00000 	mov	r0, #0	; 0x0
         726ec:	eb6d6bee 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         726f0:	e58401c0 	str	r0, [r4, #448]	; fField448
         726f4:	e3300000 	teq	r0, #0	; 0x0
         726f8:	0a000061 	beq	72884 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x248>
         726fc:	e1a01000 	mov	r1, r0
         72700:	e1a00004 	mov	r0, r4
         72704:	e3a02ee2 	mov	r2, #3616	; 0xe20
         72708:	e2822901 	add	r2, r2, #16384	; 0x4000
         7270c:	eb66d32c 	bl	1a273c4 <TConnectionEnd::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
         72710:	e1b08000 	movs	r8, r0
         72714:	1a00005a 	bne	72884 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x248>
         72718:	e595000c 	ldr	r0, [r5, #12]
         7271c:	e59411bc 	ldr	r1, [r4, #444]	; fField444
         72720:	e5a1000c 	str	r0, [r1, #12]!
         72724:	e59401bc 	ldr	r0, [r4, #444]	; fField444
         72728:	e5c06018 	strb	r6, [r0, #24]
         7272c:	e3a01c05 	mov	r1, #1280	; 0x500
         72730:	e59401bc 	ldr	r0, [r4, #444]	; fField444
         72734:	e5a01014 	str	r1, [r0, #20]!
         72738:	e5950000 	ldr	r0, [r5]
         7273c:	e3800010 	orr	r0, r0, #16	; 0x10
         72740:	e5850000 	str	r0, [r5]
         72744:	e3a01010 	mov	r1, #16	; 0x10
         72748:	e3a02000 	mov	r2, #0	; 0x0
         7274c:	e3a03000 	mov	r3, #0	; 0x0
         72750:	e3a08004 	mov	r8, #4	; 0x4
         72754:	e59401c4 	ldr	r0, [r4, #452]	; fField452
         72758:	e594c1c0 	ldr	ip, [r4, #448]	; fField448
         7275c:	e594e1bc 	ldr	lr, [r4, #444]	; fField444
         72760:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         72764:	e1a03006 	mov	r3, r6
         72768:	e3a02001 	mov	r2, #1	; 0x1
         7276c:	e1a01008 	mov	r1, r8
         72770:	e3a0001c 	mov	r0, #28	; 0x1c
         72774:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         72778:	e1a0300e 	mov	r3, lr
         7277c:	e92d0008 	stmdb	sp!, {r3}
         72780:	e1a00007 	mov	r0, r7
         72784:	e3a03000 	mov	r3, #0	; 0x0
         72788:	e49c1008 	ldr	r1, [ip], #8	; fField8
         7278c:	e59c2000 	ldr	r2, [ip]
         72790:	eb6da16d 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         72794:	e28dd024 	add	sp, sp, #36	; 0x24
         72798:	e1b08000 	movs	r8, r0
         7279c:	1a000038 	bne	72884 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x248>
         727a0:	e5950000 	ldr	r0, [r5]
         727a4:	e3800008 	orr	r0, r0, #8	; 0x8
         727a8:	e3a06001 	mov	r6, #1	; 0x1
         727ac:	e5850000 	str	r0, [r5]
         727b0:	e3360000 	teq	r6, #0	; 0x0
         727b4:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         727b8:	e5b50004 	ldr	r0, [r5, #4]!	; TConnectionEnd
         727bc:	e3300000 	teq	r0, #0	; 0x0
         727c0:	01a01008 	moveq	r1, r8
         727c4:	01a00004 	moveq	r0, r4
         727c8:	091b69f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         727cc:	0a66cee7 	beq	1a26370 <TConnectionEnd::$GetOptionsComplete(long)>
         727d0:	e3300001 	teq	r0, #1	; 0x1
         727d4:	01a01008 	moveq	r1, r8
         727d8:	01a00004 	moveq	r0, r4
         727dc:	091b69f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         727e0:	0a66df65 	beq	1a2a57c <TConnectionEnd::$PutOptionsComplete(long)>
         727e4:	e3300002 	teq	r0, #2	; 0x2
         727e8:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         727ec:	e5940184 	ldr	r0, [r4, #388]	; fField388
         727f0:	e350000a 	cmp	r0, #10	; 0xa
         727f4:	908ff100 	addls	pc, pc, r0, lsl #2
         727f8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         727fc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         72800:	ea00000b 	b	72834 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x1f8>
         72804:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         72808:	ea00000d 	b	72844 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x208>
         7280c:	ea000010 	b	72854 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x218>
         72810:	ea000013 	b	72864 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x228>
         72814:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         72818:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         7281c:	ea000014 	b	72874 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x238>
         72820:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         72824:	e1a01008 	mov	r1, r8
         72828:	e1a00004 	mov	r0, r4
         7282c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         72830:	ea66d703 	b	1a28444 <TConnectionEnd::$OptionMgmtComplete(long)>
         72834:	e1a01008 	mov	r1, r8
         72838:	e1a00004 	mov	r0, r4
         7283c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         72840:	ea66d6fb 	b	1a28434 <TConnectionEnd::$OpenOptionsComplete(long)>
         72844:	e1a01008 	mov	r1, r8
         72848:	e1a00004 	mov	r0, r4
         7284c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         72850:	ea66ca95 	b	1a252ac <TConnectionEnd::$ConnectOptionsComplete(long)>
         72854:	e1a01008 	mov	r1, r8
         72858:	e1a00004 	mov	r0, r4
         7285c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         72860:	ea66d6e8 	b	1a28408 <TConnectionEnd::$ListenOptionsComplete(long)>
         72864:	e1a01008 	mov	r1, r8
         72868:	e1a00004 	mov	r0, r4
         7286c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         72870:	ea66c24c 	b	1a231a8 <TConnectionEnd::$AcceptOptionsComplete(long)>
         72874:	e1a01008 	mov	r1, r8
         72878:	e1a00004 	mov	r0, r4
         7287c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         72880:	ea66c25a 	b	1a231f0 <TConnectionEnd::$BindOptionsComplete(long)>
         72884:	eaffff72 	b	72654 <TConnectionEnd::ProcessOptionsComplete(long, TCommToolOptionInfo *)+0x18>
    */
}

/**
 * Symbol: TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)
 * Address: 00072888
 */
TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *) {
    /*
         72888:	e1a0c00d 	mov	ip, sp
         7288c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         72890:	e24cb004 	sub	fp, ip, #4	; 0x4
         72894:	e1a04000 	mov	r4, r0
         72898:	e1a06002 	mov	r6, r2
         7289c:	e1a05003 	mov	r5, r3
         728a0:	e3a00000 	mov	r0, #0	; 0x0
         728a4:	e59b8004 	ldr	r8, [fp, #4]	; TConnectionEnd
         728a8:	e5c401b2 	strb	r0, [r4, #434]	; fField434
         728ac:	e1a07483 	mov	r7, r3, lsl #9
         728b0:	e1a074a7 	mov	r7, r7, lsr #9
         728b4:	e3130402 	tst	r3, #33554432	; 0x2000000
         728b8:	e3a09001 	mov	r9, #1	; 0x1
         728bc:	0a00000b 	beq	728f0 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x68>
         728c0:	e24dd004 	sub	sp, sp, #4	; 0x4
         728c4:	e1a0100d 	mov	r1, sp
         728c8:	e1a00008 	mov	r0, r8
         728cc:	eb6d885f 	bl	1bd4a50 <TUMsgToken::$GetUserRefCon(unsigned long *)>
         728d0:	e3300000 	teq	r0, #0	; 0x0
         728d4:	1a000003 	bne	728e8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x60>
         728d8:	e1a02005 	mov	r2, r5
         728dc:	e59d1000 	ldr	r1, [sp]
         728e0:	e5940000 	ldr	r0, [r4]
         728e4:	eb0c43f5 	bl	3838c0 <PConnectionEnd::HandleReply(unsigned long, unsigned long)>
         728e8:	e28dd004 	add	sp, sp, #4	; 0x4
         728ec:	ea000031 	b	729b8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x130>
         728f0:	e3570040 	cmp	r7, #64	; 0x40
         728f4:	8a000041 	bhi	72a00 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x178>
         728f8:	e3370000 	teq	r7, #0	; 0x0
         728fc:	0a00003f 	beq	72a00 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x178>
         72900:	e1a01007 	mov	r1, r7
         72904:	e1a00004 	mov	r0, r4
         72908:	eb66e327 	bl	1a2b5ac <TConnectionEnd::$RequestTypeToChannelNumber(CommToolRequestType)>
         7290c:	e1a05000 	mov	r5, r0
         72910:	e0800080 	add	r0, r0, r0, lsl #1
         72914:	e0840180 	add	r0, r4, r0, lsl #3
         72918:	e5806048 	str	r6, [r0, #72]	; fField72
         7291c:	e280104c 	add	r1, r0, #76	; 0x4c
         72920:	e898500c 	ldmia	r8, {r2, r3, ip, lr}
         72924:	e881500c 	stmia	r1, {r2, r3, ip, lr}
         72928:	e5c09044 	strb	r9, [r0, #68]	; fField68
         7292c:	e1a01007 	mov	r1, r7
         72930:	e1a00004 	mov	r0, r4
         72934:	e3a02000 	mov	r2, #0	; 0x0
         72938:	eb66e32c 	bl	1a2b5f0 <TConnectionEnd::$SetChannelFilter(CommToolRequestType, unsigned char)>
         7293c:	e3550006 	cmp	r5, #6	; 0x6
         72940:	908ff105 	addls	pc, pc, r5, lsl #2
         72944:	ea00001b 	b	729b8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x130>
         72948:	ea000007 	b	7296c <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0xe4>
         7294c:	ea000009 	b	72978 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0xf0>
         72950:	ea00000b 	b	72984 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0xfc>
         72954:	ea000012 	b	729a4 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x11c>
         72958:	ea000014 	b	729b0 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x128>
         7295c:	ea00000b 	b	72990 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x108>
         72960:	e1a00004 	mov	r0, r4
         72964:	eb66dad4 	bl	1a294bc <TConnectionEnd::$PrepResArbRequest(void)>
         72968:	ea000012 	b	729b8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x130>
         7296c:	e1a00004 	mov	r0, r4
         72970:	eb66dace 	bl	1a294b0 <TConnectionEnd::$PrepGetRequest(void)>
         72974:	ea00000f 	b	729b8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x130>
         72978:	e1a00004 	mov	r0, r4
         7297c:	eb66dacd 	bl	1a294b8 <TConnectionEnd::$PrepPutRequest(void)>
         72980:	ea00000c 	b	729b8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x130>
         72984:	e1a00004 	mov	r0, r4
         72988:	eb66dac7 	bl	1a294ac <TConnectionEnd::$PrepControlRequest(void)>
         7298c:	ea000009 	b	729b8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x130>
         72990:	e5940004 	ldr	r0, [r4, #4]	; TConnectionEnd
         72994:	e5b0102c 	ldr	r1, [r0, #44]!
         72998:	e1a00004 	mov	r0, r4
         7299c:	eb66ca56 	bl	1a252fc <TConnectionEnd::$DoStatus(unsigned long)>
         729a0:	ea000004 	b	729b8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x130>
         729a4:	e5940000 	ldr	r0, [r4]
         729a8:	eb0c43cd 	bl	3838e4 <PConnectionEnd::GetCommEvent(void)>
         729ac:	ea000001 	b	729b8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x130>
         729b0:	e1a00004 	mov	r0, r4
         729b4:	eb66dabe 	bl	1a294b4 <TConnectionEnd::$PrepKillRequest(void)>
         729b8:	e5d401b0 	ldrb	r0, [r4, #432]	; fField432
         729bc:	e3300000 	teq	r0, #0	; 0x0
         729c0:	05940000 	ldreq	r0, [r4]
         729c4:	0b0c4384 	bleq	3837dc <PConnectionEnd::HandleInternalEvent(void)>
         729c8:	e5d401b0 	ldrb	r0, [r4, #432]	; fField432
         729cc:	e3300000 	teq	r0, #0	; 0x0
         729d0:	1a000008 	bne	729f8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x170>
         729d4:	e3a03000 	mov	r3, #0	; 0x0
         729d8:	e92d0008 	stmdb	sp!, {r3}
         729dc:	e59431b8 	ldr	r3, [r4, #440]	; fField440
         729e0:	e2841010 	add	r1, r4, #16	; 0x10
         729e4:	e2840008 	add	r0, r4, #8	; 0x8
         729e8:	e3a02000 	mov	r2, #0	; 0x0
         729ec:	eb6d9890 	bl	1bd8c34 <TUPort::$Receive(TUAsyncMessage *, unsigned long, unsigned long, unsigned char)>
         729f0:	e28dd004 	add	sp, sp, #4	; 0x4
         729f4:	e5c491b2 	strb	r9, [r4, #434]	; fField434
         729f8:	e5d401b0 	ldrb	r0, [r4, #432]	; fField432
         729fc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         72a00:	e1a03005 	mov	r3, r5
         72a04:	e92d0008 	stmdb	sp!, {r3}
         72a08:	e1a03008 	mov	r3, r8
         72a0c:	e1a02006 	mov	r2, r6
         72a10:	e5940000 	ldr	r0, [r4]
         72a14:	eb0c43a6 	bl	3838b4 <PConnectionEnd::HandleRequest(unsigned char *, unsigned long, TUMsgToken &, unsigned long)>
         72a18:	eaffffb2 	b	728e8 <TConnectionEnd::DispatchRequest(unsigned char *, unsigned long, unsigned long, TUMsgToken *)+0x60>
    */
}

/**
 * Symbol: TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)
 * Address: 00072a1c
 */
TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *) {
    /*
         72a1c:	e1a0c00d 	mov	ip, sp
         72a20:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         72a24:	e24cb004 	sub	fp, ip, #4	; 0x4
         72a28:	e1a05000 	mov	r5, r0
         72a2c:	e1a06001 	mov	r6, r1
         72a30:	e1a04002 	mov	r4, r2
         72a34:	e5920000 	ldr	r0, [r2]
         72a38:	e3100020 	tst	r0, #32	; 0x20
         72a3c:	1594000c 	ldrne	r0, [r4, #12]
         72a40:	13300000 	teqne	r0, #0	; 0x0
         72a44:	0a000003 	beq	72a58 <TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0x3c>
         72a48:	e3360000 	teq	r6, #0	; 0x0
         72a4c:	1a000001 	bne	72a58 <TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0x3c>
         72a50:	eb6d20bd 	bl	1bbad4c <TOptionArray::$ShadowCopyBack(void)>
         72a54:	e1a06000 	mov	r6, r0
         72a58:	e5940000 	ldr	r0, [r4]
         72a5c:	e3c0003b 	bic	r0, r0, #59	; 0x3b
         72a60:	e5840000 	str	r0, [r4]
         72a64:	e3100004 	tst	r0, #4	; 0x4
         72a68:	0a000006 	beq	72a88 <TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0x6c>
         72a6c:	e594000c 	ldr	r0, [r4, #12]
         72a70:	e3300000 	teq	r0, #0	; 0x0
         72a74:	13a01001 	movne	r1, #1	; 0x1
         72a78:	1b6d102b 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         72a7c:	e5940000 	ldr	r0, [r4]
         72a80:	e3c00004 	bic	r0, r0, #4	; 0x4
         72a84:	e5840000 	str	r0, [r4]
         72a88:	e3a07000 	mov	r7, #0	; 0x0
         72a8c:	e584700c 	str	r7, [r4, #12]
         72a90:	e5940014 	ldr	r0, [r4, #20]
         72a94:	e3300000 	teq	r0, #0	; 0x0
         72a98:	0a000002 	beq	72aa8 <TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0x8c>
         72a9c:	e3a01001 	mov	r1, #1	; 0x1
         72aa0:	eb6d1025 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         72aa4:	e5847014 	str	r7, [r4, #20]
         72aa8:	e5b40004 	ldr	r0, [r4, #4]!	; TConnectionEnd
         72aac:	e3300002 	teq	r0, #2	; 0x2
         72ab0:	1a00000f 	bne	72af4 <TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0xd8>
         72ab4:	e59501bc 	ldr	r0, [r5, #444]	; fField444
         72ab8:	e3300000 	teq	r0, #0	; 0x0
         72abc:	0a000001 	beq	72ac8 <TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0xac>
         72ac0:	eb6d6b06 	bl	1bcd6e0 <$__dl(void *)>
         72ac4:	e58571bc 	str	r7, [r5, #444]	; fField444
         72ac8:	e59501c0 	ldr	r0, [r5, #448]	; fField448
         72acc:	e3300000 	teq	r0, #0	; 0x0
         72ad0:	0a000002 	beq	72ae0 <TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0xc4>
         72ad4:	e3a01001 	mov	r1, #1	; 0x1
         72ad8:	eb6d6f0c 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         72adc:	e58571c0 	str	r7, [r5, #448]	; fField448
         72ae0:	e59501c4 	ldr	r0, [r5, #452]	; fField452
         72ae4:	e3300000 	teq	r0, #0	; 0x0
         72ae8:	0a000001 	beq	72af4 <TConnectionEnd::ProcessOptionsCleanUp(long, TCommToolOptionInfo *)+0xd8>
         72aec:	eb6d6afb 	bl	1bcd6e0 <$__dl(void *)>
         72af0:	e5a571c4 	str	r7, [r5, #452]!	; fField452
         72af4:	e1a00006 	mov	r0, r6
         72af8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00072afc
 */
TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         72afc:	e1a0c00d 	mov	ip, sp
         72b00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         72b04:	e24cb004 	sub	fp, ip, #4	; 0x4
         72b08:	e1a04001 	mov	r4, r1
         72b0c:	e3a05000 	mov	r5, #0	; 0x0
         72b10:	e59fc050 	ldr	ip, [pc, #50]	; 72b68 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x6c>
         72b14:	e132000c 	teq	r2, ip
         72b18:	0a000023 	beq	72bac <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xb0>
         72b1c:	e59fc048 	ldr	ip, [pc, #48]	; 72b6c <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x70>
         72b20:	e132000c 	teq	r2, ip
         72b24:	0a000013 	beq	72b78 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x7c>
         72b28:	e59fc040 	ldr	ip, [pc, #40]	; 72b70 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x74>	; fField40
         72b2c:	e132000c 	teq	r2, ip
         72b30:	0a000031 	beq	72bfc <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x100>
         72b34:	e59fc038 	ldr	ip, [pc, #38]	; 72b74 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x78>
         72b38:	e132000c 	teq	r2, ip
         72b3c:	1a00003d 	bne	72c38 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x13c>
         72b40:	e3330c01 	teq	r3, #256	; 0x100
         72b44:	13330c02 	teqne	r3, #512	; 0x200
         72b48:	03e05002 	mvneq	r5, #2	; 0x2
         72b4c:	0a00003a 	beq	72c3c <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         72b50:	e3330b01 	teq	r3, #1024	; 0x400
         72b54:	1a00001c 	bne	72bcc <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xd0>
         72b58:	e28010f8 	add	r1, r0, #248	; 0xf8
         72b5c:	e1a00004 	mov	r0, r4
         72b60:	eb6d141a 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         72b64:	ea000034 	b	72c3c <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         72b68:	6370636d 	cmnvs	r0, #-1275068415	; 0xb4000001
         72b6c:	63707374 	cmnvs	r0, #-805306367	; 0xd0000001
         72b70:	73696420 	cmnvc	r9, #536870912	; 0x20000000
         72b74:	74696e66 	strvcbt	r6, [r9], -#3686
         72b78:	e3330c01 	teq	r3, #256	; 0x100
         72b7c:	13330c02 	teqne	r3, #512	; 0x200
         72b80:	05d4100c 	ldreqb	r1, [r4, #12]
         72b84:	05c01181 	streqb	r1, [r0, #385]	; fField385
         72b88:	0a00002b 	beq	72c3c <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         72b8c:	e3330c03 	teq	r3, #768	; 0x300
         72b90:	15d00181 	ldrneb	r0, [r0, #385]	; fField385
         72b94:	1a000016 	bne	72bf4 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf8>
         72b98:	e24dd010 	sub	sp, sp, #16	; 0x10
         72b9c:	e1a0000d 	mov	r0, sp
         72ba0:	eb6e45ac 	bl	1c04258 <TCMOPassiveState::$__ct(void)>
         72ba4:	e1a0100d 	mov	r1, sp
         72ba8:	ea000019 	b	72c14 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x118>
         72bac:	e3330c01 	teq	r3, #256	; 0x100
         72bb0:	13330c02 	teqne	r3, #512	; 0x200
         72bb4:	1a000006 	bne	72bd4 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xd8>
         72bb8:	e5901020 	ldr	r1, [r0, #32]	; fField32
         72bbc:	e3110c01 	tst	r1, #256	; 0x100
         72bc0:	05d4100c 	ldreqb	r1, [r4, #12]
         72bc4:	05c01180 	streqb	r1, [r0, #384]	; fField384
         72bc8:	0a00001b 	beq	72c3c <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         72bcc:	e3e05000 	mvn	r5, #0	; 0x0
         72bd0:	ea000019 	b	72c3c <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         72bd4:	e3330c03 	teq	r3, #768	; 0x300
         72bd8:	1a000004 	bne	72bf0 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf4>
         72bdc:	e24dd010 	sub	sp, sp, #16	; 0x10
         72be0:	e1a0000d 	mov	r0, sp
         72be4:	eb6e459a 	bl	1c04254 <TCMOPassiveClaim::$__ct(void)>
         72be8:	e1a0100d 	mov	r1, sp
         72bec:	ea000008 	b	72c14 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x118>
         72bf0:	e5d00180 	ldrb	r0, [r0, #384]	; fField384
         72bf4:	e5c4000c 	strb	r0, [r4, #12]
         72bf8:	ea00000f 	b	72c3c <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         72bfc:	e3330c03 	teq	r3, #768	; 0x300
         72c00:	1a000007 	bne	72c24 <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x128>
         72c04:	e24dd010 	sub	sp, sp, #16	; 0x10
         72c08:	e1a0000d 	mov	r0, sp
         72c0c:	eb6e4590 	bl	1c04254 <TCMOPassiveClaim::$__ct(void)>
         72c10:	e1a0100d 	mov	r1, sp
         72c14:	e1a00004 	mov	r0, r4
         72c18:	eb6d13ec 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         72c1c:	e28dd010 	add	sp, sp, #16	; 0x10
         72c20:	ea000005 	b	72c3c <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         72c24:	e59011b4 	ldr	r1, [r0, #436]	; fField436
         72c28:	e584100c 	str	r1, [r4, #12]
         72c2c:	e5900008 	ldr	r0, [r0, #8]	; fField8
         72c30:	e5a40010 	str	r0, [r4, #16]!
         72c34:	ea000000 	b	72c3c <TConnectionEnd::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x140>
         72c38:	e3e05005 	mvn	r5, #5	; 0x5
         72c3c:	e1a00005 	mov	r0, r5
         72c40:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00072c44
 */
TConnectionEnd::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         72c44:	ea66de2f 	b	1a2a508 <TConnectionEnd::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TConnectionEnd::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00072c48
 */
TConnectionEnd::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         72c48:	ea66de2e 	b	1a2a508 <TConnectionEnd::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TConnectionEnd::ProcessOptionComplete(unsigned long)
 * Address: 00072c4c
 */
void					TConnectionEnd::ProcessOptionComplete(ULong optResult) {
    /*
         72c4c:	e2802f4a 	add	r2, r0, #296	; 0x128
         72c50:	ea66da1c 	b	1a294c8 <TConnectionEnd::$ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *)>
    */
}

/**
 * Symbol: TConnectionEnd::ProcessGetBytesOptionComplete(unsigned long)
 * Address: 00072c54
 */
void 					TConnectionEnd::ProcessGetBytesOptionComplete(ULong optResult) {
    /*
         72c54:	e2802d05 	add	r2, r0, #320	; 0x140
         72c58:	ea66da1a 	b	1a294c8 <TConnectionEnd::$ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *)>
    */
}

/**
 * Symbol: TConnectionEnd::ProcessPutBytesOptionComplete(unsigned long)
 * Address: 00072c5c
 */
void 					TConnectionEnd::ProcessPutBytesOptionComplete(ULong optResult) {
    /*
         72c5c:	e2802f56 	add	r2, r0, #344	; 0x158
         72c60:	ea66da18 	b	1a294c8 <TConnectionEnd::$ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *)>
    */
}

/**
 * Symbol: TConnectionEnd::ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *)
 * Address: 00072c64
 */
TConnectionEnd::ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *) {
    /*
         72c64:	e3710006 	cmn	r1, #6	; 0x6
         72c68:	0a000009 	beq	72c94 <TConnectionEnd::ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *)+0x30>
         72c6c:	e5923010 	ldr	r3, [r2, #16]
         72c70:	e593c008 	ldr	ip, [r3, #8]	; fField8
         72c74:	e3ccc0ff 	bic	ip, ip, #255	; 0xff
         72c78:	e20110ff 	and	r1, r1, #255	; 0xff
         72c7c:	e18c1001 	orr	r1, ip, r1
         72c80:	e5a31008 	str	r1, [r3, #8]!	; fField8
         72c84:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
         72c88:	e5923010 	ldr	r3, [r2, #16]
         72c8c:	e5a31008 	str	r1, [r3, #8]!	; fField8
         72c90:	ea000007 	b	72cb4 <TConnectionEnd::ProcessCommOptionComplete(unsigned long, TCommToolOptionInfo *)+0x50>
         72c94:	e5921000 	ldr	r1, [r2]
         72c98:	e3811002 	orr	r1, r1, #2	; 0x2
         72c9c:	e5821000 	str	r1, [r2]
         72ca0:	e5921010 	ldr	r1, [r2, #16]
         72ca4:	e5913008 	ldr	r3, [r1, #8]	; fField8
         72ca8:	e3c330ff 	bic	r3, r3, #255	; 0xff
         72cac:	e38330fc 	orr	r3, r3, #252	; 0xfc
         72cb0:	e5a13008 	str	r3, [r1, #8]!	; fField8
         72cb4:	e1a01002 	mov	r1, r2
         72cb8:	ea66de1b 	b	1a2a52c <TConnectionEnd::$ProcessOptionsContinue(TCommToolOptionInfo *)>
    */
}

/**
 * Symbol: TConnectionEnd::FlushChannel(CommToolRequestType, long)
 * Address: 00072cbc
 */
NewtonErr				TConnectionEnd::FlushChannel(ULong filter, NewtonErr flushResult) {
    /*
         72cbc:	e1a0c00d 	mov	ip, sp
         72cc0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         72cc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         72cc8:	e1a06000 	mov	r6, r0
         72ccc:	e1a05001 	mov	r5, r1
         72cd0:	e1a04002 	mov	r4, r2
         72cd4:	e24dd030 	sub	sp, sp, #48	; 0x30
         72cd8:	e3a07001 	mov	r7, #1	; 0x1
         72cdc:	e3a08000 	mov	r8, #0	; 0x0
         72ce0:	e58d801c 	str	r8, [sp, #28]
         72ce4:	e58d8028 	str	r8, [sp, #40]	; fField40
         72ce8:	e58d8020 	str	r8, [sp, #32]	; fField32
         72cec:	e58d8024 	str	r8, [sp, #36]	; fField36
         72cf0:	e28d0010 	add	r0, sp, #16	; 0x10
         72cf4:	eb6df2b5 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         72cf8:	e1a0000d 	mov	r0, sp
         72cfc:	eb6df2ac 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         72d00:	e58d4008 	str	r4, [sp, #8]	; fField8
         72d04:	e2864008 	add	r4, r6, #8	; 0x8
         72d08:	e3a03000 	mov	r3, #0	; 0x0
         72d0c:	e3a02001 	mov	r2, #1	; 0x1
         72d10:	e1a01005 	mov	r1, r5
         72d14:	e3a00000 	mov	r0, #0	; 0x0
         72d18:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         72d1c:	e28d202c 	add	r2, sp, #44	; 0x2c
         72d20:	e92d000c 	stmdb	sp!, {r2, r3}
         72d24:	e1a00004 	mov	r0, r4
         72d28:	e28d2028 	add	r2, sp, #40	; 0x28
         72d2c:	e28d1044 	add	r1, sp, #68	; 0x44
         72d30:	e3a0300c 	mov	r3, #12	; 0xc
         72d34:	eb6d97bf 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
         72d38:	e28dd018 	add	sp, sp, #24	; 0x18
         72d3c:	e3300000 	teq	r0, #0	; 0x0
         72d40:	1a000009 	bne	72d6c <TConnectionEnd::FlushChannel(CommToolRequestType, long)+0xb0>
         72d44:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         72d48:	e3300000 	teq	r0, #0	; 0x0
         72d4c:	0a000004 	beq	72d64 <TConnectionEnd::FlushChannel(CommToolRequestType, long)+0xa8>
         72d50:	e1a0100d 	mov	r1, sp
         72d54:	e28d001c 	add	r0, sp, #28	; 0x1c
         72d58:	e3a03000 	mov	r3, #0	; 0x0
         72d5c:	e3a02010 	mov	r2, #16	; 0x10
         72d60:	eb6d9be1 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         72d64:	e3370000 	teq	r7, #0	; 0x0
         72d68:	1affffe6 	bne	72d08 <TConnectionEnd::FlushChannel(CommToolRequestType, long)+0x4c>
         72d6c:	e1a00008 	mov	r0, r8
         72d70:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::Close(void)
 * Address: 00072d74
 */
TConnectionEnd::Close(void) {
    /*
         72d74:	e1a0c00d 	mov	ip, sp
         72d78:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         72d7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         72d80:	e1a04000 	mov	r4, r0
         72d84:	e5900020 	ldr	r0, [r0, #32]	; fField32
         72d88:	e3800010 	orr	r0, r0, #16	; 0x10
         72d8c:	e5840020 	str	r0, [r4, #32]	; fField32
         72d90:	e3100003 	tst	r0, #3	; 0x3
         72d94:	1a00000d 	bne	72dd0 <TConnectionEnd::Close(void)+0x5c>
         72d98:	e3a06001 	mov	r6, #1	; 0x1
         72d9c:	e3a0507d 	mov	r5, #125	; 0x7d
         72da0:	e2455c3f 	sub	r5, r5, #16128	; 0x3f00
         72da4:	e1a01006 	mov	r1, r6
         72da8:	e1a00004 	mov	r0, r4
         72dac:	e1a02005 	mov	r2, r5
         72db0:	eb66cd56 	bl	1a26310 <TConnectionEnd::$FlushChannel(CommToolRequestType, long)>
         72db4:	e1a06086 	mov	r6, r6, lsl #1
         72db8:	e3560010 	cmp	r6, #16	; 0x10
         72dbc:	dafffff8 	ble	72da4 <TConnectionEnd::Close(void)+0x30>
         72dc0:	e5940000 	ldr	r0, [r4]
         72dc4:	eb66c92e 	bl	1a25284 <PConnectionEnd::$CloseStart(void)>
         72dc8:	e3a00001 	mov	r0, #1	; 0x1
         72dcc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         72dd0:	e5940028 	ldr	r0, [r4, #40]	; fField40
         72dd4:	e3300000 	teq	r0, #0	; 0x0
         72dd8:	03a00002 	moveq	r0, #2	; 0x2
         72ddc:	05840028 	streq	r0, [r4, #40]	; fField40
         72de0:	e1a00004 	mov	r0, r4
         72de4:	e59f1008 	ldr	r1, [pc, #8]	; 72df4 <TConnectionEnd::Close(void)+0x80>	; fField8
         72de8:	eb66e606 	bl	1a2c608 <TConnectionEnd::$StartAbort(long)>
         72dec:	e3a00000 	mov	r0, #0	; 0x0
         72df0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         72df4:	ffffc173 	swinv	0x00ffc173
    */
}

/**
 * Symbol: TConnectionEnd::CompleteRequest(CommToolChannelNumber, long)
 * Address: 00072df8
 */
TConnectionEnd::CompleteRequest(CommToolChannelNumber, long) {
    /*
         72df8:	e1a0c00d 	mov	ip, sp
         72dfc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         72e00:	e24cb004 	sub	fp, ip, #4	; 0x4
         72e04:	e1a04000 	mov	r4, r0
         72e08:	e1a05002 	mov	r5, r2
         72e0c:	e0810081 	add	r0, r1, r1, lsl #1
         72e10:	e0846180 	add	r6, r4, r0, lsl #3
         72e14:	e5d60044 	ldrb	r0, [r6, #68]	; fField68
         72e18:	e3300000 	teq	r0, #0	; 0x0
         72e1c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         72e20:	e3a00000 	mov	r0, #0	; 0x0
         72e24:	e5c60044 	strb	r0, [r6, #68]	; fField68
         72e28:	e1a00004 	mov	r0, r4
         72e2c:	eb66c504 	bl	1a24244 <TConnectionEnd::$ChannelNumberToRequestType(CommToolChannelNumber)>
         72e30:	e1a01000 	mov	r1, r0
         72e34:	e1a00004 	mov	r0, r4
         72e38:	e3a02001 	mov	r2, #1	; 0x1
         72e3c:	eb66e1eb 	bl	1a2b5f0 <TConnectionEnd::$SetChannelFilter(CommToolRequestType, unsigned char)>
         72e40:	e286004c 	add	r0, r6, #76	; 0x4c
         72e44:	e1a04000 	mov	r4, r0
         72e48:	e5900004 	ldr	r0, [r0, #4]	; TConnectionEnd
         72e4c:	e3300000 	teq	r0, #0	; 0x0
         72e50:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         72e54:	e24dd010 	sub	sp, sp, #16	; 0x10
         72e58:	e1a0000d 	mov	r0, sp
         72e5c:	eb6df254 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         72e60:	e58d5008 	str	r5, [sp, #8]	; fField8
         72e64:	e1a00004 	mov	r0, r4
         72e68:	e59d200c 	ldr	r2, [sp, #12]
         72e6c:	e1a0100d 	mov	r1, sp
         72e70:	e3a03000 	mov	r3, #0	; 0x0
         72e74:	eb6d9b9c 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         72e78:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::CompleteRequest(CommToolChannelNumber, long, TCommToolReply &)
 * Address: 00072e7c
 */
TConnectionEnd::CompleteRequest(CommToolChannelNumber, long, TCommToolReply &) {
    /*
         72e7c:	e1a0c00d 	mov	ip, sp
         72e80:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         72e84:	e24cb004 	sub	fp, ip, #4	; 0x4
         72e88:	e1a05000 	mov	r5, r0
         72e8c:	e1a06002 	mov	r6, r2
         72e90:	e1a04003 	mov	r4, r3
         72e94:	e0810081 	add	r0, r1, r1, lsl #1
         72e98:	e0857180 	add	r7, r5, r0, lsl #3
         72e9c:	e5d70044 	ldrb	r0, [r7, #68]	; fField68
         72ea0:	e3300000 	teq	r0, #0	; 0x0
         72ea4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         72ea8:	e3a00000 	mov	r0, #0	; 0x0
         72eac:	e5c70044 	strb	r0, [r7, #68]	; fField68
         72eb0:	e1a00005 	mov	r0, r5
         72eb4:	eb66c4e2 	bl	1a24244 <TConnectionEnd::$ChannelNumberToRequestType(CommToolChannelNumber)>
         72eb8:	e1a01000 	mov	r1, r0
         72ebc:	e1a00005 	mov	r0, r5
         72ec0:	e3a02001 	mov	r2, #1	; 0x1
         72ec4:	eb66e1c9 	bl	1a2b5f0 <TConnectionEnd::$SetChannelFilter(CommToolRequestType, unsigned char)>
         72ec8:	e287004c 	add	r0, r7, #76	; 0x4c
         72ecc:	e5901004 	ldr	r1, [r0, #4]	; TConnectionEnd
         72ed0:	e3310000 	teq	r1, #0	; 0x0
         72ed4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         72ed8:	e5846008 	str	r6, [r4, #8]	; fField8
         72edc:	e594200c 	ldr	r2, [r4, #12]
         72ee0:	e1a01004 	mov	r1, r4
         72ee4:	e3a03000 	mov	r3, #0	; 0x0
         72ee8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         72eec:	ea6d9b7e 	b	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
    */
}

/**
 * Symbol: TConnectionEnd::StartAbort(long)
 * Address: 00072ef0
 */
NewtonErr				TConnectionEnd::StartAbort(NewtonErr abortError) {
    /*
         72ef0:	e1a0c00d 	mov	ip, sp
         72ef4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         72ef8:	e24cb004 	sub	fp, ip, #4	; 0x4
         72efc:	e5902020 	ldr	r2, [r0, #32]	; fField32
         72f00:	e3120004 	tst	r2, #4	; 0x4
         72f04:	15900024 	ldrne	r0, [r0, #36]	; fField36
         72f08:	191ba800 	ldmnedb	fp, {fp, sp, pc}
         72f0c:	e3120003 	tst	r2, #3	; 0x3
         72f10:	059f001c 	ldreq	r0, [pc, #1c]	; 72f34 <TConnectionEnd::StartAbort(long)+0x44>
         72f14:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         72f18:	e5801024 	str	r1, [r0, #36]	; fField36
         72f1c:	e3821084 	orr	r1, r2, #132	; 0x84
         72f20:	e5801020 	str	r1, [r0, #32]	; fField32
         72f24:	e5900000 	ldr	r0, [r0]
         72f28:	eb0c4246 	bl	383848 <PConnectionEnd::TerminateStart(void)>
         72f2c:	e3a00000 	mov	r0, #0	; 0x0
         72f30:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         72f34:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TConnectionEnd::TerminateComplete(void)
 * Address: 00072f38
 */
void					TConnectionEnd::TerminateComplete() {
    /*
         72f38:	e1a0c00d 	mov	ip, sp
         72f3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         72f40:	e24cb004 	sub	fp, ip, #4	; 0x4
         72f44:	e1a04000 	mov	r4, r0
         72f48:	e5905024 	ldr	r5, [r0, #36]	; fField36
         72f4c:	e3a00000 	mov	r0, #0	; 0x0
         72f50:	e5840024 	str	r0, [r4, #36]	; fField36
         72f54:	e5940020 	ldr	r0, [r4, #32]	; fField32
         72f58:	e3c000c7 	bic	r0, r0, #199	; 0xc7
         72f5c:	e5840020 	str	r0, [r4, #32]	; fField32
         72f60:	e5d40044 	ldrb	r0, [r4, #68]	; fField68
         72f64:	e3300000 	teq	r0, #0	; 0x0
         72f68:	0a000004 	beq	72f80 <TConnectionEnd::TerminateComplete(void)+0x48>
         72f6c:	e1a01005 	mov	r1, r5
         72f70:	e1a00004 	mov	r0, r4
         72f74:	e3a03000 	mov	r3, #0	; 0x0
         72f78:	e3a02000 	mov	r2, #0	; 0x0
         72f7c:	eb66ccf4 	bl	1a26354 <TConnectionEnd::$GetComplete(long, unsigned char, unsigned long)>
         72f80:	e5d4005c 	ldrb	r0, [r4, #92]	; fField92
         72f84:	e3300000 	teq	r0, #0	; 0x0
         72f88:	0a000003 	beq	72f9c <TConnectionEnd::TerminateComplete(void)+0x64>
         72f8c:	e1a01005 	mov	r1, r5
         72f90:	e1a00004 	mov	r0, r4
         72f94:	e3a02000 	mov	r2, #0	; 0x0
         72f98:	eb66dd73 	bl	1a2a56c <TConnectionEnd::$PutComplete(long, unsigned long)>
         72f9c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         72fa0:	e3100010 	tst	r0, #16	; 0x10
         72fa4:	0a000003 	beq	72fb8 <TConnectionEnd::TerminateComplete(void)+0x80>
         72fa8:	e1a00004 	mov	r0, r4
         72fac:	e3a01000 	mov	r1, #0	; 0x0
         72fb0:	eb66c4aa 	bl	1a24260 <TConnectionEnd::$CloseComplete(long)>
         72fb4:	ea00002e 	b	73074 <TConnectionEnd::TerminateComplete(void)+0x13c>
         72fb8:	e5d40074 	ldrb	r0, [r4, #116]	; fField116
         72fbc:	e3300000 	teq	r0, #0	; 0x0
         72fc0:	0a00002b 	beq	73074 <TConnectionEnd::TerminateComplete(void)+0x13c>
         72fc4:	e5940184 	ldr	r0, [r4, #388]	; fField388
         72fc8:	e2400002 	sub	r0, r0, #2	; 0x2
         72fcc:	e3500008 	cmp	r0, #8	; 0x8
         72fd0:	908ff100 	addls	pc, pc, r0, lsl #2
         72fd4:	ea000022 	b	73064 <TConnectionEnd::TerminateComplete(void)+0x12c>
         72fd8:	ea00001e 	b	73058 <TConnectionEnd::TerminateComplete(void)+0x120>
         72fdc:	ea000009 	b	73008 <TConnectionEnd::TerminateComplete(void)+0xd0>
         72fe0:	ea00000c 	b	73018 <TConnectionEnd::TerminateComplete(void)+0xe0>
         72fe4:	ea00000f 	b	73028 <TConnectionEnd::TerminateComplete(void)+0xf0>
         72fe8:	ea000012 	b	73038 <TConnectionEnd::TerminateComplete(void)+0x100>
         72fec:	ea000015 	b	73048 <TConnectionEnd::TerminateComplete(void)+0x110>
         72ff0:	ea00001b 	b	73064 <TConnectionEnd::TerminateComplete(void)+0x12c>
         72ff4:	ea00001a 	b	73064 <TConnectionEnd::TerminateComplete(void)+0x12c>
         72ff8:	e1a01005 	mov	r1, r5
         72ffc:	e1a00004 	mov	r0, r4
         73000:	eb66d50f 	bl	1a28444 <TConnectionEnd::$OptionMgmtComplete(long)>
         73004:	ea00001a 	b	73074 <TConnectionEnd::TerminateComplete(void)+0x13c>
         73008:	e1a01005 	mov	r1, r5
         7300c:	e1a00004 	mov	r0, r4
         73010:	eb66c8a4 	bl	1a252a8 <TConnectionEnd::$ConnectComplete(long)>
         73014:	ea000016 	b	73074 <TConnectionEnd::TerminateComplete(void)+0x13c>
         73018:	e1a01005 	mov	r1, r5
         7301c:	e1a00004 	mov	r0, r4
         73020:	eb66d4f7 	bl	1a28404 <TConnectionEnd::$ListenComplete(long)>
         73024:	ea000012 	b	73074 <TConnectionEnd::TerminateComplete(void)+0x13c>
         73028:	e1a01005 	mov	r1, r5
         7302c:	e1a00004 	mov	r0, r4
         73030:	eb66c05a 	bl	1a231a0 <TConnectionEnd::$AcceptComplete(long)>
         73034:	ea00000e 	b	73074 <TConnectionEnd::TerminateComplete(void)+0x13c>
         73038:	e1a00004 	mov	r0, r4
         7303c:	e3a01000 	mov	r1, #0	; 0x0
         73040:	eb66c8a4 	bl	1a252d8 <TConnectionEnd::$DisconnectComplete(long)>
         73044:	ea00000a 	b	73074 <TConnectionEnd::TerminateComplete(void)+0x13c>
         73048:	e1a00004 	mov	r0, r4
         7304c:	e3a01000 	mov	r1, #0	; 0x0
         73050:	eb66e150 	bl	1a2b598 <TConnectionEnd::$ReleaseComplete(long)>
         73054:	ea000006 	b	73074 <TConnectionEnd::TerminateComplete(void)+0x13c>
         73058:	e5940000 	ldr	r0, [r4]
         7305c:	eb66c888 	bl	1a25284 <PConnectionEnd::$CloseStart(void)>
         73060:	ea000003 	b	73074 <TConnectionEnd::TerminateComplete(void)+0x13c>
         73064:	e1a02005 	mov	r2, r5
         73068:	e1a00004 	mov	r0, r4
         7306c:	e3a01002 	mov	r1, #2	; 0x2
         73070:	eb66c886 	bl	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         73074:	e1a00004 	mov	r0, r4
         73078:	e3a02000 	mov	r2, #0	; 0x0
         7307c:	e3a01004 	mov	r1, #4	; 0x4
         73080:	eb66d0dd 	bl	1a273fc <TConnectionEnd::$KillRequestComplete(CommToolRequestType, long)>
         73084:	e5940028 	ldr	r0, [r4, #40]	; fField40
         73088:	e3300002 	teq	r0, #2	; 0x2
         7308c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         73090:	e3a00002 	mov	r0, #2	; 0x2
         73094:	e5840198 	str	r0, [r4, #408]	; fField408
         73098:	e2840f67 	add	r0, r4, #412	; 0x19c
         7309c:	eb6d824d 	bl	1bd39d8 <$GetGlobalTime>
         730a0:	e5940028 	ldr	r0, [r4, #40]	; fField40
         730a4:	e58401a4 	str	r0, [r4, #420]	; fField420
         730a8:	e59401b4 	ldr	r0, [r4, #436]	; fField436
         730ac:	e58401a8 	str	r0, [r4, #424]	; fField424
         730b0:	e2841f62 	add	r1, r4, #392	; 0x188
         730b4:	e1a00004 	mov	r0, r4
         730b8:	e3a02000 	mov	r2, #0	; 0x0
         730bc:	eb66d8f4 	bl	1a29494 <TConnectionEnd::$PostCommEvent(TCommToolGetEventReply &, long)>
         730c0:	e5a40190 	str	r0, [r4, #400]!	; fField400
         730c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::SetChannelFilter(CommToolRequestType, unsigned char)
 * Address: 000730c8
 */
TConnectionEnd::SetChannelFilter(CommToolRequestType, unsigned char) {
    /*
         730c8:	e1a0c00d 	mov	ip, sp
         730cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         730d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         730d4:	e1a04000 	mov	r4, r0
         730d8:	e31200ff 	tst	r2, #255	; 0xff
         730dc:	e59401b8 	ldr	r0, [r4, #440]	; fField440
         730e0:	01c00001 	biceq	r0, r0, r1
         730e4:	11800001 	orrne	r0, r0, r1
         730e8:	e58401b8 	str	r0, [r4, #440]	; fField440
         730ec:	e5d401b2 	ldrb	r0, [r4, #434]	; fField434
         730f0:	e3300000 	teq	r0, #0	; 0x0
         730f4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         730f8:	e59421b8 	ldr	r2, [r4, #440]	; fField440
         730fc:	e2841010 	add	r1, r4, #16	; 0x10
         73100:	e2840008 	add	r0, r4, #8	; 0x8
         73104:	eb079bae 	bl	259fc4 <TUPort::ResetMsgFilter(TUAsyncMessage *, unsigned long)>
         73108:	e3300000 	teq	r0, #0	; 0x0
         7310c:	11a01000 	movne	r1, r0
         73110:	11a00004 	movne	r0, r4
         73114:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         73118:	1a66e53a 	bne	1a2c608 <TConnectionEnd::$StartAbort(long)>
         7311c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TConnectionEnd::RequestTypeToChannelNumber(CommToolRequestType)
 * Address: 00073120
 */
TConnectionEnd::RequestTypeToChannelNumber(CommToolRequestType) {
    /*
         73120:	e3a00000 	mov	r0, #0	; 0x0
         73124:	ea000000 	b	7312c <TConnectionEnd::RequestTypeToChannelNumber(CommToolRequestType)+0xc>
         73128:	e2800001 	add	r0, r0, #1	; 0x1
         7312c:	e1b010c1 	movs	r1, r1, asr #1
         73130:	1afffffc 	bne	73128 <TConnectionEnd::RequestTypeToChannelNumber(CommToolRequestType)+0x8>
         73134:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TConnectionEnd::ChannelNumberToRequestType(CommToolChannelNumber)
 * Address: 00073138
 */
TConnectionEnd::ChannelNumberToRequestType(CommToolChannelNumber) {
    /*
         73138:	e3a00001 	mov	r0, #1	; 0x1
         7313c:	e1a00110 	mov	r0, r0, lsl r1
         73140:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TConnectionEnd::InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)
 * Address: 00073144
 */
NewtonErr				TConnectionEnd::InitAsyncRPCMsg(TUAsyncMessage& asyncMsg, ULong refCon) {
    /*
         73144:	e1a0c00d 	mov	ip, sp
         73148:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         7314c:	e24cb004 	sub	fp, ip, #4	; 0x4
         73150:	e1a06000 	mov	r6, r0
         73154:	e1a04001 	mov	r4, r1
         73158:	e1a05002 	mov	r5, r2
         7315c:	e1a00001 	mov	r0, r1
         73160:	e3a01001 	mov	r1, #1	; 0x1
         73164:	eb6d8a4a 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         73168:	e3300000 	teq	r0, #0	; 0x0
         7316c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         73170:	e1a01005 	mov	r1, r5
         73174:	e1a00004 	mov	r0, r4
         73178:	eb6da724 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         7317c:	e3300000 	teq	r0, #0	; 0x0
         73180:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         73184:	e1a00004 	mov	r0, r4
         73188:	e5961008 	ldr	r1, [r6, #8]	; fField8
         7318c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         73190:	ea6da2fe 	b	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
    */
}

/**
 * Symbol: TConnectionEnd::CloseComplete(long)
 * Address: 00073194
 */
void					TConnectionEnd::CloseComplete(NewtonErr result) {
    /*
         73194:	e1a0c00d 	mov	ip, sp
         73198:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         7319c:	e24cb004 	sub	fp, ip, #4	; 0x4
         731a0:	e1a04000 	mov	r4, r0
         731a4:	e3a00001 	mov	r0, #1	; 0x1
         731a8:	e5c401b0 	strb	r0, [r4, #432]	; fField432
         731ac:	e5940020 	ldr	r0, [r4, #32]	; fField32
         731b0:	e3c00010 	bic	r0, r0, #16	; 0x10
         731b4:	e1a02001 	mov	r2, r1
         731b8:	e5840020 	str	r0, [r4, #32]	; fField32
         731bc:	e1a00004 	mov	r0, r4
         731c0:	e3a01002 	mov	r1, #2	; 0x2
         731c4:	eb66c831 	bl	1a25290 <TConnectionEnd::$CompleteRequest(CommToolChannelNumber, long)>
         731c8:	e5940004 	ldr	r0, [r4, #4]	; TConnectionEnd
         731cc:	e5942000 	ldr	r2, [r4]
         731d0:	e1a01004 	mov	r1, r4
         731d4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         731d8:	ea66c422 	b	1a24268 <TMuxTool::$CloseConnectionEnd(TConnectionEnd *, PConnectionEnd *)>
    */
}

/**
 * Symbol: TConnectionEnd::HandleTimerTick(void)
 * Address: 000731dc
 */
TConnectionEnd::HandleTimerTick(void) {
    /*
         731dc:	e5900000 	ldr	r0, [r0]
         731e0:	ea0c41b0 	b	3838a8 <PConnectionEnd::HandleTimerTick(void)>
    */
}

