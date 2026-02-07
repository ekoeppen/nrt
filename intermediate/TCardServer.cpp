#include "include/TCardServer.h"

/**
 * Symbol: TCardServer::SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)
 * Address: 00051320
 */
TCardServer::SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *) {
    /*
         51320:	e1a0c00d 	mov	ip, sp
         51324:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         51328:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         5132c:	e24cb014 	sub	fp, ip, #20	; 0x14
         51330:	e1a04000 	mov	r4, r0
         51334:	e1a06001 	mov	r6, r1
         51338:	e1a05002 	mov	r5, r2
         5133c:	e59b801c 	ldr	r8, [fp, #28]	; fField28
         51340:	e59b9018 	ldr	r9, [fp, #24]	; fField24
         51344:	e59ba014 	ldr	sl, [fp, #20]	; fField20
         51348:	eb6b9a22 	bl	1b37bd8 <TCardServer::$NewMessage(void)>
         5134c:	e1b07000 	movs	r7, r0
         51350:	03a000e9 	moveq	r0, #233	; 0xe9
         51354:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         51358:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         5135c:	e1a0300a 	mov	r3, sl
         51360:	e1a01005 	mov	r1, r5
         51364:	e1a00007 	mov	r0, r7
         51368:	e59b2010 	ldr	r2, [fp, #16]	; fField16
         5136c:	eb6e15fe 	bl	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
         51370:	e1a03008 	mov	r3, r8
         51374:	e92d0008 	stmdb	sp!, {r3}
         51378:	e1a03009 	mov	r3, r9
         5137c:	e1a02007 	mov	r2, r7
         51380:	e1a01006 	mov	r1, r6
         51384:	e1a00004 	mov	r0, r4
         51388:	eb6ba65c 	bl	1b3ad00 <TCardServer::$SendMessage(TUPort *, TCardAsyncMsg *, unsigned long, TTime *)>
         5138c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::SendMessage(TUPort *, TCardAsyncMsg *, unsigned long, TTime *)
 * Address: 00051390
 */
TCardServer::SendMessage(TUPort *, TCardAsyncMsg *, unsigned long, TTime *) {
    /*
         51390:	e1a0c00d 	mov	ip, sp
         51394:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         51398:	e24cb004 	sub	fp, ip, #4	; 0x4
         5139c:	e1a07000 	mov	r7, r0
         513a0:	e1a06001 	mov	r6, r1
         513a4:	e1a04002 	mov	r4, r2
         513a8:	e1a05003 	mov	r5, r3
         513ac:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         513b0:	eb0d0c16 	bl	394410 <IsSuperMode>
         513b4:	eb0d0c15 	bl	394410 <IsSuperMode>
         513b8:	e3300000 	teq	r0, #0	; 0x0
         513bc:	1a000007 	bne	513e0 <TCardServer::SendMessage(TUPort *, TCardAsyncMsg *, unsigned long, TTime *)+0x50>
         513c0:	e1a03008 	mov	r3, r8
         513c4:	e92d0008 	stmdb	sp!, {r3}
         513c8:	e2872070 	add	r2, r7, #112	; 0x70
         513cc:	e1a03005 	mov	r3, r5
         513d0:	e1a01006 	mov	r1, r6
         513d4:	e1a00004 	mov	r0, r4
         513d8:	eb6b9e11 	bl	1b38c24 <TCardAsyncMsg::$SendRPC(TUPort *, TUPort *, unsigned long, TTime *)>
         513dc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         513e0:	e3a03000 	mov	r3, #0	; 0x0
         513e4:	e1a02008 	mov	r2, r8
         513e8:	e1a01005 	mov	r1, r5
         513ec:	e3a00301 	mov	r0, #67108864	; 0x4000000
         513f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         513f4:	e3a030b8 	mov	r3, #184	; 0xb8
         513f8:	e92d0008 	stmdb	sp!, {r3}
         513fc:	e28400bc 	add	r0, r4, #188	; 0xbc
         51400:	e4901008 	ldr	r1, [r0], #8	; fField8
         51404:	e5902000 	ldr	r2, [r0]
         51408:	e1a03004 	mov	r3, r4
         5140c:	e5960000 	ldr	r0, [r6]
         51410:	eb6e264b 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
         51414:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)
 * Address: 00051418
 */
TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *) {
    /*
         51418:	e1a0c00d 	mov	ip, sp
         5141c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         51420:	e24cb004 	sub	fp, ip, #4	; 0x4
         51424:	e1a05000 	mov	r5, r0
         51428:	e1a06002 	mov	r6, r2
         5142c:	e1a04003 	mov	r4, r3
         51430:	e3a00000 	mov	r0, #0	; 0x0
         51434:	e59ba004 	ldr	sl, [fp, #4]	; fField4
         51438:	e52d0008 	str	r0, [sp, -#8]!	; fField8
         5143c:	e59f009c 	ldr	r0, [pc, #9c]	; 514e0 <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0xc8>
         51440:	e7908102 	ldr	r8, [r0, r2, lsl #2]	; fField2
         51444:	e3a07000 	mov	r7, #0	; 0x0
         51448:	e52d706c 	str	r7, [sp, -#108]!
         5144c:	e28d0008 	add	r0, sp, #8	; 0x8
         51450:	eb6d8547 	bl	1bb2974 <$setjmp>
         51454:	e3300000 	teq	r0, #0	; 0x0
         51458:	1a00004b 	bne	5158c <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0x174>
         5145c:	e1a0000d 	mov	r0, sp
         51460:	eb6e3b05 	bl	1be007c <$AddExceptionHandler>
         51464:	e1a00004 	mov	r0, r4
         51468:	eb0cd3eb 	bl	38641c <TCardHandler::GetNumberOfDevice(void)>
         5146c:	e1a09000 	mov	r9, r0
         51470:	e3500004 	cmp	r0, #4	; 0x4
         51474:	83a09004 	movhi	r9, #4	; 0x4
         51478:	e0660206 	rsb	r0, r6, r6, lsl #4
         5147c:	e0850300 	add	r0, r5, r0, lsl #6
         51480:	e2805f8b 	add	r5, r0, #556	; 0x22c
         51484:	e2855b06 	add	r5, r5, #6144	; 0x1800
         51488:	e1a02006 	mov	r2, r6
         5148c:	e58d5070 	str	r5, [sp, #112]	; fField112
         51490:	e1a00005 	mov	r0, r5
         51494:	e3a03000 	mov	r3, #0	; 0x0
         51498:	e59f1044 	ldr	r1, [pc, #44]	; 514e4 <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0xcc>	; fField44
         5149c:	eb6e15b2 	bl	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
         514a0:	e59f0040 	ldr	r0, [pc, #40]	; 514e8 <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0xd0>	; fField40
         514a4:	e5850004 	str	r0, [r5, #4]	; fField4
         514a8:	e585401c 	str	r4, [r5, #28]	; fField28
         514ac:	e5980004 	ldr	r0, [r8, #4]	; fField4
         514b0:	e5900000 	ldr	r0, [r0]
         514b4:	e1a00080 	mov	r0, r0, lsl #1
         514b8:	e1a00fa0 	mov	r0, r0, lsr #31
         514bc:	e5c5002c 	strb	r0, [r5, #44]	; fField44
         514c0:	e3a00000 	mov	r0, #0	; 0x0
         514c4:	e0881100 	add	r1, r8, r0, lsl #2
         514c8:	e2800001 	add	r0, r0, #1	; 0x1
         514cc:	e3500004 	cmp	r0, #4	; 0x4
         514d0:	e5a171fc 	str	r7, [r1, #508]!
         514d4:	3afffffa 	bcc	514c4 <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0xac>
         514d8:	e3a06000 	mov	r6, #0	; 0x0
         514dc:	ea000018 	b	51544 <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0x12c>
         514e0:	0c105fe4 	ldceq	15, cr5, [r0], -#912
         514e4:	63617264 	cmnvs	r1, #1073741830	; 0x40000006
         514e8:	7379736d 	cmnvc	r9, #-1275068415	; 0xb4000001
         514ec:	e0850286 	add	r0, r5, r6, lsl #5
         514f0:	e2807038 	add	r7, r0, #56	; 0x38
         514f4:	e2873014 	add	r3, r7, #20	; 0x14
         514f8:	e2872010 	add	r2, r7, #16	; 0x10
         514fc:	e287100c 	add	r1, r7, #12	; 0xc
         51500:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         51504:	e2873004 	add	r3, r7, #4	; 0x4
         51508:	e1a02007 	mov	r2, r7
         5150c:	e1a01006 	mov	r1, r6
         51510:	e1a00004 	mov	r0, r4
         51514:	eb0cd3c3 	bl	386428 <TCardHandler::GetDeviceInfo(unsigned long, unsigned long *, unsigned long *, void **, unsigned long *, unsigned long *)>
         51518:	e28dd00c 	add	sp, sp, #12	; 0xc
         5151c:	e5874008 	str	r4, [r7, #8]	; fField8
         51520:	e0881106 	add	r1, r8, r6, lsl #2
         51524:	e5970000 	ldr	r0, [r7]
         51528:	e33a0000 	teq	sl, #0	; 0x0
         5152c:	e5a101fc 	str	r0, [r1, #508]!
         51530:	0a000002 	beq	51540 <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0x128>
         51534:	e3360000 	teq	r6, #0	; 0x0
         51538:	05b70004 	ldreq	r0, [r7, #4]!	; fField4
         5153c:	058a0000 	streq	r0, [sl]
         51540:	e2866001 	add	r6, r6, #1	; 0x1
         51544:	e1560009 	cmp	r6, r9
         51548:	33560004 	cmpcc	r6, #4	; 0x4
         5154c:	3affffe6 	bcc	514ec <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0xd4>
         51550:	e5950038 	ldr	r0, [r5, #56]	; fField56
         51554:	e5850014 	str	r0, [r5, #20]	; fField20
         51558:	e595003c 	ldr	r0, [r5, #60]	; fField60
         5155c:	e5850018 	str	r0, [r5, #24]	; fField24
         51560:	e5950040 	ldr	r0, [r5, #64]	; fField64
         51564:	e585001c 	str	r0, [r5, #28]	; fField28
         51568:	e5950044 	ldr	r0, [r5, #68]	; fField68
         5156c:	e5850020 	str	r0, [r5, #32]	; fField32
         51570:	e5950048 	ldr	r0, [r5, #72]	; fField72
         51574:	e5850024 	str	r0, [r5, #36]	; fField36
         51578:	e595004c 	ldr	r0, [r5, #76]	; fField76
         5157c:	e5a50028 	str	r0, [r5, #40]!	; fField40
         51580:	e59d0070 	ldr	r0, [sp, #112]	; fField112
         51584:	eb6b9da8 	bl	1b38c2c <TNewCardAsyncMsg::$SendSystemEvent(void)>
         51588:	ea000006 	b	515a8 <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0x190>
         5158c:	e59d0060 	ldr	r0, [sp, #96]
         51590:	e28f1f06 	add	r1, pc, #24	; 0x18
         51594:	eb6e46fe 	bl	1be3194 <$Subexception>
         51598:	e3300000 	teq	r0, #0	; 0x0
         5159c:	0a000004 	beq	515b4 <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0x19c>
         515a0:	e3a000b5 	mov	r0, #181	; 0xb5
         515a4:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         515a8:	e58d006c 	str	r0, [sp, #108]
         515ac:	ea000002 	b	515bc <TCardServer::SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)+0x1a4>
         515b0:	00000000 	andeq	r0, r0, r0
         515b4:	e1a0000d 	mov	r0, sp
         515b8:	eb6e42e5 	bl	1be2154 <$NextHandler>
         515bc:	e1a0000d 	mov	r0, sp
         515c0:	eb6e3ebc 	bl	1be10b8 <$ExitHandler>
         515c4:	e5bd006c 	ldr	r0, [sp, #108]!
         515c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::SendSelfMessage(unsigned long, unsigned long, unsigned long, unsigned long, TTime *)
 * Address: 000515cc
 */
TCardServer::SendSelfMessage(unsigned long, unsigned long, unsigned long, unsigned long, TTime *) {
    /*
         515cc:	e1a0c00d 	mov	ip, sp
         515d0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         515d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         515d8:	e1a0c001 	mov	ip, r1
         515dc:	e1a0e002 	mov	lr, r2
         515e0:	e1a01003 	mov	r1, r3
         515e4:	e99b000c 	ldmib	fp, {r2, r3}
         515e8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         515ec:	e2801070 	add	r1, r0, #112	; 0x70
         515f0:	e1a0300e 	mov	r3, lr
         515f4:	e1a0200c 	mov	r2, ip
         515f8:	eb6b9d87 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         515fc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)
 * Address: 00051688
 */
TCardServer::ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long) {
    /*
         51688:	e1a00002 	mov	r0, r2
         5168c:	e1a02003 	mov	r2, r3
         51690:	e1a0c000 	mov	ip, r0
         51694:	e1a00001 	mov	r0, r1
         51698:	e1a0100c 	mov	r1, ip
         5169c:	e59d3000 	ldr	r3, [sp]
         516a0:	ea6e1531 	b	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCardServer::GetFreeMessage(void)
 * Address: 000516a4
 */
TCardServer::GetFreeMessage(void) {
    /*
         516a4:	e3a02000 	mov	r2, #0	; 0x0
         516a8:	e3a01000 	mov	r1, #0	; 0x0
         516ac:	e0813201 	add	r3, r1, r1, lsl #4
         516b0:	e0833083 	add	r3, r3, r3, lsl #1
         516b4:	e0803103 	add	r3, r0, r3, lsl #2
         516b8:	e5933144 	ldr	r3, [r3, #324]	; fField324
         516bc:	e3130102 	tst	r3, #-2147483648	; 0x80000000
         516c0:	1a000007 	bne	516e4 <TCardServer::GetFreeMessage(void)+0x40>
         516c4:	e0811201 	add	r1, r1, r1, lsl #4
         516c8:	e0811081 	add	r1, r1, r1, lsl #1
         516cc:	e0800101 	add	r0, r0, r1, lsl #2
         516d0:	e5901144 	ldr	r1, [r0, #324]	; fField324
         516d4:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
         516d8:	e5801144 	str	r1, [r0, #324]	; fField324
         516dc:	e280208c 	add	r2, r0, #140	; 0x8c
         516e0:	ea000002 	b	516f0 <TCardServer::GetFreeMessage(void)+0x4c>
         516e4:	e2811001 	add	r1, r1, #1	; 0x1
         516e8:	e3510020 	cmp	r1, #32	; 0x20
         516ec:	3affffee 	bcc	516ac <TCardServer::GetFreeMessage(void)+0x8>
         516f0:	e1a00002 	mov	r0, r2
         516f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardServer::NewMessage(void)
 * Address: 000516f8
 */
TCardServer::NewMessage(void) {
    /*
         516f8:	e1a0c00d 	mov	ip, sp
         516fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         51700:	e24cb004 	sub	fp, ip, #4	; 0x4
         51704:	e1a04000 	mov	r4, r0
         51708:	eb6b951a 	bl	1b36b78 <TCardServer::$GetFreeMessage(void)>
         5170c:	e3300000 	teq	r0, #0	; 0x0
         51710:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         51714:	e3a00000 	mov	r0, #0	; 0x0
         51718:	eb6b90e0 	bl	1b35aa0 <TCardAsyncMsg::$__ct(void)>
         5171c:	e1b05000 	movs	r5, r0
         51720:	0a000015 	beq	5177c <TCardServer::NewMessage(void)+0x84>
         51724:	e1a00005 	mov	r0, r5
         51728:	eb6b9919 	bl	1b37b94 <TCardAsyncMsg::$Init(void)>
         5172c:	e3300000 	teq	r0, #0	; 0x0
         51730:	0a000009 	beq	5175c <TCardServer::NewMessage(void)+0x64>
         51734:	e28500bc 	add	r0, r5, #188	; 0xbc
         51738:	e3a01000 	mov	r1, #0	; 0x0
         5173c:	eb6df3f3 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         51740:	e1a00005 	mov	r0, r5
         51744:	e3a01000 	mov	r1, #0	; 0x0
         51748:	eb6defea 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
         5174c:	e1a00005 	mov	r0, r5
         51750:	eb6defe2 	bl	1bcd6e0 <$__dl(void *)>
         51754:	e3a05000 	mov	r5, #0	; 0x0
         51758:	ea000007 	b	5177c <TCardServer::NewMessage(void)+0x84>
         5175c:	e59500b8 	ldr	r0, [r5, #184]
         51760:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         51764:	e58500b8 	str	r0, [r5, #184]
         51768:	e2840f83 	add	r0, r4, #524	; 0x20c
         5176c:	e2800b06 	add	r0, r0, #6144	; 0x1800
         51770:	e1a02005 	mov	r2, r5
         51774:	e5901000 	ldr	r1, [r0]
         51778:	eb6e5f5b 	bl	1be94ec <CList::$InsertAt(long, void *)>
         5177c:	e1a00005 	mov	r0, r5
         51780:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::AddCardHandler(unsigned long, TClassInfo const *)
 * Address: 00051784
 */
TCardServer::AddCardHandler(unsigned long, TClassInfo const *) {
    /*
         51784:	e1a0c00d 	mov	ip, sp
         51788:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         5178c:	e24cb004 	sub	fp, ip, #4	; 0x4
         51790:	e1a05001 	mov	r5, r1
         51794:	e1a04002 	mov	r4, r2
         51798:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         5179c:	e3a08000 	mov	r8, #0	; 0x0
         517a0:	e59f9018 	ldr	r9, [pc, #18]	; 517c0 <TCardServer::AddCardHandler(unsigned long, TClassInfo const *)+0x3c>
         517a4:	e7990101 	ldr	r0, [r9, r1, lsl #2]	; fField2
         517a8:	e2801e21 	add	r1, r0, #528	; 0x210
         517ac:	e1a0000d 	mov	r0, sp
         517b0:	eb6e468b 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         517b4:	e1a0000d 	mov	r0, sp
         517b8:	eb6e570e 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         517bc:	ea000012 	b	5180c <TCardServer::AddCardHandler(unsigned long, TClassInfo const *)+0x88>
         517c0:	0c105fe4 	ldceq	15, cr5, [r0], -#912
         517c4:	e1a00007 	mov	r0, r7
         517c8:	eb6e0ca9 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         517cc:	e1a06000 	mov	r6, r0
         517d0:	e1a00004 	mov	r0, r4
         517d4:	eb6e0ca6 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         517d8:	e1a01006 	mov	r1, r6
         517dc:	eb6d90b1 	bl	1bb5aa8 <$strcmp>
         517e0:	e3300000 	teq	r0, #0	; 0x0
         517e4:	1a000006 	bne	51804 <TCardServer::AddCardHandler(unsigned long, TClassInfo const *)+0x80>
         517e8:	e1a00004 	mov	r0, r4
         517ec:	eb6e31bc 	bl	1bddee4 <TClassInfo::$Version( const(void))>
         517f0:	e1a06000 	mov	r6, r0
         517f4:	e1a00007 	mov	r0, r7
         517f8:	eb6e31b9 	bl	1bddee4 <TClassInfo::$Version( const(void))>
         517fc:	e1560000 	cmp	r6, r0
         51800:	93a08001 	movls	r8, #1	; 0x1
         51804:	e1a0000d 	mov	r0, sp
         51808:	eb6e6764 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         5180c:	e1b07000 	movs	r7, r0
         51810:	0a000001 	beq	5181c <TCardServer::AddCardHandler(unsigned long, TClassInfo const *)+0x98>
         51814:	e3380000 	teq	r8, #0	; 0x0
         51818:	0affffe9 	beq	517c4 <TCardServer::AddCardHandler(unsigned long, TClassInfo const *)+0x40>
         5181c:	e3380000 	teq	r8, #0	; 0x0
         51820:	1a000004 	bne	51838 <TCardServer::AddCardHandler(unsigned long, TClassInfo const *)+0xb4>
         51824:	e7990105 	ldr	r0, [r9, r5, lsl #2]	; fField2
         51828:	e2800e21 	add	r0, r0, #528	; 0x210
         5182c:	e1a02004 	mov	r2, r4
         51830:	e3a01000 	mov	r1, #0	; 0x0
         51834:	eb6e5f2c 	bl	1be94ec <CList::$InsertAt(long, void *)>
         51838:	e1b04008 	movs	r4, r8
         5183c:	13a040ac 	movne	r4, #172	; 0xac
         51840:	12444b0a 	subne	r4, r4, #10240	; 0x2800
         51844:	e1a0000d 	mov	r0, sp
         51848:	e3a01000 	mov	r1, #0	; 0x0
         5184c:	eb6e4a85 	bl	1be4268 <CArrayIterator::$__dt(void)>
         51850:	e1a00004 	mov	r0, r4
         51854:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::RemoveCardHandler(unsigned long, TClassInfo const *)
 * Address: 00051858
 */
TCardServer::RemoveCardHandler(unsigned long, TClassInfo const *) {
    /*
         51858:	e1a0c00d 	mov	ip, sp
         5185c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         51860:	e24cb004 	sub	fp, ip, #4	; 0x4
         51864:	e59f0014 	ldr	r0, [pc, #14]	; 51880 <TCardServer::RemoveCardHandler(unsigned long, TClassInfo const *)+0x28>
         51868:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
         5186c:	e2800e21 	add	r0, r0, #528	; 0x210
         51870:	e1a01002 	mov	r1, r2
         51874:	eb6e6b6b 	bl	1bec628 <CList::$Remove(void *)>
         51878:	e3a00000 	mov	r0, #0	; 0x0
         5187c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         51880:	0c105fe4 	ldceq	15, cr5, [r0], -#912
    */
}

/**
 * Symbol: TCardServer::FirstCardHandler(TCardSocketState *)
 * Address: 00051884
 */
TCardServer::FirstCardHandler(TCardSocketState *) {
    /*
         51884:	e3a02000 	mov	r2, #0	; 0x0
         51888:	e5812228 	str	r2, [r1, #552]
         5188c:	ea6ba113 	b	1b39ce0 <TCardServer::$NextCardHandler(TCardSocketState *)>
    */
}

/**
 * Symbol: TCardServer::NextCardHandler(TCardSocketState *)
 * Address: 00051890
 */
TCardServer::NextCardHandler(TCardSocketState *) {
    /*
         51890:	e1a0c00d 	mov	ip, sp
         51894:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         51898:	e24cb004 	sub	fp, ip, #4	; 0x4
         5189c:	e1a05000 	mov	r5, r0
         518a0:	e1a04001 	mov	r4, r1
         518a4:	e3a06000 	mov	r6, #0	; 0x0
         518a8:	e2810e21 	add	r0, r1, #528	; 0x210
         518ac:	e5902000 	ldr	r2, [r0]
         518b0:	e5911228 	ldr	r1, [r1, #552]
         518b4:	e1520001 	cmp	r2, r1
         518b8:	da00000c 	ble	518f0 <TCardServer::NextCardHandler(TCardSocketState *)+0x60>
         518bc:	eb6e52a0 	bl	1be6344 <CList::$At(long)>
         518c0:	e3300000 	teq	r0, #0	; 0x0
         518c4:	0a000009 	beq	518f0 <TCardServer::NextCardHandler(TCardSocketState *)+0x60>
         518c8:	eb6e0c69 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         518cc:	eb6e18ab 	bl	1bd7b80 <$New__12TCardHandlerSFPc>
         518d0:	e1b06000 	movs	r6, r0
         518d4:	0a000005 	beq	518f0 <TCardServer::NextCardHandler(TCardSocketState *)+0x60>
         518d8:	e1a00006 	mov	r0, r6
         518dc:	e5951070 	ldr	r1, [r5, #112]	; fField112
         518e0:	eb0cd2d3 	bl	386434 <TCardHandler::SetCardServerPort(unsigned long)>
         518e4:	e5940228 	ldr	r0, [r4, #552]
         518e8:	e2800001 	add	r0, r0, #1	; 0x1
         518ec:	e5a40228 	str	r0, [r4, #552]!
         518f0:	e1a00006 	mov	r0, r6
         518f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)
 * Address: 000518f8
 */
TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *) {
    /*
         518f8:	e1a0c00d 	mov	ip, sp
         518fc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         51900:	e24cb004 	sub	fp, ip, #4	; 0x4
         51904:	e1a07000 	mov	r7, r0
         51908:	e1a05001 	mov	r5, r1
         5190c:	e1a06002 	mov	r6, r2
         51910:	e1a04003 	mov	r4, r3
         51914:	e3a00000 	mov	r0, #0	; 0x0
         51918:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         5191c:	e1a00002 	mov	r0, r2
         51920:	eb6e2d45 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         51924:	e1a0a000 	mov	sl, r0
         51928:	e5948004 	ldr	r8, [r4, #4]	; fField4
         5192c:	e3380000 	teq	r8, #0	; 0x0
         51930:	13350000 	teqne	r5, #0	; 0x0
         51934:	13360000 	teqne	r6, #0	; 0x0
         51938:	03a000ea 	moveq	r0, #234	; 0xea
         5193c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         51940:	058d0000 	streq	r0, [sp]
         51944:	0a000061 	beq	51ad0 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x1d8>
         51948:	e1a02006 	mov	r2, r6
         5194c:	e1a01008 	mov	r1, r8
         51950:	e1a00007 	mov	r0, r7
         51954:	eb6b9cae 	bl	1b38c14 <TCardServer::$SelectCardConfiguration(TCardPCMCIA *, TCardSocket *)>
         51958:	e1a09000 	mov	r9, r0
         5195c:	e3700001 	cmn	r0, #1	; 0x1
         51960:	0a00005a 	beq	51ad0 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x1d8>
         51964:	e3a00000 	mov	r0, #0	; 0x0
         51968:	e52d006c 	str	r0, [sp, -#108]!
         5196c:	e28d0008 	add	r0, sp, #8	; 0x8
         51970:	eb6d83ff 	bl	1bb2974 <$setjmp>
         51974:	e3300000 	teq	r0, #0	; 0x0
         51978:	1a000045 	bne	51a94 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x19c>
         5197c:	e1a0000d 	mov	r0, sp
         51980:	eb6e39bd 	bl	1be007c <$AddExceptionHandler>
         51984:	e5940000 	ldr	r0, [r4]
         51988:	e3100401 	tst	r0, #16777216	; 0x1000000
         5198c:	0a000004 	beq	519a4 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0xac>
         51990:	e1a00005 	mov	r0, r5
         51994:	e3a03000 	mov	r3, #0	; 0x0
         51998:	e3a01003 	mov	r1, #3	; 0x3
         5199c:	e594233c 	ldr	r2, [r4, #828]
         519a0:	eb6df78f 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
         519a4:	e1a03009 	mov	r3, r9
         519a8:	e1a02008 	mov	r2, r8
         519ac:	e1a01006 	mov	r1, r6
         519b0:	e1a00005 	mov	r0, r5
         519b4:	eb0cd280 	bl	3863bc <TCardHandler::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)>
         519b8:	e58d006c 	str	r0, [sp, #108]
         519bc:	e3300000 	teq	r0, #0	; 0x0
         519c0:	1a00003f 	bne	51ac4 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x1cc>
         519c4:	e1a00005 	mov	r0, r5
         519c8:	eb0cd290 	bl	386410 <TCardHandler::CardStatus(void)>
         519cc:	e3100001 	tst	r0, #1	; 0x1
         519d0:	1a000003 	bne	519e4 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0xec>
         519d4:	e1a00005 	mov	r0, r5
         519d8:	eb0cd27a 	bl	3863c8 <TCardHandler::RemoveServices(void)>
         519dc:	e3e00d7d 	mvn	r0, #8000	; 0x1f40
         519e0:	ea000032 	b	51ab0 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x1b8>
         519e4:	e1a01008 	mov	r1, r8
         519e8:	e584500c 	str	r5, [r4, #12]
         519ec:	e1a00005 	mov	r0, r5
         519f0:	e5849008 	str	r9, [r4, #8]	; fField8
         519f4:	eb0cd282 	bl	386404 <TCardHandler::CardIdString(TCardPCMCIA *)>
         519f8:	e1a01000 	mov	r1, r0
         519fc:	e2840010 	add	r0, r4, #16	; 0x10
         51a00:	e3a0201f 	mov	r2, #31	; 0x1f
         51a04:	eb6d902c 	bl	1bb5abc <$strncpy>
         51a08:	e3a00000 	mov	r0, #0	; 0x0
         51a0c:	e5c4002f 	strb	r0, [r4, #47]
         51a10:	e1a00005 	mov	r0, r5
         51a14:	eb6df777 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
         51a18:	e1a06000 	mov	r6, r0
         51a1c:	eb6e0c14 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         51a20:	e28f1f16 	add	r1, pc, #88	; 0x58
         51a24:	eb6d901f 	bl	1bb5aa8 <$strcmp>
         51a28:	e3300000 	teq	r0, #0	; 0x0
         51a2c:	1a000004 	bne	51a44 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x14c>
         51a30:	e1a00006 	mov	r0, r6
         51a34:	eb6e312a 	bl	1bddee4 <TClassInfo::$Version( const(void))>
         51a38:	e3300000 	teq	r0, #0	; 0x0
         51a3c:	03a00001 	moveq	r0, #1	; 0x1
         51a40:	0a000000 	beq	51a48 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x150>
         51a44:	e3a00000 	mov	r0, #0	; 0x0
         51a48:	e5941000 	ldr	r1, [r4]
         51a4c:	e3c11402 	bic	r1, r1, #33554432	; 0x2000000
         51a50:	e2000001 	and	r0, r0, #1	; 0x1
         51a54:	e1810c80 	orr	r0, r1, r0, lsl #25
         51a58:	e3a03000 	mov	r3, #0	; 0x0
         51a5c:	e5840000 	str	r0, [r4]
         51a60:	e92d0008 	stmdb	sp!, {r3}
         51a64:	e2841030 	add	r1, r4, #48	; 0x30
         51a68:	e1a03005 	mov	r3, r5
         51a6c:	e1a0200a 	mov	r2, sl
         51a70:	e1a00007 	mov	r0, r7
         51a74:	eb6b9c69 	bl	1b38c20 <TCardServer::$SendNewCardMessage(TUPort *, unsigned long, TCardHandler *, unsigned long *)>
         51a78:	e28dd004 	add	sp, sp, #4	; 0x4
         51a7c:	ea00000b 	b	51ab0 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x1b8>
         51a80:	54436172 	strplb	r6, [r3], -#370
         51a84:	6448616e 	strvsb	r6, [r8], -#366
         51a88:	646c6572 	strvsbt	r6, [ip], -#1394
         51a8c:	50616765 	rsbpl	r6, r1, r5, ror #14
         51a90:	72000000 	andvc	r0, r0, #0	; 0x0
         51a94:	e59d0060 	ldr	r0, [sp, #96]
         51a98:	e28f1f06 	add	r1, pc, #24	; 0x18
         51a9c:	eb6e45bc 	bl	1be3194 <$Subexception>
         51aa0:	e3300000 	teq	r0, #0	; 0x0
         51aa4:	0a000004 	beq	51abc <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x1c4>
         51aa8:	e3a000b5 	mov	r0, #181	; 0xb5
         51aac:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         51ab0:	e58d006c 	str	r0, [sp, #108]
         51ab4:	ea000002 	b	51ac4 <TCardServer::ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x1cc>
         51ab8:	00000000 	andeq	r0, r0, r0
         51abc:	e1a0000d 	mov	r0, sp
         51ac0:	eb6e41a3 	bl	1be2154 <$NextHandler>
         51ac4:	e1a0000d 	mov	r0, sp
         51ac8:	eb6e3d7a 	bl	1be10b8 <$ExitHandler>
         51acc:	e5bd006c 	ldr	r0, [sp, #108]!
         51ad0:	e49d0004 	ldr	r0, [sp], #4	; fField4
         51ad4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)
 * Address: 00051ad8
 */
TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *) {
    /*
         51ad8:	e1a0c00d 	mov	ip, sp
         51adc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         51ae0:	e24cb004 	sub	fp, ip, #4	; 0x4
         51ae4:	e1b06001 	movs	r6, r1
         51ae8:	e1a05002 	mov	r5, r2
         51aec:	e1a04003 	mov	r4, r3
         51af0:	e3a00000 	mov	r0, #0	; 0x0
         51af4:	e3a08000 	mov	r8, #0	; 0x0
         51af8:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         51afc:	0a000022 	beq	51b8c <TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0xb4>
         51b00:	e52d806c 	str	r8, [sp, -#108]!
         51b04:	e28d0008 	add	r0, sp, #8	; 0x8
         51b08:	eb6d8399 	bl	1bb2974 <$setjmp>
         51b0c:	e3300000 	teq	r0, #0	; 0x0
         51b10:	1a000004 	bne	51b28 <TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x50>
         51b14:	e1a0000d 	mov	r0, sp
         51b18:	eb6e3957 	bl	1be007c <$AddExceptionHandler>
         51b1c:	e1a00006 	mov	r0, r6
         51b20:	eb0cd228 	bl	3863c8 <TCardHandler::RemoveServices(void)>
         51b24:	ea000006 	b	51b44 <TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x6c>
         51b28:	e59d0060 	ldr	r0, [sp, #96]
         51b2c:	e28f1f06 	add	r1, pc, #24	; 0x18
         51b30:	eb6e4597 	bl	1be3194 <$Subexception>
         51b34:	e3300000 	teq	r0, #0	; 0x0
         51b38:	0a000004 	beq	51b50 <TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x78>
         51b3c:	e3a000b5 	mov	r0, #181	; 0xb5
         51b40:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         51b44:	e58d006c 	str	r0, [sp, #108]
         51b48:	ea000002 	b	51b58 <TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0x80>
         51b4c:	00000000 	andeq	r0, r0, r0
         51b50:	e1a0000d 	mov	r0, sp
         51b54:	eb6e417e 	bl	1be2154 <$NextHandler>
         51b58:	e1a0000d 	mov	r0, sp
         51b5c:	eb6e3d55 	bl	1be10b8 <$ExitHandler>
         51b60:	e28dd06c 	add	sp, sp, #108	; 0x6c
         51b64:	e1a00006 	mov	r0, r6
         51b68:	eb0cd206 	bl	386388 <TCardHandler::Delete(void)>
         51b6c:	e5940000 	ldr	r0, [r4]
         51b70:	e3100401 	tst	r0, #16777216	; 0x1000000
         51b74:	0a000004 	beq	51b8c <TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0xb4>
         51b78:	e2841fcd 	add	r1, r4, #820	; 0x334
         51b7c:	e2840fd2 	add	r0, r4, #840	; 0x348
         51b80:	e3a03001 	mov	r3, #1	; 0x1
         51b84:	e3a02000 	mov	r2, #0	; 0x0
         51b88:	eb6ed617 	bl	1c073ec <TCardATALoader::$RemoveATAPackages(TATABootParamBlock *, void *, unsigned long)>
         51b8c:	e3a06000 	mov	r6, #0	; 0x0
         51b90:	e0847106 	add	r7, r4, r6, lsl #2
         51b94:	e5970038 	ldr	r0, [r7, #56]	; fField56
         51b98:	e3300000 	teq	r0, #0	; 0x0
         51b9c:	0a000001 	beq	51ba8 <TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0xd0>
         51ba0:	eb6e204f 	bl	1bd9ce4 <$RemovePackage(unsigned long)>
         51ba4:	e5a78038 	str	r8, [r7, #56]!	; fField56
         51ba8:	e2866001 	add	r6, r6, #1	; 0x1
         51bac:	e3560008 	cmp	r6, #8	; 0x8
         51bb0:	3afffff6 	bcc	51b90 <TCardServer::DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)+0xb8>
         51bb4:	e1a00004 	mov	r0, r4
         51bb8:	eb6b93df 	bl	1b36b3c <TCardSocketState::$Clear(void)>
         51bbc:	e1a00005 	mov	r0, r5
         51bc0:	eb6bacab 	bl	1b3ce74 <TCardSocket::$ResetInterrupts(void)>
         51bc4:	e1a00005 	mov	r0, r5
         51bc8:	eb6e2c9b 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         51bcc:	e1a04000 	mov	r4, r0
         51bd0:	e3e01004 	mvn	r1, #4	; 0x4
         51bd4:	eb6e34cf 	bl	1bdef18 <$VppOff(int, unsigned long)>
         51bd8:	e1a00004 	mov	r0, r4
         51bdc:	e3e01004 	mvn	r1, #4	; 0x4
         51be0:	eb6e30ba 	bl	1bdded0 <$VccOff(int, unsigned long)>
         51be4:	e49d0004 	ldr	r0, [sp], #4	; fField4
         51be8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::SelectCardCISPower(TCardSocket *)
 * Address: 00051bec
 */
TCardServer::SelectCardCISPower(TCardSocket *) {
    /*
         51bec:	e1a0c00d 	mov	ip, sp
         51bf0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         51bf4:	e24cb004 	sub	fp, ip, #4	; 0x4
         51bf8:	e1a04001 	mov	r4, r1
         51bfc:	e3e06006 	mvn	r6, #6	; 0x6
         51c00:	e2466c29 	sub	r6, r6, #10496	; 0x2900
         51c04:	e1a00001 	mov	r0, r1
         51c08:	eb6ef2c6 	bl	1c0e728 <TCardSocket::$GetVPCPins(void)>
         51c0c:	e2005030 	and	r5, r0, #48	; 0x30
         51c10:	e1a00004 	mov	r0, r4
         51c14:	eb6eda01 	bl	1c08420 <TCardSocket::$VccVoltageSpec(void)>
         51c18:	e3a07f4b 	mov	r7, #300	; 0x12c
         51c1c:	e3350000 	teq	r5, #0	; 0x0
         51c20:	0a000006 	beq	51c40 <TCardServer::SelectCardCISPower(TCardSocket *)+0x54>
         51c24:	e3350010 	teq	r5, #16	; 0x10
         51c28:	0a00001a 	beq	51c98 <TCardServer::SelectCardCISPower(TCardSocket *)+0xac>
         51c2c:	e3350020 	teq	r5, #32	; 0x20
         51c30:	0a000002 	beq	51c40 <TCardServer::SelectCardCISPower(TCardSocket *)+0x54>
         51c34:	e3350030 	teq	r5, #48	; 0x30
         51c38:	1a000016 	bne	51c98 <TCardServer::SelectCardCISPower(TCardSocket *)+0xac>
         51c3c:	ea000003 	b	51c50 <TCardServer::SelectCardCISPower(TCardSocket *)+0x64>
         51c40:	e3100004 	tst	r0, #4	; 0x4
         51c44:	13a05003 	movne	r5, #3	; 0x3
         51c48:	13a07f96 	movne	r7, #600	; 0x258
         51c4c:	1a000002 	bne	51c5c <TCardServer::SelectCardCISPower(TCardSocket *)+0x70>
         51c50:	e3100001 	tst	r0, #1	; 0x1
         51c54:	0a00000f 	beq	51c98 <TCardServer::SelectCardCISPower(TCardSocket *)+0xac>
         51c58:	e3a05001 	mov	r5, #1	; 0x1
         51c5c:	e3a06000 	mov	r6, #0	; 0x0
         51c60:	e1a00004 	mov	r0, r4
         51c64:	eb6ed9f1 	bl	1c08430 <TCardSocket::$VppVoltageSpec(void)>
         51c68:	e3100020 	tst	r0, #32	; 0x20
         51c6c:	03858010 	orreq	r8, r5, #16	; 0x10
         51c70:	13a08016 	movne	r8, #22	; 0x16
         51c74:	e1a01005 	mov	r1, r5
         51c78:	e1a00004 	mov	r0, r4
         51c7c:	eb6ed9df 	bl	1c08400 <TCardSocket::$SelectVoltageLevel(TSocketPowerLevels)>
         51c80:	e1a01008 	mov	r1, r8
         51c84:	e1a00004 	mov	r0, r4
         51c88:	eb6ed9dc 	bl	1c08400 <TCardSocket::$SelectVoltageLevel(TSocketPowerLevels)>
         51c8c:	e1a01007 	mov	r1, r7
         51c90:	e1a00004 	mov	r0, r4
         51c94:	eb6e2432 	bl	1bdad64 <TCardSocket::$SetAttributeMemSpeed(unsigned long)>
         51c98:	e1a00006 	mov	r0, r6
         51c9c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::SelectCardConfiguration(TCardPCMCIA *, TCardSocket *)
 * Address: 00051d84
 */
TCardServer::SelectCardConfiguration(TCardPCMCIA *, TCardSocket *) {
    /*
         51d84:	e3a00000 	mov	r0, #0	; 0x0
         51d88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardServer::SelectCardPower(TCardSocket *, TCardPCMCIA *)
 * Address: 00051d8c
 */
TCardServer::SelectCardPower(TCardSocket *, TCardPCMCIA *) {
    /*
         51d8c:	e1a0c00d 	mov	ip, sp
         51d90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         51d94:	e24cb004 	sub	fp, ip, #4	; 0x4
         51d98:	e1a04001 	mov	r4, r1
         51d9c:	e1a00001 	mov	r0, r1
         51da0:	eb6ed9a2 	bl	1c08430 <TCardSocket::$VppVoltageSpec(void)>
         51da4:	e3100002 	tst	r0, #2	; 0x2
         51da8:	11a00004 	movne	r0, r4
         51dac:	13a01012 	movne	r1, #18	; 0x12
         51db0:	1b6ed992 	blne	1c08400 <TCardSocket::$SelectVoltageLevel(TSocketPowerLevels)>
         51db4:	e3a00000 	mov	r0, #0	; 0x0
         51db8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::CheckCardStatus(unsigned long)
 * Address: 00051dbc
 */
TCardServer::CheckCardStatus(unsigned long) {
    /*
         51dbc:	e1a0c00d 	mov	ip, sp
         51dc0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         51dc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         51dc8:	e3a00003 	mov	r0, #3	; 0x3
         51dcc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         51dd0:	e59f0044 	ldr	r0, [pc, #44]	; 51e1c <TCardServer::CheckCardStatus(unsigned long)+0x60>	; fField44
         51dd4:	e7904101 	ldr	r4, [r0, r1, lsl #2]	; fField2
         51dd8:	e594000c 	ldr	r0, [r4, #12]
         51ddc:	e3300000 	teq	r0, #0	; 0x0
         51de0:	0a00001c 	beq	51e58 <TCardServer::CheckCardStatus(unsigned long)+0x9c>
         51de4:	e594030c 	ldr	r0, [r4, #780]
         51de8:	e3300001 	teq	r0, #1	; 0x1
         51dec:	1a000019 	bne	51e58 <TCardServer::CheckCardStatus(unsigned long)+0x9c>
         51df0:	e3a00000 	mov	r0, #0	; 0x0
         51df4:	e52d006c 	str	r0, [sp, -#108]!
         51df8:	e28d0008 	add	r0, sp, #8	; 0x8
         51dfc:	eb6d82dc 	bl	1bb2974 <$setjmp>
         51e00:	e3300000 	teq	r0, #0	; 0x0
         51e04:	1a000005 	bne	51e20 <TCardServer::CheckCardStatus(unsigned long)+0x64>
         51e08:	e1a0000d 	mov	r0, sp
         51e0c:	eb6e389a 	bl	1be007c <$AddExceptionHandler>
         51e10:	e5b4000c 	ldr	r0, [r4, #12]!
         51e14:	eb0cd17d 	bl	386410 <TCardHandler::CardStatus(void)>
         51e18:	ea000006 	b	51e38 <TCardServer::CheckCardStatus(unsigned long)+0x7c>
         51e1c:	0c105fe4 	ldceq	15, cr5, [r0], -#912
         51e20:	e59d0060 	ldr	r0, [sp, #96]
         51e24:	e28f1f05 	add	r1, pc, #20	; 0x14
         51e28:	eb6e44d9 	bl	1be3194 <$Subexception>
         51e2c:	e3300000 	teq	r0, #0	; 0x0
         51e30:	0a000003 	beq	51e44 <TCardServer::CheckCardStatus(unsigned long)+0x88>
         51e34:	e3a00000 	mov	r0, #0	; 0x0
         51e38:	e58d006c 	str	r0, [sp, #108]
         51e3c:	ea000002 	b	51e4c <TCardServer::CheckCardStatus(unsigned long)+0x90>
         51e40:	00000000 	andeq	r0, r0, r0
         51e44:	e1a0000d 	mov	r0, sp
         51e48:	eb6e40c1 	bl	1be2154 <$NextHandler>
         51e4c:	e1a0000d 	mov	r0, sp
         51e50:	eb6e3c98 	bl	1be10b8 <$ExitHandler>
         51e54:	e28dd06c 	add	sp, sp, #108	; 0x6c
         51e58:	e49d0004 	ldr	r0, [sp], #4	; fField4
         51e5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::InitializePCMCIABus(TCardSocket *)
 * Address: 00051e60
 */
TCardServer::InitializePCMCIABus(TCardSocket *) {
    /*
         51e60:	e1a0c00d 	mov	ip, sp
         51e64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         51e68:	e24cb004 	sub	fp, ip, #4	; 0x4
         51e6c:	e1a04001 	mov	r4, r1
         51e70:	e1a00001 	mov	r0, r1
         51e74:	eb6e2bf0 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         51e78:	eb6ba3ad 	bl	1b3ad34 <$VccIdleOff(unsigned long)>
         51e7c:	e1a00004 	mov	r0, r4
         51e80:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         51e84:	ea6e27c5 	b	1bdbda0 <TCardSocket::$SetDefaultConfig(void)>
    */
}

/**
 * Symbol: TCardServer::InitializePCMCIABus(void)
 * Address: 00051e88
 */
TCardServer::InitializePCMCIABus(void) {
    /*
         51e88:	e1a0c00d 	mov	ip, sp
         51e8c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         51e90:	e24cb004 	sub	fp, ip, #4	; 0x4
         51e94:	e1a04000 	mov	r4, r0
         51e98:	e3a05000 	mov	r5, #0	; 0x0
         51e9c:	e59f702c 	ldr	r7, [pc, #2c]	; 51ed0 <TCardServer::InitializePCMCIABus(void)+0x48>	; fField2
         51ea0:	e5970038 	ldr	r0, [r7, #56]	; fField56
         51ea4:	e3500000 	cmp	r0, #0	; 0x0
         51ea8:	991ba8f0 	ldmlsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         51eac:	e59f6020 	ldr	r6, [pc, #20]	; 51ed4 <TCardServer::InitializePCMCIABus(void)+0x4c>	; fField20
         51eb0:	e7961105 	ldr	r1, [r6, r5, lsl #2]	; fField2
         51eb4:	e1a00004 	mov	r0, r4
         51eb8:	eb6b973f 	bl	1b37bbc <TCardServer::$InitializePCMCIABus(TCardSocket *)>
         51ebc:	e2855001 	add	r5, r5, #1	; 0x1
         51ec0:	e5970038 	ldr	r0, [r7, #56]	; fField56
         51ec4:	e1550000 	cmp	r5, r0
         51ec8:	3afffff8 	bcc	51eb0 <TCardServer::InitializePCMCIABus(void)+0x28>
         51ecc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         51ed0:	0c100a7c 	ldceq	10, cr0, [r0], -#496
         51ed4:	0c105fd4 	ldceq	15, cr5, [r0], -#848
    */
}

/**
 * Symbol: TCardServer::InitializeCardDetection(TCardSocket *, TCardSocketState *)
 * Address: 00051ed8
 */
TCardServer::InitializeCardDetection(TCardSocket *, TCardSocketState *) {
    /*
         51ed8:	e1a0c00d 	mov	ip, sp
         51edc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         51ee0:	e24cb004 	sub	fp, ip, #4	; 0x4
         51ee4:	e1a05000 	mov	r5, r0
         51ee8:	e1a04001 	mov	r4, r1
         51eec:	e1a00001 	mov	r0, r1
         51ef0:	eb6ed536 	bl	1c073d0 <TCardSocket::$IsCardDetected(void)>
         51ef4:	e3300000 	teq	r0, #0	; 0x0
         51ef8:	0a000016 	beq	51f58 <TCardServer::InitializeCardDetection(TCardSocket *, TCardSocketState *)+0x80>
         51efc:	e1a00004 	mov	r0, r4
         51f00:	eb6e0ac2 	bl	1bd4a10 <TCardSocket::$GetPCPins(void)>
         51f04:	e3100080 	tst	r0, #128	; 0x80
         51f08:	1a000012 	bne	51f58 <TCardServer::InitializeCardDetection(TCardSocket *, TCardSocketState *)+0x80>
         51f0c:	e24dd010 	sub	sp, sp, #16	; 0x10
         51f10:	e1a0000d 	mov	r0, sp
         51f14:	e3a01efb 	mov	r1, #4016	; 0xfb0
         51f18:	e2811ab3 	add	r1, r1, #733184	; 0xb3000
         51f1c:	eb6e2fdb 	bl	1bdde90 <$TimeFromNow>
         51f20:	e28d0008 	add	r0, sp, #8	; 0x8
         51f24:	e89d5000 	ldmia	sp, {ip, lr}
         51f28:	e8805000 	stmia	r0, {ip, lr}
         51f2c:	e28d3008 	add	r3, sp, #8	; 0x8
         51f30:	e3a02000 	mov	r2, #0	; 0x0
         51f34:	e92d000c 	stmdb	sp!, {r2, r3}
         51f38:	e1a00004 	mov	r0, r4
         51f3c:	eb6e2bbe 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         51f40:	e1a02000 	mov	r2, r0
         51f44:	e1a00005 	mov	r0, r5
         51f48:	e3a03000 	mov	r3, #0	; 0x0
         51f4c:	e3a010ca 	mov	r1, #202	; 0xca
         51f50:	eb6b9b34 	bl	1b38c28 <TCardServer::$SendSelfMessage(unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         51f54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         51f58:	e1a00004 	mov	r0, r4
         51f5c:	e3a01002 	mov	r1, #2	; 0x2
         51f60:	eb6dfa30 	bl	1bd0828 <TCardSocket::$ClearSocketInterrupt(TSocketInt)>
         51f64:	e1a00004 	mov	r0, r4
         51f68:	e3a02002 	mov	r2, #2	; 0x2
         51f6c:	e3a01002 	mov	r1, #2	; 0x2
         51f70:	eb6ef1e9 	bl	1c0e71c <TCardSocket::$SetSocketInterruptFlags(TSocketInt, TSocketIntFlags)>
         51f74:	e1a00004 	mov	r0, r4
         51f78:	e3a01002 	mov	r1, #2	; 0x2
         51f7c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         51f80:	ea6dfe54 	b	1bd18d8 <TCardSocket::$EnableSocketInterrupt(TSocketInt)>
    */
}

/**
 * Symbol: TCardServer::InitializeCardDetection(void)
 * Address: 00051f84
 */
TCardServer::InitializeCardDetection(void) {
    /*
         51f84:	e1a0c00d 	mov	ip, sp
         51f88:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         51f8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         51f90:	e1a04000 	mov	r4, r0
         51f94:	e3a05000 	mov	r5, #0	; 0x0
         51f98:	e59f8034 	ldr	r8, [pc, #34]	; 51fd4 <TCardServer::InitializeCardDetection(void)+0x50>
         51f9c:	e5980038 	ldr	r0, [r8, #56]	; fField56
         51fa0:	e3500000 	cmp	r0, #0	; 0x0
         51fa4:	991ba9f0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         51fa8:	e59f7028 	ldr	r7, [pc, #28]	; 51fd8 <TCardServer::InitializeCardDetection(void)+0x54>	; fField28
         51fac:	e59f6028 	ldr	r6, [pc, #28]	; 51fdc <TCardServer::InitializeCardDetection(void)+0x58>	; fField28
         51fb0:	e7971105 	ldr	r1, [r7, r5, lsl #2]	; fField2
         51fb4:	e7962105 	ldr	r2, [r6, r5, lsl #2]	; fField2
         51fb8:	e1a00004 	mov	r0, r4
         51fbc:	eb6b96fc 	bl	1b37bb4 <TCardServer::$InitializeCardDetection(TCardSocket *, TCardSocketState *)>
         51fc0:	e2855001 	add	r5, r5, #1	; 0x1
         51fc4:	e5980038 	ldr	r0, [r8, #56]	; fField56
         51fc8:	e1550000 	cmp	r5, r0
         51fcc:	3afffff7 	bcc	51fb0 <TCardServer::InitializeCardDetection(void)+0x2c>
         51fd0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         51fd4:	0c100a7c 	ldceq	10, cr0, [r0], -#496
         51fd8:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         51fdc:	0c105fe4 	ldceq	15, cr5, [r0], -#912
    */
}

/**
 * Symbol: TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)
 * Address: 00051fe0
 */
TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *) {
    /*
         51fe0:	e1a0c00d 	mov	ip, sp
         51fe4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         51fe8:	e24cb004 	sub	fp, ip, #4	; 0x4
         51fec:	e1a05001 	mov	r5, r1
         51ff0:	e1a04002 	mov	r4, r2
         51ff4:	e3a08000 	mov	r8, #0	; 0x0
         51ff8:	e3a07000 	mov	r7, #0	; 0x0
         51ffc:	e3a06000 	mov	r6, #0	; 0x0
         52000:	e3a09000 	mov	r9, #0	; 0x0
         52004:	e5d20027 	ldrb	r0, [r2, #39]
         52008:	e3500000 	cmp	r0, #0	; 0x0
         5200c:	9a000019 	bls	52078 <TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)+0x98>
         52010:	e1a01009 	mov	r1, r9
         52014:	e1a00004 	mov	r0, r4
         52018:	eb6e065a 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         5201c:	e1b01000 	movs	r1, r0
         52020:	0a00000e 	beq	52060 <TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)+0x80>
         52024:	e5910008 	ldr	r0, [r1, #8]	; fField8
         52028:	e5d12014 	ldrb	r2, [r1, #20]	; fField20
         5202c:	e332000d 	teq	r2, #13	; 0xd
         52030:	1a000002 	bne	52040 <TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)+0x60>
         52034:	e1500006 	cmp	r0, r6
         52038:	81a06000 	movhi	r6, r0
         5203c:	ea000007 	b	52060 <TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)+0x80>
         52040:	e5911010 	ldr	r1, [r1, #16]	; fField16
         52044:	e3110101 	tst	r1, #1073741824	; 0x40000000
         52048:	0a000002 	beq	52058 <TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)+0x78>
         5204c:	e1500008 	cmp	r0, r8
         52050:	81a08000 	movhi	r8, r0
         52054:	ea000001 	b	52060 <TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)+0x80>
         52058:	e1500007 	cmp	r0, r7
         5205c:	81a07000 	movhi	r7, r0
         52060:	e2899001 	add	r9, r9, #1	; 0x1
         52064:	e5d40027 	ldrb	r0, [r4, #39]
         52068:	e1500009 	cmp	r0, r9
         5206c:	8affffe7 	bhi	52010 <TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)+0x30>
         52070:	e3580f4b 	cmp	r8, #300	; 0x12c
         52074:	2a000000 	bcs	5207c <TCardServer::SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)+0x9c>
         52078:	e3a08f4b 	mov	r8, #300	; 0x12c
         5207c:	e1a01008 	mov	r1, r8
         52080:	e1a00005 	mov	r0, r5
         52084:	eb6e2336 	bl	1bdad64 <TCardSocket::$SetAttributeMemSpeed(unsigned long)>
         52088:	e3370000 	teq	r7, #0	; 0x0
         5208c:	03a07f4b 	moveq	r7, #300	; 0x12c
         52090:	e1a01007 	mov	r1, r7
         52094:	e1a00005 	mov	r0, r5
         52098:	eb6e273d 	bl	1bdbd94 <TCardSocket::$SetCommonMemSpeed(unsigned long)>
         5209c:	e35600a5 	cmp	r6, #165	; 0xa5
         520a0:	33a060a5 	movcc	r6, #165	; 0xa5
         520a4:	e1a01006 	mov	r1, r6
         520a8:	e1a00005 	mov	r0, r5
         520ac:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         520b0:	ea6e2744 	b	1bdbdc8 <TCardSocket::$SetIOSpeed(unsigned long)>
    */
}

/**
 * Symbol: TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)
 * Address: 000520b4
 */
TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *) {
    /*
         520b4:	e1a0c00d 	mov	ip, sp
         520b8:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         520bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         520c0:	e1a07000 	mov	r7, r0
         520c4:	e1a05001 	mov	r5, r1
         520c8:	e1a04003 	mov	r4, r3
         520cc:	e3a00000 	mov	r0, #0	; 0x0
         520d0:	e52d0018 	str	r0, [sp, -#24]!	; fField24
         520d4:	e51b0030 	ldr	r0, [fp, -#48]
         520d8:	eb6e2b57 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         520dc:	e1a08000 	mov	r8, r0
         520e0:	e3a09000 	mov	r9, #0	; 0x0
         520e4:	e52d906c 	str	r9, [sp, -#108]!
         520e8:	e28d0008 	add	r0, sp, #8	; 0x8
         520ec:	eb6d8220 	bl	1bb2974 <$setjmp>
         520f0:	e3300000 	teq	r0, #0	; 0x0
         520f4:	1a0000a3 	bne	52388 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x2d4>
         520f8:	e1a0000d 	mov	r0, sp
         520fc:	eb6e37de 	bl	1be007c <$AddExceptionHandler>
         52100:	e3a06000 	mov	r6, #0	; 0x0
         52104:	e2841f7d 	add	r1, r4, #500	; 0x1f4
         52108:	e58d1080 	str	r1, [sp, #128]
         5210c:	e59fa024 	ldr	sl, [pc, #24]	; 52138 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x84>	; fField24
         52110:	e59f3024 	ldr	r3, [pc, #24]	; 5213c <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x88>	; fField24
         52114:	e2872a02 	add	r2, r7, #8192	; 0x2000
         52118:	e1a00808 	mov	r0, r8, lsl #16
         5211c:	e1a00820 	mov	r0, r0, lsr #16
         52120:	e58d0074 	str	r0, [sp, #116]
         52124:	e58d2078 	str	r2, [sp, #120]
         52128:	e58d307c 	str	r3, [sp, #124]
         5212c:	e1a00420 	mov	r0, r0, lsr #8
         52130:	e58d0070 	str	r0, [sp, #112]	; fField112
         52134:	ea000069 	b	522e0 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x22c>
         52138:	0c1011a8 	ldfeqs	f1, [r0], -#672
         5213c:	003773d4 	ldreqsb	r7, [r7], -r4
         52140:	e1a01006 	mov	r1, r6
         52144:	e1a00005 	mov	r0, r5
         52148:	eb6e0610 	bl	1bd3990 <TCardPCMCIA::$GetCardPackage(unsigned long const)>
         5214c:	e1b07000 	movs	r7, r0
         52150:	0a000061 	beq	522dc <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x228>
         52154:	e24dd004 	sub	sp, sp, #4	; 0x4
         52158:	e5972004 	ldr	r2, [r7, #4]	; fField4
         5215c:	e3a09000 	mov	r9, #0	; 0x0
         52160:	e58d2000 	str	r2, [sp]
         52164:	e5d7000d 	ldrb	r0, [r7, #13]
         52168:	e3300000 	teq	r0, #0	; 0x0
         5216c:	0a000005 	beq	52188 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0xd4>
         52170:	e51b0030 	ldr	r0, [fp, -#48]
         52174:	eb6df58d 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         52178:	e5971000 	ldr	r1, [r7]
         5217c:	e0801001 	add	r1, r0, r1
         52180:	e3a09001 	mov	r9, #1	; 0x1
         52184:	ea000015 	b	521e0 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x12c>
         52188:	e59d0084 	ldr	r0, [sp, #132]
         5218c:	e5902000 	ldr	r2, [r0]
         52190:	e79a1108 	ldr	r1, [sl, r8, lsl #2]	; fField2
         52194:	e3a03000 	mov	r3, #0	; 0x0
         52198:	e594020c 	ldr	r0, [r4, #524]
         5219c:	eb6e1ec7 	bl	1bd9cc0 <$RememberPhysMap__15TUDomainManagerSFUlN21Uc>
         521a0:	e58d0070 	str	r0, [sp, #112]	; fField112
         521a4:	e3300000 	teq	r0, #0	; 0x0
         521a8:	1a000007 	bne	521cc <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x118>
         521ac:	e79a1108 	ldr	r1, [sl, r8, lsl #2]	; fField2
         521b0:	e3a03003 	mov	r3, #3	; 0x3
         521b4:	e3a02301 	mov	r2, #67108864	; 0x4000000
         521b8:	e594020c 	ldr	r0, [r4, #524]
         521bc:	eb6e1ebd 	bl	1bd9cb8 <$RememberPermMap__15TUDomainManagerSFUlN214Perm>
         521c0:	e58d0070 	str	r0, [sp, #112]	; fField112
         521c4:	e3300000 	teq	r0, #0	; 0x0
         521c8:	0a000001 	beq	521d4 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x120>
         521cc:	e28dd004 	add	sp, sp, #4	; 0x4
         521d0:	ea000078 	b	523b8 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x304>
         521d4:	e79a0108 	ldr	r0, [sl, r8, lsl #2]	; fField2
         521d8:	e5971000 	ldr	r1, [r7]
         521dc:	e0801001 	add	r1, r0, r1
         521e0:	e3a00000 	mov	r0, #0	; 0x0
         521e4:	e0892910 	add	r2, r9, r0, lsl r9
         521e8:	e7d12002 	ldrb	r2, [r1, r2]
         521ec:	e59d3080 	ldr	r3, [sp, #128]
         521f0:	e7d33000 	ldrb	r3, [r3, r0]
         521f4:	e1a03c03 	mov	r3, r3, lsl #24
         521f8:	e1320c43 	teq	r2, r3, asr #24
         521fc:	13a02000 	movne	r2, #0	; 0x0
         52200:	03a02001 	moveq	r2, #1	; 0x1
         52204:	e20220ff 	and	r2, r2, #255	; 0xff
         52208:	e2800001 	add	r0, r0, #1	; 0x1
         5220c:	e3500007 	cmp	r0, #7	; 0x7
         52210:	2a000002 	bcs	52220 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x16c>
         52214:	e3320000 	teq	r2, #0	; 0x0
         52218:	1afffff1 	bne	521e4 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x130>
         5221c:	ea00002d 	b	522d8 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x224>
         52220:	e3320000 	teq	r2, #0	; 0x0
         52224:	0a00002b 	beq	522d8 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x224>
         52228:	e3a00000 	mov	r0, #0	; 0x0
         5222c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         52230:	e59d2080 	ldr	r2, [sp, #128]
         52234:	e5c20968 	strb	r0, [r2, #2408]
         52238:	e5d7300d 	ldrb	r3, [r7, #13]
         5223c:	e3330000 	teq	r3, #0	; 0x0
         52240:	0a00003e 	beq	52340 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x28c>
         52244:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         52248:	e59d2020 	ldr	r2, [sp, #32]	; fField32
         5224c:	e1a0000d 	mov	r0, sp
         52250:	eb6b8e1a 	bl	1b35ac0 <TCardPipe::$__ct(void *, unsigned long, unsigned char)>
         52254:	e3a00002 	mov	r0, #2	; 0x2
         52258:	e5cd0014 	strb	r0, [sp, #20]	; fField20
         5225c:	e3a00001 	mov	r0, #1	; 0x1
         52260:	e5cd0015 	strb	r0, [sp, #21]
         52264:	e59d0098 	ldr	r0, [sp, #152]
         52268:	e5cd0017 	strb	r0, [sp, #23]
         5226c:	e59d0094 	ldr	r0, [sp, #148]
         52270:	e5cd0016 	strb	r0, [sp, #22]
         52274:	e28d301c 	add	r3, sp, #28	; 0x1c
         52278:	e1a0000d 	mov	r0, sp
         5227c:	e28d2014 	add	r2, sp, #20	; 0x14
         52280:	e8920006 	ldmia	r2, {r1, r2}
         52284:	eb6e122e 	bl	1bd6b44 <$LoadPackage(CPipe *, SourceType, unsigned long *)>
         52288:	e58d0090 	str	r0, [sp, #144]
         5228c:	e3300000 	teq	r0, #0	; 0x0
         52290:	e1a0000d 	mov	r0, sp
         52294:	e3a01000 	mov	r1, #0	; 0x0
         52298:	e59d2000 	ldr	r2, [sp]
         5229c:	0a000003 	beq	522b0 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x1fc>
         522a0:	e1a0e00f 	mov	lr, pc
         522a4:	e1a0f002 	mov	pc, r2
         522a8:	e28dd024 	add	sp, sp, #36	; 0x24
         522ac:	ea000041 	b	523b8 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x304>
         522b0:	e1a0e00f 	mov	lr, pc
         522b4:	e1a0f002 	mov	pc, r2
         522b8:	e28dd01c 	add	sp, sp, #28	; 0x1c
         522bc:	e59d0074 	ldr	r0, [sp, #116]
         522c0:	e3300000 	teq	r0, #0	; 0x0
         522c4:	1a000002 	bne	522d4 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x220>
         522c8:	e0841106 	add	r1, r4, r6, lsl #2
         522cc:	e59d0000 	ldr	r0, [sp]
         522d0:	e5a10038 	str	r0, [r1, #56]!	; fField56
         522d4:	e28dd004 	add	sp, sp, #4	; 0x4
         522d8:	e28dd004 	add	sp, sp, #4	; 0x4
         522dc:	e2866001 	add	r6, r6, #1	; 0x1
         522e0:	e5d50029 	ldrb	r0, [r5, #41]
         522e4:	e1500006 	cmp	r0, r6
         522e8:	9a000001 	bls	522f4 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x240>
         522ec:	e3560008 	cmp	r6, #8	; 0x8
         522f0:	3affff92 	bcc	52140 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x8c>
         522f4:	e2846fd2 	add	r6, r4, #840	; 0x348
         522f8:	e1a01005 	mov	r1, r5
         522fc:	e1a00006 	mov	r0, r6
         52300:	eb6ed42c 	bl	1c073b8 <TCardATALoader::$GetCardType(TCardPCMCIA *)>
         52304:	e3300000 	teq	r0, #0	; 0x0
         52308:	0a00002a 	beq	523b8 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x304>
         5230c:	e5940000 	ldr	r0, [r4]
         52310:	e3800401 	orr	r0, r0, #16777216	; 0x1000000
         52314:	e3a03001 	mov	r3, #1	; 0x1
         52318:	e3a02000 	mov	r2, #0	; 0x0
         5231c:	e5840000 	str	r0, [r4]
         52320:	e92d000c 	stmdb	sp!, {r2, r3}
         52324:	e2843fcd 	add	r3, r4, #820	; 0x334
         52328:	e1a02005 	mov	r2, r5
         5232c:	e1a00006 	mov	r0, r6
         52330:	e51b1030 	ldr	r1, [fp, -#48]
         52334:	eb6eece3 	bl	1c0d6c8 <TCardATALoader::$LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)>
         52338:	e28dd008 	add	sp, sp, #8	; 0x8
         5233c:	ea000018 	b	523a4 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x2f0>
         52340:	e3a00003 	mov	r0, #3	; 0x3
         52344:	e56d0008 	strb	r0, [sp, -#8]!	; fField8
         52348:	e3a00001 	mov	r0, #1	; 0x1
         5234c:	e5cd0001 	strb	r0, [sp, #1]
         52350:	e59d0084 	ldr	r0, [sp, #132]
         52354:	e5cd0003 	strb	r0, [sp, #3]
         52358:	e59d0080 	ldr	r0, [sp, #128]
         5235c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         52360:	e28d3008 	add	r3, sp, #8	; 0x8
         52364:	e1a00001 	mov	r0, r1
         52368:	e89d0006 	ldmia	sp, {r1, r2}
         5236c:	eb6e11f6 	bl	1bd6b4c <$LoadPackage(char *, SourceType, unsigned long *)>
         52370:	e58d007c 	str	r0, [sp, #124]
         52374:	e3300000 	teq	r0, #0	; 0x0
         52378:	028dd008 	addeq	sp, sp, #8	; 0x8
         5237c:	0affffd1 	beq	522c8 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x214>
         52380:	e28dd010 	add	sp, sp, #16	; 0x10
         52384:	ea00000b 	b	523b8 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x304>
         52388:	e59d0060 	ldr	r0, [sp, #96]
         5238c:	e28f1f06 	add	r1, pc, #24	; 0x18
         52390:	eb6e437f 	bl	1be3194 <$Subexception>
         52394:	e3300000 	teq	r0, #0	; 0x0
         52398:	0a000004 	beq	523b0 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x2fc>
         5239c:	e3a000b5 	mov	r0, #181	; 0xb5
         523a0:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         523a4:	e58d006c 	str	r0, [sp, #108]
         523a8:	ea000002 	b	523b8 <TCardServer::LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)+0x304>
         523ac:	00000000 	andeq	r0, r0, r0
         523b0:	e1a0000d 	mov	r0, sp
         523b4:	eb6e3f66 	bl	1be2154 <$NextHandler>
         523b8:	e1a0000d 	mov	r0, sp
         523bc:	eb6e3b3d 	bl	1be10b8 <$ExitHandler>
         523c0:	e5bd006c 	ldr	r0, [sp, #108]!
         523c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::CardIntHandler(TCardSocket *)
 * Address: 000523cc
 */
TCardServer::CardIntHandler(TCardSocket *) {
    /*
         523cc:	e1a0c00d 	mov	ip, sp
         523d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         523d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         523d8:	e1a05000 	mov	r5, r0
         523dc:	e1a04001 	mov	r4, r1
         523e0:	e59f009c 	ldr	r0, [pc, #9c]	; 52484 <TCardServer::CardIntHandler(TCardSocket *)+0xb8>
         523e4:	e5900000 	ldr	r0, [r0]
         523e8:	e3300000 	teq	r0, #0	; 0x0
         523ec:	1b6ad81c 	blne	1b08464 <$UnHookTracker(unsigned long)>
         523f0:	e1a00004 	mov	r0, r4
         523f4:	e3a01003 	mov	r1, #3	; 0x3
         523f8:	eb6dfd2f 	bl	1bd18bc <TCardSocket::$DisableSocketInterrupt(TSocketInt)>
         523fc:	e1a00004 	mov	r0, r4
         52400:	e3a01002 	mov	r1, #2	; 0x2
         52404:	eb6dfd2c 	bl	1bd18bc <TCardSocket::$DisableSocketInterrupt(TSocketInt)>
         52408:	e1a00004 	mov	r0, r4
         5240c:	eb6e2a8a 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         52410:	e1a06000 	mov	r6, r0
         52414:	e59f006c 	ldr	r0, [pc, #6c]	; 52488 <TCardServer::CardIntHandler(TCardSocket *)+0xbc>
         52418:	e7902106 	ldr	r2, [r0, r6, lsl #2]	; fField2
         5241c:	e5920308 	ldr	r0, [r2, #776]
         52420:	e3300002 	teq	r0, #2	; 0x2
         52424:	1a000005 	bne	52440 <TCardServer::CardIntHandler(TCardSocket *)+0x74>
         52428:	e3a00003 	mov	r0, #3	; 0x3
         5242c:	e1a01004 	mov	r1, r4
         52430:	e5820308 	str	r0, [r2, #776]
         52434:	e1a00005 	mov	r0, r5
         52438:	e3a03002 	mov	r3, #2	; 0x2
         5243c:	eb6ba238 	bl	1b3ad24 <TCardServer::$SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long)>
         52440:	e24dd010 	sub	sp, sp, #16	; 0x10
         52444:	e1a0000d 	mov	r0, sp
         52448:	e3a01ffe 	mov	r1, #1016	; 0x3f8
         5244c:	e2811b47 	add	r1, r1, #72704	; 0x11c00
         52450:	eb6e2e8e 	bl	1bdde90 <$TimeFromNow>
         52454:	e28d0008 	add	r0, sp, #8	; 0x8
         52458:	e89d5000 	ldmia	sp, {ip, lr}
         5245c:	e8805000 	stmia	r0, {ip, lr}
         52460:	e28d3008 	add	r3, sp, #8	; 0x8
         52464:	e3a02000 	mov	r2, #0	; 0x0
         52468:	e92d000c 	stmdb	sp!, {r2, r3}
         5246c:	e1a02006 	mov	r2, r6
         52470:	e1a00005 	mov	r0, r5
         52474:	e3a03000 	mov	r3, #0	; 0x0
         52478:	e3a010ca 	mov	r1, #202	; 0xca
         5247c:	eb6b99e9 	bl	1b38c28 <TCardServer::$SendSelfMessage(unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         52480:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         52484:	0c1016b8 	ldceq	6, cr1, [r0], -#736
         52488:	0c105fe4 	ldceq	15, cr5, [r0], -#912
    */
}

/**
 * Symbol: TCardServer::SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long)
 * Address: 0005248c
 */
TCardServer::SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long) {
    /*
         5248c:	e1a0c00d 	mov	ip, sp
         52490:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         52494:	e24cb004 	sub	fp, ip, #4	; 0x4
         52498:	e1a04001 	mov	r4, r1
         5249c:	e1a05002 	mov	r5, r2
         524a0:	e1a06003 	mov	r6, r3
         524a4:	e24dd004 	sub	sp, sp, #4	; 0x4
         524a8:	e1a00001 	mov	r0, r1
         524ac:	eb6e2a62 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         524b0:	e1a07000 	mov	r7, r0
         524b4:	e1a00004 	mov	r0, r4
         524b8:	e2852e36 	add	r2, r5, #864	; 0x360
         524bc:	e8920006 	ldmia	r2, {r1, r2}
         524c0:	eb6b9e04 	bl	1b39cd8 <TCardSocket::$MakeSocketInaccessible(unsigned long, unsigned long)>
         524c4:	e58d0000 	str	r0, [sp]
         524c8:	e59f007c 	ldr	r0, [pc, #7c]	; 5254c <TCardServer::SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long)+0xc0>
         524cc:	e7901107 	ldr	r1, [r0, r7, lsl #2]	; fField2
         524d0:	e1a00004 	mov	r0, r4
         524d4:	e3a02301 	mov	r2, #67108864	; 0x4000000
         524d8:	eb6b9dfe 	bl	1b39cd8 <TCardSocket::$MakeSocketInaccessible(unsigned long, unsigned long)>
         524dc:	e58d0000 	str	r0, [sp]
         524e0:	e1a00004 	mov	r0, r4
         524e4:	eb6df4b1 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         524e8:	e1a01000 	mov	r1, r0
         524ec:	e1a00004 	mov	r0, r4
         524f0:	e3a02303 	mov	r2, #201326592	; 0xc000000
         524f4:	eb6b9df7 	bl	1b39cd8 <TCardSocket::$MakeSocketInaccessible(unsigned long, unsigned long)>
         524f8:	e58d0000 	str	r0, [sp]
         524fc:	e1a00004 	mov	r0, r4
         52500:	eb6e2a4d 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         52504:	e1a01006 	mov	r1, r6
         52508:	eb6afcf7 	bl	1b118ec <$SetCardFaultState__12TCardDomainsSFUl16TCardFaultStates>
         5250c:	e3a00000 	mov	r0, #0	; 0x0
         52510:	e52d006c 	str	r0, [sp, -#108]!
         52514:	e28d0008 	add	r0, sp, #8	; 0x8
         52518:	eb6d8115 	bl	1bb2974 <$setjmp>
         5251c:	e3300000 	teq	r0, #0	; 0x0
         52520:	1a00000a 	bne	52550 <TCardServer::SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long)+0xc4>
         52524:	e1a0000d 	mov	r0, sp
         52528:	eb6e36d3 	bl	1be007c <$AddExceptionHandler>
         5252c:	e595000c 	ldr	r0, [r5, #12]
         52530:	e3300000 	teq	r0, #0	; 0x0
         52534:	0a000011 	beq	52580 <TCardServer::SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long)+0xf4>
         52538:	e5951000 	ldr	r1, [r5]
         5253c:	e3110402 	tst	r1, #33554432	; 0x2000000
         52540:	1a00000e 	bne	52580 <TCardServer::SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long)+0xf4>
         52544:	eb0ccfa8 	bl	3863ec <TCardHandler::EmergencyShutdown(void)>
         52548:	ea000007 	b	5256c <TCardServer::SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long)+0xe0>
         5254c:	0c1011a8 	ldfeqs	f1, [r0], -#672
         52550:	e59d0060 	ldr	r0, [sp, #96]
         52554:	e28f1f06 	add	r1, pc, #24	; 0x18
         52558:	eb6e430d 	bl	1be3194 <$Subexception>
         5255c:	e3300000 	teq	r0, #0	; 0x0
         52560:	0a000004 	beq	52578 <TCardServer::SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long)+0xec>
         52564:	e3a000b5 	mov	r0, #181	; 0xb5
         52568:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         5256c:	e58d006c 	str	r0, [sp, #108]
         52570:	ea000002 	b	52580 <TCardServer::SuspendSocketAccess(TCardSocket *, TCardSocketState *, unsigned long)+0xf4>
         52574:	00000000 	andeq	r0, r0, r0
         52578:	e1a0000d 	mov	r0, sp
         5257c:	eb6e3ef4 	bl	1be2154 <$NextHandler>
         52580:	e1a0000d 	mov	r0, sp
         52584:	eb6e3acb 	bl	1be10b8 <$ExitHandler>
         52588:	e5bd006c 	ldr	r0, [sp, #108]!
         5258c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::ResumeSocketAccess(TCardSocket *, TCardSocketState *)
 * Address: 00052590
 */
TCardServer::ResumeSocketAccess(TCardSocket *, TCardSocketState *) {
    /*
         52590:	e1a0c00d 	mov	ip, sp
         52594:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         52598:	e24cb004 	sub	fp, ip, #4	; 0x4
         5259c:	e1a04001 	mov	r4, r1
         525a0:	e1a05002 	mov	r5, r2
         525a4:	e1a00001 	mov	r0, r1
         525a8:	eb6e2a23 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         525ac:	e1a06000 	mov	r6, r0
         525b0:	e1a00004 	mov	r0, r4
         525b4:	e2855fd7 	add	r5, r5, #860	; 0x35c
         525b8:	e9b50006 	ldmib	r5!, {r1, r2}
         525bc:	eb6b9dc4 	bl	1b39cd4 <TCardSocket::$MakeSocketAccessible(unsigned long, unsigned long)>
         525c0:	e59f0028 	ldr	r0, [pc, #28]	; 525f0 <TCardServer::ResumeSocketAccess(TCardSocket *, TCardSocketState *)+0x60>	; fField28
         525c4:	e7901106 	ldr	r1, [r0, r6, lsl #2]	; fField2
         525c8:	e1a00004 	mov	r0, r4
         525cc:	e3a02301 	mov	r2, #67108864	; 0x4000000
         525d0:	eb6b9dbf 	bl	1b39cd4 <TCardSocket::$MakeSocketAccessible(unsigned long, unsigned long)>
         525d4:	e1a00004 	mov	r0, r4
         525d8:	eb6df474 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         525dc:	e1a01000 	mov	r1, r0
         525e0:	e1a00004 	mov	r0, r4
         525e4:	e3a02303 	mov	r2, #201326592	; 0xc000000
         525e8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         525ec:	ea6b9db8 	b	1b39cd4 <TCardSocket::$MakeSocketAccessible(unsigned long, unsigned long)>
         525f0:	0c1011a8 	ldfeqs	f1, [r0], -#672
    */
}

/**
 * Symbol: TCardServer::CardReinsertAlertProc(unsigned long, unsigned long)
 * Address: 000525f4
 */
TCardServer::CardReinsertAlertProc(unsigned long, unsigned long) {
    /*
         525f4:	e1a0c00d 	mov	ip, sp
         525f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         525fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         52600:	e59f103c 	ldr	r1, [pc, #3c]	; 52644 <TCardServer::CardReinsertAlertProc(unsigned long, unsigned long)+0x50>
         52604:	e7911102 	ldr	r1, [r1, r2, lsl #2]	; fField2
         52608:	e591130c 	ldr	r1, [r1, #780]
         5260c:	e3310001 	teq	r1, #1	; 0x1
         52610:	13a01000 	movne	r1, #0	; 0x0
         52614:	03a01001 	moveq	r1, #1	; 0x1
         52618:	e21140ff 	ands	r4, r1, #255	; 0xff
         5261c:	0a000006 	beq	5263c <TCardServer::CardReinsertAlertProc(unsigned long, unsigned long)+0x48>
         52620:	e2800a02 	add	r0, r0, #8192	; 0x2000
         52624:	e59019d8 	ldr	r1, [r0, #2520]	; fField2520
         52628:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
         5262c:	e58019d8 	str	r1, [r0, #2520]	; fField2520
         52630:	e59009c0 	ldr	r0, [r0, #2496]	; fField2496
         52634:	e5900010 	ldr	r0, [r0, #16]	; fField16
         52638:	eb6b9d95 	bl	1b39c94 <TCardReinsertAlertDialog::$Done(void)>
         5263c:	e1a00004 	mov	r0, r4
         52640:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         52644:	0c105fe4 	ldceq	15, cr5, [r0], -#912
    */
}

/**
 * Symbol: TCardServer::CardPositionAlertProc(unsigned long, unsigned long)
 * Address: 00052648
 */
TCardServer::CardPositionAlertProc(unsigned long, unsigned long) {
    /*
         52648:	e2800a02 	add	r0, r0, #8192	; 0x2000
         5264c:	e59009d8 	ldr	r0, [r0, #2520]	; fField2520
         52650:	e3100101 	tst	r0, #1073741824	; 0x40000000
         52654:	13a00000 	movne	r0, #0	; 0x0
         52658:	03a00001 	moveq	r0, #1	; 0x1
         5265c:	e20000ff 	and	r0, r0, #255	; 0xff
         52660:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardServer::DoCardEjection(unsigned long, TCardSocket *, TCardSocketState *)
 * Address: 00052664
 */
TCardServer::DoCardEjection(unsigned long, TCardSocket *, TCardSocketState *) {
    /*
         52664:	e3a00000 	mov	r0, #0	; 0x0
         52668:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)
 * Address: 0005266c
 */
TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *) {
    /*
         5266c:	e1a0c00d 	mov	ip, sp
         52670:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         52674:	e24cb004 	sub	fp, ip, #4	; 0x4
         52678:	e1a06000 	mov	r6, r0
         5267c:	e1a07001 	mov	r7, r1
         52680:	e1a04002 	mov	r4, r2
         52684:	e1a05003 	mov	r5, r3
         52688:	e24dd008 	sub	sp, sp, #8	; 0x8
         5268c:	e3a08000 	mov	r8, #0	; 0x0
         52690:	e1a0000d 	mov	r0, sp
         52694:	e3a01064 	mov	r1, #100	; 0x64
         52698:	eb6e112e 	bl	1bd6b58 <$LockStack>
         5269c:	e3a09000 	mov	r9, #0	; 0x0
         526a0:	eb0d0106 	bl	392ac0 <EnterAtomic>
         526a4:	e24dd004 	sub	sp, sp, #4	; 0x4
         526a8:	e1a00004 	mov	r0, r4
         526ac:	eb6e08d7 	bl	1bd4a10 <TCardSocket::$GetPCPins(void)>
         526b0:	e200a080 	and	sl, r0, #128	; 0x80
         526b4:	e2002003 	and	r2, r0, #3	; 0x3
         526b8:	e58d2000 	str	r2, [sp]
         526bc:	eb6b9d88 	bl	1b39ce4 <$PatchPoint(void)>
         526c0:	e5950308 	ldr	r0, [r5, #776]
         526c4:	e3a01002 	mov	r1, #2	; 0x2
         526c8:	e59d2000 	ldr	r2, [sp]
         526cc:	e3320003 	teq	r2, #3	; 0x3
         526d0:	033a0000 	teqeq	sl, #0	; 0x0
         526d4:	1a000020 	bne	5275c <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0xf0>
         526d8:	e3300003 	teq	r0, #3	; 0x3
         526dc:	1a000015 	bne	52738 <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0xcc>
         526e0:	e5851308 	str	r1, [r5, #776]
         526e4:	e1a02005 	mov	r2, r5
         526e8:	e1a01004 	mov	r1, r4
         526ec:	e1a00006 	mov	r0, r6
         526f0:	eb6b9d80 	bl	1b39cf8 <TCardServer::$ResumeSocketAccess(TCardSocket *, TCardSocketState *)>
         526f4:	e1a00004 	mov	r0, r4
         526f8:	e3a01003 	mov	r1, #3	; 0x3
         526fc:	eb6df849 	bl	1bd0828 <TCardSocket::$ClearSocketInterrupt(TSocketInt)>
         52700:	e1a00004 	mov	r0, r4
         52704:	e3a01002 	mov	r1, #2	; 0x2
         52708:	eb6df846 	bl	1bd0828 <TCardSocket::$ClearSocketInterrupt(TSocketInt)>
         5270c:	e1a00004 	mov	r0, r4
         52710:	e3a02009 	mov	r2, #9	; 0x9
         52714:	e3a01002 	mov	r1, #2	; 0x2
         52718:	eb6eefff 	bl	1c0e71c <TCardSocket::$SetSocketInterruptFlags(TSocketInt, TSocketIntFlags)>
         5271c:	e1a00004 	mov	r0, r4
         52720:	e3a01003 	mov	r1, #3	; 0x3
         52724:	eb6dfc6b 	bl	1bd18d8 <TCardSocket::$EnableSocketInterrupt(TSocketInt)>
         52728:	e1a00004 	mov	r0, r4
         5272c:	e3a01002 	mov	r1, #2	; 0x2
         52730:	eb6dfc68 	bl	1bd18d8 <TCardSocket::$EnableSocketInterrupt(TSocketInt)>
         52734:	ea000010 	b	5277c <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x110>
         52738:	e3300002 	teq	r0, #2	; 0x2
         5273c:	0a00000e 	beq	5277c <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x110>
         52740:	e3a09004 	mov	r9, #4	; 0x4
         52744:	e5851308 	str	r1, [r5, #776]
         52748:	e595030c 	ldr	r0, [r5, #780]
         5274c:	e3300000 	teq	r0, #0	; 0x0
         52750:	03a00001 	moveq	r0, #1	; 0x1
         52754:	0585030c 	streq	r0, [r5, #780]
         52758:	ea000007 	b	5277c <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x110>
         5275c:	e3a09002 	mov	r9, #2	; 0x2
         52760:	e3300000 	teq	r0, #0	; 0x0
         52764:	13a00000 	movne	r0, #0	; 0x0
         52768:	13a0900a 	movne	r9, #10	; 0xa
         5276c:	15850308 	strne	r0, [r5, #776]
         52770:	e595030c 	ldr	r0, [r5, #780]
         52774:	e3300001 	teq	r0, #1	; 0x1
         52778:	0585130c 	streq	r1, [r5, #780]
         5277c:	eb0d00e6 	bl	392b1c <ExitAtomic>
         52780:	eb6b9d57 	bl	1b39ce4 <$PatchPoint(void)>
         52784:	e3190002 	tst	r9, #2	; 0x2
         52788:	0a000006 	beq	527a8 <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x13c>
         5278c:	e1a01004 	mov	r1, r4
         52790:	e1a00006 	mov	r0, r6
         52794:	eb6b9508 	bl	1b37bbc <TCardServer::$InitializePCMCIABus(TCardSocket *)>
         52798:	e1a02005 	mov	r2, r5
         5279c:	e1a01004 	mov	r1, r4
         527a0:	e1a00006 	mov	r0, r6
         527a4:	eb6b9502 	bl	1b37bb4 <TCardServer::$InitializeCardDetection(TCardSocket *, TCardSocketState *)>
         527a8:	e3190004 	tst	r9, #4	; 0x4
         527ac:	0a000039 	beq	52898 <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x22c>
         527b0:	e1a01004 	mov	r1, r4
         527b4:	e1a00006 	mov	r0, r6
         527b8:	eb6ba162 	bl	1b3ad48 <TCardServer::$SelectCardCISPower(TCardSocket *)>
         527bc:	e1b08000 	movs	r8, r0
         527c0:	03a0a000 	moveq	sl, #0	; 0x0
         527c4:	13a0a001 	movne	sl, #1	; 0x1
         527c8:	e33a0000 	teq	sl, #0	; 0x0
         527cc:	1a000019 	bne	52838 <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x1cc>
         527d0:	e1a00007 	mov	r0, r7
         527d4:	eb6eefd9 	bl	1c0e740 <$RestoreCardPower(unsigned long)>
         527d8:	e1a00007 	mov	r0, r7
         527dc:	e3a01000 	mov	r1, #0	; 0x0
         527e0:	eb6e2dbc 	bl	1bdded8 <$VccOn(int, unsigned char)>
         527e4:	e1a00004 	mov	r0, r4
         527e8:	eb6e14ff 	bl	1bd7bec <TCardSocket::$PCMCIAReset(void)>
         527ec:	e3a00032 	mov	r0, #50	; 0x32
         527f0:	e58501f0 	str	r0, [r5, #496]
         527f4:	e24dd010 	sub	sp, sp, #16	; 0x10
         527f8:	e1a0000d 	mov	r0, sp
         527fc:	e59f1108 	ldr	r1, [pc, #108]	; 5290c <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x2a0>
         52800:	eb6e2da2 	bl	1bdde90 <$TimeFromNow>
         52804:	e28d0008 	add	r0, sp, #8	; 0x8
         52808:	e89d5000 	ldmia	sp, {ip, lr}
         5280c:	e8805000 	stmia	r0, {ip, lr}
         52810:	e28d3008 	add	r3, sp, #8	; 0x8
         52814:	e3a02000 	mov	r2, #0	; 0x0
         52818:	e92d000c 	stmdb	sp!, {r2, r3}
         5281c:	e1a02007 	mov	r2, r7
         52820:	e1a00006 	mov	r0, r6
         52824:	e3a03000 	mov	r3, #0	; 0x0
         52828:	e3a010cb 	mov	r1, #203	; 0xcb
         5282c:	eb6b98fd 	bl	1b38c28 <TCardServer::$SendSelfMessage(unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         52830:	e1a08000 	mov	r8, r0
         52834:	e28dd018 	add	sp, sp, #24	; 0x18
         52838:	e1a00004 	mov	r0, r4
         5283c:	e3a01003 	mov	r1, #3	; 0x3
         52840:	eb6df7f8 	bl	1bd0828 <TCardSocket::$ClearSocketInterrupt(TSocketInt)>
         52844:	e1a00004 	mov	r0, r4
         52848:	e3a01002 	mov	r1, #2	; 0x2
         5284c:	eb6df7f5 	bl	1bd0828 <TCardSocket::$ClearSocketInterrupt(TSocketInt)>
         52850:	e1a00004 	mov	r0, r4
         52854:	e3a02009 	mov	r2, #9	; 0x9
         52858:	e3a01002 	mov	r1, #2	; 0x2
         5285c:	eb6eefae 	bl	1c0e71c <TCardSocket::$SetSocketInterruptFlags(TSocketInt, TSocketIntFlags)>
         52860:	eb0d0096 	bl	392ac0 <EnterAtomic>
         52864:	e1a00004 	mov	r0, r4
         52868:	e3a01003 	mov	r1, #3	; 0x3
         5286c:	eb6dfc19 	bl	1bd18d8 <TCardSocket::$EnableSocketInterrupt(TSocketInt)>
         52870:	e1a00004 	mov	r0, r4
         52874:	e3a01002 	mov	r1, #2	; 0x2
         52878:	eb6dfc16 	bl	1bd18d8 <TCardSocket::$EnableSocketInterrupt(TSocketInt)>
         5287c:	eb0d00a6 	bl	392b1c <ExitAtomic>
         52880:	e33a0000 	teq	sl, #0	; 0x0
         52884:	1a000029 	bne	52930 <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x2c4>
         52888:	eb6afc10 	bl	1b118d0 <$ReleaseBlockedTask__12TCardDomainsSFv>
         5288c:	e1a08000 	mov	r8, r0
         52890:	e1a00007 	mov	r0, r7
         52894:	eb6e2d8c 	bl	1bddecc <$VccOff(int)>
         52898:	e3190008 	tst	r9, #8	; 0x8
         5289c:	0a000023 	beq	52930 <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x2c4>
         528a0:	e3a03000 	mov	r3, #0	; 0x0
         528a4:	e3a02000 	mov	r2, #0	; 0x0
         528a8:	e3a01000 	mov	r1, #0	; 0x0
         528ac:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         528b0:	e2861078 	add	r1, r6, #120	; 0x78
         528b4:	e1a03007 	mov	r3, r7
         528b8:	e1a00006 	mov	r0, r6
         528bc:	e3a02033 	mov	r2, #51	; 0x33
         528c0:	eb6b98d5 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         528c4:	e28dd00c 	add	sp, sp, #12	; 0xc
         528c8:	e595000c 	ldr	r0, [r5, #12]
         528cc:	e3300000 	teq	r0, #0	; 0x0
         528d0:	12850030 	addne	r0, r5, #48	; 0x30
         528d4:	15901000 	ldrne	r1, [r0]
         528d8:	13310000 	teqne	r1, #0	; 0x0
         528dc:	e3a03000 	mov	r3, #0	; 0x0
         528e0:	e3a02000 	mov	r2, #0	; 0x0
         528e4:	0a000009 	beq	52910 <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x2a4>
         528e8:	e3a01000 	mov	r1, #0	; 0x0
         528ec:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         528f0:	e1a01000 	mov	r1, r0
         528f4:	e1a03007 	mov	r3, r7
         528f8:	e1a00006 	mov	r0, r6
         528fc:	e3a02033 	mov	r2, #51	; 0x33
         52900:	eb6b98c5 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         52904:	e28dd00c 	add	sp, sp, #12	; 0xc
         52908:	ea000007 	b	5292c <TCardServer::DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)+0x2c0>
         5290c:	00059fd8 	ldreqd	r9, [r5], -r8
         52910:	e92d000c 	stmdb	sp!, {r2, r3}
         52914:	e1a02007 	mov	r2, r7
         52918:	e1a00006 	mov	r0, r6
         5291c:	e3a03000 	mov	r3, #0	; 0x0
         52920:	e3a01034 	mov	r1, #52	; 0x34
         52924:	eb6b98bf 	bl	1b38c28 <TCardServer::$SendSelfMessage(unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         52928:	e28dd008 	add	sp, sp, #8	; 0x8
         5292c:	e1a08000 	mov	r8, r0
         52930:	e1a00008 	mov	r0, r8
         52934:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::__ct(void)
 * Address: 00052938
 */
TCardServer::TCardServer(void) {
    /*
         52938:	e1a0c00d 	mov	ip, sp
         5293c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         52940:	e24cb004 	sub	fp, ip, #4	; 0x4
         52944:	e1b04000 	movs	r4, r0
         52948:	1a000004 	bne	52960 <TCardServer::__ct(void)+0x28>
         5294c:	e3a00f7a 	mov	r0, #488	; 0x1e8
         52950:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         52954:	eb6def77 	bl	1bce738 <$__nw(unsigned int)>
         52958:	e1b04000 	movs	r4, r0
         5295c:	0a00003c 	beq	52a54 <TCardServer::__ct(void)+0x11c>
         52960:	e1a00004 	mov	r0, r4
         52964:	eb6e4636 	bl	1be4244 <TAppWorld::$__ct(void)>
         52968:	e3a05000 	mov	r5, #0	; 0x0
         5296c:	e5c45074 	strb	r5, [r4, #116]
         52970:	e5845070 	str	r5, [r4, #112]	; fField112
         52974:	e5c4507c 	strb	r5, [r4, #124]
         52978:	e5845078 	str	r5, [r4, #120]
         5297c:	e5c45084 	strb	r5, [r4, #132]
         52980:	e5845080 	str	r5, [r4, #128]
         52984:	e2841f83 	add	r1, r4, #524	; 0x20c
         52988:	e2811b06 	add	r1, r1, #6144	; 0x1800
         5298c:	e1a06001 	mov	r6, r1
         52990:	e284008c 	add	r0, r4, #140	; 0x8c
         52994:	e59f30c0 	ldr	r3, [pc, #c0]	; 52a5c <TCardServer::__ct(void)+0x124>
         52998:	e3a020cc 	mov	r2, #204	; 0xcc
         5299c:	eb66ca38 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         529a0:	e1a00006 	mov	r0, r6
         529a4:	eb6e4620 	bl	1be422c <CList::$__ct(void)>
         529a8:	e2841f4b 	add	r1, r4, #300	; 0x12c
         529ac:	e2811b0a 	add	r1, r1, #10240	; 0x2800
         529b0:	e1a06001 	mov	r6, r1
         529b4:	e2840f8b 	add	r0, r4, #556	; 0x22c
         529b8:	e2800b06 	add	r0, r0, #6144	; 0x1800
         529bc:	e59f309c 	ldr	r3, [pc, #9c]	; 52a60 <TCardServer::__ct(void)+0x128>
         529c0:	e3a020f0 	mov	r2, #240	; 0xf0
         529c4:	eb66ca2e 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         529c8:	e1a00006 	mov	r0, r6
         529cc:	eb6b8c36 	bl	1b35aac <TCardPartHandler::$__ct(void)>
         529d0:	e2840f6a 	add	r0, r4, #424	; 0x1a8
         529d4:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         529d8:	e1a06000 	mov	r6, r0
         529dc:	e5c05004 	strb	r5, [r0, #4]	; fField4
         529e0:	e5805000 	str	r5, [r0]
         529e4:	e2840e9b 	add	r0, r4, #2480	; 0x9b0
         529e8:	e2800a02 	add	r0, r0, #8192	; 0x2000
         529ec:	eb6deb2e 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         529f0:	e2840f71 	add	r0, r4, #452	; 0x1c4
         529f4:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         529f8:	eb6deb2b 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         529fc:	e59f0060 	ldr	r0, [pc, #60]	; 52a64 <TCardServer::__ct(void)+0x12c>	; fField60
         52a00:	e5840000 	str	r0, [r4]
         52a04:	e2840070 	add	r0, r4, #112	; 0x70
         52a08:	e1a01005 	mov	r1, r5
         52a0c:	eb6df78d 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         52a10:	e2840080 	add	r0, r4, #128	; 0x80
         52a14:	e1a01005 	mov	r1, r5
         52a18:	eb6df78a 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         52a1c:	e2840078 	add	r0, r4, #120	; 0x78
         52a20:	e1a01005 	mov	r1, r5
         52a24:	eb6df787 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         52a28:	e1a00006 	mov	r0, r6
         52a2c:	e1a01005 	mov	r1, r5
         52a30:	eb6df784 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         52a34:	e3a00000 	mov	r0, #0	; 0x0
         52a38:	e59f2028 	ldr	r2, [pc, #28]	; 52a68 <TCardServer::__ct(void)+0x130>	; fField28
         52a3c:	e59f1028 	ldr	r1, [pc, #28]	; 52a6c <TCardServer::__ct(void)+0x134>	; fField28
         52a40:	e7825100 	str	r5, [r2, r0, lsl #2]	; fField2
         52a44:	e7815100 	str	r5, [r1, r0, lsl #2]	; fField2
         52a48:	e2800001 	add	r0, r0, #1	; 0x1
         52a4c:	e3500004 	cmp	r0, #4	; 0x4
         52a50:	3afffffa 	bcc	52a40 <TCardServer::__ct(void)+0x108>
         52a54:	e1a00004 	mov	r0, r4
         52a58:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         52a5c:	01b35aa0 	moveqs	r5, r0, lsr #21
         52a60:	01b35ab4 	ldreqh	r5, [r3, r4]!
         52a64:	0001b150 	andeq	fp, r1, r0, asr r1
         52a68:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         52a6c:	0c105fe4 	ldceq	15, cr5, [r0], -#912
    */
}

/**
 * Symbol: TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)
 * Address: 00052a70
 */
TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *) {
    /*
         52a70:	e1a0c00d 	mov	ip, sp
         52a74:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         52a78:	e24cb004 	sub	fp, ip, #4	; 0x4
         52a7c:	e1a06000 	mov	r6, r0
         52a80:	e1a07001 	mov	r7, r1
         52a84:	e1a05002 	mov	r5, r2
         52a88:	e1a04003 	mov	r4, r3
         52a8c:	e3a00000 	mov	r0, #0	; 0x0
         52a90:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         52a94:	eb0d0009 	bl	392ac0 <EnterAtomic>
         52a98:	e1a00005 	mov	r0, r5
         52a9c:	eb6e07db 	bl	1bd4a10 <TCardSocket::$GetPCPins(void)>
         52aa0:	e2001003 	and	r1, r0, #3	; 0x3
         52aa4:	e3310003 	teq	r1, #3	; 0x3
         52aa8:	02000080 	andeq	r0, r0, #128	; 0x80
         52aac:	03300000 	teqeq	r0, #0	; 0x0
         52ab0:	01a00005 	moveq	r0, r5
         52ab4:	0b6dfb86 	bleq	1bd18d4 <TCardSocket::$EnableSocketAccess(void)>
         52ab8:	eb0d0017 	bl	392b1c <ExitAtomic>
         52abc:	e3a09000 	mov	r9, #0	; 0x0
         52ac0:	e52d906c 	str	r9, [sp, -#108]!
         52ac4:	e28d0008 	add	r0, sp, #8	; 0x8
         52ac8:	eb6d7fa9 	bl	1bb2974 <$setjmp>
         52acc:	e3300000 	teq	r0, #0	; 0x0
         52ad0:	1a0000b9 	bne	52dbc <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x34c>
         52ad4:	e1a0000d 	mov	r0, sp
         52ad8:	eb6e3567 	bl	1be007c <$AddExceptionHandler>
         52adc:	e3a00000 	mov	r0, #0	; 0x0
         52ae0:	eb6de6df 	bl	1bcc664 <TCardPCMCIA::$__ct(void)>
         52ae4:	e1b09000 	movs	r9, r0
         52ae8:	03a000e9 	moveq	r0, #233	; 0xe9
         52aec:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         52af0:	0a0000b8 	beq	52dd8 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x368>
         52af4:	e594035c 	ldr	r0, [r4, #860]	; fField860
         52af8:	e3300000 	teq	r0, #0	; 0x0
         52afc:	13a01001 	movne	r1, #1	; 0x1
         52b00:	1b6deaf8 	blne	1bcd6e8 <TCardPCMCIA::$__dt(void)>
         52b04:	e584935c 	str	r9, [r4, #860]	; fField860
         52b08:	e1a00005 	mov	r0, r5
         52b0c:	e5897004 	str	r7, [r9, #4]	; fField4
         52b10:	eb6e03a5 	bl	1bd39ac <TCardSocket::$GetControl(void)>
         52b14:	e1a0a000 	mov	sl, r0
         52b18:	e3801010 	orr	r1, r0, #16	; 0x10
         52b1c:	e1a00005 	mov	r0, r5
         52b20:	eb6e249c 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         52b24:	e3a08000 	mov	r8, #0	; 0x0
         52b28:	e1a02005 	mov	r2, r5
         52b2c:	e1a01009 	mov	r1, r9
         52b30:	e59f005c 	ldr	r0, [pc, #5c]	; 52b94 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x124>
         52b34:	eb6eace1 	bl	1bfdec0 <TPCMCIA20Parser::$ParsePCCardCIS(TCardPCMCIA *, TCardSocket *)>
         52b38:	e58d006c 	str	r0, [sp, #108]
         52b3c:	e3300000 	teq	r0, #0	; 0x0
         52b40:	0a000016 	beq	52ba0 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x130>
         52b44:	e1a01004 	mov	r1, r4
         52b48:	e1a00006 	mov	r0, r6
         52b4c:	eb6b9c52 	bl	1b39c9c <TCardServer::$FirstCardHandler(TCardSocketState *)>
         52b50:	e1b08000 	movs	r8, r0
         52b54:	0a0000a4 	beq	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52b58:	e1a02009 	mov	r2, r9
         52b5c:	e1a01005 	mov	r1, r5
         52b60:	e1a00008 	mov	r0, r8
         52b64:	eb0cce11 	bl	3863b0 <TCardHandler::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)>
         52b68:	e58d006c 	str	r0, [sp, #108]
         52b6c:	e3300000 	teq	r0, #0	; 0x0
         52b70:	0a000008 	beq	52b98 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x128>
         52b74:	e1a00008 	mov	r0, r8
         52b78:	eb0cce02 	bl	386388 <TCardHandler::Delete(void)>
         52b7c:	e1a01004 	mov	r1, r4
         52b80:	e1a00006 	mov	r0, r6
         52b84:	eb6b9c55 	bl	1b39ce0 <TCardServer::$NextCardHandler(TCardSocketState *)>
         52b88:	e1b08000 	movs	r8, r0
         52b8c:	1afffff1 	bne	52b58 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0xe8>
         52b90:	ea000095 	b	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52b94:	0c100a88 	ldceq	10, cr0, [r0], -#544
         52b98:	e3380000 	teq	r8, #0	; 0x0
         52b9c:	0a000092 	beq	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52ba0:	e1a02009 	mov	r2, r9
         52ba4:	e1a01005 	mov	r1, r5
         52ba8:	e1a00006 	mov	r0, r6
         52bac:	eb6ba058 	bl	1b3ad14 <TCardServer::$SetPCMCIAWaitStates(TCardSocket *, TCardPCMCIA *)>
         52bb0:	e1a02009 	mov	r2, r9
         52bb4:	e1a01005 	mov	r1, r5
         52bb8:	e1a00006 	mov	r0, r6
         52bbc:	eb6ba483 	bl	1b3bdd0 <TCardServer::$SelectCardPower(TCardSocket *, TCardPCMCIA *)>
         52bc0:	e594030c 	ldr	r0, [r4, #780]
         52bc4:	e3300000 	teq	r0, #0	; 0x0
         52bc8:	03a00001 	moveq	r0, #1	; 0x1
         52bcc:	0584030c 	streq	r0, [r4, #780]
         52bd0:	0a000028 	beq	52c78 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x208>
         52bd4:	e3300001 	teq	r0, #1	; 0x1
         52bd8:	0a000026 	beq	52c78 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x208>
         52bdc:	e3380000 	teq	r8, #0	; 0x0
         52be0:	11a00008 	movne	r0, r8
         52be4:	1b0ccde7 	blne	386388 <TCardHandler::Delete(void)>
         52be8:	e3a00000 	mov	r0, #0	; 0x0
         52bec:	e58d006c 	str	r0, [sp, #108]
         52bf0:	e594000c 	ldr	r0, [r4, #12]
         52bf4:	e3300000 	teq	r0, #0	; 0x0
         52bf8:	0a00007b 	beq	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52bfc:	e1a02009 	mov	r2, r9
         52c00:	e1a01005 	mov	r1, r5
         52c04:	eb0ccde6 	bl	3863a4 <TCardHandler::RecognizeCard(TCardSocket *, TCardPCMCIA *)>
         52c08:	e3300000 	teq	r0, #0	; 0x0
         52c0c:	1a000076 	bne	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52c10:	e1a01009 	mov	r1, r9
         52c14:	e594000c 	ldr	r0, [r4, #12]
         52c18:	eb0ccdf9 	bl	386404 <TCardHandler::CardIdString(TCardPCMCIA *)>
         52c1c:	e2841010 	add	r1, r4, #16	; 0x10
         52c20:	eb6d8ba0 	bl	1bb5aa8 <$strcmp>
         52c24:	e3300000 	teq	r0, #0	; 0x0
         52c28:	1a00006f 	bne	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52c2c:	e2840030 	add	r0, r4, #48	; 0x30
         52c30:	e1a04000 	mov	r4, r0
         52c34:	e5900000 	ldr	r0, [r0]
         52c38:	e3300000 	teq	r0, #0	; 0x0
         52c3c:	0a00006a 	beq	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52c40:	e3a03000 	mov	r3, #0	; 0x0
         52c44:	e3a02000 	mov	r2, #0	; 0x0
         52c48:	e92d000c 	stmdb	sp!, {r2, r3}
         52c4c:	e1a00005 	mov	r0, r5
         52c50:	eb6df6f6 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         52c54:	e1a03000 	mov	r3, r0
         52c58:	e92d0008 	stmdb	sp!, {r3}
         52c5c:	e1a01004 	mov	r1, r4
         52c60:	e1a03007 	mov	r3, r7
         52c64:	e1a00006 	mov	r0, r6
         52c68:	e3a02036 	mov	r2, #54	; 0x36
         52c6c:	eb6b97ea 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         52c70:	e28dd00c 	add	sp, sp, #12	; 0xc
         52c74:	ea000057 	b	52dd8 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x368>
         52c78:	e1a03004 	mov	r3, r4
         52c7c:	e1a02005 	mov	r2, r5
         52c80:	e1a01009 	mov	r1, r9
         52c84:	e1a00006 	mov	r0, r6
         52c88:	eb6b93d0 	bl	1b37bd0 <TCardServer::$LoadCardPackage(TCardPCMCIA *, TCardSocket *, TCardSocketState *)>
         52c8c:	e58d006c 	str	r0, [sp, #108]
         52c90:	e3300000 	teq	r0, #0	; 0x0
         52c94:	1280cda5 	addne	ip, r0, #10560	; 0x2940
         52c98:	137c0016 	cmnne	ip, #22	; 0x16
         52c9c:	1a000052 	bne	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52ca0:	e3380000 	teq	r8, #0	; 0x0
         52ca4:	1a000012 	bne	52cf4 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x284>
         52ca8:	e1a01004 	mov	r1, r4
         52cac:	e1a00006 	mov	r0, r6
         52cb0:	eb6b9bf9 	bl	1b39c9c <TCardServer::$FirstCardHandler(TCardSocketState *)>
         52cb4:	e1b08000 	movs	r8, r0
         52cb8:	0a000020 	beq	52d40 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x2d0>
         52cbc:	e1a02009 	mov	r2, r9
         52cc0:	e1a01005 	mov	r1, r5
         52cc4:	e1a00008 	mov	r0, r8
         52cc8:	eb0ccdb5 	bl	3863a4 <TCardHandler::RecognizeCard(TCardSocket *, TCardPCMCIA *)>
         52ccc:	e3300000 	teq	r0, #0	; 0x0
         52cd0:	0a000007 	beq	52cf4 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x284>
         52cd4:	e1a00008 	mov	r0, r8
         52cd8:	eb0ccdaa 	bl	386388 <TCardHandler::Delete(void)>
         52cdc:	e1a01004 	mov	r1, r4
         52ce0:	e1a00006 	mov	r0, r6
         52ce4:	eb6b9bfd 	bl	1b39ce0 <TCardServer::$NextCardHandler(TCardSocketState *)>
         52ce8:	e1b08000 	movs	r8, r0
         52cec:	1afffff2 	bne	52cbc <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x24c>
         52cf0:	ea000012 	b	52d40 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x2d0>
         52cf4:	e3380000 	teq	r8, #0	; 0x0
         52cf8:	0a000010 	beq	52d40 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x2d0>
         52cfc:	e1a0100a 	mov	r1, sl
         52d00:	e1a00005 	mov	r0, r5
         52d04:	e5849004 	str	r9, [r4, #4]	; fField4
         52d08:	eb6e2422 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         52d0c:	e1a03004 	mov	r3, r4
         52d10:	e1a02005 	mov	r2, r5
         52d14:	e1a01008 	mov	r1, r8
         52d18:	e1a00006 	mov	r0, r6
         52d1c:	eb6b8b6a 	bl	1b35acc <TCardServer::$ActivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)>
         52d20:	e3380000 	teq	r8, #0	; 0x0
         52d24:	e58d006c 	str	r0, [sp, #108]
         52d28:	0a000004 	beq	52d40 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x2d0>
         52d2c:	e3300000 	teq	r0, #0	; 0x0
         52d30:	0a00002d 	beq	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52d34:	e3380000 	teq	r8, #0	; 0x0
         52d38:	11a00008 	movne	r0, r8
         52d3c:	1b0ccd91 	blne	386388 <TCardHandler::Delete(void)>
         52d40:	e594035c 	ldr	r0, [r4, #860]	; fField860
         52d44:	e3300000 	teq	r0, #0	; 0x0
         52d48:	13a01001 	movne	r1, #1	; 0x1
         52d4c:	1b6dea65 	blne	1bcd6e8 <TCardPCMCIA::$__dt(void)>
         52d50:	e3a09000 	mov	r9, #0	; 0x0
         52d54:	e584935c 	str	r9, [r4, #860]	; fField860
         52d58:	e3a07000 	mov	r7, #0	; 0x0
         52d5c:	e5849004 	str	r9, [r4, #4]	; fField4
         52d60:	e0848107 	add	r8, r4, r7, lsl #2
         52d64:	e5980038 	ldr	r0, [r8, #56]	; fField56
         52d68:	e3300000 	teq	r0, #0	; 0x0
         52d6c:	0a000001 	beq	52d78 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x308>
         52d70:	eb6e1bdb 	bl	1bd9ce4 <$RemovePackage(unsigned long)>
         52d74:	e5a89038 	str	r9, [r8, #56]!	; fField56
         52d78:	e2877001 	add	r7, r7, #1	; 0x1
         52d7c:	e3570008 	cmp	r7, #8	; 0x8
         52d80:	3afffff6 	bcc	52d60 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x2f0>
         52d84:	e5940000 	ldr	r0, [r4]
         52d88:	e3100401 	tst	r0, #16777216	; 0x1000000
         52d8c:	0a000004 	beq	52da4 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x334>
         52d90:	e2841fcd 	add	r1, r4, #820	; 0x334
         52d94:	e2840fd2 	add	r0, r4, #840	; 0x348
         52d98:	e3a03001 	mov	r3, #1	; 0x1
         52d9c:	e3a02000 	mov	r2, #0	; 0x0
         52da0:	eb6ed191 	bl	1c073ec <TCardATALoader::$RemoveATAPackages(TATABootParamBlock *, void *, unsigned long)>
         52da4:	e59d006c 	ldr	r0, [sp, #108]
         52da8:	e3300000 	teq	r0, #0	; 0x0
         52dac:	03e00f41 	mvneq	r0, #260	; 0x104
         52db0:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         52db4:	0a000007 	beq	52dd8 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x368>
         52db8:	ea00000b 	b	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52dbc:	e59d0060 	ldr	r0, [sp, #96]
         52dc0:	e28f1f06 	add	r1, pc, #24	; 0x18
         52dc4:	eb6e40f2 	bl	1be3194 <$Subexception>
         52dc8:	e3300000 	teq	r0, #0	; 0x0
         52dcc:	0a000004 	beq	52de4 <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x374>
         52dd0:	e3a000b5 	mov	r0, #181	; 0xb5
         52dd4:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         52dd8:	e58d006c 	str	r0, [sp, #108]
         52ddc:	ea000002 	b	52dec <TCardServer::DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)+0x37c>
         52de0:	00000000 	andeq	r0, r0, r0
         52de4:	e1a0000d 	mov	r0, sp
         52de8:	eb6e3cd9 	bl	1be2154 <$NextHandler>
         52dec:	e1a0000d 	mov	r0, sp
         52df0:	eb6e38b0 	bl	1be10b8 <$ExitHandler>
         52df4:	e5bd006c 	ldr	r0, [sp, #108]!
         52df8:	e3300000 	teq	r0, #0	; 0x0
         52dfc:	11a01005 	movne	r1, r5
         52e00:	11a00006 	movne	r0, r6
         52e04:	1b6b936c 	blne	1b37bbc <TCardServer::$InitializePCMCIABus(TCardSocket *)>
         52e08:	e49d0004 	ldr	r0, [sp], #4	; fField4
         52e0c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)
 * Address: 00052e10
 */
TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char) {
    /*
         52e10:	e1a0c00d 	mov	ip, sp
         52e14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         52e18:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         52e1c:	e24cb014 	sub	fp, ip, #20	; 0x14
         52e20:	e1a04000 	mov	r4, r0
         52e24:	e1a05003 	mov	r5, r3
         52e28:	e59b0014 	ldr	r0, [fp, #20]	; fField20
         52e2c:	e20000ff 	and	r0, r0, #255	; 0xff
         52e30:	e3a08000 	mov	r8, #0	; 0x0
         52e34:	e2841f83 	add	r1, r4, #524	; 0x20c
         52e38:	e2811b06 	add	r1, r1, #6144	; 0x1800
         52e3c:	e1a07001 	mov	r7, r1
         52e40:	e52d0010 	str	r0, [sp, -#16]!	; fField16
         52e44:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         52e48:	e1a0000d 	mov	r0, sp
         52e4c:	eb6e40e4 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         52e50:	e1a0000d 	mov	r0, sp
         52e54:	eb6e5167 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         52e58:	e1b06000 	movs	r6, r0
         52e5c:	0a000013 	beq	52eb0 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0xa0>
         52e60:	e59600b8 	ldr	r0, [r6, #184]
         52e64:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         52e68:	1a00000c 	bne	52ea0 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x90>
         52e6c:	e1a00007 	mov	r0, r7
         52e70:	e1a01006 	mov	r1, r6
         52e74:	eb6e65eb 	bl	1bec628 <CList::$Remove(void *)>
         52e78:	e3360000 	teq	r6, #0	; 0x0
         52e7c:	0a000007 	beq	52ea0 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x90>
         52e80:	e28600bc 	add	r0, r6, #188	; 0xbc
         52e84:	e3a01000 	mov	r1, #0	; 0x0
         52e88:	eb6dee20 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         52e8c:	e1a00006 	mov	r0, r6
         52e90:	e3a01000 	mov	r1, #0	; 0x0
         52e94:	eb6dea17 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
         52e98:	e1a00006 	mov	r0, r6
         52e9c:	eb6dea0f 	bl	1bcd6e0 <$__dl(void *)>
         52ea0:	e1a0000d 	mov	r0, sp
         52ea4:	eb6e61bd 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         52ea8:	e1b06000 	movs	r6, r0
         52eac:	1affffeb 	bne	52e60 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x50>
         52eb0:	e1a0000d 	mov	r0, sp
         52eb4:	e3a01000 	mov	r1, #0	; 0x0
         52eb8:	eb6e44ea 	bl	1be4268 <CArrayIterator::$__dt(void)>
         52ebc:	e28dd01c 	add	sp, sp, #28	; 0x1c
         52ec0:	e5956010 	ldr	r6, [r5, #16]	; fField16
         52ec4:	e59f0038 	ldr	r0, [pc, #38]	; 52f04 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0xf4>
         52ec8:	e5900038 	ldr	r0, [r0, #56]	; fField56
         52ecc:	e3a010ea 	mov	r1, #234	; 0xea
         52ed0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         52ed4:	e1560000 	cmp	r6, r0
         52ed8:	3a00000a 	bcc	52f08 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0xf8>
         52edc:	e1a08001 	mov	r8, r1
         52ee0:	e1a03001 	mov	r3, r1
         52ee4:	e92d0008 	stmdb	sp!, {r3}
         52ee8:	e1a03006 	mov	r3, r6
         52eec:	e5952008 	ldr	r2, [r5, #8]	; fField8
         52ef0:	e1a01005 	mov	r1, r5
         52ef4:	e1a00004 	mov	r0, r4
         52ef8:	eb6b9741 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         52efc:	e28dd004 	add	sp, sp, #4	; 0x4
         52f00:	ea00021d 	b	5377c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x96c>
         52f04:	0c100a7c 	ldceq	10, cr0, [r0], -#496
         52f08:	e59f0098 	ldr	r0, [pc, #98]	; 52fa8 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x198>
         52f0c:	e790a106 	ldr	sl, [r0, r6, lsl #2]	; fField2
         52f10:	e59f0094 	ldr	r0, [pc, #94]	; 52fac <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x19c>
         52f14:	e7907106 	ldr	r7, [r0, r6, lsl #2]	; fField2
         52f18:	e2842078 	add	r2, r4, #120	; 0x78
         52f1c:	e5950008 	ldr	r0, [r5, #8]	; fField8
         52f20:	e3500069 	cmp	r0, #105	; 0x69
         52f24:	e58d200c 	str	r2, [sp, #12]
         52f28:	0a000218 	beq	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         52f2c:	e2849080 	add	r9, r4, #128	; 0x80
         52f30:	e28520bc 	add	r2, r5, #188	; 0xbc
         52f34:	e58d2008 	str	r2, [sp, #8]	; fField8
         52f38:	e2822008 	add	r2, r2, #8	; 0x8
         52f3c:	e58d2004 	str	r2, [sp, #4]	; fField4
         52f40:	ca0000af 	bgt	53204 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x3f4>
         52f44:	e3500036 	cmp	r0, #54	; 0x36
         52f48:	0a000210 	beq	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         52f4c:	e3a030ac 	mov	r3, #172	; 0xac
         52f50:	e2433b0a 	sub	r3, r3, #10240	; 0x2800
         52f54:	ca000053 	bgt	530a8 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x298>
         52f58:	e3500032 	cmp	r0, #50	; 0x32
         52f5c:	0a00012a 	beq	5340c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x5fc>
         52f60:	ca000012 	bgt	52fb0 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x1a0>
         52f64:	e3300000 	teq	r0, #0	; 0x0
         52f68:	13300002 	teqne	r0, #2	; 0x2
         52f6c:	0a0001f6 	beq	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         52f70:	e3300003 	teq	r0, #3	; 0x3
         52f74:	1a000205 	bne	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         52f78:	e3a03000 	mov	r3, #0	; 0x0
         52f7c:	e3a02000 	mov	r2, #0	; 0x0
         52f80:	e595100c 	ldr	r1, [r5, #12]
         52f84:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         52f88:	e1a03006 	mov	r3, r6
         52f8c:	e1a00004 	mov	r0, r4
         52f90:	e3a02003 	mov	r2, #3	; 0x3
         52f94:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         52f98:	eb6b971f 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         52f9c:	e28dd00c 	add	sp, sp, #12	; 0xc
         52fa0:	e1a08000 	mov	r8, r0
         52fa4:	ea0001f9 	b	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         52fa8:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         52fac:	0c105fe4 	ldceq	15, cr5, [r0], -#912
         52fb0:	e3300033 	teq	r0, #51	; 0x33
         52fb4:	0a0001f5 	beq	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         52fb8:	e3300034 	teq	r0, #52	; 0x34
         52fbc:	0a000130 	beq	53484 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x674>
         52fc0:	e3300035 	teq	r0, #53	; 0x35
         52fc4:	1a0001f1 	bne	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         52fc8:	e3a03000 	mov	r3, #0	; 0x0
         52fcc:	e92d0008 	stmdb	sp!, {r3}
         52fd0:	e1a03006 	mov	r3, r6
         52fd4:	e1a01005 	mov	r1, r5
         52fd8:	e1a00004 	mov	r0, r4
         52fdc:	e3a02002 	mov	r2, #2	; 0x2
         52fe0:	eb6b9707 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         52fe4:	e28dd004 	add	sp, sp, #4	; 0x4
         52fe8:	e3a00003 	mov	r0, #3	; 0x3
         52fec:	e2845a02 	add	r5, r4, #8192	; 0x2000
         52ff0:	e5a7030c 	str	r0, [r7, #780]!
         52ff4:	e59509d8 	ldr	r0, [r5, #2520]	; fField2520
         52ff8:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         52ffc:	1a0001d2 	bne	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         53000:	e2840f6a 	add	r0, r4, #424	; 0x1a8
         53004:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         53008:	e1a07000 	mov	r7, r0
         5300c:	e5900000 	ldr	r0, [r0]
         53010:	e3300000 	teq	r0, #0	; 0x0
         53014:	0a0001cc 	beq	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         53018:	e59509c0 	ldr	r0, [r5, #2496]	; fField2496
         5301c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         53020:	e1a01006 	mov	r1, r6
         53024:	eb6accb6 	bl	1b06304 <TAlertDialog::$SetFilterData(void *)>
         53028:	e59509c0 	ldr	r0, [r5, #2496]	; fField2496
         5302c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         53030:	eb6b9705 	bl	1b38c4c <TCardReinsertAlertDialog::$Setup(void)>
         53034:	e1a0e007 	mov	lr, r7
         53038:	e284ce9b 	add	ip, r4, #2480	; 0x9b0
         5303c:	e28cca02 	add	ip, ip, #8192	; 0x2000
         53040:	e3a00000 	mov	r0, #0	; 0x0
         53044:	e3a01000 	mov	r1, #0	; 0x0
         53048:	e3a02000 	mov	r2, #0	; 0x0
         5304c:	e3a03000 	mov	r3, #0	; 0x0
         53050:	e3a08000 	mov	r8, #0	; 0x0
         53054:	e3a09000 	mov	r9, #0	; 0x0
         53058:	e59579c0 	ldr	r7, [r5, #2496]	; fField2496
         5305c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         53060:	e1a03009 	mov	r3, r9
         53064:	e3a02001 	mov	r2, #1	; 0x1
         53068:	e1a01008 	mov	r1, r8
         5306c:	e3a00064 	mov	r0, #100	; 0x64
         53070:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         53074:	e1a03007 	mov	r3, r7
         53078:	e92d0008 	stmdb	sp!, {r3}
         5307c:	e1a0000e 	mov	r0, lr
         53080:	e3a03000 	mov	r3, #0	; 0x0
         53084:	e49c1008 	ldr	r1, [ip], #8	; fField8
         53088:	e59c2000 	ldr	r2, [ip]
         5308c:	eb6e1f2e 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         53090:	e28dd024 	add	sp, sp, #36	; 0x24
         53094:	e1a08000 	mov	r8, r0
         53098:	e59509d8 	ldr	r0, [r5, #2520]	; fField2520
         5309c:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         530a0:	e5a509d8 	str	r0, [r5, #2520]!	; fField2520
         530a4:	ea0001a8 	b	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         530a8:	e3500050 	cmp	r0, #80	; 0x50
         530ac:	0a0000d3 	beq	53400 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x5f0>
         530b0:	ca00003e 	bgt	531b0 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x3a0>
         530b4:	e3300037 	teq	r0, #55	; 0x37
         530b8:	0a000104 	beq	534d0 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x6c0>
         530bc:	e3300038 	teq	r0, #56	; 0x38
         530c0:	0a0001a1 	beq	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         530c4:	e330003c 	teq	r0, #60	; 0x3c
         530c8:	1a0001b0 	bne	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         530cc:	e3a08000 	mov	r8, #0	; 0x0
         530d0:	e5970004 	ldr	r0, [r7, #4]	; fField4
         530d4:	e3300000 	teq	r0, #0	; 0x0
         530d8:	1597100c 	ldrne	r1, [r7, #12]
         530dc:	13310000 	teqne	r1, #0	; 0x0
         530e0:	03e0800e 	mvneq	r8, #14	; 0xe
         530e4:	02488c29 	subeq	r8, r8, #10496	; 0x2900
         530e8:	0a00002d 	beq	531a4 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x394>
         530ec:	e5900000 	ldr	r0, [r0]
         530f0:	e3100101 	tst	r0, #1073741824	; 0x40000000
         530f4:	0a0001a5 	beq	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         530f8:	e59702f4 	ldr	r0, [r7, #756]
         530fc:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         53100:	159f80a4 	ldrne	r8, [pc, #a4]	; 531ac <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x39c>
         53104:	1a000026 	bne	531a4 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x394>
         53108:	e2870f8b 	add	r0, r7, #556	; 0x22c
         5310c:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         53110:	e8b11008 	ldmia	r1!, {r3, ip}
         53114:	e8a01008 	stmia	r0!, {r3, ip}
         53118:	e8911008 	ldmia	r1, {r3, ip}
         5311c:	e8801008 	stmia	r0, {r3, ip}
         53120:	e2870f8f 	add	r0, r7, #572	; 0x23c
         53124:	e1a0e005 	mov	lr, r5
         53128:	e1a07000 	mov	r7, r0
         5312c:	e3a0c00f 	mov	ip, #15	; 0xf
         53130:	e8be000e 	ldmia	lr!, {r1, r2, r3}
         53134:	e8a7000e 	stmia	r7!, {r1, r2, r3}
         53138:	e25cc001 	subs	ip, ip, #1	; 0x1
         5313c:	1afffffb 	bne	53130 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x320>
         53140:	e89e000c 	ldmia	lr, {r2, r3}
         53144:	e887000c 	stmia	r7, {r2, r3}
         53148:	e28070bc 	add	r7, r0, #188	; 0xbc
         5314c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         53150:	e5901000 	ldr	r1, [r0]
         53154:	e1a00007 	mov	r0, r7
         53158:	eb6df5ba 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         5315c:	e2870008 	add	r0, r7, #8	; 0x8
         53160:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         53164:	e5911000 	ldr	r1, [r1]
         53168:	eb6df5b6 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         5316c:	e1a00004 	mov	r0, r4
         53170:	eb6e485a 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         53174:	e3a03000 	mov	r3, #0	; 0x0
         53178:	e3a02000 	mov	r2, #0	; 0x0
         5317c:	e3a01000 	mov	r1, #0	; 0x0
         53180:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         53184:	e1a01009 	mov	r1, r9
         53188:	e1a03006 	mov	r3, r6
         5318c:	e1a00004 	mov	r0, r4
         53190:	e3a020fa 	mov	r2, #250	; 0xfa
         53194:	eb6b96a0 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         53198:	e28dd00c 	add	sp, sp, #12	; 0xc
         5319c:	e1b08000 	movs	r8, r0
         531a0:	0a00017a 	beq	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         531a4:	e1a03008 	mov	r3, r8
         531a8:	ea0000f5 	b	53584 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x774>
         531ac:	ffffd8df 	swinv	0x00ffd8df
         531b0:	e3300064 	teq	r0, #100	; 0x64
         531b4:	0a0000dd 	beq	53530 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x720>
         531b8:	e3300068 	teq	r0, #104	; 0x68
         531bc:	1a000173 	bne	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         531c0:	e3a03000 	mov	r3, #0	; 0x0
         531c4:	e92d0008 	stmdb	sp!, {r3}
         531c8:	e1a03006 	mov	r3, r6
         531cc:	e1a01005 	mov	r1, r5
         531d0:	e1a00004 	mov	r0, r4
         531d4:	e3a02002 	mov	r2, #2	; 0x2
         531d8:	eb6b9689 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         531dc:	e28dd004 	add	sp, sp, #4	; 0x4
         531e0:	e3a03000 	mov	r3, #0	; 0x0
         531e4:	e3a02000 	mov	r2, #0	; 0x0
         531e8:	e3a01000 	mov	r1, #0	; 0x0
         531ec:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         531f0:	e1a01009 	mov	r1, r9
         531f4:	e1a03006 	mov	r3, r6
         531f8:	e1a00004 	mov	r0, r4
         531fc:	e3a020fb 	mov	r2, #251	; 0xfb
         53200:	ea0000c6 	b	53520 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x710>
         53204:	e35000fa 	cmp	r0, #250	; 0xfa
         53208:	0a00013c 	beq	53700 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x8f0>
         5320c:	ca000013 	bgt	53260 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x450>
         53210:	e35000ca 	cmp	r0, #202	; 0xca
         53214:	0a00002e 	beq	532d4 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x4c4>
         53218:	ca00000b 	bgt	5324c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x43c>
         5321c:	e330006e 	teq	r0, #110	; 0x6e
         53220:	0a0000dd 	beq	5359c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x78c>
         53224:	e330006f 	teq	r0, #111	; 0x6f
         53228:	0a000017 	beq	5328c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x47c>
         5322c:	e33000c9 	teq	r0, #201	; 0xc9
         53230:	1a000156 	bne	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         53234:	e1a03007 	mov	r3, r7
         53238:	e1a0200a 	mov	r2, sl
         5323c:	e1a01006 	mov	r1, r6
         53240:	e1a00004 	mov	r0, r4
         53244:	eb6b8e40 	bl	1b36b4c <TCardServer::$DoCardEjection(unsigned long, TCardSocket *, TCardSocketState *)>
         53248:	ea0000b6 	b	53528 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x718>
         5324c:	e33000cb 	teq	r0, #203	; 0xcb
         53250:	0a00002d 	beq	5330c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x4fc>
         53254:	e33000ce 	teq	r0, #206	; 0xce
         53258:	1a00014c 	bne	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         5325c:	ea00013a 	b	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         53260:	e35000fe 	cmp	r0, #254	; 0xfe
         53264:	0a000004 	beq	5327c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x46c>
         53268:	ca000005 	bgt	53284 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x474>
         5326c:	e33000fb 	teq	r0, #251	; 0xfb
         53270:	133000fc 	teqne	r0, #252	; 0xfc
         53274:	133000fd 	teqne	r0, #253	; 0xfd
         53278:	1a000144 	bne	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         5327c:	e5b5800c 	ldr	r8, [r5, #12]!
         53280:	ea000131 	b	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         53284:	e33000ff 	teq	r0, #255	; 0xff
         53288:	1a000140 	bne	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         5328c:	e1a00006 	mov	r0, r6
         53290:	e3a01000 	mov	r1, #0	; 0x0
         53294:	eb6e2b0f 	bl	1bdded8 <$VccOn(int, unsigned char)>
         53298:	e59d0000 	ldr	r0, [sp]
         5329c:	e3300000 	teq	r0, #0	; 0x0
         532a0:	1a000101 	bne	536ac <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x89c>
         532a4:	e59702f4 	ldr	r0, [r7, #756]
         532a8:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         532ac:	0a0000cb 	beq	535e0 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x7d0>
         532b0:	e51f310c 	ldr	r3, [pc, #fffffef4]	; 531ac <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x39c>
         532b4:	e92d0008 	stmdb	sp!, {r3}
         532b8:	e1a03006 	mov	r3, r6
         532bc:	e1a01005 	mov	r1, r5
         532c0:	e1a00004 	mov	r0, r4
         532c4:	e3a0206f 	mov	r2, #111	; 0x6f
         532c8:	eb6b964d 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         532cc:	e28dd004 	add	sp, sp, #4	; 0x4
         532d0:	ea000107 	b	536f4 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x8e4>
         532d4:	e3a03000 	mov	r3, #0	; 0x0
         532d8:	e92d0008 	stmdb	sp!, {r3}
         532dc:	e1a03006 	mov	r3, r6
         532e0:	e1a01005 	mov	r1, r5
         532e4:	e1a00004 	mov	r0, r4
         532e8:	e3a02002 	mov	r2, #2	; 0x2
         532ec:	eb6b9644 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         532f0:	e28dd004 	add	sp, sp, #4	; 0x4
         532f4:	e1a03007 	mov	r3, r7
         532f8:	e1a0200a 	mov	r2, sl
         532fc:	e1a01006 	mov	r1, r6
         53300:	e1a00004 	mov	r0, r4
         53304:	eb6b8e13 	bl	1b36b58 <TCardServer::$DoPollLockSwitchAndCardDetected(unsigned long, TCardSocket *, TCardSocketState *)>
         53308:	ea000086 	b	53528 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x718>
         5330c:	e3a03000 	mov	r3, #0	; 0x0
         53310:	e92d0008 	stmdb	sp!, {r3}
         53314:	e1a03006 	mov	r3, r6
         53318:	e1a01005 	mov	r1, r5
         5331c:	e1a00004 	mov	r0, r4
         53320:	e3a02002 	mov	r2, #2	; 0x2
         53324:	eb6b9636 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         53328:	e28dd004 	add	sp, sp, #4	; 0x4
         5332c:	e1a0000a 	mov	r0, sl
         53330:	eb6e05b6 	bl	1bd4a10 <TCardSocket::$GetPCPins(void)>
         53334:	e2001003 	and	r1, r0, #3	; 0x3
         53338:	e3310003 	teq	r1, #3	; 0x3
         5333c:	02000080 	andeq	r0, r0, #128	; 0x80
         53340:	03300000 	teqeq	r0, #0	; 0x0
         53344:	1a000100 	bne	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         53348:	e1a00006 	mov	r0, r6
         5334c:	e3a01000 	mov	r1, #0	; 0x0
         53350:	eb6e2ae0 	bl	1bdded8 <$VccOn(int, unsigned char)>
         53354:	e59701f0 	ldr	r0, [r7, #496]
         53358:	e3300000 	teq	r0, #0	; 0x0
         5335c:	12400001 	subne	r0, r0, #1	; 0x1
         53360:	158701f0 	strne	r0, [r7, #496]
         53364:	e1a0000a 	mov	r0, sl
         53368:	eb6e0dec 	bl	1bd6b20 <TCardSocket::$IsReady(void)>
         5336c:	e2841a01 	add	r1, r4, #4096	; 0x1000
         53370:	e5911a24 	ldr	r1, [r1, #2596]
         53374:	e3310000 	teq	r1, #0	; 0x0
         53378:	1a00000d 	bne	533b4 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x5a4>
         5337c:	e3300000 	teq	r0, #0	; 0x0
         53380:	1a000002 	bne	53390 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x580>
         53384:	e5b701f0 	ldr	r0, [r7, #496]!
         53388:	e3300000 	teq	r0, #0	; 0x0
         5338c:	1a000008 	bne	533b4 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x5a4>
         53390:	e3a03000 	mov	r3, #0	; 0x0
         53394:	e3a02000 	mov	r2, #0	; 0x0
         53398:	e3a01000 	mov	r1, #0	; 0x0
         5339c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         533a0:	e1a01009 	mov	r1, r9
         533a4:	e1a03006 	mov	r3, r6
         533a8:	e1a00004 	mov	r0, r4
         533ac:	e3a020fc 	mov	r2, #252	; 0xfc
         533b0:	ea0000b9 	b	5369c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x88c>
         533b4:	e24dd010 	sub	sp, sp, #16	; 0x10
         533b8:	e1a0000d 	mov	r0, sp
         533bc:	e59f1038 	ldr	r1, [pc, #38]	; 533fc <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x5ec>
         533c0:	eb6e2ab2 	bl	1bdde90 <$TimeFromNow>
         533c4:	e28d1008 	add	r1, sp, #8	; 0x8
         533c8:	e89d5000 	ldmia	sp, {ip, lr}
         533cc:	e8815000 	stmia	r1, {ip, lr}
         533d0:	e28d3008 	add	r3, sp, #8	; 0x8
         533d4:	e3a02000 	mov	r2, #0	; 0x0
         533d8:	e92d000c 	stmdb	sp!, {r2, r3}
         533dc:	e1a02006 	mov	r2, r6
         533e0:	e1a00004 	mov	r0, r4
         533e4:	e3a03000 	mov	r3, #0	; 0x0
         533e8:	e3a010cb 	mov	r1, #203	; 0xcb
         533ec:	eb6b960d 	bl	1b38c28 <TCardServer::$SendSelfMessage(unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         533f0:	e1a08000 	mov	r8, r0
         533f4:	e28dd018 	add	sp, sp, #24	; 0x18
         533f8:	ea0000bd 	b	536f4 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x8e4>
         533fc:	00059fd8 	ldreqd	r9, [r5], -r8
         53400:	e5940088 	ldr	r0, [r4, #136]	; fField136
         53404:	eb6e68a0 	bl	1bed68c <TAEventHandler::$ResetIdle(void)>
         53408:	ea0000e0 	b	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         5340c:	e3a09000 	mov	r9, #0	; 0x0
         53410:	e2870030 	add	r0, r7, #48	; 0x30
         53414:	e1a02000 	mov	r2, r0
         53418:	e5900000 	ldr	r0, [r0]
         5341c:	e3300000 	teq	r0, #0	; 0x0
         53420:	1a000011 	bne	5346c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x65c>
         53424:	e5950024 	ldr	r0, [r5, #36]	; fField36
         53428:	e1b00a00 	movs	r0, r0, lsl #20
         5342c:	05950028 	ldreq	r0, [r5, #40]	; fField40
         53430:	01a00a00 	moveq	r0, r0, lsl #20
         53434:	01a00a20 	moveq	r0, r0, lsr #20
         53438:	03300000 	teqeq	r0, #0	; 0x0
         5343c:	11a09001 	movne	r9, r1
         53440:	1a000006 	bne	53460 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x650>
         53444:	e1a00002 	mov	r0, r2
         53448:	e595100c 	ldr	r1, [r5, #12]
         5344c:	eb6df4fd 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         53450:	e5950024 	ldr	r0, [r5, #36]	; fField36
         53454:	e5870360 	str	r0, [r7, #864]
         53458:	e5950028 	ldr	r0, [r5, #40]	; fField40
         5345c:	e5a70364 	str	r0, [r7, #868]!
         53460:	e3390000 	teq	r9, #0	; 0x0
         53464:	0a0000c9 	beq	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         53468:	ea000003 	b	5347c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x66c>
         5346c:	e595100c 	ldr	r1, [r5, #12]
         53470:	e1300001 	teq	r0, r1
         53474:	0a0000c5 	beq	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         53478:	e1a09003 	mov	r9, r3
         5347c:	e1a03009 	mov	r3, r9
         53480:	ea00003f 	b	53584 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x774>
         53484:	e3a03000 	mov	r3, #0	; 0x0
         53488:	e92d0008 	stmdb	sp!, {r3}
         5348c:	e1a03006 	mov	r3, r6
         53490:	e1a01005 	mov	r1, r5
         53494:	e1a00004 	mov	r0, r4
         53498:	e3a02002 	mov	r2, #2	; 0x2
         5349c:	eb6b95d8 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         534a0:	e28dd004 	add	sp, sp, #4	; 0x4
         534a4:	e3a00000 	mov	r0, #0	; 0x0
         534a8:	e3a03000 	mov	r3, #0	; 0x0
         534ac:	e3a02000 	mov	r2, #0	; 0x0
         534b0:	e3a01000 	mov	r1, #0	; 0x0
         534b4:	e5a7030c 	str	r0, [r7, #780]!
         534b8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         534bc:	e1a01009 	mov	r1, r9
         534c0:	e1a03006 	mov	r3, r6
         534c4:	e1a00004 	mov	r0, r4
         534c8:	e3a020fe 	mov	r2, #254	; 0xfe
         534cc:	ea000013 	b	53520 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x710>
         534d0:	e3a03000 	mov	r3, #0	; 0x0
         534d4:	e92d0008 	stmdb	sp!, {r3}
         534d8:	e1a03006 	mov	r3, r6
         534dc:	e1a01005 	mov	r1, r5
         534e0:	e1a00004 	mov	r0, r4
         534e4:	e3a02002 	mov	r2, #2	; 0x2
         534e8:	eb6b95c5 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         534ec:	e28dd004 	add	sp, sp, #4	; 0x4
         534f0:	e3a00001 	mov	r0, #1	; 0x1
         534f4:	e3a03000 	mov	r3, #0	; 0x0
         534f8:	e3a02000 	mov	r2, #0	; 0x0
         534fc:	e3a01000 	mov	r1, #0	; 0x0
         53500:	e5a7030c 	str	r0, [r7, #780]!
         53504:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         53508:	e1a0000a 	mov	r0, sl
         5350c:	eb6e264a 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         53510:	e1a03000 	mov	r3, r0
         53514:	e1a01009 	mov	r1, r9
         53518:	e1a00004 	mov	r0, r4
         5351c:	e3a020fd 	mov	r2, #253	; 0xfd
         53520:	eb6b95bd 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         53524:	e28dd00c 	add	sp, sp, #12	; 0xc
         53528:	e1a08000 	mov	r8, r0
         5352c:	ea000086 	b	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         53530:	e59d000c 	ldr	r0, [sp, #12]
         53534:	e5900000 	ldr	r0, [r0]
         53538:	e3300000 	teq	r0, #0	; 0x0
         5353c:	1a00000d 	bne	53578 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x768>
         53540:	e59d000c 	ldr	r0, [sp, #12]
         53544:	e595100c 	ldr	r1, [r5, #12]
         53548:	eb6df4be 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         5354c:	e3a03000 	mov	r3, #0	; 0x0
         53550:	e92d0008 	stmdb	sp!, {r3}
         53554:	e1a03006 	mov	r3, r6
         53558:	e1a01005 	mov	r1, r5
         5355c:	e1a00004 	mov	r0, r4
         53560:	e3a02002 	mov	r2, #2	; 0x2
         53564:	eb6b95a6 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         53568:	e28dd004 	add	sp, sp, #4	; 0x4
         5356c:	e1a00004 	mov	r0, r4
         53570:	eb6b9190 	bl	1b37bb8 <TCardServer::$InitializeCardDetection(void)>
         53574:	ea000074 	b	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         53578:	e595100c 	ldr	r1, [r5, #12]
         5357c:	e1300001 	teq	r0, r1
         53580:	0a000082 	beq	53790 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x980>
         53584:	e92d0008 	stmdb	sp!, {r3}
         53588:	e1a03006 	mov	r3, r6
         5358c:	e1a01005 	mov	r1, r5
         53590:	e1a00004 	mov	r0, r4
         53594:	e3a02003 	mov	r2, #3	; 0x3
         53598:	ea000079 	b	53784 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x974>
         5359c:	e59731fc 	ldr	r3, [r7, #508]
         535a0:	e92d0008 	stmdb	sp!, {r3}
         535a4:	e1a03006 	mov	r3, r6
         535a8:	e1a01005 	mov	r1, r5
         535ac:	e1a00004 	mov	r0, r4
         535b0:	e3a0206e 	mov	r2, #110	; 0x6e
         535b4:	eb6b9592 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         535b8:	e28dd004 	add	sp, sp, #4	; 0x4
         535bc:	e3a00000 	mov	r0, #0	; 0x0
         535c0:	e0871100 	add	r1, r7, r0, lsl #2
         535c4:	e59111fc 	ldr	r1, [r1, #508]
         535c8:	e0852280 	add	r2, r5, r0, lsl #5
         535cc:	e2800001 	add	r0, r0, #1	; 0x1
         535d0:	e3500004 	cmp	r0, #4	; 0x4
         535d4:	e5a21038 	str	r1, [r2, #56]!	; fField56
         535d8:	3afffff8 	bcc	535c0 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x7b0>
         535dc:	ea00005a 	b	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         535e0:	e2870f8b 	add	r0, r7, #556	; 0x22c
         535e4:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         535e8:	e8b11008 	ldmia	r1!, {r3, ip}
         535ec:	e8a01008 	stmia	r0!, {r3, ip}
         535f0:	e8911008 	ldmia	r1, {r3, ip}
         535f4:	e8801008 	stmia	r0, {r3, ip}
         535f8:	e2870f8f 	add	r0, r7, #572	; 0x23c
         535fc:	e1a0e000 	mov	lr, r0
         53600:	e3a0c00f 	mov	ip, #15	; 0xf
         53604:	e8b5000e 	ldmia	r5!, {r1, r2, r3}
         53608:	e8ae000e 	stmia	lr!, {r1, r2, r3}
         5360c:	e25cc001 	subs	ip, ip, #1	; 0x1
         53610:	1afffffb 	bne	53604 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x7f4>
         53614:	e895000c 	ldmia	r5, {r2, r3}
         53618:	e88e000c 	stmia	lr, {r2, r3}
         5361c:	e28050bc 	add	r5, r0, #188	; 0xbc
         53620:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         53624:	e5901000 	ldr	r1, [r0]
         53628:	e1a00005 	mov	r0, r5
         5362c:	eb6df485 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         53630:	e2850008 	add	r0, r5, #8	; 0x8
         53634:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         53638:	e5911000 	ldr	r1, [r1]
         5363c:	eb6df481 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         53640:	e1a00004 	mov	r0, r4
         53644:	eb6e4725 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         53648:	e2870030 	add	r0, r7, #48	; 0x30
         5364c:	e5901000 	ldr	r1, [r0]
         53650:	e3310000 	teq	r1, #0	; 0x0
         53654:	1a000008 	bne	5367c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x86c>
         53658:	e3a03000 	mov	r3, #0	; 0x0
         5365c:	e3a02000 	mov	r2, #0	; 0x0
         53660:	e3a01000 	mov	r1, #0	; 0x0
         53664:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         53668:	e1a01009 	mov	r1, r9
         5366c:	e1a03006 	mov	r3, r6
         53670:	e1a00004 	mov	r0, r4
         53674:	e3a020ff 	mov	r2, #255	; 0xff
         53678:	ea000007 	b	5369c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x88c>
         5367c:	e3a03000 	mov	r3, #0	; 0x0
         53680:	e3a02000 	mov	r2, #0	; 0x0
         53684:	e3a01000 	mov	r1, #0	; 0x0
         53688:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         5368c:	e1a01000 	mov	r1, r0
         53690:	e1a03006 	mov	r3, r6
         53694:	e1a00004 	mov	r0, r4
         53698:	e3a0206f 	mov	r2, #111	; 0x6f
         5369c:	eb6b955e 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         536a0:	e28dd00c 	add	sp, sp, #12	; 0xc
         536a4:	e1a08000 	mov	r8, r0
         536a8:	ea000011 	b	536f4 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x8e4>
         536ac:	e5950008 	ldr	r0, [r5, #8]	; fField8
         536b0:	e330006f 	teq	r0, #111	; 0x6f
         536b4:	05b5000c 	ldreq	r0, [r5, #12]!
         536b8:	05a70248 	streq	r0, [r7, #584]!
         536bc:	0affffe5 	beq	53658 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x848>
         536c0:	e5970248 	ldr	r0, [r7, #584]
         536c4:	e3300000 	teq	r0, #0	; 0x0
         536c8:	05b5000c 	ldreq	r0, [r5, #12]!
         536cc:	05870248 	streq	r0, [r7, #584]
         536d0:	e2871f8f 	add	r1, r7, #572	; 0x23c
         536d4:	e1a05001 	mov	r5, r1
         536d8:	e2870f8b 	add	r0, r7, #556	; 0x22c
         536dc:	e3a03000 	mov	r3, #0	; 0x0
         536e0:	e3a020b8 	mov	r2, #184	; 0xb8
         536e4:	eb6e1980 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         536e8:	e1a08000 	mov	r8, r0
         536ec:	e1a00005 	mov	r0, r5
         536f0:	eb6b8d1d 	bl	1b36b6c <TCardAsyncMsg::$Free(void)>
         536f4:	e1a00006 	mov	r0, r6
         536f8:	eb6e29f3 	bl	1bddecc <$VccOff(int)>
         536fc:	ea000012 	b	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         53700:	e5b5300c 	ldr	r3, [r5, #12]!
         53704:	e3330000 	teq	r3, #0	; 0x0
         53708:	03a02002 	moveq	r2, #2	; 0x2
         5370c:	13a02003 	movne	r2, #3	; 0x3
         53710:	e92d0008 	stmdb	sp!, {r3}
         53714:	e2871f8f 	add	r1, r7, #572	; 0x23c
         53718:	e1a05001 	mov	r5, r1
         5371c:	e1a03006 	mov	r3, r6
         53720:	e1a00004 	mov	r0, r4
         53724:	eb6b9536 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         53728:	e28dd004 	add	sp, sp, #4	; 0x4
         5372c:	e1a01005 	mov	r1, r5
         53730:	e2870f8b 	add	r0, r7, #556	; 0x22c
         53734:	e3a03000 	mov	r3, #0	; 0x0
         53738:	e3a020b8 	mov	r2, #184	; 0xb8
         5373c:	eb6e196a 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         53740:	e1a08000 	mov	r8, r0
         53744:	e1a00005 	mov	r0, r5
         53748:	eb6b8d07 	bl	1b36b6c <TCardAsyncMsg::$Free(void)>
         5374c:	e3380000 	teq	r8, #0	; 0x0
         53750:	0a000009 	beq	5377c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x96c>
         53754:	e3a03000 	mov	r3, #0	; 0x0
         53758:	e3a02000 	mov	r2, #0	; 0x0
         5375c:	e1a01008 	mov	r1, r8
         53760:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         53764:	e1a03006 	mov	r3, r6
         53768:	e1a00004 	mov	r0, r4
         5376c:	e3a02003 	mov	r2, #3	; 0x3
         53770:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         53774:	eb6b9528 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         53778:	e28dd00c 	add	sp, sp, #12	; 0xc
         5377c:	e1a00008 	mov	r0, r8
         53780:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         53784:	eb6b951e 	bl	1b38c04 <TCardServer::$ReplyMessage(TCardMessage *, unsigned long, unsigned long, unsigned long)>
         53788:	e28dd004 	add	sp, sp, #4	; 0x4
         5378c:	eaffffee 	b	5374c <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x93c>
         53790:	e3a03000 	mov	r3, #0	; 0x0
         53794:	e92d0008 	stmdb	sp!, {r3}
         53798:	e1a03006 	mov	r3, r6
         5379c:	e1a01005 	mov	r1, r5
         537a0:	e1a00004 	mov	r0, r4
         537a4:	e3a02002 	mov	r2, #2	; 0x2
         537a8:	eafffff5 	b	53784 <TCardServer::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x974>
    */
}

/**
 * Symbol: TCardServer::DoSysEventPowerOff(TAEvent *)
 * Address: 000537ac
 */
TCardServer::DoSysEventPowerOff(TAEvent *) {
    /*
         537ac:	e1a0c00d 	mov	ip, sp
         537b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         537b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         537b8:	e1a04000 	mov	r4, r0
         537bc:	e3a00000 	mov	r0, #0	; 0x0
         537c0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         537c4:	e52d006c 	str	r0, [sp, -#108]!
         537c8:	e28d0008 	add	r0, sp, #8	; 0x8
         537cc:	eb6d7c68 	bl	1bb2974 <$setjmp>
         537d0:	e3300000 	teq	r0, #0	; 0x0
         537d4:	1a000016 	bne	53834 <TCardServer::DoSysEventPowerOff(TAEvent *)+0x88>
         537d8:	e1a0000d 	mov	r0, sp
         537dc:	eb6e3226 	bl	1be007c <$AddExceptionHandler>
         537e0:	e3a05000 	mov	r5, #0	; 0x0
         537e4:	e59f7040 	ldr	r7, [pc, #40]	; 5382c <TCardServer::DoSysEventPowerOff(TAEvent *)+0x80>	; fField40
         537e8:	e5970038 	ldr	r0, [r7, #56]	; fField56
         537ec:	e3500000 	cmp	r0, #0	; 0x0
         537f0:	9a000019 	bls	5385c <TCardServer::DoSysEventPowerOff(TAEvent *)+0xb0>
         537f4:	e59f6034 	ldr	r6, [pc, #34]	; 53830 <TCardServer::DoSysEventPowerOff(TAEvent *)+0x84>
         537f8:	e7960105 	ldr	r0, [r6, r5, lsl #2]	; fField2
         537fc:	e590000c 	ldr	r0, [r0, #12]
         53800:	e3300000 	teq	r0, #0	; 0x0
         53804:	0a000001 	beq	53810 <TCardServer::DoSysEventPowerOff(TAEvent *)+0x64>
         53808:	eb0ccaf1 	bl	3863d4 <TCardHandler::SuspendServices(void)>
         5380c:	e58d006c 	str	r0, [sp, #108]
         53810:	e1a00005 	mov	r0, r5
         53814:	eb6b9d46 	bl	1b3ad34 <$VccIdleOff(unsigned long)>
         53818:	e2855001 	add	r5, r5, #1	; 0x1
         5381c:	e5970038 	ldr	r0, [r7, #56]	; fField56
         53820:	e1550000 	cmp	r5, r0
         53824:	3afffff3 	bcc	537f8 <TCardServer::DoSysEventPowerOff(TAEvent *)+0x4c>
         53828:	ea00000b 	b	5385c <TCardServer::DoSysEventPowerOff(TAEvent *)+0xb0>
         5382c:	0c100a7c 	ldceq	10, cr0, [r0], -#496
         53830:	0c105fe4 	ldceq	15, cr5, [r0], -#912
         53834:	e59d0060 	ldr	r0, [sp, #96]
         53838:	e28f1f0e 	add	r1, pc, #56	; 0x38
         5383c:	eb6e3e54 	bl	1be3194 <$Subexception>
         53840:	e3300000 	teq	r0, #0	; 0x0
         53844:	13a000b5 	movne	r0, #181	; 0xb5
         53848:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         5384c:	158d006c 	strne	r0, [sp, #108]
         53850:	1a000001 	bne	5385c <TCardServer::DoSysEventPowerOff(TAEvent *)+0xb0>
         53854:	e1a0000d 	mov	r0, sp
         53858:	eb6e3a3d 	bl	1be2154 <$NextHandler>
         5385c:	e1a0000d 	mov	r0, sp
         53860:	eb6e3614 	bl	1be10b8 <$ExitHandler>
         53864:	e28dd06c 	add	sp, sp, #108	; 0x6c
         53868:	e2840a01 	add	r0, r4, #4096	; 0x1000
         5386c:	e5900a28 	ldr	r0, [r0, #2600]
         53870:	eb6b94e4 	bl	1b38c08 <TCardSystemEventHandler::$ReplyPowerOff(void)>
         53874:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         53878:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TCardServer::DoSysEventPowerOn(TAEvent *)
 * Address: 0005387c
 */
TCardServer::DoSysEventPowerOn(TAEvent *) {
    /*
         5387c:	e1a0c00d 	mov	ip, sp
         53880:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         53884:	e24cb004 	sub	fp, ip, #4	; 0x4
         53888:	e3a00000 	mov	r0, #0	; 0x0
         5388c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         53890:	e52d006c 	str	r0, [sp, -#108]!
         53894:	e28d0008 	add	r0, sp, #8	; 0x8
         53898:	eb6d7c35 	bl	1bb2974 <$setjmp>
         5389c:	e3300000 	teq	r0, #0	; 0x0
         538a0:	1a00001a 	bne	53910 <TCardServer::DoSysEventPowerOn(TAEvent *)+0x94>
         538a4:	e1a0000d 	mov	r0, sp
         538a8:	eb6e31f3 	bl	1be007c <$AddExceptionHandler>
         538ac:	e3a04000 	mov	r4, #0	; 0x0
         538b0:	e59f704c 	ldr	r7, [pc, #4c]	; 53904 <TCardServer::DoSysEventPowerOn(TAEvent *)+0x88>	; fField4
         538b4:	e5970038 	ldr	r0, [r7, #56]	; fField56
         538b8:	e3500000 	cmp	r0, #0	; 0x0
         538bc:	9a00001d 	bls	53938 <TCardServer::DoSysEventPowerOn(TAEvent *)+0xbc>
         538c0:	e59f6040 	ldr	r6, [pc, #40]	; 53908 <TCardServer::DoSysEventPowerOn(TAEvent *)+0x8c>	; fField40
         538c4:	e59f5040 	ldr	r5, [pc, #40]	; 5390c <TCardServer::DoSysEventPowerOn(TAEvent *)+0x90>	; fField40
         538c8:	e1a00004 	mov	r0, r4
         538cc:	eb6eeb9b 	bl	1c0e740 <$RestoreCardPower(unsigned long)>
         538d0:	e7961104 	ldr	r1, [r6, r4, lsl #2]	; fField2
         538d4:	e591000c 	ldr	r0, [r1, #12]
         538d8:	e3300000 	teq	r0, #0	; 0x0
         538dc:	0a000003 	beq	538f0 <TCardServer::DoSysEventPowerOn(TAEvent *)+0x74>
         538e0:	e9b1000c 	ldmib	r1!, {r2, r3}
         538e4:	e7951104 	ldr	r1, [r5, r4, lsl #2]	; fField2
         538e8:	eb0ccabc 	bl	3863e0 <TCardHandler::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)>
         538ec:	e58d006c 	str	r0, [sp, #108]
         538f0:	e2844001 	add	r4, r4, #1	; 0x1
         538f4:	e5970038 	ldr	r0, [r7, #56]	; fField56
         538f8:	e1540000 	cmp	r4, r0
         538fc:	3afffff1 	bcc	538c8 <TCardServer::DoSysEventPowerOn(TAEvent *)+0x4c>
         53900:	ea00000c 	b	53938 <TCardServer::DoSysEventPowerOn(TAEvent *)+0xbc>
         53904:	0c100a7c 	ldceq	10, cr0, [r0], -#496
         53908:	0c105fe4 	ldceq	15, cr5, [r0], -#912
         5390c:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         53910:	e59d0060 	ldr	r0, [sp, #96]
         53914:	e28f1f0b 	add	r1, pc, #44	; 0x2c
         53918:	eb6e3e1d 	bl	1be3194 <$Subexception>
         5391c:	e3300000 	teq	r0, #0	; 0x0
         53920:	13a000b5 	movne	r0, #181	; 0xb5
         53924:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         53928:	158d006c 	strne	r0, [sp, #108]
         5392c:	1a000001 	bne	53938 <TCardServer::DoSysEventPowerOn(TAEvent *)+0xbc>
         53930:	e1a0000d 	mov	r0, sp
         53934:	eb6e3a06 	bl	1be2154 <$NextHandler>
         53938:	e1a0000d 	mov	r0, sp
         5393c:	eb6e35dd 	bl	1be10b8 <$ExitHandler>
         53940:	e5bd006c 	ldr	r0, [sp, #108]!
         53944:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         53948:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TCardServer::__dt(void)
 * Address: 0005455c
 */
TCardServer::~TCardServer(void) {
    /*
         5455c:	e1a0c00d 	mov	ip, sp
         54560:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         54564:	e24cb004 	sub	fp, ip, #4	; 0x4
         54568:	e1a04000 	mov	r4, r0
         5456c:	e1a05001 	mov	r5, r1
         54570:	e59f00c4 	ldr	r0, [pc, #c4]	; 5463c <TCardServer::__dt(void)+0xe0>
         54574:	e5840000 	str	r0, [r4]
         54578:	e2840f71 	add	r0, r4, #452	; 0x1c4
         5457c:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         54580:	e3a01000 	mov	r1, #0	; 0x0
         54584:	eb6de861 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         54588:	e2840e9b 	add	r0, r4, #2480	; 0x9b0
         5458c:	e2800a02 	add	r0, r0, #8192	; 0x2000
         54590:	e3a01000 	mov	r1, #0	; 0x0
         54594:	eb6de85d 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         54598:	e2840f6a 	add	r0, r4, #424	; 0x1a8
         5459c:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         545a0:	e3a01000 	mov	r1, #0	; 0x0
         545a4:	eb6de85e 	bl	1bce724 <TUObject::$__dt(void)>
         545a8:	e2840f4b 	add	r0, r4, #300	; 0x12c
         545ac:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         545b0:	e3a01000 	mov	r1, #0	; 0x0
         545b4:	eb6de851 	bl	1bce700 <TPartHandler::$__dt(void)>
         545b8:	e2841f4f 	add	r1, r4, #316	; 0x13c
         545bc:	e2811b06 	add	r1, r1, #6144	; 0x1800
         545c0:	e284003c 	add	r0, r4, #60	; 0x3c
         545c4:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         545c8:	e59f3070 	ldr	r3, [pc, #70]	; 54640 <TCardServer::__dt(void)+0xe4>
         545cc:	e3e020ef 	mvn	r2, #239	; 0xef
         545d0:	eb66c32c 	bl	1a05288 <$__vc__FPvT1iPFPvi_v>
         545d4:	e2840f83 	add	r0, r4, #524	; 0x20c
         545d8:	e2800b06 	add	r0, r0, #6144	; 0x1800
         545dc:	e3a01000 	mov	r1, #0	; 0x0
         545e0:	eb6e4327 	bl	1be5284 <CList::$__dt(void)>
         545e4:	e2441040 	sub	r1, r4, #64	; 0x40
         545e8:	e2840d65 	add	r0, r4, #6464	; 0x1940
         545ec:	e59f3050 	ldr	r3, [pc, #50]	; 54644 <TCardServer::__dt(void)+0xe8>
         545f0:	e3e020cb 	mvn	r2, #203	; 0xcb
         545f4:	eb66c323 	bl	1a05288 <$__vc__FPvT1iPFPvi_v>
         545f8:	e2840080 	add	r0, r4, #128	; 0x80
         545fc:	e3a01000 	mov	r1, #0	; 0x0
         54600:	eb6de847 	bl	1bce724 <TUObject::$__dt(void)>
         54604:	e2840078 	add	r0, r4, #120	; 0x78
         54608:	e3a01000 	mov	r1, #0	; 0x0
         5460c:	eb6de844 	bl	1bce724 <TUObject::$__dt(void)>
         54610:	e2840070 	add	r0, r4, #112	; 0x70
         54614:	e3a01000 	mov	r1, #0	; 0x0
         54618:	eb6de841 	bl	1bce724 <TUObject::$__dt(void)>
         5461c:	e1a00004 	mov	r0, r4
         54620:	e3a01000 	mov	r1, #0	; 0x0
         54624:	eb6e431b 	bl	1be5298 <TAppWorld::$__dt(void)>
         54628:	e3150001 	tst	r5, #1	; 0x1
         5462c:	11a00004 	movne	r0, r4
         54630:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         54634:	1a6de429 	bne	1bcd6e0 <$__dl(void *)>
         54638:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5463c:	0001b150 	andeq	fp, r1, r0, asr r1
         54640:	0038bd30 	eoreqs	fp, r8, r0, lsr sp
         54644:	0038b728 	eoreqs	fp, r8, r8, lsr #14
    */
}

/**
 * Symbol: TCardServer::MainConstructor(void)
 * Address: 00054648
 */
TCardServer::MainConstructor(void) {
    /*
         54648:	e1a0c00d 	mov	ip, sp
         5464c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         54650:	e24cb004 	sub	fp, ip, #4	; 0x4
         54654:	e1a04000 	mov	r4, r0
         54658:	e24dd010 	sub	sp, sp, #16	; 0x10
         5465c:	e59fa18c 	ldr	sl, [pc, #18c]	; 547f0 <TCardServer::MainConstructor(void)+0x1a8>
         54660:	e58a0000 	str	r0, [sl]
         54664:	eb6d6424 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
         54668:	e1b05000 	movs	r5, r0
         5466c:	1a000142 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         54670:	e2845070 	add	r5, r4, #112	; 0x70
         54674:	e1a06005 	mov	r6, r5
         54678:	e1a00004 	mov	r0, r4
         5467c:	eb6e4f6e 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         54680:	e5901000 	ldr	r1, [r0]
         54684:	e1a00006 	mov	r0, r6
         54688:	eb6df06e 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         5468c:	e2840078 	add	r0, r4, #120	; 0x78
         54690:	e3a06000 	mov	r6, #0	; 0x0
         54694:	e1a01006 	mov	r1, r6
         54698:	eb6df06a 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         5469c:	e5950000 	ldr	r0, [r5]
         546a0:	eb6ac312 	bl	1b052f0 <$SetCardServerPort__12TCardDomainsSFUl>
         546a4:	e59f0148 	ldr	r0, [pc, #148]	; 547f4 <TCardServer::MainConstructor(void)+0x1ac>
         546a8:	e5900000 	ldr	r0, [r0]
         546ac:	e5100014 	ldr	r0, [r0, -#20]	; fField20
         546b0:	e58a0004 	str	r0, [sl, #4]	; fField4
         546b4:	e1a00006 	mov	r0, r6
         546b8:	e2846a01 	add	r6, r4, #4096	; 0x1000
         546bc:	e5860a24 	str	r0, [r6, #2596]
         546c0:	e3a00000 	mov	r0, #0	; 0x0
         546c4:	eb6b84fb 	bl	1b35ab8 <TCardEventHandler::$__ct(void)>
         546c8:	e5840088 	str	r0, [r4, #136]	; fField136
         546cc:	e3300000 	teq	r0, #0	; 0x0
         546d0:	0a000056 	beq	54830 <TCardServer::MainConstructor(void)+0x1e8>
         546d4:	e1a01004 	mov	r1, r4
         546d8:	eb6b8d31 	bl	1b37ba4 <TCardEventHandler::$Init(TCardServer *)>
         546dc:	e1b05000 	movs	r5, r0
         546e0:	1a000125 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         546e4:	e3a00000 	mov	r0, #0	; 0x0
         546e8:	eb6b84f3 	bl	1b35abc <TCardSystemEventHandler::$__ct(void)>
         546ec:	e5a60a28 	str	r0, [r6, #2600]!
         546f0:	e3300000 	teq	r0, #0	; 0x0
         546f4:	0a00004d 	beq	54830 <TCardServer::MainConstructor(void)+0x1e8>
         546f8:	e1a01004 	mov	r1, r4
         546fc:	eb6b8d29 	bl	1b37ba8 <TCardSystemEventHandler::$Init(TCardServer *)>
         54700:	e1b05000 	movs	r5, r0
         54704:	1a00011c 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         54708:	e3a07000 	mov	r7, #0	; 0x0
         5470c:	e3a06000 	mov	r6, #0	; 0x0
         54710:	e0670207 	rsb	r0, r7, r7, lsl #4
         54714:	e0848300 	add	r8, r4, r0, lsl #6
         54718:	e0660206 	rsb	r0, r6, r6, lsl #4
         5471c:	e0880200 	add	r0, r8, r0, lsl #4
         54720:	e2800f8b 	add	r0, r0, #556	; 0x22c
         54724:	e2800b06 	add	r0, r0, #6144	; 0x1800
         54728:	eb6b8d1c 	bl	1b37ba0 <TNewCardAsyncMsg::$Init(void)>
         5472c:	e1b05000 	movs	r5, r0
         54730:	1a000111 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         54734:	e2866001 	add	r6, r6, #1	; 0x1
         54738:	e3560004 	cmp	r6, #4	; 0x4
         5473c:	3afffff5 	bcc	54718 <TCardServer::MainConstructor(void)+0xd0>
         54740:	e2877001 	add	r7, r7, #1	; 0x1
         54744:	e3570004 	cmp	r7, #4	; 0x4
         54748:	3affffef 	bcc	5470c <TCardServer::MainConstructor(void)+0xc4>
         5474c:	e3a06000 	mov	r6, #0	; 0x0
         54750:	e0860206 	add	r0, r6, r6, lsl #4
         54754:	e0800080 	add	r0, r0, r0, lsl #1
         54758:	e0847100 	add	r7, r4, r0, lsl #2
         5475c:	e287008c 	add	r0, r7, #140	; 0x8c
         54760:	eb6b8d0b 	bl	1b37b94 <TCardAsyncMsg::$Init(void)>
         54764:	e1b05000 	movs	r5, r0
         54768:	e5970144 	ldr	r0, [r7, #324]	; fField324
         5476c:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         54770:	e5a70144 	str	r0, [r7, #324]!	; fField324
         54774:	1a000100 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         54778:	e2866001 	add	r6, r6, #1	; 0x1
         5477c:	e3560020 	cmp	r6, #32	; 0x20
         54780:	3afffff2 	bcc	54750 <TCardServer::MainConstructor(void)+0x108>
         54784:	eb6b9973 	bl	1b3ad58 <$ClassInfo__11TCHMemModemSFv>
         54788:	eb6e112b 	bl	1bd8c3c <TClassInfo::$Register( const(void))>
         5478c:	eb6b88e9 	bl	1b36b38 <$ClassInfo__13TFlashSeries2SFv>
         54790:	eb6e1129 	bl	1bd8c3c <TClassInfo::$Register( const(void))>
         54794:	eb6b9970 	bl	1b3ad5c <$ClassInfo__9TFlashAMDSFv>
         54798:	eb6e1127 	bl	1bd8c3c <TClassInfo::$Register( const(void))>
         5479c:	eb6b9136 	bl	1b38c7c <$ClassInfo__10TATASimpleSFv>
         547a0:	eb6e1125 	bl	1bd8c3c <TClassInfo::$Register( const(void))>
         547a4:	e3a07000 	mov	r7, #0	; 0x0
         547a8:	e59f0048 	ldr	r0, [pc, #48]	; 547f8 <TCardServer::MainConstructor(void)+0x1b0>
         547ac:	e58d000c 	str	r0, [sp, #12]
         547b0:	e59f1044 	ldr	r1, [pc, #44]	; 547fc <TCardServer::MainConstructor(void)+0x1b4>	; fField44
         547b4:	e58d1008 	str	r1, [sp, #8]	; fField8
         547b8:	e59f1040 	ldr	r1, [pc, #40]	; 54800 <TCardServer::MainConstructor(void)+0x1b8>	; fField40
         547bc:	e58d1004 	str	r1, [sp, #4]	; fField4
         547c0:	e59f903c 	ldr	r9, [pc, #3c]	; 54804 <TCardServer::MainConstructor(void)+0x1bc>
         547c4:	e1a01007 	mov	r1, r7
         547c8:	e3a00000 	mov	r0, #0	; 0x0
         547cc:	eb6ddfa5 	bl	1bcc668 <TCardSocket::$__ct(unsigned long)>
         547d0:	e1a06000 	mov	r6, r0
         547d4:	eb6ba1a4 	bl	1b3ce6c <TCardSocket::$Init(void)>
         547d8:	e3300000 	teq	r0, #0	; 0x0
         547dc:	0a000009 	beq	54808 <TCardServer::MainConstructor(void)+0x1c0>
         547e0:	e1b00006 	movs	r0, r6
         547e4:	13a01001 	movne	r1, #1	; 0x1
         547e8:	1b6de3bf 	blne	1bcd6ec <TCardSocket::$__dt(void)>
         547ec:	ea000063 	b	54980 <TCardServer::MainConstructor(void)+0x338>
         547f0:	0c100a7c 	ldceq	10, cr0, [r0], -#496
         547f4:	0c10105c 	ldceq	0, cr1, [r0], -#368
         547f8:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         547fc:	0c105fe4 	ldceq	15, cr5, [r0], -#912
         54800:	0c101178 	ldfeqs	f1, [r0], -#480
         54804:	0c1011a8 	ldfeqs	f1, [r0], -#672
         54808:	e59d000c 	ldr	r0, [sp, #12]
         5480c:	e7806107 	str	r6, [r0, r7, lsl #2]	; fField2
         54810:	e3360000 	teq	r6, #0	; 0x0
         54814:	0a000005 	beq	54830 <TCardServer::MainConstructor(void)+0x1e8>
         54818:	e3a00000 	mov	r0, #0	; 0x0
         5481c:	eb6b84a3 	bl	1b35ab0 <TCardSocketState::$__ct(void)>
         54820:	e1b08000 	movs	r8, r0
         54824:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         54828:	e7810107 	str	r0, [r1, r7, lsl #2]	; fField2
         5482c:	1a000002 	bne	5483c <TCardServer::MainConstructor(void)+0x1f4>
         54830:	e3a050e9 	mov	r5, #233	; 0xe9
         54834:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
         54838:	ea0000cf 	b	54b7c <TCardServer::MainConstructor(void)+0x534>
         5483c:	e1a00008 	mov	r0, r8
         54840:	eb6b8cd5 	bl	1b37b9c <TCardSocketState::$Init(void)>
         54844:	e1b05000 	movs	r5, r0
         54848:	1a0000cb 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         5484c:	e3a03000 	mov	r3, #0	; 0x0
         54850:	e92d0008 	stmdb	sp!, {r3}
         54854:	e1a00006 	mov	r0, r6
         54858:	eb6deff4 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         5485c:	e1a05000 	mov	r5, r0
         54860:	e1a00006 	mov	r0, r6
         54864:	eb6ee7a9 	bl	1c0e710 <TCardSocket::$SocketBaseAddr(void)>
         54868:	e0450000 	sub	r0, r5, r0
         5486c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         54870:	e7911107 	ldr	r1, [r1, r7, lsl #2]	; fField2
         54874:	e0801001 	add	r1, r0, r1
         54878:	e2880f7d 	add	r0, r8, #500	; 0x1f4
         5487c:	e3a03000 	mov	r3, #0	; 0x0
         54880:	e3a02301 	mov	r2, #67108864	; 0x4000000
         54884:	e58d0004 	str	r0, [sp, #4]	; fField4
         54888:	eb6e048b 	bl	1bd5abc <TUPhys::$Init(unsigned long, unsigned long, unsigned char, unsigned char)>
         5488c:	e28dd004 	add	sp, sp, #4	; 0x4
         54890:	e1b05000 	movs	r5, r0
         54894:	1a0000b8 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         54898:	e1a00007 	mov	r0, r7
         5489c:	eb6ae7a4 	bl	1b0e734 <$ClientDomain__12TCardDomainsSFUl>
         548a0:	e588020c 	str	r0, [r8, #524]
         548a4:	e3300000 	teq	r0, #0	; 0x0
         548a8:	0a0000b3 	beq	54b7c <TCardServer::MainConstructor(void)+0x534>
         548ac:	e1a00006 	mov	r0, r6
         548b0:	eb6df407 	bl	1bd18d4 <TCardSocket::$EnableSocketAccess(void)>
         548b4:	e59d0000 	ldr	r0, [sp]
         548b8:	e5902000 	ldr	r2, [r0]
         548bc:	e7991107 	ldr	r1, [r9, r7, lsl #2]	; fField2
         548c0:	e3a03000 	mov	r3, #0	; 0x0
         548c4:	e598020c 	ldr	r0, [r8, #524]
         548c8:	eb6e14fc 	bl	1bd9cc0 <$RememberPhysMap__15TUDomainManagerSFUlN21Uc>
         548cc:	e1b05000 	movs	r5, r0
         548d0:	1a0000a9 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         548d4:	e7991107 	ldr	r1, [r9, r7, lsl #2]	; fField2
         548d8:	e3a03003 	mov	r3, #3	; 0x3
         548dc:	e3a02301 	mov	r2, #67108864	; 0x4000000
         548e0:	e5b8020c 	ldr	r0, [r8, #524]!
         548e4:	eb6e14f3 	bl	1bd9cb8 <$RememberPermMap__15TUDomainManagerSFUlN214Perm>
         548e8:	e1b05000 	movs	r5, r0
         548ec:	1a0000a2 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         548f0:	e1a00006 	mov	r0, r6
         548f4:	eb6ee785 	bl	1c0e710 <TCardSocket::$SocketBaseAddr(void)>
         548f8:	e1a01000 	mov	r1, r0
         548fc:	e1a00006 	mov	r0, r6
         54900:	e3a02303 	mov	r2, #201326592	; 0xc000000
         54904:	eb6b94f3 	bl	1b39cd8 <TCardSocket::$MakeSocketInaccessible(unsigned long, unsigned long)>
         54908:	e1b05000 	movs	r5, r0
         5490c:	1a00009a 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         54910:	e7991107 	ldr	r1, [r9, r7, lsl #2]	; fField2
         54914:	e1a00006 	mov	r0, r6
         54918:	e3a02301 	mov	r2, #67108864	; 0x4000000
         5491c:	eb6b94ed 	bl	1b39cd8 <TCardSocket::$MakeSocketInaccessible(unsigned long, unsigned long)>
         54920:	e1b05000 	movs	r5, r0
         54924:	1a000094 	bne	54b7c <TCardServer::MainConstructor(void)+0x534>
         54928:	eb6b990a 	bl	1b3ad58 <$ClassInfo__11TCHMemModemSFv>
         5492c:	e1a02000 	mov	r2, r0
         54930:	e1a01007 	mov	r1, r7
         54934:	e1a00004 	mov	r0, r4
         54938:	eb6b90cb 	bl	1b38c6c <TCardServer::$AddCardHandler(unsigned long, TClassInfo const *)>
         5493c:	e1a00006 	mov	r0, r6
         54940:	eb6e35f5 	bl	1be211c <$LockPtr>
         54944:	e1a03004 	mov	r3, r4
         54948:	e59f50ac 	ldr	r5, [pc, #ac]	; 549fc <TCardServer::MainConstructor(void)+0x3b4>
         5494c:	e1a02005 	mov	r2, r5
         54950:	e1a00006 	mov	r0, r6
         54954:	e3a01002 	mov	r1, #2	; 0x2
         54958:	eb6e14c9 	bl	1bd9c84 <TCardSocket::$RegisterSocketInterrupt(TSocketInt, long (*)(void *, TCardSocket *), void *)>
         5495c:	e1a03004 	mov	r3, r4
         54960:	e1a02005 	mov	r2, r5
         54964:	e1a00006 	mov	r0, r6
         54968:	e3a01003 	mov	r1, #3	; 0x3
         5496c:	eb6e14c4 	bl	1bd9c84 <TCardSocket::$RegisterSocketInterrupt(TSocketInt, long (*)(void *, TCardSocket *), void *)>
         54970:	e2877001 	add	r7, r7, #1	; 0x1
         54974:	e58a7038 	str	r7, [sl, #56]	; fField56
         54978:	e3570004 	cmp	r7, #4	; 0x4
         5497c:	3affff90 	bcc	547c4 <TCardServer::MainConstructor(void)+0x17c>
         54980:	e24dd018 	sub	sp, sp, #24	; 0x18
         54984:	e28d0008 	add	r0, sp, #8	; 0x8
         54988:	eb6de33e 	bl	1bcd688 <TUNameServer::$__ct(void)>
         5498c:	e28d3004 	add	r3, sp, #4	; 0x4
         54990:	e92d0008 	stmdb	sp!, {r3}
         54994:	e28d3004 	add	r3, sp, #4	; 0x4
         54998:	e28d000c 	add	r0, sp, #12	; 0xc
         5499c:	e28f2f17 	add	r2, pc, #92	; 0x5c
         549a0:	e28f1f18 	add	r1, pc, #96	; 0x60
         549a4:	eb6e086c 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
         549a8:	e28dd004 	add	sp, sp, #4	; 0x4
         549ac:	e1b05000 	movs	r5, r0
         549b0:	1a00003d 	bne	54aac <TCardServer::MainConstructor(void)+0x464>
         549b4:	e2840f6a 	add	r0, r4, #424	; 0x1a8
         549b8:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         549bc:	e59d1000 	ldr	r1, [sp]
         549c0:	eb6defa0 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         549c4:	e2845a02 	add	r5, r4, #8192	; 0x2000
         549c8:	e59509d8 	ldr	r0, [r5, #2520]	; fField2520
         549cc:	e3c00103 	bic	r0, r0, #-1073741824	; 0xc0000000
         549d0:	e58509d8 	str	r0, [r5, #2520]	; fField2520
         549d4:	e3a00019 	mov	r0, #25	; 0x19
         549d8:	e5c509dc 	strb	r0, [r5, #2524]	; fField2524
         549dc:	e3a00000 	mov	r0, #0	; 0x0
         549e0:	eb6b842f 	bl	1b35aa4 <TCardAlertEvent::$__ct(void)>
         549e4:	e58509c0 	str	r0, [r5, #2496]	; fField2496
         549e8:	e3300000 	teq	r0, #0	; 0x0
         549ec:	1a000007 	bne	54a10 <TCardServer::MainConstructor(void)+0x3c8>
         549f0:	e3a050e9 	mov	r5, #233	; 0xe9
         549f4:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
         549f8:	ea00002b 	b	54aac <TCardServer::MainConstructor(void)+0x464>
         549fc:	01b3ad4c 	moveqs	sl, ip, asr #26
         54a00:	5455506f 	ldrplb	r5, [r5], -#111	; fField111
         54a04:	72740000 	rsbvcs	r0, r4, #0	; 0x0
         54a08:	616c7274 	cmnvs	ip, r4, ror r2
         54a0c:	00000000 	andeq	r0, r0, r0
         54a10:	e3a00000 	mov	r0, #0	; 0x0
         54a14:	eb6b8422 	bl	1b35aa4 <TCardAlertEvent::$__ct(void)>
         54a18:	e58509d4 	str	r0, [r5, #2516]	; fField2516
         54a1c:	e3300000 	teq	r0, #0	; 0x0
         54a20:	0afffff2 	beq	549f0 <TCardServer::MainConstructor(void)+0x3a8>
         54a24:	e59509c0 	ldr	r0, [r5, #2496]	; fField2496
         54a28:	e5900010 	ldr	r0, [r0, #16]	; fField16
         54a2c:	e1a02004 	mov	r2, r4
         54a30:	e59f1088 	ldr	r1, [pc, #88]	; 54ac0 <TCardServer::MainConstructor(void)+0x478>
         54a34:	eb6b8c5c 	bl	1b37bac <$Init__24TCardReinsertAlertDialogFPFPvUlT1_UcPv>
         54a38:	e5b509d4 	ldr	r0, [r5, #2516]!	; fField2516
         54a3c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         54a40:	e1a02004 	mov	r2, r4
         54a44:	e59f1078 	ldr	r1, [pc, #78]	; 54ac4 <TCardServer::MainConstructor(void)+0x47c>
         54a48:	eb6b9499 	bl	1b39cb4 <$Init__24TCardPositionAlertDialogFPFPvUlT1_UcPv>
         54a4c:	e2840e9b 	add	r0, r4, #2480	; 0x9b0
         54a50:	e2800a02 	add	r0, r0, #8192	; 0x2000
         54a54:	e3a01001 	mov	r1, #1	; 0x1
         54a58:	eb6e040d 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         54a5c:	e1b05000 	movs	r5, r0
         54a60:	1a000011 	bne	54aac <TCardServer::MainConstructor(void)+0x464>
         54a64:	e2840f71 	add	r0, r4, #452	; 0x1c4
         54a68:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         54a6c:	e3a01001 	mov	r1, #1	; 0x1
         54a70:	eb6e0407 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         54a74:	e1b05000 	movs	r5, r0
         54a78:	1a00000b 	bne	54aac <TCardServer::MainConstructor(void)+0x464>
         54a7c:	e2842f5a 	add	r2, r4, #360	; 0x168
         54a80:	e2822b0a 	add	r2, r2, #10240	; 0x2800
         54a84:	e2840f4b 	add	r0, r4, #300	; 0x12c
         54a88:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         54a8c:	e1a03004 	mov	r3, r4
         54a90:	e59f1030 	ldr	r1, [pc, #30]	; 54ac8 <TCardServer::MainConstructor(void)+0x480>
         54a94:	eb6b8c3f 	bl	1b37b98 <TCardPartHandler::$Init(unsigned long, char *, unsigned long)>
         54a98:	e1b05000 	movs	r5, r0
         54a9c:	1a000002 	bne	54aac <TCardServer::MainConstructor(void)+0x464>
         54aa0:	eb6b8c47 	bl	1b37bc4 <$InitVppManager(void)>
         54aa4:	e1b05000 	movs	r5, r0
         54aa8:	0a000007 	beq	54acc <TCardServer::MainConstructor(void)+0x484>
         54aac:	e28d0008 	add	r0, sp, #8	; 0x8
         54ab0:	e3a01000 	mov	r1, #0	; 0x0
         54ab4:	eb6de712 	bl	1bce704 <TUNameServer::$__dt(void)>
         54ab8:	e28dd018 	add	sp, sp, #24	; 0x18
         54abc:	ea00002e 	b	54b7c <TCardServer::MainConstructor(void)+0x534>
         54ac0:	01b35adc 	ldreqsb	r5, [r3, ip]!
         54ac4:	01b38c70 	moveqs	r8, r0, ror ip
         54ac8:	6364686c 	cmnvs	r4, #7077888	; 0x6c0000
         54acc:	e1a00004 	mov	r0, r4
         54ad0:	eb6b8c3a 	bl	1b37bc0 <TCardServer::$InitializePCMCIABus(void)>
         54ad4:	e24dd084 	sub	sp, sp, #132	; 0x84
         54ad8:	e1a0000d 	mov	r0, sp
         54adc:	eb6b9897 	bl	1b3ad40 <TCardProcessor::$__ct(void)>
         54ae0:	e1a0000d 	mov	r0, sp
         54ae4:	e3a03e77 	mov	r3, #1904	; 0x770
         54ae8:	e2833a01 	add	r3, r3, #4096	; 0x1000
         54aec:	e3a02001 	mov	r2, #1	; 0x1
         54af0:	e59f1034 	ldr	r1, [pc, #34]	; 54b2c <TCardServer::MainConstructor(void)+0x4e4>
         54af4:	e59dc000 	ldr	ip, [sp]
         54af8:	e1a0e00f 	mov	lr, pc
         54afc:	e28cf044 	add	pc, ip, #68	; 0x44
         54b00:	e1b05000 	movs	r5, r0
         54b04:	0a000009 	beq	54b30 <TCardServer::MainConstructor(void)+0x4e8>
         54b08:	e1a0000d 	mov	r0, sp
         54b0c:	e3a01000 	mov	r1, #0	; 0x0
         54b10:	e1a0e00f 	mov	lr, pc
         54b14:	e59df000 	ldr	pc, [sp]
         54b18:	e28d008c 	add	r0, sp, #140	; 0x8c
         54b1c:	e3a01000 	mov	r1, #0	; 0x0
         54b20:	eb6de6f7 	bl	1bce704 <TUNameServer::$__dt(void)>
         54b24:	e28dd09c 	add	sp, sp, #156	; 0x9c
         54b28:	ea000013 	b	54b7c <TCardServer::MainConstructor(void)+0x534>
         54b2c:	63647072 	cmnvs	r4, #114	; 0x72
         54b30:	e24dd004 	sub	sp, sp, #4	; 0x4
         54b34:	e28d308c 	add	r3, sp, #140	; 0x8c
         54b38:	e92d0008 	stmdb	sp!, {r3}
         54b3c:	e28d3004 	add	r3, sp, #4	; 0x4
         54b40:	e28d0094 	add	r0, sp, #148	; 0x94
         54b44:	e24f2f53 	sub	r2, pc, #332	; 0x14c
         54b48:	e28f1f0d 	add	r1, pc, #52	; 0x34
         54b4c:	eb6e0802 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
         54b50:	e28dd004 	add	sp, sp, #4	; 0x4
         54b54:	e1b05000 	movs	r5, r0
         54b58:	0a00000b 	beq	54b8c <TCardServer::MainConstructor(void)+0x544>
         54b5c:	e28d0004 	add	r0, sp, #4	; 0x4
         54b60:	e3a01000 	mov	r1, #0	; 0x0
         54b64:	e1a0e00f 	mov	lr, pc
         54b68:	e59df004 	ldr	pc, [sp, #4]	; fField4
         54b6c:	e28d0090 	add	r0, sp, #144	; 0x90
         54b70:	e3a01000 	mov	r1, #0	; 0x0
         54b74:	eb6de6e2 	bl	1bce704 <TUNameServer::$__dt(void)>
         54b78:	e28dd0a0 	add	sp, sp, #160	; 0xa0
         54b7c:	e1a00005 	mov	r0, r5
         54b80:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         54b84:	63647072 	cmnvs	r4, #114	; 0x72
         54b88:	00000000 	andeq	r0, r0, r0
         54b8c:	e2840080 	add	r0, r4, #128	; 0x80
         54b90:	e59d1000 	ldr	r1, [sp]
         54b94:	eb6def2b 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         54b98:	e59d00ac 	ldr	r0, [sp, #172]
         54b9c:	e5900000 	ldr	r0, [r0]
         54ba0:	e3e01000 	mvn	r1, #0	; 0x0
         54ba4:	eb6df34b 	bl	1bd18d8 <TCardSocket::$EnableSocketInterrupt(TSocketInt)>
         54ba8:	e28dd004 	add	sp, sp, #4	; 0x4
         54bac:	e1a0000d 	mov	r0, sp
         54bb0:	e3a01000 	mov	r1, #0	; 0x0
         54bb4:	e1a0e00f 	mov	lr, pc
         54bb8:	e59df000 	ldr	pc, [sp]
         54bbc:	e28dd084 	add	sp, sp, #132	; 0x84
         54bc0:	eaffffb9 	b	54aac <TCardServer::MainConstructor(void)+0x464>
    */
}

/**
 * Symbol: TCardServer::MainDestructor(void)
 * Address: 00054bc4
 */
TCardServer::MainDestructor(void) {
    /*
         54bc4:	e1a0c00d 	mov	ip, sp
         54bc8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         54bcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         54bd0:	e1a04000 	mov	r4, r0
         54bd4:	e2800f83 	add	r0, r0, #524	; 0x20c
         54bd8:	e2800b06 	add	r0, r0, #6144	; 0x1800
         54bdc:	e1a06000 	mov	r6, r0
         54be0:	e5901000 	ldr	r1, [r0]
         54be4:	e2411001 	sub	r1, r1, #1	; 0x1
         54be8:	eb6e45d5 	bl	1be6344 <CList::$At(long)>
         54bec:	e1b05000 	movs	r5, r0
         54bf0:	0a000014 	beq	54c48 <TCardServer::MainDestructor(void)+0x84>
         54bf4:	e1a00006 	mov	r0, r6
         54bf8:	e5961000 	ldr	r1, [r6]
         54bfc:	e2411001 	sub	r1, r1, #1	; 0x1
         54c00:	e3a02001 	mov	r2, #1	; 0x1
         54c04:	eb6e5e8a 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         54c08:	e3350000 	teq	r5, #0	; 0x0
         54c0c:	0a000007 	beq	54c30 <TCardServer::MainDestructor(void)+0x6c>
         54c10:	e28500bc 	add	r0, r5, #188	; 0xbc
         54c14:	e3a01000 	mov	r1, #0	; 0x0
         54c18:	eb6de6bc 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         54c1c:	e1a00005 	mov	r0, r5
         54c20:	e3a01000 	mov	r1, #0	; 0x0
         54c24:	eb6de2b3 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
         54c28:	e1a00005 	mov	r0, r5
         54c2c:	eb6de2ab 	bl	1bcd6e0 <$__dl(void *)>
         54c30:	e1a00006 	mov	r0, r6
         54c34:	e5961000 	ldr	r1, [r6]
         54c38:	e2411001 	sub	r1, r1, #1	; 0x1
         54c3c:	eb6e45c0 	bl	1be6344 <CList::$At(long)>
         54c40:	e1b05000 	movs	r5, r0
         54c44:	1affffea 	bne	54bf4 <TCardServer::MainDestructor(void)+0x30>
         54c48:	e3a05000 	mov	r5, #0	; 0x0
         54c4c:	e59f7048 	ldr	r7, [pc, #48]	; 54c9c <TCardServer::MainDestructor(void)+0xd8>
         54c50:	e59f6048 	ldr	r6, [pc, #48]	; 54ca0 <TCardServer::MainDestructor(void)+0xdc>
         54c54:	e7960105 	ldr	r0, [r6, r5, lsl #2]	; fField2
         54c58:	eb6df316 	bl	1bd18b8 <TCardSocket::$DisableSocketAccess(void)>
         54c5c:	e7960105 	ldr	r0, [r6, r5, lsl #2]	; fField2
         54c60:	eb6e3950 	bl	1be31a8 <$UnlockPtr>
         54c64:	e7960105 	ldr	r0, [r6, r5, lsl #2]	; fField2
         54c68:	e3300000 	teq	r0, #0	; 0x0
         54c6c:	13a01001 	movne	r1, #1	; 0x1
         54c70:	1b6de29d 	blne	1bcd6ec <TCardSocket::$__dt(void)>
         54c74:	e7970105 	ldr	r0, [r7, r5, lsl #2]	; fField2
         54c78:	e3300000 	teq	r0, #0	; 0x0
         54c7c:	13a01001 	movne	r1, #1	; 0x1
         54c80:	1b6b8390 	blne	1b35ac8 <TCardSocketState::$__dt(void)>
         54c84:	e2855001 	add	r5, r5, #1	; 0x1
         54c88:	e3550004 	cmp	r5, #4	; 0x4
         54c8c:	3afffff0 	bcc	54c54 <TCardServer::MainDestructor(void)+0x90>
         54c90:	e1a00004 	mov	r0, r4
         54c94:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         54c98:	ea6d6699 	b	1bae704 <TAppWorld::$MainDestructor(void)>
         54c9c:	0c105fe4 	ldceq	15, cr5, [r0], -#912
         54ca0:	0c105fd4 	ldceq	15, cr5, [r0], -#848
    */
}

