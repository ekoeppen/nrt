#include "DDKIncludes/CommAPI/Endpoint.h"

/**
 * Symbol: TAEventHandler::__ct(void)
 * Address: 00025574
 */
TAEventHandler::TAEventHandler() {
    /*
         25574:	e1a0c00d 	mov	ip, sp
         25578:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         2557c:	e24cb004 	sub	fp, ip, #4	; 0x4
         25580:	e3300000 	teq	r0, #0	; 0x0
         25584:	1a000003 	bne	25598 <TAEventHandler::__ct(void)+0x24>
         25588:	e3a00014 	mov	r0, #20	; 0x14
         2558c:	eb6ea469 	bl	1bce738 <$__nw(unsigned int)>
         25590:	e3300000 	teq	r0, #0	; 0x0
         25594:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         25598:	e59f1018 	ldr	r1, [pc, #18]	; 255b8 <TAEventHandler::__ct(void)+0x44>
         2559c:	e5801000 	str	r1, [r0]
         255a0:	e3a01000 	mov	r1, #0	; 0x0
         255a4:	e5801004 	str	r1, [r0, #4]	; TAEventHandler
         255a8:	e5801008 	str	r1, [r0, #8]	; TAEventHandler
         255ac:	e580100c 	str	r1, [r0, #12]	; TAEventHandler
         255b0:	e5801010 	str	r1, [r0, #16]	; fField16
         255b4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         255b8:	0001d42c 	andeq	sp, r1, ip, lsr #8
    */
}

/**
 * Symbol: TAEventHandler::__dt(void)
 * Address: 000255bc
 */
TAEventHandler::~TAEventHandler() {
    /*
         255bc:	e1a0c00d 	mov	ip, sp
         255c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         255c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         255c8:	e1a04000 	mov	r4, r0
         255cc:	e1a05001 	mov	r5, r1
         255d0:	e59f004c 	ldr	r0, [pc, #4c]	; 25624 <TAEventHandler::__dt(void)+0x68>	; TAEventHandler
         255d4:	e5840000 	str	r0, [r4]
         255d8:	e5940010 	ldr	r0, [r4, #16]	; fField16
         255dc:	e3300000 	teq	r0, #0	; 0x0
         255e0:	0a000002 	beq	255f0 <TAEventHandler::__dt(void)+0x34>
         255e4:	e3a01001 	mov	r1, #1	; 0x1
         255e8:	e1a0e00f 	mov	lr, pc
         255ec:	e590f000 	ldr	pc, [r0]
         255f0:	e5940008 	ldr	r0, [r4, #8]	; TAEventHandler
         255f4:	e3300000 	teq	r0, #0	; 0x0
         255f8:	1594000c 	ldrne	r0, [r4, #12]	; TAEventHandler
         255fc:	13300000 	teqne	r0, #0	; 0x0
         25600:	0a000002 	beq	25610 <TAEventHandler::__dt(void)+0x54>
         25604:	eb6eb8f2 	bl	1bd39d4 <$GetGlobals>
         25608:	e1a01004 	mov	r1, r4
         2560c:	eb6f033e 	bl	1be630c <TAppWorld::$AERemoveHandler(TAEventHandler *)>
         25610:	e3150001 	tst	r5, #1	; 0x1
         25614:	11a00004 	movne	r0, r4
         25618:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         2561c:	1a6ea02f 	bne	1bcd6e0 <$__dl(void *)>
         25620:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         25624:	0001d42c 	andeq	sp, r1, ip, lsr #8
    */
}

/**
 * Symbol: TAEventHandler::Init(unsigned long, unsigned long)
 * Address: 00025628
 */
NewtonErr		TAEventHandler::Init(AEEventID eventID, AEEventClass eventClass = kNewtEventClass) {
    /*
         25628:	e1a0c00d 	mov	ip, sp
         2562c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25630:	e24cb004 	sub	fp, ip, #4	; 0x4
         25634:	e1a04000 	mov	r4, r0
         25638:	e580100c 	str	r1, [r0, #12]	; TAEventHandler
         2563c:	e5802008 	str	r2, [r0, #8]	; TAEventHandler
         25640:	eb6eb8e3 	bl	1bd39d4 <$GetGlobals>
         25644:	e1a01004 	mov	r1, r4
         25648:	eb6f032d 	bl	1be6304 <TAppWorld::$AEInstallHandler(TAEventHandler *)>
         2564c:	e3a00000 	mov	r0, #0	; 0x0
         25650:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::DeferReply(void)
 * Address: 00025654
 */
void			TAEventHandler::DeferReply(void);											// Defer reply to message we just received. {
    /*
         25654:	e1a0c00d 	mov	ip, sp
         25658:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         2565c:	e24cb004 	sub	fp, ip, #4	; 0x4
         25660:	eb6eb8db 	bl	1bd39d4 <$GetGlobals>
         25664:	e91b6800 	ldmdb	fp, {fp, sp, lr}
         25668:	ea6eff1c 	b	1be52e0 <TAppWorld::$AEDeferReply(void)>
    */
}

/**
 * Symbol: TAEventHandler::SetReply(unsigned long, TAEvent *)
 * Address: 0002566c
 */
void			TAEventHandler::SetReply(TUMsgToken* token, ULong size, TAEvent* event);	// Set all the reply parameters {
    /*
         2566c:	e1a0c00d 	mov	ip, sp
         25670:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         25674:	e24cb004 	sub	fp, ip, #4	; 0x4
         25678:	e1a04001 	mov	r4, r1
         2567c:	e1a05002 	mov	r5, r2
         25680:	eb6eb8d3 	bl	1bd39d4 <$GetGlobals>
         25684:	e1a02005 	mov	r2, r5
         25688:	e1a01004 	mov	r1, r4
         2568c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         25690:	ea6f0323 	b	1be6324 <TAppWorld::$AESetReply(unsigned long, TAEvent *)>
    */
}

/**
 * Symbol: TAEventHandler::SetReply(TUMsgToken *)
 * Address: 00025694
 */
void			TAEventHandler::SetReply(TUMsgToken* token, ULong size, TAEvent* event);	// Set all the reply parameters {
    /*
         25694:	e1a0c00d 	mov	ip, sp
         25698:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         2569c:	e24cb004 	sub	fp, ip, #4	; 0x4
         256a0:	e1a04001 	mov	r4, r1
         256a4:	eb6eb8ca 	bl	1bd39d4 <$GetGlobals>
         256a8:	e1a01004 	mov	r1, r4
         256ac:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         256b0:	ea6f0318 	b	1be6318 <TAppWorld::$AESetReply(TUMsgToken *)>
    */
}

/**
 * Symbol: TAEventHandler::SetReply(TUMsgToken *, unsigned long, TAEvent *)
 * Address: 000256b8
 */
void			TAEventHandler::SetReply(TUMsgToken* token, ULong size, TAEvent* event);	// Set all the reply parameters {
    /*
         256b8:	e1a0c00d 	mov	ip, sp
         256bc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         256c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         256c4:	e1a05001 	mov	r5, r1
         256c8:	e1a04002 	mov	r4, r2
         256cc:	e1a06003 	mov	r6, r3
         256d0:	eb6eb8bf 	bl	1bd39d4 <$GetGlobals>
         256d4:	e1a03006 	mov	r3, r6
         256d8:	e1a02004 	mov	r2, r4
         256dc:	e1a01005 	mov	r1, r5
         256e0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         256e4:	ea6f030c 	b	1be631c <TAppWorld::$AESetReply(TUMsgToken *, unsigned long, TAEvent *)>
    */
}

/**
 * Symbol: TAEventHandler::ReplyImmed(void)
 * Address: 000256e8
 */
NewtonErr		TAEventHandler::ReplyImmed(void);											// Do an immediate reply. {
    /*
         256e8:	e1a0c00d 	mov	ip, sp
         256ec:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         256f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         256f4:	eb6eb8b6 	bl	1bd39d4 <$GetGlobals>
         256f8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
         256fc:	ea6f0304 	b	1be6314 <TAppWorld::$AEReplyImmed(void)>
    */
}

/**
 * Symbol: TAEventHandler::AddHandler(TAEventHandler *)
 * Address: 00025700
 */
TAEventHandler::AddHandler(TAEventHandler *) {
    /*
         25700:	e5801004 	str	r1, [r0, #4]	; TAEventHandler
         25704:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEventHandler::RemoveHandler(TAEventHandler *)
 * Address: 00025708
 */
TAEventHandler::RemoveHandler(TAEventHandler *) {
    /*
         25708:	e1a0c00d 	mov	ip, sp
         2570c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         25710:	e24cb004 	sub	fp, ip, #4	; 0x4
         25714:	e1a04000 	mov	r4, r0
         25718:	e1a05001 	mov	r5, r1
         2571c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         25720:	e1a0000d 	mov	r0, sp
         25724:	eb6efabd 	bl	1be4220 <TAEHandlerIterator::$__ct(TAEventHandler *)>
         25728:	e1a0000d 	mov	r0, sp
         2572c:	eb6f1bd0 	bl	1bec674 <TAEHandlerIterator::$Reset(void)>
         25730:	e59d0000 	ldr	r0, [sp]
         25734:	e1300004 	teq	r0, r4
         25738:	05b40004 	ldreq	r0, [r4, #4]!	; TAEventHandler
         2573c:	0a00000e 	beq	2577c <TAEventHandler::RemoveHandler(TAEventHandler *)+0x74>
         25740:	e59d1004 	ldr	r1, [sp, #4]	; TAEventHandler
         25744:	e3310000 	teq	r1, #0	; 0x0
         25748:	0a00000a 	beq	25778 <TAEventHandler::RemoveHandler(TAEventHandler *)+0x70>
         2574c:	e5901004 	ldr	r1, [r0, #4]	; TAEventHandler
         25750:	e1310004 	teq	r1, r4
         25754:	05901004 	ldreq	r1, [r0, #4]	; TAEventHandler
         25758:	05911004 	ldreq	r1, [r1, #4]	; TAEventHandler
         2575c:	05a01004 	streq	r1, [r0, #4]!	; TAEventHandler
         25760:	0a000004 	beq	25778 <TAEventHandler::RemoveHandler(TAEventHandler *)+0x70>
         25764:	e1a0000d 	mov	r0, sp
         25768:	eb6efeda 	bl	1be52d8 <TAEHandlerIterator::$Advance(void)>
         2576c:	e59d0004 	ldr	r0, [sp, #4]	; TAEventHandler
         25770:	e3300000 	teq	r0, #0	; 0x0
         25774:	1afffff4 	bne	2574c <TAEventHandler::RemoveHandler(TAEventHandler *)+0x44>
         25778:	e1a00005 	mov	r0, r5
         2577c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::AEDoEvent(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00025780
 */
TAEventHandler::AEDoEvent(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         25780:	e1a0c00d 	mov	ip, sp
         25784:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         25788:	e24cb004 	sub	fp, ip, #4	; 0x4
         2578c:	e1a04000 	mov	r4, r0
         25790:	e1a07001 	mov	r7, r1
         25794:	e1a06002 	mov	r6, r2
         25798:	e1a05003 	mov	r5, r3
         2579c:	e3a08000 	mov	r8, #0	; 0x0
         257a0:	e1a01003 	mov	r1, r3
         257a4:	e5902000 	ldr	r2, [r0]
         257a8:	e1a0e00f 	mov	lr, pc
         257ac:	e282f004 	add	pc, r2, #4	; 0x4
         257b0:	e3300000 	teq	r0, #0	; 0x0
         257b4:	0a000007 	beq	257d8 <TAEventHandler::AEDoEvent(TUMsgToken *, unsigned long *, TAEvent *)+0x58>
         257b8:	e1a03005 	mov	r3, r5
         257bc:	e1a02006 	mov	r2, r6
         257c0:	e1a01007 	mov	r1, r7
         257c4:	e1a00004 	mov	r0, r4
         257c8:	e594c000 	ldr	ip, [r4]
         257cc:	e1a0e00f 	mov	lr, pc
         257d0:	e28cf008 	add	pc, ip, #8	; 0x8
         257d4:	ea000009 	b	25800 <TAEventHandler::AEDoEvent(TUMsgToken *, unsigned long *, TAEvent *)+0x80>
         257d8:	e5b40004 	ldr	r0, [r4, #4]!	; TAEventHandler
         257dc:	e3300000 	teq	r0, #0	; 0x0
         257e0:	0a000004 	beq	257f8 <TAEventHandler::AEDoEvent(TUMsgToken *, unsigned long *, TAEvent *)+0x78>
         257e4:	e1a03005 	mov	r3, r5
         257e8:	e1a02006 	mov	r2, r6
         257ec:	e1a01007 	mov	r1, r7
         257f0:	eb6dee31 	bl	1ba10bc <TAEventHandler::$AEDoEvent(TUMsgToken *, unsigned long *, TAEvent *)>
         257f4:	ea000001 	b	25800 <TAEventHandler::AEDoEvent(TUMsgToken *, unsigned long *, TAEvent *)+0x80>
         257f8:	e3a080ec 	mov	r8, #236	; 0xec
         257fc:	e2488b0e 	sub	r8, r8, #14336	; 0x3800
         25800:	e1a00008 	mov	r0, r8
         25804:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::AEDoComplete(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00025808
 */
TAEventHandler::AEDoComplete(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         25808:	e1a0c00d 	mov	ip, sp
         2580c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         25810:	e24cb004 	sub	fp, ip, #4	; 0x4
         25814:	e1a04000 	mov	r4, r0
         25818:	e1a07001 	mov	r7, r1
         2581c:	e1a06002 	mov	r6, r2
         25820:	e1a05003 	mov	r5, r3
         25824:	e1a01003 	mov	r1, r3
         25828:	e5902000 	ldr	r2, [r0]
         2582c:	e1a0e00f 	mov	lr, pc
         25830:	e282f004 	add	pc, r2, #4	; 0x4
         25834:	e3300000 	teq	r0, #0	; 0x0
         25838:	0a000006 	beq	25858 <TAEventHandler::AEDoComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x50>
         2583c:	e1a03005 	mov	r3, r5
         25840:	e1a02006 	mov	r2, r6
         25844:	e1a01007 	mov	r1, r7
         25848:	e1a00004 	mov	r0, r4
         2584c:	e594c000 	ldr	ip, [r4]
         25850:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         25854:	e28cf00c 	add	pc, ip, #12	; 0xc
         25858:	e5b40004 	ldr	r0, [r4, #4]!	; TAEventHandler
         2585c:	e3300000 	teq	r0, #0	; 0x0
         25860:	11a03005 	movne	r3, r5
         25864:	11a02006 	movne	r2, r6
         25868:	11a01007 	movne	r1, r7
         2586c:	1affffe8 	bne	25814 <TAEventHandler::AEDoComplete(TUMsgToken *, unsigned long *, TAEvent *)+0xc>
         25870:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00025874
 */
void	TAEventHandler::AEHandlerProc(TUMsgToken* token, ULong* size, TAEvent* event) {
    /*
         25874:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00025878
 */
void	TAEventHandler::AECompletionProc(TUMsgToken* token, ULong* size, TAEvent* event) {
    /*
         25878:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0002587c
 */
void	TAEventHandler::IdleProc(TUMsgToken* token, ULong* size, TAEvent* event) {
    /*
         2587c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEventHandler::AETestEvent(TAEvent *)
 * Address: 00025880
 */
Boolean	TAEventHandler::AETestEvent(TAEvent* event);		// User supplied test of event - true if event is for this handler {
    /*
         25880:	e3a00001 	mov	r0, #1	; 0x1
         25884:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEventHandler::InitIdler(unsigned long, TimeUnits, unsigned long, unsigned char)
 * Address: 0002588c
 */
NewtonErr		TAEventHandler::InitIdler(ULong idleAmount, TimeUnits idleUnits, ULong refCon = 0,  Boolean start = true) {
    /*
         2588c:	e1a0c002 	mov	ip, r2
         25890:	e1a02003 	mov	r2, r3
         25894:	e59d3000 	ldr	r3, [sp]
         25898:	e20330ff 	and	r3, r3, #255	; 0xff
         2589c:	e001019c 	mul	r1, ip, r1
         258a0:	ea6e1f8b 	b	1bad6d4 <TAEventHandler::$InitIdler(unsigned long, unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TAEventHandler::InitIdler(unsigned long, unsigned long, unsigned char)
 * Address: 000258a4
 */
NewtonErr		TAEventHandler::InitIdler(ULong idleAmount, TimeUnits idleUnits, ULong refCon = 0,  Boolean start = true) {
    /*
         258a4:	e1a0c00d 	mov	ip, sp
         258a8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         258ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         258b0:	e1a04000 	mov	r4, r0
         258b4:	e1a05002 	mov	r5, r2
         258b8:	e20370ff 	and	r7, r3, #255	; 0xff
         258bc:	e3a06000 	mov	r6, #0	; 0x0
         258c0:	e1a03001 	mov	r3, r1
         258c4:	e92d0008 	stmdb	sp!, {r3}
         258c8:	eb6eb841 	bl	1bd39d4 <$GetGlobals>
         258cc:	e1a03004 	mov	r3, r4
         258d0:	e1a02005 	mov	r2, r5
         258d4:	e5b01064 	ldr	r1, [r0, #100]!
         258d8:	e3a00000 	mov	r0, #0	; 0x0
         258dc:	eb6e2bcf 	bl	1bb0820 <TAEIdleTimer::$__ct(TTimerQueue *, unsigned long, TAEventHandler *, unsigned long)>
         258e0:	e28dd004 	add	sp, sp, #4	; 0x4
         258e4:	e5a40010 	str	r0, [r4, #16]!	; fField16
         258e8:	e3300000 	teq	r0, #0	; 0x0
         258ec:	1a000002 	bne	258fc <TAEventHandler::InitIdler(unsigned long, unsigned long, unsigned char)+0x58>
         258f0:	eb6ef20a 	bl	1be2120 <$MemError>
         258f4:	e1a06000 	mov	r6, r0
         258f8:	ea000005 	b	25914 <TAEventHandler::InitIdler(unsigned long, unsigned long, unsigned char)+0x70>
         258fc:	e3370000 	teq	r7, #0	; 0x0
         25900:	0a000003 	beq	25914 <TAEventHandler::InitIdler(unsigned long, unsigned long, unsigned char)+0x70>
         25904:	e590101c 	ldr	r1, [r0, #28]	; fField28
         25908:	eb6e2388 	bl	1bae730 <TTimerElement::$Prime(unsigned long)>
         2590c:	e3300000 	teq	r0, #0	; 0x0
         25910:	03e06000 	mvneq	r6, #0	; 0x0
         25914:	e1a00006 	mov	r0, r6
         25918:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::StartIdle(void)
 * Address: 0002591c
 */
NewtonErr		TAEventHandler::StartIdle(void);			// start the timer {
    /*
         2591c:	e1a0c00d 	mov	ip, sp
         25920:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25924:	e24cb004 	sub	fp, ip, #4	; 0x4
         25928:	e3e04000 	mvn	r4, #0	; 0x0
         2592c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         25930:	e3300000 	teq	r0, #0	; 0x0
         25934:	0a000003 	beq	25948 <TAEventHandler::StartIdle(void)+0x2c>
         25938:	e590101c 	ldr	r1, [r0, #28]	; fField28
         2593c:	eb6e237b 	bl	1bae730 <TTimerElement::$Prime(unsigned long)>
         25940:	e3300000 	teq	r0, #0	; 0x0
         25944:	13a04000 	movne	r4, #0	; 0x0
         25948:	e1a00004 	mov	r0, r4
         2594c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::StopIdle(void)
 * Address: 00025950
 */
NewtonErr		TAEventHandler::StopIdle(void);				// stop the timer {
    /*
         25950:	e1a0c00d 	mov	ip, sp
         25954:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25958:	e24cb004 	sub	fp, ip, #4	; 0x4
         2595c:	e3e04000 	mvn	r4, #0	; 0x0
         25960:	e5900010 	ldr	r0, [r0, #16]	; fField16
         25964:	e3300000 	teq	r0, #0	; 0x0
         25968:	0a000002 	beq	25978 <TAEventHandler::StopIdle(void)+0x28>
         2596c:	eb6e1b29 	bl	1bac618 <TTimerElement::$Cancel(void)>
         25970:	e3300000 	teq	r0, #0	; 0x0
         25974:	13a04000 	movne	r4, #0	; 0x0
         25978:	e1a00004 	mov	r0, r4
         2597c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::ResetIdle(void)
 * Address: 00025980
 */
NewtonErr		TAEventHandler::ResetIdle(TTimeout idle);					// stop the timer if running, and setup new values, start again {
    /*
         25980:	e1a0c00d 	mov	ip, sp
         25984:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         25988:	e24cb004 	sub	fp, ip, #4	; 0x4
         2598c:	e3e04000 	mvn	r4, #0	; 0x0
         25990:	e5900010 	ldr	r0, [r0, #16]	; fField16
         25994:	e3300000 	teq	r0, #0	; 0x0
         25998:	0a000003 	beq	259ac <TAEventHandler::ResetIdle(void)+0x2c>
         2599c:	e590101c 	ldr	r1, [r0, #28]	; fField28
         259a0:	eb6e2362 	bl	1bae730 <TTimerElement::$Prime(unsigned long)>
         259a4:	e3300000 	teq	r0, #0	; 0x0
         259a8:	13a04000 	movne	r4, #0	; 0x0
         259ac:	e1a00004 	mov	r0, r4
         259b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::ResetIdle(unsigned long)
 * Address: 000259b4
 */
NewtonErr		TAEventHandler::ResetIdle(TTimeout idle);					// stop the timer if running, and setup new values, start again {
    /*
         259b4:	e1a0c00d 	mov	ip, sp
         259b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         259bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         259c0:	e3e04000 	mvn	r4, #0	; 0x0
         259c4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         259c8:	e3300000 	teq	r0, #0	; 0x0
         259cc:	0a000002 	beq	259dc <TAEventHandler::ResetIdle(unsigned long)+0x28>
         259d0:	eb6e2356 	bl	1bae730 <TTimerElement::$Prime(unsigned long)>
         259d4:	e3300000 	teq	r0, #0	; 0x0
         259d8:	13a04000 	movne	r4, #0	; 0x0
         259dc:	e1a00004 	mov	r0, r4
         259e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::ResetIdle(unsigned long, TimeUnits)
 * Address: 000259e4
 */
NewtonErr		TAEventHandler::ResetIdle(TTimeout idle);					// stop the timer if running, and setup new values, start again {
    /*
         259e4:	e1a0c00d 	mov	ip, sp
         259e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         259ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         259f0:	e0010192 	mul	r1, r2, r1
         259f4:	eb6e235b 	bl	1bae768 <TAEventHandler::$ResetIdle(unsigned long)>
         259f8:	e1a04000 	mov	r4, r0
         259fc:	eb6eb7f4 	bl	1bd39d4 <$GetGlobals>
         25a00:	eb6f0a8d 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         25a04:	e3a02002 	mov	r2, #2	; 0x2
         25a08:	e3a01000 	mov	r1, #0	; 0x0
         25a0c:	eb6bc85e 	bl	1b17b8c <TUPort::$Reset(unsigned long, unsigned long)>
         25a10:	e1a00004 	mov	r0, r4
         25a14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAEventHandler::GetNextHandler(void)
 * Address: 00025a18
 */
TAEventHandler::GetNextHandler(void) {
    /*
         25a18:	e5900004 	ldr	r0, [r0, #4]	; TAEventHandler
         25a1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAEventHandler::ResetIdle(unsigned long, TimeUnits, TUPort *)
 * Address: 00025cd0
 */
NewtonErr		TAEventHandler::ResetIdle(TTimeout idle);					// stop the timer if running, and setup new values, start again {
    /*
         25cd0:	e1a0f00e 	mov	pc, lr
    */
}

