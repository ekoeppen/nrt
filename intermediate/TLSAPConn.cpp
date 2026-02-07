#include "include/TLSAPConn.h"

/**
 * Symbol: TLSAPConn::__ct(void)
 * Address: 000f639c
 */
TLSAPConn::TLSAPConn(void) {
    /*
         f639c:	e1a0c00d 	mov	ip, sp
         f63a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f63a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f63a8:	e1b04000 	movs	r4, r0
         f63ac:	1a000003 	bne	f63c0 <TLSAPConn::__ct(void)+0x24>
         f63b0:	e3a00040 	mov	r0, #64	; 0x40
         f63b4:	eb6b60df 	bl	1bce738 <$__nw(unsigned int)>
         f63b8:	e1b04000 	movs	r4, r0
         f63bc:	0a000009 	beq	f63e8 <TLSAPConn::__ct(void)+0x4c>
         f63c0:	e1a00004 	mov	r0, r4
         f63c4:	eb650604 	bl	1a37bdc <TIrStream::$__ct(void)>
         f63c8:	e59f0020 	ldr	r0, [pc, #20]	; f63f0 <TLSAPConn::__ct(void)+0x54>	; fField20
         f63cc:	e5840000 	str	r0, [r4]
         f63d0:	e3a00000 	mov	r0, #0	; 0x0
         f63d4:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f63d8:	e3a010ff 	mov	r1, #255	; 0xff
         f63dc:	e5840028 	str	r0, [r4, #40]	; fField40
         f63e0:	e5c4103c 	strb	r1, [r4, #60]	; fField60
         f63e4:	e5c4003e 	strb	r0, [r4, #62]	; fField62
         f63e8:	e1a00004 	mov	r0, r4
         f63ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f63f0:	00020da0 	andeq	r0, r2, r0, lsr #27
    */
}

/**
 * Symbol: TLSAPConn::__dt(void)
 * Address: 000f63f4
 */
TLSAPConn::~TLSAPConn(void) {
    /*
         f63f4:	e1a0c00d 	mov	ip, sp
         f63f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f63fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6400:	e1a04000 	mov	r4, r0
         f6404:	e1a05001 	mov	r5, r1
         f6408:	e59f0028 	ldr	r0, [pc, #28]	; f6438 <TLSAPConn::__dt(void)+0x44>	; fField28
         f640c:	e5840000 	str	r0, [r4]
         f6410:	e1a00004 	mov	r0, r4
         f6414:	eb64fdb0 	bl	1a35adc <TLSAPConn::$DeInit(void)>
         f6418:	e1a00004 	mov	r0, r4
         f641c:	e3a01000 	mov	r1, #0	; 0x0
         f6420:	eb6505ee 	bl	1a37be0 <TIrStream::$__dt(void)>
         f6424:	e3150001 	tst	r5, #1	; 0x1
         f6428:	11a00004 	movne	r0, r4
         f642c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f6430:	1a6b5caa 	bne	1bcd6e0 <$__dl(void *)>
         f6434:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f6438:	00020da0 	andeq	r0, r2, r0, lsr #27
    */
}

/**
 * Symbol: TLSAPConn::HandleListenStateEvent(unsigned long)
 * Address: 000f643c
 */
TLSAPConn::HandleListenStateEvent(unsigned long) {
    /*
         f643c:	e1a0c00d 	mov	ip, sp
         f6440:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f6444:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6448:	e1a04000 	mov	r4, r0
         f644c:	e331000c 	teq	r1, #12	; 0xc
         f6450:	0a000011 	beq	f649c <TLSAPConn::HandleListenStateEvent(unsigned long)+0x60>
         f6454:	e331000e 	teq	r1, #14	; 0xe
         f6458:	0a00002f 	beq	f651c <TLSAPConn::HandleListenStateEvent(unsigned long)+0xe0>
         f645c:	e3310017 	teq	r1, #23	; 0x17
         f6460:	0a000037 	beq	f6544 <TLSAPConn::HandleListenStateEvent(unsigned long)+0x108>
         f6464:	e3310018 	teq	r1, #24	; 0x18
         f6468:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         f646c:	e3a00000 	mov	r0, #0	; 0x0
         f6470:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f6474:	e1a00004 	mov	r0, r4
         f6478:	eb64fd89 	bl	1a35aa4 <TLSAPConn::$InternalDisconnectRequest(void)>
         f647c:	e3300000 	teq	r0, #0	; 0x0
         f6480:	15941024 	ldrne	r1, [r4, #36]	; fField36
         f6484:	11a00004 	movne	r0, r4
         f6488:	1a00001c 	bne	f6500 <TLSAPConn::HandleListenStateEvent(unsigned long)+0xc4>
         f648c:	e5b4100c 	ldr	r1, [r4, #12]!	; fField12
         f6490:	e5940014 	ldr	r0, [r4, #20]	; fField20
         f6494:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6498:	ea6505d2 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f649c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f64a0:	e1a02000 	mov	r2, r0
         f64a4:	e5901004 	ldr	r1, [r0, #4]
         f64a8:	e3310000 	teq	r1, #0	; 0x0
         f64ac:	1a000020 	bne	f6534 <TLSAPConn::HandleListenStateEvent(unsigned long)+0xf8>
         f64b0:	e5d2101a 	ldrb	r1, [r2, #26]
         f64b4:	e3310000 	teq	r1, #0	; 0x0
         f64b8:	0a000003 	beq	f64cc <TLSAPConn::HandleListenStateEvent(unsigned long)+0x90>
         f64bc:	e3310001 	teq	r1, #1	; 0x1
         f64c0:	0a000005 	beq	f64dc <TLSAPConn::HandleListenStateEvent(unsigned long)+0xa0>
         f64c4:	e3310081 	teq	r1, #129	; 0x81
         f64c8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         f64cc:	e1a00004 	mov	r0, r4
         f64d0:	e3a02006 	mov	r2, #6	; 0x6
         f64d4:	e3a01002 	mov	r1, #2	; 0x2
         f64d8:	ea00000d 	b	f6514 <TLSAPConn::HandleListenStateEvent(unsigned long)+0xd8>
         f64dc:	e3a01005 	mov	r1, #5	; 0x5
         f64e0:	e5c41014 	strb	r1, [r4, #20]	; fField20
         f64e4:	e5d01001 	ldrb	r1, [r0, #1]	; fField1
         f64e8:	e3310007 	teq	r1, #7	; 0x7
         f64ec:	1a000005 	bne	f6508 <TLSAPConn::HandleListenStateEvent(unsigned long)+0xcc>
         f64f0:	e5d4103d 	ldrb	r1, [r4, #61]	; fField61
         f64f4:	e5c01010 	strb	r1, [r0, #16]
         f64f8:	e1a00004 	mov	r0, r4
         f64fc:	e3a01000 	mov	r1, #0	; 0x0
         f6500:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6504:	ea64fd6d 	b	1a35ac0 <TLSAPConn::$ConnLstnComplete(long)>
         f6508:	e1a00004 	mov	r0, r4
         f650c:	e3a02000 	mov	r2, #0	; 0x0
         f6510:	e3a01081 	mov	r1, #129	; 0x81
         f6514:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6518:	ea64fd65 	b	1a35ab4 <TLSAPConn::$PutControlFrame(unsigned char, unsigned char)>
         f651c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f6520:	e5b01004 	ldr	r1, [r0, #4]!
         f6524:	e3310000 	teq	r1, #0	; 0x0
         f6528:	01a00004 	moveq	r0, r4
         f652c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         f6530:	0a64fd5e 	beq	1a35ab0 <TLSAPConn::$GetControlFrame(void)>
         f6534:	e1a00004 	mov	r0, r4
         f6538:	e3a02000 	mov	r2, #0	; 0x0
         f653c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6540:	ea64fd59 	b	1a35aac <TLSAPConn::$DisconnectStart(long, TIrLSAPConnEvent *)>
         f6544:	e1a00004 	mov	r0, r4
         f6548:	eb0000a7 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f654c:	e1a00004 	mov	r0, r4
         f6550:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6554:	ea0000b6 	b	f6834 <TLSAPConn::PassRequestToLMP(void)>
    */
}

/**
 * Symbol: TLSAPConn::HandleAcceptStateEvent(unsigned long)
 * Address: 000f6558
 */
TLSAPConn::HandleAcceptStateEvent(unsigned long) {
    /*
         f6558:	e1a0c00d 	mov	ip, sp
         f655c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f6560:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6564:	e1a04000 	mov	r4, r0
         f6568:	e3310009 	teq	r1, #9	; 0x9
         f656c:	0a00000a 	beq	f659c <TLSAPConn::HandleAcceptStateEvent(unsigned long)+0x44>
         f6570:	e331000e 	teq	r1, #14	; 0xe
         f6574:	0a000018 	beq	f65dc <TLSAPConn::HandleAcceptStateEvent(unsigned long)+0x84>
         f6578:	e3310017 	teq	r1, #23	; 0x17
         f657c:	0a00000f 	beq	f65c0 <TLSAPConn::HandleAcceptStateEvent(unsigned long)+0x68>
         f6580:	e3310018 	teq	r1, #24	; 0x18
         f6584:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         f6588:	e3a00000 	mov	r0, #0	; 0x0
         f658c:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f6590:	e5941024 	ldr	r1, [r4, #36]	; fField36
         f6594:	e1a00004 	mov	r0, r4
         f6598:	ea000021 	b	f6624 <TLSAPConn::HandleAcceptStateEvent(unsigned long)+0xcc>
         f659c:	e1a00004 	mov	r0, r4
         f65a0:	eb000091 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f65a4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f65a8:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f65ac:	e584002c 	str	r0, [r4, #44]	; fField44
         f65b0:	e1a00004 	mov	r0, r4
         f65b4:	e3a02000 	mov	r2, #0	; 0x0
         f65b8:	e3a01081 	mov	r1, #129	; 0x81
         f65bc:	ea000004 	b	f65d4 <TLSAPConn::HandleAcceptStateEvent(unsigned long)+0x7c>
         f65c0:	e1a00004 	mov	r0, r4
         f65c4:	eb000088 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f65c8:	e1a00004 	mov	r0, r4
         f65cc:	e3a02001 	mov	r2, #1	; 0x1
         f65d0:	e3a01002 	mov	r1, #2	; 0x2
         f65d4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f65d8:	ea64fd35 	b	1a35ab4 <TLSAPConn::$PutControlFrame(unsigned char, unsigned char)>
         f65dc:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f65e0:	e5d01001 	ldrb	r1, [r0, #1]	; fField1
         f65e4:	e3310017 	teq	r1, #23	; 0x17
         f65e8:	01a00004 	moveq	r0, r4
         f65ec:	03a02000 	moveq	r2, #0	; 0x0
         f65f0:	059f1034 	ldreq	r1, [pc, #34]	; f662c <TLSAPConn::HandleAcceptStateEvent(unsigned long)+0xd4>
         f65f4:	0a000004 	beq	f660c <TLSAPConn::HandleAcceptStateEvent(unsigned long)+0xb4>
         f65f8:	e5b01004 	ldr	r1, [r0, #4]!
         f65fc:	e3310000 	teq	r1, #0	; 0x0
         f6600:	0a000003 	beq	f6614 <TLSAPConn::HandleAcceptStateEvent(unsigned long)+0xbc>
         f6604:	e1a00004 	mov	r0, r4
         f6608:	e3a02000 	mov	r2, #0	; 0x0
         f660c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6610:	ea64fd25 	b	1a35aac <TLSAPConn::$DisconnectStart(long, TIrLSAPConnEvent *)>
         f6614:	e3a00006 	mov	r0, #6	; 0x6
         f6618:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f661c:	e1a00004 	mov	r0, r4
         f6620:	e3a01000 	mov	r1, #0	; 0x0
         f6624:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6628:	ea64fd24 	b	1a35ac0 <TLSAPConn::$ConnLstnComplete(long)>
         f662c:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)
 * Address: 000f6630
 */
TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long) {
    /*
         f6630:	e1a0c00d 	mov	ip, sp
         f6634:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f6638:	e24cb004 	sub	fp, ip, #4	; 0x4
         f663c:	e1a04000 	mov	r4, r0
         f6640:	e241000b 	sub	r0, r1, #11	; 0xb
         f6644:	e350000d 	cmp	r0, #13	; 0xd
         f6648:	908ff100 	addls	pc, pc, r0, lsl #2
         f664c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f6650:	ea000013 	b	f66a4 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x74>
         f6654:	ea000027 	b	f66f8 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0xc8>
         f6658:	ea000016 	b	f66b8 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x88>
         f665c:	ea000047 	b	f6780 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x150>
         f6660:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f6664:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f6668:	ea000017 	b	f66cc <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x9c>
         f666c:	ea00000a 	b	f669c <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x6c>
         f6670:	ea000015 	b	f66cc <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x9c>
         f6674:	ea000008 	b	f669c <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x6c>
         f6678:	ea000016 	b	f66d8 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0xa8>
         f667c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f6680:	ea000014 	b	f66d8 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0xa8>
         f6684:	e3a00000 	mov	r0, #0	; 0x0
         f6688:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f668c:	e1a00004 	mov	r0, r4
         f6690:	eb64fd03 	bl	1a35aa4 <TLSAPConn::$InternalDisconnectRequest(void)>
         f6694:	e3300000 	teq	r0, #0	; 0x0
         f6698:	1a00004a 	bne	f67c8 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x198>
         f669c:	e594100c 	ldr	r1, [r4, #12]	; fField12
         f66a0:	ea00004e 	b	f67e0 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x1b0>
         f66a4:	e1a00004 	mov	r0, r4
         f66a8:	eb00004f 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f66ac:	e1a00004 	mov	r0, r4
         f66b0:	e3a01000 	mov	r1, #0	; 0x0
         f66b4:	ea00002f 	b	f6778 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x148>
         f66b8:	e1a00004 	mov	r0, r4
         f66bc:	eb00004a 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f66c0:	e1a00004 	mov	r0, r4
         f66c4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f66c8:	ea64fcfb 	b	1a35abc <TLSAPConn::$PutDataFrame(void)>
         f66cc:	e1a00004 	mov	r0, r4
         f66d0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f66d4:	ea000056 	b	f6834 <TLSAPConn::PassRequestToLMP(void)>
         f66d8:	e1a00004 	mov	r0, r4
         f66dc:	eb000042 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f66e0:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f66e4:	e5900004 	ldr	r0, [r0, #4]
         f66e8:	e5840024 	str	r0, [r4, #36]	; fField36
         f66ec:	e1a00004 	mov	r0, r4
         f66f0:	e3a02001 	mov	r2, #1	; 0x1
         f66f4:	ea00001a 	b	f6764 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x134>
         f66f8:	e594200c 	ldr	r2, [r4, #12]	; fField12
         f66fc:	e5921004 	ldr	r1, [r2, #4]
         f6700:	e3310000 	teq	r1, #0	; 0x0
         f6704:	0a000008 	beq	f672c <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0xfc>
         f6708:	e281cdfa 	add	ip, r1, #16000	; 0x3e80
         f670c:	e37c0005 	cmn	ip, #5	; 0x5
         f6710:	1a000002 	bne	f6720 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0xf0>
         f6714:	e1a01002 	mov	r1, r2
         f6718:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
         f671c:	ea000030 	b	f67e4 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x1b4>
         f6720:	e1a00004 	mov	r0, r4
         f6724:	e3a02000 	mov	r2, #0	; 0x0
         f6728:	ea000024 	b	f67c0 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x190>
         f672c:	e5d2001a 	ldrb	r0, [r2, #26]
         f6730:	e3300000 	teq	r0, #0	; 0x0
         f6734:	0afffff6 	beq	f6714 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0xe4>
         f6738:	e3300001 	teq	r0, #1	; 0x1
         f673c:	0a000006 	beq	f675c <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x12c>
         f6740:	e3300002 	teq	r0, #2	; 0x2
         f6744:	1a000009 	bne	f6770 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x140>
         f6748:	e5d2101b 	ldrb	r1, [r2, #27]
         f674c:	e1a00004 	mov	r0, r4
         f6750:	eb64fcdf 	bl	1a35ad4 <TLSAPConn::$TranslateReasonToError(unsigned char)>
         f6754:	e1a01000 	mov	r1, r0
         f6758:	eafffff0 	b	f6720 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0xf0>
         f675c:	e1a00004 	mov	r0, r4
         f6760:	e3a02009 	mov	r2, #9	; 0x9
         f6764:	e3a01002 	mov	r1, #2	; 0x2
         f6768:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f676c:	ea64fcd0 	b	1a35ab4 <TLSAPConn::$PutControlFrame(unsigned char, unsigned char)>
         f6770:	e1a00004 	mov	r0, r4
         f6774:	e3a01001 	mov	r1, #1	; 0x1
         f6778:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f677c:	ea64fccd 	b	1a35ab8 <TLSAPConn::$GetDataFrame(unsigned char)>
         f6780:	e594500c 	ldr	r5, [r4, #12]	; fField12
         f6784:	e1a00004 	mov	r0, r4
         f6788:	eb64fcc6 	bl	1a35aa8 <TLSAPConn::$InternalPutRequest(void)>
         f678c:	e3300000 	teq	r0, #0	; 0x0
         f6790:	01a01005 	moveq	r1, r5
         f6794:	05b40020 	ldreq	r0, [r4, #32]!	; fField32
         f6798:	0a000011 	beq	f67e4 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0x1b4>
         f679c:	e5d50001 	ldrb	r0, [r5, #1]	; fField1
         f67a0:	e3300015 	teq	r0, #21	; 0x15
         f67a4:	13300017 	teqne	r0, #23	; 0x17
         f67a8:	05941024 	ldreq	r1, [r4, #36]	; fField36
         f67ac:	0affffdb 	beq	f6720 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)+0xf0>
         f67b0:	e1a00004 	mov	r0, r4
         f67b4:	e3a02000 	mov	r2, #0	; 0x0
         f67b8:	e3a01e99 	mov	r1, #2448	; 0x990
         f67bc:	e2411a0a 	sub	r1, r1, #40960	; 0xa000
         f67c0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f67c4:	ea64fcb8 	b	1a35aac <TLSAPConn::$DisconnectStart(long, TIrLSAPConnEvent *)>
         f67c8:	e594100c 	ldr	r1, [r4, #12]	; fField12
         f67cc:	e5d10001 	ldrb	r0, [r1, #1]	; fField1
         f67d0:	e2800001 	add	r0, r0, #1	; 0x1
         f67d4:	e5c10000 	strb	r0, [r1]
         f67d8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         f67dc:	e5810004 	str	r0, [r1, #4]
         f67e0:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
         f67e4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f67e8:	ea6504fe 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TLSAPConn::SaveCurrentRequest(void)
 * Address: 000f67ec
 */
TLSAPConn::SaveCurrentRequest(void) {
    /*
         f67ec:	e590000c 	ldr	r0, [r0, #12]	; fField12
         f67f0:	e5d01000 	ldrb	r1, [r0]
         f67f4:	e5c01001 	strb	r1, [r0, #1]	; fField1
         f67f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLSAPConn::InternalDisconnectRequest(void)
 * Address: 000f67fc
 */
TLSAPConn::InternalDisconnectRequest(void) {
    /*
         f67fc:	e590000c 	ldr	r0, [r0, #12]	; fField12
         f6800:	e5d00001 	ldrb	r0, [r0, #1]	; fField1
         f6804:	e2500017 	subs	r0, r0, #23	; 0x17
         f6808:	13a00001 	movne	r0, #1	; 0x1
         f680c:	e20000ff 	and	r0, r0, #255	; 0xff
         f6810:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLSAPConn::InternalPutRequest(void)
 * Address: 000f6814
 */
TLSAPConn::InternalPutRequest(void) {
    /*
         f6814:	e590000c 	ldr	r0, [r0, #12]	; fField12
         f6818:	e5d00001 	ldrb	r0, [r0, #1]	; fField1
         f681c:	e250000d 	subs	r0, r0, #13	; 0xd
         f6820:	13a00001 	movne	r0, #1	; 0x1
         f6824:	e20000ff 	and	r0, r0, #255	; 0xff
         f6828:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLSAPConn::GetPendConnLstn(void)
 * Address: 000f682c
 */
TLSAPConn::GetPendConnLstn(void) {
    /*
         f682c:	e5900028 	ldr	r0, [r0, #40]	; fField40
         f6830:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLSAPConn::PassRequestToLMP(void)
 * Address: 000f6834
 */
TLSAPConn::PassRequestToLMP(void) {
    /*
         f6834:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f6838:	e5810008 	str	r0, [r1, #8]
         f683c:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f6840:	ea6504e8 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TLSAPConn::DisconnectStart(long, TIrLSAPConnEvent *)
 * Address: 000f6844
 */
TLSAPConn::DisconnectStart(long, TIrLSAPConnEvent *) {
    /*
         f6844:	e3320000 	teq	r2, #0	; 0x0
         f6848:	0590200c 	ldreq	r2, [r0, #12]	; fField12
         f684c:	e3a03017 	mov	r3, #23	; 0x17
         f6850:	e5c23000 	strb	r3, [r2]
         f6854:	e5820008 	str	r0, [r2, #8]
         f6858:	e5821004 	str	r1, [r2, #4]
         f685c:	e5801024 	str	r1, [r0, #36]	; fField36
         f6860:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f6864:	e1a01002 	mov	r1, r2
         f6868:	ea6504de 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TLSAPConn::GetControlFrame(void)
 * Address: 000f686c
 */
TLSAPConn::GetControlFrame(void) {
    /*
         f686c:	e1a0c00d 	mov	ip, sp
         f6870:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f6874:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6878:	e1a04000 	mov	r4, r0
         f687c:	e590500c 	ldr	r5, [r0, #12]	; fField12
         f6880:	e590002c 	ldr	r0, [r0, #44]	; fField44
         f6884:	e3300000 	teq	r0, #0	; 0x0
         f6888:	15901000 	ldrne	r1, [r0]
         f688c:	11a0e00f 	movne	lr, pc
         f6890:	1281f028 	addne	pc, r1, #40	; 0x28
         f6894:	e3a0000b 	mov	r0, #11	; 0xb
         f6898:	e5c50000 	strb	r0, [r5]
         f689c:	e3a00000 	mov	r0, #0	; 0x0
         f68a0:	e5850004 	str	r0, [r5, #4]
         f68a4:	e594102c 	ldr	r1, [r4, #44]	; fField44
         f68a8:	e5850010 	str	r0, [r5, #16]
         f68ac:	e585100c 	str	r1, [r5, #12]	; fField12
         f68b0:	e594002c 	ldr	r0, [r4, #44]	; fField44
         f68b4:	e3300000 	teq	r0, #0	; 0x0
         f68b8:	0a000003 	beq	f68cc <TLSAPConn::GetControlFrame(void)+0x60>
         f68bc:	e5901000 	ldr	r1, [r0]
         f68c0:	e1a0e00f 	mov	lr, pc
         f68c4:	e281f02c 	add	pc, r1, #44	; 0x2c
         f68c8:	ea000000 	b	f68d0 <TLSAPConn::GetControlFrame(void)+0x64>
         f68cc:	e3a00000 	mov	r0, #0	; 0x0
         f68d0:	e5a50014 	str	r0, [r5, #20]!	; fField20
         f68d4:	e1a00004 	mov	r0, r4
         f68d8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f68dc:	eaffffd4 	b	f6834 <TLSAPConn::PassRequestToLMP(void)>
    */
}

/**
 * Symbol: TLSAPConn::Init(TIrGlue *, TIrLMP *, TIrStream *)
 * Address: 000f68e0
 */
TLSAPConn::Init(TIrGlue *, TIrLMP *, TIrStream *) {
    /*
         f68e0:	e1a0c00d 	mov	ip, sp
         f68e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f68e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f68ec:	e1a04000 	mov	r4, r0
         f68f0:	e2800018 	add	r0, r0, #24	; 0x18
         f68f4:	e880000e 	stmia	r0, {r1, r2, r3}
         f68f8:	e2400018 	sub	r0, r0, #24	; 0x18
         f68fc:	eb6504b8 	bl	1a37be4 <TIrStream::$Init(TIrGlue *)>
         f6900:	e1b05000 	movs	r5, r0
         f6904:	03a00000 	moveq	r0, #0	; 0x0
         f6908:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f690c:	e1a00004 	mov	r0, r4
         f6910:	eb64fc71 	bl	1a35adc <TLSAPConn::$DeInit(void)>
         f6914:	e1a00005 	mov	r0, r5
         f6918:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLSAPConn::PutControlFrame(unsigned char, unsigned char)
 * Address: 000f691c
 */
TLSAPConn::PutControlFrame(unsigned char, unsigned char) {
    /*
         f691c:	e1a0c00d 	mov	ip, sp
         f6920:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         f6924:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6928:	e1a04000 	mov	r4, r0
         f692c:	e20160ff 	and	r6, r1, #255	; 0xff
         f6930:	e20270ff 	and	r7, r2, #255	; 0xff
         f6934:	e3a00000 	mov	r0, #0	; 0x0
         f6938:	e3360001 	teq	r6, #1	; 0x1
         f693c:	e594500c 	ldr	r5, [r4, #12]	; fField12
         f6940:	13360081 	teqne	r6, #129	; 0x81
         f6944:	0594002c 	ldreq	r0, [r4, #44]	; fField44
         f6948:	e3a0100d 	mov	r1, #13	; 0xd
         f694c:	e5c51000 	strb	r1, [r5]
         f6950:	e3a01000 	mov	r1, #0	; 0x0
         f6954:	e585000c 	str	r0, [r5, #12]	; fField12
         f6958:	e5851004 	str	r1, [r5, #4]
         f695c:	e3300000 	teq	r0, #0	; 0x0
         f6960:	e5851010 	str	r1, [r5, #16]
         f6964:	0a000003 	beq	f6978 <TLSAPConn::PutControlFrame(unsigned char, unsigned char)+0x5c>
         f6968:	e5901000 	ldr	r1, [r0]
         f696c:	e1a0e00f 	mov	lr, pc
         f6970:	e281f02c 	add	pc, r1, #44	; 0x2c
         f6974:	ea000000 	b	f697c <TLSAPConn::PutControlFrame(unsigned char, unsigned char)+0x60>
         f6978:	e3a00000 	mov	r0, #0	; 0x0
         f697c:	e5850014 	str	r0, [r5, #20]	; fField20
         f6980:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         f6984:	e5c50018 	strb	r0, [r5, #24]	; fField24
         f6988:	e5d4003c 	ldrb	r0, [r4, #60]	; fField60
         f698c:	e5c50019 	strb	r0, [r5, #25]
         f6990:	e5c5601a 	strb	r6, [r5, #26]
         f6994:	e5c5701b 	strb	r7, [r5, #27]
         f6998:	e1a00004 	mov	r0, r4
         f699c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         f69a0:	eaffffa3 	b	f6834 <TLSAPConn::PassRequestToLMP(void)>
    */
}

/**
 * Symbol: TLSAPConn::GetDataFrame(unsigned char)
 * Address: 000f69a4
 */
TLSAPConn::GetDataFrame(unsigned char) {
    /*
         f69a4:	e31100ff 	tst	r1, #255	; 0xff
         f69a8:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f69ac:	0a00000a 	beq	f69dc <TLSAPConn::GetDataFrame(unsigned char)+0x38>
         f69b0:	e3a0200b 	mov	r2, #11	; 0xb
         f69b4:	e5c12000 	strb	r2, [r1]
         f69b8:	e3a02000 	mov	r2, #0	; 0x0
         f69bc:	e5812004 	str	r2, [r1, #4]
         f69c0:	e5902030 	ldr	r2, [r0, #48]	; fField48
         f69c4:	e581200c 	str	r2, [r1, #12]	; fField12
         f69c8:	e5902034 	ldr	r2, [r0, #52]	; fField52
         f69cc:	e5812010 	str	r2, [r1, #16]
         f69d0:	e5902038 	ldr	r2, [r0, #56]	; fField56
         f69d4:	e5a12014 	str	r2, [r1, #20]!	; fField20
         f69d8:	ea000005 	b	f69f4 <TLSAPConn::GetDataFrame(unsigned char)+0x50>
         f69dc:	e591200c 	ldr	r2, [r1, #12]	; fField12
         f69e0:	e5802030 	str	r2, [r0, #48]	; fField48
         f69e4:	e5912010 	ldr	r2, [r1, #16]
         f69e8:	e5802034 	str	r2, [r0, #52]	; fField52
         f69ec:	e5911014 	ldr	r1, [r1, #20]	; fField20
         f69f0:	e5801038 	str	r1, [r0, #56]	; fField56
         f69f4:	eaffff8e 	b	f6834 <TLSAPConn::PassRequestToLMP(void)>
    */
}

/**
 * Symbol: TLSAPConn::PutDataFrame(void)
 * Address: 000f69f8
 */
TLSAPConn::PutDataFrame(void) {
    /*
         f69f8:	e590100c 	ldr	r1, [r0, #12]	; fField12
         f69fc:	e5d0203d 	ldrb	r2, [r0, #61]	; fField61
         f6a00:	e5c12018 	strb	r2, [r1, #24]	; fField24
         f6a04:	e5d0203c 	ldrb	r2, [r0, #60]	; fField60
         f6a08:	e5c12019 	strb	r2, [r1, #25]
         f6a0c:	e3a02000 	mov	r2, #0	; 0x0
         f6a10:	e5c1201a 	strb	r2, [r1, #26]
         f6a14:	e5c1201b 	strb	r2, [r1, #27]
         f6a18:	eaffff85 	b	f6834 <TLSAPConn::PassRequestToLMP(void)>
    */
}

/**
 * Symbol: TLSAPConn::ConnLstnComplete(long)
 * Address: 000f6a1c
 */
TLSAPConn::ConnLstnComplete(long) {
    /*
         f6a1c:	e3a03000 	mov	r3, #0	; 0x0
         f6a20:	e590200c 	ldr	r2, [r0, #12]	; fField12
         f6a24:	e5803028 	str	r3, [r0, #40]	; fField40
         f6a28:	e5d23001 	ldrb	r3, [r2, #1]	; fField1
         f6a2c:	e2833001 	add	r3, r3, #1	; 0x1
         f6a30:	e5c23000 	strb	r3, [r2]
         f6a34:	e5821004 	str	r1, [r2, #4]
         f6a38:	e5900020 	ldr	r0, [r0, #32]	; fField32
         f6a3c:	e1a01002 	mov	r1, r2
         f6a40:	ea650468 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
    */
}

/**
 * Symbol: TLSAPConn::YourData(TLMPDUHeader &, unsigned char)
 * Address: 000f6a44
 */
TLSAPConn::YourData(TLMPDUHeader &, unsigned char) {
    /*
         f6a44:	e92d4000 	stmdb	sp!, {lr}
         f6a48:	e202c0ff 	and	ip, r2, #255	; 0xff
         f6a4c:	e5d0303c 	ldrb	r3, [r0, #60]	; fField60
         f6a50:	e5d12000 	ldrb	r2, [r1]
         f6a54:	e1330002 	teq	r3, r2
         f6a58:	1a00000c 	bne	f6a90 <TLSAPConn::YourData(TLMPDUHeader &, unsigned char)+0x4c>
         f6a5c:	e5d1e001 	ldrb	lr, [r1, #1]	; fField1
         f6a60:	e5d0303d 	ldrb	r3, [r0, #61]	; fField61
         f6a64:	e3a02001 	mov	r2, #1	; 0x1
         f6a68:	e13e0003 	teq	lr, r3
         f6a6c:	0a000005 	beq	f6a88 <TLSAPConn::YourData(TLMPDUHeader &, unsigned char)+0x44>
         f6a70:	e33300ff 	teq	r3, #255	; 0xff
         f6a74:	05d11002 	ldreqb	r1, [r1, #2]
         f6a78:	03310001 	teqeq	r1, #1	; 0x1
         f6a7c:	1a000003 	bne	f6a90 <TLSAPConn::YourData(TLMPDUHeader &, unsigned char)+0x4c>
         f6a80:	e33c0000 	teq	ip, #0	; 0x0
         f6a84:	05c0e03d 	streqb	lr, [r0, #61]	; fField61
         f6a88:	e1a00002 	mov	r0, r2
         f6a8c:	e8bd8000 	ldmia	sp!, {pc}
         f6a90:	e3a00000 	mov	r0, #0	; 0x0
         f6a94:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TLSAPConn::StartConnectTimer(void)
 * Address: 000f6a98
 */
TLSAPConn::StartConnectTimer(void) {
    /*
         f6a98:	e3a01001 	mov	r1, #1	; 0x1
         f6a9c:	e5c0103e 	strb	r1, [r0, #62]	; fField62
         f6aa0:	e3a01000 	mov	r1, #0	; 0x0
         f6aa4:	e5c0103f 	strb	r1, [r0, #63]	; fField63
         f6aa8:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f6aac:	ea64fbf4 	b	1a35a84 <TIrLMP::$StartOneSecTicker(void)>
    */
}

/**
 * Symbol: TLSAPConn::StopConnectTimer(void)
 * Address: 000f6ab0
 */
TLSAPConn::StopConnectTimer(void) {
    /*
         f6ab0:	e3a01000 	mov	r1, #0	; 0x0
         f6ab4:	e5c0103e 	strb	r1, [r0, #62]	; fField62
         f6ab8:	e590001c 	ldr	r0, [r0, #28]	; fField28
         f6abc:	ea64fbf1 	b	1a35a88 <TIrLMP::$StopOneSecTicker(void)>
    */
}

/**
 * Symbol: TLSAPConn::OneSecTickerComplete(void)
 * Address: 000f6ac0
 */
TLSAPConn::OneSecTickerComplete(void) {
    /*
         f6ac0:	e1a02000 	mov	r2, r0
         f6ac4:	e5d0003e 	ldrb	r0, [r0, #62]	; fField62
         f6ac8:	e3300000 	teq	r0, #0	; 0x0
         f6acc:	01a0f00e 	moveq	pc, lr
         f6ad0:	e5d2003f 	ldrb	r0, [r2, #63]	; fField63
         f6ad4:	e2800001 	add	r0, r0, #1	; 0x1
         f6ad8:	e20000ff 	and	r0, r0, #255	; 0xff
         f6adc:	e5c2003f 	strb	r0, [r2, #63]	; fField63
         f6ae0:	e350001e 	cmp	r0, #30	; 0x1e
         f6ae4:	b1a0f00e 	movlt	pc, lr
         f6ae8:	e1a00002 	mov	r0, r2
         f6aec:	e3a01027 	mov	r1, #39	; 0x27
         f6af0:	e5922000 	ldr	r2, [r2]
         f6af4:	e282f004 	add	pc, r2, #4	; 0x4
    */
}

/**
 * Symbol: TLSAPConn::TranslateReasonToError(unsigned char)
 * Address: 000f6af8
 */
TLSAPConn::TranslateReasonToError(unsigned char) {
    /*
         f6af8:	e20100ff 	and	r0, r1, #255	; 0xff
         f6afc:	e350000a 	cmp	r0, #10	; 0xa
         f6b00:	908ff100 	addls	pc, pc, r0, lsl #2
         f6b04:	ea000027 	b	f6ba8 <TLSAPConn::TranslateReasonToError(unsigned char)+0xb0>
         f6b08:	ea000026 	b	f6ba8 <TLSAPConn::TranslateReasonToError(unsigned char)+0xb0>
         f6b0c:	ea00000a 	b	f6b3c <TLSAPConn::TranslateReasonToError(unsigned char)+0x44>
         f6b10:	ea00000c 	b	f6b48 <TLSAPConn::TranslateReasonToError(unsigned char)+0x50>
         f6b14:	ea00000e 	b	f6b54 <TLSAPConn::TranslateReasonToError(unsigned char)+0x5c>
         f6b18:	ea000010 	b	f6b60 <TLSAPConn::TranslateReasonToError(unsigned char)+0x68>
         f6b1c:	ea000012 	b	f6b6c <TLSAPConn::TranslateReasonToError(unsigned char)+0x74>
         f6b20:	ea000014 	b	f6b78 <TLSAPConn::TranslateReasonToError(unsigned char)+0x80>
         f6b24:	ea000016 	b	f6b84 <TLSAPConn::TranslateReasonToError(unsigned char)+0x8c>
         f6b28:	ea000018 	b	f6b90 <TLSAPConn::TranslateReasonToError(unsigned char)+0x98>
         f6b2c:	ea00001a 	b	f6b9c <TLSAPConn::TranslateReasonToError(unsigned char)+0xa4>
         f6b30:	e59f0000 	ldr	r0, [pc, #0]	; f6b38 <TLSAPConn::TranslateReasonToError(unsigned char)+0x40>
         f6b34:	e1a0f00e 	mov	pc, lr
         f6b38:	ffff698f 	swinv	0x00ff698f
         f6b3c:	e3a00f66 	mov	r0, #408	; 0x198
         f6b40:	e2400b26 	sub	r0, r0, #38912	; 0x9800
         f6b44:	e1a0f00e 	mov	pc, lr
         f6b48:	e59f0000 	ldr	r0, [pc, #0]	; f6b50 <TLSAPConn::TranslateReasonToError(unsigned char)+0x58>
         f6b4c:	e1a0f00e 	mov	pc, lr
         f6b50:	ffff6997 	swinv	0x00ff6997
         f6b54:	e3a00096 	mov	r0, #150	; 0x96
         f6b58:	e2400c97 	sub	r0, r0, #38656	; 0x9700
         f6b5c:	e1a0f00e 	mov	pc, lr
         f6b60:	e3a00095 	mov	r0, #149	; 0x95
         f6b64:	e2400c97 	sub	r0, r0, #38656	; 0x9700
         f6b68:	e1a0f00e 	mov	pc, lr
         f6b6c:	e3a00f65 	mov	r0, #404	; 0x194
         f6b70:	e2400b26 	sub	r0, r0, #38912	; 0x9800
         f6b74:	e1a0f00e 	mov	pc, lr
         f6b78:	e59f0000 	ldr	r0, [pc, #0]	; f6b80 <TLSAPConn::TranslateReasonToError(unsigned char)+0x88>
         f6b7c:	e1a0f00e 	mov	pc, lr
         f6b80:	ffff6993 	swinv	0x00ff6993
         f6b84:	e3a00092 	mov	r0, #146	; 0x92
         f6b88:	e2400c97 	sub	r0, r0, #38656	; 0x9700
         f6b8c:	e1a0f00e 	mov	pc, lr
         f6b90:	e3a00091 	mov	r0, #145	; 0x91
         f6b94:	e2400c97 	sub	r0, r0, #38656	; 0x9700
         f6b98:	e1a0f00e 	mov	pc, lr
         f6b9c:	e3a00e99 	mov	r0, #2448	; 0x990
         f6ba0:	e2400a0a 	sub	r0, r0, #40960	; 0xa000
         f6ba4:	e1a0f00e 	mov	pc, lr
         f6ba8:	e3a0008d 	mov	r0, #141	; 0x8d
         f6bac:	e2400c97 	sub	r0, r0, #38656	; 0x9700
         f6bb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLSAPConn::AssignId(unsigned long)
 * Address: 000f6bb4
 */
TLSAPConn::AssignId(unsigned long) {
    /*
         f6bb4:	e5c0103c 	strb	r1, [r0, #60]	; fField60
         f6bb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLSAPConn::DeInit(void)
 * Address: 000f6bbc
 */
TLSAPConn::DeInit(void) {
    /*
         f6bbc:	e1a0c00d 	mov	ip, sp
         f6bc0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f6bc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6bc8:	e1a04000 	mov	r4, r0
         f6bcc:	e5d0103c 	ldrb	r1, [r0, #60]	; fField60
         f6bd0:	e33100ff 	teq	r1, #255	; 0xff
         f6bd4:	13310000 	teqne	r1, #0	; 0x0
         f6bd8:	15940018 	ldrne	r0, [r4, #24]	; fField24
         f6bdc:	1b64eb3a 	blne	1a318cc <TIrGlue::$ReleaseLSAPId(unsigned char)>
         f6be0:	e3a000ff 	mov	r0, #255	; 0xff
         f6be4:	e5c4003c 	strb	r0, [r4, #60]	; fField60
         f6be8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLSAPConn::NextState(unsigned long)
 * Address: 000f6bec
 */
TLSAPConn::NextState(unsigned long) {
    /*
         f6bec:	e5d02014 	ldrb	r2, [r0, #20]	; fField20
         f6bf0:	e3520006 	cmp	r2, #6	; 0x6
         f6bf4:	908ff102 	addls	pc, pc, r2, lsl #2
         f6bf8:	e1a0f00e 	mov	pc, lr
         f6bfc:	ea000005 	b	f6c18 <TLSAPConn::NextState(unsigned long)+0x2c>
         f6c00:	ea000005 	b	f6c1c <TLSAPConn::NextState(unsigned long)+0x30>
         f6c04:	ea000005 	b	f6c20 <TLSAPConn::NextState(unsigned long)+0x34>
         f6c08:	ea000005 	b	f6c24 <TLSAPConn::NextState(unsigned long)+0x38>
         f6c0c:	ea000005 	b	f6c28 <TLSAPConn::NextState(unsigned long)+0x3c>
         f6c10:	ea000005 	b	f6c2c <TLSAPConn::NextState(unsigned long)+0x40>
         f6c14:	eafffe85 	b	f6630 <TLSAPConn::HandleDataTransferReadyStateEvent(unsigned long)>
         f6c18:	ea000004 	b	f6c30 <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)>
         f6c1c:	ea000044 	b	f6d34 <TLSAPConn::HandleConnectPendingStateEvent(unsigned long)>
         f6c20:	ea00007f 	b	f6e24 <TLSAPConn::HandleConnectStateEvent(unsigned long)>
         f6c24:	ea0000c5 	b	f6f40 <TLSAPConn::HandleListenPendingStateEvent(unsigned long)>
         f6c28:	eafffe03 	b	f643c <TLSAPConn::HandleListenStateEvent(unsigned long)>
         f6c2c:	eafffe49 	b	f6558 <TLSAPConn::HandleAcceptStateEvent(unsigned long)>
    */
}

/**
 * Symbol: TLSAPConn::HandleDisconnectedStateEvent(unsigned long)
 * Address: 000f6c30
 */
TLSAPConn::HandleDisconnectedStateEvent(unsigned long) {
    /*
         f6c30:	e1a0c00d 	mov	ip, sp
         f6c34:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f6c38:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6c3c:	e1a04000 	mov	r4, r0
         f6c40:	e1a05001 	mov	r5, r1
         f6c44:	e351000c 	cmp	r1, #12	; 0xc
         f6c48:	0a000013 	beq	f6c9c <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0x6c>
         f6c4c:	ca000008 	bgt	f6c74 <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0x44>
         f6c50:	e3350005 	teq	r5, #5	; 0x5
         f6c54:	0a000015 	beq	f6cb0 <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0x80>
         f6c58:	e3350006 	teq	r5, #6	; 0x6
         f6c5c:	0a00000e 	beq	f6c9c <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0x6c>
         f6c60:	e3350007 	teq	r5, #7	; 0x7
         f6c64:	0a000011 	beq	f6cb0 <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0x80>
         f6c68:	e335000b 	teq	r5, #11	; 0xb
         f6c6c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f6c70:	ea000025 	b	f6d0c <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0xdc>
         f6c74:	e335000d 	teq	r5, #13	; 0xd
         f6c78:	0a000023 	beq	f6d0c <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0xdc>
         f6c7c:	e335000e 	teq	r5, #14	; 0xe
         f6c80:	0a000005 	beq	f6c9c <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0x6c>
         f6c84:	e3350017 	teq	r5, #23	; 0x17
         f6c88:	03a00018 	moveq	r0, #24	; 0x18
         f6c8c:	0594100c 	ldreq	r1, [r4, #12]	; fField12
         f6c90:	0a000004 	beq	f6ca8 <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0x78>
         f6c94:	e3350018 	teq	r5, #24	; 0x18
         f6c98:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         f6c9c:	e594100c 	ldr	r1, [r4, #12]	; fField12
         f6ca0:	e5d10001 	ldrb	r0, [r1, #1]	; fField1
         f6ca4:	e2800001 	add	r0, r0, #1	; 0x1
         f6ca8:	e5c10000 	strb	r0, [r1]
         f6cac:	ea00001c 	b	f6d24 <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0xf4>
         f6cb0:	e594600c 	ldr	r6, [r4, #12]	; fField12
         f6cb4:	e1a00004 	mov	r0, r4
         f6cb8:	ebfffedd 	bl	f6834 <TLSAPConn::PassRequestToLMP(void)>
         f6cbc:	e1a00004 	mov	r0, r4
         f6cc0:	ebfffec9 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f6cc4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f6cc8:	e5840028 	str	r0, [r4, #40]	; fField40
         f6ccc:	e596001c 	ldr	r0, [r6, #28]	; fField28
         f6cd0:	e3350005 	teq	r5, #5	; 0x5
         f6cd4:	e584002c 	str	r0, [r4, #44]	; fField44
         f6cd8:	1a000004 	bne	f6cf0 <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0xc0>
         f6cdc:	e3a00001 	mov	r0, #1	; 0x1
         f6ce0:	e5c40015 	strb	r0, [r4, #21]	; fField21
         f6ce4:	e5d61010 	ldrb	r1, [r6, #16]
         f6ce8:	e5c4103d 	strb	r1, [r4, #61]	; fField61
         f6cec:	ea000004 	b	f6d04 <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0xd4>
         f6cf0:	e3a00000 	mov	r0, #0	; 0x0
         f6cf4:	e5c40015 	strb	r0, [r4, #21]	; fField21
         f6cf8:	e3a000ff 	mov	r0, #255	; 0xff
         f6cfc:	e5c4003d 	strb	r0, [r4, #61]	; fField61
         f6d00:	e3a00003 	mov	r0, #3	; 0x3
         f6d04:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f6d08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         f6d0c:	e594100c 	ldr	r1, [r4, #12]	; fField12
         f6d10:	e5d10000 	ldrb	r0, [r1]
         f6d14:	e2800001 	add	r0, r0, #1	; 0x1
         f6d18:	e5c10000 	strb	r0, [r1]
         f6d1c:	e59f000c 	ldr	r0, [pc, #c]	; f6d30 <TLSAPConn::HandleDisconnectedStateEvent(unsigned long)+0x100>
         f6d20:	e5810004 	str	r0, [r1, #4]
         f6d24:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
         f6d28:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         f6d2c:	ea6503ad 	b	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f6d30:	ffffc177 	swinv	0x00ffc177
    */
}

/**
 * Symbol: TLSAPConn::HandleConnectPendingStateEvent(unsigned long)
 * Address: 000f6d34
 */
TLSAPConn::HandleConnectPendingStateEvent(unsigned long) {
    /*
         f6d34:	e1a0c00d 	mov	ip, sp
         f6d38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f6d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6d40:	e1a04000 	mov	r4, r0
         f6d44:	e3310006 	teq	r1, #6	; 0x6
         f6d48:	0a000012 	beq	f6d98 <TLSAPConn::HandleConnectPendingStateEvent(unsigned long)+0x64>
         f6d4c:	e331000e 	teq	r1, #14	; 0xe
         f6d50:	0a00001f 	beq	f6dd4 <TLSAPConn::HandleConnectPendingStateEvent(unsigned long)+0xa0>
         f6d54:	e3310017 	teq	r1, #23	; 0x17
         f6d58:	0a00002c 	beq	f6e10 <TLSAPConn::HandleConnectPendingStateEvent(unsigned long)+0xdc>
         f6d5c:	e3310018 	teq	r1, #24	; 0x18
         f6d60:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         f6d64:	e3a00000 	mov	r0, #0	; 0x0
         f6d68:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f6d6c:	e1a00004 	mov	r0, r4
         f6d70:	eb64fb4b 	bl	1a35aa4 <TLSAPConn::$InternalDisconnectRequest(void)>
         f6d74:	e3300000 	teq	r0, #0	; 0x0
         f6d78:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
         f6d7c:	05940014 	ldreq	r0, [r4, #20]	; fField20
         f6d80:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         f6d84:	0a650397 	beq	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f6d88:	15941024 	ldrne	r1, [r4, #36]	; fField36
         f6d8c:	11a00004 	movne	r0, r4
         f6d90:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         f6d94:	1a64fb49 	bne	1a35ac0 <TLSAPConn::$ConnLstnComplete(long)>
         f6d98:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f6d9c:	e5901004 	ldr	r1, [r0, #4]
         f6da0:	e3310000 	teq	r1, #0	; 0x0
         f6da4:	1a00000e 	bne	f6de4 <TLSAPConn::HandleConnectPendingStateEvent(unsigned long)+0xb0>
         f6da8:	e5d00011 	ldrb	r0, [r0, #17]
         f6dac:	e3300000 	teq	r0, #0	; 0x0
         f6db0:	15d4003d 	ldrneb	r0, [r4, #61]	; fField61
         f6db4:	13300000 	teqne	r0, #0	; 0x0
         f6db8:	13a00004 	movne	r0, #4	; 0x4
         f6dbc:	1a00000f 	bne	f6e00 <TLSAPConn::HandleConnectPendingStateEvent(unsigned long)+0xcc>
         f6dc0:	e1a00004 	mov	r0, r4
         f6dc4:	e3a02000 	mov	r2, #0	; 0x0
         f6dc8:	e3a01001 	mov	r1, #1	; 0x1
         f6dcc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6dd0:	ea64fb37 	b	1a35ab4 <TLSAPConn::$PutControlFrame(unsigned char, unsigned char)>
         f6dd4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f6dd8:	e5b01004 	ldr	r1, [r0, #4]!
         f6ddc:	e3310000 	teq	r1, #0	; 0x0
         f6de0:	0a000003 	beq	f6df4 <TLSAPConn::HandleConnectPendingStateEvent(unsigned long)+0xc0>
         f6de4:	e1a00004 	mov	r0, r4
         f6de8:	e3a02000 	mov	r2, #0	; 0x0
         f6dec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6df0:	ea64fb2d 	b	1a35aac <TLSAPConn::$DisconnectStart(long, TIrLSAPConnEvent *)>
         f6df4:	e1a00004 	mov	r0, r4
         f6df8:	eb64fb32 	bl	1a35ac8 <TLSAPConn::$StartConnectTimer(void)>
         f6dfc:	e3a00002 	mov	r0, #2	; 0x2
         f6e00:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f6e04:	e1a00004 	mov	r0, r4
         f6e08:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6e0c:	ea64fb27 	b	1a35ab0 <TLSAPConn::$GetControlFrame(void)>
         f6e10:	e1a00004 	mov	r0, r4
         f6e14:	ebfffe74 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f6e18:	e1a00004 	mov	r0, r4
         f6e1c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6e20:	eafffe83 	b	f6834 <TLSAPConn::PassRequestToLMP(void)>
    */
}

/**
 * Symbol: TLSAPConn::HandleConnectStateEvent(unsigned long)
 * Address: 000f6e24
 */
TLSAPConn::HandleConnectStateEvent(unsigned long) {
    /*
         f6e24:	e1a0c00d 	mov	ip, sp
         f6e28:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f6e2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6e30:	e1a04000 	mov	r4, r0
         f6e34:	e331000c 	teq	r1, #12	; 0xc
         f6e38:	0a00000c 	beq	f6e70 <TLSAPConn::HandleConnectStateEvent(unsigned long)+0x4c>
         f6e3c:	e3310017 	teq	r1, #23	; 0x17
         f6e40:	0a00002a 	beq	f6ef0 <TLSAPConn::HandleConnectStateEvent(unsigned long)+0xcc>
         f6e44:	e3310018 	teq	r1, #24	; 0x18
         f6e48:	0a00002f 	beq	f6f0c <TLSAPConn::HandleConnectStateEvent(unsigned long)+0xe8>
         f6e4c:	e3310027 	teq	r1, #39	; 0x27
         f6e50:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f6e54:	e1a00004 	mov	r0, r4
         f6e58:	eb64fb1b 	bl	1a35acc <TLSAPConn::$StopConnectTimer(void)>
         f6e5c:	e5942028 	ldr	r2, [r4, #40]	; fField40
         f6e60:	e1a00004 	mov	r0, r4
         f6e64:	e3a01092 	mov	r1, #146	; 0x92
         f6e68:	e2411c97 	sub	r1, r1, #38656	; 0x9700
         f6e6c:	ea000018 	b	f6ed4 <TLSAPConn::HandleConnectStateEvent(unsigned long)+0xb0>
         f6e70:	e594500c 	ldr	r5, [r4, #12]	; fField12
         f6e74:	e1a00004 	mov	r0, r4
         f6e78:	eb64fb13 	bl	1a35acc <TLSAPConn::$StopConnectTimer(void)>
         f6e7c:	e5951004 	ldr	r1, [r5, #4]
         f6e80:	e3310000 	teq	r1, #0	; 0x0
         f6e84:	0a000002 	beq	f6e94 <TLSAPConn::HandleConnectStateEvent(unsigned long)+0x70>
         f6e88:	e1a00004 	mov	r0, r4
         f6e8c:	e3a02000 	mov	r2, #0	; 0x0
         f6e90:	ea00000f 	b	f6ed4 <TLSAPConn::HandleConnectStateEvent(unsigned long)+0xb0>
         f6e94:	e5d5001a 	ldrb	r0, [r5, #26]
         f6e98:	e3300001 	teq	r0, #1	; 0x1
         f6e9c:	0a000008 	beq	f6ec4 <TLSAPConn::HandleConnectStateEvent(unsigned long)+0xa0>
         f6ea0:	e3300002 	teq	r0, #2	; 0x2
         f6ea4:	0a00000c 	beq	f6edc <TLSAPConn::HandleConnectStateEvent(unsigned long)+0xb8>
         f6ea8:	e3300081 	teq	r0, #129	; 0x81
         f6eac:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         f6eb0:	e3a00006 	mov	r0, #6	; 0x6
         f6eb4:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f6eb8:	e1a00004 	mov	r0, r4
         f6ebc:	e3a01000 	mov	r1, #0	; 0x0
         f6ec0:	ea00001c 	b	f6f38 <TLSAPConn::HandleConnectStateEvent(unsigned long)+0x114>
         f6ec4:	e1a00004 	mov	r0, r4
         f6ec8:	e3a02000 	mov	r2, #0	; 0x0
         f6ecc:	e3a0108e 	mov	r1, #142	; 0x8e
         f6ed0:	e2411c97 	sub	r1, r1, #38656	; 0x9700
         f6ed4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f6ed8:	ea64faf3 	b	1a35aac <TLSAPConn::$DisconnectStart(long, TIrLSAPConnEvent *)>
         f6edc:	e5d5101b 	ldrb	r1, [r5, #27]
         f6ee0:	e1a00004 	mov	r0, r4
         f6ee4:	eb64fafa 	bl	1a35ad4 <TLSAPConn::$TranslateReasonToError(unsigned char)>
         f6ee8:	e1a01000 	mov	r1, r0
         f6eec:	eaffffe5 	b	f6e88 <TLSAPConn::HandleConnectStateEvent(unsigned long)+0x64>
         f6ef0:	e1a00004 	mov	r0, r4
         f6ef4:	eb64faf4 	bl	1a35acc <TLSAPConn::$StopConnectTimer(void)>
         f6ef8:	e1a00004 	mov	r0, r4
         f6efc:	ebfffe3a 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f6f00:	e1a00004 	mov	r0, r4
         f6f04:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f6f08:	eafffe49 	b	f6834 <TLSAPConn::PassRequestToLMP(void)>
         f6f0c:	e3a00000 	mov	r0, #0	; 0x0
         f6f10:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f6f14:	e1a00004 	mov	r0, r4
         f6f18:	eb64fae1 	bl	1a35aa4 <TLSAPConn::$InternalDisconnectRequest(void)>
         f6f1c:	e3300000 	teq	r0, #0	; 0x0
         f6f20:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
         f6f24:	05940014 	ldreq	r0, [r4, #20]	; fField20
         f6f28:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         f6f2c:	0a65032d 	beq	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f6f30:	e5941024 	ldr	r1, [r4, #36]	; fField36
         f6f34:	e1a00004 	mov	r0, r4
         f6f38:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f6f3c:	ea64fadf 	b	1a35ac0 <TLSAPConn::$ConnLstnComplete(long)>
    */
}

/**
 * Symbol: TLSAPConn::HandleListenPendingStateEvent(unsigned long)
 * Address: 000f6f40
 */
TLSAPConn::HandleListenPendingStateEvent(unsigned long) {
    /*
         f6f40:	e1a0c00d 	mov	ip, sp
         f6f44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f6f48:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6f4c:	e1a04000 	mov	r4, r0
         f6f50:	e3310008 	teq	r1, #8	; 0x8
         f6f54:	0a000010 	beq	f6f9c <TLSAPConn::HandleListenPendingStateEvent(unsigned long)+0x5c>
         f6f58:	e3310017 	teq	r1, #23	; 0x17
         f6f5c:	0a00001a 	beq	f6fcc <TLSAPConn::HandleListenPendingStateEvent(unsigned long)+0x8c>
         f6f60:	e3310018 	teq	r1, #24	; 0x18
         f6f64:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         f6f68:	e3a00000 	mov	r0, #0	; 0x0
         f6f6c:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f6f70:	e1a00004 	mov	r0, r4
         f6f74:	eb64faca 	bl	1a35aa4 <TLSAPConn::$InternalDisconnectRequest(void)>
         f6f78:	e3300000 	teq	r0, #0	; 0x0
         f6f7c:	05b4100c 	ldreq	r1, [r4, #12]!	; fField12
         f6f80:	05940014 	ldreq	r0, [r4, #20]	; fField20
         f6f84:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         f6f88:	0a650316 	beq	1a37be8 <TIrStream::$EnqueueEvent(TIrEvent *)>
         f6f8c:	15941024 	ldrne	r1, [r4, #36]	; fField36
         f6f90:	11a00004 	movne	r0, r4
         f6f94:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         f6f98:	1a64fac8 	bne	1a35ac0 <TLSAPConn::$ConnLstnComplete(long)>
         f6f9c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         f6fa0:	e5b01004 	ldr	r1, [r0, #4]!
         f6fa4:	e3310000 	teq	r1, #0	; 0x0
         f6fa8:	11a00004 	movne	r0, r4
         f6fac:	13a02000 	movne	r2, #0	; 0x0
         f6fb0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         f6fb4:	1a64fabc 	bne	1a35aac <TLSAPConn::$DisconnectStart(long, TIrLSAPConnEvent *)>
         f6fb8:	e3a00004 	mov	r0, #4	; 0x4
         f6fbc:	e5c40014 	strb	r0, [r4, #20]	; fField20
         f6fc0:	e1a00004 	mov	r0, r4
         f6fc4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6fc8:	ea64fab8 	b	1a35ab0 <TLSAPConn::$GetControlFrame(void)>
         f6fcc:	e1a00004 	mov	r0, r4
         f6fd0:	ebfffe05 	bl	f67ec <TLSAPConn::SaveCurrentRequest(void)>
         f6fd4:	e1a00004 	mov	r0, r4
         f6fd8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f6fdc:	eafffe14 	b	f6834 <TLSAPConn::PassRequestToLMP(void)>
    */
}

