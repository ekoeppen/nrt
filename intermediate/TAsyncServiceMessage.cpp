#include "DDKIncludes/CommAPI/CMService.h"

/**
 * Symbol: TAsyncServiceMessage::__ct(void)
 * Address: 00049448
 */
TAsyncServiceMessage::TAsyncServiceMessage() {
    /*
         49448:	e1a0c00d 	mov	ip, sp
         4944c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         49450:	e24cb004 	sub	fp, ip, #4	; 0x4
         49454:	e1b04000 	movs	r4, r0
         49458:	1a000003 	bne	4946c <TAsyncServiceMessage::__ct(void)+0x24>
         4945c:	e3a0001c 	mov	r0, #28	; 0x1c
         49460:	eb6e14b4 	bl	1bce738 <$__nw(unsigned int)>
         49464:	e1b04000 	movs	r4, r0
         49468:	0a000005 	beq	49484 <TAsyncServiceMessage::__ct(void)+0x3c>
         4946c:	e2840004 	add	r0, r4, #4	; 0x4
         49470:	eb6e108d 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         49474:	e3a00000 	mov	r0, #0	; 0x0
         49478:	e5840000 	str	r0, [r4]
         4947c:	e5840014 	str	r0, [r4, #20]	; fService
         49480:	e5840018 	str	r0, [r4, #24]	; fField24
         49484:	e1a00004 	mov	r0, r4
         49488:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncServiceMessage::__dt(void)
 * Address: 0004948c
 */
TAsyncServiceMessage::~TAsyncServiceMessage() {
    /*
         4948c:	e1a0c00d 	mov	ip, sp
         49490:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         49494:	e24cb004 	sub	fp, ip, #4	; 0x4
         49498:	e1a04000 	mov	r4, r0
         4949c:	e1a05001 	mov	r5, r1
         494a0:	e5900014 	ldr	r0, [r0, #20]	; fService
         494a4:	e3300000 	teq	r0, #0	; 0x0
         494a8:	1b6e108c 	blne	1bcd6e0 <$__dl(void *)>
         494ac:	e5940018 	ldr	r0, [r4, #24]	; fField24
         494b0:	e3300000 	teq	r0, #0	; 0x0
         494b4:	1b6e1089 	blne	1bcd6e0 <$__dl(void *)>
         494b8:	eb6e2945 	bl	1bd39d4 <$GetGlobals>
         494bc:	e2800090 	add	r0, r0, #144	; 0x90
         494c0:	e1a01004 	mov	r1, r4
         494c4:	eb6e8c57 	bl	1bec628 <CList::$Remove(void *)>
         494c8:	e2840004 	add	r0, r4, #4	; 0x4
         494cc:	e3a01000 	mov	r1, #0	; 0x0
         494d0:	eb6e148e 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         494d4:	e3150001 	tst	r5, #1	; 0x1
         494d8:	11a00004 	movne	r0, r4
         494dc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         494e0:	1a6e107e 	bne	1bcd6e0 <$__dl(void *)>
         494e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncServiceMessage::Init(TCMService *)
 * Address: 000494e8
 */
NewtonErr		TAsyncServiceMessage::Init(TCMService* service) {
    /*
         494e8:	e1a0c00d 	mov	ip, sp
         494ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         494f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         494f4:	e1a04000 	mov	r4, r0
         494f8:	e1a05001 	mov	r5, r1
         494fc:	e2800004 	add	r0, r0, #4	; 0x4
         49500:	e1a06000 	mov	r6, r0
         49504:	e3a01001 	mov	r1, #1	; 0x1
         49508:	eb6e3161 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         4950c:	eb6e2930 	bl	1bd39d4 <$GetGlobals>
         49510:	eb6e7bc9 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         49514:	e5901000 	ldr	r1, [r0]
         49518:	e1a00006 	mov	r0, r6
         4951c:	eb6e4a1b 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         49520:	eb6e292b 	bl	1bd39d4 <$GetGlobals>
         49524:	e2801070 	add	r1, r0, #112	; 0x70
         49528:	e1a00006 	mov	r0, r6
         4952c:	eb6e4e37 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         49530:	e1a06000 	mov	r6, r0
         49534:	e5845000 	str	r5, [r4]
         49538:	eb6e2925 	bl	1bd39d4 <$GetGlobals>
         4953c:	e1a02004 	mov	r2, r4
         49540:	e5b01090 	ldr	r1, [r0, #144]!
         49544:	eb6e7fe8 	bl	1be94ec <CList::$InsertAt(long, void *)>
         49548:	e1a00006 	mov	r0, r6
         4954c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncServiceMessage::Send(TUPort *, void *, unsigned long, void *, unsigned long, unsigned long)
 * Address: 00049550
 */
NewtonErr		TAsyncServiceMessage::Send(TUPort* destination, void* message, ULong messageSize, void* reply, ULong replySize, ULong messageType = 0) {
    /*
         49550:	e1a0c00d 	mov	ip, sp
         49554:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         49558:	e24cb004 	sub	fp, ip, #4	; 0x4
         4955c:	e1a04001 	mov	r4, r1
         49560:	e1a0c002 	mov	ip, r2
         49564:	e1a0e003 	mov	lr, r3
         49568:	e28b6008 	add	r6, fp, #8	; 0x8
         4956c:	e8960042 	ldmia	r6, {r1, r6}
         49570:	e59b2004 	ldr	r2, [fp, #4]	; fService
         49574:	e5802018 	str	r2, [r0, #24]	; fField24
         49578:	e580c014 	str	ip, [r0, #20]	; fService
         4957c:	e2805004 	add	r5, r0, #4	; 0x4
         49580:	e1a00002 	mov	r0, r2
         49584:	e3a02000 	mov	r2, #0	; 0x0
         49588:	e3a03000 	mov	r3, #0	; 0x0
         4958c:	e3a07000 	mov	r7, #0	; 0x0
         49590:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         49594:	e1a03007 	mov	r3, r7
         49598:	e3a02001 	mov	r2, #1	; 0x1
         4959c:	e1a01006 	mov	r1, r6
         495a0:	e1a0000e 	mov	r0, lr
         495a4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         495a8:	e1a0300c 	mov	r3, ip
         495ac:	e92d0008 	stmdb	sp!, {r3}
         495b0:	e1a00004 	mov	r0, r4
         495b4:	e3a03000 	mov	r3, #0	; 0x0
         495b8:	e4951008 	ldr	r1, [r5], #8	; fAsyncMessage
         495bc:	e5952000 	ldr	r2, [r5]
         495c0:	eb6e45e1 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         495c4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncServiceMessage::Match(TUMsgToken *)
 * Address: 000495c8
 */
Boolean			TAsyncServiceMessage::Match(TUMsgToken* token);		// used internally {
    /*
         495c8:	e5911000 	ldr	r1, [r1]
         495cc:	e5900004 	ldr	r0, [r0, #4]	; fService
         495d0:	e1310000 	teq	r1, r0
         495d4:	13a00000 	movne	r0, #0	; 0x0
         495d8:	03a00001 	moveq	r0, #1	; 0x1
         495dc:	e20000ff 	and	r0, r0, #255	; 0xff
         495e0:	e1a0f00e 	mov	pc, lr
    */
}

