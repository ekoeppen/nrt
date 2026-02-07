#include "include/TEndpointClient.h"

/**
 * Symbol: TEndpointClient::Default(TEndpointEvent *)
 * Address: 000ac3a4
 */
TEndpointClient::Default(TEndpointEvent *) {
    /*
         ac3a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::SndComplete(TEndpointEvent *)
 * Address: 000ac3a8
 */
TEndpointClient::SndComplete(TEndpointEvent *) {
    /*
         ac3a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::RcvComplete(TEndpointEvent *)
 * Address: 000ac3ac
 */
TEndpointClient::RcvComplete(TEndpointEvent *) {
    /*
         ac3ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::GetProtAddr(TEndpointEvent *)
 * Address: 000ac3b0
 */
TEndpointClient::GetProtAddr(TEndpointEvent *) {
    /*
         ac3b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::ListenComplete(TEndpointEvent *)
 * Address: 000ac3b4
 */
TEndpointClient::ListenComplete(TEndpointEvent *) {
    /*
         ac3b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::ConnectComplete(TEndpointEvent *)
 * Address: 000ac3b8
 */
TEndpointClient::ConnectComplete(TEndpointEvent *) {
    /*
         ac3b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::AcceptComplete(TEndpointEvent *)
 * Address: 000ac3bc
 */
TEndpointClient::AcceptComplete(TEndpointEvent *) {
    /*
         ac3bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::OptMgmtComplete(TEndpointEvent *)
 * Address: 000ac3c0
 */
TEndpointClient::OptMgmtComplete(TEndpointEvent *) {
    /*
         ac3c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::ReleaseComplete(TEndpointEvent *)
 * Address: 000ac3c4
 */
TEndpointClient::ReleaseComplete(TEndpointEvent *) {
    /*
         ac3c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::DisconnectComplete(TEndpointEvent *)
 * Address: 000ac3c8
 */
TEndpointClient::DisconnectComplete(TEndpointEvent *) {
    /*
         ac3c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::__ct(void)
 * Address: 000ac3cc
 */
TEndpointClient::TEndpointClient(void) {
    /*
         ac3cc:	e1a0c00d 	mov	ip, sp
         ac3d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ac3d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         ac3d8:	e1b04000 	movs	r4, r0
         ac3dc:	1a000003 	bne	ac3f0 <TEndpointClient::__ct(void)+0x24>
         ac3e0:	e3a00018 	mov	r0, #24	; 0x18
         ac3e4:	eb6c88d3 	bl	1bce738 <$__nw(unsigned int)>
         ac3e8:	e1b04000 	movs	r4, r0
         ac3ec:	0a000005 	beq	ac408 <TEndpointClient::__ct(void)+0x3c>
         ac3f0:	e1a00004 	mov	r0, r4
         ac3f4:	eb6cdf83 	bl	1be4208 <TAEventHandler::$__ct(void)>
         ac3f8:	e59f0010 	ldr	r0, [pc, #10]	; ac410 <TEndpointClient::__ct(void)+0x44>
         ac3fc:	e5840000 	str	r0, [r4]
         ac400:	e3a00000 	mov	r0, #0	; 0x0
         ac404:	e5840014 	str	r0, [r4, #20]	; fField20
         ac408:	e1a00004 	mov	r0, r4
         ac40c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         ac410:	0001e08c 	andeq	lr, r1, ip, lsl #1
    */
}

/**
 * Symbol: TEndpointClient::BindComplete(TEndpointEvent *)
 * Address: 000ac414
 */
TEndpointClient::BindComplete(TEndpointEvent *) {
    /*
         ac414:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::UnBindComplete(TEndpointEvent *)
 * Address: 000ac418
 */
TEndpointClient::UnBindComplete(TEndpointEvent *) {
    /*
         ac418:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::AbortComplete(TEndpointEvent *)
 * Address: 000ac41c
 */
TEndpointClient::AbortComplete(TEndpointEvent *) {
    /*
         ac41c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::DefaultComplete(TEndpointEvent *)
 * Address: 000ac420
 */
TEndpointClient::DefaultComplete(TEndpointEvent *) {
    /*
         ac420:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::__dt(void)
 * Address: 000ac424
 */
TEndpointClient::~TEndpointClient(void) {
    /*
         ac424:	e1a0c00d 	mov	ip, sp
         ac428:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ac42c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ac430:	e1a04000 	mov	r4, r0
         ac434:	e1a05001 	mov	r5, r1
         ac438:	e59f0020 	ldr	r0, [pc, #20]	; ac460 <TEndpointClient::__dt(void)+0x3c>	; fField20
         ac43c:	e5840000 	str	r0, [r4]
         ac440:	e1a00004 	mov	r0, r4
         ac444:	e3a01000 	mov	r1, #0	; 0x0
         ac448:	eb6cdf88 	bl	1be4270 <TAEventHandler::$__dt(void)>
         ac44c:	e3150001 	tst	r5, #1	; 0x1
         ac450:	11a00004 	movne	r0, r4
         ac454:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         ac458:	1a6c84a0 	bne	1bcd6e0 <$__dl(void *)>
         ac45c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         ac460:	0001e08c 	andeq	lr, r1, ip, lsl #1
    */
}

/**
 * Symbol: TEndpointClient::Init(TEndpoint *, unsigned long, unsigned long)
 * Address: 000ac464
 */
TEndpointClient::Init(TEndpoint *, unsigned long, unsigned long) {
    /*
         ac464:	e1a0c00d 	mov	ip, sp
         ac468:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ac46c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ac470:	e1a04000 	mov	r4, r0
         ac474:	e1a05001 	mov	r5, r1
         ac478:	e1a01002 	mov	r1, r2
         ac47c:	e1a02003 	mov	r2, r3
         ac480:	eb6cf40a 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
         ac484:	e1a06000 	mov	r6, r0
         ac488:	e5845014 	str	r5, [r4, #20]	; fField20
         ac48c:	e1a00005 	mov	r0, r5
         ac490:	e1a01004 	mov	r1, r4
         ac494:	eb6c3a27 	bl	1bbad38 <TEndpoint::$SetClientHandler(unsigned long)>
         ac498:	e1a00006 	mov	r0, r6
         ac49c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpointClient::AETestEvent(TAEvent *)
 * Address: 000ac4a0
 */
TEndpointClient::AETestEvent(TAEvent *) {
    /*
         ac4a0:	e591100c 	ldr	r1, [r1, #12]
         ac4a4:	e1310000 	teq	r1, r0
         ac4a8:	13a00000 	movne	r0, #0	; 0x0
         ac4ac:	03a00001 	moveq	r0, #1	; 0x1
         ac4b0:	e20000ff 	and	r0, r0, #255	; 0xff
         ac4b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000ac4b8
 */
TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         ac4b8:	e1a02000 	mov	r2, r0
         ac4bc:	e1a01003 	mov	r1, r3
         ac4c0:	e5930010 	ldr	r0, [r3, #16]
         ac4c4:	e280000c 	add	r0, r0, #12	; 0xc
         ac4c8:	e350000f 	cmp	r0, #15	; 0xf
         ac4cc:	908ff100 	addls	pc, pc, r0, lsl #2
         ac4d0:	ea000046 	b	ac5f0 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
         ac4d4:	ea000041 	b	ac5e0 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x128>
         ac4d8:	ea00003c 	b	ac5d0 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x118>
         ac4dc:	ea000037 	b	ac5c0 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x108>
         ac4e0:	ea000032 	b	ac5b0 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xf8>
         ac4e4:	ea00002d 	b	ac5a0 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe8>
         ac4e8:	ea000028 	b	ac590 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xd8>
         ac4ec:	ea000023 	b	ac580 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xc8>
         ac4f0:	ea00001e 	b	ac570 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xb8>
         ac4f4:	ea000019 	b	ac560 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xa8>
         ac4f8:	ea000014 	b	ac550 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x98>
         ac4fc:	ea00000f 	b	ac540 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x88>
         ac500:	ea00000a 	b	ac530 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x78>
         ac504:	ea000039 	b	ac5f0 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
         ac508:	ea000038 	b	ac5f0 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
         ac50c:	ea000003 	b	ac520 <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x68>
         ac510:	e1a00002 	mov	r0, r2
         ac514:	e5922000 	ldr	r2, [r2]
         ac518:	e2822018 	add	r2, r2, #24	; 0x18
         ac51c:	ea000036 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac520:	e1a00002 	mov	r0, r2
         ac524:	e5922000 	ldr	r2, [r2]
         ac528:	e2822014 	add	r2, r2, #20	; 0x14
         ac52c:	ea000032 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac530:	e1a00002 	mov	r0, r2
         ac534:	e5922000 	ldr	r2, [r2]
         ac538:	e2822024 	add	r2, r2, #36	; 0x24
         ac53c:	ea00002e 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac540:	e1a00002 	mov	r0, r2
         ac544:	e5922000 	ldr	r2, [r2]
         ac548:	e2822020 	add	r2, r2, #32	; 0x20
         ac54c:	ea00002a 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac550:	e1a00002 	mov	r0, r2
         ac554:	e5922000 	ldr	r2, [r2]
         ac558:	e2822028 	add	r2, r2, #40	; 0x28
         ac55c:	ea000026 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac560:	e1a00002 	mov	r0, r2
         ac564:	e5922000 	ldr	r2, [r2]
         ac568:	e2822038 	add	r2, r2, #56	; 0x38
         ac56c:	ea000022 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac570:	e1a00002 	mov	r0, r2
         ac574:	e5922000 	ldr	r2, [r2]
         ac578:	e282202c 	add	r2, r2, #44	; 0x2c
         ac57c:	ea00001e 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac580:	e1a00002 	mov	r0, r2
         ac584:	e5922000 	ldr	r2, [r2]
         ac588:	e2822030 	add	r2, r2, #48	; 0x30
         ac58c:	ea00001a 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac590:	e1a00002 	mov	r0, r2
         ac594:	e5922000 	ldr	r2, [r2]
         ac598:	e2822034 	add	r2, r2, #52	; 0x34
         ac59c:	ea000016 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac5a0:	e1a00002 	mov	r0, r2
         ac5a4:	e5922000 	ldr	r2, [r2]
         ac5a8:	e282203c 	add	r2, r2, #60	; 0x3c
         ac5ac:	ea000012 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac5b0:	e1a00002 	mov	r0, r2
         ac5b4:	e5922000 	ldr	r2, [r2]
         ac5b8:	e2822040 	add	r2, r2, #64	; 0x40
         ac5bc:	ea00000e 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac5c0:	e1a00002 	mov	r0, r2
         ac5c4:	e5922000 	ldr	r2, [r2]
         ac5c8:	e2822044 	add	r2, r2, #68	; 0x44
         ac5cc:	ea00000a 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac5d0:	e1a00002 	mov	r0, r2
         ac5d4:	e5922000 	ldr	r2, [r2]
         ac5d8:	e2822048 	add	r2, r2, #72	; 0x48
         ac5dc:	ea000006 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac5e0:	e1a00002 	mov	r0, r2
         ac5e4:	e5922000 	ldr	r2, [r2]
         ac5e8:	e282204c 	add	r2, r2, #76	; 0x4c
         ac5ec:	ea000002 	b	ac5fc <TEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x144>
         ac5f0:	e1a00002 	mov	r0, r2
         ac5f4:	e5922000 	ldr	r2, [r2]
         ac5f8:	e282201c 	add	r2, r2, #28	; 0x1c
         ac5fc:	e282f000 	add	pc, r2, #0	; 0x0
    */
}

/**
 * Symbol: TEndpointClient::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000ac600
 */
TEndpointClient::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         ac600:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointClient::Disconnect(TEndpointEvent *)
 * Address: 000ac604
 */
TEndpointClient::Disconnect(TEndpointEvent *) {
    /*
         ac604:	e5902000 	ldr	r2, [r0]
         ac608:	e282f01c 	add	pc, r2, #28	; 0x1c
    */
}

/**
 * Symbol: TEndpointClient::Release(TEndpointEvent *)
 * Address: 000ac60c
 */
TEndpointClient::Release(TEndpointEvent *) {
    /*
         ac60c:	e5902000 	ldr	r2, [r0]
         ac610:	e282f01c 	add	pc, r2, #28	; 0x1c
    */
}

