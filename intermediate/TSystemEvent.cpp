#include "DDKIncludes/OS600/SystemEvents.h"

/**
 * Symbol: TSystemEvent::__ct(unsigned long)
 * Address: 001313a0
 */
TSystemEvent::TSystemEvent(unsigned long) {
    /*
        1313a0:	e1a0c00d 	mov	ip, sp
        1313a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1313a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1313ac:	e1b04000 	movs	r4, r0
        1313b0:	e1a05001 	mov	r5, r1
        1313b4:	1a000003 	bne	1313c8 <TSystemEvent::__ct(unsigned long)+0x28>
        1313b8:	e3a0000c 	mov	r0, #12	; 0xc
        1313bc:	eb6a74dd 	bl	1bce738 <$__nw(unsigned int)>
        1313c0:	e1b04000 	movs	r4, r0
        1313c4:	0a000008 	beq	1313ec <TSystemEvent::__ct(unsigned long)+0x4c>
        1313c8:	e3a00000 	mov	r0, #0	; 0x0
        1313cc:	e5c40004 	strb	r0, [r4, #4]
        1313d0:	e5840000 	str	r0, [r4]
        1313d4:	e3a00002 	mov	r0, #2	; 0x2
        1313d8:	e5845008 	str	r5, [r4, #8]	; fField8
        1313dc:	eb09f362 	bl	3ae16c <GetPortSWI>
        1313e0:	e1a01000 	mov	r1, r0
        1313e4:	e1a00004 	mov	r0, r4
        1313e8:	eb6a7d16 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1313ec:	e1a00004 	mov	r0, r4
        1313f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSystemEvent::SetEvent(unsigned long)
 * Address: 001313fc
 */
TSystemEvent::SetEvent(unsigned long) {
    /*
        1313fc:	e5a01008 	str	r1, [r0, #8]!	; fField8
        131400:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSystemEvent::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long)
 * Address: 00131404
 */
TSystemEvent::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long) {
    /*
        131404:	e1a0c00d 	mov	ip, sp
        131408:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13140c:	e24cb004 	sub	fp, ip, #4	; 0x4
        131410:	e1a04000 	mov	r4, r0
        131414:	e1a06001 	mov	r6, r1
        131418:	e1a07002 	mov	r7, r2
        13141c:	e1a05003 	mov	r5, r3
        131420:	e24dd020 	sub	sp, sp, #32	; 0x20
        131424:	e28d000c 	add	r0, sp, #12	; 0xc
        131428:	eb6791a1 	bl	1b15ab4 <TSysEventRequest::$__ct(void)>
        13142c:	e1a0000d 	mov	r0, sp
        131430:	eb678547 	bl	1b12954 <TNameServerReply::$__ct(void)>
        131434:	e3a00007 	mov	r0, #7	; 0x7
        131438:	e58d000c 	str	r0, [sp, #12]
        13143c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        131440:	e58d5018 	str	r5, [sp, #24]
        131444:	e58d701c 	str	r7, [sp, #28]
        131448:	e58d0010 	str	r0, [sp, #16]
        13144c:	e58d6014 	str	r6, [sp, #20]
        131450:	e24dd004 	sub	sp, sp, #4	; 0x4
        131454:	e28d0004 	add	r0, sp, #4	; 0x4
        131458:	e3a0100c 	mov	r1, #12	; 0xc
        13145c:	e3a02000 	mov	r2, #0	; 0x0
        131460:	e3a0c000 	mov	ip, #0	; 0x0
        131464:	e3a0e000 	mov	lr, #0	; 0x0
        131468:	e3a03000 	mov	r3, #0	; 0x0
        13146c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        131470:	e1a0300e 	mov	r3, lr
        131474:	e1a0100c 	mov	r1, ip
        131478:	e3a00014 	mov	r0, #20	; 0x14
        13147c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        131480:	e28d3030 	add	r3, sp, #48	; 0x30
        131484:	e92d0008 	stmdb	sp!, {r3}
        131488:	e28d3024 	add	r3, sp, #36	; 0x24
        13148c:	e1a00004 	mov	r0, r4
        131490:	e3a02002 	mov	r2, #2	; 0x2
        131494:	e3a01001 	mov	r1, #1	; 0x1
        131498:	eb6aa62b 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        13149c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSystemEvent::UnRegisterForSystemEvent(unsigned long)
 * Address: 001314a0
 */
TSystemEvent::UnRegisterForSystemEvent(unsigned long) {
    /*
        1314a0:	e1a0c00d 	mov	ip, sp
        1314a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1314a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1314ac:	e1a04000 	mov	r4, r0
        1314b0:	e1a05001 	mov	r5, r1
        1314b4:	e24dd020 	sub	sp, sp, #32	; 0x20
        1314b8:	e28d000c 	add	r0, sp, #12	; 0xc
        1314bc:	eb67917c 	bl	1b15ab4 <TSysEventRequest::$__ct(void)>
        1314c0:	e1a0000d 	mov	r0, sp
        1314c4:	eb678522 	bl	1b12954 <TNameServerReply::$__ct(void)>
        1314c8:	e3a00008 	mov	r0, #8	; 0x8
        1314cc:	e58d000c 	str	r0, [sp, #12]
        1314d0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1314d4:	e58d0010 	str	r0, [sp, #16]
        1314d8:	e58d5014 	str	r5, [sp, #20]
        1314dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1314e0:	e28d0004 	add	r0, sp, #4	; 0x4
        1314e4:	e3a0100c 	mov	r1, #12	; 0xc
        1314e8:	e3a02000 	mov	r2, #0	; 0x0
        1314ec:	e3a0c000 	mov	ip, #0	; 0x0
        1314f0:	e3a0e000 	mov	lr, #0	; 0x0
        1314f4:	e3a03000 	mov	r3, #0	; 0x0
        1314f8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1314fc:	e1a0300e 	mov	r3, lr
        131500:	e1a0100c 	mov	r1, ip
        131504:	e3a00014 	mov	r0, #20	; 0x14
        131508:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13150c:	e28d3030 	add	r3, sp, #48	; 0x30
        131510:	e92d0008 	stmdb	sp!, {r3}
        131514:	e28d3024 	add	r3, sp, #36	; 0x24
        131518:	e1a00004 	mov	r0, r4
        13151c:	e3a02002 	mov	r2, #2	; 0x2
        131520:	e3a01001 	mov	r1, #1	; 0x1
        131524:	eb6aa608 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        131528:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

