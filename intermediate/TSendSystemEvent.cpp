#include "DDKIncludes/OS600/SystemEvents.h"

/**
 * Symbol: TSendSystemEvent::Init(void)
 * Address: 001313f4
 */
NewtonErr	TSendSystemEvent::Init() {
    /*
        1313f4:	e280000c 	add	r0, r0, #12	; 0xc
        1313f8:	ea6a91a6 	b	1bd5a98 <TUSharedMemMsg::$Init(void)>
    */
}

/**
 * Symbol: TSendSystemEvent::SendSystemEvent(void *, unsigned long)
 * Address: 0013152c
 */
NewtonErr	TSendSystemEvent::SendSystemEvent(TUAsyncMessage* asyncMessage, void* message, ULong messageSize, void* reply, ULong replySize) {
    /*
        13152c:	e1a0c00d 	mov	ip, sp
        131530:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        131534:	e24cb004 	sub	fp, ip, #4	; 0x4
        131538:	e1a04000 	mov	r4, r0
        13153c:	e1a06001 	mov	r6, r1
        131540:	e1a05002 	mov	r5, r2
        131544:	e24dd018 	sub	sp, sp, #24	; 0x18
        131548:	e28d0004 	add	r0, sp, #4	; 0x4
        13154c:	eb679158 	bl	1b15ab4 <TSysEventRequest::$__ct(void)>
        131550:	e284000c 	add	r0, r4, #12	; 0xc
        131554:	e1a07000 	mov	r7, r0
        131558:	e1a02005 	mov	r2, r5
        13155c:	e1a01006 	mov	r1, r6
        131560:	e3a03001 	mov	r3, #1	; 0x1
        131564:	eb6aa600 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        131568:	e3300000 	teq	r0, #0	; 0x0
        13156c:	1a000018 	bne	1315d4 <TSendSystemEvent::SendSystemEvent(void *, unsigned long)+0xa8>
        131570:	e3a00009 	mov	r0, #9	; 0x9
        131574:	e58d0004 	str	r0, [sp, #4]	; fNameServerPort
        131578:	e5940008 	ldr	r0, [r4, #8]	; fField8
        13157c:	e58d0008 	str	r0, [sp, #8]	; fField8
        131580:	e5970000 	ldr	r0, [r7]
        131584:	e58d000c 	str	r0, [sp, #12]	; fEvent
        131588:	e3a00000 	mov	r0, #0	; 0x0
        13158c:	e3a01000 	mov	r1, #0	; 0x0
        131590:	e3a02000 	mov	r2, #0	; 0x0
        131594:	e3a0c001 	mov	ip, #1	; 0x1
        131598:	e3a0e000 	mov	lr, #0	; 0x0
        13159c:	e3a03000 	mov	r3, #0	; 0x0
        1315a0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1315a4:	e1a0300e 	mov	r3, lr
        1315a8:	e1a0100c 	mov	r1, ip
        1315ac:	e3a00014 	mov	r0, #20	; 0x14
        1315b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1315b4:	e28d3024 	add	r3, sp, #36	; 0x24
        1315b8:	e92d0008 	stmdb	sp!, {r3}
        1315bc:	e28d3024 	add	r3, sp, #36	; 0x24
        1315c0:	e1a00004 	mov	r0, r4
        1315c4:	e3a02002 	mov	r2, #2	; 0x2
        1315c8:	e3a01001 	mov	r1, #1	; 0x1
        1315cc:	eb6aa5de 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1315d0:	e28dd024 	add	sp, sp, #36	; 0x24
        1315d4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSendSystemEvent::SendSystemEvent(TUAsyncMessage *, void *, unsigned long, void *, unsigned long)
 * Address: 001315d8
 */
NewtonErr	TSendSystemEvent::SendSystemEvent(TUAsyncMessage* asyncMessage, void* message, ULong messageSize, void* reply, ULong replySize) {
    /*
        1315d8:	e1a0c00d 	mov	ip, sp
        1315dc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1315e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1315e4:	e1a04000 	mov	r4, r0
        1315e8:	e1a07001 	mov	r7, r1
        1315ec:	e1a06002 	mov	r6, r2
        1315f0:	e1a05003 	mov	r5, r3
        1315f4:	e59b0008 	ldr	r0, [fp, #8]	; fField8
        1315f8:	e59ba004 	ldr	sl, [fp, #4]	; fNameServerPort
        1315fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        131600:	e3720001 	cmn	r2, #1	; 0x1
        131604:	03a000ea 	moveq	r0, #234	; 0xea
        131608:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        13160c:	0a000044 	beq	131724 <TSendSystemEvent::SendSystemEvent(TUAsyncMessage *, void *, unsigned long, void *, unsigned long)+0x14c>
        131610:	e2879008 	add	r9, r7, #8	; 0x8
        131614:	e37a0001 	cmn	sl, #1	; 0x1
        131618:	0a00001e 	beq	131698 <TSendSystemEvent::SendSystemEvent(TUAsyncMessage *, void *, unsigned long, void *, unsigned long)+0xc0>
        13161c:	e1550000 	cmp	r5, r0
        131620:	21a08000 	movcs	r8, r0
        131624:	31a08005 	movcc	r8, r5
        131628:	e24dd00c 	sub	sp, sp, #12	; 0xc
        13162c:	e3a01000 	mov	r1, #0	; 0x0
        131630:	e5990000 	ldr	r0, [r9]
        131634:	e5cd1008 	strb	r1, [sp, #8]	; fField8
        131638:	e58d0004 	str	r0, [sp, #4]	; fNameServerPort
        13163c:	e28d0004 	add	r0, sp, #4	; 0x4
        131640:	e1a02008 	mov	r2, r8
        131644:	e1a0100a 	mov	r1, sl
        131648:	e3a03000 	mov	r3, #0	; 0x0
        13164c:	eb6aa5c6 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        131650:	e58d000c 	str	r0, [sp, #12]	; fEvent
        131654:	e3300000 	teq	r0, #0	; 0x0
        131658:	13a00001 	movne	r0, #1	; 0x1
        13165c:	e58d0000 	str	r0, [sp]
        131660:	e28d0004 	add	r0, sp, #4	; 0x4
        131664:	e3a01000 	mov	r1, #0	; 0x0
        131668:	eb6a742d 	bl	1bce724 <TUObject::$__dt(void)>
        13166c:	e49d0004 	ldr	r0, [sp], #4	; fNameServerPort
        131670:	e3300000 	teq	r0, #0	; 0x0
        131674:	159d0008 	ldrne	r0, [sp, #8]	; fField8
        131678:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13167c:	e3580000 	cmp	r8, #0	; 0x0
        131680:	9a000003 	bls	131694 <TSendSystemEvent::SendSystemEvent(TUAsyncMessage *, void *, unsigned long, void *, unsigned long)+0xbc>
        131684:	e1a02008 	mov	r2, r8
        131688:	e1a0100a 	mov	r1, sl
        13168c:	e1a00006 	mov	r0, r6
        131690:	eb6ab62f 	bl	1bdef54 <$BlockMove>
        131694:	e28dd008 	add	sp, sp, #8	; 0x8
        131698:	e284000c 	add	r0, r4, #12	; 0xc
        13169c:	e1a08000 	mov	r8, r0
        1316a0:	e1a02005 	mov	r2, r5
        1316a4:	e1a01006 	mov	r1, r6
        1316a8:	e3a03001 	mov	r3, #1	; 0x1
        1316ac:	eb6aa5ae 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        1316b0:	e3300000 	teq	r0, #0	; 0x0
        1316b4:	1a00001a 	bne	131724 <TSendSystemEvent::SendSystemEvent(TUAsyncMessage *, void *, unsigned long, void *, unsigned long)+0x14c>
        1316b8:	e3a00009 	mov	r0, #9	; 0x9
        1316bc:	e5840014 	str	r0, [r4, #20]	; fMsgToNameServer
        1316c0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1316c4:	e5840018 	str	r0, [r4, #24]	; TSendSystemEvent
        1316c8:	e5980000 	ldr	r0, [r8]
        1316cc:	e584001c 	str	r0, [r4, #28]	; fField28
        1316d0:	e284e014 	add	lr, r4, #20	; 0x14
        1316d4:	e3a00000 	mov	r0, #0	; 0x0
        1316d8:	e3a01000 	mov	r1, #0	; 0x0
        1316dc:	e3a02000 	mov	r2, #0	; 0x0
        1316e0:	e3a03000 	mov	r3, #0	; 0x0
        1316e4:	e3a0c001 	mov	ip, #1	; 0x1
        1316e8:	e3a05000 	mov	r5, #0	; 0x0
        1316ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1316f0:	e1a03005 	mov	r3, r5
        1316f4:	e3a02001 	mov	r2, #1	; 0x1
        1316f8:	e1a0100c 	mov	r1, ip
        1316fc:	e3a00014 	mov	r0, #20	; 0x14
        131700:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        131704:	e1a0300e 	mov	r3, lr
        131708:	e92d0008 	stmdb	sp!, {r3}
        13170c:	e5992000 	ldr	r2, [r9]
        131710:	e1a00004 	mov	r0, r4
        131714:	e3a03000 	mov	r3, #0	; 0x0
        131718:	e5971000 	ldr	r1, [r7]
        13171c:	eb6aa58a 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        131720:	e28dd024 	add	sp, sp, #36	; 0x24
        131724:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

